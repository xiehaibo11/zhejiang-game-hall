package com.meizu.cloud.pushsdk.handler.a.c;

public class g implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.handler.a.c.g> CREATOR = null;
    private int a;
    private boolean b;
    private java.util.List<java.lang.String> c;
    private com.meizu.cloud.pushsdk.handler.a.c.b d;
    private java.lang.String e;


    static {
            com.meizu.cloud.pushsdk.handler.a.c.g$1 r0 = new com.meizu.cloud.pushsdk.handler.a.c.g$1
            r0.<init>()
            com.meizu.cloud.pushsdk.handler.a.c.g.CREATOR = r0
            return
    }

    protected g(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            int r0 = r2.readInt()
            r1.a = r0
            byte r0 = r2.readByte()
            if (r0 == 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            r1.b = r0
            java.util.ArrayList r0 = r2.createStringArrayList()
            r1.c = r0
            java.lang.Class<com.meizu.cloud.pushsdk.handler.a.c.b> r0 = com.meizu.cloud.pushsdk.handler.a.c.b.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = (com.meizu.cloud.pushsdk.handler.a.c.b) r0
            r1.d = r0
            java.lang.String r2 = r2.readString()
            r1.e = r2
            return
    }

    public g(java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            r4 = this;
            java.lang.String r0 = "upload_files"
            java.lang.String r1 = "wifi_upload"
            java.lang.String r2 = "max_size"
            r4.<init>()
            r4.e = r5
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L4c
            r3.<init>(r5)     // Catch: org.json.JSONException -> L4c
            boolean r5 = r3.isNull(r2)     // Catch: org.json.JSONException -> L4c
            if (r5 != 0) goto L1c
            int r5 = r3.getInt(r2)     // Catch: org.json.JSONException -> L4c
            r4.a = r5     // Catch: org.json.JSONException -> L4c
        L1c:
            boolean r5 = r3.isNull(r1)     // Catch: org.json.JSONException -> L4c
            if (r5 != 0) goto L28
            boolean r5 = r3.getBoolean(r1)     // Catch: org.json.JSONException -> L4c
            r4.b = r5     // Catch: org.json.JSONException -> L4c
        L28:
            boolean r5 = r3.isNull(r0)     // Catch: org.json.JSONException -> L4c
            if (r5 != 0) goto L67
            org.json.JSONArray r5 = r3.getJSONArray(r0)     // Catch: org.json.JSONException -> L4c
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: org.json.JSONException -> L4c
            r0.<init>()     // Catch: org.json.JSONException -> L4c
            r4.c = r0     // Catch: org.json.JSONException -> L4c
            r0 = 0
        L3a:
            int r1 = r5.length()     // Catch: org.json.JSONException -> L4c
            if (r0 >= r1) goto L67
            java.util.List<java.lang.String> r1 = r4.c     // Catch: org.json.JSONException -> L4c
            java.lang.String r2 = r5.getString(r0)     // Catch: org.json.JSONException -> L4c
            r1.add(r2)     // Catch: org.json.JSONException -> L4c
            int r0 = r0 + 1
            goto L3a
        L4c:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse upload message error "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "UploadLogMessage"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r5)
        L67:
            com.meizu.cloud.pushsdk.handler.a.c.b r5 = new com.meizu.cloud.pushsdk.handler.a.c.b
            r5.<init>(r6, r7, r8)
            r4.d = r5
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public boolean b() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public java.util.List<java.lang.String> c() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.c
            return r0
    }

    public com.meizu.cloud.pushsdk.handler.a.c.b d() {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = r1.d
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
            java.lang.String r1 = "UploadLogMessage{maxSize="
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ", wifiUpload="
            r0.append(r1)
            boolean r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ", fileList="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r2.c
            r0.append(r1)
            java.lang.String r1 = ", controlMessage="
            r0.append(r1)
            com.meizu.cloud.pushsdk.handler.a.c.b r1 = r2.d
            r0.append(r1)
            java.lang.String r1 = ", uploadMessage='"
            r0.append(r1)
            java.lang.String r1 = r2.e
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            int r0 = r1.a
            r2.writeInt(r0)
            boolean r0 = r1.b
            byte r0 = (byte) r0
            r2.writeByte(r0)
            java.util.List<java.lang.String> r0 = r1.c
            r2.writeStringList(r0)
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = r1.d
            r2.writeParcelable(r0, r3)
            java.lang.String r3 = r1.e
            r2.writeString(r3)
            return
    }
}
