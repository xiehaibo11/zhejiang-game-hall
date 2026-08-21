package com.bianfeng.fastvo.util;

public class FastovAppConextUtils {
    private static final java.lang.String FASTOV_BUCKET_NAME = "FASTOV_BUCKET_NAME";
    private static final java.lang.String FASTOV_ENDPOINT_URL = "FASTOV_ENDPOINT_URL";
    private static final java.lang.String FASTOV_SIGN_URL = "FASTVO_STSSERVER";
    private static final java.lang.String KEY_BUCKET_NAME = "asset-imeete";
    private static final java.lang.String KEY_ENDPOINT = "https://oss-cn-hangzhou.aliyuncs.com";
    private static final java.lang.String KEY_SIGN_URL = "https://api.bianfeng.com";
    private static java.lang.String bucketName;
    private static java.lang.String endpoint;
    private static com.bianfeng.ymnsdk.fastvo.FastVoiceInterface fastVoiceInterface;
    private static java.lang.String signUrl;

    public FastovAppConextUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getBucketName() {
            java.lang.String r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.bucketName
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.bucketName
            return r0
        Lb:
            java.lang.String r0 = "asset-imeete"
            return r0
    }

    public static java.lang.String getEndpoint() {
            java.lang.String r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.endpoint
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.endpoint
            return r0
        Lb:
            java.lang.String r0 = "https://oss-cn-hangzhou.aliyuncs.com"
            return r0
    }

    private static java.lang.String getMetaData(java.lang.String r1) {
            com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.fastVoiceInterface
            java.lang.String r1 = r0.getMetaData(r1)
            return r1
    }

    public static java.lang.String getSignUrl() {
            java.lang.String r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.signUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.signUrl
            return r0
        Lb:
            java.lang.String r0 = "https://api.bianfeng.com"
            return r0
    }

    public static void init(com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r0) {
            com.bianfeng.fastvo.util.FastovAppConextUtils.fastVoiceInterface = r0
            java.lang.String r0 = "FASTVO_STSSERVER"
            java.lang.String r0 = getMetaData(r0)
            com.bianfeng.fastvo.util.FastovAppConextUtils.signUrl = r0
            java.lang.String r0 = "FASTOV_ENDPOINT_URL"
            java.lang.String r0 = getMetaData(r0)
            com.bianfeng.fastvo.util.FastovAppConextUtils.endpoint = r0
            java.lang.String r0 = "FASTOV_BUCKET_NAME"
            java.lang.String r0 = getMetaData(r0)
            com.bianfeng.fastvo.util.FastovAppConextUtils.bucketName = r0
            return
    }
}
