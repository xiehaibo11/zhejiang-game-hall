package com.meizu.cloud.pushsdk.platform.message;

public class PushSwitchStatus extends com.meizu.cloud.pushsdk.platform.message.BasicPushStatus {
    private java.lang.String pushId;
    private boolean switchNotificationMessage;
    private boolean switchThroughMessage;

    public PushSwitchStatus() {
            r0 = this;
            r0.<init>()
            return
    }

    public PushSwitchStatus(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public java.lang.String getPushId() {
            r1 = this;
            java.lang.String r0 = r1.pushId
            return r0
    }

    public boolean isSwitchNotificationMessage() {
            r1 = this;
            boolean r0 = r1.switchNotificationMessage
            return r0
    }

    public boolean isSwitchThroughMessage() {
            r1 = this;
            boolean r0 = r1.switchThroughMessage
            return r0
    }

    @Override
    public void parseValueData(org.json.JSONObject r5) {
            r4 = this;
            java.lang.String r0 = "pushId"
            boolean r1 = r5.isNull(r0)
            if (r1 != 0) goto Lf
            java.lang.String r0 = r5.getString(r0)
            r4.setPushId(r0)
        Lf:
            java.lang.String r0 = "barTypeSwitch"
            boolean r1 = r5.isNull(r0)
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L25
            int r0 = r5.getInt(r0)
            if (r0 != r3) goto L21
            r0 = r3
            goto L22
        L21:
            r0 = r2
        L22:
            r4.setSwitchNotificationMessage(r0)
        L25:
            java.lang.String r0 = "directTypeSwitch"
            boolean r1 = r5.isNull(r0)
            if (r1 != 0) goto L37
            int r5 = r5.getInt(r0)
            if (r5 != r3) goto L34
            r2 = r3
        L34:
            r4.setSwitchThroughMessage(r2)
        L37:
            return
    }

    public void setPushId(java.lang.String r1) {
            r0 = this;
            r0.pushId = r1
            return
    }

    public void setSwitchNotificationMessage(boolean r1) {
            r0 = this;
            r0.switchNotificationMessage = r1
            return
    }

    public void setSwitchThroughMessage(boolean r1) {
            r0 = this;
            r0.switchThroughMessage = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = super.toString()
            r0.append(r1)
            java.lang.String r1 = "PushSwitchStatus{switchNotificationMessage="
            r0.append(r1)
            boolean r1 = r2.switchNotificationMessage
            r0.append(r1)
            java.lang.String r1 = ", switchThroughMessage="
            r0.append(r1)
            boolean r1 = r2.switchThroughMessage
            r0.append(r1)
            java.lang.String r1 = ", pushId='"
            r0.append(r1)
            java.lang.String r1 = r2.pushId
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
