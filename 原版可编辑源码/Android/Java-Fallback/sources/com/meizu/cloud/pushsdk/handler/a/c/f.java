package com.meizu.cloud.pushsdk.handler.a.c;

public class f implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.handler.a.c.f> CREATOR = null;
    private java.lang.String a;
    private java.lang.String b;
    private boolean c;
    private java.lang.String d;
    private java.lang.String e;


    static {
            com.meizu.cloud.pushsdk.handler.a.c.f$1 r0 = new com.meizu.cloud.pushsdk.handler.a.c.f$1
            r0.<init>()
            com.meizu.cloud.pushsdk.handler.a.c.f.CREATOR = r0
            return
    }

    public f() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            return
    }

    protected f(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            java.lang.String r1 = r3.readString()
            r2.a = r1
            java.lang.String r1 = r3.readString()
            r2.b = r1
            byte r1 = r3.readByte()
            if (r1 == 0) goto L19
            r0 = 1
        L19:
            r2.c = r0
            java.lang.String r0 = r3.readString()
            r2.d = r0
            java.lang.String r3 = r3.readString()
            r2.e = r3
            return
    }

    public static com.meizu.cloud.pushsdk.handler.a.c.f a(org.json.JSONObject r6) {
            java.lang.String r0 = "pushExtra"
            java.lang.String r1 = "time"
            java.lang.String r2 = "taskId"
            com.meizu.cloud.pushsdk.handler.a.c.f r3 = new com.meizu.cloud.pushsdk.handler.a.c.f
            r3.<init>()
            java.lang.String r4 = "statics"
            if (r6 == 0) goto L53
            boolean r5 = r6.isNull(r2)     // Catch: org.json.JSONException -> L3c
            if (r5 != 0) goto L1c
            java.lang.String r2 = r6.getString(r2)     // Catch: org.json.JSONException -> L3c
            r3.a(r2)     // Catch: org.json.JSONException -> L3c
        L1c:
            boolean r2 = r6.isNull(r1)     // Catch: org.json.JSONException -> L3c
            if (r2 != 0) goto L29
            java.lang.String r1 = r6.getString(r1)     // Catch: org.json.JSONException -> L3c
            r3.b(r1)     // Catch: org.json.JSONException -> L3c
        L29:
            boolean r1 = r6.isNull(r0)     // Catch: org.json.JSONException -> L3c
            if (r1 != 0) goto L58
            int r6 = r6.getInt(r0)     // Catch: org.json.JSONException -> L3c
            if (r6 != 0) goto L37
            r6 = 1
            goto L38
        L37:
            r6 = 0
        L38:
            r3.a(r6)     // Catch: org.json.JSONException -> L3c
            goto L58
        L3c:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " parse statics message error "
            r0.append(r1)
            java.lang.String r6 = r6.getMessage()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            goto L55
        L53:
            java.lang.String r6 = "no control statics can parse "
        L55:
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r6)
        L58:
            return r3
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public boolean c() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Statics{taskId='"
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", time='"
            r0.append(r2)
            java.lang.String r2 = r3.b
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", pushExtra="
            r0.append(r2)
            boolean r2 = r3.c
            r0.append(r2)
            java.lang.String r2 = ", deviceId='"
            r0.append(r2)
            java.lang.String r2 = r3.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", seqId='"
            r0.append(r2)
            java.lang.String r2 = r3.e
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
            java.lang.String r2 = r0.a
            r1.writeString(r2)
            java.lang.String r2 = r0.b
            r1.writeString(r2)
            boolean r2 = r0.c
            byte r2 = (byte) r2
            r1.writeByte(r2)
            java.lang.String r2 = r0.d
            r1.writeString(r2)
            java.lang.String r2 = r0.e
            r1.writeString(r2)
            return
    }
}
