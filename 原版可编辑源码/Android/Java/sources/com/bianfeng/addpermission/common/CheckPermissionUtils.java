package com.bianfeng.addpermission.common;

import android.app.Activity;
import android.os.Build;
import android.text.TextUtils;
import com.bianfeng.addpermission.ui.AddPermissionApi;
import com.bianfeng.addpermission.ui.PermissionBean;
import com.bianfeng.addpermission.ui.PermissionCallback;
import com.bianfeng.ymnsdk.util.Logger;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class CheckPermissionUtils {
    private CheckCallback checkCallback;
    private Activity context;
    private boolean isRequest;
    private List<String> lackedPermission;
    private Map<String, String> nameMap;
    private List<PermissionBean> permissionBeanList;
    private PermissionCallback permissionCallback;
    private Map<String, String> permissionMap;
    private String permissions;

    public interface CheckCallback {
        void onAgree(String str);

        void onHasPermission();

        void onRefuse();
    }

    public boolean isRequest() {
        return this.isRequest;
    }

    public CheckPermissionUtils(Activity activity, CheckCallback checkCallback) {
        this.lackedPermission = new ArrayList();
        this.permissionBeanList = new ArrayList();
        this.isRequest = false;
        this.permissionCallback = new PermissionCallback() {
            @Override
            public void onAgree() {
                String strRequestPermission = CheckPermissionUtils.this.requestPermission();
                Logger.i("onAgree：" + strRequestPermission);
                if (TextUtils.isEmpty(strRequestPermission)) {
                    CheckPermissionUtils.this.checkCallback.onRefuse();
                } else {
                    CheckPermissionUtils.this.checkCallback.onAgree(strRequestPermission);
                }
            }

            @Override
            public void onRefuse() {
                CheckPermissionUtils.this.checkCallback.onRefuse();
            }
        };
        this.context = activity;
        this.checkCallback = checkCallback;
    }

    public CheckPermissionUtils(Activity activity, CheckCallback checkCallback, String str, boolean z) {
        this.lackedPermission = new ArrayList();
        this.permissionBeanList = new ArrayList();
        this.isRequest = false;
        this.permissionCallback = new PermissionCallback() {
            @Override
            public void onAgree() {
                String strRequestPermission = CheckPermissionUtils.this.requestPermission();
                Logger.i("onAgree：" + strRequestPermission);
                if (TextUtils.isEmpty(strRequestPermission)) {
                    CheckPermissionUtils.this.checkCallback.onRefuse();
                } else {
                    CheckPermissionUtils.this.checkCallback.onAgree(strRequestPermission);
                }
            }

            @Override
            public void onRefuse() {
                CheckPermissionUtils.this.checkCallback.onRefuse();
            }
        };
        this.context = activity;
        this.checkCallback = checkCallback;
        this.permissions = str;
        this.isRequest = z;
    }

    public void check() {
        boolean refuxe = SharedPreferencesUtils.getInstance(this.context).getRefuxe();
        Logger.i("check========" + refuxe);
        if (refuxe) {
            this.checkCallback.onHasPermission();
        } else if (Build.VERSION.SDK_INT >= 23) {
            Logger.i("check====");
            checkAndRequestPermission();
        } else {
            Logger.i("不需要=权限=====");
            this.checkCallback.onHasPermission();
        }
    }

    private void checkAndRequestPermission() {
        if (TextUtils.isEmpty(this.permissions)) {
            this.permissions = AddPermissionToolUtils.getMetaData(this.context, "ANDROID_REQUEST_PERMISSION");
        }
        if (TextUtils.isEmpty(this.permissions)) {
            this.checkCallback.onHasPermission();
            return;
        }
        String[] strArrSplit = this.permissions.split(";");
        Logger.i("checkAndRequestPermission====" + this.permissions);
        Constants constants = new Constants();
        this.permissionMap = constants.getPermissionAndroiMap();
        this.nameMap = constants.getPermissionNameMap();
        for (String str : strArrSplit) {
            String str2 = this.permissionMap.get(str);
            String metaData = AddPermissionToolUtils.getMetaData(this.context, str);
            String str3 = this.nameMap.get(str);
            if (TextUtils.isEmpty(str2)) {
                Logger.i("permission is null , key is " + str);
            } else if (this.context.checkSelfPermission(str2) != 0) {
                this.lackedPermission.add(str2);
                Logger.i("checkAndRequestPermission====" + str2);
                this.permissionBeanList.add(new PermissionBean(str3, metaData, "0", str2));
            }
        }
        SharedPreferencesUtils.getInstance(this.context).putString(this.permissionBeanList);
        if (this.lackedPermission.size() == 0) {
            Logger.i("走的是不申请权限");
            this.checkCallback.onHasPermission();
        } else if (this.isRequest) {
            this.checkCallback.onAgree(requestPermission());
        } else {
            showPermissionDialog();
        }
    }

    private void showPermissionDialog() {
        AddPermissionApi.setPermissionCallback(this.permissionCallback);
        AddPermissionApi.toShowPermissionDialog(this.context);
    }

    private String requestPermission() {
        List<PermissionBean> permissions = SharedPreferencesUtils.getInstance(this.context).getPermissions();
        this.lackedPermission.clear();
        for (PermissionBean permissionBean : permissions) {
            String isok = permissionBean.getIsok();
            String androidName = permissionBean.getAndroidName();
            Logger.i("requestPermission isok=" + isok + "androidName=" + androidName);
            if (isok.equals("0")) {
                this.lackedPermission.add(androidName);
            }
        }
        return appendPermissions(this.lackedPermission);
    }

    private String appendPermissions(List<String> list) {
        ArrayList<String> permissionStr = new Constants().getPermissionStr();
        if (list.size() <= 0) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        for (String str : list) {
            stringBuffer.append(";");
            stringBuffer.append(permissionStr.indexOf(str));
        }
        return stringBuffer.substring(1);
    }
}
