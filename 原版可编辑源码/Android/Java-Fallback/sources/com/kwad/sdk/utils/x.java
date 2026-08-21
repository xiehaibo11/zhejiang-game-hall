package com.kwad.sdk.utils;

public final class x {
    private static volatile boolean aGN;
    private static java.util.concurrent.atomic.AtomicInteger aIF;
    private static volatile boolean aIG;






    static {
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.utils.x.aIF = r0
            com.kwad.sdk.utils.x.aGN = r1
            return
    }

    private static int Ig() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            java.lang.String r1 = "Ks_UnionHelper"
            if (r0 != 0) goto L13
            java.lang.String r0 = "sdkConfigProvider == null"
            com.kwad.sdk.core.e.c.w(r1, r0)
            r0 = 0
            return r0
        L13:
            int r0 = r0.xH()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "config mode:"
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.core.e.c.d(r1, r2)
            return r0
    }

    private static void Ih() {
            boolean r0 = com.kwad.sdk.utils.x.aGN
            if (r0 == 0) goto L5
            return
        L5:
            java.util.concurrent.atomic.AtomicInteger r0 = com.kwad.sdk.utils.x.aIF
            int r1 = Ik()
            r0.set(r1)
            r0 = 0
            java.lang.String r1 = "kssdk_kv_mode"
            java.lang.String r2 = "downgrade"
            boolean r0 = com.kwad.sdk.utils.bb.m(r1, r2, r0)
            com.kwad.sdk.utils.x.aIG = r0
            r0 = 1
            com.kwad.sdk.utils.x.aGN = r0
            return
    }

    public static void Ii() {
            boolean r0 = Il()
            if (r0 == 0) goto L7
            return
        L7:
            int r0 = Ig()
            if (r0 != 0) goto Le
            return
        Le:
            com.kwad.sdk.utils.x$3 r0 = new com.kwad.sdk.utils.x$3
            r0.<init>()
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    public static com.kwad.sdk.utils.b.a Ij() {
            com.kwad.sdk.utils.b.a r0 = new com.kwad.sdk.utils.b.a
            r0.<init>()
            java.lang.String r1 = "ksadsdk_kv_perf"
            android.content.SharedPreferences r1 = com.kwad.sdk.utils.bb.fH(r1)
            r2 = 0
            if (r1 != 0) goto Lf
            return r2
        Lf:
            java.util.Map r3 = r1.getAll()     // Catch: java.lang.Throwable -> L65
            if (r3 != 0) goto L16
            return r2
        L16:
            java.util.Set r2 = r3.entrySet()     // Catch: java.lang.Throwable -> L65
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L65
            r4 = 0
            r5 = r4
        L20:
            boolean r6 = r2.hasNext()     // Catch: java.lang.Throwable -> L65
            if (r6 == 0) goto L38
            java.lang.Object r6 = r2.next()     // Catch: java.lang.Throwable -> L65
            java.util.Map$Entry r6 = (java.util.Map.Entry) r6     // Catch: java.lang.Throwable -> L65
            java.lang.Object r6 = r6.getValue()     // Catch: java.lang.Throwable -> L65
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Throwable -> L65
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> L65
            int r5 = r5 + r6
            goto L20
        L38:
            r0.aLC = r5     // Catch: java.lang.Throwable -> L65
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L65
            java.util.Set r2 = r3.entrySet()     // Catch: java.lang.Throwable -> L65
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L65
        L46:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L65
            if (r3 == 0) goto L5c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L65
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> L65
            java.lang.Object r3 = r3.getKey()     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L65
            r1.putInt(r3, r4)     // Catch: java.lang.Throwable -> L65
            goto L46
        L5c:
            r1.apply()     // Catch: java.lang.Throwable -> L65
            d(r0)     // Catch: java.lang.Throwable -> L65
            e(r0)     // Catch: java.lang.Throwable -> L65
        L65:
            return r0
    }

    private static int Ik() {
            java.lang.String r0 = "kssdk_kv_mode"
            java.lang.String r1 = "mode"
            r2 = 0
            int r0 = com.kwad.sdk.utils.bb.c(r0, r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "local mode:"
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Ks_UnionHelper"
            com.kwad.sdk.core.e.c.d(r2, r1)
            return r0
    }

    public static boolean Il() {
            Ih()
            java.util.concurrent.atomic.AtomicInteger r0 = com.kwad.sdk.utils.x.aIF
            int r0 = r0.get()
            if (r0 != 0) goto Ld
            r0 = 1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    private static boolean Im() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 <= r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private static int In() {
            Ih()
            boolean r0 = com.kwad.sdk.utils.x.aIG
            if (r0 != 0) goto L13
            boolean r0 = Im()
            if (r0 != 0) goto Le
            goto L13
        Le:
            int r0 = Ig()
            goto L14
        L13:
            r0 = 0
        L14:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "targetMode:"
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Ks_UnionHelper"
            com.kwad.sdk.core.e.c.d(r2, r1)
            return r0
    }

    public static void Io() {
            Ih()
            java.util.concurrent.atomic.AtomicInteger r0 = com.kwad.sdk.utils.x.aIF
            int r0 = r0.get()
            int r1 = In()
            if (r0 == r1) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "needTransfer:"
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "Ks_UnionHelper"
            com.kwad.sdk.core.e.c.d(r3, r2)
            if (r0 == 0) goto L2a
            transfer(r1)
        L2a:
            return
    }

    private static void Ip() {
            com.kwad.sdk.utils.x$4 r0 = new com.kwad.sdk.utils.x$4
            r0.<init>()
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    private static void Iq() {
            java.lang.String r0 = "Ks_UnionHelper"
            java.lang.String r1 = "transferToKv"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.utils.x$5 r0 = new com.kwad.sdk.utils.x$5
            r0.<init>()
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    static java.util.concurrent.atomic.AtomicInteger Ir() {
            java.util.concurrent.atomic.AtomicInteger r0 = com.kwad.sdk.utils.x.aIF
            return r0
    }

    private static void M(android.content.Context r4, java.lang.String r5) {
            com.kwad.sdk.utils.a.c r4 = com.kwad.sdk.utils.a.e.at(r4, r5)
            java.lang.String r0 = "ksadsdk_splash_preload_id_list"
            boolean r0 = r0.equals(r5)
            java.lang.String r1 = "kv_to_sp_transfer_flag"
            java.lang.String r2 = "sp_to_kv_transfer_flag"
            if (r0 == 0) goto L28
            android.content.SharedPreferences r0 = com.kwad.sdk.utils.bb.fH(r5)
            if (r0 != 0) goto L28
            android.content.SharedPreferences$Editor r4 = r0.edit()
            if (r4 == 0) goto L27
            android.content.SharedPreferences$Editor r4 = r4.remove(r1)
            android.content.SharedPreferences$Editor r4 = r4.remove(r2)
            r4.apply()
        L27:
            return
        L28:
            boolean r0 = r4.contains(r2)
            if (r0 != 0) goto L49
            android.content.SharedPreferences r0 = com.kwad.sdk.utils.bb.fH(r5)
            r3 = 1
            if (r0 != 0) goto L39
            r4.putBoolean(r2, r3)
            return
        L39:
            java.util.Map r0 = r0.getAll()
            r4.putAll(r0)
            r4.putBoolean(r2, r3)
            com.kwad.sdk.utils.bb.ar(r5, r1)
            a(r5, r4)
        L49:
            return
    }

    private static void N(android.content.Context r5, java.lang.String r6) {
            android.content.SharedPreferences r0 = com.kwad.sdk.utils.bb.fH(r6)
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r1 = "ksadsdk_splash_preload_id_list"
            boolean r1 = r1.equals(r6)
            java.lang.String r2 = "sp_to_kv_transfer_flag"
            java.lang.String r3 = "kv_to_sp_transfer_flag"
            if (r1 == 0) goto L25
            android.content.SharedPreferences$Editor r5 = r0.edit()
            if (r5 == 0) goto L24
            android.content.SharedPreferences$Editor r5 = r5.remove(r3)
            android.content.SharedPreferences$Editor r5 = r5.remove(r2)
            r5.apply()
        L24:
            return
        L25:
            boolean r0 = r0.contains(r3)
            if (r0 != 0) goto L4a
            com.kwad.sdk.utils.a.c r5 = com.kwad.sdk.utils.a.e.at(r5, r6)
            java.util.Map r0 = r5.getAll()
            boolean r1 = r0.isEmpty()
            r4 = 1
            if (r1 == 0) goto L3e
            com.kwad.sdk.utils.bb.l(r6, r3, r4)
            return
        L3e:
            com.kwad.sdk.utils.bb.a(r6, r0)
            com.kwad.sdk.utils.bb.l(r6, r3, r4)
            r5.remove(r2)
            r5.release()
        L4a:
            return
    }

    static void O(android.content.Context r0, java.lang.String r1) {
            N(r0, r1)
            return
    }

    static void P(android.content.Context r0, java.lang.String r1) {
            M(r0, r1)
            return
    }

    private static void a(java.lang.String r1, com.kwad.sdk.utils.a.c r2) {
            java.util.List<java.lang.String> r0 = com.kwad.sdk.i.a.ahb
            boolean r1 = r0.contains(r1)
            if (r1 != 0) goto Lb
            r2.release()
        Lb:
            return
    }

    public static void ap(java.lang.String r1, java.lang.String r2) {
            com.kwad.sdk.utils.x$1 r0 = new com.kwad.sdk.utils.x$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    public static void aq(java.lang.String r1, java.lang.String r2) {
            com.kwad.sdk.utils.x$2 r0 = new com.kwad.sdk.utils.x$2
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    private static void c(com.kwad.sdk.utils.b.a r4) {
            int r0 = r4.aLD
            double r0 = (double) r0
            int r2 = r4.aLD
            int r4 = r4.aLE
            int r2 = r2 + r4
            double r2 = (double) r2
            double r0 = r0 / r2
            r2 = 4591870180174331904(0x3fb99999a0000000, double:0.10000000149011612)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L24
            r4 = 1
            com.kwad.sdk.utils.x.aIG = r4
            java.lang.String r0 = "Ks_UnionHelper"
            java.lang.String r1 = "need downgrade"
            com.kwad.sdk.core.e.c.d(r0, r1)
            java.lang.String r0 = "kssdk_kv_mode"
            java.lang.String r1 = "downgrade"
            com.kwad.sdk.utils.bb.l(r0, r1, r4)
        L24:
            boolean r4 = com.kwad.sdk.utils.x.aIG
            if (r4 == 0) goto L2b
            Io()
        L2b:
            return
    }

    private static void d(com.kwad.sdk.utils.b.a r4) {
            java.lang.String r0 = "ksadsdk_kv_perf_failed"
            android.content.SharedPreferences r0 = com.kwad.sdk.utils.bb.fH(r0)
            r1 = 0
            if (r0 == 0) goto L3c
            java.util.Map r2 = r0.getAll()
            if (r2 == 0) goto L2f
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L17:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r2.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r3 = r3.getValue()
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            int r1 = r1 + r3
            goto L17
        L2f:
            r4.aLD = r1
            android.content.SharedPreferences$Editor r4 = r0.edit()
            r4.clear()
            r4.apply()
            return
        L3c:
            r4.aLD = r1
            return
    }

    static void dc(int r2) {
            java.lang.String r0 = "kssdk_kv_mode"
            java.lang.String r1 = "mode"
            com.kwad.sdk.utils.bb.b(r0, r1, r2)
            return
    }

    private static void e(com.kwad.sdk.utils.b.a r4) {
            java.lang.String r0 = "ksadsdk_kv_perf_success"
            android.content.SharedPreferences r0 = com.kwad.sdk.utils.bb.fH(r0)
            r1 = 0
            if (r0 == 0) goto L3c
            java.util.Map r2 = r0.getAll()
            if (r2 == 0) goto L2f
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L17:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r2.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r3 = r3.getValue()
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            int r1 = r1 + r3
            goto L17
        L2f:
            r4.aLE = r1
            android.content.SharedPreferences$Editor r4 = r0.edit()
            r4.clear()
            r4.apply()
            return
        L3c:
            r4.aLE = r1
            return
    }

    static void f(com.kwad.sdk.utils.b.a r0) {
            c(r0)
            return
    }

    private static void transfer(int r1) {
            if (r1 != 0) goto L6
            Ip()
            return
        L6:
            r0 = 1
            if (r1 != r0) goto Lc
            Iq()
        Lc:
            return
    }
}
