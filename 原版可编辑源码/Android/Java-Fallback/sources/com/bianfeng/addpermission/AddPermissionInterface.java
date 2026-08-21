package com.bianfeng.addpermission;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class AddPermissionInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    private static final java.lang.String ADD_PERMISSION = "add_permission";
    private static final int ADD_PERMISSION_FAIL = 85001;
    private static final int ADD_PERMISSION_IN48 = 85012;
    private static final int ADD_PERMISSION_SUCCESS = 85000;
    private static final int AGREE_POLICY = 85008;
    private static final java.lang.String CHECK_HAS_PERMISSION = "check_has_permission";
    private static final java.lang.String CHECK_SELELCT_NO_REQUEST = "check_select_no_request";
    private static final int CLEAR_FAIL = 85014;
    private static final int CLEAR_SUCCESS = 85013;
    private static final java.lang.String CLEAR_USER_POLICY = "clear_user_policy";
    private static final int GET_ADD_PERMISSION = 85002;
    private static final int GET_GRANT_LIST_SUCCESS = 85015;
    private static final java.lang.String GET_GRANT_PERMISSIONS = "get_grant_permission";
    private static final java.lang.String GET_PERMISSION = "get_permission";
    private static final int HAS_PERMISSIONS = 85006;
    private static final java.lang.String JUMP_PERMISSION_SYSTEM = "jump_permission_system";
    private static final int NON_SELECT_NO_REQUEST = 85011;
    private static final int NOT_HAS_PERMISSIONS = 85007;
    private static final int REFUSE_POLICY = 85009;
    private static final java.lang.String REQUEST_PERMISSION = "request_permission";
    private static final int SELECT_NO_REQUEST = 85010;
    private static final int SHOW_ADD_PERMISSION_AGREE = 85003;
    private static final int SHOW_ADD_PERMISSION_HAD = 85005;
    private static final int SHOW_ADD_PERMISSION_REFUSE = 85004;
    private static final java.lang.String SHOW_PERMISSION_DIALOG = "show_permission_dialog";
    private static final java.lang.String SHOW_POLICY_DIALOG = "show_policy_dialog";
    private static final java.lang.String USER_INITATIVE = "user_initiative";
    private static final java.lang.String YMNAGREEPRIVACY = "ymn_agree_privacy";
    private com.bianfeng.addpermission.common.CheckPermissionUtils.CheckCallback checkCallback;
    private android.content.Context context;
    private java.lang.String funcName;
    private com.bianfeng.addpermission.common.CheckPermissionUtils permissionUtils;




    public AddPermissionInterface() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.funcName = r0
            com.bianfeng.addpermission.AddPermissionInterface$2 r0 = new com.bianfeng.addpermission.AddPermissionInterface$2
            r0.<init>(r1)
            r1.checkCallback = r0
            return
    }

    static java.lang.String access$000(com.bianfeng.addpermission.AddPermissionInterface r0) {
            java.lang.String r0 = r0.funcName
            return r0
    }

    static com.bianfeng.addpermission.common.CheckPermissionUtils access$100(com.bianfeng.addpermission.AddPermissionInterface r0) {
            com.bianfeng.addpermission.common.CheckPermissionUtils r0 = r0.permissionUtils
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "check_select_no_request")
    private void checkSelectNonRequest(java.lang.String r4) {
            r3 = this;
            java.util.ArrayList r4 = com.bianfeng.addpermission.common.ConstantsUtils.toPermissionList(r4)
            java.util.Iterator r4 = r4.iterator()
        L8:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L30
            java.lang.Object r0 = r4.next()
            java.lang.String r0 = (java.lang.String) r0
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r1 < r2) goto L8
            android.app.Activity r1 = r3.getActivity()
            int r1 = r1.checkSelfPermission(r0)
            if (r1 == 0) goto L8
            android.app.Activity r1 = r3.getActivity()
            boolean r0 = r1.shouldShowRequestPermissionRationale(r0)
            if (r0 != 0) goto L8
            r4 = 1
            goto L31
        L30:
            r4 = 0
        L31:
            java.lang.String r0 = "check_select_no_request"
            if (r4 == 0) goto L3e
            r4 = 85010(0x14c12, float:1.19124E-40)
            java.lang.String r1 = "勾选了禁止不再提醒"
            r3.sendResult(r4, r1, r0)
            goto L46
        L3e:
            r4 = 85011(0x14c13, float:1.19126E-40)
            java.lang.String r1 = "未勾选了禁止不再提醒"
            r3.sendResult(r4, r1, r0)
        L46:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "add_permission")
    public void addPermission(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "申请权限"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "--->"
            r0.append(r1)
            java.util.ArrayList r1 = com.bianfeng.addpermission.common.ConstantsUtils.toPermissionList(r3)
            java.lang.String r1 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.String r0 = "add_permission"
            r2.funcName = r0
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r0)
            com.bianfeng.addpermission.AddPermissionInterface$1 r1 = new com.bianfeng.addpermission.AddPermissionInterface$1
            r1.<init>(r2)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r0.setCallback(r1)
            java.util.ArrayList r3 = com.bianfeng.addpermission.common.ConstantsUtils.toPermissionList(r3)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r0.setPermissions(r3)
            r0 = 1024(0x400, float:1.435E-42)
            r3.requestPermissions(r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "check_has_permission")
    public void checkHasPermission(java.lang.String r5) {
            r4 = this;
            java.util.ArrayList r5 = com.bianfeng.addpermission.common.ConstantsUtils.toPermissionList(r5)
            java.util.Iterator r5 = r5.iterator()
            r0 = 1
        L9:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r5.next()
            java.lang.String r1 = (java.lang.String) r1
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 23
            if (r2 < r3) goto L9
            android.app.Activity r2 = r4.getActivity()
            int r1 = r2.checkSelfPermission(r1)
            if (r1 == 0) goto L9
            r0 = 0
            goto L9
        L27:
            java.lang.String r5 = "check_has_permission"
            if (r0 == 0) goto L34
            r0 = 85006(0x14c0e, float:1.19119E-40)
            java.lang.String r1 = "有权限"
            r4.sendResult(r0, r1, r5)
            goto L3c
        L34:
            r0 = 85007(0x14c0f, float:1.1912E-40)
            java.lang.String r1 = "无权限"
            r4.sendResult(r0, r1, r5)
        L3c:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "clear_user_policy")
    public void clearUserPolicy() {
            r2 = this;
            com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.clearAgreePrivacy()     // Catch: java.lang.Exception -> Lc
            r0 = 85013(0x14c15, float:1.19129E-40)
            java.lang.String r1 = "success"
            r2.sendResult(r0, r1)     // Catch: java.lang.Exception -> Lc
            goto L17
        Lc:
            r0 = move-exception
            r1 = 85014(0x14c16, float:1.1913E-40)
            java.lang.String r0 = r0.toString()
            r2.sendResult(r1, r0)
        L17:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "get_grant_permission")
    public void getGrantPermissions() {
            r7 = this;
            com.bianfeng.addpermission.common.Constants r0 = new com.bianfeng.addpermission.common.Constants
            r0.<init>()
            java.util.ArrayList r0 = r0.getPermissionStr()
            r1 = 0
            java.lang.String r2 = ""
            r4 = r2
            r3 = 0
        Le:
            int r5 = r0.size()
            java.lang.String r6 = ";"
            if (r3 >= r5) goto L2b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r4)
            r5.append(r3)
            r5.append(r6)
            java.lang.String r4 = r5.toString()
            int r3 = r3 + 1
            goto Le
        L2b:
            java.util.ArrayList r0 = com.bianfeng.addpermission.common.ConstantsUtils.toPermissionList(r4)
            java.util.Iterator r0 = r0.iterator()
        L33:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L64
            java.lang.Object r3 = r0.next()
            java.lang.String r3 = (java.lang.String) r3
            int r4 = android.os.Build.VERSION.SDK_INT
            r5 = 23
            if (r4 < r5) goto L61
            android.app.Activity r4 = r7.getActivity()
            int r3 = r4.checkSelfPermission(r3)
            if (r3 != 0) goto L61
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            r3.append(r1)
            r3.append(r6)
            java.lang.String r2 = r3.toString()
        L61:
            int r1 = r1 + 1
            goto L33
        L64:
            r0 = 85015(0x14c17, float:1.19131E-40)
            r7.sendResult(r0, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "get_permission")
    public void getPermission() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r0)
            java.lang.String r0 = r0.getPermissionsStr()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "获取权限"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            r1 = 85002(0x14c0a, float:1.19113E-40)
            java.lang.String r2 = "get_permission"
            r3.sendResult(r1, r0, r2)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "85"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "addpermission"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 91
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "2.0.0"
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "jump_permission_system")
    public void jumpPermissionSystem() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.settings.APPLICATION_DETAILS_SETTINGS"
            r0.<init>(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "package:"
            r1.append(r2)
            android.content.Context r2 = r3.context
            java.lang.String r2 = r2.getPackageName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            android.content.Context r1 = r3.context
            r1.startActivity(r0)
            return
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            r1.context = r2
            com.bianfeng.addpermission.common.ReadAssetsFileUtils r0 = com.bianfeng.addpermission.common.ReadAssetsFileUtils.getInstance()
            r0.init(r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "request_permission")
    public void requestPermission(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "申请权限"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.String r0 = "request_permission"
            r4.funcName = r0
            com.bianfeng.addpermission.common.CheckPermissionUtils r0 = new com.bianfeng.addpermission.common.CheckPermissionUtils
            android.app.Activity r1 = r4.getActivity()
            com.bianfeng.addpermission.common.CheckPermissionUtils$CheckCallback r2 = r4.checkCallback
            r3 = 1
            r0.<init>(r1, r2, r5, r3)
            r4.permissionUtils = r0
            r0.check()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "show_permission_dialog")
    public void showPermissionDialog() {
            r3 = this;
            java.lang.String r0 = "show_permission_dialog"
            r3.funcName = r0
            com.bianfeng.addpermission.common.CheckPermissionUtils r0 = new com.bianfeng.addpermission.common.CheckPermissionUtils
            android.app.Activity r1 = r3.getActivity()
            com.bianfeng.addpermission.common.CheckPermissionUtils$CheckCallback r2 = r3.checkCallback
            r0.<init>(r1, r2)
            r3.permissionUtils = r0
            r0.check()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "show_policy_dialog")
    public void showPolicyDialog() {
            r3 = this;
            java.lang.String r0 = "showPolicyDialog"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils r0 = new com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils
            android.app.Activity r1 = r3.getActivity()
            com.bianfeng.addpermission.AddPermissionInterface$3 r2 = new com.bianfeng.addpermission.AddPermissionInterface$3
            r2.<init>(r3)
            r0.<init>(r1, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "user_initiative")
    public void userInitiative() {
            r2 = this;
            java.lang.String r0 = "isInitiative"
            r1 = 1
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L7
            goto Lb
        L7:
            r0 = move-exception
            r0.printStackTrace()
        Lb:
            return
    }
}
