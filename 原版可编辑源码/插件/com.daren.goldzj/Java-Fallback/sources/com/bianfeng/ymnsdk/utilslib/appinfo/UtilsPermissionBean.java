package com.bianfeng.ymnsdk.utilslib.appinfo;

import com.bianfeng.ymnsdk.utilslib.UtilsSdk;

class UtilsPermissionBean {
    private boolean hasPermission;
    private String permissionName;

    public UtilsPermissionBean(String r1, boolean r2) {
        this.permissionName = r1;
        this.hasPermission = r2;
    }

    public String getPermissionName() {
        return this.permissionName;
    }

    public void setPermissionName(String r1) {
        this.permissionName = r1;
    }

    public boolean isHasPermission() {
        return this.hasPermission;
    }

    public void setHasPermission(boolean r1) {
        this.hasPermission = r1;
    }

    public String toString() {
        return UtilsSdk.getGsonUtils().toJson(this);
    }
}
