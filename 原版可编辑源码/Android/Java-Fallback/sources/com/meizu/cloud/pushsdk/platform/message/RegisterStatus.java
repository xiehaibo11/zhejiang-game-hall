package com.meizu.cloud.pushsdk.platform.message;

public class RegisterStatus extends com.meizu.cloud.pushsdk.platform.message.BasicPushStatus {
    private int expireTime;
    private java.lang.String pushId;

    public RegisterStatus() {
            r0 = this;
            r0.<init>()
            return
    }

    public RegisterStatus(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public int getExpireTime() {
            r1 = this;
            int r0 = r1.expireTime
            return r0
    }

    public java.lang.String getPushId() {
            r1 = this;
            java.lang.String r0 = r1.pushId
            return r0
    }

    @Override
    public void parseValueData(org.json.JSONObject r3) {
            r2 = this;
            java.lang.String r0 = "pushId"
            boolean r1 = r3.isNull(r0)
            if (r1 != 0) goto Lf
            java.lang.String r0 = r3.getString(r0)
            r2.setPushId(r0)
        Lf:
            java.lang.String r0 = "expireTime"
            boolean r1 = r3.isNull(r0)
            if (r1 != 0) goto L1e
            int r3 = r3.getInt(r0)
            r2.setExpireTime(r3)
        L1e:
            return
    }

    public void setExpireTime(int r1) {
            r0 = this;
            r0.expireTime = r1
            return
    }

    public void setPushId(java.lang.String r1) {
            r0 = this;
            r0.pushId = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = super.toString()
            r0.append(r1)
            java.lang.String r1 = "pushId='"
            r0.append(r1)
            java.lang.String r1 = r2.pushId
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", Become invalid after "
            r0.append(r1)
            int r1 = r2.expireTime
            r0.append(r1)
            java.lang.String r1 = " seconds "
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
