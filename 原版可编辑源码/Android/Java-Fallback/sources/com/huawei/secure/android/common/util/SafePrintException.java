package com.huawei.secure.android.common.util;

public abstract class SafePrintException {
    public SafePrintException() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean a(java.lang.String r10) {
            java.lang.String r0 = "java.io.FileNotFoundException"
            java.lang.String r1 = "java.util.jar.JarException"
            java.lang.String r2 = "java.util.MissingResourceException"
            java.lang.String r3 = "java.security.acl.NotOwnerException"
            java.lang.String r4 = "java.util.ConcurrentModificationException"
            java.lang.String r5 = "javax.naming.InsufficientResourcesException"
            java.lang.String r6 = "java.net.BindException"
            java.lang.String r7 = "java.lang.OutOfMemoryError"
            java.lang.String r8 = "java.lang.StackOverflowError"
            java.lang.String r9 = "java.sql.SQLException"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9}
            r1 = 0
            r2 = r1
        L1a:
            r3 = 10
            if (r2 >= r3) goto L2b
            r3 = r0[r2]
            boolean r3 = r10.contains(r3)
            if (r3 == 0) goto L28
            r10 = 1
            return r10
        L28:
            int r2 = r2 + 1
            goto L1a
        L2b:
            return r1
    }

    public static java.lang.String getStackTrace(java.lang.String r4, java.lang.Throwable r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L13
            r0.append(r4)
            java.lang.String r4 = " "
            r0.append(r4)
        L13:
            java.lang.String r4 = "Exception: "
            r0.append(r4)
            java.lang.Class r4 = r5.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            r4 = 10
            r0.append(r4)
            java.lang.Class r1 = r5.getClass()
            java.lang.String r1 = r1.getCanonicalName()
            boolean r1 = a(r1)
            if (r1 != 0) goto L58
            java.lang.StackTraceElement[] r5 = r5.getStackTrace()
            if (r5 != 0) goto L45
            java.lang.String r5 = "Stack trace is NULL!"
            r0.append(r5)
            r0.append(r4)
            goto L58
        L45:
            int r1 = r5.length
            r2 = 0
        L47:
            if (r2 >= r1) goto L58
            r3 = r5[r2]
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            r0.append(r4)
            int r2 = r2 + 1
            goto L47
        L58:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static void print(java.lang.String r0, java.lang.String r1, java.lang.Throwable r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r1 = getStackTrace(r1, r2)
            android.util.Log.w(r0, r1)
            return
    }
}
