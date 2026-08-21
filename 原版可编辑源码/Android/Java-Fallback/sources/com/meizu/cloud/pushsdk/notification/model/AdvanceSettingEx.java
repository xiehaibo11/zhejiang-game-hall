package com.meizu.cloud.pushsdk.notification.model;

public class AdvanceSettingEx implements android.os.Parcelable {
    public static final java.lang.String ADVANCE_SETTING_EX = "as";
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx> CREATOR = null;
    public static final int MZ_PUSH_PRIORITY_DEFAULT = 0;
    public static final int MZ_PUSH_PRIORITY_HIGH = 1;
    public static final int MZ_PUSH_PRIORITY_LOW = -1;
    public static final int MZ_PUSH_PRIORITY_MAX = 2;
    public static final int MZ_PUSH_PRIORITY_MIN = -2;
    public static final java.lang.String PRIORITY_DISPLAY = "pd";
    public static final java.lang.String SOUND_TITLE = "st";
    public static final java.lang.String TAG = "AdvanceSettingEx";
    private int priorityDisplay;
    private java.lang.String soundTitle;


    static {
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx$1 r0 = new com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx$1
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx.CREATOR = r0
            return
    }

    public AdvanceSettingEx() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.priorityDisplay = r0
            return
    }

    protected AdvanceSettingEx(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.priorityDisplay = r0
            int r0 = r2.readInt()
            r1.priorityDisplay = r0
            java.lang.String r2 = r2.readString()
            r1.soundTitle = r2
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx parse(java.lang.String r2) {
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
            java.lang.String r0 = "AdvanceSettingEx"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
        L27:
            r0 = 0
        L28:
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx r2 = parse(r0)
            return r2
    }

    public static com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx parse(org.json.JSONObject r5) {
            java.lang.String r0 = "st"
            java.lang.String r1 = "pd"
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx r2 = new com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx
            r2.<init>()
            java.lang.String r3 = "AdvanceSettingEx"
            if (r5 == 0) goto L3f
            boolean r4 = r5.isNull(r1)     // Catch: org.json.JSONException -> L28
            if (r4 != 0) goto L1a
            int r1 = r5.getInt(r1)     // Catch: org.json.JSONException -> L28
            r2.setPriorityDisplay(r1)     // Catch: org.json.JSONException -> L28
        L1a:
            boolean r1 = r5.isNull(r0)     // Catch: org.json.JSONException -> L28
            if (r1 != 0) goto L44
            java.lang.String r5 = r5.getString(r0)     // Catch: org.json.JSONException -> L28
            r2.setSoundTitle(r5)     // Catch: org.json.JSONException -> L28
            goto L44
        L28:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse json obj error "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            goto L41
        L3f:
            java.lang.String r5 = "no such tag AdvanceSettingEx"
        L41:
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r5)
        L44:
            return r2
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public int getPriorityDisplay() {
            r1 = this;
            int r0 = r1.priorityDisplay
            return r0
    }

    public java.lang.String getSoundTitle() {
            r1 = this;
            java.lang.String r0 = r1.soundTitle
            return r0
    }

    public void setPriorityDisplay(int r2) {
            r1 = this;
            r0 = -2
            if (r2 < r0) goto L6
            r0 = 2
            if (r2 <= r0) goto L7
        L6:
            r2 = 0
        L7:
            r1.priorityDisplay = r2
            return
    }

    public void setSoundTitle(java.lang.String r1) {
            r0 = this;
            r0.soundTitle = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AdvanceSettingEx{, priorityDisplay="
            r0.append(r1)
            int r1 = r2.priorityDisplay
            r0.append(r1)
            java.lang.String r1 = ", soundTitle="
            r0.append(r1)
            java.lang.String r1 = r2.soundTitle
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            int r2 = r0.priorityDisplay
            r1.writeInt(r2)
            java.lang.String r2 = r0.soundTitle
            r1.writeString(r2)
            return
    }
}
