package com.mbridge.msdk.foundation.tools;

public final class ab {
    private volatile java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> a;
    private volatile java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> b;
    private volatile com.mbridge.msdk.c.a c;
    private volatile org.json.JSONObject d;
    private final java.lang.Object e;
    private final java.lang.Object f;
    private final java.lang.Object g;
    private java.lang.String h;

    static class 1 {
    }

    private static final class a {
        private static final com.mbridge.msdk.foundation.tools.ab a = null;

        static {
                com.mbridge.msdk.foundation.tools.ab r0 = new com.mbridge.msdk.foundation.tools.ab
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.tools.ab.a.a = r0
                return
        }

        static com.mbridge.msdk.foundation.tools.ab a() {
                com.mbridge.msdk.foundation.tools.ab r0 = com.mbridge.msdk.foundation.tools.ab.a.a
                return r0
        }
    }

    private ab() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.e = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.f = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.g = r0
            return
    }

    ab(com.mbridge.msdk.foundation.tools.ab.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.tools.ab a() {
            com.mbridge.msdk.foundation.tools.ab r0 = com.mbridge.msdk.foundation.tools.ab.a.a()
            return r0
    }

    private static java.lang.Boolean a(java.lang.String r0, java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1) {
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Exception -> L7
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Exception -> L7
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    private int b(java.lang.String r2, int r3) {
            r1 = this;
            boolean r0 = r1.b()
            if (r0 == 0) goto L7
            return r3
        L7:
            org.json.JSONObject r0 = r1.d     // Catch: java.lang.Exception -> Le
            int r2 = r0.optInt(r2, r3)     // Catch: java.lang.Exception -> Le
            return r2
        Le:
            return r3
    }

    private static java.lang.Integer b(java.lang.String r0, java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r1) {
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Exception -> L7
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> L7
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    private boolean b() {
            r5 = this;
            java.lang.Object r0 = r5.g
            monitor-enter(r0)
            com.mbridge.msdk.c.a r1 = r5.c     // Catch: java.lang.Throwable -> L51
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L16
            com.mbridge.msdk.c.a r1 = r5.c     // Catch: java.lang.Throwable -> L51
            int r1 = r1.aY()     // Catch: java.lang.Throwable -> L51
            if (r1 != r3) goto L13
            r1 = r3
            goto L14
        L13:
            r1 = r2
        L14:
            if (r1 == 0) goto L3a
        L16:
            java.lang.String r1 = r5.h     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            if (r1 == 0) goto L2a
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            java.lang.String r4 = "sdk_app_id"
            java.lang.String r1 = r1.b(r4)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            r5.h = r1     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
        L2a:
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            java.lang.String r4 = r5.h     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            com.mbridge.msdk.c.a r1 = r1.g(r4)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            r5.c = r1     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            goto L3a
        L37:
            r1 = 0
            r5.c = r1     // Catch: java.lang.Throwable -> L51
        L3a:
            com.mbridge.msdk.c.a r1 = r5.c     // Catch: java.lang.Throwable -> L51
            if (r1 == 0) goto L46
            com.mbridge.msdk.c.a r1 = r5.c     // Catch: java.lang.Throwable -> L51
            org.json.JSONObject r1 = r1.s()     // Catch: java.lang.Throwable -> L51
            r5.d = r1     // Catch: java.lang.Throwable -> L51
        L46:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            com.mbridge.msdk.c.a r0 = r5.c
            if (r0 == 0) goto L4f
            org.json.JSONObject r0 = r5.d
            if (r0 != 0) goto L50
        L4f:
            r2 = r3
        L50:
            return r2
        L51:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            throw r1
    }

    private boolean b(java.lang.String r5, boolean r6) {
            r4 = this;
            boolean r0 = r4.b()
            if (r0 == 0) goto L7
            return r6
        L7:
            org.json.JSONObject r0 = r4.d     // Catch: java.lang.Exception -> L19
            r1 = 1
            r2 = 0
            if (r6 == 0) goto Lf
            r3 = r1
            goto L10
        Lf:
            r3 = r2
        L10:
            int r5 = r0.optInt(r5, r3)     // Catch: java.lang.Exception -> L19
            if (r5 == 0) goto L17
            goto L18
        L17:
            r1 = r2
        L18:
            return r1
        L19:
            return r6
    }

    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> c() {
            r2 = this;
            java.lang.Object r0 = r2.e
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = r2.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            r2.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r2.a
            return r0
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> d() {
            r2 = this;
            java.lang.Object r0 = r2.f
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r1 = r2.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            r2.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r0 = r2.b
            return r0
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    public final int a(java.lang.String r3, int r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L2b
            if (r0 == 0) goto L7
            return r4
        L7:
            java.util.concurrent.ConcurrentHashMap r0 = r2.d()     // Catch: java.lang.Exception -> L2b
            java.lang.Integer r1 = b(r3, r0)     // Catch: java.lang.Exception -> L2b
            if (r1 == 0) goto L16
            int r3 = r1.intValue()     // Catch: java.lang.Exception -> L2b
            return r3
        L16:
            int r1 = r2.b(r3, r4)     // Catch: java.lang.Exception -> L1f
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L2b
        L23:
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L2b
            int r3 = r1.intValue()     // Catch: java.lang.Exception -> L2b
            return r3
        L2b:
            return r4
    }

    public final boolean a(java.lang.String r3, boolean r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L2b
            if (r0 == 0) goto L7
            return r4
        L7:
            java.util.concurrent.ConcurrentHashMap r0 = r2.c()     // Catch: java.lang.Exception -> L2b
            java.lang.Boolean r1 = a(r3, r0)     // Catch: java.lang.Exception -> L2b
            if (r1 == 0) goto L16
            boolean r3 = r1.booleanValue()     // Catch: java.lang.Exception -> L2b
            return r3
        L16:
            boolean r1 = r2.b(r3, r4)     // Catch: java.lang.Exception -> L1f
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Exception -> L2b
        L23:
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L2b
            boolean r3 = r1.booleanValue()     // Catch: java.lang.Exception -> L2b
            return r3
        L2b:
            return r4
    }
}
