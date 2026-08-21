package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginDexClassLoaderPatch {
    private static final String[] APACHE_HTTP_LEGACY_PACKAGES = {"android.net.http", "android.net.compatibility", "com.android.internal.http.multipart", "org.apache.commons.codec", "org.apache.commons.logging", "org.apache.http"};
    private static final String[] OKHTTP3_PACKAGES = {"okhttp3", "okio"};

    public static boolean need2LoadFromHost(String str) {
        return isOkHttp3(str) || isApacheHttpLegacy(str);
    }

    private static boolean isApacheHttpLegacy(String str) {
        for (String str2 : APACHE_HTTP_LEGACY_PACKAGES) {
            if (str.startsWith(str2)) {
                return true;
            }
        }
        return false;
    }

    private static boolean isOkHttp3(String str) {
        for (String str2 : OKHTTP3_PACKAGES) {
            if (str.startsWith(str2)) {
                return true;
            }
        }
        return false;
    }
}
