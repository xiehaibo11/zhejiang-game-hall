package com.meizu.cloud.pushsdk.notification.model;

public class TimeDisplaySetting implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting> CREATOR = null;
    public static final java.lang.String END_SHOW_TIME = "et";
    public static final java.lang.String START_SHOW_TIME = "st";
    public static final java.lang.String TAG = "time_display_setting";
    public static final java.lang.String TIME_DISPLAY = "td";
    public static final java.lang.String TIME_DISPLAY_SETTING = "ts";
    private java.lang.String endShowTime;
    private boolean isTimeDisplay;
    private java.lang.String startShowTime;


    static {
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting$1 r0 = new com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting$1
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting.CREATOR = r0
            return
    }

    public TimeDisplaySetting() {
            r0 = this;
            r0.<init>()
            return
    }

    public TimeDisplaySetting(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            byte r0 = r2.readByte()
            if (r0 == 0) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1.isTimeDisplay = r0
            java.lang.String r0 = r2.readString()
            r1.startShowTime = r0
            java.lang.String r2 = r2.readString()
            r1.endShowTime = r2
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting parse(java.lang.String r2) {
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
            java.lang.String r0 = "time_display_setting"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
        L27:
            r0 = 0
        L28:
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r2 = parse(r0)
            return r2
    }

    public static com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting parse(org.json.JSONObject r6) {
            java.lang.String r0 = "et"
            java.lang.String r1 = "st"
            java.lang.String r2 = "td"
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r3 = new com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting
            r3.<init>()
            java.lang.String r4 = "time_display_setting"
            if (r6 == 0) goto L53
            boolean r5 = r6.isNull(r2)     // Catch: org.json.JSONException -> L3c
            if (r5 != 0) goto L21
            int r2 = r6.getInt(r2)     // Catch: org.json.JSONException -> L3c
            if (r2 == 0) goto L1d
            r2 = 1
            goto L1e
        L1d:
            r2 = 0
        L1e:
            r3.setIsTimeDisplay(r2)     // Catch: org.json.JSONException -> L3c
        L21:
            boolean r2 = r6.isNull(r1)     // Catch: org.json.JSONException -> L3c
            if (r2 != 0) goto L2e
            java.lang.String r1 = r6.getString(r1)     // Catch: org.json.JSONException -> L3c
            r3.setStartShowTime(r1)     // Catch: org.json.JSONException -> L3c
        L2e:
            boolean r1 = r6.isNull(r0)     // Catch: org.json.JSONException -> L3c
            if (r1 != 0) goto L58
            java.lang.String r6 = r6.getString(r0)     // Catch: org.json.JSONException -> L3c
            r3.setEndShowTime(r6)     // Catch: org.json.JSONException -> L3c
            goto L58
        L3c:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse json obj error "
            r0.append(r1)
            java.lang.String r6 = r6.getMessage()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            goto L55
        L53:
            java.lang.String r6 = "no such tag time_display_setting"
        L55:
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r6)
        L58:
            return r3
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getEndShowTime() {
            r1 = this;
            java.lang.String r0 = r1.endShowTime
            return r0
    }

    public java.lang.String getStartShowTime() {
            r1 = this;
            java.lang.String r0 = r1.startShowTime
            return r0
    }

    public boolean isTimeDisplay() {
            r1 = this;
            boolean r0 = r1.isTimeDisplay
            return r0
    }

    public void setEndShowTime(java.lang.String r1) {
            r0 = this;
            r0.endShowTime = r1
            return
    }

    public void setIsTimeDisplay(boolean r1) {
            r0 = this;
            r0.isTimeDisplay = r1
            return
    }

    public void setStartShowTime(java.lang.String r1) {
            r0 = this;
            r0.startShowTime = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TimeDisplaySetting{isTimeDisplay="
            r0.append(r1)
            boolean r1 = r3.isTimeDisplay
            r0.append(r1)
            java.lang.String r1 = ", startShowTime='"
            r0.append(r1)
            java.lang.String r1 = r3.startShowTime
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", endShowTime='"
            r0.append(r2)
            java.lang.String r2 = r3.endShowTime
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            boolean r2 = r0.isTimeDisplay
            byte r2 = (byte) r2
            r1.writeByte(r2)
            java.lang.String r2 = r0.startShowTime
            r1.writeString(r2)
            java.lang.String r2 = r0.endShowTime
            r1.writeString(r2)
            return
    }
}
