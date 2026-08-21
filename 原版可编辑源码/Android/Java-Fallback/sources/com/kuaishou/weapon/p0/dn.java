package com.kuaishou.weapon.p0;

public class dn {
    public dn() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(java.lang.String r0, java.lang.Boolean r1) {
            boolean r1 = r1.booleanValue()
            if (r1 == 0) goto L18
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            java.io.File r0 = r1.getParentFile()
            java.lang.String r0 = r0.getAbsolutePath()
            java.lang.String r1 = "771"
            a(r1, r0)
        L18:
            return
    }

    public static boolean a(java.io.File r4) {
            if (r4 == 0) goto L20
            boolean r0 = r4.exists()
            if (r0 == 0) goto L20
            boolean r0 = r4.isFile()
            if (r0 == 0) goto L20
            boolean r0 = r4.canRead()
            if (r0 == 0) goto L20
            long r0 = r4.length()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L20
            r4 = 1
            return r4
        L20:
            r4 = 0
            return r4
    }

    public static boolean a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = a(r0)
            return r1
    }

    public static boolean a(java.lang.String r4, java.lang.String r5) {
            r0 = 0
            if (r4 == 0) goto L41
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L41
            if (r5 == 0) goto L41
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L12
            goto L41
        L12:
            boolean r1 = a(r4)
            if (r1 != 0) goto L19
            return r0
        L19:
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L41
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            java.lang.String r3 = "chmod "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L41
            r2.append(r5)     // Catch: java.lang.Throwable -> L41
            java.lang.String r5 = " "
            r2.append(r5)     // Catch: java.lang.Throwable -> L41
            r2.append(r4)     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = "\n"
            r2.append(r4)     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L41
            java.lang.Process r4 = r1.exec(r4)     // Catch: java.lang.Throwable -> L41
            r4.waitFor()     // Catch: java.lang.Throwable -> L41
            r4 = 1
            return r4
        L41:
            return r0
    }

    public static void b(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return
        L7:
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            boolean r4 = r0.exists()
            if (r4 != 0) goto L13
            return
        L13:
            java.io.File[] r4 = r0.listFiles()
            if (r4 == 0) goto L2e
            int r0 = r4.length
            if (r0 <= 0) goto L2e
            int r0 = r4.length
            r1 = 0
        L1e:
            if (r1 >= r0) goto L2e
            r2 = r4[r1]
            boolean r3 = r2.isDirectory()
            if (r3 != 0) goto L2b
            r2.delete()
        L2b:
            int r1 = r1 + 1
            goto L1e
        L2e:
            return
    }

    public static boolean b(java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "\\."
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            r2 = 0
            if (r1 != 0) goto L43
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto L10
            goto L43
        L10:
            java.lang.String[] r5 = r5.split(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String[] r6 = r6.split(r0)     // Catch: java.lang.Throwable -> L43
            r0 = r2
        L19:
            int r1 = r5.length     // Catch: java.lang.Throwable -> L43
            r3 = 1
            if (r0 >= r1) goto L3e
            int r1 = r6.length     // Catch: java.lang.Throwable -> L43
            if (r0 >= r1) goto L3e
            r1 = r5[r0]     // Catch: java.lang.Throwable -> L43
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L43
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> L43
            r4 = r6[r0]     // Catch: java.lang.Throwable -> L43
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L43
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L43
            int r1 = r1 - r4
            if (r1 == 0) goto L3b
            if (r1 <= 0) goto L3a
            return r3
        L3a:
            return r2
        L3b:
            int r0 = r0 + 1
            goto L19
        L3e:
            int r5 = r5.length     // Catch: java.lang.Throwable -> L43
            int r6 = r6.length     // Catch: java.lang.Throwable -> L43
            if (r5 <= r6) goto L43
            return r3
        L43:
            return r2
    }

    public static void c(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L7
            return
        L7:
            java.io.File r0 = new java.io.File
            r0.<init>(r5)
            boolean r5 = r0.exists()
            if (r5 != 0) goto L13
            return
        L13:
            java.io.File[] r5 = r0.listFiles()
            if (r5 == 0) goto L36
            int r1 = r5.length
            if (r1 <= 0) goto L36
            int r1 = r5.length
            r2 = 0
        L1e:
            if (r2 >= r1) goto L36
            r3 = r5[r2]
            boolean r4 = r3.isDirectory()
            if (r4 == 0) goto L30
            java.lang.String r3 = r3.getAbsolutePath()
            c(r3)
            goto L33
        L30:
            r3.delete()
        L33:
            int r2 = r2 + 1
            goto L1e
        L36:
            r0.delete()
            return
    }
}
