package com.bianfeng.ymnsdk.util;

@java.lang.Deprecated
public class PermissionUtils {
    private static com.bianfeng.ymnsdk.util.PermissionUtils utils;
    private com.bianfeng.ymnsdk.util.PermissionUtils.PermissionCallback callback;
    private boolean isFirst;
    private com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils permissionUtils;
    private java.lang.String[] permissions;


    public interface PermissionCallback {
        void onCall();
    }

    private PermissionUtils() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.isFirst = r0
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            r2.permissions = r0
            return
    }

    static com.bianfeng.ymnsdk.util.PermissionUtils.PermissionCallback access$000(com.bianfeng.ymnsdk.util.PermissionUtils r0) {
            com.bianfeng.ymnsdk.util.PermissionUtils$PermissionCallback r0 = r0.callback
            return r0
    }

    static boolean access$100(com.bianfeng.ymnsdk.util.PermissionUtils r0) {
            boolean r0 = r0.isFirst
            return r0
    }

    static boolean access$102(com.bianfeng.ymnsdk.util.PermissionUtils r0, boolean r1) {
            r0.isFirst = r1
            return r1
    }

    public static com.bianfeng.ymnsdk.util.PermissionUtils getInstance() {
            com.bianfeng.ymnsdk.util.PermissionUtils r0 = com.bianfeng.ymnsdk.util.PermissionUtils.utils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.util.PermissionUtils> r0 = com.bianfeng.ymnsdk.util.PermissionUtils.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.util.PermissionUtils r1 = com.bianfeng.ymnsdk.util.PermissionUtils.utils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.util.PermissionUtils r1 = new com.bianfeng.ymnsdk.util.PermissionUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.util.PermissionUtils.utils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.util.PermissionUtils r0 = com.bianfeng.ymnsdk.util.PermissionUtils.utils
            return r0
    }

    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            com.bianfeng.ymnsdk.util.PermissionUtils$PermissionCallback r2 = r0.callback
            if (r2 == 0) goto L12
            boolean r3 = r0.isFirst
            if (r3 != 0) goto L12
            r3 = 1024(0x400, float:1.435E-42)
            if (r1 != r3) goto L12
            r1 = 1
            r0.isFirst = r1
            r2.onCall()
        L12:
            return
    }

    @java.lang.Deprecated
    public boolean requestPermission(android.app.Activity r3) {
            r2 = this;
            java.lang.String r0 = "ymnsdk: "
            java.lang.String r1 = "初始化 requestPermission"
            android.util.Log.i(r0, r1)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r3)
            java.lang.String[] r0 = r2.permissions
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setPermissions(r0)
            com.bianfeng.ymnsdk.util.PermissionUtils$1 r0 = new com.bianfeng.ymnsdk.util.PermissionUtils$1
            r0.<init>(r2)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setCallback(r0)
            r2.permissionUtils = r3
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r2.permissionUtils
            r0 = 1024(0x400, float:1.435E-42)
            boolean r3 = r3.requestPermissions(r0)
            return r3
    }

    public boolean requestPermission(android.app.Activity r3, com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback r4) {
            r2 = this;
            java.lang.String r0 = "ymnsdk: "
            java.lang.String r1 = "初始化 requestPermission"
            android.util.Log.i(r0, r1)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r3)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setCallback(r4)
            java.lang.String[] r4 = r2.permissions
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setPermissions(r4)
            r2.permissionUtils = r3
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r2.permissionUtils
            r4 = 1024(0x400, float:1.435E-42)
            boolean r3 = r3.requestPermissions(r4)
            return r3
    }

    public com.bianfeng.ymnsdk.util.PermissionUtils setCallback(com.bianfeng.ymnsdk.util.PermissionUtils.PermissionCallback r1) {
            r0 = this;
            r0.callback = r1
            return r0
    }
}
