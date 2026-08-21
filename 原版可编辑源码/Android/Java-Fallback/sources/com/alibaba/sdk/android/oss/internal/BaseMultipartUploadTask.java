package com.alibaba.sdk.android.oss.internal;

import com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult;
import com.alibaba.sdk.android.oss.model.MultipartUploadRequest;

public abstract class BaseMultipartUploadTask<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest, Result extends com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> implements java.util.concurrent.Callable<Result> {
    protected final int CPU_SIZE;
    protected final int KEEP_ALIVE_TIME;
    protected final int MAX_CORE_POOL_SIZE;
    protected final int MAX_IMUM_POOL_SIZE;
    protected final int MAX_QUEUE_SIZE;
    protected com.alibaba.sdk.android.oss.internal.InternalRequestOperation mApiOperation;
    protected boolean mCheckCRC64;
    protected com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<Request, Result> mCompletedCallback;
    protected com.alibaba.sdk.android.oss.network.ExecutionContext mContext;
    protected long mFileLength;
    protected boolean mIsCancel;
    protected long mLastPartSize;
    protected java.lang.Object mLock;
    protected int[] mPartAttr;
    protected java.util.List<com.alibaba.sdk.android.oss.model.PartETag> mPartETags;
    protected int mPartExceptionCount;
    protected java.util.concurrent.ThreadPoolExecutor mPoolExecutor;
    protected com.alibaba.sdk.android.oss.callback.OSSProgressCallback<Request> mProgressCallback;
    protected Request mRequest;
    protected int mRunPartTaskCount;
    protected java.lang.Exception mUploadException;
    protected java.io.File mUploadFile;
    protected java.lang.String mUploadFilePath;
    protected java.lang.String mUploadId;
    protected android.net.Uri mUploadUri;
    protected long mUploadedLength;



    public BaseMultipartUploadTask(com.alibaba.sdk.android.oss.internal.InternalRequestOperation r12, Request r13, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<Request, Result> r14, com.alibaba.sdk.android.oss.network.ExecutionContext r15) {
            r11 = this;
            r11.<init>()
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            r1 = 2
            int r0 = r0 * 2
            r11.CPU_SIZE = r0
            r2 = 5
            if (r0 >= r2) goto L14
            goto L15
        L14:
            r0 = 5
        L15:
            r11.MAX_CORE_POOL_SIZE = r0
            int r0 = r11.CPU_SIZE
            r11.MAX_IMUM_POOL_SIZE = r0
            r0 = 3000(0xbb8, float:4.204E-42)
            r11.KEEP_ALIVE_TIME = r0
            r0 = 5000(0x1388, float:7.006E-42)
            r11.MAX_QUEUE_SIZE = r0
            java.util.concurrent.ThreadPoolExecutor r10 = new java.util.concurrent.ThreadPoolExecutor
            int r3 = r11.MAX_CORE_POOL_SIZE
            int r4 = r11.MAX_IMUM_POOL_SIZE
            r5 = 3000(0xbb8, double:1.482E-320)
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.ArrayBlockingQueue r8 = new java.util.concurrent.ArrayBlockingQueue
            r8.<init>(r0)
            com.alibaba.sdk.android.oss.internal.BaseMultipartUploadTask$1 r9 = new com.alibaba.sdk.android.oss.internal.BaseMultipartUploadTask$1
            r9.<init>(r11)
            r2 = r10
            r2.<init>(r3, r4, r5, r7, r8, r9)
            r11.mPoolExecutor = r10
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r11.mPartETags = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r11.mLock = r0
            r2 = 0
            r11.mUploadedLength = r2
            r0 = 0
            r11.mCheckCRC64 = r0
            int[] r1 = new int[r1]
            r11.mPartAttr = r1
            r11.mApiOperation = r12
            r11.mRequest = r13
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r12 = r13.getProgressCallback()
            r11.mProgressCallback = r12
            r11.mCompletedCallback = r14
            r11.mContext = r15
            java.lang.Enum r12 = r13.getCRC64()
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r13 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.YES
            if (r12 != r13) goto L6d
            r0 = 1
        L6d:
            r11.mCheckCRC64 = r0
            return
    }

    protected abstract void abortThisUpload();

    @Override
    public Result call() throws java.lang.Exception {
            r4 = this;
            r0 = 0
            r4.checkInitData()     // Catch: java.lang.Exception -> L17 com.alibaba.sdk.android.oss.ServiceException -> L33
            r4.initMultipartUploadId()     // Catch: java.lang.Exception -> L17 com.alibaba.sdk.android.oss.ServiceException -> L33
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r1 = r4.doMultipartUpload()     // Catch: java.lang.Exception -> L17 com.alibaba.sdk.android.oss.ServiceException -> L33
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest, Result extends com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r2 = r4.mCompletedCallback     // Catch: java.lang.Exception -> L17 com.alibaba.sdk.android.oss.ServiceException -> L33
            if (r2 == 0) goto L16
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest, Result extends com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r2 = r4.mCompletedCallback     // Catch: java.lang.Exception -> L17 com.alibaba.sdk.android.oss.ServiceException -> L33
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3 = r4.mRequest     // Catch: java.lang.Exception -> L17 com.alibaba.sdk.android.oss.ServiceException -> L33
            r2.onSuccess(r3, r1)     // Catch: java.lang.Exception -> L17 com.alibaba.sdk.android.oss.ServiceException -> L33
        L16:
            return r1
        L17:
            r1 = move-exception
            boolean r2 = r1 instanceof com.alibaba.sdk.android.oss.ClientException
            if (r2 == 0) goto L1f
            com.alibaba.sdk.android.oss.ClientException r1 = (com.alibaba.sdk.android.oss.ClientException) r1
            goto L29
        L1f:
            com.alibaba.sdk.android.oss.ClientException r2 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r3 = r1.toString()
            r2.<init>(r3, r1)
            r1 = r2
        L29:
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest, Result extends com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r2 = r4.mCompletedCallback
            if (r2 == 0) goto L32
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3 = r4.mRequest
            r2.onFailure(r3, r1, r0)
        L32:
            throw r1
        L33:
            r1 = move-exception
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest, Result extends com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r2 = r4.mCompletedCallback
            if (r2 == 0) goto L3d
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3 = r4.mRequest
            r2.onFailure(r3, r0, r1)
        L3d:
            throw r1
    }

    @Override
    public java.lang.Object call() throws java.lang.Exception {
            r1 = this;
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r0 = r1.call()
            return r0
    }

    protected void checkCancel() throws com.alibaba.sdk.android.oss.ClientException {
            r4 = this;
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r4.mContext
            com.alibaba.sdk.android.oss.network.CancellationHandler r0 = r0.getCancellationHandler()
            boolean r0 = r0.isCancelled()
            if (r0 != 0) goto Ld
            return
        Ld:
            com.alibaba.sdk.android.oss.TaskCancelException r0 = new com.alibaba.sdk.android.oss.TaskCancelException
            java.lang.String r1 = "multipart cancel"
            r0.<init>(r1)
            com.alibaba.sdk.android.oss.ClientException r1 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r2 = r0.getMessage()
            r3 = 1
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r1.<init>(r2, r0, r3)
            throw r1
    }

    protected void checkException() throws java.io.IOException, com.alibaba.sdk.android.oss.ServiceException, com.alibaba.sdk.android.oss.ClientException {
            r3 = this;
            java.lang.Exception r0 = r3.mUploadException
            if (r0 == 0) goto L2c
            r3.releasePool()
            java.lang.Exception r0 = r3.mUploadException
            boolean r1 = r0 instanceof java.io.IOException
            if (r1 != 0) goto L29
            boolean r1 = r0 instanceof com.alibaba.sdk.android.oss.ServiceException
            if (r1 != 0) goto L26
            boolean r1 = r0 instanceof com.alibaba.sdk.android.oss.ClientException
            if (r1 == 0) goto L18
            com.alibaba.sdk.android.oss.ClientException r0 = (com.alibaba.sdk.android.oss.ClientException) r0
            throw r0
        L18:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.Exception r1 = r3.mUploadException
            java.lang.String r1 = r1.getMessage()
            java.lang.Exception r2 = r3.mUploadException
            r0.<init>(r1, r2)
            throw r0
        L26:
            com.alibaba.sdk.android.oss.ServiceException r0 = (com.alibaba.sdk.android.oss.ServiceException) r0
            throw r0
        L29:
            java.io.IOException r0 = (java.io.IOException) r0
            throw r0
        L2c:
            return
    }

    protected void checkInitData() throws com.alibaba.sdk.android.oss.ClientException {
            r7 = this;
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r7.mRequest
            java.lang.String r0 = r0.getUploadFilePath()
            r1 = 0
            r3 = 1
            if (r0 == 0) goto L25
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r7.mRequest
            java.lang.String r0 = r0.getUploadFilePath()
            r7.mUploadFilePath = r0
            r7.mUploadedLength = r1
            java.io.File r0 = new java.io.File
            java.lang.String r4 = r7.mUploadFilePath
            r0.<init>(r4)
            r7.mUploadFile = r0
            long r4 = r0.length()
            r7.mFileLength = r4
            goto L75
        L25:
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r7.mRequest
            android.net.Uri r0 = r0.getUploadUri()
            if (r0 == 0) goto L75
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r7.mRequest
            android.net.Uri r0 = r0.getUploadUri()
            r7.mUploadUri = r0
            r0 = 0
            com.alibaba.sdk.android.oss.network.ExecutionContext r4 = r7.mContext     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5b
            android.content.ContentResolver r4 = r4.getContentResolver()     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5b
            android.net.Uri r5 = r7.mUploadUri     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5b
            java.lang.String r6 = "r"
            android.os.ParcelFileDescriptor r0 = r4.openFileDescriptor(r5, r6)     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5b
            long r4 = r0.getStatSize()     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5b
            r7.mFileLength = r4     // Catch: java.lang.Throwable -> L59 java.io.IOException -> L5b
            if (r0 == 0) goto L75
            r0.close()     // Catch: java.io.IOException -> L54
            goto L75
        L54:
            r0 = move-exception
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)
            goto L75
        L59:
            r1 = move-exception
            goto L6a
        L5b:
            r1 = move-exception
            com.alibaba.sdk.android.oss.ClientException r2 = new com.alibaba.sdk.android.oss.ClientException     // Catch: java.lang.Throwable -> L59
            java.lang.String r4 = r1.getMessage()     // Catch: java.lang.Throwable -> L59
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Throwable -> L59
            r2.<init>(r4, r1, r3)     // Catch: java.lang.Throwable -> L59
            throw r2     // Catch: java.lang.Throwable -> L59
        L6a:
            if (r0 == 0) goto L74
            r0.close()     // Catch: java.io.IOException -> L70
            goto L74
        L70:
            r0 = move-exception
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)
        L74:
            throw r1
        L75:
            long r4 = r7.mFileLength
            int r0 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r0 == 0) goto Lc5
            int[] r0 = r7.mPartAttr
            r7.checkPartSize(r0)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r7.mRequest
            long r0 = r0.getPartSize()
            int[] r2 = r7.mPartAttr
            r2 = r2[r3]
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "[checkInitData] - partNumber : "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "[checkInitData] - partSize : "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r4)
            if (r2 <= r3) goto Lc4
            r2 = 102400(0x19000, double:5.05923E-319)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto Lbc
            goto Lc4
        Lbc:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r1 = "Part size must be greater than or equal to 100KB!"
            r0.<init>(r1)
            throw r0
        Lc4:
            return
        Lc5:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r1 = "file length must not be 0"
            r0.<init>(r1)
            throw r0
    }

    protected void checkPartSize(int[] r11) {
            r10 = this;
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r10.mRequest
            long r0 = r0.getPartSize()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[checkPartSize] - mFileLength : "
            r2.append(r3)
            long r3 = r10.mFileLength
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[checkPartSize] - partSize : "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r2)
            long r4 = r10.mFileLength
            long r6 = r4 / r0
            int r2 = (int) r6
            long r4 = r4 % r0
            r6 = 0
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 == 0) goto L3e
            int r2 = r2 + 1
        L3e:
            r4 = 5000(0x1388, float:7.006E-42)
            r5 = 1
            if (r2 != r5) goto L46
            long r0 = r10.mFileLength
            goto L4e
        L46:
            if (r2 <= r4) goto L4e
            long r0 = r10.mFileLength
            long r8 = (long) r4
            long r0 = r0 / r8
            r2 = 5000(0x1388, float:7.006E-42)
        L4e:
            r4 = 0
            int r8 = (int) r0
            r11[r4] = r8
            r11[r5] = r2
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r11 = r10.mRequest
            long r4 = (long) r8
            r11.setPartSize(r4)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r4 = "[checkPartSize] - partNumber : "
            r11.append(r4)
            r11.append(r2)
            java.lang.String r11 = r11.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r11)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r3)
            r11.append(r8)
            java.lang.String r11 = r11.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r11)
            long r2 = r10.mFileLength
            long r2 = r2 % r0
            int r11 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r11 != 0) goto L88
            goto L89
        L88:
            r0 = r2
        L89:
            r10.mLastPartSize = r0
            return
    }

    protected boolean checkWaitCondition(int r2) {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r1.mPartETags
            int r0 = r0.size()
            if (r0 != r2) goto La
            r2 = 0
            return r2
        La:
            r2 = 1
            return r2
    }

    protected com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult completeMultipartUploadResult() throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r5 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r5.mPartETags
            int r0 = r0.size()
            if (r0 <= 0) goto La1
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r5.mPartETags
            com.alibaba.sdk.android.oss.internal.BaseMultipartUploadTask$2 r1 = new com.alibaba.sdk.android.oss.internal.BaseMultipartUploadTask$2
            r1.<init>(r5)
            java.util.Collections.sort(r0, r1)
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest r0 = new com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r5.mRequest
            java.lang.String r1 = r1.getBucketName()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r5.mRequest
            java.lang.String r2 = r2.getObjectKey()
            java.lang.String r3 = r5.mUploadId
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r4 = r5.mPartETags
            r0.<init>(r1, r2, r3, r4)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r5.mRequest
            java.util.Map r1 = r1.getCallbackParam()
            if (r1 == 0) goto L38
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r5.mRequest
            java.util.Map r1 = r1.getCallbackParam()
            r0.setCallbackParam(r1)
        L38:
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r5.mRequest
            java.util.Map r1 = r1.getCallbackVars()
            if (r1 == 0) goto L49
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r5.mRequest
            java.util.Map r1 = r1.getCallbackVars()
            r0.setCallbackVars(r1)
        L49:
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r5.mRequest
            com.alibaba.sdk.android.oss.model.ObjectMetadata r1 = r1.getMetadata()
            if (r1 == 0) goto L91
            com.alibaba.sdk.android.oss.model.ObjectMetadata r1 = new com.alibaba.sdk.android.oss.model.ObjectMetadata
            r1.<init>()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r5.mRequest
            com.alibaba.sdk.android.oss.model.ObjectMetadata r2 = r2.getMetadata()
            java.util.Map r2 = r2.getRawMetadata()
            java.util.Set r2 = r2.keySet()
            java.util.Iterator r2 = r2.iterator()
        L68:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L8e
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r4 = "x-oss-storage-class"
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L68
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r4 = r5.mRequest
            com.alibaba.sdk.android.oss.model.ObjectMetadata r4 = r4.getMetadata()
            java.util.Map r4 = r4.getRawMetadata()
            java.lang.Object r4 = r4.get(r3)
            r1.setHeader(r3, r4)
            goto L68
        L8e:
            r0.setMetadata(r1)
        L91:
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r5.mRequest
            java.lang.Enum r1 = r1.getCRC64()
            r0.setCRC64(r1)
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r1 = r5.mApiOperation
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r0 = r1.syncCompleteMultipartUpload(r0)
            goto La2
        La1:
            r0 = 0
        La2:
            r1 = 0
            r5.mUploadedLength = r1
            return r0
    }

    protected abstract Result doMultipartUpload() throws java.io.IOException, com.alibaba.sdk.android.oss.ServiceException, com.alibaba.sdk.android.oss.ClientException, java.lang.InterruptedException;

    protected abstract void initMultipartUploadId() throws java.io.IOException, com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    protected void notifyMultipartThread() {
            r1 = this;
            java.lang.Object r0 = r1.mLock
            r0.notify()
            r0 = 0
            r1.mPartExceptionCount = r0
            return
    }

    protected void onProgressCallback(Request r7, long r8, long r10) {
            r6 = this;
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest> r0 = r6.mProgressCallback
            if (r0 == 0) goto La
            r1 = r7
            r2 = r8
            r4 = r10
            r0.onProgress(r1, r2, r4)
        La:
            return
    }

    protected void preUploadPart(int r1, int r2, int r3) throws java.lang.Exception {
            r0 = this;
            return
    }

    protected abstract void processException(java.lang.Exception r1);

    protected void releasePool() {
            r1 = this;
            java.util.concurrent.ThreadPoolExecutor r0 = r1.mPoolExecutor
            if (r0 == 0) goto L10
            java.util.concurrent.BlockingQueue r0 = r0.getQueue()
            r0.clear()
            java.util.concurrent.ThreadPoolExecutor r0 = r1.mPoolExecutor
            r0.shutdown()
        L10:
            return
    }

    protected void uploadPart(int r15, int r16, int r17) {
            r14 = this;
            r7 = r14
            r0 = r15
            r1 = r16
            r2 = 0
            com.alibaba.sdk.android.oss.network.ExecutionContext r3 = r7.mContext     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            com.alibaba.sdk.android.oss.network.CancellationHandler r3 = r3.getCancellationHandler()     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            boolean r3 = r3.isCancelled()     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            if (r3 == 0) goto L1b
            java.util.concurrent.ThreadPoolExecutor r0 = r7.mPoolExecutor     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            java.util.concurrent.BlockingQueue r0 = r0.getQueue()     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            r0.clear()     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            return
        L1b:
            java.lang.Object r3 = r7.mLock     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            int r4 = r7.mRunPartTaskCount     // Catch: java.lang.Throwable -> L143
            r5 = 1
            int r4 = r4 + r5
            r7.mRunPartTaskCount = r4     // Catch: java.lang.Throwable -> L143
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L143
            r14.preUploadPart(r15, r16, r17)     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            byte[] r3 = new byte[r1]     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            long r8 = (long) r0     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r4 = r7.mRequest     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            long r10 = r4.getPartSize()     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            long r8 = r8 * r10
            android.net.Uri r4 = r7.mUploadUri     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            r6 = 0
            if (r4 == 0) goto L66
            com.alibaba.sdk.android.oss.network.ExecutionContext r4 = r7.mContext     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            android.content.ContentResolver r4 = r4.getContentResolver()     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            android.net.Uri r10 = r7.mUploadUri     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            java.io.InputStream r4 = r4.openInputStream(r10)     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            java.io.BufferedInputStream r10 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L61
            r10.<init>(r4)     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L61
            r10.skip(r8)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            r10.read(r3, r6, r1)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            r8 = r2
            r9 = r4
            goto L78
        L56:
            r0 = move-exception
            r1 = r0
            goto L5e
        L59:
            r0 = move-exception
            goto L63
        L5b:
            r0 = move-exception
            r1 = r0
            r10 = r2
        L5e:
            r9 = r4
            goto L16a
        L61:
            r0 = move-exception
            r10 = r2
        L63:
            r9 = r4
            goto L14e
        L66:
            java.io.RandomAccessFile r4 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            java.io.File r10 = r7.mUploadFile     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            java.lang.String r11 = "r"
            r4.<init>(r10, r11)     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
            r4.seek(r8)     // Catch: java.lang.Throwable -> L138 java.lang.Exception -> L13e
            r4.readFully(r3, r6, r1)     // Catch: java.lang.Throwable -> L138 java.lang.Exception -> L13e
            r9 = r2
            r10 = r9
            r8 = r4
        L78:
            com.alibaba.sdk.android.oss.model.UploadPartRequest r2 = new com.alibaba.sdk.android.oss.model.UploadPartRequest     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r4 = r7.mRequest     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            java.lang.String r4 = r4.getBucketName()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r6 = r7.mRequest     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            java.lang.String r6 = r6.getObjectKey()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            java.lang.String r11 = r7.mUploadId     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            int r0 = r0 + r5
            r2.<init>(r4, r6, r11, r0)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            r2.setPartContent(r3)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateBase64Md5(r3)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            r2.setMd5Digest(r0)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r7.mRequest     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            java.lang.Enum r0 = r0.getCRC64()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            r2.setCRC64(r0)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r7.mApiOperation     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            com.alibaba.sdk.android.oss.model.UploadPartResult r0 = r0.syncUploadPart(r2)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            java.lang.Object r11 = r7.mLock     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            monitor-enter(r11)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
            com.alibaba.sdk.android.oss.model.PartETag r3 = new com.alibaba.sdk.android.oss.model.PartETag     // Catch: java.lang.Throwable -> L12e
            int r2 = r2.getPartNumber()     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = r0.getETag()     // Catch: java.lang.Throwable -> L12e
            r3.<init>(r2, r4)     // Catch: java.lang.Throwable -> L12e
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L12e
            r3.setPartSize(r1)     // Catch: java.lang.Throwable -> L12e
            boolean r4 = r7.mCheckCRC64     // Catch: java.lang.Throwable -> L12e
            if (r4 == 0) goto Lc8
            java.lang.Long r0 = r0.getClientCRC()     // Catch: java.lang.Throwable -> L12e
            long r12 = r0.longValue()     // Catch: java.lang.Throwable -> L12e
            r3.setCRC64(r12)     // Catch: java.lang.Throwable -> L12e
        Lc8:
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r7.mPartETags     // Catch: java.lang.Throwable -> L12e
            r0.add(r3)     // Catch: java.lang.Throwable -> L12e
            long r12 = r7.mUploadedLength     // Catch: java.lang.Throwable -> L12e
            long r12 = r12 + r1
            r7.mUploadedLength = r12     // Catch: java.lang.Throwable -> L12e
            r14.uploadPartFinish(r3)     // Catch: java.lang.Throwable -> L12e
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r7.mContext     // Catch: java.lang.Throwable -> L12e
            com.alibaba.sdk.android.oss.network.CancellationHandler r0 = r0.getCancellationHandler()     // Catch: java.lang.Throwable -> L12e
            boolean r0 = r0.isCancelled()     // Catch: java.lang.Throwable -> L12e
            if (r0 == 0) goto L104
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r7.mPartETags     // Catch: java.lang.Throwable -> L12e
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L12e
            int r1 = r7.mRunPartTaskCount     // Catch: java.lang.Throwable -> L12e
            int r2 = r7.mPartExceptionCount     // Catch: java.lang.Throwable -> L12e
            int r1 = r1 - r2
            if (r0 == r1) goto Lef
            goto L11d
        Lef:
            com.alibaba.sdk.android.oss.TaskCancelException r0 = new com.alibaba.sdk.android.oss.TaskCancelException     // Catch: java.lang.Throwable -> L12e
            java.lang.String r1 = "multipart cancel"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L12e
            com.alibaba.sdk.android.oss.ClientException r1 = new com.alibaba.sdk.android.oss.ClientException     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r0.getMessage()     // Catch: java.lang.Throwable -> L12e
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Throwable -> L12e
            r1.<init>(r2, r0, r3)     // Catch: java.lang.Throwable -> L12e
            throw r1     // Catch: java.lang.Throwable -> L12e
        L104:
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r7.mPartETags     // Catch: java.lang.Throwable -> L12e
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L12e
            int r1 = r7.mPartExceptionCount     // Catch: java.lang.Throwable -> L12e
            int r1 = r17 - r1
            if (r0 != r1) goto L113
            r14.notifyMultipartThread()     // Catch: java.lang.Throwable -> L12e
        L113:
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r7.mRequest     // Catch: java.lang.Throwable -> L12e
            long r3 = r7.mUploadedLength     // Catch: java.lang.Throwable -> L12e
            long r5 = r7.mFileLength     // Catch: java.lang.Throwable -> L12e
            r1 = r14
            r1.onProgressCallback(r2, r3, r5)     // Catch: java.lang.Throwable -> L12e
        L11d:
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L12e
            if (r8 == 0) goto L123
            r8.close()     // Catch: java.io.IOException -> L157
        L123:
            if (r10 == 0) goto L128
            r10.close()     // Catch: java.io.IOException -> L157
        L128:
            if (r9 == 0) goto L167
            r9.close()     // Catch: java.io.IOException -> L157
            goto L167
        L12e:
            r0 = move-exception
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L12e
            throw r0     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135
        L131:
            r0 = move-exception
            r1 = r0
            r2 = r8
            goto L16a
        L135:
            r0 = move-exception
            r2 = r8
            goto L14e
        L138:
            r0 = move-exception
            r1 = r0
            r9 = r2
            r10 = r9
            r2 = r4
            goto L16a
        L13e:
            r0 = move-exception
            r9 = r2
            r10 = r9
            r2 = r4
            goto L14e
        L143:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L143
            throw r0     // Catch: java.lang.Throwable -> L146 java.lang.Exception -> L14b
        L146:
            r0 = move-exception
            r1 = r0
            r9 = r2
            r10 = r9
            goto L16a
        L14b:
            r0 = move-exception
            r9 = r2
            r10 = r9
        L14e:
            r14.processException(r0)     // Catch: java.lang.Throwable -> L168
            if (r2 == 0) goto L159
            r2.close()     // Catch: java.io.IOException -> L157
            goto L159
        L157:
            r0 = move-exception
            goto L164
        L159:
            if (r10 == 0) goto L15e
            r10.close()     // Catch: java.io.IOException -> L157
        L15e:
            if (r9 == 0) goto L167
            r9.close()     // Catch: java.io.IOException -> L157
            goto L167
        L164:
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)
        L167:
            return
        L168:
            r0 = move-exception
            r1 = r0
        L16a:
            if (r2 == 0) goto L172
            r2.close()     // Catch: java.io.IOException -> L170
            goto L172
        L170:
            r0 = move-exception
            goto L17d
        L172:
            if (r10 == 0) goto L177
            r10.close()     // Catch: java.io.IOException -> L170
        L177:
            if (r9 == 0) goto L180
            r9.close()     // Catch: java.io.IOException -> L170
            goto L180
        L17d:
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)
        L180:
            throw r1
    }

    protected void uploadPartFinish(com.alibaba.sdk.android.oss.model.PartETag r1) throws java.lang.Exception {
            r0 = this;
            return
    }
}
