package com.meizu.cloud.pushsdk.notification.c;

public class a {


    public static void a(java.lang.String r9, java.lang.String r10) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> Lc0
            r0.<init>(r10)     // Catch: java.lang.Exception -> Lc0
            r0.mkdirs()     // Catch: java.lang.Exception -> Lc0
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> Lc0
            r0.<init>(r9)     // Catch: java.lang.Exception -> Lc0
            java.lang.String[] r0 = r0.list()     // Catch: java.lang.Exception -> Lc0
            int r1 = r0.length     // Catch: java.lang.Exception -> Lc0
            r2 = 0
            r3 = r2
        L14:
            if (r3 >= r1) goto Lc4
            r4 = r0[r3]     // Catch: java.lang.Exception -> Lc0
            java.lang.String r5 = java.io.File.separator     // Catch: java.lang.Exception -> Lc0
            boolean r5 = r9.endsWith(r5)     // Catch: java.lang.Exception -> Lc0
            if (r5 == 0) goto L35
            java.io.File r5 = new java.io.File     // Catch: java.lang.Exception -> Lc0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc0
            r6.<init>()     // Catch: java.lang.Exception -> Lc0
            r6.append(r9)     // Catch: java.lang.Exception -> Lc0
            r6.append(r4)     // Catch: java.lang.Exception -> Lc0
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lc0
            r5.<init>(r6)     // Catch: java.lang.Exception -> Lc0
            goto L4e
        L35:
            java.io.File r5 = new java.io.File     // Catch: java.lang.Exception -> Lc0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc0
            r6.<init>()     // Catch: java.lang.Exception -> Lc0
            r6.append(r9)     // Catch: java.lang.Exception -> Lc0
            java.lang.String r7 = java.io.File.separator     // Catch: java.lang.Exception -> Lc0
            r6.append(r7)     // Catch: java.lang.Exception -> Lc0
            r6.append(r4)     // Catch: java.lang.Exception -> Lc0
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lc0
            r5.<init>(r6)     // Catch: java.lang.Exception -> Lc0
        L4e:
            boolean r6 = r5.isFile()     // Catch: java.lang.Exception -> Lc0
            java.lang.String r7 = "/"
            if (r6 == 0) goto L8f
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Exception -> Lc0
            r4.<init>(r5)     // Catch: java.lang.Exception -> Lc0
            java.io.FileOutputStream r6 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> Lc0
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc0
            r8.<init>()     // Catch: java.lang.Exception -> Lc0
            r8.append(r10)     // Catch: java.lang.Exception -> Lc0
            r8.append(r7)     // Catch: java.lang.Exception -> Lc0
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Exception -> Lc0
            r8.append(r5)     // Catch: java.lang.Exception -> Lc0
            java.lang.String r5 = r8.toString()     // Catch: java.lang.Exception -> Lc0
            r6.<init>(r5)     // Catch: java.lang.Exception -> Lc0
            r5 = 5120(0x1400, float:7.175E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Exception -> Lc0
        L7a:
            int r7 = r4.read(r5)     // Catch: java.lang.Exception -> Lc0
            r8 = -1
            if (r7 == r8) goto L85
            r6.write(r5, r2, r7)     // Catch: java.lang.Exception -> Lc0
            goto L7a
        L85:
            r6.flush()     // Catch: java.lang.Exception -> Lc0
            r6.close()     // Catch: java.lang.Exception -> Lc0
            r4.close()     // Catch: java.lang.Exception -> Lc0
            goto Lbc
        L8f:
            boolean r5 = r5.isDirectory()     // Catch: java.lang.Exception -> Lc0
            if (r5 == 0) goto Lbc
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc0
            r5.<init>()     // Catch: java.lang.Exception -> Lc0
            r5.append(r9)     // Catch: java.lang.Exception -> Lc0
            r5.append(r7)     // Catch: java.lang.Exception -> Lc0
            r5.append(r4)     // Catch: java.lang.Exception -> Lc0
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> Lc0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc0
            r6.<init>()     // Catch: java.lang.Exception -> Lc0
            r6.append(r10)     // Catch: java.lang.Exception -> Lc0
            r6.append(r7)     // Catch: java.lang.Exception -> Lc0
            r6.append(r4)     // Catch: java.lang.Exception -> Lc0
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Exception -> Lc0
            a(r5, r4)     // Catch: java.lang.Exception -> Lc0
        Lbc:
            int r3 = r3 + 1
            goto L14
        Lc0:
            r9 = move-exception
            r9.printStackTrace()
        Lc4:
            return
    }

    public static boolean a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 != 0) goto L26
            java.lang.String r0 = "../"
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L10
            goto L26
        L10:
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.isFile()
            if (r2 == 0) goto L26
            boolean r2 = r0.exists()
            if (r2 == 0) goto L26
            boolean r2 = r0.delete()
            return r2
        L26:
            return r1
    }

    public static boolean b(java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 != 0) goto L69
            java.lang.String r0 = "../"
            boolean r0 = r6.contains(r0)
            if (r0 == 0) goto L10
            goto L69
        L10:
            java.lang.String r0 = java.io.File.separator
            boolean r0 = r6.endsWith(r0)
            if (r0 != 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = java.io.File.separator
            r0.append(r6)
            java.lang.String r6 = r0.toString()
        L29:
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            boolean r6 = r0.exists()
            if (r6 == 0) goto L69
            boolean r6 = r0.isDirectory()
            if (r6 != 0) goto L3b
            goto L69
        L3b:
            java.io.File[] r6 = r0.listFiles()
            int r2 = r6.length
            r3 = 1
            r4 = r1
        L42:
            if (r4 >= r2) goto L61
            r3 = r6[r4]
            boolean r5 = r3.isFile()
            java.lang.String r3 = r3.getAbsolutePath()
            if (r5 == 0) goto L57
            boolean r3 = a(r3)
            if (r3 != 0) goto L5e
            goto L61
        L57:
            boolean r3 = b(r3)
            if (r3 != 0) goto L5e
            goto L61
        L5e:
            int r4 = r4 + 1
            goto L42
        L61:
            if (r3 != 0) goto L64
            return r1
        L64:
            boolean r6 = r0.delete()
            return r6
        L69:
            return r1
    }

    public static java.io.File[] b(java.lang.String r2, java.lang.String r3) {
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r2 = 0
            java.io.File[] r2 = new java.io.File[r2]
            boolean r1 = r0.isDirectory()
            if (r1 == 0) goto L17
            com.meizu.cloud.pushsdk.notification.c.a$1 r2 = new com.meizu.cloud.pushsdk.notification.c.a$1
            r2.<init>(r3)
            java.io.File[] r2 = r0.listFiles(r2)
        L17:
            return r2
    }
}
