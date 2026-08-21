package com.mbridge.msdk.foundation.same.net.g;

public abstract class c extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.g.c> r0 = com.mbridge.msdk.foundation.same.net.g.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.g.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r4) {
            r3 = this;
            T r0 = r4.a
            if (r0 != 0) goto La
            java.lang.String r4 = "response result is null"
            r3.a(r4)
            return
        La:
            T r0 = r4.a
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            r1 = -9999(0xffffffffffffd8f1, float:NaN)
            java.lang.String r2 = "status"
            int r0 = r0.optInt(r2, r1)
            if (r0 != r1) goto L20
            T r4 = r4.a
            org.json.JSONObject r4 = (org.json.JSONObject) r4
            r3.a(r4)
            return
        L20:
            r1 = 1
            if (r0 == r1) goto L3e
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 != r1) goto L28
            goto L3e
        L28:
            T r4 = r4.a
            org.json.JSONObject r4 = (org.json.JSONObject) r4
            java.lang.String r0 = "msg"
            java.lang.String r4 = r4.optString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L3a
            java.lang.String r4 = "error message is null"
        L3a:
            r3.a(r4)
            return
        L3e:
            T r4 = r4.a
            org.json.JSONObject r4 = (org.json.JSONObject) r4
            java.lang.String r0 = "data"
            org.json.JSONObject r4 = r4.optJSONObject(r0)
            r3.a(r4)
            return
    }

    public abstract void a(java.lang.String r1);

    public abstract void a(org.json.JSONObject r1);

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.c.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "errorCode = "
            r1.append(r2)
            int r2 = r4.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.f.a.a(r4)
            r3.a(r4)
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r3) {
            r2 = this;
            if (r3 != 0) goto L8
            java.lang.String r3 = "response is null"
            r2.a(r3)
            return
        L8:
            com.mbridge.msdk.foundation.same.net.e.c r0 = r3.c
            if (r0 != 0) goto L10
            r2.a(r3)
            goto L24
        L10:
            com.mbridge.msdk.foundation.same.net.e.c r0 = r3.c
            int r0 = r0.a
            r1 = 204(0xcc, float:2.86E-43)
            if (r0 != r1) goto L21
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            r2.a(r3)
            goto L24
        L21:
            r2.a(r3)
        L24:
            return
    }
}
