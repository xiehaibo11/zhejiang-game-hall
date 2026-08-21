package com.huawei.secure.android.common.util;

public class UrlUtil {
    static final java.lang.String a = "file:///android_res/";

    public UrlUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isAboutUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isAboutUrl(r0)
            return r0
    }

    public static boolean isAssetUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isAssetUrl(r0)
            return r0
    }

    public static boolean isContentUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isContentUrl(r0)
            return r0
    }

    public static boolean isDataUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isDataUrl(r0)
            return r0
    }

    public static boolean isFileUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isFileUrl(r0)
            return r0
    }

    public static boolean isHttpUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isHttpUrl(r0)
            return r0
    }

    public static boolean isHttpsUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isHttpsUrl(r0)
            return r0
    }

    public static boolean isJavaScriptUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isJavaScriptUrl(r0)
            return r0
    }

    public static boolean isNetworkUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isNetworkUrl(r0)
            return r0
    }

    public static boolean isResourceUrl(java.lang.String r1) {
            if (r1 == 0) goto Lc
            java.lang.String r0 = "file:///android_res/"
            boolean r1 = r1.startsWith(r0)
            if (r1 == 0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public static boolean isValidUrl(java.lang.String r0) {
            boolean r0 = android.webkit.URLUtil.isValidUrl(r0)
            return r0
    }
}
