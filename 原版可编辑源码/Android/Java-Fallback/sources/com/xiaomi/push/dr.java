package com.xiaomi.push;

public class dr {
    private static volatile com.xiaomi.push.dr a;
    private android.content.Context a;
    private com.xiaomi.push.dr.a a;

    public interface a {
        void a();
    }

    private dr(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static int a(int r1) {
            r0 = 60
            int r1 = java.lang.Math.max(r0, r1)
            return r1
    }

    public static com.xiaomi.push.dr a(android.content.Context r2) {
            com.xiaomi.push.dr r0 = com.xiaomi.push.dr.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.dr> r0 = com.xiaomi.push.dr.class
            monitor-enter(r0)
            com.xiaomi.push.dr r1 = com.xiaomi.push.dr.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.dr r1 = new com.xiaomi.push.dr     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.dr.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.dr r2 = com.xiaomi.push.dr.a
            return r2
    }

    static void a(com.xiaomi.push.dr r0) {
            r0.b()
            return
    }

    private void a(com.xiaomi.push.service.ba r3, com.xiaomi.push.al r4, boolean r5) {
            r2 = this;
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.a
            int r0 = r0.a()
            r1 = 1
            boolean r0 = r3.a(r0, r1)
            if (r0 == 0) goto L2e
            com.xiaomi.push.dv r0 = new com.xiaomi.push.dv
            android.content.Context r1 = r2.a
            r0.<init>(r1)
            if (r5 == 0) goto L2b
            com.xiaomi.push.ho r5 = com.xiaomi.push.ho.b
            int r5 = r5.a()
            r1 = 86400(0x15180, float:1.21072E-40)
            int r3 = r3.a(r5, r1)
            int r3 = a(r3)
            r4.a(r0, r3)
            goto L2e
        L2b:
            r4.a(r0)
        L2e:
            return
    }

    private boolean a() {
            r7 = this;
            android.content.Context r0 = r7.a     // Catch: java.lang.Exception -> L29
            boolean r0 = r0 instanceof android.app.Application     // Catch: java.lang.Exception -> L29
            if (r0 == 0) goto Lb
            android.content.Context r0 = r7.a     // Catch: java.lang.Exception -> L29
        L8:
            android.app.Application r0 = (android.app.Application) r0     // Catch: java.lang.Exception -> L29
            goto L12
        Lb:
            android.content.Context r0 = r7.a     // Catch: java.lang.Exception -> L29
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Exception -> L29
            goto L8
        L12:
            com.xiaomi.push.dl r1 = new com.xiaomi.push.dl     // Catch: java.lang.Exception -> L29
            android.content.Context r2 = r7.a     // Catch: java.lang.Exception -> L29
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L29
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 / r5
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L29
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L29
            r0.registerActivityLifecycleCallbacks(r1)     // Catch: java.lang.Exception -> L29
            r0 = 1
            return r0
        L29:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r0 = 0
            return r0
    }

    private void b() {
            r10 = this;
            android.content.Context r0 = r10.a
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r0)
            android.content.Context r1 = r10.a
            com.xiaomi.push.service.ba r1 = com.xiaomi.push.service.ba.a(r1)
            android.content.Context r2 = r10.a
            r3 = 0
            java.lang.String r4 = "mipush_extra"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r4, r3)
            long r4 = java.lang.System.currentTimeMillis()
            java.lang.String r6 = "first_try_ts"
            long r7 = r2.getLong(r6, r4)
            int r9 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r9 != 0) goto L2e
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r2 = r2.putLong(r6, r4)
            r2.commit()
        L2e:
            long r4 = r4 - r7
            long r4 = java.lang.Math.abs(r4)
            r6 = 172800000(0xa4cb800, double:8.53745436E-316)
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 >= 0) goto L3b
            return
        L3b:
            r10.a(r1, r0, r3)
            com.xiaomi.push.ho r2 = com.xiaomi.push.ho.aI
            int r2 = r2.a()
            r4 = 1
            boolean r2 = r1.a(r2, r4)
            if (r2 == 0) goto L66
            com.xiaomi.push.ho r2 = com.xiaomi.push.ho.aJ
            int r2 = r2.a()
            r5 = 86400(0x15180, float:1.21072E-40)
            int r2 = r1.a(r2, r5)
            int r2 = a(r2)
            com.xiaomi.push.du r5 = new com.xiaomi.push.du
            android.content.Context r6 = r10.a
            r5.<init>(r6, r2)
            r0.a(r5, r2, r3)
        L66:
            android.content.Context r2 = r10.a
            boolean r2 = com.xiaomi.push.m.a(r2)
            if (r2 == 0) goto L75
            com.xiaomi.push.dr$a r2 = r10.a
            if (r2 == 0) goto L75
            r2.a()
        L75:
            com.xiaomi.push.ho r2 = com.xiaomi.push.ho.ap
            int r2 = r2.a()
            boolean r2 = r1.a(r2, r3)
            if (r2 == 0) goto L84
            r10.a()
        L84:
            r10.a(r1, r0, r4)
            return
    }

    public void a() {
            r2 = this;
            android.content.Context r0 = r2.a
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r0)
            com.xiaomi.push.ds r1 = new com.xiaomi.push.ds
            r1.<init>(r2)
            r0.a(r1)
            return
    }
}
