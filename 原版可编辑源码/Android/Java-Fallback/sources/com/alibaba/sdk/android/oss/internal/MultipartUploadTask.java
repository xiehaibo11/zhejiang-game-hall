package com.alibaba.sdk.android.oss.internal;

public class MultipartUploadTask extends com.alibaba.sdk.android.oss.internal.BaseMultipartUploadTask<com.alibaba.sdk.android.oss.model.MultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> implements java.util.concurrent.Callable<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> {


    public MultipartUploadTask(com.alibaba.sdk.android.oss.internal.InternalRequestOperation r1, com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.MultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r3, com.alibaba.sdk.android.oss.network.ExecutionContext r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @Override
    protected void abortThisUpload() {
            r4 = this;
            java.lang.String r0 = r4.mUploadId
            if (r0 == 0) goto L21
            com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r0 = new com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r4.mRequest
            java.lang.String r1 = r1.getBucketName()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r4.mRequest
            java.lang.String r2 = r2.getObjectKey()
            java.lang.String r3 = r4.mUploadId
            r0.<init>(r1, r2, r3)
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r1 = r4.mApiOperation
            r2 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = r1.abortMultipartUpload(r0, r2)
            r0.waitUntilFinished()
        L21:
            return
    }

    @Override
    protected com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult doMultipartUpload() throws java.io.IOException, com.alibaba.sdk.android.oss.ServiceException, com.alibaba.sdk.android.oss.ClientException, java.lang.InterruptedException {
            r8 = this;
            r8.checkCancel()
            int[] r0 = r8.mPartAttr
            r1 = 0
            r0 = r0[r1]
            int[] r2 = r8.mPartAttr
            r3 = 1
            r2 = r2[r3]
            r3 = 0
        Le:
            if (r1 >= r2) goto L2e
            r8.checkException()
            java.util.concurrent.ThreadPoolExecutor r4 = r8.mPoolExecutor
            if (r4 == 0) goto L2b
            int r4 = r2 + (-1)
            if (r1 != r4) goto L20
            long r4 = r8.mFileLength
            long r6 = (long) r3
            long r4 = r4 - r6
            int r0 = (int) r4
        L20:
            int r3 = r3 + r0
            java.util.concurrent.ThreadPoolExecutor r4 = r8.mPoolExecutor
            com.alibaba.sdk.android.oss.internal.MultipartUploadTask$1 r5 = new com.alibaba.sdk.android.oss.internal.MultipartUploadTask$1
            r5.<init>(r8, r1, r0, r2)
            r4.execute(r5)
        L2b:
            int r1 = r1 + 1
            goto Le
        L2e:
            boolean r0 = r8.checkWaitCondition(r2)
            if (r0 == 0) goto L41
            java.lang.Object r0 = r8.mLock
            monitor-enter(r0)
            java.lang.Object r1 = r8.mLock     // Catch: java.lang.Throwable -> L3e
            r1.wait()     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            goto L41
        L3e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            throw r1
        L41:
            java.lang.Exception r0 = r8.mUploadException
            if (r0 == 0) goto L48
            r8.abortThisUpload()
        L48:
            r8.checkException()
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r0 = r8.completeMultipartUploadResult()
            r8.releasePool()
            return r0
    }

    @Override
    protected void initMultipartUploadId() throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r4 = this;
            com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r0 = new com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r4.mRequest
            java.lang.String r1 = r1.getBucketName()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r4.mRequest
            java.lang.String r2 = r2.getObjectKey()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3 = r4.mRequest
            com.alibaba.sdk.android.oss.model.ObjectMetadata r3 = r3.getMetadata()
            r0.<init>(r1, r2, r3)
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r1 = r4.mApiOperation
            r2 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = r1.initMultipartUpload(r0, r2)
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r0.getResult()
            com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r0 = (com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult) r0
            java.lang.String r0 = r0.getUploadId()
            r4.mUploadId = r0
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r4.mRequest
            java.lang.String r1 = r4.mUploadId
            r0.setUploadId(r1)
            return
    }

    @Override
    protected void preUploadPart(int r1, int r2, int r3) throws java.lang.Exception {
            r0 = this;
            r0.checkException()
            return
    }

    @Override
    protected void processException(java.lang.Exception r3) {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            int r1 = r2.mPartExceptionCount     // Catch: java.lang.Throwable -> L16
            int r1 = r1 + 1
            r2.mPartExceptionCount = r1     // Catch: java.lang.Throwable -> L16
            java.lang.Exception r1 = r2.mUploadException     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L14
            r2.mUploadException = r3     // Catch: java.lang.Throwable -> L16
            java.lang.Object r3 = r2.mLock     // Catch: java.lang.Throwable -> L16
            r3.notify()     // Catch: java.lang.Throwable -> L16
        L14:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return
        L16:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r3
    }
}
