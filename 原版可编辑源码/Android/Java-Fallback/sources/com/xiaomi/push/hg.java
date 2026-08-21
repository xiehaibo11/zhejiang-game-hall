package com.xiaomi.push;

public class hg {
    private static volatile com.xiaomi.push.hg a;
    private final android.content.Context a;
    private java.util.Map<java.lang.String, com.xiaomi.push.hh> a;

    private hg(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            r1.a = r2
            return
    }

    public static com.xiaomi.push.hg a(android.content.Context r2) {
            if (r2 != 0) goto L9
            java.lang.String r2 = "[TinyDataManager]:mContext is null, TinyDataManager.getInstance(Context) failed."
            com.xiaomi.channel.commonutils.logger.b.d(r2)
            r2 = 0
            return r2
        L9:
            com.xiaomi.push.hg r0 = com.xiaomi.push.hg.a
            if (r0 != 0) goto L20
            java.lang.Class<com.xiaomi.push.hg> r0 = com.xiaomi.push.hg.class
            monitor-enter(r0)
            com.xiaomi.push.hg r1 = com.xiaomi.push.hg.a     // Catch: java.lang.Throwable -> L1d
            if (r1 != 0) goto L1b
            com.xiaomi.push.hg r1 = new com.xiaomi.push.hg     // Catch: java.lang.Throwable -> L1d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1d
            com.xiaomi.push.hg.a = r1     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            goto L20
        L1d:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r2
        L20:
            com.xiaomi.push.hg r2 = com.xiaomi.push.hg.a
            return r2
    }

    private boolean a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, long r6, java.lang.String r8) {
            r1 = this;
            com.xiaomi.push.hn r0 = new com.xiaomi.push.hn
            r0.<init>()
            r0.d(r4)
            r0.c(r5)
            r0.a(r6)
            r0.b(r8)
            r4 = 1
            r0.a(r4)
            java.lang.String r4 = "push_sdk_channel"
            r0.a(r4)
            r0.e(r3)
            boolean r2 = r1.a(r0, r2)
            return r2
    }

    com.xiaomi.push.hh a() {
            r2 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.hh> r0 = r2.a
            java.lang.String r1 = "UPLOADER_PUSH_CHANNEL"
            java.lang.Object r0 = r0.get(r1)
            com.xiaomi.push.hh r0 = (com.xiaomi.push.hh) r0
            if (r0 == 0) goto Ld
            return r0
        Ld:
            java.util.Map<java.lang.String, com.xiaomi.push.hh> r0 = r2.a
            java.lang.String r1 = "UPLOADER_HTTP"
            java.lang.Object r0 = r0.get(r1)
            com.xiaomi.push.hh r0 = (com.xiaomi.push.hh) r0
            if (r0 == 0) goto L1a
            return r0
        L1a:
            r0 = 0
            return r0
    }

    java.util.Map<java.lang.String, com.xiaomi.push.hh> a() {
            r1 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.hh> r0 = r1.a
            return r0
    }

    public void a(com.xiaomi.push.hh r2, java.lang.String r3) {
            r1 = this;
            if (r2 != 0) goto L8
            java.lang.String r2 = "[TinyDataManager]: please do not add null mUploader to TinyDataManager."
            com.xiaomi.channel.commonutils.logger.b.d(r2)
            return
        L8:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L14
            java.lang.String r2 = "[TinyDataManager]: can not add a provider from unkown resource."
            com.xiaomi.channel.commonutils.logger.b.d(r2)
            return
        L14:
            java.util.Map r0 = r1.a()
            r0.put(r3, r2)
            return
    }

    public boolean a(com.xiaomi.push.hn r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto Ld
            java.lang.String r3 = "pkgName is null or empty, upload ClientUploadDataItem failed."
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return r1
        Ld:
            boolean r0 = com.xiaomi.push.service.bz.a(r3, r1)
            if (r0 == 0) goto L14
            return r1
        L14:
            java.lang.String r0 = r3.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L25
            java.lang.String r0 = com.xiaomi.push.service.bz.a()
            r3.f(r0)
        L25:
            r3.g(r4)
            android.content.Context r4 = r2.a
            com.xiaomi.push.service.ca.a(r4, r3)
            r3 = 1
            return r3
    }

    public boolean a(java.lang.String r10, java.lang.String r11, long r12, java.lang.String r14) {
            r9 = this;
            android.content.Context r0 = r9.a
            java.lang.String r2 = r0.getPackageName()
            android.content.Context r0 = r9.a
            java.lang.String r3 = r0.getPackageName()
            r1 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r8 = r14
            boolean r10 = r1.a(r2, r3, r4, r5, r6, r8)
            return r10
    }
}
