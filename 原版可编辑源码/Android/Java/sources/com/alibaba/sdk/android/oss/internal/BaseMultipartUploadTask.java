package com.alibaba.sdk.android.oss.internal;

import android.net.Uri;
import android.os.ParcelFileDescriptor;
import com.alibaba.sdk.android.oss.ClientException;
import com.alibaba.sdk.android.oss.ServiceException;
import com.alibaba.sdk.android.oss.TaskCancelException;
import com.alibaba.sdk.android.oss.callback.OSSCompletedCallback;
import com.alibaba.sdk.android.oss.callback.OSSProgressCallback;
import com.alibaba.sdk.android.oss.common.OSSConstants;
import com.alibaba.sdk.android.oss.common.OSSHeaders;
import com.alibaba.sdk.android.oss.common.OSSLog;
import com.alibaba.sdk.android.oss.common.utils.BinaryUtil;
import com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest;
import com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult;
import com.alibaba.sdk.android.oss.model.MultipartUploadRequest;
import com.alibaba.sdk.android.oss.model.OSSRequest;
import com.alibaba.sdk.android.oss.model.ObjectMetadata;
import com.alibaba.sdk.android.oss.model.PartETag;
import com.alibaba.sdk.android.oss.model.UploadPartRequest;
import com.alibaba.sdk.android.oss.model.UploadPartResult;
import com.alibaba.sdk.android.oss.network.ExecutionContext;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.Callable;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public abstract class BaseMultipartUploadTask<Request extends MultipartUploadRequest, Result extends CompleteMultipartUploadResult> implements Callable<Result> {
    protected final int CPU_SIZE;
    protected final int KEEP_ALIVE_TIME;
    protected final int MAX_CORE_POOL_SIZE;
    protected final int MAX_IMUM_POOL_SIZE;
    protected final int MAX_QUEUE_SIZE;
    protected InternalRequestOperation mApiOperation;
    protected boolean mCheckCRC64;
    protected OSSCompletedCallback<Request, Result> mCompletedCallback;
    protected ExecutionContext mContext;
    protected long mFileLength;
    protected boolean mIsCancel;
    protected long mLastPartSize;
    protected Object mLock;
    protected int[] mPartAttr;
    protected List<PartETag> mPartETags;
    protected int mPartExceptionCount;
    protected ThreadPoolExecutor mPoolExecutor;
    protected OSSProgressCallback<Request> mProgressCallback;
    protected Request mRequest;
    protected int mRunPartTaskCount;
    protected Exception mUploadException;
    protected File mUploadFile;
    protected String mUploadFilePath;
    protected String mUploadId;
    protected Uri mUploadUri;
    protected long mUploadedLength;

    protected abstract void abortThisUpload();

    protected abstract Result doMultipartUpload() throws ServiceException, ClientException, InterruptedException, IOException;

    protected abstract void initMultipartUploadId() throws ServiceException, ClientException, IOException;

    protected void preUploadPart(int i, int i2, int i3) throws Exception {
    }

    protected abstract void processException(Exception exc);

    protected void uploadPartFinish(PartETag partETag) throws Exception {
    }

    public BaseMultipartUploadTask(InternalRequestOperation internalRequestOperation, Request request, OSSCompletedCallback<Request, Result> oSSCompletedCallback, ExecutionContext executionContext) {
        int iAvailableProcessors = Runtime.getRuntime().availableProcessors() * 2;
        this.CPU_SIZE = iAvailableProcessors;
        this.MAX_CORE_POOL_SIZE = iAvailableProcessors >= 5 ? 5 : iAvailableProcessors;
        this.MAX_IMUM_POOL_SIZE = this.CPU_SIZE;
        this.KEEP_ALIVE_TIME = 3000;
        this.MAX_QUEUE_SIZE = 5000;
        this.mPoolExecutor = new ThreadPoolExecutor(this.MAX_CORE_POOL_SIZE, this.MAX_IMUM_POOL_SIZE, 3000L, TimeUnit.MILLISECONDS, new ArrayBlockingQueue(5000), new ThreadFactory() {
            @Override
            public Thread newThread(Runnable runnable) {
                return new Thread(runnable, "oss-android-multipart-thread");
            }
        });
        this.mPartETags = new ArrayList();
        this.mLock = new Object();
        this.mUploadedLength = 0L;
        this.mCheckCRC64 = false;
        this.mPartAttr = new int[2];
        this.mApiOperation = internalRequestOperation;
        this.mRequest = request;
        this.mProgressCallback = request.getProgressCallback();
        this.mCompletedCallback = oSSCompletedCallback;
        this.mContext = executionContext;
        this.mCheckCRC64 = request.getCRC64() == OSSRequest.CRC64Config.YES;
    }

    protected void checkCancel() throws ClientException {
        if (this.mContext.getCancellationHandler().isCancelled()) {
            TaskCancelException taskCancelException = new TaskCancelException("multipart cancel");
            throw new ClientException(taskCancelException.getMessage(), taskCancelException, true);
        }
    }

    @Override
    public Result call() throws Exception {
        ClientException clientException;
        try {
            checkInitData();
            initMultipartUploadId();
            Result result = (Result) doMultipartUpload();
            if (this.mCompletedCallback != null) {
                this.mCompletedCallback.onSuccess(this.mRequest, result);
            }
            return result;
        } catch (ServiceException e) {
            OSSCompletedCallback<Request, Result> oSSCompletedCallback = this.mCompletedCallback;
            if (oSSCompletedCallback != null) {
                oSSCompletedCallback.onFailure(this.mRequest, null, e);
            }
            throw e;
        } catch (Exception e2) {
            if (e2 instanceof ClientException) {
                clientException = (ClientException) e2;
            } else {
                clientException = new ClientException(e2.toString(), e2);
            }
            OSSCompletedCallback<Request, Result> oSSCompletedCallback2 = this.mCompletedCallback;
            if (oSSCompletedCallback2 != null) {
                oSSCompletedCallback2.onFailure(this.mRequest, clientException, null);
            }
            throw clientException;
        }
    }

    protected void checkInitData() throws ClientException {
        if (this.mRequest.getUploadFilePath() != null) {
            this.mUploadFilePath = this.mRequest.getUploadFilePath();
            this.mUploadedLength = 0L;
            File file = new File(this.mUploadFilePath);
            this.mUploadFile = file;
            this.mFileLength = file.length();
        } else if (this.mRequest.getUploadUri() != null) {
            this.mUploadUri = this.mRequest.getUploadUri();
            ParcelFileDescriptor parcelFileDescriptorOpenFileDescriptor = null;
            try {
                try {
                    parcelFileDescriptorOpenFileDescriptor = this.mContext.getApplicationContext().getContentResolver().openFileDescriptor(this.mUploadUri, "r");
                    this.mFileLength = parcelFileDescriptorOpenFileDescriptor.getStatSize();
                } finally {
                    if (parcelFileDescriptorOpenFileDescriptor != null) {
                        try {
                            parcelFileDescriptorOpenFileDescriptor.close();
                        } catch (IOException e) {
                            OSSLog.logThrowable2Local(e);
                        }
                    }
                }
            } catch (IOException e2) {
                throw new ClientException(e2.getMessage(), e2, true);
            }
        }
        if (this.mFileLength == 0) {
            throw new ClientException("file length must not be 0");
        }
        checkPartSize(this.mPartAttr);
        long partSize = this.mRequest.getPartSize();
        int i = this.mPartAttr[1];
        OSSLog.logDebug("[checkInitData] - partNumber : " + i);
        OSSLog.logDebug("[checkInitData] - partSize : " + partSize);
        if (i > 1 && partSize < OSSConstants.MIN_PART_SIZE_LIMIT) {
            throw new ClientException("Part size must be greater than or equal to 100KB!");
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:104:0x00a8 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:114:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:74:0x0153 A[Catch: IOException -> 0x0157, TRY_ENTER, TryCatch #0 {IOException -> 0x0157, blocks: (B:48:0x0120, B:50:0x0125, B:52:0x012a, B:74:0x0153, B:78:0x015b, B:80:0x0160), top: B:97:0x0005 }] */
    /* JADX WARN: Removed duplicated region for block: B:78:0x015b A[Catch: IOException -> 0x0157, TryCatch #0 {IOException -> 0x0157, blocks: (B:48:0x0120, B:50:0x0125, B:52:0x012a, B:74:0x0153, B:78:0x015b, B:80:0x0160), top: B:97:0x0005 }] */
    /* JADX WARN: Removed duplicated region for block: B:80:0x0160 A[Catch: IOException -> 0x0157, TRY_LEAVE, TryCatch #0 {IOException -> 0x0157, blocks: (B:48:0x0120, B:50:0x0125, B:52:0x012a, B:74:0x0153, B:78:0x015b, B:80:0x0160), top: B:97:0x0005 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected void uploadPart(int i, int i2, int i3) throws Throwable {
        Throwable th;
        InputStream inputStream;
        BufferedInputStream bufferedInputStream;
        RandomAccessFile randomAccessFile;
        RandomAccessFile randomAccessFile2 = null;
        try {
            try {
            } catch (IOException e) {
                OSSLog.logThrowable2Local(e);
                return;
            }
        } catch (Exception e2) {
            e = e2;
            inputStream = null;
            bufferedInputStream = null;
        } catch (Throwable th2) {
            th = th2;
            inputStream = null;
            bufferedInputStream = null;
        }
        if (this.mContext.getCancellationHandler().isCancelled()) {
            this.mPoolExecutor.getQueue().clear();
            return;
        }
        synchronized (this.mLock) {
            this.mRunPartTaskCount++;
        }
        preUploadPart(i, i2, i3);
        byte[] bArr = new byte[i2];
        long partSize = ((long) i) * this.mRequest.getPartSize();
        if (this.mUploadUri != null) {
            InputStream inputStreamOpenInputStream = this.mContext.getApplicationContext().getContentResolver().openInputStream(this.mUploadUri);
            try {
                bufferedInputStream = new BufferedInputStream(inputStreamOpenInputStream);
                try {
                    bufferedInputStream.skip(partSize);
                    bufferedInputStream.read(bArr, 0, i2);
                    randomAccessFile = null;
                    inputStream = inputStreamOpenInputStream;
                    try {
                        UploadPartRequest uploadPartRequest = new UploadPartRequest(this.mRequest.getBucketName(), this.mRequest.getObjectKey(), this.mUploadId, i + 1);
                        uploadPartRequest.setPartContent(bArr);
                        uploadPartRequest.setMd5Digest(BinaryUtil.calculateBase64Md5(bArr));
                        uploadPartRequest.setCRC64(this.mRequest.getCRC64());
                        UploadPartResult uploadPartResultSyncUploadPart = this.mApiOperation.syncUploadPart(uploadPartRequest);
                        synchronized (this.mLock) {
                            PartETag partETag = new PartETag(uploadPartRequest.getPartNumber(), uploadPartResultSyncUploadPart.getETag());
                            long j = i2;
                            partETag.setPartSize(j);
                            if (this.mCheckCRC64) {
                                partETag.setCRC64(uploadPartResultSyncUploadPart.getClientCRC().longValue());
                            }
                            this.mPartETags.add(partETag);
                            this.mUploadedLength += j;
                            uploadPartFinish(partETag);
                            if (this.mContext.getCancellationHandler().isCancelled()) {
                                if (this.mPartETags.size() == this.mRunPartTaskCount - this.mPartExceptionCount) {
                                    TaskCancelException taskCancelException = new TaskCancelException("multipart cancel");
                                    throw new ClientException(taskCancelException.getMessage(), taskCancelException, true);
                                }
                            } else {
                                if (this.mPartETags.size() == i3 - this.mPartExceptionCount) {
                                    notifyMultipartThread();
                                }
                                onProgressCallback(this.mRequest, this.mUploadedLength, this.mFileLength);
                            }
                        }
                        if (randomAccessFile != null) {
                            randomAccessFile.close();
                        }
                        if (bufferedInputStream != null) {
                            bufferedInputStream.close();
                        }
                        if (inputStream != null) {
                            inputStream.close();
                            return;
                        }
                        return;
                    } catch (Exception e3) {
                        e = e3;
                        randomAccessFile2 = randomAccessFile;
                        try {
                            processException(e);
                            if (randomAccessFile2 != null) {
                                randomAccessFile2.close();
                            }
                            if (bufferedInputStream != null) {
                                bufferedInputStream.close();
                            }
                            if (inputStream != null) {
                                inputStream.close();
                                return;
                            }
                            return;
                        } catch (Throwable th3) {
                            th = th3;
                        }
                    } catch (Throwable th4) {
                        th = th4;
                        randomAccessFile2 = randomAccessFile;
                    }
                } catch (Exception e4) {
                    e = e4;
                    inputStream = inputStreamOpenInputStream;
                    processException(e);
                    if (randomAccessFile2 != null) {
                    }
                    if (bufferedInputStream != null) {
                    }
                    if (inputStream != null) {
                    }
                } catch (Throwable th5) {
                    th = th5;
                    inputStream = inputStreamOpenInputStream;
                }
            } catch (Exception e5) {
                e = e5;
                bufferedInputStream = null;
            } catch (Throwable th6) {
                th = th6;
                bufferedInputStream = null;
            }
        } else {
            RandomAccessFile randomAccessFile3 = new RandomAccessFile(this.mUploadFile, "r");
            try {
                randomAccessFile3.seek(partSize);
                randomAccessFile3.readFully(bArr, 0, i2);
                inputStream = null;
                bufferedInputStream = null;
                randomAccessFile = randomAccessFile3;
                UploadPartRequest uploadPartRequest2 = new UploadPartRequest(this.mRequest.getBucketName(), this.mRequest.getObjectKey(), this.mUploadId, i + 1);
                uploadPartRequest2.setPartContent(bArr);
                uploadPartRequest2.setMd5Digest(BinaryUtil.calculateBase64Md5(bArr));
                uploadPartRequest2.setCRC64(this.mRequest.getCRC64());
                UploadPartResult uploadPartResultSyncUploadPart2 = this.mApiOperation.syncUploadPart(uploadPartRequest2);
                synchronized (this.mLock) {
                }
            } catch (Exception e6) {
                e = e6;
                inputStream = null;
                bufferedInputStream = null;
                randomAccessFile2 = randomAccessFile3;
                processException(e);
                if (randomAccessFile2 != null) {
                }
                if (bufferedInputStream != null) {
                }
                if (inputStream != null) {
                }
            } catch (Throwable th7) {
                th = th7;
                inputStream = null;
                bufferedInputStream = null;
                randomAccessFile2 = randomAccessFile3;
            }
        }
        if (randomAccessFile2 != null) {
            try {
                randomAccessFile2.close();
            } catch (IOException e7) {
                OSSLog.logThrowable2Local(e7);
                throw th;
            }
        }
        if (bufferedInputStream != null) {
            bufferedInputStream.close();
        }
        if (inputStream != null) {
            inputStream.close();
            throw th;
        }
        throw th;
    }

    protected CompleteMultipartUploadResult completeMultipartUploadResult() throws ServiceException, ClientException {
        CompleteMultipartUploadResult completeMultipartUploadResultSyncCompleteMultipartUpload;
        if (this.mPartETags.size() > 0) {
            Collections.sort(this.mPartETags, new Comparator<PartETag>() {
                @Override
                public int compare(PartETag partETag, PartETag partETag2) {
                    if (partETag.getPartNumber() < partETag2.getPartNumber()) {
                        return -1;
                    }
                    return partETag.getPartNumber() > partETag2.getPartNumber() ? 1 : 0;
                }
            });
            CompleteMultipartUploadRequest completeMultipartUploadRequest = new CompleteMultipartUploadRequest(this.mRequest.getBucketName(), this.mRequest.getObjectKey(), this.mUploadId, this.mPartETags);
            if (this.mRequest.getCallbackParam() != null) {
                completeMultipartUploadRequest.setCallbackParam(this.mRequest.getCallbackParam());
            }
            if (this.mRequest.getCallbackVars() != null) {
                completeMultipartUploadRequest.setCallbackVars(this.mRequest.getCallbackVars());
            }
            if (this.mRequest.getMetadata() != null) {
                ObjectMetadata objectMetadata = new ObjectMetadata();
                for (String str : this.mRequest.getMetadata().getRawMetadata().keySet()) {
                    if (!str.equals(OSSHeaders.STORAGE_CLASS)) {
                        objectMetadata.setHeader(str, this.mRequest.getMetadata().getRawMetadata().get(str));
                    }
                }
                completeMultipartUploadRequest.setMetadata(objectMetadata);
            }
            completeMultipartUploadRequest.setCRC64(this.mRequest.getCRC64());
            completeMultipartUploadResultSyncCompleteMultipartUpload = this.mApiOperation.syncCompleteMultipartUpload(completeMultipartUploadRequest);
        } else {
            completeMultipartUploadResultSyncCompleteMultipartUpload = null;
        }
        this.mUploadedLength = 0L;
        return completeMultipartUploadResultSyncCompleteMultipartUpload;
    }

    protected void releasePool() {
        ThreadPoolExecutor threadPoolExecutor = this.mPoolExecutor;
        if (threadPoolExecutor != null) {
            threadPoolExecutor.getQueue().clear();
            this.mPoolExecutor.shutdown();
        }
    }

    protected void checkException() throws ServiceException, ClientException, IOException {
        if (this.mUploadException != null) {
            releasePool();
            Exception exc = this.mUploadException;
            if (exc instanceof IOException) {
                throw ((IOException) exc);
            }
            if (exc instanceof ServiceException) {
                throw ((ServiceException) exc);
            }
            if (exc instanceof ClientException) {
                throw ((ClientException) exc);
            }
            throw new ClientException(this.mUploadException.getMessage(), this.mUploadException);
        }
    }

    protected boolean checkWaitCondition(int i) {
        return this.mPartETags.size() != i;
    }

    protected void notifyMultipartThread() {
        this.mLock.notify();
        this.mPartExceptionCount = 0;
    }

    protected void checkPartSize(int[] iArr) {
        long partSize = this.mRequest.getPartSize();
        OSSLog.logDebug("[checkPartSize] - mFileLength : " + this.mFileLength);
        OSSLog.logDebug("[checkPartSize] - partSize : " + partSize);
        long j = this.mFileLength;
        int i = (int) (j / partSize);
        if (j % partSize != 0) {
            i++;
        }
        if (i == 1) {
            partSize = this.mFileLength;
        } else if (i > 5000) {
            partSize = this.mFileLength / ((long) 5000);
            i = 5000;
        }
        int i2 = (int) partSize;
        iArr[0] = i2;
        iArr[1] = i;
        this.mRequest.setPartSize(i2);
        OSSLog.logDebug("[checkPartSize] - partNumber : " + i);
        OSSLog.logDebug("[checkPartSize] - partSize : " + i2);
        long j2 = this.mFileLength % partSize;
        if (j2 != 0) {
            partSize = j2;
        }
        this.mLastPartSize = partSize;
    }

    protected void onProgressCallback(Request request, long j, long j2) {
        OSSProgressCallback<Request> oSSProgressCallback = this.mProgressCallback;
        if (oSSProgressCallback != null) {
            oSSProgressCallback.onProgress(request, j, j2);
        }
    }
}
