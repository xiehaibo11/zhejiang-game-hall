package com.alibaba.sdk.android.oss.internal;

public class SequenceUploadTask extends com.alibaba.sdk.android.oss.internal.BaseMultipartUploadTask<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> implements java.util.concurrent.Callable<com.alibaba.sdk.android.oss.model.ResumableUploadResult> {
    private java.util.List<java.lang.Integer> mAlreadyUploadIndex;
    private java.io.File mCRC64RecordFile;
    private long mFirstPartSize;
    private java.io.File mRecordFile;
    private com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences mSp;

    public SequenceUploadTask(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r2, com.alibaba.sdk.android.oss.network.ExecutionContext r3, com.alibaba.sdk.android.oss.internal.InternalRequestOperation r4) {
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
            if (r5 <= 0) goto L74
            java.util.List<java.lang.Integer> r5 = r13.mAlreadyUploadIndex
            int r5 = r5.size()
            if (r5 <= 0) goto L74
            long r5 = r13.mUploadedLength
            long r7 = r13.mFileLength
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 > 0) goto L6c
            long r5 = r13.mFirstPartSize
            long r7 = (long) r2
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 != 0) goto L64
            long r5 = r13.mUploadedLength
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r7 = r13.mSp
            java.lang.String r8 = r13.mUploadId
            java.lang.String r7 = r7.getStringValue(r8)
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L4e
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r5 = r13.mSp
            java.lang.String r6 = r13.mUploadId
            java.lang.String r5 = r5.getStringValue(r6)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            long r5 = r5.longValue()
        L4e:
            r9 = r5
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest> r5 = r13.mProgressCallback
            if (r5 == 0) goto L5c
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback<Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest> r7 = r13.mProgressCallback
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r8 = r13.mRequest
            long r11 = r13.mFileLength
            r7.onProgress(r8, r9, r11)
        L5c:
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r5 = r13.mSp
            java.lang.String r6 = r13.mUploadId
            r5.removeKey(r6)
            goto L74
        L64:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r1 = "The part size setting is inconsistent with before"
            r0.<init>(r1)
            throw r0
        L6c:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r1 = "The uploading file is inconsistent with before"
            r0.<init>(r1)
            throw r0
        L74:
            if (r3 >= r4) goto Lb6
            java.util.List<java.lang.Integer> r5 = r13.mAlreadyUploadIndex
            int r5 = r5.size()
            if (r5 == 0) goto L8d
            java.util.List<java.lang.Integer> r5 = r13.mAlreadyUploadIndex
            int r6 = r3 + 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            boolean r5 = r5.contains(r6)
            if (r5 == 0) goto L8d
            goto Lb3
        L8d:
            int r5 = r4 + (-1)
            if (r3 != r5) goto L95
            long r5 = r13.mFileLength
            long r5 = r5 - r0
            int r2 = (int) r5
        L95:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "upload part readByte : "
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r5)
            long r5 = (long) r2
            long r0 = r0 + r5
            r13.uploadPart(r3, r2, r4)
            java.lang.Exception r5 = r13.mUploadException
            if (r5 == 0) goto Lb3
            goto Lb6
        Lb3:
            int r3 = r3 + 1
            goto L74
        Lb6:
            r13.checkException()
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r0 = r13.completeMultipartUploadResult()
            r1 = 0
            if (r0 == 0) goto Lc5
            com.alibaba.sdk.android.oss.model.ResumableUploadResult r1 = new com.alibaba.sdk.android.oss.model.ResumableUploadResult
            r1.<init>(r0)
        Lc5:
            java.io.File r0 = r13.mRecordFile
            if (r0 == 0) goto Lcc
            r0.delete()
        Lcc:
            java.io.File r0 = r13.mCRC64RecordFile
            if (r0 == 0) goto Ld3
            r0.delete()
        Ld3:
            return r1
    }

    @Override
    protected void initMultipartUploadId() throws java.io.IOException, com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r13 = this;
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0
            java.lang.String r0 = r0.getRecordDirectory()
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            r1 = 0
            if (r0 != 0) goto L233
            android.net.Uri r0 = r13.mUploadUri
            if (r0 == 0) goto L3a
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r13.mContext
            android.content.Context r0 = r0.getApplicationContext()
            android.content.ContentResolver r0 = r0.getContentResolver()
            android.net.Uri r2 = r13.mUploadUri
            java.lang.String r3 = "r"
            android.os.ParcelFileDescriptor r0 = r0.openFileDescriptor(r2, r3)
            java.io.FileDescriptor r2 = r0.getFileDescriptor()     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateMd5Str(r2)     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L40
            r0.close()
            goto L40
        L33:
            r1 = move-exception
            if (r0 == 0) goto L39
            r0.close()
        L39:
            throw r1
        L3a:
            java.lang.String r0 = r13.mUploadFilePath
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateMd5Str(r0)
        L40:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r2
            java.lang.String r2 = r2.getBucketName()
            r0.append(r2)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r2
            java.lang.String r2 = r2.getObjectKey()
            r0.append(r2)
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r2
            long r2 = r2.getPartSize()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            boolean r2 = r13.mCheckCRC64
            if (r2 == 0) goto L74
            java.lang.String r2 = "-crc64"
            goto L76
        L74:
            java.lang.String r2 = ""
        L76:
            r0.append(r2)
            java.lang.String r2 = "-sequence"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateMd5Str(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r3 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r3
            java.lang.String r3 = r3.getRecordDirectory()
            r2.append(r3)
            java.lang.String r3 = java.io.File.separator
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            r13.mRecordFile = r2
            boolean r0 = r2.exists()
            if (r0 == 0) goto Lde
            java.io.BufferedReader r0 = new java.io.BufferedReader
            java.io.FileReader r2 = new java.io.FileReader
            java.io.File r3 = r13.mRecordFile
            r2.<init>(r3)
            r0.<init>(r2)
            java.lang.String r2 = r0.readLine()
            r13.mUploadId = r2
            r0.close()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "sequence [initUploadId] - Found record file, uploadid: "
            r0.append(r2)
            java.lang.String r2 = r13.mUploadId
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0)
        Lde:
            java.lang.String r0 = r13.mUploadId
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            if (r0 != 0) goto L200
            boolean r0 = r13.mCheckCRC64
            if (r0 == 0) goto L13e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r2
            java.lang.String r2 = r2.getRecordDirectory()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = r13.mUploadId
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            boolean r0 = r2.exists()
            if (r0 == 0) goto L13e
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r2)
            java.io.ObjectInputStream r3 = new java.io.ObjectInputStream
            r3.<init>(r0)
            java.lang.Object r0 = r3.readObject()     // Catch: java.lang.Throwable -> L129 java.lang.ClassNotFoundException -> L12b
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Throwable -> L129 java.lang.ClassNotFoundException -> L12b
            r2.delete()     // Catch: java.lang.ClassNotFoundException -> L127 java.lang.Throwable -> L129
            goto L130
        L127:
            r4 = move-exception
            goto L12d
        L129:
            r0 = move-exception
            goto L137
        L12b:
            r4 = move-exception
            r0 = r1
        L12d:
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r4)     // Catch: java.lang.Throwable -> L129
        L130:
            r3.close()
            r2.delete()
            goto L13f
        L137:
            r3.close()
            r2.delete()
            throw r0
        L13e:
            r0 = r1
        L13f:
            r2 = 0
            r3 = 0
        L141:
            com.alibaba.sdk.android.oss.model.ListPartsRequest r4 = new com.alibaba.sdk.android.oss.model.ListPartsRequest
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r5 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r5 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r5
            java.lang.String r5 = r5.getBucketName()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r6 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r6 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r6
            java.lang.String r6 = r6.getObjectKey()
            java.lang.String r7 = r13.mUploadId
            r4.<init>(r5, r6, r7)
            if (r3 <= 0) goto L161
            java.lang.Integer r5 = java.lang.Integer.valueOf(r3)
            r4.setPartNumberMarker(r5)
        L161:
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r5 = r13.mApiOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r4 = r5.listParts(r4, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r5 = r4.getResult()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            com.alibaba.sdk.android.oss.model.ListPartsResult r5 = (com.alibaba.sdk.android.oss.model.ListPartsResult) r5     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            boolean r6 = r5.isTruncated()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            int r3 = r5.getNextPartNumberMarker()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            java.util.List r5 = r5.getParts()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            r7 = 0
        L17a:
            int r8 = r5.size()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            if (r7 >= r8) goto L1f9
            java.lang.Object r8 = r5.get(r7)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            com.alibaba.sdk.android.oss.model.PartSummary r8 = (com.alibaba.sdk.android.oss.model.PartSummary) r8     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            com.alibaba.sdk.android.oss.model.PartETag r9 = new com.alibaba.sdk.android.oss.model.PartETag     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            int r10 = r8.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            java.lang.String r11 = r8.getETag()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            r9.<init>(r10, r11)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            long r10 = r8.getSize()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            r9.setPartSize(r10)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            if (r0 == 0) goto L1c5
            int r10 = r0.size()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            if (r10 <= 0) goto L1c5
            int r10 = r9.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            boolean r10 = r0.containsKey(r10)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            if (r10 == 0) goto L1c5
            int r10 = r9.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            java.lang.Object r10 = r0.get(r10)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            java.lang.Long r10 = (java.lang.Long) r10     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            long r10 = r10.longValue()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            r9.setCRC64(r10)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
        L1c5:
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r10 = r13.mPartETags     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            r10.add(r9)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            long r9 = r13.mUploadedLength     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            long r11 = r8.getSize()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            long r9 = r9 + r11
            r13.mUploadedLength = r9     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            java.util.List<java.lang.Integer> r9 = r13.mAlreadyUploadIndex     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            int r10 = r8.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            r9.add(r10)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            if (r7 != 0) goto L1e8
            long r8 = r8.getSize()     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
            r13.mFirstPartSize = r8     // Catch: com.alibaba.sdk.android.oss.ClientException -> L1eb com.alibaba.sdk.android.oss.ServiceException -> L1ed
        L1e8:
            int r7 = r7 + 1
            goto L17a
        L1eb:
            r0 = move-exception
            throw r0
        L1ed:
            r5 = move-exception
            int r6 = r5.getStatusCode()
            r7 = 404(0x194, float:5.66E-43)
            if (r6 != r7) goto L1ff
            r13.mUploadId = r1
            r6 = 0
        L1f9:
            r4.waitUntilFinished()
            if (r6 != 0) goto L141
            goto L200
        L1ff:
            throw r5
        L200:
            java.io.File r0 = r13.mRecordFile
            boolean r0 = r0.exists()
            if (r0 != 0) goto L233
            java.io.File r0 = r13.mRecordFile
            boolean r0 = r0.createNewFile()
            if (r0 == 0) goto L211
            goto L233
        L211:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can't create file at path: "
            r1.append(r2)
            java.io.File r2 = r13.mRecordFile
            java.lang.String r2 = r2.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = "\nPlease make sure the directory exist!"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L233:
            java.lang.String r0 = r13.mUploadId
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            if (r0 == 0) goto L285
            com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r0 = new com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r2
            java.lang.String r2 = r2.getBucketName()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r3 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r3
            java.lang.String r3 = r3.getObjectKey()
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r4 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r4 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r4
            com.alibaba.sdk.android.oss.model.ObjectMetadata r4 = r4.getMetadata()
            r0.<init>(r2, r3, r4)
            r2 = 1
            r0.isSequential = r2
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r2 = r13.mApiOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = r2.initMultipartUpload(r0, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r0.getResult()
            com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r0 = (com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult) r0
            java.lang.String r0 = r0.getUploadId()
            r13.mUploadId = r0
            java.io.File r0 = r13.mRecordFile
            if (r0 == 0) goto L285
            java.io.BufferedWriter r0 = new java.io.BufferedWriter
            java.io.FileWriter r1 = new java.io.FileWriter
            java.io.File r2 = r13.mRecordFile
            r1.<init>(r2)
            r0.<init>(r1)
            java.lang.String r1 = r13.mUploadId
            r0.write(r1)
            r0.close()
        L285:
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r13.mRequest
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0
            java.lang.String r1 = r13.mUploadId
            r0.setUploadId(r1)
            return
    }

    @Override
    protected void processException(java.lang.Exception r3) {
            r2 = this;
            java.lang.Exception r0 = r2.mUploadException
            if (r0 == 0) goto L14
            java.lang.String r0 = r3.getMessage()
            java.lang.Exception r1 = r2.mUploadException
            java.lang.String r1 = r1.getMessage()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L16
        L14:
            r2.mUploadException = r3
        L16:
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r3)
            com.alibaba.sdk.android.oss.network.ExecutionContext r3 = r2.mContext
            com.alibaba.sdk.android.oss.network.CancellationHandler r3 = r3.getCancellationHandler()
            boolean r3 = r3.isCancelled()
            if (r3 == 0) goto L2c
            boolean r3 = r2.mIsCancel
            if (r3 != 0) goto L2c
            r3 = 1
            r2.mIsCancel = r3
        L2c:
            return
    }

    @Override
    public void uploadPart(int r16, int r17, int r18) {
            r15 = this;
            r7 = r15
            r0 = r16
            r8 = r17
            r1 = 0
            com.alibaba.sdk.android.oss.network.ExecutionContext r2 = r7.mContext     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            com.alibaba.sdk.android.oss.network.CancellationHandler r2 = r2.getCancellationHandler()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            boolean r2 = r2.isCancelled()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            if (r2 == 0) goto L13
            return
        L13:
            int r2 = r7.mRunPartTaskCount     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            r3 = 1
            int r2 = r2 + r3
            r7.mRunPartTaskCount = r2     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            r15.preUploadPart(r16, r17, r18)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            long r4 = (long) r0     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r7.mRequest     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r2     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            long r9 = r2.getPartSize()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            long r4 = r4 * r9
            byte[] r2 = new byte[r8]     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            android.net.Uri r6 = r7.mUploadUri     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            r9 = 0
            if (r6 == 0) goto L69
            com.alibaba.sdk.android.oss.network.ExecutionContext r6 = r7.mContext     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            android.content.Context r6 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            android.content.ContentResolver r6 = r6.getContentResolver()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            android.net.Uri r10 = r7.mUploadUri     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            java.io.InputStream r6 = r6.openInputStream(r10)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            java.io.BufferedInputStream r10 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5e com.alibaba.sdk.android.oss.ServiceException -> L63
            r10.<init>(r6)     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5e com.alibaba.sdk.android.oss.ServiceException -> L63
            r10.skip(r4)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L51 com.alibaba.sdk.android.oss.ServiceException -> L54
            r10.read(r2, r9, r8)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L51 com.alibaba.sdk.android.oss.ServiceException -> L54
            r9 = r1
            r11 = r10
            r10 = r6
            goto L7b
        L4d:
            r0 = move-exception
            r2 = r0
            r11 = r10
            goto L5b
        L51:
            r0 = move-exception
            r11 = r10
            goto L60
        L54:
            r0 = move-exception
            r9 = r1
            r11 = r10
            goto L66
        L58:
            r0 = move-exception
            r2 = r0
            r11 = r1
        L5b:
            r10 = r6
            goto L1bd
        L5e:
            r0 = move-exception
            r11 = r1
        L60:
            r10 = r6
            goto L13a
        L63:
            r0 = move-exception
            r9 = r1
            r11 = r9
        L66:
            r10 = r6
            goto L15b
        L69:
            java.io.RandomAccessFile r6 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            java.io.File r10 = r7.mUploadFile     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            java.lang.String r11 = "r"
            r6.<init>(r10, r11)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L137 com.alibaba.sdk.android.oss.ServiceException -> L157
            r6.seek(r4)     // Catch: java.lang.Throwable -> L120 java.lang.Exception -> L127 com.alibaba.sdk.android.oss.ServiceException -> L12c
            r6.readFully(r2, r9, r8)     // Catch: java.lang.Throwable -> L120 java.lang.Exception -> L127 com.alibaba.sdk.android.oss.ServiceException -> L12c
            r10 = r1
            r11 = r10
            r9 = r6
        L7b:
            com.alibaba.sdk.android.oss.model.UploadPartRequest r12 = new com.alibaba.sdk.android.oss.model.UploadPartRequest     // Catch: java.lang.Exception -> L11b com.alibaba.sdk.android.oss.ServiceException -> L11e java.lang.Throwable -> L1ba
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r4 = r7.mRequest     // Catch: java.lang.Exception -> L11b com.alibaba.sdk.android.oss.ServiceException -> L11e java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r4 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r4     // Catch: java.lang.Exception -> L11b com.alibaba.sdk.android.oss.ServiceException -> L11e java.lang.Throwable -> L1ba
            java.lang.String r4 = r4.getBucketName()     // Catch: java.lang.Exception -> L11b com.alibaba.sdk.android.oss.ServiceException -> L11e java.lang.Throwable -> L1ba
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r5 = r7.mRequest     // Catch: java.lang.Exception -> L11b com.alibaba.sdk.android.oss.ServiceException -> L11e java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r5 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r5     // Catch: java.lang.Exception -> L11b com.alibaba.sdk.android.oss.ServiceException -> L11e java.lang.Throwable -> L1ba
            java.lang.String r5 = r5.getObjectKey()     // Catch: java.lang.Exception -> L11b com.alibaba.sdk.android.oss.ServiceException -> L11e java.lang.Throwable -> L1ba
            java.lang.String r6 = r7.mUploadId     // Catch: java.lang.Exception -> L11b com.alibaba.sdk.android.oss.ServiceException -> L11e java.lang.Throwable -> L1ba
            int r0 = r0 + r3
            r12.<init>(r4, r5, r6, r0)     // Catch: java.lang.Exception -> L11b com.alibaba.sdk.android.oss.ServiceException -> L11e java.lang.Throwable -> L1ba
            r12.setPartContent(r2)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateBase64Md5(r2)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            r12.setMd5Digest(r0)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r0 = r7.mRequest     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.model.ResumableUploadRequest r0 = (com.alibaba.sdk.android.oss.model.ResumableUploadRequest) r0     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            java.lang.Enum r0 = r0.getCRC64()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            r12.setCRC64(r0)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r7.mApiOperation     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.model.UploadPartResult r0 = r0.syncUploadPart(r12)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.model.PartETag r1 = new com.alibaba.sdk.android.oss.model.PartETag     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            int r2 = r12.getPartNumber()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            java.lang.String r4 = r0.getETag()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            r1.<init>(r2, r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            long r4 = (long) r8     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            r1.setPartSize(r4)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            boolean r2 = r7.mCheckCRC64     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            if (r2 == 0) goto Lce
            java.lang.Long r0 = r0.getClientCRC()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            long r13 = r0.longValue()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            r1.setCRC64(r13)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
        Lce:
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r7.mPartETags     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            r0.add(r1)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            long r13 = r7.mUploadedLength     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            long r13 = r13 + r4
            r7.mUploadedLength = r13     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            r15.uploadPartFinish(r1)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r7.mContext     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.network.CancellationHandler r0 = r0.getCancellationHandler()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            boolean r0 = r0.isCancelled()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            if (r0 != 0) goto L102
            Request extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2 = r7.mRequest     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            long r3 = r7.mUploadedLength     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            long r5 = r7.mFileLength     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            r1 = r15
            r1.onProgressCallback(r2, r3, r5)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            if (r9 == 0) goto Lf6
            r9.close()     // Catch: java.io.IOException -> L143
        Lf6:
            if (r10 == 0) goto Lfb
            r10.close()     // Catch: java.io.IOException -> L143
        Lfb:
            if (r11 == 0) goto L1b9
            r11.close()     // Catch: java.io.IOException -> L143
            goto L1b9
        L102:
            com.alibaba.sdk.android.oss.TaskCancelException r0 = new com.alibaba.sdk.android.oss.TaskCancelException     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            java.lang.String r1 = "sequence upload task cancel"
            r0.<init>(r1)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.ClientException r1 = new com.alibaba.sdk.android.oss.ClientException     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            java.lang.String r2 = r0.getMessage()     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            r1.<init>(r2, r0, r3)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
            throw r1     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L117 java.lang.Exception -> L11b java.lang.Throwable -> L1ba
        L117:
            r0 = move-exception
            r1 = r12
            goto L15b
        L11b:
            r0 = move-exception
            r1 = r9
            goto L13a
        L11e:
            r0 = move-exception
            goto L15b
        L120:
            r0 = move-exception
            r2 = r0
            r10 = r1
            r11 = r10
            r1 = r6
            goto L1bd
        L127:
            r0 = move-exception
            r10 = r1
            r11 = r10
            r1 = r6
            goto L13a
        L12c:
            r0 = move-exception
            r10 = r1
            r11 = r10
            r9 = r6
            goto L15b
        L131:
            r0 = move-exception
            r2 = r0
            r10 = r1
            r11 = r10
            goto L1bd
        L137:
            r0 = move-exception
            r10 = r1
            r11 = r10
        L13a:
            r15.processException(r0)     // Catch: java.lang.Throwable -> L154
            if (r1 == 0) goto L145
            r1.close()     // Catch: java.io.IOException -> L143
            goto L145
        L143:
            r0 = move-exception
            goto L150
        L145:
            if (r10 == 0) goto L14a
            r10.close()     // Catch: java.io.IOException -> L143
        L14a:
            if (r11 == 0) goto L1b9
            r11.close()     // Catch: java.io.IOException -> L143
            goto L1b9
        L150:
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)
            goto L1b9
        L154:
            r0 = move-exception
            r2 = r0
            goto L1bd
        L157:
            r0 = move-exception
            r9 = r1
            r10 = r9
            r11 = r10
        L15b:
            int r2 = r0.getStatusCode()     // Catch: java.lang.Throwable -> L1ba
            r3 = 409(0x199, float:5.73E-43)
            if (r2 == r3) goto L167
            r15.processException(r0)     // Catch: java.lang.Throwable -> L1ba
            goto L1aa
        L167:
            com.alibaba.sdk.android.oss.model.PartETag r2 = new com.alibaba.sdk.android.oss.model.PartETag     // Catch: java.lang.Throwable -> L1ba
            int r3 = r1.getPartNumber()     // Catch: java.lang.Throwable -> L1ba
            java.lang.String r0 = r0.getPartEtag()     // Catch: java.lang.Throwable -> L1ba
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L1ba
            byte[] r0 = r1.getPartContent()     // Catch: java.lang.Throwable -> L1ba
            int r0 = r0.length     // Catch: java.lang.Throwable -> L1ba
            long r3 = (long) r0     // Catch: java.lang.Throwable -> L1ba
            r2.setPartSize(r3)     // Catch: java.lang.Throwable -> L1ba
            boolean r0 = r7.mCheckCRC64     // Catch: java.lang.Throwable -> L1ba
            if (r0 == 0) goto L19f
            byte[] r0 = r1.getPartContent()     // Catch: java.lang.Throwable -> L1ba
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L1ba
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1ba
            java.util.zip.CheckedInputStream r0 = new java.util.zip.CheckedInputStream     // Catch: java.lang.Throwable -> L1ba
            com.alibaba.sdk.android.oss.common.utils.CRC64 r3 = new com.alibaba.sdk.android.oss.common.utils.CRC64     // Catch: java.lang.Throwable -> L1ba
            r3.<init>()     // Catch: java.lang.Throwable -> L1ba
            r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> L1ba
            java.util.zip.Checksum r0 = r0.getChecksum()     // Catch: java.lang.Throwable -> L1ba
            long r0 = r0.getValue()     // Catch: java.lang.Throwable -> L1ba
            r2.setCRC64(r0)     // Catch: java.lang.Throwable -> L1ba
        L19f:
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r7.mPartETags     // Catch: java.lang.Throwable -> L1ba
            r0.add(r2)     // Catch: java.lang.Throwable -> L1ba
            long r0 = r7.mUploadedLength     // Catch: java.lang.Throwable -> L1ba
            long r2 = (long) r8     // Catch: java.lang.Throwable -> L1ba
            long r0 = r0 + r2
            r7.mUploadedLength = r0     // Catch: java.lang.Throwable -> L1ba
        L1aa:
            if (r9 == 0) goto L1af
            r9.close()     // Catch: java.io.IOException -> L143
        L1af:
            if (r10 == 0) goto L1b4
            r10.close()     // Catch: java.io.IOException -> L143
        L1b4:
            if (r11 == 0) goto L1b9
            r11.close()     // Catch: java.io.IOException -> L143
        L1b9:
            return
        L1ba:
            r0 = move-exception
            r2 = r0
            r1 = r9
        L1bd:
            if (r1 == 0) goto L1c5
            r1.close()     // Catch: java.io.IOException -> L1c3
            goto L1c5
        L1c3:
            r0 = move-exception
            goto L1d0
        L1c5:
            if (r10 == 0) goto L1ca
            r10.close()     // Catch: java.io.IOException -> L1c3
        L1ca:
            if (r11 == 0) goto L1d3
            r11.close()     // Catch: java.io.IOException -> L1c3
            goto L1d3
        L1d0:
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)
        L1d3:
            throw r2
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
