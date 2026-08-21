package com.bianfeng.ymnsdk.utilslib.appinfo;

import com.bianfeng.ymnsdk.utilslib.UtilsSdk;

class UtilsPermissionBean {
    private boolean hasPermission;
    private String permissionName;

    public UtilsPermissionBean(String str, boolean z) {
        this.permissionName = str;
        this.hasPermission = z;
    }

    public String getPermissionName() {
        return this.permissionName;
    }

    public void setPermissionName(String str) {
        this.permissionName = str;
    }

    public boolean isHasPermission() {
        return this.hasPermission;
    }

    public void setHasPermission(boolean z) {
        this.hasPermission = z;
    }

    public String toString() {
        return UtilsSdk.getGsonUtils().toJson(this);
    }
}
