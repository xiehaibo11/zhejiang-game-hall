package com.xiaomi.push;

public class ba implements com.xiaomi.push.au {
    private static volatile com.xiaomi.push.ba a;
    private int a;
    private com.xiaomi.push.au a;

    private ba(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.xiaomi.push.au r2 = com.xiaomi.push.az.a(r2)
            r1.a = r2
            int r2 = com.xiaomi.push.az.a
            r1.a = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "create id manager is: "
            r2.append(r0)
            int r0 = r1.a
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return
    }

    public static com.xiaomi.push.ba a(android.content.Context r2) {
            com.xiaomi.push.ba r0 = com.xiaomi.push.ba.a
            if (r0 != 0) goto L1b
            java.lang.Class<com.xiaomi.push.ba> r0 = com.xiaomi.push.ba.class
            monitor-enter(r0)
            com.xiaomi.push.ba r1 = com.xiaomi.push.ba.a     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.xiaomi.push.ba r1 = new com.xiaomi.push.ba     // Catch: java.lang.Throwable -> L18
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.xiaomi.push.ba.a = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r2
        L1b:
            com.xiaomi.push.ba r2 = com.xiaomi.push.ba.a
            return r2
    }

    private java.lang.String a(java.lang.String r1) {
            r0 = this;
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            return r1
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            com.xiaomi.push.au r0 = r1.a
            java.lang.String r0 = r0.a()
            java.lang.String r0 = r1.a(r0)
            return r0
    }

    public void a() {
            r0 = this;
            return
    }

    public void a(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r2.b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L12
            java.lang.String r1 = "udid"
            r3.put(r1, r0)
        L12:
            java.lang.String r0 = r2.a()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L21
            java.lang.String r1 = "oaid"
            r3.put(r1, r0)
        L21:
            java.lang.String r0 = r2.c()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L30
            java.lang.String r1 = "vaid"
            r3.put(r1, r0)
        L30:
            java.lang.String r0 = r2.d()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3f
            java.lang.String r1 = "aaid"
            r3.put(r1, r0)
        L3f:
            int r0 = r2.a
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "oaid_type"
            r3.put(r1, r0)
            return
    }

    @Override
    public boolean a() {
            r1 = this;
            com.xiaomi.push.au r0 = r1.a
            boolean r0 = r0.a()
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            r0 = 0
            return r0
    }
}
