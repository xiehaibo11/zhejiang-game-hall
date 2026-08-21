package com.alipay.sdk.m.w;

public class a {
    public static final java.lang.String a = "CDT";
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 3;
    public static final int e = 4;
    public static final int f = 5;
    public static java.util.concurrent.ConcurrentHashMap<java.lang.Integer, android.util.Pair<java.lang.Long, ?>> g;
    public static java.util.concurrent.ExecutorService h;

    public interface a<T, R> {
        R a(T r1);
    }

    static {
            r0 = 16
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r0)
            com.alipay.sdk.m.w.a.h = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Context a(android.content.Context r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            android.content.Context r0 = r0.getApplicationContext()
            return r0
    }

    public static android.util.Pair<java.lang.Boolean, ?> a(int r7, java.util.concurrent.TimeUnit r8, long r9) {
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, android.util.Pair<java.lang.Long, ?>> r0 = com.alipay.sdk.m.w.a.g
            r1 = 0
            r2 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            if (r0 != 0) goto L10
            android.util.Pair r7 = new android.util.Pair
            r7.<init>(r2, r1)
            return r7
        L10:
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            java.lang.Object r7 = r0.get(r7)
            android.util.Pair r7 = (android.util.Pair) r7
            if (r7 != 0) goto L22
            android.util.Pair r7 = new android.util.Pair
            r7.<init>(r2, r1)
            return r7
        L22:
            java.lang.Object r0 = r7.first
            java.lang.Long r0 = (java.lang.Long) r0
            java.lang.Object r7 = r7.second
            if (r0 == 0) goto L49
            long r3 = android.os.SystemClock.elapsedRealtime()
            long r5 = r0.longValue()
            long r3 = r3 - r5
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r8 = r0.convert(r9, r8)
            int r10 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r10 <= 0) goto L3e
            goto L49
        L3e:
            android.util.Pair r8 = new android.util.Pair
            r9 = 1
            java.lang.Boolean r9 = java.lang.Boolean.valueOf(r9)
            r8.<init>(r9, r7)
            return r8
        L49:
            android.util.Pair r7 = new android.util.Pair
            r7.<init>(r2, r1)
            return r7
    }

    public static <T> T a(int r3, long r4, java.util.concurrent.TimeUnit r6, com.alipay.sdk.m.w.a.a<java.lang.Object, java.lang.Boolean> r7, java.util.concurrent.Callable<T> r8, boolean r9, long r10, java.util.concurrent.TimeUnit r12, com.alipay.sdk.m.s.a r13, boolean r14) {
            java.lang.String r0 = "biz"
            java.lang.String r1 = "getC"
            r2 = 0
            android.util.Pair r4 = a(r3, r6, r4)     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r5 = r4.first     // Catch: java.lang.Throwable -> L9d
            java.lang.Boolean r5 = (java.lang.Boolean) r5     // Catch: java.lang.Throwable -> L9d
            boolean r5 = r5.booleanValue()     // Catch: java.lang.Throwable -> L9d
            if (r5 == 0) goto L3d
            java.lang.Object r5 = r4.second     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r5 = r7.a(r5)     // Catch: java.lang.Throwable -> L9d
            java.lang.Boolean r5 = (java.lang.Boolean) r5     // Catch: java.lang.Throwable -> L9d
            boolean r5 = r5.booleanValue()     // Catch: java.lang.Throwable -> L9d
            if (r5 == 0) goto L3d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r5.<init>()     // Catch: java.lang.Throwable -> L9d
            r5.append(r3)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r6 = " got "
            r5.append(r6)     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r6 = r4.second     // Catch: java.lang.Throwable -> L9d
            r5.append(r6)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L9d
            com.alipay.sdk.m.u.e.d(r1, r5)     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r3 = r4.second     // Catch: java.lang.Throwable -> L9d
            return r3
        L3d:
            if (r14 == 0) goto L71
            boolean r4 = com.alipay.sdk.m.u.n.h()     // Catch: java.lang.Throwable -> L9d
            if (r4 == 0) goto L71
            java.lang.String r4 = "ch_get_main"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r5.<init>()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L9d
            r5.append(r3)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L9d
            com.alipay.sdk.m.k.a.b(r13, r0, r4, r5)     // Catch: java.lang.Throwable -> L9d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r4.<init>()     // Catch: java.lang.Throwable -> L9d
            r4.append(r3)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r5 = " skip"
            r4.append(r5)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L9d
            com.alipay.sdk.m.u.e.d(r1, r4)     // Catch: java.lang.Throwable -> L9d
            r4 = r2
            goto L85
        L71:
            if (r9 == 0) goto L7e
            java.util.concurrent.ExecutorService r4 = com.alipay.sdk.m.w.a.h     // Catch: java.lang.Throwable -> L9d
            java.util.concurrent.Future r4 = r4.submit(r8)     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r4 = r4.get(r10, r12)     // Catch: java.lang.Throwable -> L9d
            goto L82
        L7e:
            java.lang.Object r4 = r8.call()     // Catch: java.lang.Throwable -> L9d
        L82:
            a(r3, r4)     // Catch: java.lang.Throwable -> L9d
        L85:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r5.<init>()     // Catch: java.lang.Throwable -> L9d
            r5.append(r3)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r6 = " new "
            r5.append(r6)     // Catch: java.lang.Throwable -> L9d
            r5.append(r4)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L9d
            com.alipay.sdk.m.u.e.d(r1, r5)     // Catch: java.lang.Throwable -> L9d
            return r4
        L9d:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "ch_get_e|"
            r5.append(r6)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            java.lang.String r7 = "CDT"
            com.alipay.sdk.m.u.e.a(r7, r5, r4)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r6)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            com.alipay.sdk.m.k.a.a(r13, r0, r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = " err"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.alipay.sdk.m.u.e.d(r1, r3)
            return r2
    }

    public static synchronized void a() {
            java.lang.Class<com.alipay.sdk.m.w.a> r0 = com.alipay.sdk.m.w.a.class
            monitor-enter(r0)
            r1 = 0
            com.alipay.sdk.m.w.a.g = r1     // Catch: java.lang.Throwable -> L8
            monitor-exit(r0)
            return
        L8:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized void a(int r5, java.lang.Object r6) {
            java.lang.Class<com.alipay.sdk.m.w.a> r0 = com.alipay.sdk.m.w.a.class
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, android.util.Pair<java.lang.Long, ?>> r1 = com.alipay.sdk.m.w.a.g     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto Le
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L26
            r1.<init>()     // Catch: java.lang.Throwable -> L26
            com.alipay.sdk.m.w.a.g = r1     // Catch: java.lang.Throwable -> L26
        Le:
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, android.util.Pair<java.lang.Long, ?>> r1 = com.alipay.sdk.m.w.a.g     // Catch: java.lang.Throwable -> L26
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L26
            android.util.Pair r2 = new android.util.Pair     // Catch: java.lang.Throwable -> L26
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L26
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L26
            r2.<init>(r3, r6)     // Catch: java.lang.Throwable -> L26
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L26
            monitor-exit(r0)
            return
        L26:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }
}
