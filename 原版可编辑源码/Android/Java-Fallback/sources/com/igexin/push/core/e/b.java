package com.igexin.push.core.e;

public class b {
    private static com.igexin.push.core.e.b b;
    private java.util.Map<java.lang.Long, com.igexin.push.core.e.a> a;

    private b() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public static com.igexin.push.core.e.b a() {
            com.igexin.push.core.e.b r0 = com.igexin.push.core.e.b.b
            if (r0 != 0) goto Lb
            com.igexin.push.core.e.b r0 = new com.igexin.push.core.e.b
            r0.<init>()
            com.igexin.push.core.e.b.b = r0
        Lb:
            com.igexin.push.core.e.b r0 = com.igexin.push.core.e.b.b
            return r0
    }

    private void d(com.igexin.push.core.e.a r3) {
            r2 = this;
            if (r3 == 0) goto Lb
            java.util.Map<java.lang.Long, com.igexin.push.core.e.a> r0 = r2.a
            java.lang.Long r1 = r3.a()
            r0.put(r1, r3)
        Lb:
            return
    }

    public com.igexin.push.core.e.a a(java.lang.Long r2) {
            r1 = this;
            java.util.Map<java.lang.Long, com.igexin.push.core.e.a> r0 = r1.a
            java.lang.Object r2 = r0.get(r2)
            com.igexin.push.core.e.a r2 = (com.igexin.push.core.e.a) r2
            return r2
    }

    public void a(com.igexin.push.core.e.a r4) {
            r3 = this;
            if (r4 == 0) goto L21
            r3.d(r4)
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.Class<com.igexin.sdk.PushActivity> r2 = com.igexin.sdk.PushActivity.class
            r0.<init>(r1, r2)
            java.lang.Long r4 = r4.a()
            java.lang.String r1 = "activityid"
            r0.putExtra(r1, r4)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r4)
            android.content.Context r4 = com.igexin.push.core.d.g
            r4.startActivity(r0)
        L21:
            return
    }

    public void b(com.igexin.push.core.e.a r1) {
            r0 = this;
            if (r1 == 0) goto L8
            r1.i()
            r0.c(r1)
        L8:
            return
    }

    public void c(com.igexin.push.core.e.a r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.util.Map<java.lang.Long, com.igexin.push.core.e.a> r0 = r1.a
            java.lang.Long r2 = r2.a()
            r0.remove(r2)
        Lb:
            return
    }
}
