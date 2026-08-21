package com.meizu.cloud.pushsdk.notification.model;

public class BrightRemindSetting implements android.os.Parcelable {
    public static final java.lang.String BRIGHT_REMIND = "br";
    public static final java.lang.String BRIGHT_REMIND_SETTING = "bs";
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting> CREATOR = null;
    public static final java.lang.String TAG = "BrightRemindSetting";
    private boolean isBrightRemind;


    static {
            com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting$1 r0 = new com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting$1
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting.CREATOR = r0
            return
    }

    public BrightRemindSetting() {
            r0 = this;
            r0.<init>()
            return
    }

    protected BrightRemindSetting(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            byte r2 = r2.readByte()
            r0 = 1
            if (r2 != r0) goto Lb
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1.isBrightRemind = r0
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting parse(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L27
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lc
            r0.<init>(r2)     // Catch: org.json.JSONException -> Lc
            goto L28
        Lc:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse json string error "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "BrightRemindSetting"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
        L27:
            r0 = 0
        L28:
            com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting r2 = parse(r0)
            return r2
    }

    public static com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting parse(org.json.JSONObject r4) {
            java.lang.String r0 = "br"
            com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting r1 = new com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting
            r1.<init>()
            java.lang.String r2 = "BrightRemindSetting"
            if (r4 == 0) goto L35
            boolean r3 = r4.isNull(r0)     // Catch: org.json.JSONException -> L1e
            if (r3 != 0) goto L3a
            int r4 = r4.getInt(r0)     // Catch: org.json.JSONException -> L1e
            if (r4 == 0) goto L19
            r4 = 1
            goto L1a
        L19:
            r4 = 0
        L1a:
            r1.setIsBrightRemind(r4)     // Catch: org.json.JSONException -> L1e
            goto L3a
        L1e:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "parse json obj error "
            r0.append(r3)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            goto L37
        L35:
            java.lang.String r4 = "no such tag BrightRemindSetting"
        L37:
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r4)
        L3a:
            return r1
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean getIsBrightRemind() {
            r1 = this;
            boolean r0 = r1.isBrightRemind
            return r0
    }

    public void setIsBrightRemind(boolean r1) {
            r0 = this;
            r0.isBrightRemind = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BrightRemindSetting{isBrightRemind="
            r0.append(r1)
            boolean r1 = r2.isBrightRemind
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            boolean r2 = r0.isBrightRemind
            byte r2 = (byte) r2
            r1.writeByte(r2)
            return
    }
}
