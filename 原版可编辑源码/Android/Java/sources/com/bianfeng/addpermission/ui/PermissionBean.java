package com.bianfeng.addpermission.ui;

import com.google.gson.Gson;

public class PermissionBean {
    private String androidName;
    private String describe;
    private String name;
    private String type;

    public PermissionBean(String str, String str2, String str3, String str4) {
        this.name = str;
        this.describe = str2;
        this.type = str3;
        this.androidName = str4;
    }

    public String getAndroidName() {
        return this.androidName;
    }

    public void setAndroidName(String str) {
        this.androidName = str;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String str) {
        this.name = str;
    }

    public String getNotity() {
        return this.describe;
    }

    public void setNotity(String str) {
        this.describe = str;
    }

    public String getIsok() {
        return this.type;
    }

    public void setIsok(String str) {
        this.type = str;
    }

    public String toString() {
        return new Gson().toJson(this);
    }
}
