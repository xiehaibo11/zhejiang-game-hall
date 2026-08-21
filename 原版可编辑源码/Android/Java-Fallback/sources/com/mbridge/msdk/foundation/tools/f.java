package com.mbridge.msdk.foundation.tools;

public class f {
    public static java.io.File a(java.lang.String r3, android.content.Context r4, boolean[] r5) throws java.io.IOException {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            r1 = 0
            if (r0 == 0) goto L39
            com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.h
            java.lang.String r0 = com.mbridge.msdk.foundation.same.b.e.b(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "/download/.mb"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            r0.mkdirs()
            boolean r3 = r0.exists()
            if (r3 == 0) goto L39
            r3 = 1
            r5[r1] = r3
            return r0
        L39:
            java.io.File r3 = r4.getCacheDir()
            java.lang.String r3 = r3.getAbsolutePath()
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            r4.mkdir()
            r4 = 505(0x1f9, float:7.08E-43)
            r0 = -1
            com.mbridge.msdk.foundation.tools.x.a(r3, r4, r0, r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r3 = "/mbdownload"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r3)
            r2.mkdir()
            com.mbridge.msdk.foundation.tools.x.a(r3, r4, r0, r0)
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            r5[r1] = r1
            return r4
    }
}
