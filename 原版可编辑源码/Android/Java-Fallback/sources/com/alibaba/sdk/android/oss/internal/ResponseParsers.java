package com.alibaba.sdk.android.oss.internal;

public final class ResponseParsers {

    public static final class AbortMultipartUploadResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult> {
        public AbortMultipartUploadResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult r2 = (com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult) r2
                com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class AppendObjectResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.AppendObjectResult> {
        public AppendObjectResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.AppendObjectResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r3, com.alibaba.sdk.android.oss.model.AppendObjectResult r4) throws java.io.IOException {
                r2 = this;
                java.util.Map r0 = r3.getHeaders()
                java.lang.String r1 = "x-oss-next-append-position"
                java.lang.Object r0 = r0.get(r1)
                java.lang.String r0 = (java.lang.String) r0
                if (r0 == 0) goto L15
                java.lang.Long r0 = java.lang.Long.valueOf(r0)
                r4.setNextPosition(r0)
            L15:
                java.util.Map r3 = r3.getHeaders()
                java.lang.String r0 = "x-oss-hash-crc64ecma"
                java.lang.Object r3 = r3.get(r0)
                java.lang.String r3 = (java.lang.String) r3
                r4.setObjectCRC64(r3)
                return r4
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.AppendObjectResult r2 = (com.alibaba.sdk.android.oss.model.AppendObjectResult) r2
                com.alibaba.sdk.android.oss.model.AppendObjectResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class CompleteMultipartUploadResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> {
        public CompleteMultipartUploadResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r3, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r4) throws java.lang.Exception {
                r2 = this;
                java.util.Map r0 = r3.getHeaders()
                java.lang.String r1 = "Content-Type"
                java.lang.Object r0 = r0.get(r1)
                java.lang.String r0 = (java.lang.String) r0
                java.lang.String r1 = "application/xml"
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto L1d
                java.io.InputStream r3 = r3.getContent()
                com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r4 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$1100(r3, r4)
                goto L32
            L1d:
                okhttp3.Response r3 = r3.getResponse()
                okhttp3.ResponseBody r3 = r3.body()
                java.lang.String r3 = r3.string()
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 != 0) goto L32
                r4.setServerCallbackReturnBody(r3)
            L32:
                return r4
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r2 = (com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult) r2
                com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class CopyObjectResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.CopyObjectResult> {
        public CopyObjectResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.CopyObjectResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.CopyObjectResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.CopyObjectResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$100(r1, r2)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.CopyObjectResult r2 = (com.alibaba.sdk.android.oss.model.CopyObjectResult) r2
                com.alibaba.sdk.android.oss.model.CopyObjectResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class CreateBucketResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.CreateBucketResult> {
        public CreateBucketResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.CreateBucketResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r2, com.alibaba.sdk.android.oss.model.CreateBucketResult r3) throws java.lang.Exception {
                r1 = this;
                java.util.Map r2 = r3.getResponseHeader()
                java.lang.String r0 = "Location"
                boolean r2 = r2.containsKey(r0)
                if (r2 == 0) goto L18
                java.util.Map r2 = r3.getResponseHeader()
                java.lang.Object r2 = r2.get(r0)
                java.lang.String r2 = (java.lang.String) r2
                r3.bucketLocation = r2
            L18:
                return r3
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.CreateBucketResult r2 = (com.alibaba.sdk.android.oss.model.CreateBucketResult) r2
                com.alibaba.sdk.android.oss.model.CreateBucketResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class DeleteBucketLifecycleResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult> {
        public DeleteBucketLifecycleResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult r2 = (com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult) r2
                com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class DeleteBucketLoggingResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult> {
        public DeleteBucketLoggingResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult r2 = (com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult) r2
                com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class DeleteBucketResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.DeleteBucketResult> {
        public DeleteBucketResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.DeleteBucketResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.DeleteBucketResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.DeleteBucketResult r2 = (com.alibaba.sdk.android.oss.model.DeleteBucketResult) r2
                com.alibaba.sdk.android.oss.model.DeleteBucketResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class DeleteMultipleObjectResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult> {
        public DeleteMultipleObjectResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$700(r1, r2)
                return r1
        }

        @Override
        com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult r2 = (com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult) r2
                com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class DeleteObjectResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.DeleteObjectResult> {
        public DeleteObjectResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.DeleteObjectResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.DeleteObjectResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.DeleteObjectResult r2 = (com.alibaba.sdk.android.oss.model.DeleteObjectResult) r2
                com.alibaba.sdk.android.oss.model.DeleteObjectResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class GetBucketACLResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.GetBucketACLResult> {
        public GetBucketACLResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.GetBucketACLResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.GetBucketACLResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.GetBucketACLResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$300(r1, r2)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.GetBucketACLResult r2 = (com.alibaba.sdk.android.oss.model.GetBucketACLResult) r2
                com.alibaba.sdk.android.oss.model.GetBucketACLResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class GetBucketInfoResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.GetBucketInfoResult> {
        public GetBucketInfoResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.GetBucketInfoResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.GetBucketInfoResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.GetBucketInfoResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$200(r1, r2)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.GetBucketInfoResult r2 = (com.alibaba.sdk.android.oss.model.GetBucketInfoResult) r2
                com.alibaba.sdk.android.oss.model.GetBucketInfoResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class GetBucketLifecycleResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult> {
        public GetBucketLifecycleResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$600(r1, r2)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult r2 = (com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult) r2
                com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class GetBucketLoggingResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.GetBucketLoggingResult> {
        public GetBucketLoggingResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.GetBucketLoggingResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.GetBucketLoggingResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.GetBucketLoggingResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$500(r1, r2)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.GetBucketLoggingResult r2 = (com.alibaba.sdk.android.oss.model.GetBucketLoggingResult) r2
                com.alibaba.sdk.android.oss.model.GetBucketLoggingResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class GetBucketRefererResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.GetBucketRefererResult> {
        public GetBucketRefererResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.GetBucketRefererResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.GetBucketRefererResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.GetBucketRefererResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$400(r1, r2)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.GetBucketRefererResult r2 = (com.alibaba.sdk.android.oss.model.GetBucketRefererResult) r2
                com.alibaba.sdk.android.oss.model.GetBucketRefererResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class GetObjectACLResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.GetObjectACLResult> {
        public GetObjectACLResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        com.alibaba.sdk.android.oss.model.GetObjectACLResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.GetObjectACLResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.GetObjectACLResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$000(r1, r2)
                return r1
        }

        @Override
        com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.GetObjectACLResult r2 = (com.alibaba.sdk.android.oss.model.GetObjectACLResult) r2
                com.alibaba.sdk.android.oss.model.GetObjectACLResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class GetObjectResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.GetObjectResult> {
        public GetObjectResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean needCloseResponse() {
                r1 = this;
                r0 = 0
                return r0
        }

        public com.alibaba.sdk.android.oss.model.GetObjectResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r10, com.alibaba.sdk.android.oss.model.GetObjectResult r11) throws java.lang.Exception {
                r9 = this;
                java.util.Map r0 = r11.getResponseHeader()
                com.alibaba.sdk.android.oss.model.ObjectMetadata r0 = com.alibaba.sdk.android.oss.internal.ResponseParsers.parseObjectMetadata(r0)
                r11.setMetadata(r0)
                long r0 = r10.getContentLength()
                r11.setContentLength(r0)
                com.alibaba.sdk.android.oss.internal.RequestMessage r0 = r10.getRequest()
                boolean r0 = r0.isCheckCRC64()
                if (r0 == 0) goto L3f
                com.alibaba.sdk.android.oss.internal.CheckCRC64DownloadInputStream r0 = new com.alibaba.sdk.android.oss.internal.CheckCRC64DownloadInputStream
                java.io.InputStream r2 = r10.getContent()
                com.alibaba.sdk.android.oss.common.utils.CRC64 r3 = new com.alibaba.sdk.android.oss.common.utils.CRC64
                r3.<init>()
                long r4 = r10.getContentLength()
                java.lang.Long r10 = r11.getServerCRC()
                long r6 = r10.longValue()
                java.lang.String r8 = r11.getRequestId()
                r1 = r0
                r1.<init>(r2, r3, r4, r6, r8)
                r11.setObjectContent(r0)
                goto L46
            L3f:
                java.io.InputStream r10 = r10.getContent()
                r11.setObjectContent(r10)
            L46:
                return r11
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.GetObjectResult r2 = (com.alibaba.sdk.android.oss.model.GetObjectResult) r2
                com.alibaba.sdk.android.oss.model.GetObjectResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class GetSymlinkResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.GetSymlinkResult> {
        public GetSymlinkResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        com.alibaba.sdk.android.oss.model.GetSymlinkResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r2, com.alibaba.sdk.android.oss.model.GetSymlinkResult r3) throws java.lang.Exception {
                r1 = this;
                java.util.Map r2 = r2.getHeaders()
                java.lang.String r0 = "x-oss-symlink-target"
                java.lang.Object r2 = r2.get(r0)
                java.lang.String r2 = (java.lang.String) r2
                r3.setTargetObjectName(r2)
                return r3
        }

        @Override
        com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.GetSymlinkResult r2 = (com.alibaba.sdk.android.oss.model.GetSymlinkResult) r2
                com.alibaba.sdk.android.oss.model.GetSymlinkResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class HeadObjectResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.HeadObjectResult> {
        public HeadObjectResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.HeadObjectResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.HeadObjectResult r2) throws java.lang.Exception {
                r0 = this;
                java.util.Map r1 = r2.getResponseHeader()
                com.alibaba.sdk.android.oss.model.ObjectMetadata r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.parseObjectMetadata(r1)
                r2.setMetadata(r1)
                return r2
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.HeadObjectResult r2 = (com.alibaba.sdk.android.oss.model.HeadObjectResult) r2
                com.alibaba.sdk.android.oss.model.HeadObjectResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class ImagePersistResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.ImagePersistResult> {
        public ImagePersistResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.ImagePersistResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.ImagePersistResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.ImagePersistResult r2 = (com.alibaba.sdk.android.oss.model.ImagePersistResult) r2
                com.alibaba.sdk.android.oss.model.ImagePersistResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class InitMultipartResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult> {
        public InitMultipartResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$1000(r1, r2)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r2 = (com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult) r2
                com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class ListBucketResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.ListBucketsResult> {
        public ListBucketResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        com.alibaba.sdk.android.oss.model.ListBucketsResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.ListBucketsResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.ListBucketsResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$900(r1, r2)
                return r1
        }

        @Override
        com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.ListBucketsResult r2 = (com.alibaba.sdk.android.oss.model.ListBucketsResult) r2
                com.alibaba.sdk.android.oss.model.ListBucketsResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class ListMultipartUploadsResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult> {
        public ListMultipartUploadsResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult r1 = r2.parseData(r1)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult r2 = (com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult) r2
                com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class ListObjectsResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.ListObjectsResult> {
        public ListObjectsResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.ListObjectsResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.ListObjectsResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.ListObjectsResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$800(r1, r2)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.ListObjectsResult r2 = (com.alibaba.sdk.android.oss.model.ListObjectsResult) r2
                com.alibaba.sdk.android.oss.model.ListObjectsResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class ListPartsResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.ListPartsResult> {
        public ListPartsResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.alibaba.sdk.android.oss.model.ListPartsResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.ListPartsResult r2) throws java.lang.Exception {
                r0 = this;
                java.io.InputStream r1 = r1.getContent()
                com.alibaba.sdk.android.oss.model.ListPartsResult r1 = com.alibaba.sdk.android.oss.internal.ResponseParsers.access$1200(r1, r2)
                return r1
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.ListPartsResult r2 = (com.alibaba.sdk.android.oss.model.ListPartsResult) r2
                com.alibaba.sdk.android.oss.model.ListPartsResult r1 = r0.parseData(r1, r2)
                return r1
        }
    }

    public static final class PutBucketLifecycleResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult> {
        public PutBucketLifecycleResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult r2 = (com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult) r2
                com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult r1 = r0.parseData(r1, r2)
                return r1
        }

        public com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }
    }

    public static final class PutBucketLoggingResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.PutBucketLoggingResult> {
        public PutBucketLoggingResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.PutBucketLoggingResult r2 = (com.alibaba.sdk.android.oss.model.PutBucketLoggingResult) r2
                com.alibaba.sdk.android.oss.model.PutBucketLoggingResult r1 = r0.parseData(r1, r2)
                return r1
        }

        public com.alibaba.sdk.android.oss.model.PutBucketLoggingResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.PutBucketLoggingResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }
    }

    public static final class PutBucketRefererResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.PutBucketRefererResult> {
        public PutBucketRefererResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.PutBucketRefererResult r2 = (com.alibaba.sdk.android.oss.model.PutBucketRefererResult) r2
                com.alibaba.sdk.android.oss.model.PutBucketRefererResult r1 = r0.parseData(r1, r2)
                return r1
        }

        public com.alibaba.sdk.android.oss.model.PutBucketRefererResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.PutBucketRefererResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }
    }

    public static final class PutObjectResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.PutObjectResult> {
        public PutObjectResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.PutObjectResult r2 = (com.alibaba.sdk.android.oss.model.PutObjectResult) r2
                com.alibaba.sdk.android.oss.model.PutObjectResult r1 = r0.parseData(r1, r2)
                return r1
        }

        public com.alibaba.sdk.android.oss.model.PutObjectResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r3, com.alibaba.sdk.android.oss.model.PutObjectResult r4) throws java.io.IOException {
                r2 = this;
                java.util.Map r0 = r3.getHeaders()
                java.lang.String r1 = "ETag"
                java.lang.Object r0 = r0.get(r1)
                java.lang.String r0 = (java.lang.String) r0
                java.lang.String r0 = com.alibaba.sdk.android.oss.internal.ResponseParsers.trimQuotes(r0)
                r4.setETag(r0)
                okhttp3.Response r3 = r3.getResponse()
                okhttp3.ResponseBody r3 = r3.body()
                java.lang.String r3 = r3.string()
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 != 0) goto L28
                r4.setServerCallbackReturnBody(r3)
            L28:
                return r4
        }
    }

    public static final class PutSymlinkResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.PutSymlinkResult> {
        public PutSymlinkResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.PutSymlinkResult r2 = (com.alibaba.sdk.android.oss.model.PutSymlinkResult) r2
                com.alibaba.sdk.android.oss.model.PutSymlinkResult r1 = r0.parseData(r1, r2)
                return r1
        }

        com.alibaba.sdk.android.oss.model.PutSymlinkResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.PutSymlinkResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }
    }

    public static final class RestoreObjectResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.RestoreObjectResult> {
        public RestoreObjectResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.RestoreObjectResult r2 = (com.alibaba.sdk.android.oss.model.RestoreObjectResult) r2
                com.alibaba.sdk.android.oss.model.RestoreObjectResult r1 = r0.parseData(r1, r2)
                return r1
        }

        com.alibaba.sdk.android.oss.model.RestoreObjectResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.RestoreObjectResult r2) throws java.lang.Exception {
                r0 = this;
                return r2
        }
    }

    public static final class TriggerCallbackResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.TriggerCallbackResult> {
        public TriggerCallbackResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.TriggerCallbackResult r2 = (com.alibaba.sdk.android.oss.model.TriggerCallbackResult) r2
                com.alibaba.sdk.android.oss.model.TriggerCallbackResult r1 = r0.parseData(r1, r2)
                return r1
        }

        public com.alibaba.sdk.android.oss.model.TriggerCallbackResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r2, com.alibaba.sdk.android.oss.model.TriggerCallbackResult r3) throws java.lang.Exception {
                r1 = this;
                okhttp3.Response r2 = r2.getResponse()
                okhttp3.ResponseBody r2 = r2.body()
                java.lang.String r2 = r2.string()
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L15
                r3.setServerCallbackReturnBody(r2)
            L15:
                return r3
        }
    }

    public static final class UploadPartResponseParser extends com.alibaba.sdk.android.oss.internal.AbstractResponseParser<com.alibaba.sdk.android.oss.model.UploadPartResult> {
        public UploadPartResponseParser() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.alibaba.sdk.android.oss.model.OSSResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, com.alibaba.sdk.android.oss.model.OSSResult r2) throws java.lang.Exception {
                r0 = this;
                com.alibaba.sdk.android.oss.model.UploadPartResult r2 = (com.alibaba.sdk.android.oss.model.UploadPartResult) r2
                com.alibaba.sdk.android.oss.model.UploadPartResult r1 = r0.parseData(r1, r2)
                return r1
        }

        public com.alibaba.sdk.android.oss.model.UploadPartResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r2, com.alibaba.sdk.android.oss.model.UploadPartResult r3) throws java.lang.Exception {
                r1 = this;
                java.util.Map r2 = r2.getHeaders()
                java.lang.String r0 = "ETag"
                java.lang.Object r2 = r2.get(r0)
                java.lang.String r2 = (java.lang.String) r2
                java.lang.String r2 = com.alibaba.sdk.android.oss.internal.ResponseParsers.trimQuotes(r2)
                r3.setETag(r2)
                return r3
        }
    }

    public ResponseParsers() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.alibaba.sdk.android.oss.model.GetObjectACLResult access$000(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.GetObjectACLResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.GetObjectACLResult r0 = parseGetObjectACLResponse(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.CopyObjectResult access$100(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.CopyObjectResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.CopyObjectResult r0 = parseCopyObjectResponseXML(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult access$1000(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r0 = parseInitMultipartResponseXML(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult access$1100(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r0 = parseCompleteMultipartUploadResponseXML(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.ListPartsResult access$1200(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.ListPartsResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.ListPartsResult r0 = parseListPartsResponseXML(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.GetBucketInfoResult access$200(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.GetBucketInfoResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.GetBucketInfoResult r0 = parseGetBucketInfoResponse(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.GetBucketACLResult access$300(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.GetBucketACLResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.GetBucketACLResult r0 = parseGetBucketACLResponse(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.GetBucketRefererResult access$400(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.GetBucketRefererResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.GetBucketRefererResult r0 = parseGetBucketRefererResponse(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.GetBucketLoggingResult access$500(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.GetBucketLoggingResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.GetBucketLoggingResult r0 = parseGetBucketLoggingResponse(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult access$600(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult r0 = parseGetBucketLifecycleResponse(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult access$700(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult r0 = parseDeleteMultipleObjectResponse(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.ListObjectsResult access$800(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.ListObjectsResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.ListObjectsResult r0 = parseObjectListResponse(r0, r1)
            return r0
    }

    static com.alibaba.sdk.android.oss.model.ListBucketsResult access$900(java.io.InputStream r0, com.alibaba.sdk.android.oss.model.ListBucketsResult r1) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.ListBucketsResult r0 = parseBucketListResponse(r0, r1)
            return r0
    }

    private static com.alibaba.sdk.android.oss.model.ListBucketsResult parseBucketListResponse(java.io.InputStream r4, com.alibaba.sdk.android.oss.model.ListBucketsResult r5) throws java.lang.Exception {
            r5.clearBucketList()
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r4, r1)
            int r4 = r0.getEventType()
            r1 = 0
        L11:
            r2 = 1
            if (r4 == r2) goto L146
            r2 = 2
            java.lang.String r3 = "Bucket"
            if (r4 == r2) goto L2f
            r2 = 3
            if (r4 == r2) goto L1e
            goto L139
        L1e:
            java.lang.String r4 = r0.getName()
            boolean r4 = r3.equals(r4)
            if (r4 == 0) goto L139
            if (r1 == 0) goto L139
            r5.addBucket(r1)
            goto L139
        L2f:
            java.lang.String r4 = r0.getName()
            if (r4 != 0) goto L37
            goto L139
        L37:
            java.lang.String r2 = "Prefix"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L48
            java.lang.String r4 = r0.nextText()
            r5.setPrefix(r4)
            goto L139
        L48:
            java.lang.String r2 = "Marker"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L59
            java.lang.String r4 = r0.nextText()
            r5.setMarker(r4)
            goto L139
        L59:
            java.lang.String r2 = "MaxKeys"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L74
            java.lang.String r4 = r0.nextText()
            if (r4 == 0) goto L139
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            int r4 = r4.intValue()
            r5.setMaxKeys(r4)
            goto L139
        L74:
            java.lang.String r2 = "IsTruncated"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L8f
            java.lang.String r4 = r0.nextText()
            if (r4 == 0) goto L139
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            boolean r4 = r4.booleanValue()
            r5.setTruncated(r4)
            goto L139
        L8f:
            java.lang.String r2 = "NextMarker"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto La0
            java.lang.String r4 = r0.nextText()
            r5.setNextMarker(r4)
            goto L139
        La0:
            java.lang.String r2 = "ID"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto Lb1
            java.lang.String r4 = r0.nextText()
            r5.setOwnerId(r4)
            goto L139
        Lb1:
            java.lang.String r2 = "DisplayName"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto Lc2
            java.lang.String r4 = r0.nextText()
            r5.setOwnerDisplayName(r4)
            goto L139
        Lc2:
            boolean r2 = r3.equals(r4)
            if (r2 == 0) goto Ld0
            com.alibaba.sdk.android.oss.model.OSSBucketSummary r4 = new com.alibaba.sdk.android.oss.model.OSSBucketSummary
            r4.<init>()
            r1 = r4
            goto L139
        Ld0:
            java.lang.String r2 = "CreationDate"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto Le5
            if (r1 == 0) goto L139
            java.lang.String r4 = r0.nextText()
            java.util.Date r4 = com.alibaba.sdk.android.oss.common.utils.DateUtil.parseIso8601Date(r4)
            r1.createDate = r4
            goto L139
        Le5:
            java.lang.String r2 = "ExtranetEndpoint"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto Lf6
            if (r1 == 0) goto L139
            java.lang.String r4 = r0.nextText()
            r1.extranetEndpoint = r4
            goto L139
        Lf6:
            java.lang.String r2 = "IntranetEndpoint"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L107
            if (r1 == 0) goto L139
            java.lang.String r4 = r0.nextText()
            r1.intranetEndpoint = r4
            goto L139
        L107:
            java.lang.String r2 = "Location"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L118
            if (r1 == 0) goto L139
            java.lang.String r4 = r0.nextText()
            r1.location = r4
            goto L139
        L118:
            java.lang.String r2 = "Name"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L129
            if (r1 == 0) goto L139
            java.lang.String r4 = r0.nextText()
            r1.name = r4
            goto L139
        L129:
            java.lang.String r2 = "StorageClass"
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L139
            if (r1 == 0) goto L139
            java.lang.String r4 = r0.nextText()
            r1.storageClass = r4
        L139:
            int r4 = r0.next()
            r2 = 4
            if (r4 != r2) goto L11
            int r4 = r0.next()
            goto L11
        L146:
            return r5
    }

    private static com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult parseCompleteMultipartUploadResponseXML(java.io.InputStream r2, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r3) throws java.lang.Exception {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r2, r1)
            int r2 = r0.getEventType()
        Ld:
            r1 = 1
            if (r2 == r1) goto L63
            r1 = 2
            if (r2 == r1) goto L14
            goto L57
        L14:
            java.lang.String r2 = r0.getName()
            java.lang.String r1 = "Location"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L28
            java.lang.String r2 = r0.nextText()
            r3.setLocation(r2)
            goto L57
        L28:
            java.lang.String r1 = "Bucket"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L38
            java.lang.String r2 = r0.nextText()
            r3.setBucketName(r2)
            goto L57
        L38:
            java.lang.String r1 = "Key"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L48
            java.lang.String r2 = r0.nextText()
            r3.setObjectKey(r2)
            goto L57
        L48:
            java.lang.String r1 = "ETag"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L57
            java.lang.String r2 = r0.nextText()
            r3.setETag(r2)
        L57:
            int r2 = r0.next()
            r1 = 4
            if (r2 != r1) goto Ld
            int r2 = r0.next()
            goto Ld
        L63:
            return r3
    }

    private static com.alibaba.sdk.android.oss.model.CopyObjectResult parseCopyObjectResponseXML(java.io.InputStream r2, com.alibaba.sdk.android.oss.model.CopyObjectResult r3) throws java.lang.Exception {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r2, r1)
            int r2 = r0.getEventType()
        Ld:
            r1 = 1
            if (r2 == r1) goto L47
            r1 = 2
            if (r2 == r1) goto L14
            goto L3b
        L14:
            java.lang.String r2 = r0.getName()
            java.lang.String r1 = "LastModified"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L2c
            java.lang.String r2 = r0.nextText()
            java.util.Date r2 = com.alibaba.sdk.android.oss.common.utils.DateUtil.parseIso8601Date(r2)
            r3.setLastModified(r2)
            goto L3b
        L2c:
            java.lang.String r1 = "ETag"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L3b
            java.lang.String r2 = r0.nextText()
            r3.setEtag(r2)
        L3b:
            int r2 = r0.next()
            r1 = 4
            if (r2 != r1) goto Ld
            int r2 = r0.next()
            goto Ld
        L47:
            return r3
    }

    private static com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult parseDeleteMultipleObjectResponse(java.io.InputStream r2, com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult r3) throws java.lang.Exception {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r2, r1)
            int r2 = r0.getEventType()
        Ld:
            r1 = 1
            if (r2 == r1) goto L33
            r1 = 2
            if (r2 == r1) goto L14
            goto L27
        L14:
            java.lang.String r2 = r0.getName()
            java.lang.String r1 = "Key"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L27
            java.lang.String r2 = r0.nextText()
            r3.addDeletedObject(r2)
        L27:
            int r2 = r0.next()
            r1 = 4
            if (r2 != r1) goto Ld
            int r2 = r0.next()
            goto Ld
        L33:
            return r3
    }

    private static com.alibaba.sdk.android.oss.model.GetBucketACLResult parseGetBucketACLResponse(java.io.InputStream r2, com.alibaba.sdk.android.oss.model.GetBucketACLResult r3) throws java.lang.Exception {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r2, r1)
            int r2 = r0.getEventType()
        Ld:
            r1 = 1
            if (r2 == r1) goto L53
            r1 = 2
            if (r2 == r1) goto L14
            goto L47
        L14:
            java.lang.String r2 = r0.getName()
            java.lang.String r1 = "Grant"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L28
            java.lang.String r2 = r0.nextText()
            r3.setBucketACL(r2)
            goto L47
        L28:
            java.lang.String r1 = "ID"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L38
            java.lang.String r2 = r0.nextText()
            r3.setBucketOwnerID(r2)
            goto L47
        L38:
            java.lang.String r1 = "DisplayName"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L47
            java.lang.String r2 = r0.nextText()
            r3.setBucketOwner(r2)
        L47:
            int r2 = r0.next()
            r1 = 4
            if (r2 != r1) goto Ld
            int r2 = r0.next()
            goto Ld
        L53:
            return r3
    }

    private static com.alibaba.sdk.android.oss.model.GetBucketInfoResult parseGetBucketInfoResponse(java.io.InputStream r6, com.alibaba.sdk.android.oss.model.GetBucketInfoResult r7) throws java.lang.Exception {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r6, r1)
            int r6 = r0.getEventType()
            r1 = 0
            r2 = r1
        Lf:
            r3 = 1
            if (r6 == r3) goto L111
            r3 = 2
            java.lang.String r4 = "Bucket"
            java.lang.String r5 = "Owner"
            if (r6 == r3) goto L3f
            r3 = 3
            if (r6 == r3) goto L1e
            goto L104
        L1e:
            java.lang.String r6 = r0.getName()
            if (r6 != 0) goto L26
            goto L104
        L26:
            boolean r3 = r4.equals(r6)
            if (r3 == 0) goto L33
            if (r1 == 0) goto L104
            r7.setBucket(r1)
            goto L104
        L33:
            boolean r6 = r5.equals(r6)
            if (r6 == 0) goto L104
            if (r1 == 0) goto L104
            r1.owner = r2
            goto L104
        L3f:
            java.lang.String r6 = r0.getName()
            if (r6 != 0) goto L47
            goto L104
        L47:
            boolean r3 = r5.equals(r6)
            if (r3 == 0) goto L55
            com.alibaba.sdk.android.oss.model.Owner r6 = new com.alibaba.sdk.android.oss.model.Owner
            r6.<init>()
            r2 = r6
            goto L104
        L55:
            java.lang.String r3 = "ID"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L68
            if (r2 == 0) goto L104
            java.lang.String r6 = r0.nextText()
            r2.setId(r6)
            goto L104
        L68:
            java.lang.String r3 = "DisplayName"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L7b
            if (r2 == 0) goto L104
            java.lang.String r6 = r0.nextText()
            r2.setDisplayName(r6)
            goto L104
        L7b:
            boolean r3 = r4.equals(r6)
            if (r3 == 0) goto L89
            com.alibaba.sdk.android.oss.model.OSSBucketSummary r6 = new com.alibaba.sdk.android.oss.model.OSSBucketSummary
            r6.<init>()
            r1 = r6
            goto L104
        L89:
            java.lang.String r3 = "CreationDate"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L9e
            if (r1 == 0) goto L104
            java.lang.String r6 = r0.nextText()
            java.util.Date r6 = com.alibaba.sdk.android.oss.common.utils.DateUtil.parseIso8601Date(r6)
            r1.createDate = r6
            goto L104
        L9e:
            java.lang.String r3 = "ExtranetEndpoint"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto Laf
            if (r1 == 0) goto L104
            java.lang.String r6 = r0.nextText()
            r1.extranetEndpoint = r6
            goto L104
        Laf:
            java.lang.String r3 = "IntranetEndpoint"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto Lc0
            if (r1 == 0) goto L104
            java.lang.String r6 = r0.nextText()
            r1.intranetEndpoint = r6
            goto L104
        Lc0:
            java.lang.String r3 = "Location"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto Ld1
            if (r1 == 0) goto L104
            java.lang.String r6 = r0.nextText()
            r1.location = r6
            goto L104
        Ld1:
            java.lang.String r3 = "Name"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto Le2
            if (r1 == 0) goto L104
            java.lang.String r6 = r0.nextText()
            r1.name = r6
            goto L104
        Le2:
            java.lang.String r3 = "StorageClass"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto Lf3
            if (r1 == 0) goto L104
            java.lang.String r6 = r0.nextText()
            r1.storageClass = r6
            goto L104
        Lf3:
            java.lang.String r3 = "Grant"
            boolean r6 = r3.equals(r6)
            if (r6 == 0) goto L104
            if (r1 == 0) goto L104
            java.lang.String r6 = r0.nextText()
            r1.setAcl(r6)
        L104:
            int r6 = r0.next()
            r3 = 4
            if (r6 != r3) goto Lf
            int r6 = r0.next()
            goto Lf
        L111:
            return r7
    }

    private static com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult parseGetBucketLifecycleResponse(java.io.InputStream r16, com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult r17) throws java.lang.Exception {
            r0 = r17
            org.xmlpull.v1.XmlPullParser r1 = android.util.Xml.newPullParser()
            java.lang.String r2 = "utf-8"
            r3 = r16
            r1.setInput(r3, r2)
            int r2 = r1.getEventType()
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
        L18:
            r12 = 1
            if (r2 == r12) goto L163
            r13 = 2
            java.lang.String r14 = "Transition"
            java.lang.String r15 = "AbortMultipartUpload"
            java.lang.String r4 = "Expiration"
            java.lang.String r3 = "Rule"
            if (r2 == r13) goto L59
            r12 = 3
            if (r2 == r12) goto L2a
            goto L68
        L2a:
            java.lang.String r2 = r1.getName()
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto L38
            r0.addLifecycleRule(r5)
            goto L68
        L38:
            boolean r3 = r4.equals(r2)
            if (r3 == 0) goto L42
            r3 = 0
            r6 = 0
            goto L156
        L42:
            boolean r3 = r15.equals(r2)
            if (r3 == 0) goto L4c
            r3 = 0
            r7 = 0
            goto L156
        L4c:
            boolean r2 = r14.equals(r2)
            if (r2 == 0) goto L68
            r3 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            goto L156
        L59:
            java.lang.String r2 = r1.getName()
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto L6b
            com.alibaba.sdk.android.oss.model.BucketLifecycleRule r5 = new com.alibaba.sdk.android.oss.model.BucketLifecycleRule
            r5.<init>()
        L68:
            r3 = 0
            goto L156
        L6b:
            java.lang.String r3 = "ID"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto L7b
            java.lang.String r2 = r1.nextText()
            r5.setIdentifier(r2)
            goto L68
        L7b:
            java.lang.String r3 = "Prefix"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto L8b
            java.lang.String r2 = r1.nextText()
            r5.setPrefix(r2)
            goto L68
        L8b:
            java.lang.String r3 = "Status"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto La9
            java.lang.String r2 = r1.nextText()
            java.lang.String r3 = "Enabled"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto La3
            r5.setStatus(r12)
            goto L68
        La3:
            r3 = 0
            r5.setStatus(r3)
            goto L156
        La9:
            r3 = 0
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto Lb3
            r6 = 1
            goto L156
        Lb3:
            boolean r4 = r15.equals(r2)
            if (r4 == 0) goto Lbc
            r7 = 1
            goto L156
        Lbc:
            boolean r4 = r14.equals(r2)
            if (r4 == 0) goto Lc5
            r8 = 1
            goto L156
        Lc5:
            java.lang.String r4 = "Days"
            boolean r4 = r4.equals(r2)
            java.lang.String r12 = "Archive"
            java.lang.String r13 = "IA"
            if (r4 == 0) goto Lfd
            java.lang.String r9 = r1.nextText()
            if (r5 == 0) goto L156
            if (r6 == 0) goto Lde
            r5.setDays(r9)
            goto L156
        Lde:
            if (r7 == 0) goto Le5
            r5.setMultipartDays(r9)
            goto L156
        Le5:
            if (r8 == 0) goto L156
            if (r11 == 0) goto L156
            boolean r2 = r13.equals(r11)
            if (r2 == 0) goto Lf3
            r5.setIADays(r9)
            goto L156
        Lf3:
            boolean r2 = r12.equals(r11)
            if (r2 == 0) goto L156
            r5.setArchiveDays(r9)
            goto L156
        Lfd:
            java.lang.String r4 = "Date"
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto L12f
            java.lang.String r10 = r1.nextText()
            if (r5 == 0) goto L156
            if (r6 == 0) goto L111
            r5.setExpireDate(r10)
            goto L156
        L111:
            if (r7 == 0) goto L117
            r5.setMultipartExpireDate(r10)
            goto L156
        L117:
            if (r8 == 0) goto L156
            if (r11 == 0) goto L156
            boolean r2 = r13.equals(r11)
            if (r2 == 0) goto L125
            r5.setIAExpireDate(r10)
            goto L156
        L125:
            boolean r2 = r12.equals(r11)
            if (r2 == 0) goto L156
            r5.setArchiveExpireDate(r10)
            goto L156
        L12f:
            java.lang.String r4 = "StorageClass"
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L156
            java.lang.String r11 = r1.nextText()
            if (r5 == 0) goto L156
            boolean r2 = r13.equals(r11)
            if (r2 == 0) goto L14a
            r5.setIADays(r9)
            r5.setIAExpireDate(r10)
            goto L156
        L14a:
            boolean r2 = r12.equals(r11)
            if (r2 == 0) goto L156
            r5.setArchiveDays(r10)
            r5.setArchiveExpireDate(r10)
        L156:
            int r2 = r1.next()
            r4 = 4
            if (r2 != r4) goto L18
            int r2 = r1.next()
            goto L18
        L163:
            return r0
    }

    private static com.alibaba.sdk.android.oss.model.GetBucketLoggingResult parseGetBucketLoggingResponse(java.io.InputStream r3, com.alibaba.sdk.android.oss.model.GetBucketLoggingResult r4) throws java.lang.Exception {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r3, r1)
            int r3 = r0.getEventType()
        Ld:
            r1 = 1
            if (r3 == r1) goto L4f
            r2 = 2
            if (r3 == r2) goto L14
            goto L43
        L14:
            java.lang.String r3 = r0.getName()
            java.lang.String r2 = "LoggingEnabled"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L24
            r4.setLoggingEnabled(r1)
            goto L43
        L24:
            java.lang.String r1 = "TargetBucket"
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L34
            java.lang.String r3 = r0.nextText()
            r4.setTargetBucketName(r3)
            goto L43
        L34:
            java.lang.String r1 = "TargetPrefix"
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L43
            java.lang.String r3 = r0.nextText()
            r4.setTargetPrefix(r3)
        L43:
            int r3 = r0.next()
            r1 = 4
            if (r3 != r1) goto Ld
            int r3 = r0.next()
            goto Ld
        L4f:
            return r4
    }

    private static com.alibaba.sdk.android.oss.model.GetBucketRefererResult parseGetBucketRefererResponse(java.io.InputStream r2, com.alibaba.sdk.android.oss.model.GetBucketRefererResult r3) throws java.lang.Exception {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r2, r1)
            int r2 = r0.getEventType()
        Ld:
            r1 = 1
            if (r2 == r1) goto L33
            r1 = 2
            if (r2 == r1) goto L14
            goto L27
        L14:
            java.lang.String r2 = r0.getName()
            java.lang.String r1 = "Referer"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L27
            java.lang.String r2 = r0.nextText()
            r3.addReferer(r2)
        L27:
            int r2 = r0.next()
            r1 = 4
            if (r2 != r1) goto Ld
            int r2 = r0.next()
            goto Ld
        L33:
            return r3
    }

    private static com.alibaba.sdk.android.oss.model.GetObjectACLResult parseGetObjectACLResponse(java.io.InputStream r2, com.alibaba.sdk.android.oss.model.GetObjectACLResult r3) throws java.lang.Exception {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r2, r1)
            int r2 = r0.getEventType()
        Ld:
            r1 = 1
            if (r2 == r1) goto L53
            r1 = 2
            if (r2 == r1) goto L14
            goto L47
        L14:
            java.lang.String r2 = r0.getName()
            java.lang.String r1 = "Grant"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L28
            java.lang.String r2 = r0.nextText()
            r3.setObjectACL(r2)
            goto L47
        L28:
            java.lang.String r1 = "ID"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L38
            java.lang.String r2 = r0.nextText()
            r3.setObjectOwnerID(r2)
            goto L47
        L38:
            java.lang.String r1 = "DisplayName"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L47
            java.lang.String r2 = r0.nextText()
            r3.setObjectOwner(r2)
        L47:
            int r2 = r0.next()
            r1 = 4
            if (r2 != r1) goto Ld
            int r2 = r0.next()
            goto Ld
        L53:
            return r3
    }

    private static com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult parseInitMultipartResponseXML(java.io.InputStream r2, com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult r3) throws java.lang.Exception {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r2, r1)
            int r2 = r0.getEventType()
        Ld:
            r1 = 1
            if (r2 == r1) goto L53
            r1 = 2
            if (r2 == r1) goto L14
            goto L47
        L14:
            java.lang.String r2 = r0.getName()
            java.lang.String r1 = "Bucket"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L28
            java.lang.String r2 = r0.nextText()
            r3.setBucketName(r2)
            goto L47
        L28:
            java.lang.String r1 = "Key"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L38
            java.lang.String r2 = r0.nextText()
            r3.setObjectKey(r2)
            goto L47
        L38:
            java.lang.String r1 = "UploadId"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L47
            java.lang.String r2 = r0.nextText()
            r3.setUploadId(r2)
        L47:
            int r2 = r0.next()
            r1 = 4
            if (r2 != r1) goto Ld
            int r2 = r0.next()
            goto Ld
        L53:
            return r3
    }

    private static com.alibaba.sdk.android.oss.model.ListPartsResult parseListPartsResponseXML(java.io.InputStream r5, com.alibaba.sdk.android.oss.model.ListPartsResult r6) throws java.lang.Exception {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            org.xmlpull.v1.XmlPullParser r1 = android.util.Xml.newPullParser()
            java.lang.String r2 = "utf-8"
            r1.setInput(r5, r2)
            int r5 = r1.getEventType()
            r2 = 0
        L13:
            r3 = 1
            if (r5 == r3) goto L160
            r3 = 2
            java.lang.String r4 = "Part"
            if (r5 == r3) goto L2f
            r3 = 3
            if (r5 == r3) goto L20
            goto L153
        L20:
            java.lang.String r5 = r1.getName()
            boolean r5 = r4.equals(r5)
            if (r5 == 0) goto L153
            r0.add(r2)
            goto L153
        L2f:
            java.lang.String r5 = r1.getName()
            java.lang.String r3 = "Bucket"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L44
            java.lang.String r5 = r1.nextText()
            r6.setBucketName(r5)
            goto L153
        L44:
            java.lang.String r3 = "Key"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L55
            java.lang.String r5 = r1.nextText()
            r6.setKey(r5)
            goto L153
        L55:
            java.lang.String r3 = "UploadId"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L66
            java.lang.String r5 = r1.nextText()
            r6.setUploadId(r5)
            goto L153
        L66:
            java.lang.String r3 = "PartNumberMarker"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L81
            java.lang.String r5 = r1.nextText()
            boolean r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r5)
            if (r3 != 0) goto L153
            int r5 = java.lang.Integer.parseInt(r5)
            r6.setPartNumberMarker(r5)
            goto L153
        L81:
            java.lang.String r3 = "NextPartNumberMarker"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L9c
            java.lang.String r5 = r1.nextText()
            boolean r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r5)
            if (r3 != 0) goto L153
            int r5 = java.lang.Integer.parseInt(r5)
            r6.setNextPartNumberMarker(r5)
            goto L153
        L9c:
            java.lang.String r3 = "MaxParts"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto Lb7
            java.lang.String r5 = r1.nextText()
            boolean r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r5)
            if (r3 != 0) goto L153
            int r5 = java.lang.Integer.parseInt(r5)
            r6.setMaxParts(r5)
            goto L153
        Lb7:
            java.lang.String r3 = "IsTruncated"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto Ld6
            java.lang.String r5 = r1.nextText()
            boolean r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r5)
            if (r3 != 0) goto L153
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)
            boolean r5 = r5.booleanValue()
            r6.setTruncated(r5)
            goto L153
        Ld6:
            java.lang.String r3 = "StorageClass"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto Le7
            java.lang.String r5 = r1.nextText()
            r6.setStorageClass(r5)
            goto L153
        Le7:
            boolean r3 = r4.equals(r5)
            if (r3 == 0) goto Lf4
            com.alibaba.sdk.android.oss.model.PartSummary r5 = new com.alibaba.sdk.android.oss.model.PartSummary
            r5.<init>()
            r2 = r5
            goto L153
        Lf4:
            java.lang.String r3 = "PartNumber"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L112
            java.lang.String r5 = r1.nextText()
            boolean r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r5)
            if (r3 != 0) goto L153
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            int r5 = r5.intValue()
            r2.setPartNumber(r5)
            goto L153
        L112:
            java.lang.String r3 = "LastModified"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L126
            java.lang.String r5 = r1.nextText()
            java.util.Date r5 = com.alibaba.sdk.android.oss.common.utils.DateUtil.parseIso8601Date(r5)
            r2.setLastModified(r5)
            goto L153
        L126:
            java.lang.String r3 = "ETag"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L136
            java.lang.String r5 = r1.nextText()
            r2.setETag(r5)
            goto L153
        L136:
            java.lang.String r3 = "Size"
            boolean r5 = r3.equals(r5)
            if (r5 == 0) goto L153
            java.lang.String r5 = r1.nextText()
            boolean r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r5)
            if (r3 != 0) goto L153
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            long r3 = r5.longValue()
            r2.setSize(r3)
        L153:
            int r5 = r1.next()
            r3 = 4
            if (r5 != r3) goto L13
            int r5 = r1.next()
            goto L13
        L160:
            int r5 = r0.size()
            if (r5 <= 0) goto L169
            r6.setParts(r0)
        L169:
            return r6
    }

    private static com.alibaba.sdk.android.oss.model.ListObjectsResult parseObjectListResponse(java.io.InputStream r10, com.alibaba.sdk.android.oss.model.ListObjectsResult r11) throws java.lang.Exception {
            r11.clearCommonPrefixes()
            r11.clearObjectSummaries()
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.lang.String r1 = "utf-8"
            r0.setInput(r10, r1)
            int r10 = r0.getEventType()
            r1 = 0
            r2 = 0
            r3 = r2
            r4 = 0
        L17:
            r5 = 1
            if (r10 == r5) goto L1d6
            r6 = 2
            java.lang.String r7 = "CommonPrefixes"
            java.lang.String r8 = "Contents"
            java.lang.String r9 = "Owner"
            if (r10 == r6) goto L5a
            r5 = 3
            if (r10 == r5) goto L28
            goto L1c9
        L28:
            java.lang.String r10 = r0.getName()
            java.lang.String r5 = r0.getName()
            boolean r5 = r9.equals(r5)
            if (r5 == 0) goto L3d
            if (r2 == 0) goto L1c9
            r3.setOwner(r2)
            goto L1c9
        L3d:
            boolean r5 = r8.equals(r10)
            if (r5 == 0) goto L51
            if (r3 == 0) goto L1c9
            java.lang.String r10 = r11.getBucketName()
            r3.setBucketName(r10)
            r11.addObjectSummary(r3)
            goto L1c9
        L51:
            boolean r10 = r7.equals(r10)
            if (r10 == 0) goto L1c9
            r4 = 0
            goto L1c9
        L5a:
            java.lang.String r10 = r0.getName()
            java.lang.String r6 = "Name"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L6f
            java.lang.String r10 = r0.nextText()
            r11.setBucketName(r10)
            goto L1c9
        L6f:
            java.lang.String r6 = "Prefix"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L91
            if (r4 == 0) goto L88
            java.lang.String r10 = r0.nextText()
            boolean r5 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r10)
            if (r5 != 0) goto L1c9
            r11.addCommonPrefix(r10)
            goto L1c9
        L88:
            java.lang.String r10 = r0.nextText()
            r11.setPrefix(r10)
            goto L1c9
        L91:
            java.lang.String r6 = "Marker"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto La2
            java.lang.String r10 = r0.nextText()
            r11.setMarker(r10)
            goto L1c9
        La2:
            java.lang.String r6 = "Delimiter"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto Lb3
            java.lang.String r10 = r0.nextText()
            r11.setDelimiter(r10)
            goto L1c9
        Lb3:
            java.lang.String r6 = "EncodingType"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto Lc4
            java.lang.String r10 = r0.nextText()
            r11.setEncodingType(r10)
            goto L1c9
        Lc4:
            java.lang.String r6 = "MaxKeys"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto Le3
            java.lang.String r10 = r0.nextText()
            boolean r5 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r10)
            if (r5 != 0) goto L1c9
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            int r10 = r10.intValue()
            r11.setMaxKeys(r10)
            goto L1c9
        Le3:
            java.lang.String r6 = "NextMarker"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto Lf4
            java.lang.String r10 = r0.nextText()
            r11.setNextMarker(r10)
            goto L1c9
        Lf4:
            java.lang.String r6 = "IsTruncated"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L113
            java.lang.String r10 = r0.nextText()
            boolean r5 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r10)
            if (r5 != 0) goto L1c9
            java.lang.Boolean r10 = java.lang.Boolean.valueOf(r10)
            boolean r10 = r10.booleanValue()
            r11.setTruncated(r10)
            goto L1c9
        L113:
            boolean r6 = r8.equals(r10)
            if (r6 == 0) goto L121
            com.alibaba.sdk.android.oss.model.OSSObjectSummary r10 = new com.alibaba.sdk.android.oss.model.OSSObjectSummary
            r10.<init>()
            r3 = r10
            goto L1c9
        L121:
            java.lang.String r6 = "Key"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L132
            java.lang.String r10 = r0.nextText()
            r3.setKey(r10)
            goto L1c9
        L132:
            java.lang.String r6 = "LastModified"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L147
            java.lang.String r10 = r0.nextText()
            java.util.Date r10 = com.alibaba.sdk.android.oss.common.utils.DateUtil.parseIso8601Date(r10)
            r3.setLastModified(r10)
            goto L1c9
        L147:
            java.lang.String r6 = "Size"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L165
            java.lang.String r10 = r0.nextText()
            boolean r5 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r10)
            if (r5 != 0) goto L1c9
            java.lang.Long r10 = java.lang.Long.valueOf(r10)
            long r5 = r10.longValue()
            r3.setSize(r5)
            goto L1c9
        L165:
            java.lang.String r6 = "ETag"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L175
            java.lang.String r10 = r0.nextText()
            r3.setETag(r10)
            goto L1c9
        L175:
            java.lang.String r6 = "Type"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L185
            java.lang.String r10 = r0.nextText()
            r3.setType(r10)
            goto L1c9
        L185:
            java.lang.String r6 = "StorageClass"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L195
            java.lang.String r10 = r0.nextText()
            r3.setStorageClass(r10)
            goto L1c9
        L195:
            boolean r6 = r9.equals(r10)
            if (r6 == 0) goto L1a2
            com.alibaba.sdk.android.oss.model.Owner r10 = new com.alibaba.sdk.android.oss.model.Owner
            r10.<init>()
            r2 = r10
            goto L1c9
        L1a2:
            java.lang.String r6 = "ID"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L1b2
            java.lang.String r10 = r0.nextText()
            r2.setId(r10)
            goto L1c9
        L1b2:
            java.lang.String r6 = "DisplayName"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L1c2
            java.lang.String r10 = r0.nextText()
            r2.setDisplayName(r10)
            goto L1c9
        L1c2:
            boolean r10 = r7.equals(r10)
            if (r10 == 0) goto L1c9
            r4 = 1
        L1c9:
            int r10 = r0.next()
            r5 = 4
            if (r10 != r5) goto L17
            int r10 = r0.next()
            goto L17
        L1d6:
            return r11
    }

    public static com.alibaba.sdk.android.oss.model.ObjectMetadata parseObjectMetadata(java.util.Map<java.lang.String, java.lang.String> r4) throws java.lang.Exception {
            com.alibaba.sdk.android.oss.model.ObjectMetadata r0 = new com.alibaba.sdk.android.oss.model.ObjectMetadata     // Catch: java.lang.Exception -> L8a
            r0.<init>()     // Catch: java.lang.Exception -> L8a
            java.util.Set r1 = r4.keySet()     // Catch: java.lang.Exception -> L8a
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L8a
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L8a
            if (r2 == 0) goto L89
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L8a
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = "x-oss-meta-"
            int r3 = r2.indexOf(r3)     // Catch: java.lang.Exception -> L8a
            if (r3 < 0) goto L2b
            java.lang.Object r3 = r4.get(r2)     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L8a
            r0.addUserMetadata(r2, r3)     // Catch: java.lang.Exception -> L8a
            goto Ld
        L2b:
            java.lang.String r3 = "Last-Modified"
            boolean r3 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Exception -> L8a
            if (r3 != 0) goto L70
            java.lang.String r3 = "Date"
            boolean r3 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Exception -> L8a
            if (r3 == 0) goto L3c
            goto L70
        L3c:
            java.lang.String r3 = "Content-Length"
            boolean r3 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Exception -> L8a
            if (r3 == 0) goto L52
            java.lang.Object r3 = r4.get(r2)     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L8a
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> L8a
            r0.setHeader(r2, r3)     // Catch: java.lang.Exception -> L8a
            goto Ld
        L52:
            java.lang.String r3 = "ETag"
            boolean r3 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Exception -> L8a
            if (r3 == 0) goto L68
            java.lang.Object r3 = r4.get(r2)     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = trimQuotes(r3)     // Catch: java.lang.Exception -> L8a
            r0.setHeader(r2, r3)     // Catch: java.lang.Exception -> L8a
            goto Ld
        L68:
            java.lang.Object r3 = r4.get(r2)     // Catch: java.lang.Exception -> L8a
            r0.setHeader(r2, r3)     // Catch: java.lang.Exception -> L8a
            goto Ld
        L70:
            java.lang.Object r3 = r4.get(r2)     // Catch: java.text.ParseException -> L7e java.lang.Exception -> L8a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.text.ParseException -> L7e java.lang.Exception -> L8a
            java.util.Date r3 = com.alibaba.sdk.android.oss.common.utils.DateUtil.parseRfc822Date(r3)     // Catch: java.text.ParseException -> L7e java.lang.Exception -> L8a
            r0.setHeader(r2, r3)     // Catch: java.text.ParseException -> L7e java.lang.Exception -> L8a
            goto Ld
        L7e:
            r4 = move-exception
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Exception -> L8a
            java.lang.String r1 = r4.getMessage()     // Catch: java.lang.Exception -> L8a
            r0.<init>(r1, r4)     // Catch: java.lang.Exception -> L8a
            throw r0     // Catch: java.lang.Exception -> L8a
        L89:
            return r0
        L8a:
            r4 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = r4.getMessage()
            r0.<init>(r1, r4)
            goto L96
        L95:
            throw r0
        L96:
            goto L95
    }

    public static com.alibaba.sdk.android.oss.ServiceException parseResponseErrorXML(com.alibaba.sdk.android.oss.internal.ResponseMessage r10, boolean r11) throws com.alibaba.sdk.android.oss.ClientException {
            int r1 = r10.getStatusCode()
            okhttp3.Response r0 = r10.getResponse()
            java.lang.String r2 = "x-oss-request-id"
            java.lang.String r0 = r0.header(r2)
            r2 = 0
            if (r11 != 0) goto Ldd
            okhttp3.Response r10 = r10.getResponse()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            okhttp3.ResponseBody r10 = r10.body()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            java.lang.String r10 = r10.string()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            r11.<init>()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            java.lang.String r3 = "errorMessage  ：  \n "
            r11.append(r3)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            r11.append(r10)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            java.lang.String r11 = r11.toString()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r11)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            java.io.ByteArrayInputStream r11 = new java.io.ByteArrayInputStream     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            byte[] r3 = r10.getBytes()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            r11.<init>(r3)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            org.xmlpull.v1.XmlPullParser r3 = android.util.Xml.newPullParser()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            java.lang.String r4 = "utf-8"
            r3.setInput(r11, r4)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            int r11 = r3.getEventType()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            r4 = r2
            r5 = r4
            r6 = r5
            r7 = r6
        L4b:
            r8 = 1
            if (r11 == r8) goto Lc8
            r8 = 2
            if (r11 == r8) goto L53
            goto Lbc
        L53:
            java.lang.String r11 = "Code"
            java.lang.String r8 = r3.getName()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            boolean r11 = r11.equals(r8)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            if (r11 == 0) goto L65
            java.lang.String r11 = r3.nextText()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            r2 = r11
            goto Lbc
        L65:
            java.lang.String r11 = "Message"
            java.lang.String r8 = r3.getName()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            boolean r11 = r11.equals(r8)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            if (r11 == 0) goto L77
            java.lang.String r11 = r3.nextText()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            r4 = r11
            goto Lbc
        L77:
            java.lang.String r11 = "RequestId"
            java.lang.String r8 = r3.getName()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            boolean r11 = r11.equals(r8)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            if (r11 == 0) goto L89
            java.lang.String r11 = r3.nextText()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            r0 = r11
            goto Lbc
        L89:
            java.lang.String r11 = "HostId"
            java.lang.String r8 = r3.getName()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            boolean r11 = r11.equals(r8)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            if (r11 == 0) goto L9b
            java.lang.String r11 = r3.nextText()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            r5 = r11
            goto Lbc
        L9b:
            java.lang.String r11 = "PartNumber"
            java.lang.String r8 = r3.getName()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            boolean r11 = r11.equals(r8)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            if (r11 == 0) goto Lac
            java.lang.String r6 = r3.nextText()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            goto Lbc
        Lac:
            java.lang.String r11 = "PartEtag"
            java.lang.String r8 = r3.getName()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            boolean r11 = r11.equals(r8)     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            if (r11 == 0) goto Lbc
            java.lang.String r7 = r3.nextText()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
        Lbc:
            int r11 = r3.next()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            r8 = 4
            if (r11 != r8) goto L4b
            int r11 = r3.next()     // Catch: org.xmlpull.v1.XmlPullParserException -> Lcf java.io.IOException -> Ld6
            goto L4b
        Lc8:
            r3 = r2
            r2 = r4
            r4 = r0
            r9 = r6
            r6 = r10
            r10 = r9
            goto Le3
        Lcf:
            r10 = move-exception
            com.alibaba.sdk.android.oss.ClientException r11 = new com.alibaba.sdk.android.oss.ClientException
            r11.<init>(r10)
            throw r11
        Ld6:
            r10 = move-exception
            com.alibaba.sdk.android.oss.ClientException r11 = new com.alibaba.sdk.android.oss.ClientException
            r11.<init>(r10)
            throw r11
        Ldd:
            r4 = r0
            r10 = r2
            r3 = r10
            r5 = r3
            r6 = r5
            r7 = r6
        Le3:
            com.alibaba.sdk.android.oss.ServiceException r11 = new com.alibaba.sdk.android.oss.ServiceException
            r0 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto Lf2
            r11.setPartEtag(r7)
        Lf2:
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 != 0) goto Lfb
            r11.setPartNumber(r10)
        Lfb:
            return r11
    }

    public static java.lang.String trimQuotes(java.lang.String r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.String r3 = r3.trim()
            java.lang.String r0 = "\""
            boolean r1 = r3.startsWith(r0)
            r2 = 1
            if (r1 == 0) goto L15
            java.lang.String r3 = r3.substring(r2)
        L15:
            boolean r0 = r3.endsWith(r0)
            if (r0 == 0) goto L25
            r0 = 0
            int r1 = r3.length()
            int r1 = r1 - r2
            java.lang.String r3 = r3.substring(r0, r1)
        L25:
            return r3
    }
}
