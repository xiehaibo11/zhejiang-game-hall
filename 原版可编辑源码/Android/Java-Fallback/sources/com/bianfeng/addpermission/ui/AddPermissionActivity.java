package com.bianfeng.addpermission.ui;

public class AddPermissionActivity extends android.app.Activity {
    private static final int REQUEST_PERMISSIONS_CODE = 350010;
    private static android.os.Handler handler;
    private com.bianfeng.addpermission.common.CheckPermissionUtils.CheckCallback checkCallback;
    private java.util.List<java.lang.String> lackedPermission;
    private java.util.List<java.lang.String> permissionList;
    private com.bianfeng.addpermission.common.CheckPermissionUtils permissionUtils;
    private com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils.CheckCallback policyCheckCallback;
    private com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils privacyPolicyUtils;





    static {
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.bianfeng.addpermission.ui.AddPermissionActivity.handler = r0
            return
    }

    public AddPermissionActivity() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.lackedPermission = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.permissionList = r0
            com.bianfeng.addpermission.ui.AddPermissionActivity$3 r0 = new com.bianfeng.addpermission.ui.AddPermissionActivity$3
            r0.<init>(r1)
            r1.checkCallback = r0
            com.bianfeng.addpermission.ui.AddPermissionActivity$4 r0 = new com.bianfeng.addpermission.ui.AddPermissionActivity$4
            r0.<init>(r1)
            r1.policyCheckCallback = r0
            return
    }

    static void access$000(com.bianfeng.addpermission.ui.AddPermissionActivity r0) {
            r0.toNextActivity()
            return
    }

    static void access$100(com.bianfeng.addpermission.ui.AddPermissionActivity r0) {
            r0.toSetting()
            return
    }

    static java.lang.String access$200(com.bianfeng.addpermission.ui.AddPermissionActivity r0) {
            java.lang.String r0 = r0.getGameActivityName()
            return r0
    }

    static void access$300(com.bianfeng.addpermission.ui.AddPermissionActivity r0) {
            r0.requestPermission()
            return
    }

    static void access$400(com.bianfeng.addpermission.ui.AddPermissionActivity r0) {
            r0.toCheckPermission()
            return
    }

    private java.lang.String getGameActivityName() {
            r4 = this;
            java.lang.String r0 = "ADD_PERMISSION_ACTIVITY_MAIN"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getMetaData(r4, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "获取到的activity名是"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            java.lang.String r1 = "org.cocos2dx.cpp.AppActivity"
            boolean r2 = r1.equalsIgnoreCase(r0)
            if (r2 == 0) goto L23
            return r1
        L23:
            java.lang.String r2 = "com.bf.sysfunc.BFActivity"
            boolean r3 = r2.equalsIgnoreCase(r0)
            if (r3 == 0) goto L2c
            return r2
        L2c:
            java.lang.String r2 = "com.bf.prettysdk.BFActivity"
            boolean r3 = r2.equalsIgnoreCase(r0)
            if (r3 == 0) goto L35
            return r2
        L35:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L3c
            return r1
        L3c:
            return r0
    }

    private boolean hasNecessaryPMSGranted(java.lang.String[] r8) {
            r7 = this;
            int r0 = r8.length
            r1 = 0
            r2 = 1
            r3 = 0
        L4:
            if (r3 >= r0) goto L26
            r4 = r8[r3]
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "hasNecessaryPMSGranted"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r5)
            int r4 = r7.checkSelfPermission(r4)
            if (r4 == 0) goto L23
            r2 = 0
        L23:
            int r3 = r3 + 1
            goto L4
        L26:
            return r2
    }

    public static void hideVirtualKey(android.app.Activity r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            r2 = 11
            if (r0 <= r2) goto L1a
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L1a
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            r0 = 8
            r3.setSystemUiVisibility(r0)
            goto L2b
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L2b
            r0 = 4102(0x1006, float:5.748E-42)
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            r3.setSystemUiVisibility(r0)
        L2b:
            return
    }

    private void requestPermission() {
            r4 = this;
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r4)
            java.util.List r0 = r0.getPermissions()
            java.util.List<java.lang.String> r1 = r4.lackedPermission
            r1.clear()
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L47
            java.lang.Object r1 = r0.next()
            com.bianfeng.addpermission.ui.PermissionBean r1 = (com.bianfeng.addpermission.ui.PermissionBean) r1
            java.lang.String r2 = r1.getIsok()
            java.lang.String r1 = r1.getAndroidName()
            java.lang.String r3 = "0"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L11
            java.util.List<java.lang.String> r2 = r4.lackedPermission
            r2.add(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = " AddPermissionActivity requestPermission == "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            goto L11
        L47:
            java.util.List<java.lang.String> r0 = r4.permissionList
            r0.clear()
            java.util.List<java.lang.String> r0 = r4.lackedPermission
            java.util.Iterator r0 = r0.iterator()
        L52:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L7e
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            int r2 = r4.checkSelfPermission(r1)
            if (r2 == 0) goto L52
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = " AddPermissionActivity checkAndRequestPermission ==== "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            java.util.List<java.lang.String> r2 = r4.permissionList
            r2.add(r1)
            goto L52
        L7e:
            java.util.List<java.lang.String> r0 = r4.permissionList
            int r0 = r0.size()
            if (r0 <= 0) goto La0
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r4)
            com.bianfeng.addpermission.ui.AddPermissionActivity$1 r1 = new com.bianfeng.addpermission.ui.AddPermissionActivity$1
            r1.<init>(r4)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r0.setCallback(r1)
            java.util.List<java.lang.String> r1 = r4.permissionList
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r0.setPermissions(r1)
            r1 = 350010(0x5573a, float:4.90468E-40)
            r0.requestPermissions(r1)
            goto La3
        La0:
            r4.toNextActivity()
        La3:
            return
    }

    private void toCheckPermission() {
            r3 = this;
            com.bianfeng.addpermission.common.CheckPermissionUtils r0 = new com.bianfeng.addpermission.common.CheckPermissionUtils     // Catch: java.lang.Exception -> Ld
            com.bianfeng.addpermission.common.CheckPermissionUtils$CheckCallback r1 = r3.checkCallback     // Catch: java.lang.Exception -> Ld
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> Ld
            r3.permissionUtils = r0     // Catch: java.lang.Exception -> Ld
            r0.check()     // Catch: java.lang.Exception -> Ld
            goto L26
        Ld:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " Exception == "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
        L26:
            return
    }

    private void toCheckPolicy() {
            r3 = this;
            com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils r0 = new com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils     // Catch: java.lang.Exception -> Ld
            com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils$CheckCallback r1 = r3.policyCheckCallback     // Catch: java.lang.Exception -> Ld
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> Ld
            r3.privacyPolicyUtils = r0     // Catch: java.lang.Exception -> Ld
            r0.check()     // Catch: java.lang.Exception -> Ld
            goto L26
        Ld:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " Exception == "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
        L26:
            return
    }

    private void toNextActivity() {
            r5 = this;
            boolean r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.isNotNeedSplash(r5)
            if (r0 == 0) goto L8
            r0 = 0
            goto La
        L8:
            r0 = 2000(0x7d0, float:2.803E-42)
        La:
            android.os.Handler r1 = com.bianfeng.addpermission.ui.AddPermissionActivity.handler
            com.bianfeng.addpermission.ui.AddPermissionActivity$2 r2 = new com.bianfeng.addpermission.ui.AddPermissionActivity$2
            r2.<init>(r5)
            long r3 = (long) r0
            r1.postDelayed(r2, r3)
            return
    }

    private void toSetting() {
            r4 = this;
            java.lang.String r0 = "ADD_PERMISSION_JUMP_TO_PERMISSION"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getMetaData(r4, r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "package:"
            java.lang.String r3 = "android.settings.APPLICATION_DETAILS_SETTINGS"
            if (r1 != 0) goto L42
            java.lang.String r1 = "jump"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = r4.getPackageName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            r4.startActivity(r0)
            r4.finish()
            goto L67
        L3e:
            r4.toNextActivity()
            goto L67
        L42:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = r4.getPackageName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            r4.startActivity(r0)
            r4.finish()
        L67:
            return
    }

    @Override
    public void finish() {
            r1 = this;
            super.finish()
            r0 = 0
            r1.overridePendingTransition(r0, r0)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r7) {
            r6 = this;
            super.onCreate(r7)
            com.bianfeng.addpermission.common.DensityUtils.setDefault(r6)
            java.lang.String r7 = "ADD_PERMISSION_IS_FULLSCREEN"
            java.lang.String r7 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r6, r7)
            boolean r7 = java.lang.Boolean.parseBoolean(r7)
            if (r7 == 0) goto L15
            com.bianfeng.gongxiang.screenlib.ScreenSdk.setFullScreen(r6)
        L15:
            r7 = 1
            r6.requestWindowFeature(r7)
            hideVirtualKey(r6)
            android.view.Window r0 = r6.getWindow()
            r1 = 1024(0x400, float:1.435E-42)
            r0.addFlags(r1)
            java.lang.String r0 = "R.layout.activity_add_permission"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r6, r0)
            r6.setContentView(r0)
            com.bianfeng.addpermission.common.ReadAssetsFileUtils r0 = com.bianfeng.addpermission.common.ReadAssetsFileUtils.getInstance()
            r0.init(r6)
            r6.toCheckPolicy()
            java.lang.String r0 = "YSDK_MAIN_ACTIVITY"
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r0)     // Catch: java.lang.Exception -> L5c
            java.lang.String r1 = "com.tencent.ysdk.api.YSDKApi"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L5c
            java.lang.String r2 = "setMainActivity"
            java.lang.Class[] r3 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L5c
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L5c
            java.lang.reflect.Method r2 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.Exception -> L5c
            r2.setAccessible(r7)     // Catch: java.lang.Exception -> L5c
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L5c
            r7[r5] = r0     // Catch: java.lang.Exception -> L5c
            r2.invoke(r1, r7)     // Catch: java.lang.Exception -> L5c
            goto L60
        L5c:
            r7 = move-exception
            r7.printStackTrace()
        L60:
            return
    }
}
