package com.tencent.open.web.security;

public class JniInterface {
    public static boolean isJniOk;

    static {
            return
    }

    public JniInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    public static native boolean BackSpaceChar(boolean r0, int r1);

    public static native boolean clearAllPWD();

    public static native java.lang.String d1(java.lang.String r0);

    public static native java.lang.String d2(java.lang.String r0);

    public static native java.lang.String getPWDKeyToMD5(java.lang.String r0);

    public static native boolean insetTextToArray(int r0, java.lang.String r1, int r2);

    public static void loadSo() {
            java.lang.String r0 = "/"
            java.lang.String r1 = "openSDK_LOG.JniInterface"
            boolean r2 = com.tencent.open.web.security.JniInterface.isJniOk
            if (r2 == 0) goto L9
            return
        L9:
            android.content.Context r2 = com.tencent.open.utils.g.a()     // Catch: java.lang.Throwable -> L9d
            if (r2 == 0) goto L86
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L9d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r4.<init>()     // Catch: java.lang.Throwable -> L9d
            java.io.File r5 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L9d
            r4.append(r5)     // Catch: java.lang.Throwable -> L9d
            r4.append(r0)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r5 = com.tencent.connect.auth.AuthAgent.SECURE_LIB_NAME     // Catch: java.lang.Throwable -> L9d
            r4.append(r5)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L9d
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L9d
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> L9d
            if (r3 == 0) goto L6f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r3.<init>()     // Catch: java.lang.Throwable -> L9d
            java.io.File r2 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L9d
            r3.append(r2)     // Catch: java.lang.Throwable -> L9d
            r3.append(r0)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r0 = com.tencent.connect.auth.AuthAgent.SECURE_LIB_NAME     // Catch: java.lang.Throwable -> L9d
            r3.append(r0)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L9d
            java.lang.System.load(r0)     // Catch: java.lang.Throwable -> L9d
            r0 = 1
            com.tencent.open.web.security.JniInterface.isJniOk = r0     // Catch: java.lang.Throwable -> L9d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r0.<init>()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = "-->load lib success:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = com.tencent.connect.auth.AuthAgent.SECURE_LIB_NAME     // Catch: java.lang.Throwable -> L9d
            r0.append(r2)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L9d
            com.tencent.open.log.SLog.i(r1, r0)     // Catch: java.lang.Throwable -> L9d
            goto Lb4
        L6f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r0.<init>()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = "-->fail, because so is not exists:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = com.tencent.connect.auth.AuthAgent.SECURE_LIB_NAME     // Catch: java.lang.Throwable -> L9d
            r0.append(r2)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L9d
            com.tencent.open.log.SLog.i(r1, r0)     // Catch: java.lang.Throwable -> L9d
            goto Lb4
        L86:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r0.<init>()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = "-->load lib fail, because context is null:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = com.tencent.connect.auth.AuthAgent.SECURE_LIB_NAME     // Catch: java.lang.Throwable -> L9d
            r0.append(r2)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L9d
            com.tencent.open.log.SLog.i(r1, r0)     // Catch: java.lang.Throwable -> L9d
            goto Lb4
        L9d:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "-->load lib error:"
            r2.append(r3)
            java.lang.String r3 = com.tencent.connect.auth.AuthAgent.SECURE_LIB_NAME
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.tencent.open.log.SLog.e(r1, r2, r0)
        Lb4:
            return
    }
}
