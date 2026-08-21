package com.mbridge.msdk.rover;

public abstract class f extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void a();

    public abstract void a(java.lang.String r1);

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r2) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r2.a
            r0.append(r2)
            java.lang.String r2 = ""
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.a(r2)
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r1) {
            r0 = this;
            r0.a()
            return
    }
}
