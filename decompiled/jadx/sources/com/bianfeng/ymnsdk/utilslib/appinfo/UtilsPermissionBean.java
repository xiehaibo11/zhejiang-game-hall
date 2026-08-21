package com.bianfeng.ymnsdk.utilslib.appinfo;

import com.bianfeng.ymnsdk.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
class UtilsPermissionBean {
    private boolean hasPermission;
    private String permissionName;

    public UtilsPermissionBean(String permissionName, boolean hasPermission) {
        this.permissionName = permissionName;
        this.hasPermission = hasPermission;
    }

    public String getPermissionName() {
        return this.permissionName;
    }

    public void setPermissionName(String permissionName) {
        this.permissionName = permissionName;
    }

    public boolean isHasPermission() {
        return this.hasPermission;
    }

    public void setHasPermission(boolean hasPermission) {
        this.hasPermission = hasPermission;
    }

    public String toString() {
        return UtilsSdk.getGsonUtils().toJson(this);
    }
}
