package com.meizu.cloud.pushsdk.handler.a.c;

public class a implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.handler.a.c.a> CREATOR = null;
    private int a;
    private int b;
    private int c;


    static {
            com.meizu.cloud.pushsdk.handler.a.c.a$1 r0 = new com.meizu.cloud.pushsdk.handler.a.c.a$1
            r0.<init>()
            com.meizu.cloud.pushsdk.handler.a.c.a.CREATOR = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    protected a(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            int r0 = r2.readInt()
            r1.a = r0
            int r0 = r2.readInt()
            r1.b = r0
            int r2 = r2.readInt()
            r1.c = r2
            return
    }

    public static com.meizu.cloud.pushsdk.handler.a.c.a a(org.json.JSONObject r6) {
            java.lang.String r0 = "cacheNum"
            java.lang.String r1 = "cached"
            java.lang.String r2 = "pushType"
            com.meizu.cloud.pushsdk.handler.a.c.a r3 = new com.meizu.cloud.pushsdk.handler.a.c.a
            r3.<init>()
            java.lang.String r4 = "ctl"
            if (r6 == 0) goto L4e
            boolean r5 = r6.isNull(r2)     // Catch: org.json.JSONException -> L37
            if (r5 != 0) goto L1c
            int r2 = r6.getInt(r2)     // Catch: org.json.JSONException -> L37
            r3.a(r2)     // Catch: org.json.JSONException -> L37
        L1c:
            boolean r2 = r6.isNull(r1)     // Catch: org.json.JSONException -> L37
            if (r2 != 0) goto L29
            int r1 = r6.getInt(r1)     // Catch: org.json.JSONException -> L37
            r3.b(r1)     // Catch: org.json.JSONException -> L37
        L29:
            boolean r1 = r6.isNull(r0)     // Catch: org.json.JSONException -> L37
            if (r1 != 0) goto L53
            int r6 = r6.getInt(r0)     // Catch: org.json.JSONException -> L37
            r3.c(r6)     // Catch: org.json.JSONException -> L37
            goto L53
        L37:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " parse control message error "
            r0.append(r1)
            java.lang.String r6 = r6.getMessage()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            goto L50
        L4e:
            java.lang.String r6 = "no control message can parse "
        L50:
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r6)
        L53:
            return r3
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

    public void b(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void c(int r1) {
            r0 = this;
            r0.c = r1
            return
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
            java.lang.String r1 = "Control{pushType="
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ", cached="
            r0.append(r1)
            int r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ", cacheNum="
            r0.append(r1)
            int r1 = r2.c
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
            int r2 = r0.b
            r1.writeInt(r2)
            int r2 = r0.c
            r1.writeInt(r2)
            return
    }
}
