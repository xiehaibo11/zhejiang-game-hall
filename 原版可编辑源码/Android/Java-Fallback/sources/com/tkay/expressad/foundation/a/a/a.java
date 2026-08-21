package com.tkay.expressad.foundation.a.a;

public class a {
    public static final java.lang.String a = null;
    private static volatile com.tkay.expressad.foundation.a.a.a c;
    android.content.SharedPreferences b;

    static {
            java.lang.Class<com.tkay.expressad.foundation.a.a.a> r0 = com.tkay.expressad.foundation.a.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.a.a.a.a = r0
            return
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.foundation.a.a.a a() {
            com.tkay.expressad.foundation.a.a.a r0 = com.tkay.expressad.foundation.a.a.a.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.foundation.a.a.a> r0 = com.tkay.expressad.foundation.a.a.a.class
            monitor-enter(r0)
            com.tkay.expressad.foundation.a.a.a r1 = com.tkay.expressad.foundation.a.a.a.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.foundation.a.a.a r1 = new com.tkay.expressad.foundation.a.a.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.foundation.a.a.a.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.foundation.a.a.a r0 = com.tkay.expressad.foundation.a.a.a.c
            return r0
    }

    private void a(java.lang.String r4, int r5) {
            r3 = this;
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L27
            android.content.Context r0 = r0.d()     // Catch: java.lang.Exception -> L27
            if (r0 != 0) goto Lb
            return
        Lb:
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L27
            if (r1 != 0) goto L1a
            if (r0 == 0) goto L1a
            java.lang.String r1 = "tkay_expressad"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Exception -> L27
            r3.b = r0     // Catch: java.lang.Exception -> L27
        L1a:
            android.content.SharedPreferences r0 = r3.b     // Catch: java.lang.Exception -> L27
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L27
            r0.putInt(r4, r5)     // Catch: java.lang.Exception -> L27
            r0.apply()     // Catch: java.lang.Exception -> L27
            return
        L27:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    private void a(java.lang.String r4, long r5) {
            r3 = this;
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L27
            android.content.Context r0 = r0.d()     // Catch: java.lang.Exception -> L27
            if (r0 != 0) goto Lb
            return
        Lb:
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L27
            if (r1 != 0) goto L1a
            if (r0 == 0) goto L1a
            java.lang.String r1 = "tkay_expressad"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Exception -> L27
            r3.b = r0     // Catch: java.lang.Exception -> L27
        L1a:
            android.content.SharedPreferences r0 = r3.b     // Catch: java.lang.Exception -> L27
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L27
            r0.putLong(r4, r5)     // Catch: java.lang.Exception -> L27
            r0.apply()     // Catch: java.lang.Exception -> L27
            return
        L27:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    private int b(java.lang.String r4, int r5) {
            r3 = this;
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L1f
            android.content.Context r0 = r0.d()     // Catch: java.lang.Exception -> L1f
            if (r0 != 0) goto Lb
            return r5
        Lb:
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L1f
            if (r1 != 0) goto L18
            java.lang.String r1 = "tkay_expressad"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Exception -> L1f
            r3.b = r0     // Catch: java.lang.Exception -> L1f
        L18:
            android.content.SharedPreferences r0 = r3.b     // Catch: java.lang.Exception -> L1f
            int r4 = r0.getInt(r4, r5)     // Catch: java.lang.Exception -> L1f
            return r4
        L1f:
            r4 = move-exception
            r4.printStackTrace()
            return r5
    }

    private java.util.List<java.lang.String> b() {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r1 = r1.d()
            if (r1 != 0) goto L11
            r0 = 0
            return r0
        L11:
            android.content.SharedPreferences r2 = r4.b
            if (r2 != 0) goto L20
            if (r1 == 0) goto L20
            r2 = 0
            java.lang.String r3 = "tkay_expressad"
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r3, r2)
            r4.b = r1
        L20:
            android.content.SharedPreferences r1 = r4.b
            java.util.Map r1 = r1.getAll()
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L2e:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L44
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r2 = r2.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r0.add(r2)
            goto L2e
        L44:
            return r0
    }

    private int c(java.lang.String r4) {
            r3 = this;
            r0 = 0
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L21
            android.content.Context r1 = r1.d()     // Catch: java.lang.Exception -> L21
            if (r1 != 0) goto Lc
            return r0
        Lc:
            android.content.SharedPreferences r2 = r3.b     // Catch: java.lang.Exception -> L21
            if (r2 != 0) goto L1a
            if (r1 == 0) goto L1a
            java.lang.String r2 = "tkay_expressad"
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Exception -> L21
            r3.b = r1     // Catch: java.lang.Exception -> L21
        L1a:
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L21
            int r4 = r1.getInt(r4, r0)     // Catch: java.lang.Exception -> L21
            return r4
        L21:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    private java.lang.Long d(java.lang.String r6) {
            r5 = this;
            r0 = 0
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L2b
            android.content.Context r2 = r2.d()     // Catch: java.lang.Exception -> L2b
            if (r2 != 0) goto L11
            java.lang.Long r6 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> L2b
            return r6
        L11:
            android.content.SharedPreferences r3 = r5.b     // Catch: java.lang.Exception -> L2b
            if (r3 != 0) goto L20
            if (r2 == 0) goto L20
            java.lang.String r3 = "tkay_expressad"
            r4 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r4)     // Catch: java.lang.Exception -> L2b
            r5.b = r2     // Catch: java.lang.Exception -> L2b
        L20:
            android.content.SharedPreferences r2 = r5.b     // Catch: java.lang.Exception -> L2b
            long r2 = r2.getLong(r6, r0)     // Catch: java.lang.Exception -> L2b
            java.lang.Long r6 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L2b
            return r6
        L2b:
            r6 = move-exception
            r6.printStackTrace()
            java.lang.Long r6 = java.lang.Long.valueOf(r0)
            return r6
    }

    public final java.lang.String a(java.lang.String r5) {
            r4 = this;
            r0 = 0
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L24
            android.content.Context r1 = r1.d()     // Catch: java.lang.Exception -> L24
            if (r1 != 0) goto Lc
            return r0
        Lc:
            android.content.SharedPreferences r2 = r4.b     // Catch: java.lang.Exception -> L24
            if (r2 != 0) goto L1b
            if (r1 == 0) goto L1b
            java.lang.String r2 = "tkay_expressad"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Exception -> L24
            r4.b = r1     // Catch: java.lang.Exception -> L24
        L1b:
            android.content.SharedPreferences r1 = r4.b     // Catch: java.lang.Exception -> L24
            java.lang.String r2 = ""
            java.lang.String r5 = r1.getString(r5, r2)     // Catch: java.lang.Exception -> L24
            return r5
        L24:
            r5 = move-exception
            r5.printStackTrace()
            return r0
    }

    public final void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L27
            android.content.Context r0 = r0.d()     // Catch: java.lang.Exception -> L27
            if (r0 != 0) goto Lb
            return
        Lb:
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L27
            if (r1 != 0) goto L1a
            if (r0 == 0) goto L1a
            java.lang.String r1 = "tkay_expressad"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Exception -> L27
            r3.b = r0     // Catch: java.lang.Exception -> L27
        L1a:
            android.content.SharedPreferences r0 = r3.b     // Catch: java.lang.Exception -> L27
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L27
            r0.putString(r4, r5)     // Catch: java.lang.Exception -> L27
            r0.apply()     // Catch: java.lang.Exception -> L27
            return
        L27:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    public final void b(java.lang.String r4) {
            r3 = this;
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r0 = r0.d()
            if (r0 != 0) goto Lb
            return
        Lb:
            android.content.SharedPreferences r1 = r3.b
            if (r1 != 0) goto L1a
            if (r0 == 0) goto L1a
            r1 = 0
            java.lang.String r2 = "tkay_expressad"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            r3.b = r0
        L1a:
            android.content.SharedPreferences r0 = r3.b
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r4 = r0.remove(r4)
            r4.apply()
            return
    }
}
