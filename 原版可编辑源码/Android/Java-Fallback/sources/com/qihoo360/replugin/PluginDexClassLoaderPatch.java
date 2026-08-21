package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginDexClassLoaderPatch {
    private static final java.lang.String[] APACHE_HTTP_LEGACY_PACKAGES = null;
    private static final java.lang.String[] OKHTTP3_PACKAGES = null;

    static {
            java.lang.String r0 = "android.net.http"
            java.lang.String r1 = "android.net.compatibility"
            java.lang.String r2 = "com.android.internal.http.multipart"
            java.lang.String r3 = "org.apache.commons.codec"
            java.lang.String r4 = "org.apache.commons.logging"
            java.lang.String r5 = "org.apache.http"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5}
            com.qihoo360.replugin.PluginDexClassLoaderPatch.APACHE_HTTP_LEGACY_PACKAGES = r0
            java.lang.String r0 = "okhttp3"
            java.lang.String r1 = "okio"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.qihoo360.replugin.PluginDexClassLoaderPatch.OKHTTP3_PACKAGES = r0
            return
    }

    public PluginDexClassLoaderPatch() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean isApacheHttpLegacy(java.lang.String r5) {
            java.lang.String[] r0 = com.qihoo360.replugin.PluginDexClassLoaderPatch.APACHE_HTTP_LEGACY_PACKAGES
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L14
            r4 = r0[r3]
            boolean r4 = r5.startsWith(r4)
            if (r4 == 0) goto L11
            r5 = 1
            return r5
        L11:
            int r3 = r3 + 1
            goto L5
        L14:
            return r2
    }

    private static boolean isOkHttp3(java.lang.String r5) {
            java.lang.String[] r0 = com.qihoo360.replugin.PluginDexClassLoaderPatch.OKHTTP3_PACKAGES
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L14
            r4 = r0[r3]
            boolean r4 = r5.startsWith(r4)
            if (r4 == 0) goto L11
            r5 = 1
            return r5
        L11:
            int r3 = r3 + 1
            goto L5
        L14:
            return r2
    }

    public static boolean need2LoadFromHost(java.lang.String r1) {
            boolean r0 = isOkHttp3(r1)
            if (r0 != 0) goto Lf
            boolean r1 = isApacheHttpLegacy(r1)
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r1 = 0
            goto L10
        Lf:
            r1 = 1
        L10:
            return r1
    }
}
