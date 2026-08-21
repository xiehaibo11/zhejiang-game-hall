package com.bianfeng.ymnsdk.entity;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class LoginDataEntity {
    private String gid;
    private String headimgurl;
    private String openid;
    private int pid;
    private String session;
    private String sex;
    private String uid;
    private String unionid;
    private String username;

    public LoginDataEntity(String r3) {
        this.gid = "";
        this.uid = "123456";
        this.username = "";
        this.headimgurl = "";
        this.sex = "";
        this.unionid = "";
        this.openid = "";
        this.session = r3;
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

    public void setGid(String r1) {
        this.gid = r1;
    }

    public void setHeadimgurl(String r1) {
        this.headimgurl = r1;
    }

    public void setOpenid(String r1) {
        this.openid = r1;
    }

    public void setPid(int r1) {
        this.pid = r1;
    }

    public void setSession(String r1) {
        this.session = r1;
    }

    public void setSex(String r1) {
        this.sex = r1;
    }

    public void setUid(String r1) {
        this.uid = r1;
    }

    public void setUnionid(String r1) {
        this.unionid = r1;
    }

    public void setUsername(String r1) {
        this.username = r1;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
