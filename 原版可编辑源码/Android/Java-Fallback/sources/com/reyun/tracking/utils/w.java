package com.reyun.tracking.utils;

public class w implements com.reyun.tracking.utils.n {
    private com.reyun.tracking.utils.n a;
    private byte b;
    private java.lang.String c;

    public w(com.reyun.tracking.utils.n r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.c = r2
            byte r1 = com.reyun.tracking.sdk.Tracking.mapApi2Byte(r2)
            r0.b = r1
            return
    }

    @Override
    public void a(int r9, java.lang.Object r10) {
            r8 = this;
            java.lang.String r9 = "UTF-8"
            java.lang.String r0 = "status"
            java.lang.String r1 = "api"
            byte[] r10 = (byte[]) r10
            byte[] r10 = (byte[]) r10
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream
            r2.<init>(r10)
            java.io.DataInputStream r10 = new java.io.DataInputStream
            r10.<init>(r2)
            byte r2 = r10.readByte()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r3 = "Tracking"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r4.<init>()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r5 = "=======> "
            r4.append(r5)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r5 = r8.c     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r4.append(r5)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r5 = ".response.statusCode:"
            r4.append(r5)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r4.append(r2)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            com.reyun.tracking.a.a.d(r3, r4)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            if (r2 != 0) goto Lb9
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r3.<init>()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            byte r4 = r8.b     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            if (r4 == 0) goto Lad
            r5 = 1
            if (r4 == r5) goto L87
            r0 = 13
            if (r4 == r0) goto L54
            com.reyun.tracking.utils.n r9 = r8.a     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
        L4f:
            r9.a(r2, r3)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            goto Lde
        L54:
            short r0 = r10.readShort()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r10.readFully(r0)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r4.<init>(r0, r9)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            short r0 = r10.readShort()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r10.readFully(r0)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r5.<init>(r0, r9)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r9.<init>()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r0 = "dp_url"
            r9.put(r0, r4)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r0 = "dp_path"
            r9.put(r0, r5)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r0 = "info"
            r3.put(r0, r9)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            com.reyun.tracking.utils.n r9 = r8.a     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            goto L4f
        L87:
            byte r9 = r10.readByte()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            org.json.JSONArray r4 = new org.json.JSONArray     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r4.<init>()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r5 = 0
        L91:
            if (r5 >= r9) goto La5
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r6.<init>()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            byte r7 = r10.readByte()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r6.put(r0, r7)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r4.put(r6)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            int r5 = r5 + 1
            goto L91
        La5:
            java.lang.String r9 = "array"
            r3.put(r9, r4)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            com.reyun.tracking.utils.n r9 = r8.a     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            goto L4f
        Lad:
            long r4 = r10.readLong()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r9 = "ts"
            r3.put(r9, r4)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            com.reyun.tracking.utils.n r9 = r8.a     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            goto L4f
        Lb9:
            com.reyun.tracking.utils.n r9 = r8.a     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r3 = ""
            r0.<init>(r3)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r3.<init>()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r3.append(r1)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r4 = r8.c     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r3.append(r4)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r4 = "请求错误，错误码："
            r3.append(r4)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r3.append(r2)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
            r9.a(r0, r2)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le4
        Lde:
            r10.close()     // Catch: java.lang.Exception -> L10b
            goto L10f
        Le2:
            r9 = move-exception
            goto L110
        Le4:
            r9 = move-exception
            com.reyun.tracking.utils.n r0 = r8.a     // Catch: java.lang.Throwable -> Le2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r2.<init>()     // Catch: java.lang.Throwable -> Le2
            r2.append(r1)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r1 = r8.c     // Catch: java.lang.Throwable -> Le2
            r2.append(r1)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r1 = "请求异常"
            r2.append(r1)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r1 = r9.getMessage()     // Catch: java.lang.Throwable -> Le2
            r2.append(r1)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> Le2
            r0.a(r9, r1)     // Catch: java.lang.Throwable -> Le2
            r10.close()     // Catch: java.lang.Exception -> L10b
            goto L10f
        L10b:
            r9 = move-exception
            r9.printStackTrace()
        L10f:
            return
        L110:
            r10.close()     // Catch: java.lang.Exception -> L114
            goto L118
        L114:
            r10 = move-exception
            r10.printStackTrace()
        L118:
            throw r9
    }

    @Override
    public void a(java.lang.Throwable r2, java.lang.String r3) {
            r1 = this;
            com.reyun.tracking.utils.n r0 = r1.a
            r0.a(r2, r3)
            return
    }
}
