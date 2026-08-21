package com.bianfeng.addpermission.common;

public class CheckPermissionUtils {
    private com.bianfeng.addpermission.common.CheckPermissionUtils.CheckCallback checkCallback;
    private android.app.Activity context;
    private boolean isRequest;
    private java.util.List<java.lang.String> lackedPermission;
    private java.util.Map<java.lang.String, java.lang.String> nameMap;
    private java.util.List<com.bianfeng.addpermission.ui.PermissionBean> permissionBeanList;
    private com.bianfeng.addpermission.ui.PermissionCallback permissionCallback;
    private java.util.Map<java.lang.String, java.lang.String> permissionMap;
    private java.lang.String permissions;


    public interface CheckCallback {
        void onAgree(java.lang.String r1);

        void onHasPermission();

        void onRefuse();
    }

    public CheckPermissionUtils(android.app.Activity r2, com.bianfeng.addpermission.common.CheckPermissionUtils.CheckCallback r3) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.lackedPermission = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.permissionBeanList = r0
            r0 = 0
            r1.isRequest = r0
            com.bianfeng.addpermission.common.CheckPermissionUtils$1 r0 = new com.bianfeng.addpermission.common.CheckPermissionUtils$1
            r0.<init>(r1)
            r1.permissionCallback = r0
            r1.context = r2
            r1.checkCallback = r3
            return
    }

    public CheckPermissionUtils(android.app.Activity r2, com.bianfeng.addpermission.common.CheckPermissionUtils.CheckCallback r3, java.lang.String r4, boolean r5) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.lackedPermission = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.permissionBeanList = r0
            r0 = 0
            r1.isRequest = r0
            com.bianfeng.addpermission.common.CheckPermissionUtils$1 r0 = new com.bianfeng.addpermission.common.CheckPermissionUtils$1
            r0.<init>(r1)
            r1.permissionCallback = r0
            r1.context = r2
            r1.checkCallback = r3
            r1.permissions = r4
            r1.isRequest = r5
            return
    }

    static java.lang.String access$000(com.bianfeng.addpermission.common.CheckPermissionUtils r0) {
            java.lang.String r0 = r0.requestPermission()
            return r0
    }

    static com.bianfeng.addpermission.common.CheckPermissionUtils.CheckCallback access$100(com.bianfeng.addpermission.common.CheckPermissionUtils r0) {
            com.bianfeng.addpermission.common.CheckPermissionUtils$CheckCallback r0 = r0.checkCallback
            return r0
    }

    private java.lang.String appendPermissions(java.util.List<java.lang.String> r5) {
            r4 = this;
            com.bianfeng.addpermission.common.Constants r0 = new com.bianfeng.addpermission.common.Constants
            r0.<init>()
            java.util.ArrayList r0 = r0.getPermissionStr()
            int r1 = r5.size()
            if (r1 <= 0) goto L37
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.util.Iterator r5 = r5.iterator()
        L18:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L31
            java.lang.Object r2 = r5.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = ";"
            r1.append(r3)
            int r2 = r0.indexOf(r2)
            r1.append(r2)
            goto L18
        L31:
            r5 = 1
            java.lang.String r5 = r1.substring(r5)
            return r5
        L37:
            r5 = 0
            return r5
    }

    private void checkAndRequestPermission() {
            r9 = this;
            java.lang.String r0 = r9.permissions
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L12
            android.app.Activity r0 = r9.context
            java.lang.String r1 = "ANDROID_REQUEST_PERMISSION"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getMetaData(r0, r1)
            r9.permissions = r0
        L12:
            java.lang.String r0 = r9.permissions
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L20
            com.bianfeng.addpermission.common.CheckPermissionUtils$CheckCallback r0 = r9.checkCallback
            r0.onHasPermission()
            return
        L20:
            java.lang.String r0 = r9.permissions
            java.lang.String r1 = ";"
            java.lang.String[] r0 = r0.split(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "checkAndRequestPermission===="
            r1.append(r2)
            java.lang.String r3 = r9.permissions
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            com.bianfeng.addpermission.common.Constants r1 = new com.bianfeng.addpermission.common.Constants
            r1.<init>()
            java.util.Map r3 = r1.getPermissionAndroiMap()
            r9.permissionMap = r3
            java.util.Map r1 = r1.getPermissionNameMap()
            r9.nameMap = r1
            r1 = 0
        L50:
            int r3 = r0.length
            if (r1 >= r3) goto Lb4
            r3 = r0[r1]
            java.util.Map<java.lang.String, java.lang.String> r4 = r9.permissionMap
            java.lang.Object r4 = r4.get(r3)
            java.lang.String r4 = (java.lang.String) r4
            android.app.Activity r5 = r9.context
            java.lang.String r5 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getMetaData(r5, r3)
            java.util.Map<java.lang.String, java.lang.String> r6 = r9.nameMap
            java.lang.Object r6 = r6.get(r3)
            java.lang.String r6 = (java.lang.String) r6
            boolean r7 = android.text.TextUtils.isEmpty(r4)
            if (r7 == 0) goto L86
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "permission is null , key is "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            goto Lb1
        L86:
            android.app.Activity r3 = r9.context
            int r3 = r3.checkSelfPermission(r4)
            if (r3 == 0) goto Lb1
            java.util.List<java.lang.String> r3 = r9.lackedPermission
            r3.add(r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r3 = r9.permissionBeanList
            com.bianfeng.addpermission.ui.PermissionBean r7 = new com.bianfeng.addpermission.ui.PermissionBean
            java.lang.String r8 = "0"
            r7.<init>(r6, r5, r8, r4)
            r3.add(r7)
        Lb1:
            int r1 = r1 + 1
            goto L50
        Lb4:
            android.app.Activity r0 = r9.context
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r0)
            java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r1 = r9.permissionBeanList
            r0.putString(r1)
            java.util.List<java.lang.String> r0 = r9.lackedPermission
            int r0 = r0.size()
            if (r0 != 0) goto Ld2
            java.lang.String r0 = "走的是不申请权限"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.addpermission.common.CheckPermissionUtils$CheckCallback r0 = r9.checkCallback
            r0.onHasPermission()
            goto Le3
        Ld2:
            boolean r0 = r9.isRequest
            if (r0 == 0) goto Le0
            com.bianfeng.addpermission.common.CheckPermissionUtils$CheckCallback r0 = r9.checkCallback
            java.lang.String r1 = r9.requestPermission()
            r0.onAgree(r1)
            goto Le3
        Le0:
            r9.showPermissionDialog()
        Le3:
            return
    }

    private java.lang.String requestPermission() {
            r5 = this;
            android.app.Activity r0 = r5.context
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r0)
            java.util.List r0 = r0.getPermissions()
            java.util.List<java.lang.String> r1 = r5.lackedPermission
            r1.clear()
            java.util.Iterator r0 = r0.iterator()
        L13:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L51
            java.lang.Object r1 = r0.next()
            com.bianfeng.addpermission.ui.PermissionBean r1 = (com.bianfeng.addpermission.ui.PermissionBean) r1
            java.lang.String r2 = r1.getIsok()
            java.lang.String r1 = r1.getAndroidName()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "requestPermission isok="
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = "androidName="
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            java.lang.String r3 = "0"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L13
            java.util.List<java.lang.String> r2 = r5.lackedPermission
            r2.add(r1)
            goto L13
        L51:
            java.util.List<java.lang.String> r0 = r5.lackedPermission
            java.lang.String r0 = r5.appendPermissions(r0)
            return r0
    }

    private void showPermissionDialog() {
            r1 = this;
            com.bianfeng.addpermission.ui.PermissionCallback r0 = r1.permissionCallback
            com.bianfeng.addpermission.ui.AddPermissionApi.setPermissionCallback(r0)
            android.app.Activity r0 = r1.context
            com.bianfeng.addpermission.ui.AddPermissionApi.toShowPermissionDialog(r0)
            return
    }

    public void check() {
            r3 = this;
            android.app.Activity r0 = r3.context
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r0)
            boolean r0 = r0.getRefuxe()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "check========"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            if (r0 == 0) goto L26
            com.bianfeng.addpermission.common.CheckPermissionUtils$CheckCallback r0 = r3.checkCallback
            r0.onHasPermission()
            return
        L26:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L35
            java.lang.String r0 = "check===="
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            r3.checkAndRequestPermission()
            goto L3f
        L35:
            java.lang.String r0 = "不需要=权限====="
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.addpermission.common.CheckPermissionUtils$CheckCallback r0 = r3.checkCallback
            r0.onHasPermission()
        L3f:
            return
    }

    public boolean isRequest() {
            r1 = this;
            boolean r0 = r1.isRequest
            return r0
    }
}
