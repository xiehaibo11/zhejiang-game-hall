package com.meizu.cloud.pushsdk.platform.message;

public class SubAliasStatus extends com.meizu.cloud.pushsdk.platform.message.BasicPushStatus {
    private java.lang.String alias;
    private java.lang.String pushId;

    public SubAliasStatus() {
            r0 = this;
            r0.<init>()
            return
    }

    public SubAliasStatus(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public java.lang.String getAlias() {
            r1 = this;
            java.lang.String r0 = r1.alias
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
            java.lang.String r0 = "alias"
            boolean r1 = r3.isNull(r0)
            if (r1 != 0) goto L1e
            java.lang.String r3 = r3.getString(r0)
            r2.setAlias(r3)
        L1e:
            return
    }

    public void setAlias(java.lang.String r1) {
            r0 = this;
            r0.alias = r1
            return
    }

    public void setPushId(java.lang.String r1) {
            r0 = this;
            r0.pushId = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = super.toString()
            r0.append(r1)
            java.lang.String r1 = " SubAliasStatus{pushId='"
            r0.append(r1)
            java.lang.String r1 = r3.pushId
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", alias='"
            r0.append(r2)
            java.lang.String r2 = r3.alias
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
