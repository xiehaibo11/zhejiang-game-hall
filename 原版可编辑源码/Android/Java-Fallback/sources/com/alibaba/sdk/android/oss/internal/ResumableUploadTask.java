package com.alibaba.sdk.android.oss.internal;

public class ResumableUploadTask extends com.alibaba.sdk.android.oss.internal.BaseMultipartUploadTask<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> implements java.util.concurrent.Callable<com.alibaba.sdk.android.oss.model.ResumableUploadResult> {
    private java.util.List<java.lang.Integer> mAlreadyUploadIndex;
    private java.io.File mCRC64RecordFile;
    private java.io.File mRecordFile;
    private com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences mSp;


    public ResumableUploadTask(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r2, com.alibaba.sdk.android.oss.network.ExecutionContext r3, com.alibaba.sdk.android.oss.internal.InternalRequestOperation r4) {
            r0 = this;
            r0.<init>(r4, r1, r2, r3)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.mAlreadyUploadIndex = r1
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = r0.mContext
            android.content.Context r1 = r1.getApplicationContext()
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r1 = com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences.instance(r1)
            r0.mSp = r1
            return
    }

    @Override
    protected void abortThisUpload() {
            r4 = this;
            java.lang.String r0 = r4.mUploadId
            if (r0 == 0) goto L25
            com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r0 = new com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1 = r4.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r1 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r1
            java.lang.String r1 = r1.getBucketName()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r4.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r2
            java.lang.String r2 = r2.getObjectKey()
            java.lang.String r3 = r4.mUploadId
            r0.<init>(r1, r2, r3)
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r1 = r4.mApiOperation
            r2 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = r1.abortMultipartUpload(r0, r2)
            r0.waitUntilFinished()
        L25:
            return
    }

    @Override
    protected void checkException() throws java.io.IOException, com.alibaba.sdk.android.oss.ServiceException, com.alibaba.sdk.android.oss.ClientException {
            r6 = this;
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r6.mContext
            com.alibaba.sdk.android.oss.network.CancellationHandler r0 = r0.getCancellationHandler()
            boolean r0 = r0.isCancelled()
            if (r0 == 0) goto Lc7
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r6.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0
            java.lang.Boolean r0 = r0.deleteUploadOnCancelling()
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L26
            r6.abortThisUpload()
            java.io.File r0 = r6.mRecordFile
            if (r0 == 0) goto Lc7
            r0.delete()
            goto Lc7
        L26:
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r6.mPartETags
            if (r0 == 0) goto Lc7
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r6.mPartETags
            int r0 = r0.size()
            if (r0 <= 0) goto Lc7
            boolean r0 = r6.mCheckCRC64
            if (r0 == 0) goto Lc7
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r6.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0
            java.lang.String r0 = r0.getRecordDirectory()
            if (r0 == 0) goto Lc7
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r1 = r6.mPartETags
            java.util.Iterator r1 = r1.iterator()
        L4b:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L6b
            java.lang.Object r2 = r1.next()
            com.alibaba.sdk.android.oss.model.PartETag r2 = (com.alibaba.sdk.android.oss.model.PartETag) r2
            int r3 = r2.getPartNumber()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            long r4 = r2.getCRC64()
            java.lang.Long r2 = java.lang.Long.valueOf(r4)
            r0.put(r3, r2)
            goto L4b
        L6b:
            r1 = 0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r2.<init>()     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3 = r6.mRequest     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r3 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r3     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            java.lang.String r3 = r3.getRecordDirectory()     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            java.lang.String r3 = r6.mUploadId     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r3.<init>(r2)     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r6.mCRC64RecordFile = r3     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            boolean r2 = r3.exists()     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            if (r2 != 0) goto L9c
            java.io.File r2 = r6.mCRC64RecordFile     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r2.createNewFile()     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
        L9c:
            java.io.ObjectOutputStream r2 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            java.io.File r4 = r6.mCRC64RecordFile     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lb7
            r2.writeObject(r0)     // Catch: java.lang.Throwable -> Laf java.io.IOException -> Lb2
            r2.close()
            goto Lc7
        Laf:
            r0 = move-exception
            r1 = r2
            goto Lc1
        Lb2:
            r0 = move-exception
            r1 = r2
            goto Lb8
        Lb5:
            r0 = move-exception
            goto Lc1
        Lb7:
            r0 = move-exception
        Lb8:
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)     // Catch: java.lang.Throwable -> Lb5
            if (r1 == 0) goto Lc7
            r1.close()
            goto Lc7
        Lc1:
            if (r1 == 0) goto Lc6
            r1.close()
        Lc6:
            throw r0
        Lc7:
            super.checkException()
            return
    }

    @Override
    protected com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult doMultipartUpload() throws java.io.IOException, com.alibaba.sdk.android.oss.ServiceException, com.alibaba.sdk.android.oss.ClientException, java.lang.InterruptedException {
            r1 = this;
            com.alibaba.sdk.android.oss.model.ResumableUploadResult r0 = r1.doMultipartUpload()
            return r0
    }

    @Override
    protected com.alibaba.sdk.android.oss.model.ResumableUploadResult doMultipartUpload() throws java.io.IOException, com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException, java.lang.InterruptedException {
            r13 = this;
            long r0 = r13.mUploadedLength
            r13.checkCancel()
            int[] r2 = r13.mPartAttr
            r3 = 0
            r2 = r2[r3]
            int[] r4 = r13.mPartAttr
            r5 = 1
            r4 = r4[r5]
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r5 = r13.mPartETags
            int r5 = r5.size()
            if (r5 <= 0) goto L65
            java.util.List<java.lang.Integer> r5 = r13.mAlreadyUploadIndex
            int r5 = r5.size()
            if (r5 <= 0) goto L65
            long r5 = r13.mUploadedLength
            long r7 = r13.mFileLength
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 > 0) goto L5d
            long r5 = r13.mUploadedLength
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r7 = r13.mSp
            java.lang.String r8 = r13.mUploadId
            java.lang.String r7 = r7.getStringValue(r8)
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L47
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r5 = r13.mSp
            java.lang.String r6 = r13.mUploadId
            java.lang.String r5 = r5.getStringValue(r6)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            long r5 = r5.longValue()
        L47:
            r9 = r5
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest> r5 = r13.mProgressCallback
            if (r5 == 0) goto L55
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest> r7 = r13.mProgressCallback
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r8 = r13.mRequest
            long r11 = r13.mFileLength
            r7.onProgress(r8, r9, r11)
        L55:
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r5 = r13.mSp
            java.lang.String r6 = r13.mUploadId
            r5.removeKey(r6)
            goto L65
        L5d:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r1 = "The uploading file is inconsistent with before"
            r0.<init>(r1)
            throw r0
        L65:
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r5 = r13.mPartETags
            int r5 = r5.size()
            r13.mRunPartTaskCount = r5
        L6d:
            if (r3 >= r4) goto La1
            java.util.List<java.lang.Integer> r5 = r13.mAlreadyUploadIndex
            int r5 = r5.size()
            if (r5 == 0) goto L86
            java.util.List<java.lang.Integer> r5 = r13.mAlreadyUploadIndex
            int r6 = r3 + 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            boolean r5 = r5.contains(r6)
            if (r5 == 0) goto L86
            goto L9e
        L86:
            java.util.concurrent.ThreadPoolExecutor r5 = r13.mPoolExecutor
            if (r5 == 0) goto L9e
            int r5 = r4 + (-1)
            if (r3 != r5) goto L92
            long r5 = r13.mFileLength
            long r5 = r5 - r0
            int r2 = (int) r5
        L92:
            long r5 = (long) r2
            long r0 = r0 + r5
            java.util.concurrent.ThreadPoolExecutor r5 = r13.mPoolExecutor
            com.alibaba.sdk.android.oss.internal.ResumableUploadTask$1 r6 = new com.alibaba.sdk.android.oss.internal.ResumableUploadTask$1
            r6.<init>(r13, r3, r2, r4)
            r5.execute(r6)
        L9e:
            int r3 = r3 + 1
            goto L6d
        La1:
            boolean r0 = r13.checkWaitCondition(r4)
            if (r0 == 0) goto Lb4
            java.lang.Object r0 = r13.mLock
            monitor-enter(r0)
            java.lang.Object r1 = r13.mLock     // Catch: java.lang.Throwable -> Lb1
            r1.wait()     // Catch: java.lang.Throwable -> Lb1
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb1
            goto Lb4
        Lb1:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb1
            throw r1
        Lb4:
            r13.checkException()
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r0 = r13.completeMultipartUploadResult()
            r1 = 0
            if (r0 == 0) goto Lc3
            com.alibaba.sdk.android.oss.model.ResumableUploadResult r1 = new com.alibaba.sdk.android.oss.model.ResumableUploadResult
            r1.<init>(r0)
        Lc3:
            java.io.File r0 = r13.mRecordFile
            if (r0 == 0) goto Lca
            r0.delete()
        Lca:
            java.io.File r0 = r13.mCRC64RecordFile
            if (r0 == 0) goto Ld1
            r0.delete()
        Ld1:
            r13.releasePool()
            return r1
    }

    @Override
    protected void initMultipartUploadId() throws java.io.IOException, com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r22 = this;
            r1 = r22
            java.lang.String r2 = "[initUploadId] -  "
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0
            java.lang.String r0 = r0.getRecordDirectory()
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            r3 = 0
            if (r0 != 0) goto L373
            android.net.Uri r0 = r1.mUploadUri
            java.lang.String r4 = "[initUploadId] - mUploadFilePath : "
            if (r0 == 0) goto L58
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            android.net.Uri r4 = r1.mUploadUri
            java.lang.String r4 = r4.getPath()
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0)
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r1.mContext
            android.content.Context r0 = r0.getApplicationContext()
            android.content.ContentResolver r0 = r0.getContentResolver()
            android.net.Uri r4 = r1.mUploadUri
            java.lang.String r5 = "r"
            android.os.ParcelFileDescriptor r4 = r0.openFileDescriptor(r4, r5)
            java.io.FileDescriptor r0 = r4.getFileDescriptor()     // Catch: java.lang.Throwable -> L51
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateMd5Str(r0)     // Catch: java.lang.Throwable -> L51
            if (r4 == 0) goto L72
            r4.close()
            goto L72
        L51:
            r0 = move-exception
            if (r4 == 0) goto L57
            r4.close()
        L57:
            throw r0
        L58:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = r1.mUploadFilePath
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0)
            java.lang.String r0 = r1.mUploadFilePath
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateMd5Str(r0)
        L72:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "[initUploadId] - mRequest.getPartSize() : "
            r4.append(r5)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r5 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r5 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r5
            long r5 = r5.getPartSize()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0
            java.lang.String r0 = r0.getBucketName()
            r4.append(r0)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0
            java.lang.String r0 = r0.getObjectKey()
            r4.append(r0)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0
            long r5 = r0.getPartSize()
            java.lang.String r0 = java.lang.String.valueOf(r5)
            r4.append(r0)
            boolean r0 = r1.mCheckCRC64
            if (r0 == 0) goto Lc2
            java.lang.String r0 = "-crc64"
            goto Lc4
        Lc2:
            java.lang.String r0 = ""
        Lc4:
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateMd5Str(r0)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r5 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r5 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r5
            java.lang.String r5 = r5.getRecordDirectory()
            r4.append(r5)
            java.lang.String r5 = java.io.File.separator
            r4.append(r5)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            java.io.File r4 = new java.io.File
            r4.<init>(r0)
            r1.mRecordFile = r4
            boolean r0 = r4.exists()
            if (r0 == 0) goto L111
            java.io.BufferedReader r0 = new java.io.BufferedReader
            java.io.FileReader r4 = new java.io.FileReader
            java.io.File r5 = r1.mRecordFile
            r4.<init>(r5)
            r0.<init>(r4)
            java.lang.String r4 = r0.readLine()
            r1.mUploadId = r4
            r0.close()
        L111:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "[initUploadId] - mUploadId : "
            r0.append(r4)
            java.lang.String r4 = r1.mUploadId
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0)
            java.lang.String r0 = r1.mUploadId
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            if (r0 != 0) goto L340
            boolean r0 = r1.mCheckCRC64
            if (r0 == 0) goto L188
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r4 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r4 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r4
            java.lang.String r4 = r4.getRecordDirectory()
            r0.append(r4)
            java.lang.String r4 = java.io.File.separator
            r0.append(r4)
            java.lang.String r4 = r1.mUploadId
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.io.File r4 = new java.io.File
            r4.<init>(r0)
            boolean r0 = r4.exists()
            if (r0 == 0) goto L188
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r4)
            java.io.ObjectInputStream r5 = new java.io.ObjectInputStream
            r5.<init>(r0)
            java.lang.Object r0 = r5.readObject()     // Catch: java.lang.Throwable -> L173 java.lang.ClassNotFoundException -> L175
            r6 = r0
            java.util.Map r6 = (java.util.Map) r6     // Catch: java.lang.Throwable -> L173 java.lang.ClassNotFoundException -> L175
            r4.delete()     // Catch: java.lang.ClassNotFoundException -> L171 java.lang.Throwable -> L173
            goto L17a
        L171:
            r0 = move-exception
            goto L177
        L173:
            r0 = move-exception
            goto L181
        L175:
            r0 = move-exception
            r6 = r3
        L177:
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)     // Catch: java.lang.Throwable -> L173
        L17a:
            r5.close()
            r4.delete()
            goto L189
        L181:
            r5.close()
            r4.delete()
            throw r0
        L188:
            r6 = r3
        L189:
            r4 = 0
            r5 = 0
        L18b:
            com.alibaba.sdk.android.oss.model.ListPartsRequest r0 = new com.alibaba.sdk.android.oss.model.ListPartsRequest
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r7 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r7 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r7
            java.lang.String r7 = r7.getBucketName()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r8 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r8 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r8
            java.lang.String r8 = r8.getObjectKey()
            java.lang.String r9 = r1.mUploadId
            r0.<init>(r7, r8, r9)
            if (r5 <= 0) goto L1ab
            java.lang.Integer r7 = java.lang.Integer.valueOf(r5)
            r0.setPartNumberMarker(r7)
        L1ab:
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r7 = r1.mApiOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r7 = r7.listParts(r0, r3)
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r7.getResult()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            com.alibaba.sdk.android.oss.model.ListPartsResult r0 = (com.alibaba.sdk.android.oss.model.ListPartsResult) r0     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            boolean r8 = r0.isTruncated()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            int r5 = r0.getNextPartNumberMarker()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            java.util.List r0 = r0.getParts()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            int[] r9 = r1.mPartAttr     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r9 = r9[r4]     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            int[] r10 = r1.mPartAttr     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r11 = 1
            r10 = r10[r11]     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r12 = 0
        L1cd:
            int r13 = r0.size()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            if (r12 >= r13) goto L311
            java.lang.Object r13 = r0.get(r12)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            com.alibaba.sdk.android.oss.model.PartSummary r13 = (com.alibaba.sdk.android.oss.model.PartSummary) r13     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            com.alibaba.sdk.android.oss.model.PartETag r14 = new com.alibaba.sdk.android.oss.model.PartETag     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            int r15 = r13.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.String r4 = r13.getETag()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r14.<init>(r15, r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            long r3 = r13.getSize()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r14.setPartSize(r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            if (r6 == 0) goto L218
            int r3 = r6.size()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            if (r3 <= 0) goto L218
            int r3 = r14.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            boolean r3 = r6.containsKey(r3)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            if (r3 == 0) goto L218
            int r3 = r14.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            java.lang.Object r3 = r6.get(r3)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            long r3 = r3.longValue()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
            r14.setCRC64(r3)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L31e com.alibaba.sdk.android.oss.ServiceException -> L320
        L218:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.<init>()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r2)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r12)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.String r4 = " part.getPartNumber() : "
            r3.append(r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            int r4 = r13.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.String r3 = r3.toString()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.<init>()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r2)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r12)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.String r4 = " part.getSize() : "
            r3.append(r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r16 = r12
            long r11 = r13.getSize()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r11)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.String r3 = r3.toString()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            int r3 = r13.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L318 com.alibaba.sdk.android.oss.ClientException -> L31e
            if (r3 != r10) goto L25e
            r3 = 1
            goto L25f
        L25e:
            r3 = 0
        L25f:
            java.lang.String r11 = " or lastPartSize : "
            java.lang.String r12 = " setting is inconsistent with PartSize : "
            java.lang.String r4 = "current part size "
            if (r3 == 0) goto L2a6
            long r17 = r13.getSize()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L29d com.alibaba.sdk.android.oss.ClientException -> L31e
            r20 = r5
            r19 = r6
            long r5 = r1.mLastPartSize     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            int r21 = (r17 > r5 ? 1 : (r17 == r5 ? 0 : -1))
            if (r21 != 0) goto L276
            goto L2aa
        L276:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.<init>()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            long r4 = r13.getSize()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r12)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r9)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r11)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            long r4 = r1.mLastPartSize     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            r3.append(r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.String r3 = r3.toString()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            r0.<init>(r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            throw r0     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
        L29d:
            r0 = move-exception
            r20 = r5
            r19 = r6
            r17 = r2
            goto L325
        L2a6:
            r20 = r5
            r19 = r6
        L2aa:
            if (r3 != 0) goto L2e3
            long r5 = r13.getSize()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L2df com.alibaba.sdk.android.oss.ClientException -> L31e
            r17 = r2
            long r2 = (long) r9
            int r18 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r18 != 0) goto L2b8
            goto L2e5
        L2b8:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r2.<init>()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r2.append(r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            long r3 = r13.getSize()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r2.append(r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r2.append(r12)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r2.append(r9)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r2.append(r11)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            long r3 = r1.mLastPartSize     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r2.append(r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.String r2 = r2.toString()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r0.<init>(r2)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            throw r0     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
        L2df:
            r0 = move-exception
            r17 = r2
            goto L30e
        L2e3:
            r17 = r2
        L2e5:
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r2 = r1.mPartETags     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r2.add(r14)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            long r2 = r1.mUploadedLength     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            long r4 = r13.getSize()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            long r2 = r2 + r4
            r1.mUploadedLength = r2     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            java.util.List<java.lang.Integer> r2 = r1.mAlreadyUploadIndex     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            int r3 = r13.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            r2.add(r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L30d com.alibaba.sdk.android.oss.ClientException -> L31e
            int r12 = r16 + 1
            r2 = r17
            r6 = r19
            r5 = r20
            r3 = 0
            r4 = 0
            r11 = 1
            goto L1cd
        L30d:
            r0 = move-exception
        L30e:
            r5 = r20
            goto L325
        L311:
            r17 = r2
            r20 = r5
            r19 = r6
            goto L331
        L318:
            r0 = move-exception
            r17 = r2
            r20 = r5
            goto L323
        L31e:
            r0 = move-exception
            throw r0
        L320:
            r0 = move-exception
            r17 = r2
        L323:
            r19 = r6
        L325:
            int r2 = r0.getStatusCode()
            r3 = 404(0x194, float:5.66E-43)
            if (r2 != r3) goto L33f
            r2 = 0
            r1.mUploadId = r2
            r8 = 0
        L331:
            r7.waitUntilFinished()
            if (r8 != 0) goto L337
            goto L340
        L337:
            r2 = r17
            r6 = r19
            r3 = 0
            r4 = 0
            goto L18b
        L33f:
            throw r0
        L340:
            java.io.File r0 = r1.mRecordFile
            boolean r0 = r0.exists()
            if (r0 != 0) goto L373
            java.io.File r0 = r1.mRecordFile
            boolean r0 = r0.createNewFile()
            if (r0 == 0) goto L351
            goto L373
        L351:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Can't create file at path: "
            r2.append(r3)
            java.io.File r3 = r1.mRecordFile
            java.lang.String r3 = r3.getAbsolutePath()
            r2.append(r3)
            java.lang.String r3 = "\nPlease make sure the directory exist!"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            throw r0
        L373:
            java.lang.String r0 = r1.mUploadId
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            if (r0 == 0) goto L3c3
            com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r0 = new com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r2
            java.lang.String r2 = r2.getBucketName()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r3 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r3
            java.lang.String r3 = r3.getObjectKey()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r4 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r4 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r4
            com.alibaba.sdk.android.oss.model.ObjectMetadata r4 = r4.getMetadata()
            r0.<init>(r2, r3, r4)
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r2 = r1.mApiOperation
            r3 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = r2.initMultipartUpload(r0, r3)
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r0.getResult()
            com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r0 = (com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult) r0
            java.lang.String r0 = r0.getUploadId()
            r1.mUploadId = r0
            java.io.File r0 = r1.mRecordFile
            if (r0 == 0) goto L3c3
            java.io.BufferedWriter r0 = new java.io.BufferedWriter
            java.io.FileWriter r2 = new java.io.FileWriter
            java.io.File r3 = r1.mRecordFile
            r2.<init>(r3)
            r0.<init>(r2)
            java.lang.String r2 = r1.mUploadId
            r0.write(r2)
            r0.close()
        L3c3:
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r1.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0
            java.lang.String r2 = r1.mUploadId
            r0.setUploadId(r2)
            return
    }

    @Override
    protected void processException(java.lang.Exception r4) {
            r3 = this;
            java.lang.Object r0 = r3.mLock
            monitor-enter(r0)
            int r1 = r3.mPartExceptionCount     // Catch: java.lang.Throwable -> L37
            r2 = 1
            int r1 = r1 + r2
            r3.mPartExceptionCount = r1     // Catch: java.lang.Throwable -> L37
            r3.mUploadException = r4     // Catch: java.lang.Throwable -> L37
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r4)     // Catch: java.lang.Throwable -> L37
            com.alibaba.sdk.android.oss.network.ExecutionContext r4 = r3.mContext     // Catch: java.lang.Throwable -> L37
            com.alibaba.sdk.android.oss.network.CancellationHandler r4 = r4.getCancellationHandler()     // Catch: java.lang.Throwable -> L37
            boolean r4 = r4.isCancelled()     // Catch: java.lang.Throwable -> L37
            if (r4 == 0) goto L25
            boolean r4 = r3.mIsCancel     // Catch: java.lang.Throwable -> L37
            if (r4 != 0) goto L25
            r3.mIsCancel = r2     // Catch: java.lang.Throwable -> L37
            java.lang.Object r4 = r3.mLock     // Catch: java.lang.Throwable -> L37
            r4.notify()     // Catch: java.lang.Throwable -> L37
        L25:
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r4 = r3.mPartETags     // Catch: java.lang.Throwable -> L37
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L37
            int r1 = r3.mRunPartTaskCount     // Catch: java.lang.Throwable -> L37
            int r2 = r3.mPartExceptionCount     // Catch: java.lang.Throwable -> L37
            int r1 = r1 - r2
            if (r4 != r1) goto L35
            r3.notifyMultipartThread()     // Catch: java.lang.Throwable -> L37
        L35:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            return
        L37:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            throw r4
    }

    @Override
    protected void uploadPartFinish(com.alibaba.sdk.android.oss.model.PartETag r9) throws java.lang.Exception {
            r8 = this;
            com.alibaba.sdk.android.oss.network.ExecutionContext r9 = r8.mContext
            com.alibaba.sdk.android.oss.network.CancellationHandler r9 = r9.getCancellationHandler()
            boolean r9 = r9.isCancelled()
            if (r9 == 0) goto L2d
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r9 = r8.mSp
            java.lang.String r0 = r8.mUploadId
            boolean r9 = r9.contains(r0)
            if (r9 != 0) goto L2d
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r9 = r8.mSp
            java.lang.String r0 = r8.mUploadId
            long r1 = r8.mUploadedLength
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r9.setStringValue(r0, r1)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3 = r8.mRequest
            long r4 = r8.mUploadedLength
            long r6 = r8.mFileLength
            r2 = r8
            r2.onProgressCallback(r3, r4, r6)
        L2d:
            return
    }
}
