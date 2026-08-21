package com.kuaishou.weapon.p0;

public class ak {
    public ak() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean a(android.content.Context r4) {
            r0 = 0
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            java.lang.String[] r1 = new java.lang.String[]{r1}     // Catch: java.lang.Exception -> L2c
            boolean r4 = com.kuaishou.weapon.p0.g.a(r4, r1)     // Catch: java.lang.Exception -> L2c
            if (r4 != 0) goto Le
            return r0
        Le:
            java.lang.String r4 = "/storage/emulated/0/DCIM/Camera/virtual.mp4"
            java.lang.String r1 = "/storage/emulated/0/DCIM/Camera1/virtual.mp4"
            java.lang.String[] r4 = new java.lang.String[]{r4, r1}     // Catch: java.lang.Exception -> L2c
            r1 = r0
        L17:
            r2 = 2
            if (r1 >= r2) goto L2c
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L2c
            r3 = r4[r1]     // Catch: java.lang.Exception -> L2c
            r2.<init>(r3)     // Catch: java.lang.Exception -> L2c
            boolean r2 = r2.exists()     // Catch: java.lang.Exception -> L2c
            if (r2 == 0) goto L29
            r4 = 1
            return r4
        L29:
            int r1 = r1 + 1
            goto L17
        L2c:
            return r0
    }
}
