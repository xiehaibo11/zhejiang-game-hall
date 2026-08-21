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

    public LoginDataEntity(String session) {
        this.session = session;
    }

    public int getPid() {
        return this.pid;
    }

    public void setPid(int pid) {
        this.pid = pid;
    }

    public String getGid() {
        return this.gid;
    }

    public void setGid(String gid) {
        this.gid = gid;
    }

    public String getUid() {
        return this.uid;
    }

    public void setUid(String uid) {
        this.uid = uid;
    }

    public String getUsername() {
        return this.username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getSession() {
        return this.session;
    }

    public void setSession(String session) {
        this.session = session;
    }

    public String getHeadimgurl() {
        return this.headimgurl;
    }

    public void setHeadimgurl(String headimgurl) {
        this.headimgurl = headimgurl;
    }

    public String getSex() {
        return this.sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public String getUnionid() {
        return this.unionid;
    }

    public void setUnionid(String unionid) {
        this.unionid = unionid;
    }

    public String getOpenid() {
        return this.openid;
    }

    public void setOpenid(String openid) {
        this.openid = openid;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
