package com.bianfeng.fastvo.action;

public class OSSHelper {
    private static com.alibaba.sdk.android.oss.OSS oss;



    public OSSHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.alibaba.sdk.android.oss.OSS access$000() {
            com.alibaba.sdk.android.oss.OSS r0 = com.bianfeng.fastvo.action.OSSHelper.oss
            return r0
    }

    public static com.alibaba.sdk.android.oss.model.GetObjectResult downLoadfile(java.lang.String r2) {
            java.lang.String r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.getBucketName()
            com.alibaba.sdk.android.oss.model.GetObjectRequest r1 = new com.alibaba.sdk.android.oss.model.GetObjectRequest
            r1.<init>(r0, r2)
            com.alibaba.sdk.android.oss.OSS r2 = com.bianfeng.fastvo.action.OSSHelper.oss     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L10 com.alibaba.sdk.android.oss.ClientException -> L36
            com.alibaba.sdk.android.oss.model.GetObjectResult r2 = r2.getObject(r1)     // Catch: com.alibaba.sdk.android.oss.ServiceException -> L10 com.alibaba.sdk.android.oss.ClientException -> L36
            return r2
        L10:
            r2 = move-exception
            java.lang.String r0 = r2.getRequestId()
            java.lang.String r1 = "RequestId"
            android.util.Log.e(r1, r0)
            java.lang.String r0 = r2.getErrorCode()
            java.lang.String r1 = "ErrorCode"
            android.util.Log.e(r1, r0)
            java.lang.String r0 = r2.getHostId()
            java.lang.String r1 = "HostId"
            android.util.Log.e(r1, r0)
            java.lang.String r2 = r2.getRawMessage()
            java.lang.String r0 = "RawMessage"
            android.util.Log.e(r0, r2)
            goto L3a
        L36:
            r2 = move-exception
            r2.printStackTrace()
        L3a:
            r2 = 0
            return r2
    }

    private static java.lang.String getObjectKey(java.lang.String r6) {
            java.lang.String r0 = com.bianfeng.fastvo.FastConfig.getUid()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = com.bianfeng.fastvo.FastConfig.getOpenId()
        Le:
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.lang.String r2 = "yyyy/MM"
            r1.<init>(r2)
            java.util.Date r2 = new java.util.Date
            r2.<init>()
            java.lang.String r1 = r1.format(r2)
            java.lang.String r6 = com.bianfeng.fastvo.util.FileUtil.getSuffix(r6)
            r2 = 5
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.String r4 = "50027.fpftrrdlrs"
            r2[r3] = r4
            r3 = 1
            r2[r3] = r1
            r1 = 2
            java.lang.String r3 = com.bianfeng.fastvo.FastConfig.getAppId()
            r2[r1] = r3
            r1 = 3
            java.lang.String r3 = com.bianfeng.fastvo.FastConfig.getPlatformId()
            r2[r1] = r3
            r1 = 4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = "_"
            r3.append(r0)
            long r4 = java.lang.System.currentTimeMillis()
            r3.append(r4)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            r2[r1] = r6
            java.lang.String r6 = "%s/%s/%s/%s/%s"
            java.lang.String r6 = java.lang.String.format(r6, r2)
            return r6
    }

    public static void init(android.content.Context r0) {
            com.alibaba.sdk.android.oss.OSS r0 = com.bianfeng.fastvo.action.FastvoOssClientFactory.create(r0)
            com.bianfeng.fastvo.action.OSSHelper.oss = r0
            return
    }

    public static void upLoadFile(java.lang.String r5, com.bianfeng.fastvo.action.UploadListener r6) {
            java.lang.String r0 = getObjectKey(r5)
            java.lang.String r1 = com.bianfeng.fastvo.util.FastovAppConextUtils.getBucketName()
            com.alibaba.sdk.android.oss.model.PutObjectRequest r2 = new com.alibaba.sdk.android.oss.model.PutObjectRequest
            r2.<init>(r1, r0, r5)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "PutObjectBUCKET_NAME: "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r4 = " objectKey: "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r4 = "    filePath :"
            r3.append(r4)
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r5)
            com.bianfeng.fastvo.action.OSSHelper$1 r5 = new com.bianfeng.fastvo.action.OSSHelper$1
            r5.<init>()
            r2.setProgressCallback(r5)
            com.alibaba.sdk.android.oss.OSS r5 = com.bianfeng.fastvo.action.OSSHelper.oss
            com.bianfeng.fastvo.action.OSSHelper$2 r3 = new com.bianfeng.fastvo.action.OSSHelper$2
            r3.<init>(r1, r0, r6)
            r5.asyncPutObject(r2, r3)
            return
    }
}
