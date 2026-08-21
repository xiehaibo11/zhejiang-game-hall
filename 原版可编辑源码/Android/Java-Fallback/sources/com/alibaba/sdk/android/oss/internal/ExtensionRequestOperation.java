package com.alibaba.sdk.android.oss.internal;

public class ExtensionRequestOperation {
    private static java.util.concurrent.ExecutorService executorService;
    private com.alibaba.sdk.android.oss.internal.InternalRequestOperation apiOperation;


    static {
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation$1 r0 = new com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation$1
            r0.<init>()
            r1 = 5
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r1, r0)
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation.executorService = r0
            return
    }

    public ExtensionRequestOperation(com.alibaba.sdk.android.oss.internal.InternalRequestOperation r1) {
            r0 = this;
            r0.<init>()
            r0.apiOperation = r1
            return
    }

    private void setCRC64(com.alibaba.sdk.android.oss.model.OSSRequest r3) {
            r2 = this;
            java.lang.Enum r0 = r3.getCRC64()
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r1 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.NULL
            if (r0 == r1) goto Ld
            java.lang.Enum r0 = r3.getCRC64()
            goto L1e
        Ld:
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.apiOperation
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r0.getConf()
            boolean r0 = r0.isCheckCRC64()
            if (r0 == 0) goto L1c
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r0 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.YES
            goto L1e
        L1c:
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r0 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.NO
        L1e:
            r3.setCRC64(r0)
            return
    }

    public void abortResumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r5) throws java.io.IOException {
            r4 = this;
            r4.setCRC64(r5)
            java.lang.String r0 = r5.getRecordDirectory()
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            if (r0 != 0) goto L109
            java.lang.String r0 = r5.getUploadFilePath()
            if (r0 == 0) goto L18
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateMd5Str(r0)
            goto L3a
        L18:
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r4.apiOperation
            android.content.Context r0 = r0.getApplicationContext()
            android.content.ContentResolver r0 = r0.getContentResolver()
            android.net.Uri r1 = r5.getUploadUri()
            java.lang.String r2 = "r"
            android.os.ParcelFileDescriptor r0 = r0.openFileDescriptor(r1, r2)
            java.io.FileDescriptor r1 = r0.getFileDescriptor()     // Catch: java.lang.Throwable -> L102
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateMd5Str(r1)     // Catch: java.lang.Throwable -> L102
            if (r0 == 0) goto L39
            r0.close()
        L39:
            r0 = r1
        L3a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = r5.getBucketName()
            r1.append(r0)
            java.lang.String r0 = r5.getObjectKey()
            r1.append(r0)
            long r2 = r5.getPartSize()
            java.lang.String r0 = java.lang.String.valueOf(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateMd5Str(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r5.getRecordDirectory()
            r1.append(r2)
            java.lang.String r2 = "/"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r0 = r1.exists()
            if (r0 == 0) goto Lfe
            java.io.BufferedReader r0 = new java.io.BufferedReader
            java.io.FileReader r2 = new java.io.FileReader
            r2.<init>(r1)
            r0.<init>(r2)
            java.lang.String r2 = r0.readLine()
            r0.close()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "[initUploadId] - Found record file, uploadid: "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0)
            java.lang.Enum r0 = r5.getCRC64()
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r3 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.YES
            if (r0 != r3) goto Leb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r3 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r3 = r3.getPath()
            r0.append(r3)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            java.lang.String r3 = "oss"
            r0.append(r3)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.io.File r3 = new java.io.File
            r3.<init>(r0)
            boolean r0 = r3.exists()
            if (r0 == 0) goto Leb
            r3.delete()
        Leb:
            com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r0 = new com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest
            java.lang.String r3 = r5.getBucketName()
            java.lang.String r5 = r5.getObjectKey()
            r0.<init>(r3, r5, r2)
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r5 = r4.apiOperation
            r2 = 0
            r5.abortMultipartUpload(r0, r2)
        Lfe:
            r1.delete()
            goto L109
        L102:
            r5 = move-exception
            if (r0 == 0) goto L108
            r0.close()
        L108:
            throw r5
        L109:
            return
    }

    public boolean doesObjectExist(java.lang.String r2, java.lang.String r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.model.HeadObjectRequest r0 = new com.alibaba.sdk.android.oss.model.HeadObjectRequest     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L11
            r0.<init>(r2, r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L11
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r2 = r1.apiOperation     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L11
            r3 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r2.headObject(r0, r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L11
            r2.getResult()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L11
            r2 = 1
            return r2
        L11:
            r2 = move-exception
            int r3 = r2.getStatusCode()
            r0 = 404(0x194, float:5.66E-43)
            if (r3 != r0) goto L1c
            r2 = 0
            return r2
        L1c:
            throw r2
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> multipartUpload(com.alibaba.sdk.android.oss.model.MultipartUploadRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.MultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r6) {
            r4 = this;
            r4.setCRC64(r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r1 = r4.apiOperation
            okhttp3.OkHttpClient r1 = r1.getInnerClient()
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r2 = r4.apiOperation
            android.content.Context r2 = r2.getApplicationContext()
            r0.<init>(r1, r5, r2)
            java.util.concurrent.ExecutorService r1 = com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation.executorService
            com.alibaba.sdk.android.oss.internal.MultipartUploadTask r2 = new com.alibaba.sdk.android.oss.internal.MultipartUploadTask
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r3 = r4.apiOperation
            r2.<init>(r3, r5, r6, r0)
            java.util.concurrent.Future r5 = r1.submit(r2)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r0)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ResumableUploadResult> resumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r6) {
            r4 = this;
            r4.setCRC64(r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r1 = r4.apiOperation
            okhttp3.OkHttpClient r1 = r1.getInnerClient()
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r2 = r4.apiOperation
            android.content.Context r2 = r2.getApplicationContext()
            r0.<init>(r1, r5, r2)
            java.util.concurrent.ExecutorService r1 = com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation.executorService
            com.alibaba.sdk.android.oss.internal.ResumableUploadTask r2 = new com.alibaba.sdk.android.oss.internal.ResumableUploadTask
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r3 = r4.apiOperation
            r2.<init>(r5, r6, r0, r3)
            java.util.concurrent.Future r5 = r1.submit(r2)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r0)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ResumableUploadResult> sequenceUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r4, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r5) {
            r3 = this;
            r3.setCRC64(r4)
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r1 = r3.apiOperation
            okhttp3.OkHttpClient r1 = r1.getInnerClient()
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r2 = r3.apiOperation
            android.content.Context r2 = r2.getApplicationContext()
            r0.<init>(r1, r4, r2)
            com.alibaba.sdk.android.oss.internal.SequenceUploadTask r1 = new com.alibaba.sdk.android.oss.internal.SequenceUploadTask
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r2 = r3.apiOperation
            r1.<init>(r4, r5, r0, r2)
            java.util.concurrent.ExecutorService r4 = com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation.executorService
            java.util.concurrent.Future r4 = r4.submit(r1)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r4 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r4, r0)
            return r4
    }
}
