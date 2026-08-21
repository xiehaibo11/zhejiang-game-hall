package com.tkay.expressad.video.signal.a;

public class j extends com.tkay.expressad.video.signal.a.c {
    private static final java.lang.String t = null;
    private static final java.lang.String y = "camp_position";
    private java.util.List<com.tkay.expressad.foundation.d.c> A;
    private int B;
    private java.lang.String C;
    private java.lang.String D;
    private boolean E;
    private boolean F;
    private boolean G;
    private android.app.Activity u;
    private java.lang.String v;
    private java.lang.String w;
    private android.content.Context x;
    private com.tkay.expressad.foundation.d.c z;

    static {
            java.lang.Class<com.tkay.expressad.video.signal.a.j> r0 = com.tkay.expressad.video.signal.a.j.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.video.signal.a.j.t = r0
            return
    }

    public j(android.app.Activity r2, com.tkay.expressad.foundation.d.c r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.C = r0
            r1.D = r0
            r0 = 0
            r1.E = r0
            r1.F = r0
            r0 = 1
            r1.G = r0
            r1.u = r2
            r1.z = r3
            return
    }

    public j(android.app.Activity r2, com.tkay.expressad.foundation.d.c r3, java.util.List<com.tkay.expressad.foundation.d.c> r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.C = r0
            r1.D = r0
            r0 = 0
            r1.E = r0
            r1.F = r0
            r0 = 1
            r1.G = r0
            r1.u = r2
            r1.z = r3
            r1.A = r4
            return
    }

    private static org.json.JSONObject A() {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.tkay.expressad.foundation.h.c r1 = new com.tkay.expressad.foundation.h.c     // Catch: org.json.JSONException -> L1c
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> L1c
            android.content.Context r2 = r2.f()     // Catch: org.json.JSONException -> L1c
            r1.<init>(r2)     // Catch: org.json.JSONException -> L1c
            java.lang.String r2 = "device"
            org.json.JSONObject r1 = r1.a()     // Catch: org.json.JSONException -> L1c
            r0.put(r2, r1)     // Catch: org.json.JSONException -> L1c
            goto L20
        L1c:
            r1 = move-exception
            r1.printStackTrace()
        L20:
            return r0
    }

    private org.json.JSONObject B() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1e
            r1.<init>()     // Catch: org.json.JSONException -> L1e
            java.lang.String r2 = "playVideoMute"
            int r3 = r4.s     // Catch: org.json.JSONException -> L1e
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L1e
            java.lang.String r2 = "instanceId"
            java.lang.String r3 = r4.C     // Catch: org.json.JSONException -> L1e
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L1e
            java.lang.String r2 = "sdkSetting"
            r0.put(r2, r1)     // Catch: org.json.JSONException -> L1e
            goto L22
        L1e:
            r1 = move-exception
            r1.printStackTrace()
        L22:
            return r0
    }

    private org.json.JSONObject C() {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.tkay.expressad.videocommon.e.d r1 = r2.o
            if (r1 == 0) goto Lf
            com.tkay.expressad.videocommon.e.d r0 = r2.o
            org.json.JSONObject r0 = r0.R()
        Lf:
            return r0
    }

    private static org.json.JSONObject D() {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.videocommon.e.a r1 = r1.b()
            if (r1 == 0) goto L13
            org.json.JSONObject r0 = r1.k()
        L13:
            return r0
    }

    private static boolean E() {
            r0 = 0
            return r0
    }

    private com.tkay.expressad.foundation.d.c a(java.lang.String r8, com.tkay.expressad.foundation.d.c r9) {
            r7 = this;
            java.lang.String r0 = "deep_link"
            java.lang.String r1 = "akdlui"
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 == 0) goto Lb
            return r9
        Lb:
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 == 0) goto L17
            if (r9 == 0) goto L14
            goto L17
        L14:
            r9 = 0
            goto L12a
        L17:
            java.lang.String r2 = "notice"
            boolean r2 = r8.contains(r2)
            if (r2 != 0) goto Le8
            org.json.JSONObject r0 = com.tkay.expressad.foundation.d.c.a(r9)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            com.tkay.expressad.foundation.d.c r1 = com.tkay.expressad.foundation.d.c.b(r0)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            if (r1 != 0) goto L2a
            r1 = r9
        L2a:
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            if (r2 != 0) goto Ldc
            a(r0, r1)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            r0.<init>(r8)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r8 = com.tkay.expressad.foundation.g.a.ce     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            org.json.JSONObject r8 = r0.optJSONObject(r8)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            if (r8 == 0) goto L70
            android.app.Activity r0 = r7.u     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r2 = com.tkay.expressad.foundation.g.a.cc     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r2 = r8.getString(r2)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            float r2 = (float) r2     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r2)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            android.app.Activity r0 = r7.u     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r2 = com.tkay.expressad.foundation.g.a.cd     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r2 = r8.getString(r2)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            float r2 = (float) r2     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r2)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
        L70:
            java.lang.String r0 = r1.ad()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            r1.p(r0)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r0 = r1.ah()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            if (r8 == 0) goto Ldc
            java.util.Iterator r2 = r8.keys()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            r3.<init>()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
        L86:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            if (r4 == 0) goto Lca
            java.lang.String r4 = "&"
            r3.append(r4)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r5 = r8.optString(r4)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r6 = com.tkay.expressad.foundation.g.a.cc     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            boolean r6 = r6.equals(r4)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            if (r6 != 0) goto Lab
            java.lang.String r6 = com.tkay.expressad.foundation.g.a.cd     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            boolean r6 = r6.equals(r4)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            if (r6 == 0) goto Lbe
        Lab:
            android.app.Activity r6 = r7.u     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            float r5 = (float) r5     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            int r5 = com.tkay.expressad.foundation.h.t.b(r6, r5)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
        Lbe:
            r3.append(r4)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r4 = "="
            r3.append(r4)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            r3.append(r5)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            goto L86
        Lca:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            r8.<init>()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            r8.append(r0)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            r8.append(r3)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
            r1.q(r8)     // Catch: java.lang.Throwable -> Lde org.json.JSONException -> Le3
        Ldc:
            r9 = r1
            goto L12a
        Lde:
            r8 = move-exception
            r8.printStackTrace()
            goto L12a
        Le3:
            r8 = move-exception
            r8.printStackTrace()
            goto L12a
        Le8:
            org.json.JSONObject r2 = com.tkay.expressad.foundation.d.c.a(r9)     // Catch: org.json.JSONException -> L126
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L126
            r3.<init>(r8)     // Catch: org.json.JSONException -> L126
            java.lang.Object r8 = r3.opt(r1)     // Catch: org.json.JSONException -> L126
            java.lang.String r4 = ""
            if (r8 != 0) goto Lfc
            r3.put(r1, r4)     // Catch: org.json.JSONException -> L126
        Lfc:
            boolean r8 = r3.has(r0)     // Catch: java.lang.Exception -> L105 org.json.JSONException -> L126
            if (r8 != 0) goto L105
            r2.put(r0, r4)     // Catch: java.lang.Exception -> L105 org.json.JSONException -> L126
        L105:
            java.util.Iterator r8 = r3.keys()     // Catch: org.json.JSONException -> L126
        L109:
            boolean r0 = r8.hasNext()     // Catch: org.json.JSONException -> L126
            if (r0 == 0) goto L11d
            java.lang.Object r0 = r8.next()     // Catch: org.json.JSONException -> L126
            java.lang.String r0 = (java.lang.String) r0     // Catch: org.json.JSONException -> L126
            java.lang.String r1 = r3.getString(r0)     // Catch: org.json.JSONException -> L126
            r2.put(r0, r1)     // Catch: org.json.JSONException -> L126
            goto L109
        L11d:
            com.tkay.expressad.foundation.d.c r8 = com.tkay.expressad.foundation.d.c.b(r2)     // Catch: org.json.JSONException -> L126
            a(r2, r8)     // Catch: org.json.JSONException -> L126
            r9 = r8
            goto L12a
        L126:
            r8 = move-exception
            r8.printStackTrace()
        L12a:
            return r9
    }

    private void a(org.json.JSONObject r8) {
            r7 = this;
            java.lang.String r0 = ""
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> La2
            android.content.Context r1 = r1.d()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = "Tkay_ConfirmTitle"
            r2.<init>(r3)     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r7.n     // Catch: java.lang.Exception -> La2
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La2
            java.lang.Object r2 = com.tkay.expressad.foundation.h.v.b(r1, r2, r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            java.lang.String r4 = "Tkay_ConfirmContent"
            r3.<init>(r4)     // Catch: java.lang.Exception -> La2
            java.lang.String r4 = r7.n     // Catch: java.lang.Exception -> La2
            r3.append(r4)     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> La2
            java.lang.Object r3 = com.tkay.expressad.foundation.h.v.b(r1, r3, r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            java.lang.String r5 = "Tkay_CancelText"
            r4.<init>(r5)     // Catch: java.lang.Exception -> La2
            java.lang.String r5 = r7.n     // Catch: java.lang.Exception -> La2
            r4.append(r5)     // Catch: java.lang.Exception -> La2
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> La2
            java.lang.Object r4 = com.tkay.expressad.foundation.h.v.b(r1, r4, r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            java.lang.String r6 = "Tkay_ConfirmText"
            r5.<init>(r6)     // Catch: java.lang.Exception -> La2
            java.lang.String r6 = r7.n     // Catch: java.lang.Exception -> La2
            r5.append(r6)     // Catch: java.lang.Exception -> La2
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> La2
            java.lang.Object r0 = com.tkay.expressad.foundation.h.v.b(r1, r5, r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> La2
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> La2
            if (r1 != 0) goto L75
            java.lang.String r1 = "confirm_title"
            r8.put(r1, r2)     // Catch: java.lang.Exception -> La2
        L75:
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> La2
            if (r1 != 0) goto L80
            java.lang.String r1 = "confirm_description"
            r8.put(r1, r3)     // Catch: java.lang.Exception -> La2
        L80:
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> La2
            if (r1 != 0) goto L8b
            java.lang.String r1 = "confirm_t"
            r8.put(r1, r4)     // Catch: java.lang.Exception -> La2
        L8b:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> La2
            if (r1 != 0) goto L96
            java.lang.String r1 = "confirm_c_play"
            r8.put(r1, r0)     // Catch: java.lang.Exception -> La2
        L96:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> La2
            if (r1 != 0) goto La1
            java.lang.String r1 = "confirm_c_rv"
            r8.put(r1, r0)     // Catch: java.lang.Exception -> La2
        La1:
            return
        La2:
            r8 = move-exception
            r8.printStackTrace()
            return
    }

    private static void a(org.json.JSONObject r1, com.tkay.expressad.foundation.d.c r2) {
            java.lang.String r0 = "unitId"
            java.lang.String r1 = r1.optString(r0)     // Catch: java.lang.Exception -> L10
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto Lf
            r2.l(r1)     // Catch: java.lang.Exception -> L10
        Lf:
            return
        L10:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private void b(com.tkay.expressad.foundation.d.c r5) {
            r4 = this;
            java.lang.String r0 = r5.ah()
            r1 = 0
            android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = com.tkay.expressad.foundation.g.a.cf     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = r0.getQueryParameter(r2)     // Catch: java.lang.Throwable -> L1a
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L1a
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L1a
            goto L1b
        L1a:
            r0 = r1
        L1b:
            com.tkay.expressad.video.signal.c$a r2 = r4.r
            r3 = 2
            if (r0 != r3) goto L21
            r1 = 1
        L21:
            r2.a(r5, r1)
            com.tkay.expressad.a.a r5 = r4.u()
            com.tkay.expressad.video.signal.c$a r0 = r4.r
            r5.a(r0)
            r4.u()
            return
    }

    private void c(boolean r1) {
            r0 = this;
            r0.G = r1
            return
    }

    private static boolean c(com.tkay.expressad.foundation.d.c r7) {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L37
            java.lang.String r0 = r0.e()     // Catch: java.lang.Exception -> L37
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L37
            r1 = 0
            if (r0 != 0) goto L21
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L37
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()     // Catch: java.lang.Exception -> L37
            if (r0 == 0) goto L21
            long r3 = r0.l()     // Catch: java.lang.Exception -> L37
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r5
            goto L22
        L21:
            r3 = r1
        L22:
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> L37
            com.tkay.expressad.videocommon.e.a r0 = r0.b()     // Catch: java.lang.Exception -> L37
            if (r0 == 0) goto L30
            long r1 = r0.c()     // Catch: java.lang.Exception -> L37
        L30:
            if (r7 == 0) goto L37
            boolean r7 = r7.a(r1, r3)     // Catch: java.lang.Exception -> L37
            return r7
        L37:
            r7 = 0
            return r7
    }

    private void e(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "camp_position"
            com.tkay.expressad.foundation.d.c r1 = r2.z
            if (r1 != 0) goto L7
            return
        L7:
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r2.A
            if (r1 != 0) goto Lc
            return
        Lc:
            int r1 = r1.size()
            if (r1 != 0) goto L13
            return
        L13:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2d
            r1.<init>(r3)     // Catch: org.json.JSONException -> L2d
            boolean r3 = r1.has(r0)     // Catch: org.json.JSONException -> L2d
            if (r3 == 0) goto L2c
            int r3 = r1.getInt(r0)     // Catch: org.json.JSONException -> L2d
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.A     // Catch: org.json.JSONException -> L2d
            java.lang.Object r3 = r0.get(r3)     // Catch: org.json.JSONException -> L2d
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: org.json.JSONException -> L2d
            r2.z = r3     // Catch: org.json.JSONException -> L2d
        L2c:
            return
        L2d:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    private boolean s() {
            r1 = this;
            boolean r0 = r1.G
            return r0
    }

    private java.lang.String t() {
            r7 = this;
            java.lang.String r0 = "unit_id"
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            com.tkay.expressad.foundation.h.c r2 = new com.tkay.expressad.foundation.h.c
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
            r2.<init>(r3)
            java.lang.String r3 = r7.n     // Catch: java.lang.Throwable -> L10a
            r1.put(r0, r3)     // Catch: java.lang.Throwable -> L10a
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10a
            r3.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "instanceId"
            java.lang.String r5 = r7.C     // Catch: java.lang.Throwable -> L10a
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "rootViewInstanceId"
            java.lang.String r5 = r7.D     // Catch: java.lang.Throwable -> L10a
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "isRootTemplateWebView"
            boolean r5 = r7.E     // Catch: java.lang.Throwable -> L10a
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r4.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = com.tkay.expressad.out.n.a     // Catch: java.lang.Throwable -> L10a
            r4.append(r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = ",3.0.1"
            r4.append(r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = "sdk_info"
            r1.put(r5, r4)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "playVideoMute"
            int r5 = r7.s     // Catch: java.lang.Throwable -> L10a
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "sdkSetting"
            r1.put(r4, r3)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = "device"
            org.json.JSONObject r2 = r2.a()     // Catch: java.lang.Throwable -> L10a
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L10a
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r7.A     // Catch: java.lang.Throwable -> L10a
            if (r3 == 0) goto L93
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r7.A     // Catch: java.lang.Throwable -> L10a
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L10a
            if (r3 <= 0) goto L93
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r7.A     // Catch: java.lang.Throwable -> L10a
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L10a
        L77:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L10a
            if (r4 == 0) goto L9c
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L10a
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4     // Catch: java.lang.Throwable -> L10a
            boolean r5 = r4.at()     // Catch: java.lang.Throwable -> L10a
            boolean r6 = c(r4)     // Catch: java.lang.Throwable -> L10a
            org.json.JSONObject r4 = com.tkay.expressad.foundation.d.c.a(r4, r5, r6)     // Catch: java.lang.Throwable -> L10a
            r2.put(r4)     // Catch: java.lang.Throwable -> L10a
            goto L77
        L93:
            com.tkay.expressad.foundation.d.c r3 = r7.z     // Catch: java.lang.Throwable -> L10a
            org.json.JSONObject r3 = com.tkay.expressad.foundation.d.c.a(r3)     // Catch: java.lang.Throwable -> L10a
            r2.put(r3)     // Catch: java.lang.Throwable -> L10a
        L9c:
            java.lang.String r3 = "campaignList"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L10a
            org.json.JSONObject r2 = r7.C()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = "unitSetting"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L10a
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r2.e()     // Catch: java.lang.Throwable -> L10a
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = com.tkay.expressad.d.b.a(r2)     // Catch: java.lang.Throwable -> L10a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L10a
            if (r3 != 0) goto Le5
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10a
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L10a
            r7.a(r3)     // Catch: java.lang.Throwable -> L10a
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r7.n     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = com.tkay.expressad.d.b.b(r2)     // Catch: java.lang.Throwable -> L10a
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L10a
            if (r4 != 0) goto Le0
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10a
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = "ivreward"
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L10a
        Le0:
            java.lang.String r2 = "appSetting"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L10a
        Le5:
            java.lang.String r2 = "rewardSetting"
            org.json.JSONObject r3 = D()     // Catch: java.lang.Throwable -> L10a
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r7.n     // Catch: java.lang.Throwable -> L10a
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L10a
            if (r2 != 0) goto Lfb
            java.lang.String r2 = r7.n     // Catch: java.lang.Throwable -> L10a
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L10a
        Lfb:
            java.lang.String r0 = "rw_plus"
            boolean r2 = r7.F     // Catch: java.lang.Throwable -> L10a
            if (r2 == 0) goto L104
            java.lang.String r2 = "1"
            goto L106
        L104:
            java.lang.String r2 = "0"
        L106:
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L10a
            goto L10e
        L10a:
            r0 = move-exception
            r0.printStackTrace()
        L10e:
            java.lang.String r0 = r1.toString()
            return r0
    }

    private com.tkay.expressad.a.a u() {
            r3 = this;
            com.tkay.expressad.a.a r0 = r3.q
            if (r0 != 0) goto L15
            com.tkay.expressad.a.a r0 = new com.tkay.expressad.a.a
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = r3.n
            r0.<init>(r1, r2)
            r3.q = r0
        L15:
            com.tkay.expressad.a.a r0 = r3.q
            return r0
    }

    private org.json.JSONObject v() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.tkay.expressad.foundation.h.c r1 = new com.tkay.expressad.foundation.h.c
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r1.<init>(r2)
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8c
            r2.<init>()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r3 = "playVideoMute"
            int r4 = r5.s     // Catch: java.lang.Throwable -> L8c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r3 = "sdkSetting"
            r0.put(r3, r2)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = "device"
            org.json.JSONObject r1 = r1.a()     // Catch: java.lang.Throwable -> L8c
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L8c
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L8c
            r1.<init>()     // Catch: java.lang.Throwable -> L8c
            com.tkay.expressad.foundation.d.c r2 = r5.z     // Catch: java.lang.Throwable -> L8c
            org.json.JSONObject r2 = com.tkay.expressad.foundation.d.c.a(r2)     // Catch: java.lang.Throwable -> L8c
            r1.put(r2)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = "campaignList"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L8c
            org.json.JSONObject r1 = r5.C()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = "unitSetting"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L8c
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r1 = r1.e()     // Catch: java.lang.Throwable -> L8c
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r1 = com.tkay.expressad.d.b.a(r1)     // Catch: java.lang.Throwable -> L8c
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L8c
            if (r2 != 0) goto L82
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8c
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L8c
            r5.a(r2)     // Catch: java.lang.Throwable -> L8c
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r1 = r5.n     // Catch: java.lang.Throwable -> L8c
            java.lang.String r1 = com.tkay.expressad.d.b.b(r1)     // Catch: java.lang.Throwable -> L8c
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L8c
            if (r3 != 0) goto L79
            java.lang.String r3 = "ivreward"
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L8c
        L79:
            java.lang.String r1 = "appSetting"
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8c
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L8c
        L82:
            java.lang.String r1 = "rewardSetting"
            org.json.JSONObject r2 = D()     // Catch: java.lang.Throwable -> L8c
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L8c
            goto L90
        L8c:
            r1 = move-exception
            r1.printStackTrace()
        L90:
            return r0
    }

    private static org.json.JSONObject w() {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "sdk_info"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L1e
            r2.<init>()     // Catch: org.json.JSONException -> L1e
            java.lang.String r3 = com.tkay.expressad.out.n.a     // Catch: org.json.JSONException -> L1e
            r2.append(r3)     // Catch: org.json.JSONException -> L1e
            java.lang.String r3 = ",3.0.1"
            r2.append(r3)     // Catch: org.json.JSONException -> L1e
            java.lang.String r2 = r2.toString()     // Catch: org.json.JSONException -> L1e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L1e
            goto L22
        L1e:
            r1 = move-exception
            r1.printStackTrace()
        L22:
            return r0
    }

    private org.json.JSONObject x() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.n     // Catch: org.json.JSONException -> L15
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L15
            if (r1 != 0) goto L19
            java.lang.String r1 = "unit_id"
            java.lang.String r2 = r3.n     // Catch: org.json.JSONException -> L15
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L15
            goto L19
        L15:
            r1 = move-exception
            r1.printStackTrace()
        L19:
            return r0
    }

    private static org.json.JSONObject y() {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: org.json.JSONException -> L25 java.lang.Throwable -> L29
            java.lang.String r1 = r1.e()     // Catch: org.json.JSONException -> L25 java.lang.Throwable -> L29
            com.tkay.expressad.d.b.a()     // Catch: org.json.JSONException -> L25 java.lang.Throwable -> L29
            java.lang.String r1 = com.tkay.expressad.d.b.a(r1)     // Catch: org.json.JSONException -> L25 java.lang.Throwable -> L29
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L25 java.lang.Throwable -> L29
            if (r2 != 0) goto L29
            java.lang.String r2 = "appSetting"
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L25 java.lang.Throwable -> L29
            r3.<init>(r1)     // Catch: org.json.JSONException -> L25 java.lang.Throwable -> L29
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L25 java.lang.Throwable -> L29
            goto L29
        L25:
            r1 = move-exception
            r1.printStackTrace()
        L29:
            return r0
    }

    private org.json.JSONObject z() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.tkay.expressad.videocommon.e.d r1 = r3.o     // Catch: org.json.JSONException -> L15
            if (r1 == 0) goto L19
            java.lang.String r1 = "unitSetting"
            com.tkay.expressad.videocommon.e.d r2 = r3.o     // Catch: org.json.JSONException -> L15
            org.json.JSONObject r2 = r2.R()     // Catch: org.json.JSONException -> L15
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L15
            goto L19
        L15:
            r1 = move-exception
            r1.printStackTrace()
        L19:
            return r0
    }

    @Override
    public final void a(int r12, java.lang.String r13) {
            r11 = this;
            java.lang.String r0 = "-1"
            java.lang.String r1 = "event"
            super.a(r12, r13)
            r2 = 2
            if (r12 == r2) goto Lb
            goto L48
        Lb:
            org.json.JSONObject r12 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L49
            r12.<init>(r13)     // Catch: java.lang.Throwable -> L49
            java.lang.String r4 = r12.optString(r1, r1)     // Catch: java.lang.Throwable -> L49
            java.lang.String r13 = "template"
            java.lang.String r5 = r12.optString(r13, r0)     // Catch: java.lang.Throwable -> L49
            java.lang.String r13 = "layout"
            java.lang.String r6 = r12.optString(r13, r0)     // Catch: java.lang.Throwable -> L49
            java.lang.String r13 = "unit_id"
            java.lang.String r0 = r11.n     // Catch: java.lang.Throwable -> L49
            java.lang.String r7 = r12.optString(r13, r0)     // Catch: java.lang.Throwable -> L49
            android.app.Activity r12 = r11.u     // Catch: java.lang.Throwable -> L49
            r12.getApplication()     // Catch: java.lang.Throwable -> L49
            int r9 = com.tkay.expressad.foundation.h.k.a()     // Catch: java.lang.Throwable -> L49
            com.tkay.expressad.foundation.d.r r2 = new com.tkay.expressad.foundation.d.r     // Catch: java.lang.Throwable -> L49
            java.lang.String r3 = "2000039"
            com.tkay.expressad.foundation.d.c r12 = r11.z     // Catch: java.lang.Throwable -> L49
            java.lang.String r8 = r12.aZ()     // Catch: java.lang.Throwable -> L49
            android.app.Activity r12 = r11.u     // Catch: java.lang.Throwable -> L49
            android.app.Application r12 = r12.getApplication()     // Catch: java.lang.Throwable -> L49
            java.lang.String r10 = com.tkay.expressad.foundation.h.k.a(r12, r9)     // Catch: java.lang.Throwable -> L49
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L49
        L48:
            return
        L49:
            r12 = move-exception
            r12.getMessage()
            return
    }

    @Override
    public final void a(android.app.Activity r1) {
            r0 = this;
            r0.u = r1
            return
    }

    @Override
    public final void a(android.content.Context r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public final void a(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.A = r1
            return
    }

    @Override
    public final void b(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L8
            r1.w = r2
        L8:
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.F = r1
            return
    }

    public final void c(java.lang.String r1) {
            r0 = this;
            r0.C = r1
            return
    }

    @Override
    public void click(int r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "camp_position"
            super.click(r5, r6)
            com.tkay.expressad.foundation.d.c r1 = r4.z
            if (r1 == 0) goto L3c
            int r1 = r1.k()
            r2 = 5
            if (r1 != r2) goto L3c
            com.tkay.expressad.foundation.d.c r1 = r4.z
            if (r1 == 0) goto L3c
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r4.A
            if (r1 == 0) goto L3c
            int r1 = r1.size()
            if (r1 == 0) goto L3c
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L38
            r1.<init>(r6)     // Catch: org.json.JSONException -> L38
            boolean r2 = r1.has(r0)     // Catch: org.json.JSONException -> L38
            if (r2 == 0) goto L3c
            int r0 = r1.getInt(r0)     // Catch: org.json.JSONException -> L38
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r4.A     // Catch: org.json.JSONException -> L38
            java.lang.Object r0 = r1.get(r0)     // Catch: org.json.JSONException -> L38
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: org.json.JSONException -> L38
            r4.z = r0     // Catch: org.json.JSONException -> L38
            goto L3c
        L38:
            r0 = move-exception
            r0.printStackTrace()
        L3c:
            r0 = 1
            if (r5 == r0) goto L74
            r1 = 3
            if (r5 == r1) goto L43
            goto L73
        L43:
            com.tkay.expressad.foundation.d.c r5 = r4.z     // Catch: java.lang.Throwable -> Lcb
            if (r5 == 0) goto L57
            com.tkay.expressad.foundation.d.c r5 = r4.z     // Catch: java.lang.Throwable -> Lcb
            int r5 = r5.g()     // Catch: java.lang.Throwable -> Lcb
            r1 = -2
            if (r5 <= r1) goto L57
            com.tkay.expressad.foundation.d.c r5 = r4.z     // Catch: java.lang.Throwable -> Lcb
            int r5 = r5.g()     // Catch: java.lang.Throwable -> Lcb
            goto L63
        L57:
            com.tkay.expressad.videocommon.e.d r5 = r4.o     // Catch: java.lang.Throwable -> Lcb
            if (r5 == 0) goto L62
            com.tkay.expressad.videocommon.e.d r5 = r4.o     // Catch: java.lang.Throwable -> Lcb
            int r5 = r5.p()     // Catch: java.lang.Throwable -> Lcb
            goto L63
        L62:
            r5 = r0
        L63:
            r1 = -1
            if (r5 != r1) goto L70
            com.tkay.expressad.video.signal.a.c$b r5 = new com.tkay.expressad.video.signal.a.c$b     // Catch: java.lang.Throwable -> Lcb
            com.tkay.expressad.video.signal.c$a r1 = r4.r     // Catch: java.lang.Throwable -> Lcb
            r5.<init>(r4, r1)     // Catch: java.lang.Throwable -> Lcb
            r4.a(r5)     // Catch: java.lang.Throwable -> Lcb
        L70:
            r4.click(r0, r6)     // Catch: java.lang.Throwable -> Lcb
        L73:
            return
        L74:
            com.tkay.expressad.foundation.d.c r5 = r4.z     // Catch: java.lang.Throwable -> Lcb
            r1 = 0
            if (r5 != 0) goto L8f
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r4.A     // Catch: java.lang.Throwable -> Lcb
            if (r5 == 0) goto L8f
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r4.A     // Catch: java.lang.Throwable -> Lcb
            int r5 = r5.size()     // Catch: java.lang.Throwable -> Lcb
            if (r5 <= 0) goto L8f
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r4.A     // Catch: java.lang.Throwable -> Lcb
            java.lang.Object r5 = r5.get(r1)     // Catch: java.lang.Throwable -> Lcb
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5     // Catch: java.lang.Throwable -> Lcb
            r4.z = r5     // Catch: java.lang.Throwable -> Lcb
        L8f:
            com.tkay.expressad.foundation.d.c r5 = r4.z     // Catch: java.lang.Throwable -> Lcb
            if (r5 != 0) goto L94
            return
        L94:
            com.tkay.expressad.foundation.d.c r5 = r4.z     // Catch: java.lang.Throwable -> Lcb
            com.tkay.expressad.foundation.d.c r5 = r4.a(r6, r5)     // Catch: java.lang.Throwable -> Lcb
            java.lang.String r6 = r5.ah()     // Catch: java.lang.Throwable -> Lcb
            android.net.Uri r6 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = com.tkay.expressad.foundation.g.a.cf     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r6 = r6.getQueryParameter(r2)     // Catch: java.lang.Throwable -> Lb3
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lb3
            if (r2 != 0) goto Lb3
            int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> Lb3
            goto Lb4
        Lb3:
            r6 = r1
        Lb4:
            com.tkay.expressad.video.signal.c$a r2 = r4.r     // Catch: java.lang.Throwable -> Lcb
            r3 = 2
            if (r6 != r3) goto Lba
            goto Lbb
        Lba:
            r0 = r1
        Lbb:
            r2.a(r5, r0)     // Catch: java.lang.Throwable -> Lcb
            com.tkay.expressad.a.a r5 = r4.u()     // Catch: java.lang.Throwable -> Lcb
            com.tkay.expressad.video.signal.c$a r6 = r4.r     // Catch: java.lang.Throwable -> Lcb
            r5.a(r6)     // Catch: java.lang.Throwable -> Lcb
            r4.u()     // Catch: java.lang.Throwable -> Lcb
            return
        Lcb:
            r5 = move-exception
            r5.getMessage()
            return
    }

    public final void d(java.lang.String r1) {
            r0 = this;
            r0.D = r1
            return
    }

    @Override
    public final java.lang.String h(int r1) {
            r0 = this;
            switch(r1) {
                case 1: goto L39;
                case 2: goto L30;
                case 3: goto L27;
                case 4: goto L1e;
                case 5: goto L15;
                case 6: goto Lc;
                default: goto L3;
            }
        L3:
            org.json.JSONObject r1 = r0.v()
            java.lang.String r1 = r1.toString()
            goto L41
        Lc:
            org.json.JSONObject r1 = r0.B()
            java.lang.String r1 = r1.toString()
            goto L41
        L15:
            org.json.JSONObject r1 = A()
            java.lang.String r1 = r1.toString()
            goto L41
        L1e:
            org.json.JSONObject r1 = r0.z()
            java.lang.String r1 = r1.toString()
            goto L41
        L27:
            org.json.JSONObject r1 = y()
            java.lang.String r1 = r1.toString()
            goto L41
        L30:
            org.json.JSONObject r1 = r0.x()
            java.lang.String r1 = r1.toString()
            goto L41
        L39:
            org.json.JSONObject r1 = w()
            java.lang.String r1 = r1.toString()
        L41:
            return r1
    }

    @Override
    public void handlerH5Exception(int r2, java.lang.String r3) {
            r1 = this;
            super.handlerH5Exception(r2, r3)
            com.tkay.expressad.video.signal.c$a r0 = r1.r     // Catch: java.lang.Throwable -> L9
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r2 = move-exception
            r2.getMessage()
            return
    }

    @Override
    public final java.lang.String i() {
            r1 = this;
            com.tkay.expressad.video.signal.c$a r0 = r1.r
            r0.c()
            r0 = 1
            r1.e = r0
            java.lang.String r0 = r1.v
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L16
            java.lang.String r0 = r1.t()
            r1.v = r0
        L16:
            java.lang.String r0 = r1.v
            return r0
    }

    @Override
    public final void j() {
            r1 = this;
            super.j()
            android.app.Activity r0 = r1.u     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            android.app.Activity r0 = r1.u     // Catch: java.lang.Throwable -> Ld
            r0.finish()     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public final void j(int r1) {
            r0 = this;
            r0.B = r1
            return
    }

    @Override
    public final void l() {
            r1 = this;
            super.l()
            com.tkay.expressad.video.signal.c$a r0 = r1.r
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.signal.c$a r0 = r1.r
            r0.d()
        Lc:
            return
    }

    @Override
    public final java.lang.String o() {
            r1 = this;
            java.lang.String r0 = r1.w
            return r0
    }

    public final void p() {
            r1 = this;
            r0 = 1
            r1.E = r0
            return
    }

    public final void q() {
            r1 = this;
            java.lang.String r0 = ""
            r1.v = r0
            return
    }

    public final int r() {
            r1 = this;
            int r0 = r1.B
            return r0
    }
}
