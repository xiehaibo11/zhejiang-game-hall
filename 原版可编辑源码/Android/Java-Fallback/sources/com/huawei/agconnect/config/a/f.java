package com.huawei.agconnect.config.a;

class f implements com.huawei.agconnect.config.a.d {
    private final org.json.JSONObject a;

    f(java.io.InputStream r1) {
            r0 = this;
            r0.<init>()
            org.json.JSONObject r1 = r0.a(r1)
            r0.a = r1
            return
    }

    private org.json.JSONObject a(java.io.InputStream r4) {
            r3 = this;
            java.lang.String r0 = "InputStreamReader"
            if (r4 == 0) goto L18
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10 java.io.IOException -> L13
            java.lang.String r2 = "UTF-8"
            java.lang.String r4 = com.huawei.agconnect.config.a.j.a(r4, r2)     // Catch: org.json.JSONException -> L10 java.io.IOException -> L13
            r1.<init>(r4)     // Catch: org.json.JSONException -> L10 java.io.IOException -> L13
            return r1
        L10:
            java.lang.String r4 = "JSONException when reading the 'Config' from InputStream."
            goto L15
        L13:
            java.lang.String r4 = "IOException when reading the 'Config' from InputStream."
        L15:
            android.util.Log.e(r0, r4)
        L18:
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            return r4
    }

    @Override
    public java.lang.String a(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "/"
            boolean r1 = r6.endsWith(r0)
            if (r1 == 0) goto L9
            return r7
        L9:
            java.lang.String[] r0 = r6.split(r0)
            org.json.JSONObject r1 = r5.a     // Catch: org.json.JSONException -> L2c
            r2 = 1
            r3 = r2
        L11:
            int r4 = r0.length     // Catch: org.json.JSONException -> L2c
            if (r3 >= r4) goto L42
            int r4 = r0.length     // Catch: org.json.JSONException -> L2c
            int r4 = r4 - r2
            if (r3 != r4) goto L23
            r0 = r0[r3]     // Catch: org.json.JSONException -> L2c
            java.lang.Object r0 = r1.get(r0)     // Catch: org.json.JSONException -> L2c
            java.lang.String r6 = r0.toString()     // Catch: org.json.JSONException -> L2c
            return r6
        L23:
            r4 = r0[r3]     // Catch: org.json.JSONException -> L2c
            org.json.JSONObject r1 = r1.getJSONObject(r4)     // Catch: org.json.JSONException -> L2c
            int r3 = r3 + 1
            goto L11
        L2c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "JSONException when reading 'path': "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.String r0 = "InputStreamReader"
            android.util.Log.w(r0, r6)
        L42:
            return r7
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "InputStreamReader{config="
            r0.append(r1)
            org.json.JSONObject r1 = r2.a
            java.lang.String r1 = r1.toString()
            int r1 = r1.hashCode()
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
