package com.kwad.library.solder.lib.d;

public final class a {
    private static java.lang.String agI;
    private static java.lang.String agJ;
    private static final java.util.Map<java.lang.String, java.lang.String> agK = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.library.solder.lib.d.a.agK = r0
            java.lang.String r1 = "mips"
            r0.put(r1, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.library.solder.lib.d.a.agK
            java.lang.String r1 = "mips64"
            r0.put(r1, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.library.solder.lib.d.a.agK
            java.lang.String r1 = "x86"
            r0.put(r1, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.library.solder.lib.d.a.agK
            java.lang.String r1 = "x86_64"
            r0.put(r1, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.library.solder.lib.d.a.agK
            java.lang.String r1 = "arm64"
            java.lang.String r2 = "arm64-v8a"
            r0.put(r1, r2)
            return
    }

    private static boolean is64Bit() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 23
            if (r0 < r2) goto Lc
            boolean r1 = android.os.Process.is64Bit()
            goto L34
        Lc:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r0 < r2) goto L34
            r0 = 0
            java.lang.String r2 = "dalvik.system.VMRuntime"
            java.lang.String r3 = "getRuntime"
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L29
            java.lang.Object r2 = com.kwad.sdk.utils.s.a(r2, r3, r4)     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "is64Bit"
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L29
            java.lang.Object r2 = com.kwad.sdk.utils.s.f(r2, r3, r4)     // Catch: java.lang.Exception -> L29
            java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Exception -> L29
            r0 = r2
            goto L2d
        L29:
            r2 = move-exception
            r2.printStackTrace()
        L2d:
            if (r0 == 0) goto L34
            boolean r0 = r0.booleanValue()
            r1 = r0
        L34:
            return r1
    }

    public static java.lang.String wO() {
            boolean r0 = is64Bit()
            if (r0 == 0) goto L9
            java.lang.String r0 = "arm64-v8a"
            return r0
        L9:
            java.lang.String r0 = "armeabi-v7a"
            return r0
    }
}
