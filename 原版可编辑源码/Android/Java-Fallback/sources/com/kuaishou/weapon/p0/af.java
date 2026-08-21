package com.kuaishou.weapon.p0;

public class af {
    private java.lang.String[] a;

    public af() {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "/sbin/.magisk/"
            java.lang.String r1 = "/sbin/.core/mirror"
            java.lang.String r2 = "/sbin/.core/img"
            java.lang.String r3 = "/sbin/.core/db-0/magisk.db"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            r4.a = r0
            return
    }

    public int a() {
            r9 = this;
            int r0 = android.os.Process.myPid()
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r2 = 0
            r1[r2] = r0
            java.lang.String r0 = "/proc/%d/mounts"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Exception -> L53
            r0.<init>()     // Catch: java.lang.Exception -> L53
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L53
            r3.<init>(r1)     // Catch: java.lang.Exception -> L53
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Exception -> L53
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L53
            r4.<init>(r3)     // Catch: java.lang.Exception -> L53
            r1.<init>(r4)     // Catch: java.lang.Exception -> L53
        L2d:
            java.lang.String r4 = r1.readLine()     // Catch: java.lang.Exception -> L53
            if (r4 == 0) goto L48
            java.lang.String[] r5 = r9.a     // Catch: java.lang.Exception -> L53
            int r6 = r5.length     // Catch: java.lang.Exception -> L53
            r7 = r2
        L37:
            if (r7 >= r6) goto L2d
            r8 = r5[r7]     // Catch: java.lang.Exception -> L53
            boolean r8 = r4.contains(r8)     // Catch: java.lang.Exception -> L53
            if (r8 == 0) goto L45
            r0.add(r4)     // Catch: java.lang.Exception -> L53
            goto L2d
        L45:
            int r7 = r7 + 1
            goto L37
        L48:
            r1.close()     // Catch: java.lang.Exception -> L53
            r3.close()     // Catch: java.lang.Exception -> L53
            int r0 = r0.size()     // Catch: java.lang.Exception -> L53
            return r0
        L53:
            return r2
    }
}
