package com.meizu.cloud.pushsdk.notification.model;

public class ActVideoSetting implements android.os.Parcelable {
    public static final java.lang.String ACT_URL = "au";
    public static final java.lang.String ACT_VIDEO_SETTING = "acts";
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.notification.model.ActVideoSetting> CREATOR = null;
    public static final java.lang.String TAG = "ActVideoSetting";
    public static final java.lang.String WIFI_DISPLAY = "wd";
    private java.lang.String actUrl;
    private boolean wifiDisplay;


    static {
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting$1 r0 = new com.meizu.cloud.pushsdk.notification.model.ActVideoSetting$1
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting.CREATOR = r0
            return
    }

    public ActVideoSetting() {
            r0 = this;
            r0.<init>()
            return
    }

    protected ActVideoSetting(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            byte r0 = r2.readByte()
            if (r0 == 0) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1.wifiDisplay = r0
            java.lang.String r2 = r2.readString()
            r1.actUrl = r2
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.ActVideoSetting parse(java.lang.String r2) {
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
            java.lang.String r0 = "ActVideoSetting"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
        L27:
            r0 = 0
        L28:
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r2 = parse(r0)
            return r2
    }

    public static com.meizu.cloud.pushsdk.notification.model.ActVideoSetting parse(org.json.JSONObject r5) {
            java.lang.String r0 = "au"
            java.lang.String r1 = "wd"
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r2 = new com.meizu.cloud.pushsdk.notification.model.ActVideoSetting
            r2.<init>()
            java.lang.String r3 = "ActVideoSetting"
            if (r5 == 0) goto L44
            boolean r4 = r5.isNull(r1)     // Catch: org.json.JSONException -> L2d
            if (r4 != 0) goto L1f
            int r1 = r5.getInt(r1)     // Catch: org.json.JSONException -> L2d
            if (r1 == 0) goto L1b
            r1 = 1
            goto L1c
        L1b:
            r1 = 0
        L1c:
            r2.setWifiDisplay(r1)     // Catch: org.json.JSONException -> L2d
        L1f:
            boolean r1 = r5.isNull(r0)     // Catch: org.json.JSONException -> L2d
            if (r1 != 0) goto L49
            java.lang.String r5 = r5.getString(r0)     // Catch: org.json.JSONException -> L2d
            r2.setActUrl(r5)     // Catch: org.json.JSONException -> L2d
            goto L49
        L2d:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse json obj error "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            goto L46
        L44:
            java.lang.String r5 = "no such tag ActVideoSetting"
        L46:
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r5)
        L49:
            return r2
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getActUrl() {
            r1 = this;
            java.lang.String r0 = r1.actUrl
            return r0
    }

    public boolean isWifiDisplay() {
            r1 = this;
            boolean r0 = r1.wifiDisplay
            return r0
    }

    public void setActUrl(java.lang.String r1) {
            r0 = this;
            r0.actUrl = r1
            return
    }

    public void setWifiDisplay(boolean r1) {
            r0 = this;
            r0.wifiDisplay = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ActVideoSetting{wifiDisplay="
            r0.append(r1)
            boolean r1 = r2.wifiDisplay
            r0.append(r1)
            java.lang.String r1 = ", actUrl='"
            r0.append(r1)
            java.lang.String r1 = r2.actUrl
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            boolean r2 = r0.wifiDisplay
            byte r2 = (byte) r2
            r1.writeByte(r2)
            java.lang.String r2 = r0.actUrl
            r1.writeString(r2)
            return
    }
}
