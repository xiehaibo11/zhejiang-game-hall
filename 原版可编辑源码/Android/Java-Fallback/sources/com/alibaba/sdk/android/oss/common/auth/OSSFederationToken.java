package com.alibaba.sdk.android.oss.common.auth;

public class OSSFederationToken {
    private long expiration;
    private java.lang.String securityToken;
    private java.lang.String tempAk;
    private java.lang.String tempSk;

    public OSSFederationToken(java.lang.String r1, java.lang.String r2, java.lang.String r3, long r4) {
            r0 = this;
            r0.<init>()
            r0.setTempAk(r1)
            r0.setTempSk(r2)
            r0.setSecurityToken(r3)
            r0.setExpiration(r4)
            return
    }

    public OSSFederationToken(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.setTempAk(r1)
            r0.setTempSk(r2)
            r0.setSecurityToken(r3)
            r0.setExpirationInGMTFormat(r4)
            return
    }

    public long getExpiration() {
            r2 = this;
            long r0 = r2.expiration
            return r0
    }

    public java.lang.String getSecurityToken() {
            r1 = this;
            java.lang.String r0 = r1.securityToken
            return r0
    }

    public java.lang.String getTempAK() {
            r1 = this;
            java.lang.String r0 = r1.tempAk
            return r0
    }

    public java.lang.String getTempSK() {
            r1 = this;
            java.lang.String r0 = r1.tempSk
            return r0
    }

    public void setExpiration(long r1) {
            r0 = this;
            r0.expiration = r1
            return
    }

    public void setExpirationInGMTFormat(java.lang.String r5) {
            r4 = this;
            r0 = 1000(0x3e8, double:4.94E-321)
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat     // Catch: java.text.ParseException -> L1e
            java.lang.String r3 = "yyyy-MM-dd'T'HH:mm:ss"
            r2.<init>(r3)     // Catch: java.text.ParseException -> L1e
            java.lang.String r3 = "UTC"
            java.util.TimeZone r3 = java.util.TimeZone.getTimeZone(r3)     // Catch: java.text.ParseException -> L1e
            r2.setTimeZone(r3)     // Catch: java.text.ParseException -> L1e
            java.util.Date r5 = r2.parse(r5)     // Catch: java.text.ParseException -> L1e
            long r2 = r5.getTime()     // Catch: java.text.ParseException -> L1e
            long r2 = r2 / r0
            r4.expiration = r2     // Catch: java.text.ParseException -> L1e
            goto L32
        L1e:
            r5 = move-exception
            boolean r2 = com.alibaba.sdk.android.oss.common.OSSLog.isEnableLog()
            if (r2 == 0) goto L28
            r5.printStackTrace()
        L28:
            long r2 = com.alibaba.sdk.android.oss.common.utils.DateUtil.getFixedSkewedTimeMillis()
            long r2 = r2 / r0
            r0 = 30
            long r2 = r2 + r0
            r4.expiration = r2
        L32:
            return
    }

    public void setSecurityToken(java.lang.String r1) {
            r0 = this;
            r0.securityToken = r1
            return
    }

    public void setTempAk(java.lang.String r1) {
            r0 = this;
            r0.tempAk = r1
            return
    }

    public void setTempSk(java.lang.String r1) {
            r0 = this;
            r0.tempSk = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "OSSFederationToken [tempAk="
            r0.append(r1)
            java.lang.String r1 = r3.tempAk
            r0.append(r1)
            java.lang.String r1 = ", tempSk="
            r0.append(r1)
            java.lang.String r1 = r3.tempSk
            r0.append(r1)
            java.lang.String r1 = ", securityToken="
            r0.append(r1)
            java.lang.String r1 = r3.securityToken
            r0.append(r1)
            java.lang.String r1 = ", expiration="
            r0.append(r1)
            long r1 = r3.expiration
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
