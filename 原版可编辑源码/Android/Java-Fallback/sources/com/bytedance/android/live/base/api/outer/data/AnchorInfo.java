package com.bytedance.android.live.base.api.outer.data;

public class AnchorInfo {
    java.lang.String avatar;
    long fansCount;
    java.lang.String nickname;
    java.lang.String openId;

    public AnchorInfo(java.lang.String r1, java.lang.String r2, java.lang.String r3, long r4) {
            r0 = this;
            r0.<init>()
            r0.openId = r1
            r0.nickname = r2
            r0.avatar = r3
            r0.fansCount = r4
            return
    }

    public java.lang.String getAvatar() {
            r1 = this;
            java.lang.String r0 = r1.avatar
            return r0
    }

    public long getFansCount() {
            r2 = this;
            long r0 = r2.fansCount
            return r0
    }

    public java.lang.String getNickname() {
            r1 = this;
            java.lang.String r0 = r1.nickname
            return r0
    }

    public java.lang.String getOpenId() {
            r1 = this;
            java.lang.String r0 = r1.openId
            return r0
    }

    public void setAvatar(java.lang.String r1) {
            r0 = this;
            r0.avatar = r1
            return
    }

    public void setFansCount(long r1) {
            r0 = this;
            r0.fansCount = r1
            return
    }

    public void setNickname(java.lang.String r1) {
            r0 = this;
            r0.nickname = r1
            return
    }

    public void setOpenId(java.lang.String r1) {
            r0 = this;
            r0.openId = r1
            return
    }
}
