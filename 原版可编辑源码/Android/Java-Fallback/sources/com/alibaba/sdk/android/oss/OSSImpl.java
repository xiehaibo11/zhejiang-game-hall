package com.alibaba.sdk.android.oss;

class OSSImpl implements com.alibaba.sdk.android.oss.OSS {
    private com.alibaba.sdk.android.oss.ClientConfiguration conf;
    private com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider credentialProvider;
    private java.net.URI endpointURI;
    private com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation extensionRequestOperation;
    private com.alibaba.sdk.android.oss.internal.InternalRequestOperation internalRequestOperation;

    public OSSImpl(android.content.Context r2, com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r3, com.alibaba.sdk.android.oss.ClientConfiguration r4) {
            r1 = this;
            r1.<init>()
            r1.credentialProvider = r3
            if (r4 != 0) goto Lb
            com.alibaba.sdk.android.oss.ClientConfiguration r4 = com.alibaba.sdk.android.oss.ClientConfiguration.getDefaultConf()
        Lb:
            r1.conf = r4
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r4 = new com.alibaba.sdk.android.oss.internal.InternalRequestOperation
            android.content.Context r2 = r2.getApplicationContext()
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r1.conf
            r4.<init>(r2, r3, r0)
            r1.internalRequestOperation = r4
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r2 = new com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r3 = r1.internalRequestOperation
            r2.<init>(r3)
            r1.extensionRequestOperation = r2
            return
    }

    public OSSImpl(android.content.Context r3, java.lang.String r4, com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r5, com.alibaba.sdk.android.oss.ClientConfiguration r6) {
            r2 = this;
            r2.<init>()
            android.content.Context r0 = r3.getApplicationContext()
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.init(r0, r6)
            java.lang.String r4 = r4.trim()     // Catch: java.net.URISyntaxException -> L90
            java.lang.String r0 = "http"
            boolean r0 = r4.startsWith(r0)     // Catch: java.net.URISyntaxException -> L90
            if (r0 != 0) goto L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.net.URISyntaxException -> L90
            r0.<init>()     // Catch: java.net.URISyntaxException -> L90
            java.lang.String r1 = "http://"
            r0.append(r1)     // Catch: java.net.URISyntaxException -> L90
            r0.append(r4)     // Catch: java.net.URISyntaxException -> L90
            java.lang.String r4 = r0.toString()     // Catch: java.net.URISyntaxException -> L90
        L27:
            java.net.URI r0 = new java.net.URI     // Catch: java.net.URISyntaxException -> L90
            r0.<init>(r4)     // Catch: java.net.URISyntaxException -> L90
            r2.endpointURI = r0     // Catch: java.net.URISyntaxException -> L90
            if (r5 == 0) goto L88
            r4 = 0
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            java.net.URI r0 = r2.endpointURI     // Catch: java.lang.Exception -> L44
            java.lang.String r0 = r0.getHost()     // Catch: java.lang.Exception -> L44
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isValidateIP(r0)     // Catch: java.lang.Exception -> L44
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Exception -> L44
            goto L48
        L44:
            r0 = move-exception
            r0.printStackTrace()
        L48:
            java.net.URI r0 = r2.endpointURI
            java.lang.String r0 = r0.getScheme()
            java.lang.String r1 = "https"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L65
            boolean r4 = r4.booleanValue()
            if (r4 != 0) goto L5d
            goto L65
        L5d:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "endpoint should not be format with https://ip."
            r3.<init>(r4)
            throw r3
        L65:
            r2.credentialProvider = r5
            if (r6 != 0) goto L6d
            com.alibaba.sdk.android.oss.ClientConfiguration r6 = com.alibaba.sdk.android.oss.ClientConfiguration.getDefaultConf()
        L6d:
            r2.conf = r6
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r4 = new com.alibaba.sdk.android.oss.internal.InternalRequestOperation
            android.content.Context r3 = r3.getApplicationContext()
            java.net.URI r6 = r2.endpointURI
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r2.conf
            r4.<init>(r3, r6, r5, r0)
            r2.internalRequestOperation = r4
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r3 = new com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r4 = r2.internalRequestOperation
            r3.<init>(r4)
            r2.extensionRequestOperation = r3
            return
        L88:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "CredentialProvider can't be null."
            r3.<init>(r4)
            throw r3
        L90:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Endpoint must be a string like 'http://oss-cn-****.aliyuncs.com',or your cname like 'http://image.cnamedomain.com'!"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult abortMultipartUpload(com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.abortMultipartUpload(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult r3 = (com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult) r3
            return r3
    }

    @Override
    public void abortResumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2) throws java.io.IOException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r0 = r1.extensionRequestOperation
            r0.abortResumableUpload(r2)
            return
    }

    @Override
    public com.alibaba.sdk.android.oss.model.AppendObjectResult appendObject(com.alibaba.sdk.android.oss.model.AppendObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.model.AppendObjectResult r2 = r0.syncAppendObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult> asyncAbortMultipartUpload(com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest, com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.abortMultipartUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.AppendObjectResult> asyncAppendObject(com.alibaba.sdk.android.oss.model.AppendObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.AppendObjectRequest, com.alibaba.sdk.android.oss.model.AppendObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.appendObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> asyncCompleteMultipartUpload(com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.completeMultipartUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CopyObjectResult> asyncCopyObject(com.alibaba.sdk.android.oss.model.CopyObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CopyObjectRequest, com.alibaba.sdk.android.oss.model.CopyObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.copyObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CreateBucketResult> asyncCreateBucket(com.alibaba.sdk.android.oss.model.CreateBucketRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CreateBucketRequest, com.alibaba.sdk.android.oss.model.CreateBucketResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.createBucket(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketResult> asyncDeleteBucket(com.alibaba.sdk.android.oss.model.DeleteBucketRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketRequest, com.alibaba.sdk.android.oss.model.DeleteBucketResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.deleteBucket(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult> asyncDeleteBucketLifecycle(com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.deleteBucketLifecycle(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult> asyncDeleteBucketLogging(com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest, com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.deleteBucketLogging(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult> asyncDeleteMultipleObject(com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest, com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.deleteMultipleObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteObjectResult> asyncDeleteObject(com.alibaba.sdk.android.oss.model.DeleteObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteObjectRequest, com.alibaba.sdk.android.oss.model.DeleteObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.deleteObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketACLResult> asyncGetBucketACL(com.alibaba.sdk.android.oss.model.GetBucketACLRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketACLRequest, com.alibaba.sdk.android.oss.model.GetBucketACLResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.getBucketACL(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketInfoResult> asyncGetBucketInfo(com.alibaba.sdk.android.oss.model.GetBucketInfoRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketInfoRequest, com.alibaba.sdk.android.oss.model.GetBucketInfoResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.getBucketInfo(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult> asyncGetBucketLifecycle(com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.getBucketLifecycle(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketLoggingResult> asyncGetBucketLogging(com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest, com.alibaba.sdk.android.oss.model.GetBucketLoggingResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.getBucketLogging(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketRefererResult> asyncGetBucketReferer(com.alibaba.sdk.android.oss.model.GetBucketRefererRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketRefererRequest, com.alibaba.sdk.android.oss.model.GetBucketRefererResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.getBucketReferer(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetObjectResult> asyncGetObject(com.alibaba.sdk.android.oss.model.GetObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetObjectRequest, com.alibaba.sdk.android.oss.model.GetObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.getObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetObjectACLResult> asyncGetObjectACL(com.alibaba.sdk.android.oss.model.GetObjectACLRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetObjectACLRequest, com.alibaba.sdk.android.oss.model.GetObjectACLResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.getObjectACL(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetSymlinkResult> asyncGetSymlink(com.alibaba.sdk.android.oss.model.GetSymlinkRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetSymlinkRequest, com.alibaba.sdk.android.oss.model.GetSymlinkResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.getSymlink(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.HeadObjectResult> asyncHeadObject(com.alibaba.sdk.android.oss.model.HeadObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.HeadObjectRequest, com.alibaba.sdk.android.oss.model.HeadObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.headObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ImagePersistResult> asyncImagePersist(com.alibaba.sdk.android.oss.model.ImagePersistRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ImagePersistRequest, com.alibaba.sdk.android.oss.model.ImagePersistResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.imageActionPersist(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult> asyncInitMultipartUpload(com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest, com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.initMultipartUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListBucketsResult> asyncListBuckets(com.alibaba.sdk.android.oss.model.ListBucketsRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListBucketsRequest, com.alibaba.sdk.android.oss.model.ListBucketsResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.listBuckets(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult> asyncListMultipartUploads(com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest, com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.listMultipartUploads(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListObjectsResult> asyncListObjects(com.alibaba.sdk.android.oss.model.ListObjectsRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListObjectsRequest, com.alibaba.sdk.android.oss.model.ListObjectsResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.listObjects(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListPartsResult> asyncListParts(com.alibaba.sdk.android.oss.model.ListPartsRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListPartsRequest, com.alibaba.sdk.android.oss.model.ListPartsResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.listParts(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> asyncMultipartUpload(com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.MultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r0 = r1.extensionRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.multipartUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult> asyncPutBucketLifecycle(com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.putBucketLifecycle(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketLoggingResult> asyncPutBucketLogging(com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest, com.alibaba.sdk.android.oss.model.PutBucketLoggingResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.putBucketLogging(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketRefererResult> asyncPutBucketReferer(com.alibaba.sdk.android.oss.model.PutBucketRefererRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketRefererRequest, com.alibaba.sdk.android.oss.model.PutBucketRefererResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.putBucketReferer(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutObjectResult> asyncPutObject(com.alibaba.sdk.android.oss.model.PutObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutObjectRequest, com.alibaba.sdk.android.oss.model.PutObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.putObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutSymlinkResult> asyncPutSymlink(com.alibaba.sdk.android.oss.model.PutSymlinkRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutSymlinkRequest, com.alibaba.sdk.android.oss.model.PutSymlinkResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.putSymlink(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.RestoreObjectResult> asyncRestoreObject(com.alibaba.sdk.android.oss.model.RestoreObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.RestoreObjectRequest, com.alibaba.sdk.android.oss.model.RestoreObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.restoreObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ResumableUploadResult> asyncResumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r0 = r1.extensionRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.resumableUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ResumableUploadResult> asyncSequenceUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r0 = r1.extensionRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.sequenceUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.TriggerCallbackResult> asyncTriggerCallback(com.alibaba.sdk.android.oss.model.TriggerCallbackRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.TriggerCallbackRequest, com.alibaba.sdk.android.oss.model.TriggerCallbackResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.triggerCallback(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.UploadPartResult> asyncUploadPart(com.alibaba.sdk.android.oss.model.UploadPartRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.UploadPartRequest, com.alibaba.sdk.android.oss.model.UploadPartResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.uploadPart(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult completeMultipartUpload(com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r2 = r0.syncCompleteMultipartUpload(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.CopyObjectResult copyObject(com.alibaba.sdk.android.oss.model.CopyObjectRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.copyObject(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.CopyObjectResult r3 = (com.alibaba.sdk.android.oss.model.CopyObjectResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.CreateBucketResult createBucket(com.alibaba.sdk.android.oss.model.CreateBucketRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.createBucket(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.CreateBucketResult r3 = (com.alibaba.sdk.android.oss.model.CreateBucketResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteBucketResult deleteBucket(com.alibaba.sdk.android.oss.model.DeleteBucketRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.deleteBucket(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.DeleteBucketResult r3 = (com.alibaba.sdk.android.oss.model.DeleteBucketResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult deleteBucketLifecycle(com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.deleteBucketLifecycle(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult r3 = (com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult deleteBucketLogging(com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.deleteBucketLogging(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult r3 = (com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult deleteMultipleObject(com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.deleteMultipleObject(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult r3 = (com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteObjectResult deleteObject(com.alibaba.sdk.android.oss.model.DeleteObjectRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.deleteObject(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.DeleteObjectResult r3 = (com.alibaba.sdk.android.oss.model.DeleteObjectResult) r3
            return r3
    }

    @Override
    public boolean doesObjectExist(java.lang.String r2, java.lang.String r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r0 = r1.extensionRequestOperation
            boolean r2 = r0.doesObjectExist(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketACLResult getBucketACL(com.alibaba.sdk.android.oss.model.GetBucketACLRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.getBucketACL(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.GetBucketACLResult r3 = (com.alibaba.sdk.android.oss.model.GetBucketACLResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketInfoResult getBucketInfo(com.alibaba.sdk.android.oss.model.GetBucketInfoRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.getBucketInfo(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.GetBucketInfoResult r3 = (com.alibaba.sdk.android.oss.model.GetBucketInfoResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult getBucketLifecycle(com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.getBucketLifecycle(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult r3 = (com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketLoggingResult getBucketLogging(com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.getBucketLogging(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.GetBucketLoggingResult r3 = (com.alibaba.sdk.android.oss.model.GetBucketLoggingResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketRefererResult getBucketReferer(com.alibaba.sdk.android.oss.model.GetBucketRefererRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.getBucketReferer(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.GetBucketRefererResult r3 = (com.alibaba.sdk.android.oss.model.GetBucketRefererResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetObjectResult getObject(com.alibaba.sdk.android.oss.model.GetObjectRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.getObject(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.GetObjectResult r3 = (com.alibaba.sdk.android.oss.model.GetObjectResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetObjectACLResult getObjectACL(com.alibaba.sdk.android.oss.model.GetObjectACLRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.getObjectACL(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.GetObjectACLResult r3 = (com.alibaba.sdk.android.oss.model.GetObjectACLResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetSymlinkResult getSymlink(com.alibaba.sdk.android.oss.model.GetSymlinkRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.model.GetSymlinkResult r2 = r0.syncGetSymlink(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.HeadObjectResult headObject(com.alibaba.sdk.android.oss.model.HeadObjectRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.headObject(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.HeadObjectResult r3 = (com.alibaba.sdk.android.oss.model.HeadObjectResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ImagePersistResult imagePersist(com.alibaba.sdk.android.oss.model.ImagePersistRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.imageActionPersist(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.ImagePersistResult r3 = (com.alibaba.sdk.android.oss.model.ImagePersistResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult initMultipartUpload(com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.initMultipartUpload(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r3 = (com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ListBucketsResult listBuckets(com.alibaba.sdk.android.oss.model.ListBucketsRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.listBuckets(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.ListBucketsResult r3 = (com.alibaba.sdk.android.oss.model.ListBucketsResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult listMultipartUploads(com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.listMultipartUploads(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult r3 = (com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ListObjectsResult listObjects(com.alibaba.sdk.android.oss.model.ListObjectsRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.listObjects(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.ListObjectsResult r3 = (com.alibaba.sdk.android.oss.model.ListObjectsResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ListPartsResult listParts(com.alibaba.sdk.android.oss.model.ListPartsRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.listParts(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.ListPartsResult r3 = (com.alibaba.sdk.android.oss.model.ListPartsResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult multipartUpload(com.alibaba.sdk.android.oss.model.MultipartUploadRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r0 = r2.extensionRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.multipartUpload(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r3 = (com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult) r3
            return r3
    }

    @Override
    public java.lang.String presignConstrainedObjectURL(com.alibaba.sdk.android.oss.model.GeneratePresignedUrlRequest r5) throws com.alibaba.sdk.android.oss.ClientException {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.ObjectURLPresigner r0 = new com.alibaba.sdk.android.oss.internal.ObjectURLPresigner
            java.net.URI r1 = r4.endpointURI
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r2 = r4.credentialProvider
            com.alibaba.sdk.android.oss.ClientConfiguration r3 = r4.conf
            r0.<init>(r1, r2, r3)
            java.lang.String r5 = r0.presignConstrainedURL(r5)
            return r5
    }

    @Override
    public java.lang.String presignConstrainedObjectURL(java.lang.String r5, java.lang.String r6, long r7) throws com.alibaba.sdk.android.oss.ClientException {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.ObjectURLPresigner r0 = new com.alibaba.sdk.android.oss.internal.ObjectURLPresigner
            java.net.URI r1 = r4.endpointURI
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r2 = r4.credentialProvider
            com.alibaba.sdk.android.oss.ClientConfiguration r3 = r4.conf
            r0.<init>(r1, r2, r3)
            java.lang.String r5 = r0.presignConstrainedURL(r5, r6, r7)
            return r5
    }

    @Override
    public java.lang.String presignPublicObjectURL(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.ObjectURLPresigner r0 = new com.alibaba.sdk.android.oss.internal.ObjectURLPresigner
            java.net.URI r1 = r4.endpointURI
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r2 = r4.credentialProvider
            com.alibaba.sdk.android.oss.ClientConfiguration r3 = r4.conf
            r0.<init>(r1, r2, r3)
            java.lang.String r5 = r0.presignPublicURL(r5, r6)
            return r5
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult putBucketLifecycle(com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.putBucketLifecycle(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult r3 = (com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutBucketLoggingResult putBucketLogging(com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.putBucketLogging(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.PutBucketLoggingResult r3 = (com.alibaba.sdk.android.oss.model.PutBucketLoggingResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutBucketRefererResult putBucketReferer(com.alibaba.sdk.android.oss.model.PutBucketRefererRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r2.internalRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.putBucketReferer(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.PutBucketRefererResult r3 = (com.alibaba.sdk.android.oss.model.PutBucketRefererResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutObjectResult putObject(com.alibaba.sdk.android.oss.model.PutObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.model.PutObjectResult r2 = r0.syncPutObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutSymlinkResult putSymlink(com.alibaba.sdk.android.oss.model.PutSymlinkRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.model.PutSymlinkResult r2 = r0.syncPutSymlink(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.RestoreObjectResult restoreObject(com.alibaba.sdk.android.oss.model.RestoreObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.model.RestoreObjectResult r2 = r0.syncRestoreObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ResumableUploadResult resumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r0 = r2.extensionRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.resumableUpload(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.ResumableUploadResult r3 = (com.alibaba.sdk.android.oss.model.ResumableUploadResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ResumableUploadResult sequenceUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.ExtensionRequestOperation r0 = r2.extensionRequestOperation
            r1 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r3 = r0.sequenceUpload(r3, r1)
            com.alibaba.sdk.android.oss.model.OSSResult r3 = r3.getResult()
            com.alibaba.sdk.android.oss.model.ResumableUploadResult r3 = (com.alibaba.sdk.android.oss.model.ResumableUploadResult) r3
            return r3
    }

    @Override
    public com.alibaba.sdk.android.oss.model.TriggerCallbackResult triggerCallback(com.alibaba.sdk.android.oss.model.TriggerCallbackRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.model.TriggerCallbackResult r2 = r0.asyncTriggerCallback(r2)
            return r2
    }

    @Override
    public void updateCredentialProvider(com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r2) {
            r1 = this;
            r1.credentialProvider = r2
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            r0.setCredentialProvider(r2)
            return
    }

    @Override
    public com.alibaba.sdk.android.oss.model.UploadPartResult uploadPart(com.alibaba.sdk.android.oss.model.UploadPartRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0 = r1.internalRequestOperation
            com.alibaba.sdk.android.oss.model.UploadPartResult r2 = r0.syncUploadPart(r2)
            return r2
    }
}
