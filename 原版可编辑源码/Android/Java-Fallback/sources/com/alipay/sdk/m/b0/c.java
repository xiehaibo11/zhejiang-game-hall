package com.alipay.sdk.m.b0;

public final class c {
    public static java.lang.String a(java.lang.String r2) {
            boolean r0 = a()     // Catch: java.lang.Exception -> L1f
            if (r0 == 0) goto L1f
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L1f
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Exception -> L1f
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L1f
            r1.<init>(r0, r2)     // Catch: java.lang.Exception -> L1f
            boolean r2 = r1.exists()     // Catch: java.lang.Exception -> L1f
            if (r2 == 0) goto L1f
            r1.delete()     // Catch: java.lang.Exception -> L1f
            java.lang.String r2 = ""
            return r2
        L1f:
            r2 = 0
            return r2
    }

    public static boolean a() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            if (r0 == 0) goto L24
            int r1 = r0.length()
            if (r1 <= 0) goto L24
            java.lang.String r1 = "mounted"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L1c
            java.lang.String r1 = "mounted_ro"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L24
        L1c:
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            if (r0 == 0) goto L24
            r0 = 1
            return r0
        L24:
            r0 = 0
            return r0
    }
}
