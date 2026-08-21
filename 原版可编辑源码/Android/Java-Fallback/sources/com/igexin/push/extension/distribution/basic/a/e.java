package com.igexin.push.extension.distribution.basic.a;

public class e implements com.igexin.push.core.a.a.a {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.igexin.push.core.a a(com.igexin.push.core.bean.PushTaskBean r1, com.igexin.push.core.bean.BaseAction r2) {
            r0 = this;
            com.igexin.push.core.a r1 = com.igexin.push.core.a.a
            return r1
    }

    @Override
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r1) {
            r0 = this;
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L9
            com.igexin.push.extension.distribution.basic.b.b r1 = com.igexin.push.extension.distribution.basic.b.b.a(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = 0
            return r1
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r3, com.igexin.push.core.bean.BaseAction r4) {
            r2 = this;
            com.igexin.push.extension.distribution.basic.b.b r4 = (com.igexin.push.extension.distribution.basic.b.b) r4
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.igexin.push.extension.distribution.basic.a.f r1 = new com.igexin.push.extension.distribution.basic.a.f
            r1.<init>(r2, r4, r3)
            long r3 = r4.a()
            r0.postDelayed(r1, r3)
            r3 = 1
            return r3
    }
}
