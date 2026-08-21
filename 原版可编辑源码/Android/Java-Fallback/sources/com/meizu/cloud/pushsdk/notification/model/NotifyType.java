package com.meizu.cloud.pushsdk.notification.model;

public class NotifyType implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.notification.model.NotifyType> CREATOR = null;
    public static final java.lang.String LIGHTS = "l";
    public static final java.lang.String NOTIFY_TYPE = "nt";
    public static final java.lang.String SOUND = "s";
    public static final java.lang.String TAG = "notify_type";
    public static final java.lang.String VIBRATE = "v";
    boolean lights;
    boolean sound;
    boolean vibrate;


    static {
            com.meizu.cloud.pushsdk.notification.model.NotifyType$1 r0 = new com.meizu.cloud.pushsdk.notification.model.NotifyType$1
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.NotifyType.CREATOR = r0
            return
    }

    public NotifyType() {
            r0 = this;
            r0.<init>()
            return
    }

    public NotifyType(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            byte r0 = r4.readByte()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto Ld
            r0 = r1
            goto Le
        Ld:
            r0 = r2
        Le:
            r3.vibrate = r0
            byte r0 = r4.readByte()
            if (r0 == 0) goto L18
            r0 = r1
            goto L19
        L18:
            r0 = r2
        L19:
            r3.lights = r0
            byte r4 = r4.readByte()
            if (r4 == 0) goto L22
            goto L23
        L22:
            r1 = r2
        L23:
            r3.sound = r1
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.NotifyType parse(java.lang.String r2) {
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
            java.lang.String r0 = "notify_type"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
        L27:
            r0 = 0
        L28:
            com.meizu.cloud.pushsdk.notification.model.NotifyType r2 = parse(r0)
            return r2
    }

    public static com.meizu.cloud.pushsdk.notification.model.NotifyType parse(org.json.JSONObject r8) {
            java.lang.String r0 = "s"
            java.lang.String r1 = "l"
            java.lang.String r2 = "v"
            com.meizu.cloud.pushsdk.notification.model.NotifyType r3 = new com.meizu.cloud.pushsdk.notification.model.NotifyType
            r3.<init>()
            java.lang.String r4 = "notify_type"
            if (r8 == 0) goto L5e
            boolean r5 = r8.isNull(r2)     // Catch: org.json.JSONException -> L47
            r6 = 1
            r7 = 0
            if (r5 != 0) goto L23
            int r2 = r8.getInt(r2)     // Catch: org.json.JSONException -> L47
            if (r2 == 0) goto L1f
            r2 = r6
            goto L20
        L1f:
            r2 = r7
        L20:
            r3.setVibrate(r2)     // Catch: org.json.JSONException -> L47
        L23:
            boolean r2 = r8.isNull(r1)     // Catch: org.json.JSONException -> L47
            if (r2 != 0) goto L35
            int r1 = r8.getInt(r1)     // Catch: org.json.JSONException -> L47
            if (r1 == 0) goto L31
            r1 = r6
            goto L32
        L31:
            r1 = r7
        L32:
            r3.setLights(r1)     // Catch: org.json.JSONException -> L47
        L35:
            boolean r1 = r8.isNull(r0)     // Catch: org.json.JSONException -> L47
            if (r1 != 0) goto L63
            int r8 = r8.getInt(r0)     // Catch: org.json.JSONException -> L47
            if (r8 == 0) goto L42
            goto L43
        L42:
            r6 = r7
        L43:
            r3.setSound(r6)     // Catch: org.json.JSONException -> L47
            goto L63
        L47:
            r8 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse json obj error "
            r0.append(r1)
            java.lang.String r8 = r8.getMessage()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            goto L60
        L5e:
            java.lang.String r8 = "no such tag notify_type"
        L60:
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r8)
        L63:
            return r3
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isLights() {
            r1 = this;
            boolean r0 = r1.lights
            return r0
    }

    public boolean isSound() {
            r1 = this;
            boolean r0 = r1.sound
            return r0
    }

    public boolean isVibrate() {
            r1 = this;
            boolean r0 = r1.vibrate
            return r0
    }

    public void setLights(boolean r1) {
            r0 = this;
            r0.lights = r1
            return
    }

    public void setSound(boolean r1) {
            r0 = this;
            r0.sound = r1
            return
    }

    public void setVibrate(boolean r1) {
            r0 = this;
            r0.vibrate = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NotifyType{vibrate="
            r0.append(r1)
            boolean r1 = r2.vibrate
            r0.append(r1)
            java.lang.String r1 = ", lights="
            r0.append(r1)
            boolean r1 = r2.lights
            r0.append(r1)
            java.lang.String r1 = ", sound="
            r0.append(r1)
            boolean r1 = r2.sound
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            boolean r2 = r0.vibrate
            byte r2 = (byte) r2
            r1.writeByte(r2)
            boolean r2 = r0.lights
            byte r2 = (byte) r2
            r1.writeByte(r2)
            boolean r2 = r0.sound
            byte r2 = (byte) r2
            r1.writeByte(r2)
            return
    }
}
