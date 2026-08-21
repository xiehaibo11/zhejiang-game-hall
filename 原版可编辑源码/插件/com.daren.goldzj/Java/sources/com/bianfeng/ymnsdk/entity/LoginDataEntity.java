package com.bianfeng.ymnsdk.entity;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class LoginDataEntity {
    private int pid;
    private String session;
    private String gid = "";
    private String uid = "123456";
    private String username = "";
    private String headimgurl = "";
    private String sex = "";
    private String unionid = "";
    private String openid = "";

    public LoginDataEntity(String str) {
        this.session = str;
    }

    public String getGid() {
        return this.gid;
    }

    public String getHeadimgurl() {
        return this.headimgurl;
    }

    public String getOpenid() {
        return this.openid;
    }

    public int getPid() {
        return this.pid;
    }

    public String getSession() {
        return this.session;
    }

    public String getSex() {
        return this.sex;
    }

    public String getUid() {
        return this.uid;
    }

    public String getUnionid() {
        return this.unionid;
    }

    public String getUsername() {
        return this.username;
    }

    public void setGid(String str) {
        this.gid = str;
    }

    public void setHeadimgurl(String str) {
        this.headimgurl = str;
    }

    public void setOpenid(String str) {
        this.openid = str;
    }

    public void setPid(int i) {
        this.pid = i;
    }

    public void setSession(String str) {
        this.session = str;
    }

    public void setSex(String str) {
        this.sex = str;
    }

    public void setUid(String str) {
        this.uid = str;
    }

    public void setUnionid(String str) {
        this.unionid = str;
    }

    public void setUsername(String str) {
        this.username = str;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
