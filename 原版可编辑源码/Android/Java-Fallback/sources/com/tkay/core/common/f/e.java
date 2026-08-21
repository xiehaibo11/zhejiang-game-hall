package com.tkay.core.common.f;

public final class e extends com.tkay.core.common.f.p {
    public int a;
    public com.tkay.core.common.f.ai b;
    public long c;

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final org.json.JSONObject a() {
            r4 = this;
            com.tkay.core.common.f.ai r0 = r4.b
            int r1 = r4.a
            org.json.JSONObject r0 = r0.A(r1)
            if (r0 == 0) goto L16
            java.lang.String r1 = "sdk_time"
            long r2 = r4.c     // Catch: java.lang.Exception -> L12
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L12
            goto L16
        L12:
            r1 = move-exception
            r1.printStackTrace()
        L16:
            return r0
    }
}
