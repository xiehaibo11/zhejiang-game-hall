package com.bianfeng.fastvo.util;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.fastvo.FastVoiceInterface;

public class FastovAppConextUtils {
    private static final String FASTOV_BUCKET_NAME = "FASTOV_BUCKET_NAME";
    private static final String FASTOV_ENDPOINT_URL = "FASTOV_ENDPOINT_URL";
    private static final String FASTOV_SIGN_URL = "FASTVO_STSSERVER";
    private static final String KEY_BUCKET_NAME = "asset-imeete";
    private static final String KEY_ENDPOINT = "https://oss-cn-hangzhou.aliyuncs.com";
    private static final String KEY_SIGN_URL = "https://api.bianfeng.com";
    private static String bucketName;
    private static String endpoint;
    private static FastVoiceInterface fastVoiceInterface;
    private static String signUrl;

    public static void init(FastVoiceInterface fastVoiceInterface2) {
        fastVoiceInterface = fastVoiceInterface2;
        signUrl = getMetaData(FASTOV_SIGN_URL);
        endpoint = getMetaData(FASTOV_ENDPOINT_URL);
        bucketName = getMetaData(FASTOV_BUCKET_NAME);
    }

    public static String getSignUrl() {
        return !TextUtils.isEmpty(signUrl) ? signUrl : KEY_SIGN_URL;
    }

    public static String getEndpoint() {
        return !TextUtils.isEmpty(endpoint) ? endpoint : KEY_ENDPOINT;
    }

    public static String getBucketName() {
        return !TextUtils.isEmpty(bucketName) ? bucketName : KEY_BUCKET_NAME;
    }

    private static String getMetaData(String str) {
        return fastVoiceInterface.getMetaData(str);
    }
}
