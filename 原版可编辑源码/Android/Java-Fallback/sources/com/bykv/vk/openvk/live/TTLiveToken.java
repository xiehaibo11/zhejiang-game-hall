package com.bykv.vk.openvk.live;

public class TTLiveToken implements java.io.Serializable {
    public java.lang.String accessToken;
    public long expireAt;
    public java.lang.String name;
    public java.lang.String openId;
    public java.lang.String refreshToken;

    public TTLiveToken(java.lang.String r3, java.lang.String r4, java.lang.String r5, long r6, java.lang.String r8) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.expireAt = r0
            java.lang.String r0 = ""
            r2.refreshToken = r0
            r2.name = r3
            r2.accessToken = r4
            r2.openId = r5
            r2.expireAt = r6
            r2.refreshToken = r8
            return
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TTLiveToken{accessToken='"
            r0.append(r1)
            java.lang.String r1 = r4.accessToken
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", openId='"
            r0.append(r2)
            java.lang.String r2 = r4.openId
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", expireAt="
            r0.append(r2)
            long r2 = r4.expireAt
            r0.append(r2)
            java.lang.String r2 = ", refreshToken='"
            r0.append(r2)
            java.lang.String r2 = r4.refreshToken
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
