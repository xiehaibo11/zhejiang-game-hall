package com.tkay.expressad.videocommon.e;

public class c {
    public static final java.lang.String a = "reward";
    private static final java.lang.String c = "RewardSettingManager";
    private static java.util.Map<java.lang.String, com.tkay.expressad.videocommon.e.d> e;
    private static volatile com.tkay.expressad.videocommon.e.c f;
    public com.tkay.expressad.videocommon.e.a b;
    private java.lang.Object d;

    final class 1 implements com.tkay.expressad.videocommon.b.g.d {
        final com.tkay.expressad.videocommon.e.c a;

        1(com.tkay.expressad.videocommon.e.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r1) {
                r0 = this;
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 3
            r0.<init>(r1)
            com.tkay.expressad.videocommon.e.c.e = r0
            return
    }

    private c() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.d = r0
            r0 = 0
            r1.b = r0
            com.tkay.expressad.videocommon.e.a r0 = c()
            r1.b = r0
            return
    }

    public static com.tkay.expressad.videocommon.e.c a() {
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.f
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.videocommon.e.c> r0 = com.tkay.expressad.videocommon.e.c.class
            monitor-enter(r0)
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.videocommon.e.c r1 = new com.tkay.expressad.videocommon.e.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.videocommon.e.c.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.f
            return r0
    }

    private static com.tkay.expressad.videocommon.e.d a(boolean r6) {
            com.tkay.expressad.videocommon.e.d r0 = new com.tkay.expressad.videocommon.e.d
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L76
            r1.<init>()     // Catch: java.lang.Exception -> L76
            com.tkay.expressad.videocommon.c.b r2 = new com.tkay.expressad.videocommon.c.b     // Catch: java.lang.Exception -> L76
            r3 = 1
            r4 = 15
            r5 = 0
            r2.<init>(r3, r4, r5)     // Catch: java.lang.Exception -> L76
            r1.add(r2)     // Catch: java.lang.Exception -> L76
            r0.a(r1)     // Catch: java.lang.Exception -> L76
            r0.B()     // Catch: java.lang.Exception -> L76
            r0.z()     // Catch: java.lang.Exception -> L76
            r0.C()     // Catch: java.lang.Exception -> L76
            r0.H()     // Catch: java.lang.Exception -> L76
            r0.E()     // Catch: java.lang.Exception -> L76
            r0.G()     // Catch: java.lang.Exception -> L76
            r0.t()     // Catch: java.lang.Exception -> L76
            r0.u()     // Catch: java.lang.Exception -> L76
            r0.w()     // Catch: java.lang.Exception -> L76
            r0.y()     // Catch: java.lang.Exception -> L76
            r0.s()     // Catch: java.lang.Exception -> L76
            r0.i()     // Catch: java.lang.Exception -> L76
            r0.T()     // Catch: java.lang.Exception -> L76
            r0.g()     // Catch: java.lang.Exception -> L76
            if (r6 == 0) goto L4a
            r6 = 5
            r0.a(r6)     // Catch: java.lang.Exception -> L76
            goto L4e
        L4a:
            r6 = -1
            r0.a(r6)     // Catch: java.lang.Exception -> L76
        L4e:
            r0.d()     // Catch: java.lang.Exception -> L76
            r0.c()     // Catch: java.lang.Exception -> L76
            r0.q()     // Catch: java.lang.Exception -> L76
            r0.N()     // Catch: java.lang.Exception -> L76
            r0.P()     // Catch: java.lang.Exception -> L76
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Exception -> L76
            r6.<init>()     // Catch: java.lang.Exception -> L76
            r1 = 4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L76
            r6.add(r1)     // Catch: java.lang.Exception -> L76
            r1 = 6
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L76
            r6.add(r1)     // Catch: java.lang.Exception -> L76
            r0.a(r6)     // Catch: java.lang.Exception -> L76
            goto L7a
        L76:
            r6 = move-exception
            r6.printStackTrace()
        L7a:
            return r0
    }

    private void a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            com.tkay.expressad.videocommon.e.c$1 r1 = new com.tkay.expressad.videocommon.e.c$1
            r1.<init>(r2)
            r0.b(r3, r1)
            return
    }

    private static boolean b(java.lang.String r3) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L2f
            if (r1 != 0) goto L2e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2f
            r1.<init>(r3)     // Catch: java.lang.Exception -> L2f
            java.lang.String r3 = "unitSetting"
            org.json.JSONArray r3 = r1.optJSONArray(r3)     // Catch: java.lang.Exception -> L2f
            if (r3 == 0) goto L2e
            org.json.JSONObject r1 = r3.optJSONObject(r0)     // Catch: java.lang.Exception -> L2f
            java.lang.String r2 = "unitId"
            java.lang.String r1 = r1.optString(r2)     // Catch: java.lang.Exception -> L2f
            if (r3 == 0) goto L2e
            int r3 = r3.length()     // Catch: java.lang.Exception -> L2f
            if (r3 <= 0) goto L2e
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L2f
            if (r3 != 0) goto L2e
            r3 = 1
            return r3
        L2e:
            return r0
        L2f:
            r3 = move-exception
            r3.printStackTrace()
            return r0
    }

    public static com.tkay.expressad.videocommon.e.a c() {
            com.tkay.expressad.videocommon.e.a r0 = new com.tkay.expressad.videocommon.e.a
            r0.<init>()
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 5
            r1.<init>(r2)
            r2 = 1000(0x3e8, float:1.401E-42)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "1"
            r1.put(r3, r2)
            java.lang.String r4 = "9"
            r1.put(r4, r2)
            java.lang.String r4 = "8"
            r1.put(r4, r2)
            java.util.HashMap r2 = new java.util.HashMap
            r4 = 3
            r2.<init>(r4)
            com.tkay.expressad.videocommon.c.c r4 = new com.tkay.expressad.videocommon.c.c
            java.lang.String r5 = "Virtual Item"
            r6 = 1
            r4.<init>(r5, r6)
            r2.put(r3, r4)
            r0.a(r1)
            r0.b(r2)
            r0.a()
            r0.b()
            r0.d()
            r0.f()
            r0.h()
            return r0
    }

    public final com.tkay.expressad.videocommon.e.d a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.Object r0 = r3.d
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "reward_"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3e
            r1.append(r4)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = "_"
            r1.append(r4)     // Catch: java.lang.Throwable -> L3e
            r1.append(r5)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L3e
            java.util.Map<java.lang.String, com.tkay.expressad.videocommon.e.d> r5 = com.tkay.expressad.videocommon.e.c.e     // Catch: java.lang.Throwable -> L3e
            boolean r5 = r5.containsKey(r4)     // Catch: java.lang.Throwable -> L3e
            if (r5 == 0) goto L2b
            java.util.Map<java.lang.String, com.tkay.expressad.videocommon.e.d> r5 = com.tkay.expressad.videocommon.e.c.e     // Catch: java.lang.Throwable -> L3e
            java.lang.Object r4 = r5.get(r4)     // Catch: java.lang.Throwable -> L3e
            com.tkay.expressad.videocommon.e.d r4 = (com.tkay.expressad.videocommon.e.d) r4     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            return r4
        L2b:
            com.tkay.expressad.foundation.a.a.a r5 = com.tkay.expressad.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r5 = r5.a(r4)     // Catch: java.lang.Throwable -> L3e
            com.tkay.expressad.videocommon.e.d r5 = com.tkay.expressad.videocommon.e.d.c(r5)     // Catch: java.lang.Throwable -> L3e
            java.util.Map<java.lang.String, com.tkay.expressad.videocommon.e.d> r1 = com.tkay.expressad.videocommon.e.c.e     // Catch: java.lang.Throwable -> L3e
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            return r5
        L3e:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public final com.tkay.expressad.videocommon.e.d a(java.lang.String r4, java.lang.String r5, boolean r6) {
            r3 = this;
            java.lang.Object r0 = r3.d
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = "reward_"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2e
            r1.append(r4)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r4 = "_"
            r1.append(r4)     // Catch: java.lang.Throwable -> L2e
            r1.append(r5)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L2e
            java.util.Map<java.lang.String, com.tkay.expressad.videocommon.e.d> r5 = com.tkay.expressad.videocommon.e.c.e     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r5 = r5.get(r4)     // Catch: java.lang.Throwable -> L2e
            com.tkay.expressad.videocommon.e.d r5 = (com.tkay.expressad.videocommon.e.d) r5     // Catch: java.lang.Throwable -> L2e
            if (r5 != 0) goto L2c
            com.tkay.expressad.videocommon.e.d r5 = a(r6)     // Catch: java.lang.Throwable -> L2e
            java.util.Map<java.lang.String, com.tkay.expressad.videocommon.e.d> r6 = com.tkay.expressad.videocommon.e.c.e     // Catch: java.lang.Throwable -> L2e
            r6.put(r4, r5)     // Catch: java.lang.Throwable -> L2e
        L2c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return r5
        L2e:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public final void a(java.lang.String r3, boolean r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L45
            com.tkay.expressad.videocommon.e.c r0 = a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            com.tkay.expressad.videocommon.e.d r3 = r0.a(r1, r3, r4)
            if (r3 == 0) goto L1d
            java.lang.String r3 = com.tkay.expressad.videocommon.e.d.J()
            goto L1f
        L1d:
            java.lang.String r3 = ""
        L1f:
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L45
            com.tkay.expressad.videocommon.b.g r4 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r4 = r4.c(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L45
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L45
            com.tkay.expressad.videocommon.b.g r4 = com.tkay.expressad.videocommon.b.g.a()
            com.tkay.expressad.videocommon.e.c$1 r0 = new com.tkay.expressad.videocommon.e.c$1
            r0.<init>(r2)
            r4.b(r3, r0)
        L45:
            return
    }

    public final com.tkay.expressad.videocommon.e.a b() {
            r1 = this;
            com.tkay.expressad.videocommon.e.a r0 = r1.b
            if (r0 != 0) goto L8
            com.tkay.expressad.videocommon.e.a r0 = c()
        L8:
            return r0
    }
}
