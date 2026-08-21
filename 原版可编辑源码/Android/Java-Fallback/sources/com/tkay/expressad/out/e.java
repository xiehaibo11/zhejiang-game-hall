package com.tkay.expressad.out;

public class e implements com.tkay.expressad.e.a {
    public static final int a = 6;
    public static final int b = 7;
    public static final int c = 8;
    private static java.lang.String d = "CustomInfoManager";
    private static volatile com.tkay.expressad.out.e e;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> f;

    static {
            return
    }

    private e() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.f = r0
            return
    }

    public static com.tkay.expressad.out.e a() {
            com.tkay.expressad.out.e r0 = com.tkay.expressad.out.e.e
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.out.e> r0 = com.tkay.expressad.out.e.class
            monitor-enter(r0)
            com.tkay.expressad.out.e r1 = com.tkay.expressad.out.e.e     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.out.e r1 = new com.tkay.expressad.out.e     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.out.e.e = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.out.e r0 = com.tkay.expressad.out.e.e
            return r0
    }

    private java.lang.String a(java.lang.String r3, int r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L52
            r0 = 6
            if (r4 == r0) goto L38
            r0 = 7
            if (r4 == r0) goto L1d
            r0 = 8
            if (r4 == r0) goto L13
            goto L52
        L13:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r4 = r2.f
            java.lang.Object r3 = r4.get(r3)
            r1 = r3
            java.lang.String r1 = (java.lang.String) r1
            goto L52
        L1d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r4 = r2.f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "_bidload"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.Object r3 = r4.get(r3)
            r1 = r3
            java.lang.String r1 = (java.lang.String) r1
            goto L52
        L38:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r4 = r2.f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "_bid"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.Object r3 = r4.get(r3)
            r1 = r3
            java.lang.String r1 = (java.lang.String) r1
        L52:
            return r1
    }

    private void a(java.lang.String r2, int r3, java.lang.String r4) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L4a
            if (r4 == 0) goto L4a
            java.lang.String r4 = com.tkay.expressad.foundation.h.j.a(r4)
            r0 = 6
            if (r3 == r0) goto L34
            r0 = 7
            if (r3 == r0) goto L1d
            r0 = 8
            if (r3 == r0) goto L17
            goto L4a
        L17:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = r1.f
            r3.put(r2, r4)
            goto L4a
        L1d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = r1.f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_bidload"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.put(r2, r4)
            return
        L34:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = r1.f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_bid"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.put(r2, r4)
        L4a:
            return
    }

    public final java.lang.String a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L10
            return r1
        L10:
            android.net.Uri r6 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> L75
            if (r6 == 0) goto L75
            java.lang.String r0 = r6.getHost()     // Catch: java.lang.Throwable -> L75
            java.lang.String r6 = r6.getPath()     // Catch: java.lang.Throwable -> L75
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = "hb"
            if (r2 != 0) goto L40
            boolean r2 = r0.contains(r3)     // Catch: java.lang.Throwable -> L75
            if (r2 == 0) goto L40
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L75
            if (r2 != 0) goto L40
            java.lang.String r2 = "bid"
            boolean r2 = r6.contains(r2)     // Catch: java.lang.Throwable -> L75
            if (r2 == 0) goto L40
            r6 = 6
            java.lang.String r5 = r4.a(r5, r6)     // Catch: java.lang.Throwable -> L75
            return r5
        L40:
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L75
            if (r2 != 0) goto L60
            boolean r0 = r0.contains(r3)     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L60
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L75
            if (r0 != 0) goto L60
            java.lang.String r0 = "load"
            boolean r0 = r6.contains(r0)     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L60
            r6 = 7
            java.lang.String r5 = r4.a(r5, r6)     // Catch: java.lang.Throwable -> L75
            return r5
        L60:
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L75
            if (r0 != 0) goto L75
            java.lang.String r0 = "v3"
            boolean r6 = r6.contains(r0)     // Catch: java.lang.Throwable -> L75
            if (r6 == 0) goto L75
            r6 = 8
            java.lang.String r5 = r4.a(r5, r6)     // Catch: java.lang.Throwable -> L75
            return r5
        L75:
            return r1
    }
}
