package com.meizu.cloud.pushsdk.notification.model;

public class AdvanceSetting implements android.os.Parcelable {
    public static final java.lang.String ADVANCE_SETTING = "as";
    public static final java.lang.String CLEAR_NOTIFICATION = "cn";
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.notification.model.AdvanceSetting> CREATOR = null;
    public static final java.lang.String HEAD_UP_NOTIFICATION = "hn";
    public static final java.lang.String NETWORK_TYPE = "it";
    public static final java.lang.String NOTIFY_TYPE = "nt";
    public static final java.lang.String TAG = "advance_setting";
    private boolean clearNotification;
    private boolean headUpNotification;
    private int netWorkType;
    private com.meizu.cloud.pushsdk.notification.model.NotifyType notifyType;


    static {
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting$1 r0 = new com.meizu.cloud.pushsdk.notification.model.AdvanceSetting$1
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting.CREATOR = r0
            return
    }

    public AdvanceSetting() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.netWorkType = r0
            r1.clearNotification = r0
            r1.headUpNotification = r0
            return
    }

    public AdvanceSetting(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            r0 = 1
            r3.netWorkType = r0
            r3.clearNotification = r0
            r3.headUpNotification = r0
            int r1 = r4.readInt()
            r3.netWorkType = r1
            java.lang.Class<com.meizu.cloud.pushsdk.notification.model.NotifyType> r1 = com.meizu.cloud.pushsdk.notification.model.NotifyType.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            android.os.Parcelable r1 = r4.readParcelable(r1)
            com.meizu.cloud.pushsdk.notification.model.NotifyType r1 = (com.meizu.cloud.pushsdk.notification.model.NotifyType) r1
            r3.notifyType = r1
            byte r1 = r4.readByte()
            r2 = 0
            if (r1 == 0) goto L27
            r1 = r0
            goto L28
        L27:
            r1 = r2
        L28:
            r3.clearNotification = r1
            byte r4 = r4.readByte()
            if (r4 == 0) goto L31
            goto L32
        L31:
            r0 = r2
        L32:
            r3.headUpNotification = r0
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.AdvanceSetting parse(java.lang.String r2) {
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
            java.lang.String r0 = "advance_setting"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
        L27:
            r0 = 0
        L28:
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r2 = parse(r0)
            return r2
    }

    public static com.meizu.cloud.pushsdk.notification.model.AdvanceSetting parse(org.json.JSONObject r7) {
            java.lang.String r0 = "hn"
            java.lang.String r1 = "cn"
            java.lang.String r2 = "nt"
            java.lang.String r3 = "it"
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r4 = new com.meizu.cloud.pushsdk.notification.model.AdvanceSetting
            r4.<init>()
            java.lang.String r5 = "advance_setting"
            if (r7 == 0) goto L6c
            boolean r6 = r7.isNull(r3)     // Catch: org.json.JSONException -> L55
            if (r6 != 0) goto L1e
            int r3 = r7.getInt(r3)     // Catch: org.json.JSONException -> L55
            r4.setNetWorkType(r3)     // Catch: org.json.JSONException -> L55
        L1e:
            boolean r3 = r7.isNull(r2)     // Catch: org.json.JSONException -> L55
            if (r3 != 0) goto L2f
            org.json.JSONObject r2 = r7.getJSONObject(r2)     // Catch: org.json.JSONException -> L55
            com.meizu.cloud.pushsdk.notification.model.NotifyType r2 = com.meizu.cloud.pushsdk.notification.model.NotifyType.parse(r2)     // Catch: org.json.JSONException -> L55
            r4.setNotifyType(r2)     // Catch: org.json.JSONException -> L55
        L2f:
            boolean r2 = r7.isNull(r1)     // Catch: org.json.JSONException -> L55
            r3 = 1
            r6 = 0
            if (r2 != 0) goto L43
            int r1 = r7.getInt(r1)     // Catch: org.json.JSONException -> L55
            if (r1 == 0) goto L3f
            r1 = r3
            goto L40
        L3f:
            r1 = r6
        L40:
            r4.setClearNotification(r1)     // Catch: org.json.JSONException -> L55
        L43:
            boolean r1 = r7.isNull(r0)     // Catch: org.json.JSONException -> L55
            if (r1 != 0) goto L71
            int r7 = r7.getInt(r0)     // Catch: org.json.JSONException -> L55
            if (r7 == 0) goto L50
            goto L51
        L50:
            r3 = r6
        L51:
            r4.setHeadUpNotification(r3)     // Catch: org.json.JSONException -> L55
            goto L71
        L55:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse json obj error "
            r0.append(r1)
            java.lang.String r7 = r7.getMessage()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            goto L6e
        L6c:
            java.lang.String r7 = "no such tag advance_setting"
        L6e:
            com.meizu.cloud.pushinternal.DebugLogger.e(r5, r7)
        L71:
            return r4
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public int getNetWorkType() {
            r1 = this;
            int r0 = r1.netWorkType
            return r0
    }

    public com.meizu.cloud.pushsdk.notification.model.NotifyType getNotifyType() {
            r1 = this;
            com.meizu.cloud.pushsdk.notification.model.NotifyType r0 = r1.notifyType
            return r0
    }

    public boolean isClearNotification() {
            r1 = this;
            boolean r0 = r1.clearNotification
            return r0
    }

    public boolean isHeadUpNotification() {
            r1 = this;
            boolean r0 = r1.headUpNotification
            return r0
    }

    public void setClearNotification(boolean r1) {
            r0 = this;
            r0.clearNotification = r1
            return
    }

    public void setHeadUpNotification(boolean r1) {
            r0 = this;
            r0.headUpNotification = r1
            return
    }

    public void setNetWorkType(int r1) {
            r0 = this;
            r0.netWorkType = r1
            return
    }

    public void setNotifyType(com.meizu.cloud.pushsdk.notification.model.NotifyType r1) {
            r0 = this;
            r0.notifyType = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AdvanceSetting{netWorkType="
            r0.append(r1)
            int r1 = r2.netWorkType
            r0.append(r1)
            java.lang.String r1 = ", notifyType="
            r0.append(r1)
            com.meizu.cloud.pushsdk.notification.model.NotifyType r1 = r2.notifyType
            r0.append(r1)
            java.lang.String r1 = ", clearNotification="
            r0.append(r1)
            boolean r1 = r2.clearNotification
            r0.append(r1)
            java.lang.String r1 = ", headUpNotification="
            r0.append(r1)
            boolean r1 = r2.headUpNotification
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            int r0 = r1.netWorkType
            r2.writeInt(r0)
            com.meizu.cloud.pushsdk.notification.model.NotifyType r0 = r1.notifyType
            r2.writeParcelable(r0, r3)
            boolean r3 = r1.clearNotification
            byte r3 = (byte) r3
            r2.writeByte(r3)
            boolean r3 = r1.headUpNotification
            byte r3 = (byte) r3
            r2.writeByte(r3)
            return
    }
}
