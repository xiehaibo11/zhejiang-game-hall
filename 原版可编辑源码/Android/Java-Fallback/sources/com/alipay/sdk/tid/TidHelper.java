package com.alipay.sdk.tid;

public class TidHelper {
    public TidHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.tid.Tid a(android.content.Context r4, com.alipay.sdk.m.t.a r5) {
            if (r5 == 0) goto L1f
            boolean r4 = r5.i()
            if (r4 == 0) goto L9
            goto L1f
        L9:
            com.alipay.sdk.tid.Tid r4 = new com.alipay.sdk.tid.Tid
            java.lang.String r0 = r5.d()
            java.lang.String r1 = r5.c()
            java.lang.Long r5 = r5.e()
            long r2 = r5.longValue()
            r4.<init>(r0, r1, r2)
            return r4
        L1f:
            r4 = 0
            return r4
    }

    public static void a(android.content.Context r1) {
            if (r1 != 0) goto L3
            return
        L3:
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            r0.a(r1)
            return
    }

    public static com.alipay.sdk.tid.Tid b(android.content.Context r5) throws java.lang.Exception {
            r0 = 0
            com.alipay.sdk.m.q.c r1 = new com.alipay.sdk.m.q.c     // Catch: java.lang.Throwable -> L3d
            r1.<init>()     // Catch: java.lang.Throwable -> L3d
            com.alipay.sdk.m.s.a r2 = com.alipay.sdk.m.s.a.h()     // Catch: java.lang.Throwable -> L3d
            com.alipay.sdk.m.p.b r1 = r1.a(r2, r5)     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L3d
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = r1.a()     // Catch: java.lang.Throwable -> L3d
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L3d
            com.alipay.sdk.m.t.a r1 = com.alipay.sdk.m.t.a.a(r5)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r3 = "tid"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r4 = "client_key"
            java.lang.String r2 = r2.getString(r4)     // Catch: java.lang.Throwable -> L3d
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L3d
            if (r4 != 0) goto L38
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L3d
            if (r4 != 0) goto L38
            r1.a(r3, r2)     // Catch: java.lang.Throwable -> L3d
        L38:
            com.alipay.sdk.tid.Tid r5 = a(r5, r1)     // Catch: java.lang.Throwable -> L3d
            return r5
        L3d:
            return r0
    }

    public static void clearTID(android.content.Context r0) {
            com.alipay.sdk.m.t.a r0 = com.alipay.sdk.m.t.a.a(r0)
            r0.a()
            return
    }

    public static java.lang.String getIMEI(android.content.Context r0) {
            a(r0)
            com.alipay.sdk.m.u.c r0 = com.alipay.sdk.m.u.c.b(r0)
            java.lang.String r0 = r0.b()
            return r0
    }

    public static java.lang.String getIMSI(android.content.Context r0) {
            a(r0)
            com.alipay.sdk.m.u.c r0 = com.alipay.sdk.m.u.c.b(r0)
            java.lang.String r0 = r0.c()
            return r0
    }

    public static synchronized java.lang.String getTIDValue(android.content.Context r2) {
            java.lang.Class<com.alipay.sdk.tid.TidHelper> r0 = com.alipay.sdk.tid.TidHelper.class
            monitor-enter(r0)
            com.alipay.sdk.tid.Tid r2 = loadOrCreateTID(r2)     // Catch: java.lang.Throwable -> L16
            boolean r1 = com.alipay.sdk.tid.Tid.isEmpty(r2)     // Catch: java.lang.Throwable -> L16
            if (r1 == 0) goto L10
            java.lang.String r2 = ""
            goto L14
        L10:
            java.lang.String r2 = r2.getTid()     // Catch: java.lang.Throwable -> L16
        L14:
            monitor-exit(r0)
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static java.lang.String getVirtualImei(android.content.Context r0) {
            a(r0)
            com.alipay.sdk.m.m.b.b()
            java.lang.String r0 = com.alipay.sdk.m.m.b.f()
            return r0
    }

    public static java.lang.String getVirtualImsi(android.content.Context r0) {
            a(r0)
            com.alipay.sdk.m.m.b.b()
            java.lang.String r0 = com.alipay.sdk.m.m.b.g()
            return r0
    }

    public static com.alipay.sdk.tid.Tid loadLocalTid(android.content.Context r5) {
            com.alipay.sdk.m.t.a r5 = com.alipay.sdk.m.t.a.a(r5)
            boolean r0 = r5.h()
            if (r0 == 0) goto Lc
            r5 = 0
            return r5
        Lc:
            com.alipay.sdk.tid.Tid r0 = new com.alipay.sdk.tid.Tid
            java.lang.String r1 = r5.d()
            java.lang.String r2 = r5.c()
            java.lang.Long r5 = r5.e()
            long r3 = r5.longValue()
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static synchronized com.alipay.sdk.tid.Tid loadOrCreateTID(android.content.Context r4) {
            java.lang.Class<com.alipay.sdk.tid.TidHelper> r0 = com.alipay.sdk.tid.TidHelper.class
            monitor-enter(r0)
            java.lang.String r1 = "mspl"
            java.lang.String r2 = "load_create_tid"
            com.alipay.sdk.m.u.e.b(r1, r2)     // Catch: java.lang.Throwable -> L2a
            a(r4)     // Catch: java.lang.Throwable -> L2a
            com.alipay.sdk.tid.Tid r1 = loadTID(r4)     // Catch: java.lang.Throwable -> L2a
            boolean r2 = com.alipay.sdk.tid.Tid.isEmpty(r1)     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L28
            android.os.Looper r2 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L2a
            android.os.Looper r3 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L2a
            if (r2 != r3) goto L24
            r4 = 0
            monitor-exit(r0)
            return r4
        L24:
            com.alipay.sdk.tid.Tid r1 = b(r4)     // Catch: java.lang.Throwable -> L28
        L28:
            monitor-exit(r0)
            return r1
        L2a:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static com.alipay.sdk.tid.Tid loadTID(android.content.Context r2) {
            a(r2)
            com.alipay.sdk.m.t.a r0 = com.alipay.sdk.m.t.a.a(r2)
            com.alipay.sdk.tid.Tid r2 = a(r2, r0)
            if (r2 != 0) goto L14
            java.lang.String r0 = "mspl"
            java.lang.String r1 = "load_tid null"
            com.alipay.sdk.m.u.e.b(r0, r1)
        L14:
            return r2
    }

    public static boolean resetTID(android.content.Context r2) throws java.lang.Exception {
            java.lang.String r0 = "mspl"
            java.lang.String r1 = "reset_tid"
            com.alipay.sdk.m.u.e.b(r0, r1)
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L28
            a(r2)
            clearTID(r2)
            r0 = 0
            com.alipay.sdk.tid.Tid r0 = b(r2)     // Catch: java.lang.Throwable -> L1d
            goto L1e
        L1d:
        L1e:
            boolean r2 = com.alipay.sdk.tid.Tid.isEmpty(r0)
            if (r2 == 0) goto L26
            r2 = 0
            return r2
        L26:
            r2 = 1
            return r2
        L28:
            java.lang.Exception r2 = new java.lang.Exception
            java.lang.String r0 = "Must be called on worker thread"
            r2.<init>(r0)
            throw r2
    }
}
