package com.alibaba.sdk.android.oss;

public interface OSS {
    com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult abortMultipartUpload(com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    void abortResumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r1) throws java.io.IOException;

    com.alibaba.sdk.android.oss.model.AppendObjectResult appendObject(com.alibaba.sdk.android.oss.model.AppendObjectRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult> asyncAbortMultipartUpload(com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest, com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.AppendObjectResult> asyncAppendObject(com.alibaba.sdk.android.oss.model.AppendObjectRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.AppendObjectRequest, com.alibaba.sdk.android.oss.model.AppendObjectResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> asyncCompleteMultipartUpload(com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CopyObjectResult> asyncCopyObject(com.alibaba.sdk.android.oss.model.CopyObjectRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CopyObjectRequest, com.alibaba.sdk.android.oss.model.CopyObjectResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CreateBucketResult> asyncCreateBucket(com.alibaba.sdk.android.oss.model.CreateBucketRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CreateBucketRequest, com.alibaba.sdk.android.oss.model.CreateBucketResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketResult> asyncDeleteBucket(com.alibaba.sdk.android.oss.model.DeleteBucketRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketRequest, com.alibaba.sdk.android.oss.model.DeleteBucketResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult> asyncDeleteBucketLifecycle(com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult> asyncDeleteBucketLogging(com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest, com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult> asyncDeleteMultipleObject(com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest, com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteObjectResult> asyncDeleteObject(com.alibaba.sdk.android.oss.model.DeleteObjectRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteObjectRequest, com.alibaba.sdk.android.oss.model.DeleteObjectResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketACLResult> asyncGetBucketACL(com.alibaba.sdk.android.oss.model.GetBucketACLRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketACLRequest, com.alibaba.sdk.android.oss.model.GetBucketACLResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketInfoResult> asyncGetBucketInfo(com.alibaba.sdk.android.oss.model.GetBucketInfoRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketInfoRequest, com.alibaba.sdk.android.oss.model.GetBucketInfoResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult> asyncGetBucketLifecycle(com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketLoggingResult> asyncGetBucketLogging(com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest, com.alibaba.sdk.android.oss.model.GetBucketLoggingResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketRefererResult> asyncGetBucketReferer(com.alibaba.sdk.android.oss.model.GetBucketRefererRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketRefererRequest, com.alibaba.sdk.android.oss.model.GetBucketRefererResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetObjectResult> asyncGetObject(com.alibaba.sdk.android.oss.model.GetObjectRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetObjectRequest, com.alibaba.sdk.android.oss.model.GetObjectResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetObjectACLResult> asyncGetObjectACL(com.alibaba.sdk.android.oss.model.GetObjectACLRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetObjectACLRequest, com.alibaba.sdk.android.oss.model.GetObjectACLResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetSymlinkResult> asyncGetSymlink(com.alibaba.sdk.android.oss.model.GetSymlinkRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetSymlinkRequest, com.alibaba.sdk.android.oss.model.GetSymlinkResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.HeadObjectResult> asyncHeadObject(com.alibaba.sdk.android.oss.model.HeadObjectRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.HeadObjectRequest, com.alibaba.sdk.android.oss.model.HeadObjectResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ImagePersistResult> asyncImagePersist(com.alibaba.sdk.android.oss.model.ImagePersistRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ImagePersistRequest, com.alibaba.sdk.android.oss.model.ImagePersistResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult> asyncInitMultipartUpload(com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest, com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListBucketsResult> asyncListBuckets(com.alibaba.sdk.android.oss.model.ListBucketsRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListBucketsRequest, com.alibaba.sdk.android.oss.model.ListBucketsResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult> asyncListMultipartUploads(com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest, com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListObjectsResult> asyncListObjects(com.alibaba.sdk.android.oss.model.ListObjectsRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListObjectsRequest, com.alibaba.sdk.android.oss.model.ListObjectsResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListPartsResult> asyncListParts(com.alibaba.sdk.android.oss.model.ListPartsRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListPartsRequest, com.alibaba.sdk.android.oss.model.ListPartsResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> asyncMultipartUpload(com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.MultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult> asyncPutBucketLifecycle(com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketLoggingResult> asyncPutBucketLogging(com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest, com.alibaba.sdk.android.oss.model.PutBucketLoggingResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketRefererResult> asyncPutBucketReferer(com.alibaba.sdk.android.oss.model.PutBucketRefererRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketRefererRequest, com.alibaba.sdk.android.oss.model.PutBucketRefererResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutObjectResult> asyncPutObject(com.alibaba.sdk.android.oss.model.PutObjectRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutObjectRequest, com.alibaba.sdk.android.oss.model.PutObjectResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutSymlinkResult> asyncPutSymlink(com.alibaba.sdk.android.oss.model.PutSymlinkRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutSymlinkRequest, com.alibaba.sdk.android.oss.model.PutSymlinkResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.RestoreObjectResult> asyncRestoreObject(com.alibaba.sdk.android.oss.model.RestoreObjectRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.RestoreObjectRequest, com.alibaba.sdk.android.oss.model.RestoreObjectResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ResumableUploadResult> asyncResumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ResumableUploadResult> asyncSequenceUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ResumableUploadRequest, com.alibaba.sdk.android.oss.model.ResumableUploadResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.TriggerCallbackResult> asyncTriggerCallback(com.alibaba.sdk.android.oss.model.TriggerCallbackRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.TriggerCallbackRequest, com.alibaba.sdk.android.oss.model.TriggerCallbackResult> r2);

    com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.UploadPartResult> asyncUploadPart(com.alibaba.sdk.android.oss.model.UploadPartRequest r1, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.UploadPartRequest, com.alibaba.sdk.android.oss.model.UploadPartResult> r2);

    com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult completeMultipartUpload(com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.CopyObjectResult copyObject(com.alibaba.sdk.android.oss.model.CopyObjectRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.CreateBucketResult createBucket(com.alibaba.sdk.android.oss.model.CreateBucketRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.DeleteBucketResult deleteBucket(com.alibaba.sdk.android.oss.model.DeleteBucketRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult deleteBucketLifecycle(com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult deleteBucketLogging(com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult deleteMultipleObject(com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.DeleteObjectResult deleteObject(com.alibaba.sdk.android.oss.model.DeleteObjectRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    boolean doesObjectExist(java.lang.String r1, java.lang.String r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.GetBucketACLResult getBucketACL(com.alibaba.sdk.android.oss.model.GetBucketACLRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.GetBucketInfoResult getBucketInfo(com.alibaba.sdk.android.oss.model.GetBucketInfoRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult getBucketLifecycle(com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.GetBucketLoggingResult getBucketLogging(com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.GetBucketRefererResult getBucketReferer(com.alibaba.sdk.android.oss.model.GetBucketRefererRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.GetObjectResult getObject(com.alibaba.sdk.android.oss.model.GetObjectRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.GetObjectACLResult getObjectACL(com.alibaba.sdk.android.oss.model.GetObjectACLRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.GetSymlinkResult getSymlink(com.alibaba.sdk.android.oss.model.GetSymlinkRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.HeadObjectResult headObject(com.alibaba.sdk.android.oss.model.HeadObjectRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.ImagePersistResult imagePersist(com.alibaba.sdk.android.oss.model.ImagePersistRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult initMultipartUpload(com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.ListBucketsResult listBuckets(com.alibaba.sdk.android.oss.model.ListBucketsRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult listMultipartUploads(com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.ListObjectsResult listObjects(com.alibaba.sdk.android.oss.model.ListObjectsRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.ListPartsResult listParts(com.alibaba.sdk.android.oss.model.ListPartsRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult multipartUpload(com.alibaba.sdk.android.oss.model.MultipartUploadRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    java.lang.String presignConstrainedObjectURL(com.alibaba.sdk.android.oss.model.GeneratePresignedUrlRequest r1) throws com.alibaba.sdk.android.oss.ClientException;

    java.lang.String presignConstrainedObjectURL(java.lang.String r1, java.lang.String r2, long r3) throws com.alibaba.sdk.android.oss.ClientException;

    java.lang.String presignPublicObjectURL(java.lang.String r1, java.lang.String r2);

    com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult putBucketLifecycle(com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.PutBucketLoggingResult putBucketLogging(com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.PutBucketRefererResult putBucketReferer(com.alibaba.sdk.android.oss.model.PutBucketRefererRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.PutObjectResult putObject(com.alibaba.sdk.android.oss.model.PutObjectRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.PutSymlinkResult putSymlink(com.alibaba.sdk.android.oss.model.PutSymlinkRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.RestoreObjectResult restoreObject(com.alibaba.sdk.android.oss.model.RestoreObjectRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.ResumableUploadResult resumableUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.ResumableUploadResult sequenceUpload(com.alibaba.sdk.android.oss.model.ResumableUploadRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    com.alibaba.sdk.android.oss.model.TriggerCallbackResult triggerCallback(com.alibaba.sdk.android.oss.model.TriggerCallbackRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;

    void updateCredentialProvider(com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r1);

    com.alibaba.sdk.android.oss.model.UploadPartResult uploadPart(com.alibaba.sdk.android.oss.model.UploadPartRequest r1) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException;
}
