package com.alibaba.sdk.android.oss;

public class OSSClient implements com.alibaba.sdk.android.oss.OSS {
    private com.alibaba.sdk.android.oss.OSS mOss;

    public OSSClient(android.content.Context r2, com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r3, com.alibaba.sdk.android.oss.ClientConfiguration r4) {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.OSSImpl r0 = new com.alibaba.sdk.android.oss.OSSImpl
            r0.<init>(r2, r3, r4)
            r1.mOss = r0
            return
    }

    public OSSClient(android.content.Context r2, java.lang.String r3, com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public OSSClient(android.content.Context r2, java.lang.String r3, com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r4, com.alibaba.sdk.android.oss.ClientConfiguration r5) {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.OSSImpl r0 = new com.alibaba.sdk.android.oss.OSSImpl
            r0.<init>(r2, r3, r4, r5)
            r1.mOss = r0
            return
    }

    @Override
    public com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult abortMultipartUpload(com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult r2 = r0.abortMultipartUpload(r2)
            return r2
    }

    @Override
    public void abortResumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2) throws java.io.IOException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            r0.abortResumableUpload(r2)
            return
    }

    @Override
    public com.alibaba.sdk.android.oss.model.AppendObjectResult appendObject(com.alibaba.sdk.android.oss.model.AppendObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.AppendObjectResult r2 = r0.appendObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult> asyncAbortMultipartUpload(com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest, com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncAbortMultipartUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.AppendObjectResult> asyncAppendObject(com.alibaba.sdk.android.oss.model.AppendObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.AppendObjectRequest, com.alibaba.sdk.android.oss.model.AppendObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncAppendObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> asyncCompleteMultipartUpload(com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncCompleteMultipartUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CopyObjectResult> asyncCopyObject(com.alibaba.sdk.android.oss.model.CopyObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CopyObjectRequest, com.alibaba.sdk.android.oss.model.CopyObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncCopyObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CreateBucketResult> asyncCreateBucket(com.alibaba.sdk.android.oss.model.CreateBucketRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CreateBucketRequest, com.alibaba.sdk.android.oss.model.CreateBucketResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncCreateBucket(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketResult> asyncDeleteBucket(com.alibaba.sdk.android.oss.model.DeleteBucketRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketRequest, com.alibaba.sdk.android.oss.model.DeleteBucketResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncDeleteBucket(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult> asyncDeleteBucketLifecycle(com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncDeleteBucketLifecycle(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult> asyncDeleteBucketLogging(com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest, com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncDeleteBucketLogging(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult> asyncDeleteMultipleObject(com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest, com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncDeleteMultipleObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteObjectResult> asyncDeleteObject(com.alibaba.sdk.android.oss.model.DeleteObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteObjectRequest, com.alibaba.sdk.android.oss.model.DeleteObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncDeleteObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketACLResult> asyncGetBucketACL(com.alibaba.sdk.android.oss.model.GetBucketACLRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketACLRequest, com.alibaba.sdk.android.oss.model.GetBucketACLResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncGetBucketACL(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketInfoResult> asyncGetBucketInfo(com.alibaba.sdk.android.oss.model.GetBucketInfoRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketInfoRequest, com.alibaba.sdk.android.oss.model.GetBucketInfoResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncGetBucketInfo(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult> asyncGetBucketLifecycle(com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncGetBucketLifecycle(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketLoggingResult> asyncGetBucketLogging(com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest, com.alibaba.sdk.android.oss.model.GetBucketLoggingResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncGetBucketLogging(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketRefererResult> asyncGetBucketReferer(com.alibaba.sdk.android.oss.model.GetBucketRefererRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketRefererRequest, com.alibaba.sdk.android.oss.model.GetBucketRefererResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncGetBucketReferer(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetObjectResult> asyncGetObject(com.alibaba.sdk.android.oss.model.GetObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetObjectRequest, com.alibaba.sdk.android.oss.model.GetObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncGetObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetObjectACLResult> asyncGetObjectACL(com.alibaba.sdk.android.oss.model.GetObjectACLRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetObjectACLRequest, com.alibaba.sdk.android.oss.model.GetObjectACLResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncGetObjectACL(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetSymlinkResult> asyncGetSymlink(com.alibaba.sdk.android.oss.model.GetSymlinkRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetSymlinkRequest, com.alibaba.sdk.android.oss.model.GetSymlinkResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncGetSymlink(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.HeadObjectResult> asyncHeadObject(com.alibaba.sdk.android.oss.model.HeadObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.HeadObjectRequest, com.alibaba.sdk.android.oss.model.HeadObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncHeadObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ImagePersistResult> asyncImagePersist(com.alibaba.sdk.android.oss.model.ImagePersistRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ImagePersistRequest, com.alibaba.sdk.android.oss.model.ImagePersistResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncImagePersist(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult> asyncInitMultipartUpload(com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest, com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncInitMultipartUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListBucketsResult> asyncListBuckets(com.alibaba.sdk.android.oss.model.ListBucketsRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListBucketsRequest, com.alibaba.sdk.android.oss.model.ListBucketsResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncListBuckets(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult> asyncListMultipartUploads(com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest, com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncListMultipartUploads(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListObjectsResult> asyncListObjects(com.alibaba.sdk.android.oss.model.ListObjectsRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListObjectsRequest, com.alibaba.sdk.android.oss.model.ListObjectsResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncListObjects(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListPartsResult> asyncListParts(com.alibaba.sdk.android.oss.model.ListPartsRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListPartsRequest, com.alibaba.sdk.android.oss.model.ListPartsResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncListParts(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> asyncMultipartUpload(com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.MultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncMultipartUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult> asyncPutBucketLifecycle(com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncPutBucketLifecycle(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketLoggingResult> asyncPutBucketLogging(com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest, com.alibaba.sdk.android.oss.model.PutBucketLoggingResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncPutBucketLogging(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketRefererResult> asyncPutBucketReferer(com.alibaba.sdk.android.oss.model.PutBucketRefererRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketRefererRequest, com.alibaba.sdk.android.oss.model.PutBucketRefererResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncPutBucketReferer(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutObjectResult> asyncPutObject(com.alibaba.sdk.android.oss.model.PutObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutObjectRequest, com.alibaba.sdk.android.oss.model.PutObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncPutObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutSymlinkResult> asyncPutSymlink(com.alibaba.sdk.android.oss.model.PutSymlinkRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutSymlinkRequest, com.alibaba.sdk.android.oss.model.PutSymlinkResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncPutSymlink(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.RestoreObjectResult> asyncRestoreObject(com.alibaba.sdk.android.oss.model.RestoreObjectRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.RestoreObjectRequest, com.alibaba.sdk.android.oss.model.RestoreObjectResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncRestoreObject(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ResumableUploadResult> asyncResumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncResumableUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ResumableUploadResult> asyncSequenceUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncSequenceUpload(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.TriggerCallbackResult> asyncTriggerCallback(com.alibaba.sdk.android.oss.model.TriggerCallbackRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.TriggerCallbackRequest, com.alibaba.sdk.android.oss.model.TriggerCallbackResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncTriggerCallback(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.UploadPartResult> asyncUploadPart(com.alibaba.sdk.android.oss.model.UploadPartRequest r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.UploadPartRequest, com.alibaba.sdk.android.oss.model.UploadPartResult> r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r0.asyncUploadPart(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult completeMultipartUpload(com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r2 = r0.completeMultipartUpload(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.CopyObjectResult copyObject(com.alibaba.sdk.android.oss.model.CopyObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.CopyObjectResult r2 = r0.copyObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.CreateBucketResult createBucket(com.alibaba.sdk.android.oss.model.CreateBucketRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.CreateBucketResult r2 = r0.createBucket(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteBucketResult deleteBucket(com.alibaba.sdk.android.oss.model.DeleteBucketRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.DeleteBucketResult r2 = r0.deleteBucket(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult deleteBucketLifecycle(com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult r2 = r0.deleteBucketLifecycle(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult deleteBucketLogging(com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult r2 = r0.deleteBucketLogging(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult deleteMultipleObject(com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult r2 = r0.deleteMultipleObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.DeleteObjectResult deleteObject(com.alibaba.sdk.android.oss.model.DeleteObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.DeleteObjectResult r2 = r0.deleteObject(r2)
            return r2
    }

    @Override
    public boolean doesObjectExist(java.lang.String r2, java.lang.String r3) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            boolean r2 = r0.doesObjectExist(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketACLResult getBucketACL(com.alibaba.sdk.android.oss.model.GetBucketACLRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.GetBucketACLResult r2 = r0.getBucketACL(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketInfoResult getBucketInfo(com.alibaba.sdk.android.oss.model.GetBucketInfoRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.GetBucketInfoResult r2 = r0.getBucketInfo(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult getBucketLifecycle(com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult r2 = r0.getBucketLifecycle(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketLoggingResult getBucketLogging(com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.GetBucketLoggingResult r2 = r0.getBucketLogging(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetBucketRefererResult getBucketReferer(com.alibaba.sdk.android.oss.model.GetBucketRefererRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.GetBucketRefererResult r2 = r0.getBucketReferer(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetObjectResult getObject(com.alibaba.sdk.android.oss.model.GetObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.GetObjectResult r2 = r0.getObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetObjectACLResult getObjectACL(com.alibaba.sdk.android.oss.model.GetObjectACLRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.GetObjectACLResult r2 = r0.getObjectACL(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.GetSymlinkResult getSymlink(com.alibaba.sdk.android.oss.model.GetSymlinkRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.GetSymlinkResult r2 = r0.getSymlink(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.HeadObjectResult headObject(com.alibaba.sdk.android.oss.model.HeadObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.HeadObjectResult r2 = r0.headObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ImagePersistResult imagePersist(com.alibaba.sdk.android.oss.model.ImagePersistRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.ImagePersistResult r2 = r0.imagePersist(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult initMultipartUpload(com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r2 = r0.initMultipartUpload(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ListBucketsResult listBuckets(com.alibaba.sdk.android.oss.model.ListBucketsRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.ListBucketsResult r2 = r0.listBuckets(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult listMultipartUploads(com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult r2 = r0.listMultipartUploads(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ListObjectsResult listObjects(com.alibaba.sdk.android.oss.model.ListObjectsRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.ListObjectsResult r2 = r0.listObjects(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ListPartsResult listParts(com.alibaba.sdk.android.oss.model.ListPartsRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.ListPartsResult r2 = r0.listParts(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult multipartUpload(com.alibaba.sdk.android.oss.model.MultipartUploadRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r2 = r0.multipartUpload(r2)
            return r2
    }

    @Override
    public java.lang.String presignConstrainedObjectURL(com.alibaba.sdk.android.oss.model.GeneratePresignedUrlRequest r2) throws com.alibaba.sdk.android.oss.ClientException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            java.lang.String r2 = r0.presignConstrainedObjectURL(r2)
            return r2
    }

    @Override
    public java.lang.String presignConstrainedObjectURL(java.lang.String r2, java.lang.String r3, long r4) throws com.alibaba.sdk.android.oss.ClientException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            java.lang.String r2 = r0.presignConstrainedObjectURL(r2, r3, r4)
            return r2
    }

    @Override
    public java.lang.String presignPublicObjectURL(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            java.lang.String r2 = r0.presignPublicObjectURL(r2, r3)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult putBucketLifecycle(com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult r2 = r0.putBucketLifecycle(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutBucketLoggingResult putBucketLogging(com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.PutBucketLoggingResult r2 = r0.putBucketLogging(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutBucketRefererResult putBucketReferer(com.alibaba.sdk.android.oss.model.PutBucketRefererRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.PutBucketRefererResult r2 = r0.putBucketReferer(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutObjectResult putObject(com.alibaba.sdk.android.oss.model.PutObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.PutObjectResult r2 = r0.putObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.PutSymlinkResult putSymlink(com.alibaba.sdk.android.oss.model.PutSymlinkRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.PutSymlinkResult r2 = r0.putSymlink(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.RestoreObjectResult restoreObject(com.alibaba.sdk.android.oss.model.RestoreObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.RestoreObjectResult r2 = r0.restoreObject(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ResumableUploadResult resumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.ResumableUploadResult r2 = r0.resumableUpload(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.ResumableUploadResult sequenceUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.ResumableUploadResult r2 = r0.sequenceUpload(r2)
            return r2
    }

    @Override
    public com.alibaba.sdk.android.oss.model.TriggerCallbackResult triggerCallback(com.alibaba.sdk.android.oss.model.TriggerCallbackRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.TriggerCallbackResult r2 = r0.triggerCallback(r2)
            return r2
    }

    @Override
    public void updateCredentialProvider(com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r2) {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            r0.updateCredentialProvider(r2)
            return
    }

    @Override
    public com.alibaba.sdk.android.oss.model.UploadPartResult uploadPart(com.alibaba.sdk.android.oss.model.UploadPartRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            com.alibaba.sdk.android.oss.OSS r0 = r1.mOss
            com.alibaba.sdk.android.oss.model.UploadPartResult r2 = r0.uploadPart(r2)
            return r2
    }
}
