package com.meizu.cloud.pushsdk.platform.message;

public class UnRegisterStatus extends com.meizu.cloud.pushsdk.platform.message.BasicPushStatus {
    private boolean isUnRegisterSuccess;

    public UnRegisterStatus() {
            r0 = this;
            r0.<init>()
            return
    }

    public UnRegisterStatus(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public boolean isUnRegisterSuccess() {
            r1 = this;
            boolean r0 = r1.isUnRegisterSuccess
            return r0
    }

    @Override
    public void parseValueData(org.json.JSONObject r3) {
            r2 = this;
            java.lang.String r0 = "result"
            boolean r1 = r3.isNull(r0)
            if (r1 != 0) goto Lf
            boolean r3 = r3.getBoolean(r0)
            r2.setIsUnRegisterSuccess(r3)
        Lf:
            return
    }

    public void setIsUnRegisterSuccess(boolean r1) {
            r0 = this;
            r0.isUnRegisterSuccess = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = super.toString()
            r0.append(r1)
            java.lang.String r1 = " UnRegisterStatus{isUnRegisterSuccess="
            r0.append(r1)
            boolean r1 = r2.isUnRegisterSuccess
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
