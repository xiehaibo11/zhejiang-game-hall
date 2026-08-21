package com.huawei.secure.android.common.util;

public class PermissionUtil {
    private static final java.lang.String a = "PermissionUtil";

    static {
            return
    }

    public PermissionUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean checkCallingPermission(android.content.Context r2, java.lang.String r3, java.lang.String r4) throws com.huawei.secure.android.common.exception.NoPermissionCheckerException {
            int r0 = android.os.Binder.getCallingPid()
            int r1 = android.os.Process.myPid()
            if (r0 != r1) goto Lc
            r2 = 0
            return r2
        Lc:
            int r0 = android.os.Binder.getCallingPid()
            int r1 = android.os.Binder.getCallingUid()
            boolean r2 = checkPermission(r2, r3, r0, r1, r4)
            return r2
    }

    public static boolean checkPermission(android.content.Context r0, java.lang.String r1, int r2, int r3, java.lang.String r4) throws com.huawei.secure.android.common.exception.NoPermissionCheckerException {
            int r0 = android.support.v4.content.PermissionChecker.checkPermission(r0, r1, r2, r3, r4)     // Catch: java.lang.Throwable -> La
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
        La:
            r0 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.util.PermissionUtil.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "checkPermission: "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = " , you should implementation support library or androidx library"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            android.util.Log.e(r1, r0)
            com.huawei.secure.android.common.exception.NoPermissionCheckerException r0 = new com.huawei.secure.android.common.exception.NoPermissionCheckerException
            java.lang.String r1 = "you should implementation support library or androidx library"
            r0.<init>(r1)
            throw r0
    }

    public static boolean checkSelfPermission(android.content.Context r3, java.lang.String r4) throws com.huawei.secure.android.common.exception.NoPermissionCheckerException {
            int r0 = android.os.Process.myPid()
            int r1 = android.os.Process.myUid()
            java.lang.String r2 = r3.getPackageName()
            boolean r3 = checkPermission(r3, r4, r0, r1, r2)
            return r3
    }
}
