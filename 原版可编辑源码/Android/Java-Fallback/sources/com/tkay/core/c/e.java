package com.tkay.core.c;

public class e {
    public static final java.lang.String a = null;
    private static volatile com.tkay.core.c.e b;
    private android.content.Context c;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.c.d> d;


    public interface a {
        void a(com.tkay.core.api.AdError r1);

        void a(com.tkay.core.c.d r1);

        void b(com.tkay.core.c.d r1);
    }

    static {
            java.lang.Class<com.tkay.core.c.e> r0 = com.tkay.core.c.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.c.e.a = r0
            r0 = 0
            com.tkay.core.c.e.b = r0
            return
    }

    private e(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.d = r0
            r1.c = r2
            return
    }

    static android.content.Context a(com.tkay.core.c.e r0) {
            android.content.Context r0 = r0.c
            return r0
    }

    public static com.tkay.core.c.e a(android.content.Context r2) {
            com.tkay.core.c.e r0 = com.tkay.core.c.e.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.c.e> r0 = com.tkay.core.c.e.class
            monitor-enter(r0)
            com.tkay.core.c.e r1 = com.tkay.core.c.e.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.c.e r1 = new com.tkay.core.c.e     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.c.e.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.c.e r2 = com.tkay.core.c.e.b
            return r2
    }

    static void a(android.content.Context r2, com.tkay.core.c.d r3) {
            int r3 = r3.e()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.c(r3)
            java.lang.String r0 = "tkay_sdk"
            java.lang.String r1 = "r"
            com.tkay.core.common.l.p.a(r2, r0, r1, r3)
            return
    }

    private void a(org.json.JSONObject r2, org.json.JSONObject r3, java.lang.String r4) {
            r1 = this;
            if (r2 == 0) goto L28
            if (r3 != 0) goto Lb
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lb
            goto L28
        Lb:
            java.lang.String r0 = "p_c"
            if (r3 == 0) goto L13
            r2.put(r0, r3)     // Catch: java.lang.Exception -> L28
            return
        L13:
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L28
            if (r3 != 0) goto L28
            com.tkay.core.c.d r3 = r1.b(r4)     // Catch: java.lang.Exception -> L28
            if (r3 == 0) goto L28
            org.json.JSONObject r3 = r3.ax()     // Catch: java.lang.Exception -> L28
            if (r3 == 0) goto L28
            r2.put(r0, r3)     // Catch: java.lang.Exception -> L28
        L28:
            return
    }

    private void b() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.c.d> r0 = r1.d
            r0.clear()
            return
    }

    private static void b(android.content.Context r2, com.tkay.core.c.d r3) {
            int r3 = r3.e()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.c(r3)
            java.lang.String r0 = "tkay_sdk"
            java.lang.String r1 = "r"
            com.tkay.core.common.l.p.a(r2, r0, r1, r3)
            return
    }

    private java.util.List<com.tkay.core.common.f.r> c(java.lang.String r5) {
            r4 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.c.d> r0 = r4.d
            if (r0 != 0) goto L6
            r5 = 0
            return r5
        L6:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.c.d> r1 = r4.d
            java.util.Collection r1 = r1.values()
            r0.addAll(r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.Iterator r0 = r0.iterator()
        L1d:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L41
            java.lang.Object r2 = r0.next()
            com.tkay.core.c.d r2 = (com.tkay.core.c.d) r2
            int r3 = r2.Y()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            boolean r3 = android.text.TextUtils.equals(r3, r5)
            if (r3 == 0) goto L1d
            java.util.List r2 = r2.F()
            if (r2 == 0) goto L1d
            r1.addAll(r2)
            goto L1d
        L41:
            return r1
    }

    public final com.tkay.core.c.d a(java.lang.String r6) {
            r5 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            java.lang.String r1 = ""
            if (r0 == 0) goto Ld
            goto Le
        Ld:
            r0 = r1
        Le:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.c.d> r2 = r5.d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            boolean r2 = r2.containsKey(r3)
            if (r2 == 0) goto L3d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.c.d> r1 = r5.d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            java.lang.Object r6 = r1.get(r6)
            com.tkay.core.c.d r6 = (com.tkay.core.c.d) r6
            return r6
        L3d:
            android.content.Context r2 = r5.c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r6)
            java.lang.String r4 = "_PL_SY"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "tkay_sdk"
            java.lang.String r1 = com.tkay.core.common.l.p.b(r2, r4, r3, r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L7a
            com.tkay.core.c.d r1 = com.tkay.core.c.d.b(r1)
            if (r1 == 0) goto L79
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.c.d> r2 = r5.d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            r2.put(r6, r1)
        L79:
            return r1
        L7a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "no key["
            r1.<init>(r2)
            r1.append(r0)
            r1.append(r6)
            java.lang.String r6 = "]"
            r1.append(r6)
            r6 = 0
            return r6
    }

    public final void a() {
            r3 = this;
            android.content.Context r0 = r3.c
            java.lang.String r1 = "tkay_placement_strategy_update_check"
            if (r0 == 0) goto L16
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L16
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L16
            android.content.SharedPreferences$Editor r0 = r0.clear()     // Catch: java.lang.Throwable -> L16
            r0.apply()     // Catch: java.lang.Throwable -> L16
        L16:
            return
    }

    public final void a(android.content.Context r4, java.lang.String r5, com.tkay.core.c.d r6, java.lang.String r7) {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            java.lang.String r0 = ""
        Ld:
            monitor-enter(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.c.d> r1 = r3.d     // Catch: java.lang.Throwable -> L5e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            r2.<init>()     // Catch: java.lang.Throwable -> L5e
            r2.append(r0)     // Catch: java.lang.Throwable -> L5e
            r2.append(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5e
            r1.put(r2, r6)     // Catch: java.lang.Throwable -> L5e
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L5e
            int r6 = r6.i()
            r1 = 1
            if (r6 != r1) goto L3c
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            boolean r4 = r4.H()
            if (r4 == 0) goto L3b
            java.lang.String r4 = "tkay"
            java.lang.String r5 = "PreInitNetwork may affect DebuggerMode.It is recommended to disable PreInitNetwork first and then setDebuggerMode."
            android.util.Log.e(r4, r5)
        L3b:
            return
        L3c:
            boolean r6 = android.text.TextUtils.isEmpty(r7)
            if (r6 == 0) goto L44
            java.lang.String r7 = ""
        L44:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            r6.append(r5)
            java.lang.String r5 = "_PL_SY"
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            java.lang.String r6 = "tkay_sdk"
            com.tkay.core.common.l.p.a(r4, r6, r5, r7)
            return
        L5e:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final void a(com.tkay.core.c.d r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.util.Map<java.lang.String, java.lang.Object> r15, com.tkay.core.c.e.a r16) {
            r10 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.c.e$1 r9 = new com.tkay.core.c.e$1
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r14
            r5 = r16
            r6 = r12
            r7 = r13
            r8 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r0.a(r9)
            return
    }

    public final com.tkay.core.c.d b(java.lang.String r4) {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.c.d> r1 = r3.d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            java.lang.Object r4 = r1.get(r4)
            com.tkay.core.c.d r4 = (com.tkay.core.c.d) r4
            return r4
    }
}
