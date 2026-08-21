package com.meizu.cloud.pushsdk.handler.a.c;

public class h implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.handler.a.c.h> CREATOR = null;
    private com.meizu.cloud.pushsdk.handler.a.c.b a;
    private java.lang.String b;
    private int c;


    static {
            com.meizu.cloud.pushsdk.handler.a.c.h$1 r0 = new com.meizu.cloud.pushsdk.handler.a.c.h$1
            r0.<init>()
            com.meizu.cloud.pushsdk.handler.a.c.h.CREATOR = r0
            return
    }

    protected h(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.meizu.cloud.pushsdk.handler.a.c.b> r0 = com.meizu.cloud.pushsdk.handler.a.c.b.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = (com.meizu.cloud.pushsdk.handler.a.c.b) r0
            r1.a = r0
            java.lang.String r0 = r2.readString()
            r1.b = r0
            int r2 = r2.readInt()
            r1.c = r2
            return
    }

    public h(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            java.lang.String r0 = "notifyId"
            r1.<init>()
            r1.b = r3
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L19
            r3.<init>(r2)     // Catch: org.json.JSONException -> L19
            boolean r2 = r3.isNull(r0)     // Catch: org.json.JSONException -> L19
            if (r2 != 0) goto L34
            int r2 = r3.getInt(r0)     // Catch: org.json.JSONException -> L19
            r1.c = r2     // Catch: org.json.JSONException -> L19
            goto L34
        L19:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "parse WithDrawMessage error "
            r3.append(r0)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "WithDrawMessage"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
        L34:
            com.meizu.cloud.pushsdk.handler.a.c.b r2 = new com.meizu.cloud.pushsdk.handler.a.c.b
            r2.<init>(r4, r5, r6)
            r1.a = r2
            return
    }

    public com.meizu.cloud.pushsdk.handler.a.c.b a() {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = r1.a
            return r0
    }

    public int b() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public java.lang.String c() {
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
            java.lang.String r1 = "WithDrawMessage{controlMessage="
            r0.append(r1)
            com.meizu.cloud.pushsdk.handler.a.c.b r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ", revokePackageName='"
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", notifyId="
            r0.append(r1)
            int r1 = r2.c
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = r1.a
            r2.writeParcelable(r0, r3)
            java.lang.String r3 = r1.b
            r2.writeString(r3)
            int r3 = r1.c
            r2.writeInt(r3)
            return
    }
}
