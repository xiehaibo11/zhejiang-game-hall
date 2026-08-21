package com.kuaishou.weapon.p0;

public class bo {


    public bo() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.util.List<java.io.File> a(java.io.File r5, java.lang.String r6, int r7) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kuaishou.weapon.p0.bo$1 r1 = new com.kuaishou.weapon.p0.bo$1     // Catch: java.lang.Throwable -> L2d
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L2d
            java.io.File[] r5 = r5.listFiles(r1)     // Catch: java.lang.Throwable -> L2d
            if (r5 == 0) goto L2d
            int r1 = r5.length     // Catch: java.lang.Throwable -> L2d
            r2 = 0
        L12:
            if (r2 >= r1) goto L2d
            r3 = r5[r2]     // Catch: java.lang.Throwable -> L2d
            boolean r4 = r3.isFile()     // Catch: java.lang.Throwable -> L2d
            if (r4 == 0) goto L20
            r0.add(r3)     // Catch: java.lang.Throwable -> L2d
            goto L2d
        L20:
            int r4 = r7 + 1
            java.util.List r7 = a(r3, r6, r7)     // Catch: java.lang.Throwable -> L2d
            r0.addAll(r7)     // Catch: java.lang.Throwable -> L2d
            int r2 = r2 + 1
            r7 = r4
            goto L12
        L2d:
            return r0
    }

    public static void a(java.io.Closeable r0) {
            if (r0 != 0) goto L3
            return
        L3:
            r0.close()     // Catch: java.io.IOException -> L6
        L6:
            return
    }

    public static boolean a(android.content.Context r5, java.lang.String r6) {
            r0 = 0
            java.lang.String r1 = com.kuaishou.weapon.p0.jni.Engine.soPath     // Catch: java.lang.Throwable -> L39
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L39
            r3 = 1
            if (r2 != 0) goto L2a
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L39
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L39
            r4.<init>()     // Catch: java.lang.Throwable -> L39
            r4.append(r1)     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = "/lib"
            r4.append(r1)     // Catch: java.lang.Throwable -> L39
            r4.append(r6)     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L39
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L39
            boolean r1 = r2.exists()     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L2a
            return r3
        L2a:
            java.io.File r5 = r5.getFilesDir()     // Catch: java.lang.Throwable -> L39
            java.util.List r5 = a(r5, r6, r0)     // Catch: java.lang.Throwable -> L39
            int r5 = r5.size()     // Catch: java.lang.Throwable -> L39
            if (r5 <= 0) goto L39
            return r3
        L39:
            return r0
    }
}
