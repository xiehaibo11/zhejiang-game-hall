package com.alibaba.sdk.android.oss.common;

public final class OSSConstants {
    public static final int DEFAULT_BASE_THREAD_POOL_SIZE = 5;
    public static final int DEFAULT_BUFFER_SIZE = 8192;
    public static final java.lang.String DEFAULT_CHARSET_NAME = "utf-8";
    public static final java.lang.String[] DEFAULT_CNAME_EXCLUDE_LIST = null;
    public static final long DEFAULT_FILE_SIZE_LIMIT = 5368709120L;
    public static final java.lang.String DEFAULT_OBJECT_CONTENT_TYPE = "application/octet-stream";
    public static final java.lang.String DEFAULT_OSS_ENDPOINT = "http://oss-cn-hangzhou.aliyuncs.com";
    public static final int DEFAULT_RETRY_COUNT = 2;
    public static final int DEFAULT_STREAM_BUFFER_SIZE = 131072;
    public static final java.lang.String DEFAULT_XML_ENCODING = "utf-8";
    public static final int KB = 1024;
    public static final long MIN_PART_SIZE_LIMIT = 102400;
    public static final int OBJECT_NAME_MAX_LENGTH = 1024;
    public static final java.lang.String[] OSS_ORIGN_HOST = null;
    public static final java.lang.String RESOURCE_NAME_COMMON = "common";
    public static final java.lang.String RESOURCE_NAME_OSS = "oss";
    public static final java.lang.String SDK_VERSION = "2.9.8";

    static {
            java.lang.String r0 = "aliyun.com"
            java.lang.String r1 = "aliyun-inc.com"
            java.lang.String r2 = "aliyuncs.com"
            java.lang.String[] r3 = new java.lang.String[]{r2, r1, r0}
            com.alibaba.sdk.android.oss.common.OSSConstants.DEFAULT_CNAME_EXCLUDE_LIST = r3
            java.lang.String[] r0 = new java.lang.String[]{r2, r1, r0}
            com.alibaba.sdk.android.oss.common.OSSConstants.OSS_ORIGN_HOST = r0
            return
    }

    public OSSConstants() {
            r0 = this;
            r0.<init>()
            return
    }
}
