package com.alibaba.sdk.android.oss.common.utils;

public class VersionInfoUtils {
    private static java.lang.String userAgent;

    static {
            return
    }

    public VersionInfoUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getSystemInfo() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "("
            r0.append(r1)
            java.lang.String r1 = "os.name"
            java.lang.String r1 = java.lang.System.getProperty(r1)
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "/Android "
            r1.append(r2)
            java.lang.String r2 = android.os.Build.VERSION.RELEASE
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = "/"
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = android.os.Build.MODEL
            java.lang.String r3 = "utf-8"
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.urlEncode(r2, r3)
            r1.append(r2)
            java.lang.String r2 = ";"
            r1.append(r2)
            java.lang.String r2 = android.os.Build.ID
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.urlEncode(r2, r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "user agent : "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1)
            boolean r1 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            if (r1 == 0) goto L84
            java.lang.String r0 = "http.agent"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            java.lang.String r1 = "[^\\p{ASCII}]"
            java.lang.String r2 = "?"
            java.lang.String r0 = r0.replaceAll(r1, r2)
        L84:
            return r0
    }

    public static java.lang.String getUserAgent(java.lang.String r2) {
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.VersionInfoUtils.userAgent
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            if (r0 == 0) goto L26
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "aliyun-sdk-android/"
            r0.append(r1)
            java.lang.String r1 = getVersion()
            r0.append(r1)
            java.lang.String r1 = getSystemInfo()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.alibaba.sdk.android.oss.common.utils.VersionInfoUtils.userAgent = r0
        L26:
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r2)
            if (r0 == 0) goto L2f
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.VersionInfoUtils.userAgent
            return r2
        L2f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.VersionInfoUtils.userAgent
            r0.append(r1)
            java.lang.String r1 = "/"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String getVersion() {
            java.lang.String r0 = "2.9.8"
            return r0
    }
}
