package com.alibaba.sdk.android.oss.internal;

import android.os.ParcelFileDescriptor;
import android.text.TextUtils;
import com.alibaba.sdk.android.oss.ClientException;
import com.alibaba.sdk.android.oss.ServiceException;
import com.alibaba.sdk.android.oss.callback.OSSCompletedCallback;
import com.alibaba.sdk.android.oss.common.OSSLog;
import com.alibaba.sdk.android.oss.common.utils.BinaryUtil;
import com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences;
import com.alibaba.sdk.android.oss.common.utils.OSSUtils;
import com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest;
import com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult;
import com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest;
import com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult;
import com.alibaba.sdk.android.oss.model.ListPartsRequest;
import com.alibaba.sdk.android.oss.model.ListPartsResult;
import com.alibaba.sdk.android.oss.model.PartETag;
import com.alibaba.sdk.android.oss.model.PartSummary;
import com.alibaba.sdk.android.oss.model.ResumableUploadRequest;
import com.alibaba.sdk.android.oss.model.ResumableUploadResult;
import com.alibaba.sdk.android.oss.network.ExecutionContext;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Callable;

public class ResumableUploadTask extends BaseMultipartUploadTask<ResumableUploadRequest, ResumableUploadResult> implements Callable<ResumableUploadResult> {
    private List<Integer> mAlreadyUploadIndex;
    private File mCRC64RecordFile;
    private File mRecordFile;
    private OSSSharedPreferences mSp;

    public ResumableUploadTask(ResumableUploadRequest resumableUploadRequest, OSSCompletedCallback<ResumableUploadRequest, ResumableUploadResult> oSSCompletedCallback, ExecutionContext executionContext, InternalRequestOperation internalRequestOperation) {
        super(internalRequestOperation, resumableUploadRequest, oSSCompletedCallback, executionContext);
        this.mAlreadyUploadIndex = new ArrayList();
        this.mSp = OSSSharedPreferences.instance(this.mContext.getApplicationContext());
    }

    /* JADX WARN: Removed duplicated region for block: B:103:0x0337 A[LOOP:0: B:44:0x018b->B:103:0x0337, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:138:0x033f A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:139:0x0340 A[EDGE_INSN: B:139:0x0340->B:105:0x0340 BREAK  A[LOOP:0: B:44:0x018b->B:103:0x0337], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0188  */
    /* JADX WARN: Removed duplicated region for block: B:99:0x032d  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected void initMultipartUploadId() throws ServiceException, ClientException, IOException {
        String strCalculateMd5Str;
        Map map;
        String str;
        Map map2;
        boolean zIsTruncated;
        ListPartsResult listPartsResult;
        List<PartSummary> parts;
        int i;
        int i2;
        int i3;
        int i4;
        String str2 = "[initUploadId] -  ";
        OSSCompletedCallback<ListPartsRequest, ListPartsResult> oSSCompletedCallback = null;
        if (!OSSUtils.isEmptyString(((ResumableUploadRequest) this.mRequest).getRecordDirectory())) {
            if (this.mUploadUri != null) {
                OSSLog.logDebug("[initUploadId] - mUploadFilePath : " + this.mUploadUri.getPath());
                ParcelFileDescriptor parcelFileDescriptorOpenFileDescriptor = this.mContext.getApplicationContext().getContentResolver().openFileDescriptor(this.mUploadUri, "r");
                try {
                    strCalculateMd5Str = BinaryUtil.calculateMd5Str(parcelFileDescriptorOpenFileDescriptor.getFileDescriptor());
                } finally {
                    if (parcelFileDescriptorOpenFileDescriptor != null) {
                        parcelFileDescriptorOpenFileDescriptor.close();
                    }
                }
            } else {
                OSSLog.logDebug("[initUploadId] - mUploadFilePath : " + this.mUploadFilePath);
                strCalculateMd5Str = BinaryUtil.calculateMd5Str(this.mUploadFilePath);
            }
            OSSLog.logDebug("[initUploadId] - mRequest.getPartSize() : " + ((ResumableUploadRequest) this.mRequest).getPartSize());
            StringBuilder sb = new StringBuilder();
            sb.append(strCalculateMd5Str);
            sb.append(((ResumableUploadRequest) this.mRequest).getBucketName());
            sb.append(((ResumableUploadRequest) this.mRequest).getObjectKey());
            sb.append(String.valueOf(((ResumableUploadRequest) this.mRequest).getPartSize()));
            sb.append(this.mCheckCRC64 ? "-crc64" : "");
            File file = new File(((ResumableUploadRequest) this.mRequest).getRecordDirectory() + File.separator + BinaryUtil.calculateMd5Str(sb.toString().getBytes()));
            this.mRecordFile = file;
            if (file.exists()) {
                BufferedReader bufferedReader = new BufferedReader(new FileReader(this.mRecordFile));
                this.mUploadId = bufferedReader.readLine();
                bufferedReader.close();
            }
            OSSLog.logDebug("[initUploadId] - mUploadId : " + this.mUploadId);
            if (!OSSUtils.isEmptyString(this.mUploadId)) {
                if (this.mCheckCRC64) {
                    File file2 = new File(((ResumableUploadRequest) this.mRequest).getRecordDirectory() + File.separator + this.mUploadId);
                    if (file2.exists()) {
                        ObjectInputStream objectInputStream = new ObjectInputStream(new FileInputStream(file2));
                        try {
                            try {
                                map = (Map) objectInputStream.readObject();
                            } finally {
                                objectInputStream.close();
                                file2.delete();
                            }
                        } catch (ClassNotFoundException e) {
                            e = e;
                            map = null;
                        }
                        try {
                            file2.delete();
                        } catch (ClassNotFoundException e2) {
                            e = e2;
                            OSSLog.logThrowable2Local(e);
                        }
                    } else {
                        map = null;
                    }
                    char c = 0;
                    int nextPartNumberMarker = 0;
                    while (true) {
                        ListPartsRequest listPartsRequest = new ListPartsRequest(((ResumableUploadRequest) this.mRequest).getBucketName(), ((ResumableUploadRequest) this.mRequest).getObjectKey(), this.mUploadId);
                        if (nextPartNumberMarker > 0) {
                            listPartsRequest.setPartNumberMarker(Integer.valueOf(nextPartNumberMarker));
                        }
                        OSSAsyncTask<ListPartsResult> oSSAsyncTaskListParts = this.mApiOperation.listParts(listPartsRequest, oSSCompletedCallback);
                        try {
                            try {
                                listPartsResult = (ListPartsResult) oSSAsyncTaskListParts.getResult();
                                zIsTruncated = listPartsResult.isTruncated();
                                nextPartNumberMarker = listPartsResult.getNextPartNumberMarker();
                            } catch (ServiceException e3) {
                                e = e3;
                                str = str2;
                            }
                            try {
                                parts = listPartsResult.getParts();
                                i = this.mPartAttr[c];
                                i2 = this.mPartAttr[1];
                                i3 = 0;
                            } catch (ServiceException e4) {
                                e = e4;
                                str = str2;
                                map2 = map;
                            }
                            while (i3 < parts.size()) {
                                PartSummary partSummary = parts.get(i3);
                                PartETag partETag = new PartETag(partSummary.getPartNumber(), partSummary.getETag());
                                partETag.setPartSize(partSummary.getSize());
                                if (map != null && map.size() > 0 && map.containsKey(Integer.valueOf(partETag.getPartNumber()))) {
                                    partETag.setCRC64(((Long) map.get(Integer.valueOf(partETag.getPartNumber()))).longValue());
                                }
                                OSSLog.logDebug(str2 + i3 + " part.getPartNumber() : " + partSummary.getPartNumber());
                                StringBuilder sb2 = new StringBuilder();
                                sb2.append(str2);
                                sb2.append(i3);
                                sb2.append(" part.getSize() : ");
                                int i5 = i3;
                                sb2.append(partSummary.getSize());
                                OSSLog.logDebug(sb2.toString());
                                boolean z = partSummary.getPartNumber() == i2;
                                if (z) {
                                    try {
                                        i4 = nextPartNumberMarker;
                                        map2 = map;
                                        try {
                                            if (partSummary.getSize() != this.mLastPartSize) {
                                                throw new ClientException("current part size " + partSummary.getSize() + " setting is inconsistent with PartSize : " + i + " or lastPartSize : " + this.mLastPartSize);
                                            }
                                        } catch (ServiceException e5) {
                                            e = e5;
                                            str = str2;
                                        }
                                    } catch (ServiceException e6) {
                                        e = e6;
                                        map2 = map;
                                        str = str2;
                                    }
                                    nextPartNumberMarker = i4;
                                    if (e.getStatusCode() != 404) {
                                        this.mUploadId = null;
                                        zIsTruncated = false;
                                        oSSAsyncTaskListParts.waitUntilFinished();
                                        if (zIsTruncated) {
                                            break;
                                        }
                                        str2 = str;
                                        map = map2;
                                        oSSCompletedCallback = null;
                                        c = 0;
                                    } else {
                                        throw e;
                                    }
                                } else {
                                    i4 = nextPartNumberMarker;
                                    map2 = map;
                                }
                                if (z) {
                                    str = str2;
                                } else {
                                    str = str2;
                                    if (partSummary.getSize() != i) {
                                        throw new ClientException("current part size " + partSummary.getSize() + " setting is inconsistent with PartSize : " + i + " or lastPartSize : " + this.mLastPartSize);
                                    }
                                    e = e;
                                    nextPartNumberMarker = i4;
                                    if (e.getStatusCode() != 404) {
                                    }
                                }
                                try {
                                    this.mPartETags.add(partETag);
                                    this.mUploadedLength += partSummary.getSize();
                                    this.mAlreadyUploadIndex.add(Integer.valueOf(partSummary.getPartNumber()));
                                    i3 = i5 + 1;
                                    str2 = str;
                                    map = map2;
                                    nextPartNumberMarker = i4;
                                } catch (ServiceException e7) {
                                    e = e7;
                                }
                            }
                            str = str2;
                            map2 = map;
                            oSSAsyncTaskListParts.waitUntilFinished();
                            if (zIsTruncated) {
                            }
                        } catch (ClientException e8) {
                            throw e8;
                        }
                    }
                }
            }
            if (!this.mRecordFile.exists() && !this.mRecordFile.createNewFile()) {
                throw new ClientException("Can't create file at path: " + this.mRecordFile.getAbsolutePath() + "\nPlease make sure the directory exist!");
            }
        }
        if (OSSUtils.isEmptyString(this.mUploadId)) {
            this.mUploadId = ((InitiateMultipartUploadResult) this.mApiOperation.initMultipartUpload(new InitiateMultipartUploadRequest(((ResumableUploadRequest) this.mRequest).getBucketName(), ((ResumableUploadRequest) this.mRequest).getObjectKey(), ((ResumableUploadRequest) this.mRequest).getMetadata()), null).getResult()).getUploadId();
            if (this.mRecordFile != null) {
                BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(this.mRecordFile));
                bufferedWriter.write(this.mUploadId);
                bufferedWriter.close();
            }
        }
        ((ResumableUploadRequest) this.mRequest).setUploadId(this.mUploadId);
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override
    protected ResumableUploadResult doMultipartUpload() throws Throwable {
        long j = this.mUploadedLength;
        checkCancel();
        final int i = this.mPartAttr[0];
        final int i2 = this.mPartAttr[1];
        if (this.mPartETags.size() > 0 && this.mAlreadyUploadIndex.size() > 0) {
            if (this.mUploadedLength > this.mFileLength) {
                throw new ClientException("The uploading file is inconsistent with before");
            }
            long jLongValue = this.mUploadedLength;
            if (!TextUtils.isEmpty(this.mSp.getStringValue(this.mUploadId))) {
                jLongValue = Long.valueOf(this.mSp.getStringValue(this.mUploadId)).longValue();
            }
            long j2 = jLongValue;
            if (this.mProgressCallback != null) {
                this.mProgressCallback.onProgress(this.mRequest, j2, this.mFileLength);
            }
            this.mSp.removeKey(this.mUploadId);
        }
        this.mRunPartTaskCount = this.mPartETags.size();
        for (final int i3 = 0; i3 < i2; i3++) {
            if ((this.mAlreadyUploadIndex.size() == 0 || !this.mAlreadyUploadIndex.contains(Integer.valueOf(i3 + 1))) && this.mPoolExecutor != null) {
                if (i3 == i2 - 1) {
                    i = (int) (this.mFileLength - j);
                }
                j += (long) i;
                this.mPoolExecutor.execute(new Runnable() {
                    @Override
                    public void run() {
                        ResumableUploadTask.this.uploadPart(i3, i, i2);
                    }
                });
            }
        }
        if (checkWaitCondition(i2)) {
            synchronized (this.mLock) {
                this.mLock.wait();
            }
        }
        checkException();
        CompleteMultipartUploadResult completeMultipartUploadResult = completeMultipartUploadResult();
        ResumableUploadResult resumableUploadResult = completeMultipartUploadResult != null ? new ResumableUploadResult(completeMultipartUploadResult) : null;
        File file = this.mRecordFile;
        if (file != null) {
            file.delete();
        }
        File file2 = this.mCRC64RecordFile;
        if (file2 != null) {
            file2.delete();
        }
        releasePool();
        return resumableUploadResult;
    }

    @Override
    protected void checkException() throws Throwable {
        ObjectOutputStream objectOutputStream;
        if (this.mContext.getCancellationHandler().isCancelled()) {
            if (((ResumableUploadRequest) this.mRequest).deleteUploadOnCancelling().booleanValue()) {
                abortThisUpload();
                File file = this.mRecordFile;
                if (file != null) {
                    file.delete();
                }
            } else if (this.mPartETags != null && this.mPartETags.size() > 0 && this.mCheckCRC64 && ((ResumableUploadRequest) this.mRequest).getRecordDirectory() != null) {
                HashMap map = new HashMap();
                for (PartETag partETag : this.mPartETags) {
                    map.put(Integer.valueOf(partETag.getPartNumber()), Long.valueOf(partETag.getCRC64()));
                }
                ObjectOutputStream objectOutputStream2 = null;
                try {
                    try {
                        File file2 = new File(((ResumableUploadRequest) this.mRequest).getRecordDirectory() + File.separator + this.mUploadId);
                        this.mCRC64RecordFile = file2;
                        if (!file2.exists()) {
                            this.mCRC64RecordFile.createNewFile();
                        }
                        objectOutputStream = new ObjectOutputStream(new FileOutputStream(this.mCRC64RecordFile));
                    } catch (IOException e) {
                        e = e;
                    }
                } catch (Throwable th) {
                    th = th;
                }
                try {
                    objectOutputStream.writeObject(map);
                    objectOutputStream.close();
                } catch (IOException e2) {
                    e = e2;
                    objectOutputStream2 = objectOutputStream;
                    OSSLog.logThrowable2Local(e);
                    if (objectOutputStream2 != null) {
                        objectOutputStream2.close();
                    }
                } catch (Throwable th2) {
                    th = th2;
                    objectOutputStream2 = objectOutputStream;
                    if (objectOutputStream2 != null) {
                        objectOutputStream2.close();
                    }
                    throw th;
                }
            }
        }
        super.checkException();
    }

    @Override
    protected void abortThisUpload() {
        if (this.mUploadId != null) {
            this.mApiOperation.abortMultipartUpload(new AbortMultipartUploadRequest(((ResumableUploadRequest) this.mRequest).getBucketName(), ((ResumableUploadRequest) this.mRequest).getObjectKey(), this.mUploadId), null).waitUntilFinished();
        }
    }

    @Override
    protected void processException(Exception exc) {
        synchronized (this.mLock) {
            this.mPartExceptionCount++;
            this.mUploadException = exc;
            OSSLog.logThrowable2Local(exc);
            if (this.mContext.getCancellationHandler().isCancelled() && !this.mIsCancel) {
                this.mIsCancel = true;
                this.mLock.notify();
            }
            if (this.mPartETags.size() == this.mRunPartTaskCount - this.mPartExceptionCount) {
                notifyMultipartThread();
            }
        }
    }

    @Override
    protected void uploadPartFinish(PartETag partETag) throws Exception {
        if (!this.mContext.getCancellationHandler().isCancelled() || this.mSp.contains(this.mUploadId)) {
            return;
        }
        this.mSp.setStringValue(this.mUploadId, String.valueOf(this.mUploadedLength));
        onProgressCallback(this.mRequest, this.mUploadedLength, this.mFileLength);
    }
}
