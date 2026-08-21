package com.mbridge.msdk.mbdownload;

public final class a {
    private static boolean a;

    static {
            java.lang.String r0 = "bspatch"
            java.lang.System.loadLibrary(r0)     // Catch: java.lang.UnsatisfiedLinkError -> L9
            r0 = 1
            com.mbridge.msdk.mbdownload.a.a = r0     // Catch: java.lang.UnsatisfiedLinkError -> L9
            goto Lc
        L9:
            r0 = 0
            com.mbridge.msdk.mbdownload.a.a = r0
        Lc:
            return
    }

    public static java.lang.String a(android.content.Context r0) {
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            java.lang.String r0 = r0.sourceDir
            return r0
    }
}
