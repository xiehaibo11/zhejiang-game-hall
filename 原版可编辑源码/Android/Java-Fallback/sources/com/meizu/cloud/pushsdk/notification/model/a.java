package com.meizu.cloud.pushsdk.notification.model;

public class a implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.notification.model.a> CREATOR = null;
    private int a;
    private java.lang.String b;


    static {
            com.meizu.cloud.pushsdk.notification.model.a$1 r0 = new com.meizu.cloud.pushsdk.notification.model.a$1
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.a.CREATOR = r0
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    protected a(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            int r0 = r2.readInt()
            r1.a = r0
            java.lang.String r2 = r2.readString()
            r1.b = r2
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.a a(com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            java.lang.String r0 = "NotifyOption"
            java.lang.String r1 = r4.getNotificationMessage()     // Catch: java.lang.Exception -> L2e
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L2e
            if (r1 != 0) goto L2c
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = r4.getNotificationMessage()     // Catch: java.lang.Exception -> L2e
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "data"
            org.json.JSONObject r1 = r1.getJSONObject(r2)     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "extra"
            org.json.JSONObject r1 = r1.getJSONObject(r2)     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "no"
            org.json.JSONObject r1 = r1.getJSONObject(r2)     // Catch: java.lang.Exception -> L2e
            com.meizu.cloud.pushsdk.notification.model.a r4 = a(r1)     // Catch: java.lang.Exception -> L2e
            goto L54
        L2c:
            r4 = 0
            goto L54
        L2e:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "parse flyme NotifyOption setting error "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = " so get from notificationMessage"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r1)
            java.lang.String r4 = r4.getNotificationMessage()
            com.meizu.cloud.pushsdk.notification.model.a r4 = c(r4)
        L54:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "current notify option is "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            return r4
    }

    public static com.meizu.cloud.pushsdk.notification.model.a a(org.json.JSONObject r5) {
            java.lang.String r0 = "nk"
            java.lang.String r1 = "ni"
            com.meizu.cloud.pushsdk.notification.model.a r2 = new com.meizu.cloud.pushsdk.notification.model.a
            r2.<init>()
            java.lang.String r3 = "NotifyOption"
            if (r5 == 0) goto L3f
            boolean r4 = r5.isNull(r1)     // Catch: org.json.JSONException -> L28
            if (r4 != 0) goto L1a
            int r1 = r5.getInt(r1)     // Catch: org.json.JSONException -> L28
            r2.a(r1)     // Catch: org.json.JSONException -> L28
        L1a:
            boolean r1 = r5.isNull(r0)     // Catch: org.json.JSONException -> L28
            if (r1 != 0) goto L44
            java.lang.String r5 = r5.getString(r0)     // Catch: org.json.JSONException -> L28
            r2.a(r5)     // Catch: org.json.JSONException -> L28
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
            java.lang.String r5 = "no such tag NotifyOption"
        L41:
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r5)
        L44:
            return r2
    }

    public static int b(com.meizu.cloud.pushsdk.handler.MessageV3 r0) {
            com.meizu.cloud.pushsdk.notification.model.a r0 = a(r0)
            if (r0 == 0) goto Lb
            int r0 = r0.a()
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    public static com.meizu.cloud.pushsdk.notification.model.a b(java.lang.String r2) {
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
            java.lang.String r0 = "NotifyOption"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
        L27:
            r0 = 0
        L28:
            com.meizu.cloud.pushsdk.notification.model.a r2 = a(r0)
            return r2
    }

    private static com.meizu.cloud.pushsdk.notification.model.a c(java.lang.String r3) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L18
            if (r1 != 0) goto L33
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L18
            r1.<init>(r3)     // Catch: org.json.JSONException -> L18
            java.lang.String r3 = "no"
            java.lang.String r3 = r1.getString(r3)     // Catch: org.json.JSONException -> L18
            com.meizu.cloud.pushsdk.notification.model.a r3 = b(r3)     // Catch: org.json.JSONException -> L18
            r0 = r3
            goto L33
        L18:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "parse notificationMessage error "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "NotifyOption"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r3)
        L33:
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NotifyOption{notifyId="
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ", notifyKey='"
            r0.append(r1)
            java.lang.String r1 = r2.b
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
            int r2 = r0.a
            r1.writeInt(r2)
            java.lang.String r2 = r0.b
            r1.writeString(r2)
            return
    }
}
