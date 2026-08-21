package com.bianfeng.addpermission.common;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.addpermission.ui.PermissionBean;
import com.bianfeng.ymnsdk.util.Logger;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import java.util.ArrayList;
import java.util.List;

public class SharedPreferencesUtils {
    private static final String ANDPERMISSION_AGREE_POLICY = "permission_agree_policy";
    private static final String ISFIRST = "permission_isFirst";
    private static final String ISREFUSE = "permission_isRefuse";
    private static final String PERMISSION_LIST = "permission_list";
    private static final String POLICY_DIALOG_SHOW = "policy_dialog_show";
    private static volatile SharedPreferencesUtils preferencesUtils;

    public static SharedPreferencesUtils getInstance(Context context) {
        if (preferencesUtils == null) {
            synchronized (SharedPreferencesUtils.class) {
                if (preferencesUtils == null) {
                    preferencesUtils = new SharedPreferencesUtils();
                }
            }
        }
        return preferencesUtils;
    }

    public void putString(List<PermissionBean> list) {
        Logger.i("putString" + new Gson().toJson(list));
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put("permission_list", ReadAssetsFileUtils.getInstance().put(list));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public String getPermissionsStr() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString("permission_list");
    }

    public List<PermissionBean> getPermissions() {
        try {
            String permissionsStr = getPermissionsStr();
            if (TextUtils.isEmpty(permissionsStr)) {
                return new ArrayList();
            }
            return (List) new Gson().fromJson(permissionsStr, new TypeToken<List<PermissionBean>>() {
            }.getType());
        } catch (Exception e) {
            Logger.e("getPermissions: " + e.getMessage());
            return new ArrayList();
        }
    }

    public void setIsFirst(boolean z) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(ISFIRST, z);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public boolean getIsFirst() {
        return !com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(ISFIRST);
    }

    public void setRefuse(boolean z) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(ISREFUSE, z);
        } catch (Exception unused) {
        }
    }

    public void setAgreePolicy(boolean z) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(ANDPERMISSION_AGREE_POLICY, z);
        } catch (Exception unused) {
        }
    }

    public boolean getRefuxe() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(ISREFUSE);
    }

    public boolean getAgreePolicy() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(ANDPERMISSION_AGREE_POLICY);
    }

    public void setPolicyDialogShow(boolean z) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(POLICY_DIALOG_SHOW, z);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public boolean getPolicyDialogShow() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(POLICY_DIALOG_SHOW);
    }
}
