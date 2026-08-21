package com.bianfeng.ymnsdk.entity;

public class LoginDataEntity {
    private java.lang.String gid;
    private java.lang.String headimgurl;
    private java.lang.String openid;
    private int pid;
    private java.lang.String session;
    private java.lang.String sex;
    private java.lang.String uid;
    private java.lang.String unionid;
    private java.lang.String username;

    public LoginDataEntity(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.gid = r0
            java.lang.String r1 = "123456"
            r2.uid = r1
            r2.username = r0
            r2.headimgurl = r0
            r2.sex = r0
            r2.unionid = r0
            r2.openid = r0
            r2.session = r3
            return
    }

    public java.lang.String getGid() {
            r1 = this;
            java.lang.String r0 = r1.gid
            return r0
    }

    public java.lang.String getHeadimgurl() {
            r1 = this;
            java.lang.String r0 = r1.headimgurl
            return r0
    }

    public java.lang.String getOpenid() {
            r1 = this;
            java.lang.String r0 = r1.openid
            return r0
    }

    public int getPid() {
            r1 = this;
            int r0 = r1.pid
            return r0
    }

    public java.lang.String getSession() {
            r1 = this;
            java.lang.String r0 = r1.session
            return r0
    }

    public java.lang.String getSex() {
            r1 = this;
            java.lang.String r0 = r1.sex
            return r0
    }

    public java.lang.String getUid() {
            r1 = this;
            java.lang.String r0 = r1.uid
            return r0
    }

    public java.lang.String getUnionid() {
            r1 = this;
            java.lang.String r0 = r1.unionid
            return r0
    }

    public java.lang.String getUsername() {
            r1 = this;
            java.lang.String r0 = r1.username
            return r0
    }

    public void setGid(java.lang.String r1) {
            r0 = this;
            r0.gid = r1
            return
    }

    public void setHeadimgurl(java.lang.String r1) {
            r0 = this;
            r0.headimgurl = r1
            return
    }

    public void setOpenid(java.lang.String r1) {
            r0 = this;
            r0.openid = r1
            return
    }

    public void setPid(int r1) {
            r0 = this;
            r0.pid = r1
            return
    }

    public void setSession(java.lang.String r1) {
            r0 = this;
            r0.session = r1
            return
    }

    public void setSex(java.lang.String r1) {
            r0 = this;
            r0.sex = r1
            return
    }

    public void setUid(java.lang.String r1) {
            r0 = this;
            r0.uid = r1
            return
    }

    public void setUnionid(java.lang.String r1) {
            r0 = this;
            r0.unionid = r1
            return
    }

    public void setUsername(java.lang.String r1) {
            r0 = this;
            r0.username = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
            return r0
    }
}
