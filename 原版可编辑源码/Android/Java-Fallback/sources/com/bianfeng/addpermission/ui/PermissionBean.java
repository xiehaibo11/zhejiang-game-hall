package com.bianfeng.addpermission.ui;

public class PermissionBean {
    private java.lang.String androidName;
    private java.lang.String describe;
    private java.lang.String name;
    private java.lang.String type;

    public PermissionBean(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            r0.describe = r2
            r0.type = r3
            r0.androidName = r4
            return
    }

    public java.lang.String getAndroidName() {
            r1 = this;
            java.lang.String r0 = r1.androidName
            return r0
    }

    public java.lang.String getIsok() {
            r1 = this;
            java.lang.String r0 = r1.type
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public java.lang.String getNotity() {
            r1 = this;
            java.lang.String r0 = r1.describe
            return r0
    }

    public void setAndroidName(java.lang.String r1) {
            r0 = this;
            r0.androidName = r1
            return
    }

    public void setIsok(java.lang.String r1) {
            r0 = this;
            r0.type = r1
            return
    }

    public void setName(java.lang.String r1) {
            r0 = this;
            r0.name = r1
            return
    }

    public void setNotity(java.lang.String r1) {
            r0 = this;
            r0.describe = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            java.lang.String r0 = r0.toJson(r1)
            return r0
    }
}
