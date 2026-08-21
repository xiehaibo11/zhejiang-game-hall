package com.bianfeng.ymnsdk.utilslib.appinfo;

class UtilsPermissionBean {
    private boolean hasPermission;
    private java.lang.String permissionName;

    public UtilsPermissionBean(java.lang.String r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.permissionName = r1
            r0.hasPermission = r2
            return
    }

    public java.lang.String getPermissionName() {
            r1 = this;
            java.lang.String r0 = r1.permissionName
            return r0
    }

    public boolean isHasPermission() {
            r1 = this;
            boolean r0 = r1.hasPermission
            return r0
    }

    public void setHasPermission(boolean r1) {
            r0 = this;
            r0.hasPermission = r1
            return
    }

    public void setPermissionName(java.lang.String r1) {
            r0 = this;
            r0.permissionName = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            java.lang.String r0 = r0.toJson(r1)
            return r0
    }
}
