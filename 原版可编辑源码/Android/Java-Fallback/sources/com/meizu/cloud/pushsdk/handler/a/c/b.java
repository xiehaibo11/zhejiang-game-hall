package com.meizu.cloud.pushsdk.handler.a.c;

public class b implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.handler.a.c.b> CREATOR = null;
    private java.lang.String a;
    private com.meizu.cloud.pushsdk.handler.a.c.a b;
    private com.meizu.cloud.pushsdk.handler.a.c.f c;


    static {
            com.meizu.cloud.pushsdk.handler.a.c.b$1 r0 = new com.meizu.cloud.pushsdk.handler.a.c.b$1
            r0.<init>()
            com.meizu.cloud.pushsdk.handler.a.c.b.CREATOR = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    protected b(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.readString()
            r1.a = r0
            java.lang.Class<com.meizu.cloud.pushsdk.handler.a.c.a> r0 = com.meizu.cloud.pushsdk.handler.a.c.a.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.handler.a.c.a r0 = (com.meizu.cloud.pushsdk.handler.a.c.a) r0
            r1.b = r0
            java.lang.Class<com.meizu.cloud.pushsdk.handler.a.c.f> r0 = com.meizu.cloud.pushsdk.handler.a.c.f.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r2 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.handler.a.c.f r2 = (com.meizu.cloud.pushsdk.handler.a.c.f) r2
            r1.c = r2
            return
    }

    public b(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r1.a = r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L5b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L31
            r0.<init>(r2)     // Catch: org.json.JSONException -> L31
            java.lang.String r2 = "ctl"
            org.json.JSONObject r2 = r0.getJSONObject(r2)     // Catch: org.json.JSONException -> L31
            com.meizu.cloud.pushsdk.handler.a.c.a r2 = com.meizu.cloud.pushsdk.handler.a.c.a.a(r2)     // Catch: org.json.JSONException -> L31
            r1.b = r2     // Catch: org.json.JSONException -> L31
            java.lang.String r2 = "statics"
            org.json.JSONObject r2 = r0.getJSONObject(r2)     // Catch: org.json.JSONException -> L31
            com.meizu.cloud.pushsdk.handler.a.c.f r2 = com.meizu.cloud.pushsdk.handler.a.c.f.a(r2)     // Catch: org.json.JSONException -> L31
            r1.c = r2     // Catch: org.json.JSONException -> L31
            r2.c(r3)     // Catch: org.json.JSONException -> L31
            com.meizu.cloud.pushsdk.handler.a.c.f r2 = r1.c     // Catch: org.json.JSONException -> L31
            r2.d(r4)     // Catch: org.json.JSONException -> L31
            goto L69
        L31:
            r2 = move-exception
            com.meizu.cloud.pushsdk.handler.a.c.a r3 = new com.meizu.cloud.pushsdk.handler.a.c.a
            r3.<init>()
            r1.b = r3
            com.meizu.cloud.pushsdk.handler.a.c.f r3 = new com.meizu.cloud.pushsdk.handler.a.c.f
            r3.<init>()
            r1.c = r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "parse control message error "
            r3.append(r4)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "ControlMessage"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
            goto L69
        L5b:
            com.meizu.cloud.pushsdk.handler.a.c.a r2 = new com.meizu.cloud.pushsdk.handler.a.c.a
            r2.<init>()
            r1.b = r2
            com.meizu.cloud.pushsdk.handler.a.c.f r2 = new com.meizu.cloud.pushsdk.handler.a.c.f
            r2.<init>()
            r1.c = r2
        L69:
            return
    }

    public static com.meizu.cloud.pushsdk.handler.a.c.b a(java.lang.String r3) {
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = new com.meizu.cloud.pushsdk.handler.a.c.b
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L25
            r1.<init>(r3)     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = "ctl"
            org.json.JSONObject r3 = r1.getJSONObject(r3)     // Catch: java.lang.Exception -> L25
            com.meizu.cloud.pushsdk.handler.a.c.a r3 = com.meizu.cloud.pushsdk.handler.a.c.a.a(r3)     // Catch: java.lang.Exception -> L25
            r0.a(r3)     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = "statics"
            org.json.JSONObject r3 = r1.getJSONObject(r3)     // Catch: java.lang.Exception -> L25
            com.meizu.cloud.pushsdk.handler.a.c.f r3 = com.meizu.cloud.pushsdk.handler.a.c.f.a(r3)     // Catch: java.lang.Exception -> L25
            r0.a(r3)     // Catch: java.lang.Exception -> L25
            goto L50
        L25:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "parse control message error "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "ControlMessage"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r3)
            com.meizu.cloud.pushsdk.handler.a.c.f r3 = new com.meizu.cloud.pushsdk.handler.a.c.f
            r3.<init>()
            r0.a(r3)
            com.meizu.cloud.pushsdk.handler.a.c.a r3 = new com.meizu.cloud.pushsdk.handler.a.c.a
            r3.<init>()
            r0.a(r3)
        L50:
            return r0
    }

    public com.meizu.cloud.pushsdk.handler.a.c.a a() {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a.c.a r0 = r1.b
            return r0
    }

    public void a(com.meizu.cloud.pushsdk.handler.a.c.a r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void a(com.meizu.cloud.pushsdk.handler.a.c.f r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public com.meizu.cloud.pushsdk.handler.a.c.f b() {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a.c.f r0 = r1.c
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
            java.lang.String r1 = "ControlMessage{controlMessage='"
            r0.append(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", control="
            r0.append(r1)
            com.meizu.cloud.pushsdk.handler.a.c.a r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ", statics="
            r0.append(r1)
            com.meizu.cloud.pushsdk.handler.a.c.f r1 = r2.c
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            java.lang.String r0 = r1.a
            r2.writeString(r0)
            com.meizu.cloud.pushsdk.handler.a.c.a r0 = r1.b
            r2.writeParcelable(r0, r3)
            com.meizu.cloud.pushsdk.handler.a.c.f r0 = r1.c
            r2.writeParcelable(r0, r3)
            return
    }
}
