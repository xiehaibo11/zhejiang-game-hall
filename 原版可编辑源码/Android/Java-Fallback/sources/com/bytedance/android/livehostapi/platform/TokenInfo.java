package com.bytedance.android.livehostapi.platform;

public class TokenInfo {
    public java.lang.String accessToken;
    public long expireAt;
    public java.lang.String name;
    public java.lang.String openId;

    public TokenInfo(java.lang.String r1, java.lang.String r2, java.lang.String r3, long r4) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            r0.openId = r2
            r0.accessToken = r3
            r0.expireAt = r4
            return
    }

    public java.lang.String getAccessToken() {
            r1 = this;
            java.lang.String r0 = r1.accessToken
            return r0
    }

    public long getExpireAt() {
            r2 = this;
            long r0 = r2.expireAt
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public java.lang.String getOpenId() {
            r1 = this;
            java.lang.String r0 = r1.openId
            return r0
    }

    public void setAccessToken(java.lang.String r1) {
            r0 = this;
            r0.accessToken = r1
            return
    }

    public void setExpireAt(long r1) {
            r0 = this;
            r0.expireAt = r1
            return
    }

    public void setName(java.lang.String r1) {
            r0 = this;
            r0.name = r1
            return
    }

    public void setOpenId(java.lang.String r1) {
            r0 = this;
            r0.openId = r1
            return
    }
}
