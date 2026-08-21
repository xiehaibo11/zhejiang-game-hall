package com.mbridge.msdk.foundation.a.a;

public class a {
    public static final java.lang.String a = null;
    private static com.mbridge.msdk.foundation.a.a.a e;
    android.content.SharedPreferences b;
    com.mbridge.msdk.foundation.tools.FastKV c;
    private final boolean d;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.a.a.a> r0 = com.mbridge.msdk.foundation.a.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.a.a.a.a = r0
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r0 = r0.d()
            r1.d = r0
            return
    }

    public static synchronized com.mbridge.msdk.foundation.a.a.a a() {
            java.lang.Class<com.mbridge.msdk.foundation.a.a.a> r0 = com.mbridge.msdk.foundation.a.a.a.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.e     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.mbridge.msdk.foundation.a.a.a r1 = new com.mbridge.msdk.foundation.a.a.a     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.mbridge.msdk.foundation.a.a.a.e = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.e     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final java.lang.Long a(java.lang.String r7) {
            r6 = this;
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L63
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L63
            if (r2 != 0) goto L18
            java.lang.String r7 = com.mbridge.msdk.foundation.a.a.a.a     // Catch: java.lang.Exception -> L63
            java.lang.String r2 = "context is null in get"
            com.mbridge.msdk.foundation.tools.z.d(r7, r2)     // Catch: java.lang.Exception -> L63
            java.lang.Long r7 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> L63
            return r7
        L18:
            boolean r3 = r6.d     // Catch: java.lang.Exception -> L63
            java.lang.String r4 = "mbridge"
            if (r3 == 0) goto L37
            com.mbridge.msdk.foundation.tools.FastKV r3 = r6.c     // Catch: java.lang.Exception -> L63
            if (r3 != 0) goto L37
            com.mbridge.msdk.foundation.tools.FastKV$Builder r3 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L34
            com.mbridge.msdk.foundation.same.b.c r5 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L34
            java.lang.String r5 = com.mbridge.msdk.foundation.same.b.e.b(r5)     // Catch: java.lang.Exception -> L34
            r3.<init>(r5, r4)     // Catch: java.lang.Exception -> L34
            com.mbridge.msdk.foundation.tools.FastKV r3 = r3.build()     // Catch: java.lang.Exception -> L34
            r6.c = r3     // Catch: java.lang.Exception -> L34
            goto L37
        L34:
            r3 = 0
            r6.c = r3     // Catch: java.lang.Exception -> L63
        L37:
            com.mbridge.msdk.foundation.tools.FastKV r3 = r6.c     // Catch: java.lang.Exception -> L63
            if (r3 == 0) goto L4b
            com.mbridge.msdk.foundation.tools.FastKV r2 = r6.c     // Catch: java.lang.Exception -> L46
            long r2 = r2.getLong(r7, r0)     // Catch: java.lang.Exception -> L46
            java.lang.Long r7 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L46
            return r7
        L46:
            java.lang.Long r7 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> L63
            return r7
        L4b:
            android.content.SharedPreferences r3 = r6.b     // Catch: java.lang.Exception -> L63
            if (r3 != 0) goto L58
            if (r2 == 0) goto L58
            r3 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r4, r3)     // Catch: java.lang.Exception -> L63
            r6.b = r2     // Catch: java.lang.Exception -> L63
        L58:
            android.content.SharedPreferences r2 = r6.b     // Catch: java.lang.Exception -> L63
            long r2 = r2.getLong(r7, r0)     // Catch: java.lang.Exception -> L63
            java.lang.Long r7 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L63
            return r7
        L63:
            r7 = move-exception
            r7.printStackTrace()
            java.lang.Long r7 = java.lang.Long.valueOf(r0)
            return r7
    }

    public final void a(java.lang.String r5, int r6) {
            r4 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L4e
            if (r0 != 0) goto Lb
            return
        Lb:
            boolean r1 = r4.d     // Catch: java.lang.Exception -> L4e
            java.lang.String r2 = "mbridge"
            if (r1 == 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c     // Catch: java.lang.Exception -> L4e
            if (r1 != 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L27
            r1.<init>(r3, r2)     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L27
            r4.c = r1     // Catch: java.lang.Exception -> L27
            goto L2a
        L27:
            r1 = 0
            r4.c = r1     // Catch: java.lang.Exception -> L4e
        L2a:
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c     // Catch: java.lang.Exception -> L4e
            if (r1 == 0) goto L34
            com.mbridge.msdk.foundation.tools.FastKV r0 = r4.c     // Catch: java.lang.Exception -> L52
            r0.putInt(r5, r6)     // Catch: java.lang.Exception -> L52
            goto L52
        L34:
            android.content.SharedPreferences r1 = r4.b     // Catch: java.lang.Exception -> L4e
            if (r1 != 0) goto L41
            if (r0 == 0) goto L41
            r1 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)     // Catch: java.lang.Exception -> L4e
            r4.b = r0     // Catch: java.lang.Exception -> L4e
        L41:
            android.content.SharedPreferences r0 = r4.b     // Catch: java.lang.Exception -> L4e
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L4e
            r0.putInt(r5, r6)     // Catch: java.lang.Exception -> L4e
            r0.apply()     // Catch: java.lang.Exception -> L4e
            goto L52
        L4e:
            r5 = move-exception
            r5.printStackTrace()
        L52:
            return
    }

    public final void a(java.lang.String r5, long r6) {
            r4 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L55
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L55
            if (r0 != 0) goto L12
            java.lang.String r5 = com.mbridge.msdk.foundation.a.a.a.a     // Catch: java.lang.Exception -> L55
            java.lang.String r6 = "context is null in put"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)     // Catch: java.lang.Exception -> L55
            return
        L12:
            boolean r1 = r4.d     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "mbridge"
            if (r1 == 0) goto L31
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c     // Catch: java.lang.Exception -> L55
            if (r1 != 0) goto L31
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L2e
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L2e
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L2e
            r1.<init>(r3, r2)     // Catch: java.lang.Exception -> L2e
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L2e
            r4.c = r1     // Catch: java.lang.Exception -> L2e
            goto L31
        L2e:
            r1 = 0
            r4.c = r1     // Catch: java.lang.Exception -> L55
        L31:
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c     // Catch: java.lang.Exception -> L55
            if (r1 == 0) goto L3b
            com.mbridge.msdk.foundation.tools.FastKV r0 = r4.c     // Catch: java.lang.Exception -> L59
            r0.putLong(r5, r6)     // Catch: java.lang.Exception -> L59
            goto L59
        L3b:
            android.content.SharedPreferences r1 = r4.b     // Catch: java.lang.Exception -> L55
            if (r1 != 0) goto L48
            if (r0 == 0) goto L48
            r1 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)     // Catch: java.lang.Exception -> L55
            r4.b = r0     // Catch: java.lang.Exception -> L55
        L48:
            android.content.SharedPreferences r0 = r4.b     // Catch: java.lang.Exception -> L55
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L55
            r0.putLong(r5, r6)     // Catch: java.lang.Exception -> L55
            r0.apply()     // Catch: java.lang.Exception -> L55
            goto L59
        L55:
            r5 = move-exception
            r5.printStackTrace()
        L59:
            return
    }

    public final void a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L4e
            if (r0 != 0) goto Lb
            return
        Lb:
            boolean r1 = r4.d     // Catch: java.lang.Exception -> L4e
            java.lang.String r2 = "mbridge"
            if (r1 == 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c     // Catch: java.lang.Exception -> L4e
            if (r1 != 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L27
            r1.<init>(r3, r2)     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L27
            r4.c = r1     // Catch: java.lang.Exception -> L27
            goto L2a
        L27:
            r1 = 0
            r4.c = r1     // Catch: java.lang.Exception -> L4e
        L2a:
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c     // Catch: java.lang.Exception -> L4e
            if (r1 == 0) goto L34
            com.mbridge.msdk.foundation.tools.FastKV r0 = r4.c     // Catch: java.lang.Exception -> L52
            r0.putString(r5, r6)     // Catch: java.lang.Exception -> L52
            goto L52
        L34:
            android.content.SharedPreferences r1 = r4.b     // Catch: java.lang.Exception -> L4e
            if (r1 != 0) goto L41
            if (r0 == 0) goto L41
            r1 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)     // Catch: java.lang.Exception -> L4e
            r4.b = r0     // Catch: java.lang.Exception -> L4e
        L41:
            android.content.SharedPreferences r0 = r4.b     // Catch: java.lang.Exception -> L4e
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L4e
            r0.putString(r5, r6)     // Catch: java.lang.Exception -> L4e
            r0.apply()     // Catch: java.lang.Exception -> L4e
            goto L52
        L4e:
            r5 = move-exception
            r5.printStackTrace()
        L52:
            return
    }

    public final int b(java.lang.String r5, int r6) {
            r4 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L48
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L48
            if (r0 != 0) goto Lb
            return r6
        Lb:
            boolean r1 = r4.d     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = "mbridge"
            if (r1 == 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c     // Catch: java.lang.Exception -> L48
            if (r1 != 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L27
            r1.<init>(r3, r2)     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L27
            r4.c = r1     // Catch: java.lang.Exception -> L27
            goto L2a
        L27:
            r1 = 0
            r4.c = r1     // Catch: java.lang.Exception -> L48
        L2a:
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c     // Catch: java.lang.Exception -> L48
            if (r1 == 0) goto L36
            com.mbridge.msdk.foundation.tools.FastKV r0 = r4.c     // Catch: java.lang.Exception -> L35
            int r5 = r0.getInt(r5, r6)     // Catch: java.lang.Exception -> L35
            return r5
        L35:
            return r6
        L36:
            android.content.SharedPreferences r1 = r4.b     // Catch: java.lang.Exception -> L48
            if (r1 != 0) goto L41
            r1 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)     // Catch: java.lang.Exception -> L48
            r4.b = r0     // Catch: java.lang.Exception -> L48
        L41:
            android.content.SharedPreferences r0 = r4.b     // Catch: java.lang.Exception -> L48
            int r5 = r0.getInt(r5, r6)     // Catch: java.lang.Exception -> L48
            return r5
        L48:
            r5 = move-exception
            r5.printStackTrace()
            return r6
    }

    public final java.lang.String b(java.lang.String r6) {
            r5 = this;
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4c
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L4c
            if (r1 != 0) goto Lc
            return r0
        Lc:
            boolean r2 = r5.d     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = "mbridge"
            if (r2 == 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV r2 = r5.c     // Catch: java.lang.Exception -> L4c
            if (r2 != 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV$Builder r2 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L28
            com.mbridge.msdk.foundation.same.b.c r4 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L28
            java.lang.String r4 = com.mbridge.msdk.foundation.same.b.e.b(r4)     // Catch: java.lang.Exception -> L28
            r2.<init>(r4, r3)     // Catch: java.lang.Exception -> L28
            com.mbridge.msdk.foundation.tools.FastKV r2 = r2.build()     // Catch: java.lang.Exception -> L28
            r5.c = r2     // Catch: java.lang.Exception -> L28
            goto L2a
        L28:
            r5.c = r0     // Catch: java.lang.Exception -> L4c
        L2a:
            com.mbridge.msdk.foundation.tools.FastKV r2 = r5.c     // Catch: java.lang.Exception -> L4c
            java.lang.String r4 = ""
            if (r2 == 0) goto L38
            com.mbridge.msdk.foundation.tools.FastKV r0 = r5.c     // Catch: java.lang.Exception -> L37
            java.lang.String r6 = r0.getString(r6, r4)     // Catch: java.lang.Exception -> L37
            return r6
        L37:
            return r4
        L38:
            android.content.SharedPreferences r2 = r5.b     // Catch: java.lang.Exception -> L4c
            if (r2 != 0) goto L45
            if (r1 == 0) goto L45
            r2 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r3, r2)     // Catch: java.lang.Exception -> L4c
            r5.b = r1     // Catch: java.lang.Exception -> L4c
        L45:
            android.content.SharedPreferences r1 = r5.b     // Catch: java.lang.Exception -> L4c
            java.lang.String r6 = r1.getString(r6, r4)     // Catch: java.lang.Exception -> L4c
            return r6
        L4c:
            r6 = move-exception
            r6.printStackTrace()
            return r0
    }

    public final void c(java.lang.String r5) {
            r4 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 != 0) goto Lb
            return
        Lb:
            boolean r1 = r4.d
            java.lang.String r2 = "mbridge"
            if (r1 == 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c
            if (r1 != 0) goto L2a
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L27
            r1.<init>(r3, r2)     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L27
            r4.c = r1     // Catch: java.lang.Exception -> L27
            goto L2a
        L27:
            r1 = 0
            r4.c = r1
        L2a:
            com.mbridge.msdk.foundation.tools.FastKV r1 = r4.c
            if (r1 == 0) goto L32
            r1.remove(r5)     // Catch: java.lang.Exception -> L4c
            goto L4c
        L32:
            android.content.SharedPreferences r1 = r4.b
            if (r1 != 0) goto L3f
            if (r0 == 0) goto L3f
            r1 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            r4.b = r0
        L3f:
            android.content.SharedPreferences r0 = r4.b
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r5 = r0.remove(r5)
            r5.apply()
        L4c:
            return
    }
}
