package com.tencent.bugly.proguard;

public final class am {


    public static long a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = -1
            if (r3 != 0) goto Ld
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r4 = "File name is null."
            com.tencent.bugly.proguard.al.d(r4, r3)
            return r0
        Ld:
            boolean r2 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L2e
            boolean r2 = r3.endsWith(r5)     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L2e
            int r4 = r4.length()     // Catch: java.lang.Throwable -> L2a
            int r5 = r3.indexOf(r5)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = r3.substring(r4, r5)     // Catch: java.lang.Throwable -> L2a
            long r3 = java.lang.Long.parseLong(r3)     // Catch: java.lang.Throwable -> L2a
            return r3
        L2a:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L2e:
            return r0
    }

    private static java.util.List<java.io.File> a(java.io.File[] r9, java.lang.String r10, java.lang.String r11, long r12) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r9.length
            r2 = 0
        L7:
            if (r2 >= r1) goto L27
            r3 = r9[r2]
            java.lang.String r4 = r3.getName()
            long r4 = a(r4, r10, r11)
            r6 = 0
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 < 0) goto L24
            int r8 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r8 > 0) goto L24
            int r6 = (r4 > r12 ? 1 : (r4 == r12 ? 0 : -1))
            if (r6 > 0) goto L24
            r0.add(r3)
        L24:
            int r2 = r2 + 1
            goto L7
        L27:
            return r0
    }

    public static void a(java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5) {
            java.util.List r2 = b(r2, r3, r4, r5)
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L3d
            r3 = 0
            r4 = 0
        La:
            boolean r5 = r2.hasNext()     // Catch: java.lang.Throwable -> L3d
            if (r5 == 0) goto L2d
            java.lang.Object r5 = r2.next()     // Catch: java.lang.Throwable -> L3d
            java.io.File r5 = (java.io.File) r5     // Catch: java.lang.Throwable -> L3d
            java.lang.String r6 = "File %s is to be deleted."
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = r5.getName()     // Catch: java.lang.Throwable -> L3d
            r0[r3] = r1     // Catch: java.lang.Throwable -> L3d
            com.tencent.bugly.proguard.al.c(r6, r0)     // Catch: java.lang.Throwable -> L3d
            boolean r5 = r5.delete()     // Catch: java.lang.Throwable -> L3d
            if (r5 == 0) goto La
            int r4 = r4 + 1
            goto La
        L2d:
            java.lang.String r2 = "Number of overdue trace files that has deleted: "
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = r2.concat(r4)     // Catch: java.lang.Throwable -> L3d
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3d
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> L3d
            return
        L3d:
            r2 = move-exception
            com.tencent.bugly.proguard.al.a(r2)
            return
    }

    public static boolean a(java.io.File r8, java.lang.String r9, long r10, boolean r12) {
            java.io.BufferedWriter r7 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> L20
            java.io.FileWriter r0 = new java.io.FileWriter     // Catch: java.lang.Throwable -> L20
            r0.<init>(r8, r12)     // Catch: java.lang.Throwable -> L20
            r7.<init>(r0)     // Catch: java.lang.Throwable -> L20
            long r3 = r8.length()     // Catch: java.lang.Throwable -> L20
            char[] r1 = r9.toCharArray()     // Catch: java.lang.Throwable -> L20
            int r2 = r9.length()     // Catch: java.lang.Throwable -> L20
            r0 = r7
            r5 = r10
            boolean r8 = a(r0, r1, r2, r3, r5)     // Catch: java.lang.Throwable -> L20
            r7.close()     // Catch: java.lang.Throwable -> L20
            return r8
        L20:
            r8 = move-exception
            com.tencent.bugly.proguard.al.a(r8)
            r8 = 0
            return r8
    }

    private static boolean a(java.io.Writer r4, char[] r5, int r6, long r7, long r9) {
            r0 = 0
            int r1 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r1 < 0) goto L6
            return r0
        L6:
            int r1 = r6 * 2
            long r1 = (long) r1
            long r1 = r1 + r7
            int r3 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r3 > 0) goto L12
            r4.write(r5, r0, r6)     // Catch: java.io.IOException -> L1f
            goto L1a
        L12:
            long r9 = r9 - r7
            r6 = 2
            long r9 = r9 / r6
            int r6 = (int) r9     // Catch: java.io.IOException -> L1f
            r4.write(r5, r0, r6)     // Catch: java.io.IOException -> L1f
        L1a:
            r4.flush()     // Catch: java.io.IOException -> L1f
            r4 = 1
            return r4
        L1f:
            r4 = move-exception
            com.tencent.bugly.proguard.al.a(r4)
            return r0
    }

    public static boolean a(java.lang.String r7, java.lang.String r8, int r9) {
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2 = 0
            r1[r2] = r7
            java.lang.String r3 = "rqdp{  sv sd start} %s"
            com.tencent.bugly.proguard.al.c(r3, r1)
            if (r8 == 0) goto L4d
            java.lang.String r1 = r8.trim()
            int r1 = r1.length()
            if (r1 > 0) goto L18
            goto L4d
        L18:
            java.io.File r1 = new java.io.File
            r1.<init>(r7)
            boolean r7 = r1.exists()     // Catch: java.lang.Throwable -> L43
            if (r7 != 0) goto L33
            java.io.File r7 = r1.getParentFile()     // Catch: java.lang.Throwable -> L43
            if (r7 == 0) goto L30
            java.io.File r7 = r1.getParentFile()     // Catch: java.lang.Throwable -> L43
            r7.mkdirs()     // Catch: java.lang.Throwable -> L43
        L30:
            r1.createNewFile()     // Catch: java.lang.Throwable -> L43
        L33:
            long r3 = (long) r9     // Catch: java.lang.Throwable -> L43
            long r5 = r1.length()     // Catch: java.lang.Throwable -> L43
            int r7 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r7 >= 0) goto L3d
            goto L3e
        L3d:
            r0 = 0
        L3e:
            boolean r7 = a(r1, r8, r3, r0)     // Catch: java.lang.Throwable -> L43
            return r7
        L43:
            r7 = move-exception
            boolean r8 = com.tencent.bugly.proguard.al.a(r7)
            if (r8 != 0) goto L4d
            r7.printStackTrace()
        L4d:
            return r2
    }

    private static java.util.List<java.io.File> b(java.lang.String r4, java.lang.String r5, java.lang.String r6, long r7) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r5 == 0) goto L3a
            if (r6 != 0) goto La
            goto L3a
        La:
            long r1 = java.lang.System.currentTimeMillis()
            java.io.File r3 = new java.io.File
            r3.<init>(r4)
            boolean r4 = r3.exists()
            if (r4 == 0) goto L39
            boolean r4 = r3.isDirectory()
            if (r4 == 0) goto L39
            com.tencent.bugly.proguard.am$1 r4 = new com.tencent.bugly.proguard.am$1     // Catch: java.lang.Throwable -> L35
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L35
            java.io.File[] r4 = r3.listFiles(r4)     // Catch: java.lang.Throwable -> L35
            if (r4 == 0) goto L34
            int r3 = r4.length     // Catch: java.lang.Throwable -> L35
            if (r3 != 0) goto L2e
            goto L34
        L2e:
            long r1 = r1 - r7
            java.util.List r0 = a(r4, r5, r6, r1)     // Catch: java.lang.Throwable -> L35
            goto L39
        L34:
            return r0
        L35:
            r4 = move-exception
            com.tencent.bugly.proguard.al.a(r4)
        L39:
            return r0
        L3a:
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r7 = 0
            r4[r7] = r5
            r5 = 1
            r4[r5] = r6
            java.lang.String r5 = "prefix %s and/or postfix %s is null."
            com.tencent.bugly.proguard.al.d(r5, r4)
            return r0
    }
}
