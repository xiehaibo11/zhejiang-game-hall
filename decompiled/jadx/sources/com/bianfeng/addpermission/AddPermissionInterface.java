package com.bianfeng.addpermission;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import com.bianfeng.addpermission.common.CheckPermissionUtils;
import com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils;
import com.bianfeng.addpermission.common.Constants;
import com.bianfeng.addpermission.common.ConstantsUtils;
import com.bianfeng.addpermission.common.ReadAssetsFileUtils;
import com.bianfeng.addpermission.common.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class AddPermissionInterface extends YmnPluginWrapper {
    private static final String ADD_PERMISSION = "add_permission";
    private static final int ADD_PERMISSION_FAIL = 85001;
    private static final int ADD_PERMISSION_IN48 = 85012;
    private static final int ADD_PERMISSION_SUCCESS = 85000;
    private static final int AGREE_POLICY = 85008;
    private static final String CHECK_HAS_PERMISSION = "check_has_permission";
    private static final String CHECK_SELELCT_NO_REQUEST = "check_select_no_request";
    private static final int CLEAR_FAIL = 85014;
    private static final int CLEAR_SUCCESS = 85013;
    private static final String CLEAR_USER_POLICY = "clear_user_policy";
    private static final int GET_ADD_PERMISSION = 85002;
    private static final int GET_GRANT_LIST_SUCCESS = 85015;
    private static final String GET_GRANT_PERMISSIONS = "get_grant_permission";
    private static final String GET_PERMISSION = "get_permission";
    private static final int HAS_PERMISSIONS = 85006;
    private static final String JUMP_PERMISSION_SYSTEM = "jump_permission_system";
    private static final int NON_SELECT_NO_REQUEST = 85011;
    private static final int NOT_HAS_PERMISSIONS = 85007;
    private static final int REFUSE_POLICY = 85009;
    private static final String REQUEST_PERMISSION = "request_permission";
    private static final int SELECT_NO_REQUEST = 85010;
    private static final int SHOW_ADD_PERMISSION_AGREE = 85003;
    private static final int SHOW_ADD_PERMISSION_HAD = 85005;
    private static final int SHOW_ADD_PERMISSION_REFUSE = 85004;
    private static final String SHOW_PERMISSION_DIALOG = "show_permission_dialog";
    private static final String SHOW_POLICY_DIALOG = "show_policy_dialog";
    private static final String USER_INITATIVE = "user_initiative";
    private static final String YMNAGREEPRIVACY = "ymn_agree_privacy";
    private Context context;
    private CheckPermissionUtils permissionUtils;
    private String funcName = "";
    private CheckPermissionUtils.CheckCallback checkCallback = new CheckPermissionUtils.CheckCallback() { // from class: com.bianfeng.addpermission.AddPermissionInterface.2
        @Override // com.bianfeng.addpermission.common.CheckPermissionUtils.CheckCallback
        public void onRefuse() {
            AddPermissionInterface addPermissionInterface = AddPermissionInterface.this;
            addPermissionInterface.sendResult(AddPermissionInterface.SHOW_ADD_PERMISSION_REFUSE, "用户拒绝获取", addPermissionInterface.funcName);
        }

        @Override // com.bianfeng.addpermission.common.CheckPermissionUtils.CheckCallback
        public void onAgree(String str) {
            AddPermissionInterface.this.sendResult(AddPermissionInterface.SHOW_ADD_PERMISSION_AGREE, "用户" + str, AddPermissionInterface.this.funcName);
            Logger.i("CheckPermissionUtils  onAgree" + str);
            AddPermissionInterface.this.addPermission(str);
        }

        @Override // com.bianfeng.addpermission.common.CheckPermissionUtils.CheckCallback
        public void onHasPermission() {
            if (AddPermissionInterface.this.permissionUtils.isRequest()) {
                AddPermissionInterface addPermissionInterface = AddPermissionInterface.this;
                addPermissionInterface.sendResult(AddPermissionInterface.ADD_PERMISSION_SUCCESS, "授权成功", addPermissionInterface.funcName);
            } else {
                AddPermissionInterface addPermissionInterface2 = AddPermissionInterface.this;
                addPermissionInterface2.sendResult(AddPermissionInterface.SHOW_ADD_PERMISSION_HAD, "不需要获取", addPermissionInterface2.funcName);
            }
        }
    };

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginId() {
        return "85";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginName() {
        return "addpermission";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public int getPluginVersion() {
        return 91;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getSdkVersion() {
        return "2.0.0";
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onInit(Context context) throws Throwable {
        super.onInit(context);
        this.context = context;
        ReadAssetsFileUtils.getInstance().init(context);
    }

    @YFunction(name = ADD_PERMISSION)
    public void addPermission(String str) {
        Logger.i("申请权限" + str + "--->" + YmnGsonUtil.toJson(ConstantsUtils.toPermissionList(str)));
        this.funcName = ADD_PERMISSION;
        BfDataPermissionUtils.newInstance(getActivity()).setCallback(new BfDataPermissionUtils.PermissCallback() { // from class: com.bianfeng.addpermission.AddPermissionInterface.1
            @Override // com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback
            public void onAllowAll(int i) {
                AddPermissionInterface addPermissionInterface = AddPermissionInterface.this;
                addPermissionInterface.sendResult(AddPermissionInterface.ADD_PERMISSION_SUCCESS, "授权成功", addPermissionInterface.funcName);
                AddPermissionInterface addPermissionInterface2 = AddPermissionInterface.this;
                addPermissionInterface2.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "授权成功", addPermissionInterface2.funcName);
            }

            @Override // com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback
            public void onAllow(int i, String str2) {
                AddPermissionInterface.this.sendResult(AddPermissionInterface.ADD_PERMISSION_FAIL, "允许的部分权限：" + str2, AddPermissionInterface.this.funcName);
                AddPermissionInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "允许的部分权限" + str2, AddPermissionInterface.this.funcName);
            }

            @Override // com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback
            public void onDeny(int i, String str2) {
                AddPermissionInterface.this.sendResult(AddPermissionInterface.ADD_PERMISSION_FAIL, "拒绝的权限：" + str2, AddPermissionInterface.this.funcName);
                AddPermissionInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "拒绝的权限" + str2, AddPermissionInterface.this.funcName);
            }

            @Override // com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback
            public void onDenyIn48Hours(int i, String str2) {
                Logger.i("onDenyIn48Hours--->" + i + "---" + str2);
                AddPermissionInterface addPermissionInterface = AddPermissionInterface.this;
                addPermissionInterface.sendResult(AddPermissionInterface.ADD_PERMISSION_IN48, str2, addPermissionInterface.funcName);
                AddPermissionInterface addPermissionInterface2 = AddPermissionInterface.this;
                addPermissionInterface2.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "授权成功", addPermissionInterface2.funcName);
            }
        }).setPermissions(ConstantsUtils.toPermissionList(str)).requestPermissions(1024);
    }

    @YFunction(name = REQUEST_PERMISSION)
    public void requestPermission(String str) {
        Logger.i("申请权限");
        this.funcName = REQUEST_PERMISSION;
        CheckPermissionUtils checkPermissionUtils = new CheckPermissionUtils(getActivity(), this.checkCallback, str, true);
        this.permissionUtils = checkPermissionUtils;
        checkPermissionUtils.check();
    }

    @YFunction(name = GET_PERMISSION)
    public void getPermission() {
        String permissionsStr = SharedPreferencesUtils.getInstance(getContext()).getPermissionsStr();
        Logger.i("获取权限" + permissionsStr);
        sendResult(GET_ADD_PERMISSION, permissionsStr, GET_PERMISSION);
    }

    @YFunction(name = JUMP_PERMISSION_SYSTEM)
    public void jumpPermissionSystem() {
        Intent intent = new Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
        intent.setData(Uri.parse("package:" + this.context.getPackageName()));
        this.context.startActivity(intent);
    }

    @YFunction(name = SHOW_PERMISSION_DIALOG)
    public void showPermissionDialog() {
        this.funcName = SHOW_PERMISSION_DIALOG;
        CheckPermissionUtils checkPermissionUtils = new CheckPermissionUtils(getActivity(), this.checkCallback);
        this.permissionUtils = checkPermissionUtils;
        checkPermissionUtils.check();
    }

    @YFunction(name = CHECK_HAS_PERMISSION)
    public void checkHasPermission(String str) {
        boolean z = true;
        for (String str2 : ConstantsUtils.toPermissionList(str)) {
            if (Build.VERSION.SDK_INT >= 23 && getActivity().checkSelfPermission(str2) != 0) {
                z = false;
            }
        }
        if (z) {
            sendResult(HAS_PERMISSIONS, "有权限", CHECK_HAS_PERMISSION);
        } else {
            sendResult(NOT_HAS_PERMISSIONS, "无权限", CHECK_HAS_PERMISSION);
        }
    }

    @YFunction(name = SHOW_POLICY_DIALOG)
    public void showPolicyDialog() {
        Logger.e("showPolicyDialog");
        new CheckPolicyAndPermissionUtils(getActivity(), new CheckPolicyAndPermissionUtils.CheckCallback() { // from class: com.bianfeng.addpermission.AddPermissionInterface.3
            @Override // com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils.CheckCallback
            public void onRefuse() {
                Logger.i("SHOW_POLICY_DIALOG 拒绝了");
                AddPermissionInterface.this.sendResult(AddPermissionInterface.REFUSE_POLICY, "拒绝权限", AddPermissionInterface.SHOW_POLICY_DIALOG);
            }

            @Override // com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils.CheckCallback
            public void onAgree() {
                Logger.i("SHOW_POLICY_DIALOG onAgree");
                AddPermissionInterface.this.sendResult(AddPermissionInterface.AGREE_POLICY, "允许权限", AddPermissionInterface.SHOW_POLICY_DIALOG);
            }
        });
    }

    @YFunction(name = CHECK_SELELCT_NO_REQUEST)
    private void checkSelectNonRequest(String str) {
        boolean z;
        Iterator<String> it = ConstantsUtils.toPermissionList(str).iterator();
        while (true) {
            if (!it.hasNext()) {
                z = false;
                break;
            }
            String next = it.next();
            if (Build.VERSION.SDK_INT >= 23 && getActivity().checkSelfPermission(next) != 0 && !getActivity().shouldShowRequestPermissionRationale(next)) {
                z = true;
                break;
            }
        }
        if (z) {
            sendResult(SELECT_NO_REQUEST, "勾选了禁止不再提醒", CHECK_SELELCT_NO_REQUEST);
        } else {
            sendResult(NON_SELECT_NO_REQUEST, "未勾选了禁止不再提醒", CHECK_SELELCT_NO_REQUEST);
        }
    }

    @YFunction(name = USER_INITATIVE)
    public void userInitiative() {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put("isInitiative", true);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @YFunction(name = CLEAR_USER_POLICY)
    public void clearUserPolicy() {
        try {
            YmnSharedPreferencesUtils.clearAgreePrivacy();
            sendResult(CLEAR_SUCCESS, "success");
        } catch (Exception e) {
            sendResult(CLEAR_FAIL, e.toString());
        }
    }

    @YFunction(name = GET_GRANT_PERMISSIONS)
    public void getGrantPermissions() {
        int i = 0;
        String str = "";
        String str2 = "";
        for (int i2 = 0; i2 < new Constants().getPermissionStr().size(); i2++) {
            str2 = str2 + i2 + ";";
        }
        for (String str3 : ConstantsUtils.toPermissionList(str2)) {
            if (Build.VERSION.SDK_INT >= 23 && getActivity().checkSelfPermission(str3) == 0) {
                str = str + i + ";";
            }
            i++;
        }
        sendResult(GET_GRANT_LIST_SUCCESS, str);
    }
}
