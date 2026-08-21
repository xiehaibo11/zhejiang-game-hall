package com.bianfeng.ymnsdk.sysfunc;

public class PermissionUtils {
    static final boolean $assertionsDisabled = false;

    public interface OnRequestPermissionsResultCallbacks {
        void onPermissionsDenied(int r1, java.util.List<java.lang.String> r2, boolean r3);

        void onPermissionsGranted(int r1, java.util.List<java.lang.String> r2, boolean r3);
    }

    static {
            return
    }

    public PermissionUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean deniedRequestAgain(android.app.Activity r4, java.lang.String... r5) {
            boolean r0 = needCheckPermission()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.util.List r5 = getDeniedPermissions(r4, r5)
            java.util.Iterator r5 = r5.iterator()
        L10:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L2b
            java.lang.Object r0 = r5.next()
            java.lang.String r0 = (java.lang.String) r0
            int r2 = r4.checkSelfPermission(r0)
            r3 = -1
            if (r2 == r3) goto L10
            boolean r0 = r4.shouldShowRequestPermissionRationale(r0)
            if (r0 != 0) goto L10
            r4 = 1
            return r4
        L2b:
            return r1
    }

    private static java.util.List<java.lang.String> getDeniedPermissions(android.app.Activity r6, java.lang.String... r7) {
            boolean r0 = needCheckPermission()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r2 = r7.length
            r3 = 0
        Lf:
            if (r3 >= r2) goto L1f
            r4 = r7[r3]
            int r5 = r6.checkSelfPermission(r4)
            if (r5 == 0) goto L1c
            r0.add(r4)
        L1c:
            int r3 = r3 + 1
            goto Lf
        L1f:
            boolean r6 = r0.isEmpty()
            if (r6 != 0) goto L26
            return r0
        L26:
            return r1
    }

    public static boolean getDownLoadPermissions(android.app.Activity r2, int r3, com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback r4) {
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            boolean r2 = requestPerssions(r2, r3, r4, r0)
            return r2
    }

    public static boolean getEmulatorPermissions(android.app.Activity r2, int r3, com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback r4) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            java.lang.String r1 = "android.permission.READ_SMS"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            boolean r2 = requestPerssions(r2, r3, r4, r0)
            return r2
    }

    public static boolean getLocationPermissions(android.app.Activity r2, int r3, com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback r4) {
            java.lang.String r0 = "android.permission.ACCESS_COARSE_LOCATION"
            java.lang.String r1 = "android.permission.ACCESS_FINE_LOCATION"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            boolean r2 = requestPerssions(r2, r3, r4, r0)
            return r2
    }

    public static boolean getScreenShotPermissions(android.app.Activity r2, int r3, com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback r4) {
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            boolean r2 = requestPerssions(r2, r3, r4, r0)
            return r2
    }

    private static boolean hasPermissons(android.app.Activity r5, java.lang.String... r6) {
            boolean r0 = needCheckPermission()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            int r0 = r6.length
            r2 = 0
            r3 = 0
        Lb:
            if (r3 >= r0) goto L19
            r4 = r6[r3]
            int r4 = r5.checkSelfPermission(r4)
            if (r4 == 0) goto L16
            return r2
        L16:
            int r3 = r3 + 1
            goto Lb
        L19:
            return r1
    }

    private static boolean needCheckPermission() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static void onRequestPermissionsResult(int r5, java.lang.String[] r6, int[] r7, com.bianfeng.ymnsdk.sysfunc.PermissionUtils.OnRequestPermissionsResultCallbacks r8) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        Lb:
            int r3 = r6.length
            if (r2 >= r3) goto L1e
            r3 = r6[r2]
            r4 = r7[r2]
            if (r4 != 0) goto L18
            r0.add(r3)
            goto L1b
        L18:
            r1.add(r3)
        L1b:
            int r2 = r2 + 1
            goto Lb
        L1e:
            if (r8 == 0) goto L3a
            boolean r6 = r0.isEmpty()
            if (r6 != 0) goto L2d
            boolean r6 = r1.isEmpty()
            r8.onPermissionsGranted(r5, r0, r6)
        L2d:
            boolean r6 = r1.isEmpty()
            if (r6 != 0) goto L3a
            boolean r6 = r0.isEmpty()
            r8.onPermissionsDenied(r5, r1, r6)
        L3a:
            return
    }

    public static boolean requestPerssions(android.app.Activity r2, int r3, com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback r4, java.lang.String... r5) {
            boolean r0 = needCheckPermission()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            java.util.List r0 = getDeniedPermissions(r2, r5)
            if (r0 == 0) goto L1f
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r2 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r2)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r2 = r2.setCallback(r4)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r2 = r2.setPermissions(r5)
            r2.requestPermissions(r3)
            r2 = 0
            return r2
        L1f:
            return r1
    }

    public static void startApplicationDetailsSettings(android.app.Activity r4, int r5) {
            java.lang.String r0 = "点击权限，并打开全部权限"
            r1 = 0
            android.widget.Toast r0 = android.widget.Toast.makeText(r4, r0, r1)
            r0.show()
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.settings.APPLICATION_DETAILS_SETTINGS"
            r0.<init>(r1)
            java.lang.String r1 = r4.getPackageName()
            java.lang.String r2 = "package"
            r3 = 0
            android.net.Uri r1 = android.net.Uri.fromParts(r2, r1, r3)
            r0.setData(r1)
            r4.startActivityForResult(r0, r5)
            return
    }
}
