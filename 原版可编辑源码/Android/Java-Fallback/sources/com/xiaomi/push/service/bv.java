package com.xiaomi.push.service;

public class bv {
    private static com.xiaomi.push.service.bv a;
    private static java.lang.String a;
    private com.xiaomi.push.ao.b a;
    private com.xiaomi.push.dw.a a;
    private java.util.List<com.xiaomi.push.service.bv.a> a;

    public abstract class a {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public void a(com.xiaomi.push.dw.a r1) {
                r0 = this;
                return
        }

        public void a(com.xiaomi.push.dx.b r1) {
                r0 = this;
                return
        }
    }

    static {
            com.xiaomi.push.service.bv r0 = new com.xiaomi.push.service.bv
            r0.<init>()
            com.xiaomi.push.service.bv.a = r0
            return
    }

    private bv() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            return
    }

    static com.xiaomi.push.ao.b a(com.xiaomi.push.service.bv r0, com.xiaomi.push.ao.b r1) {
            r0.a = r1
            return r1
    }

    static com.xiaomi.push.dw.a a(com.xiaomi.push.service.bv r0) {
            com.xiaomi.push.dw$a r0 = r0.a
            return r0
    }

    static com.xiaomi.push.dw.a a(com.xiaomi.push.service.bv r0, com.xiaomi.push.dw.a r1) {
            r0.a = r1
            return r1
    }

    public static com.xiaomi.push.service.bv a() {
            com.xiaomi.push.service.bv r0 = com.xiaomi.push.service.bv.a
            return r0
    }

    public static synchronized java.lang.String a() {
            java.lang.Class<com.xiaomi.push.service.bv> r0 = com.xiaomi.push.service.bv.class
            monitor-enter(r0)
            java.lang.String r1 = com.xiaomi.push.service.bv.a     // Catch: java.lang.Throwable -> L3c
            if (r1 != 0) goto L38
            android.content.Context r1 = com.xiaomi.push.v.a()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = "XMPushServiceConfig"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = "DeviceUUID"
            r4 = 0
            java.lang.String r2 = r1.getString(r2, r4)     // Catch: java.lang.Throwable -> L3c
            com.xiaomi.push.service.bv.a = r2     // Catch: java.lang.Throwable -> L3c
            if (r2 != 0) goto L38
            android.content.Context r2 = com.xiaomi.push.v.a()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = com.xiaomi.push.j.a(r2, r3)     // Catch: java.lang.Throwable -> L3c
            com.xiaomi.push.service.bv.a = r2     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L38
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = "DeviceUUID"
            java.lang.String r3 = com.xiaomi.push.service.bv.a     // Catch: java.lang.Throwable -> L3c
            android.content.SharedPreferences$Editor r1 = r1.putString(r2, r3)     // Catch: java.lang.Throwable -> L3c
            r1.commit()     // Catch: java.lang.Throwable -> L3c
        L38:
            java.lang.String r1 = com.xiaomi.push.service.bv.a     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r0)
            return r1
        L3c:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static java.util.List a(com.xiaomi.push.service.bv r0) {
            java.util.List<com.xiaomi.push.service.bv$a> r0 = r0.a
            return r0
    }

    static void a(com.xiaomi.push.service.bv r0) {
            r0.e()
            return
    }

    private void b() {
            r1 = this;
            com.xiaomi.push.dw$a r0 = r1.a
            if (r0 != 0) goto L7
            r1.d()
        L7:
            return
    }

    private void c() {
            r1 = this;
            com.xiaomi.push.ao$b r0 = r1.a
            if (r0 == 0) goto L5
            return
        L5:
            com.xiaomi.push.service.bw r0 = new com.xiaomi.push.service.bw
            r0.<init>(r1)
            r1.a = r0
            com.xiaomi.push.gz.a(r0)
            return
    }

    private void d() {
            r4 = this;
            r0 = 0
            android.content.Context r1 = com.xiaomi.push.v.a()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L27
            java.lang.String r2 = "XMCloudCfg"
            java.io.FileInputStream r1 = r1.openFileInput(r2)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L27
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L27
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L27
            com.xiaomi.push.b r0 = com.xiaomi.push.b.a(r2)     // Catch: java.lang.Exception -> L21 java.lang.Throwable -> L4f
            com.xiaomi.push.dw$a r0 = com.xiaomi.push.dw.a.b(r0)     // Catch: java.lang.Exception -> L21 java.lang.Throwable -> L4f
            r4.a = r0     // Catch: java.lang.Exception -> L21 java.lang.Throwable -> L4f
            r2.close()     // Catch: java.lang.Exception -> L21 java.lang.Throwable -> L4f
        L1d:
            com.xiaomi.push.ab.a(r2)
            goto L43
        L21:
            r0 = move-exception
            goto L2a
        L23:
            r1 = move-exception
            r2 = r0
            r0 = r1
            goto L50
        L27:
            r1 = move-exception
            r2 = r0
            r0 = r1
        L2a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4f
            r1.<init>()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "load config failure: "
            r1.append(r3)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L4f
            r1.append(r0)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L4f
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L4f
            goto L1d
        L43:
            com.xiaomi.push.dw$a r0 = r4.a
            if (r0 != 0) goto L4e
            com.xiaomi.push.dw$a r0 = new com.xiaomi.push.dw$a
            r0.<init>()
            r4.a = r0
        L4e:
            return
        L4f:
            r0 = move-exception
        L50:
            com.xiaomi.push.ab.a(r2)
            throw r0
    }

    private void e() {
            r3 = this;
            com.xiaomi.push.dw$a r0 = r3.a     // Catch: java.lang.Exception -> L24
            if (r0 == 0) goto L3d
            android.content.Context r0 = com.xiaomi.push.v.a()     // Catch: java.lang.Exception -> L24
            java.lang.String r1 = "XMCloudCfg"
            r2 = 0
            java.io.FileOutputStream r0 = r0.openFileOutput(r1, r2)     // Catch: java.lang.Exception -> L24
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream     // Catch: java.lang.Exception -> L24
            r1.<init>(r0)     // Catch: java.lang.Exception -> L24
            com.xiaomi.push.c r0 = com.xiaomi.push.c.a(r1)     // Catch: java.lang.Exception -> L24
            com.xiaomi.push.dw$a r2 = r3.a     // Catch: java.lang.Exception -> L24
            r2.a(r0)     // Catch: java.lang.Exception -> L24
            r0.a()     // Catch: java.lang.Exception -> L24
            r1.close()     // Catch: java.lang.Exception -> L24
            goto L3d
        L24:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "save config failure: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L3d:
            return
    }

    int a() {
            r1 = this;
            r1.b()
            com.xiaomi.push.dw$a r0 = r1.a
            if (r0 == 0) goto Lc
            int r0 = r0.c()
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public com.xiaomi.push.dw.a a() {
            r1 = this;
            r1.b()
            com.xiaomi.push.dw$a r0 = r1.a
            return r0
    }

    synchronized void a() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.xiaomi.push.service.bv$a> r0 = r1.a     // Catch: java.lang.Throwable -> L8
            r0.clear()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    void a(com.xiaomi.push.dx.b r5) {
            r4 = this;
            boolean r0 = r5.d()
            if (r0 == 0) goto L13
            int r0 = r5.d()
            int r1 = r4.a()
            if (r0 <= r1) goto L13
            r4.c()
        L13:
            monitor-enter(r4)
            java.util.List<com.xiaomi.push.service.bv$a> r0 = r4.a     // Catch: java.lang.Throwable -> L32
            java.util.List<com.xiaomi.push.service.bv$a> r1 = r4.a     // Catch: java.lang.Throwable -> L32
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L32
            com.xiaomi.push.service.bv$a[] r1 = new com.xiaomi.push.service.bv.a[r1]     // Catch: java.lang.Throwable -> L32
            java.lang.Object[] r0 = r0.toArray(r1)     // Catch: java.lang.Throwable -> L32
            com.xiaomi.push.service.bv$a[] r0 = (com.xiaomi.push.service.bv.a[]) r0     // Catch: java.lang.Throwable -> L32
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L32
            int r1 = r0.length
            r2 = 0
        L27:
            if (r2 >= r1) goto L31
            r3 = r0[r2]
            r3.a(r5)
            int r2 = r2 + 1
            goto L27
        L31:
            return
        L32:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L32
            throw r5
    }

    public synchronized void a(com.xiaomi.push.service.bv.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.xiaomi.push.service.bv$a> r0 = r1.a     // Catch: java.lang.Throwable -> L8
            r0.add(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
