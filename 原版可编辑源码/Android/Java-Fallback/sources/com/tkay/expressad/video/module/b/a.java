package com.tkay.expressad.video.module.b;

public final class a {
    public static java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> a = null;
    private static final java.lang.String b = "VideoViewReport";

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.video.module.b.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r3, com.tkay.expressad.foundation.g.f.h.b r4) {
            java.lang.String r4 = r4.a()
            java.lang.String r4 = r4.trim()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L44
            java.lang.String r0 = "?"
            boolean r1 = r3.endsWith(r0)
            if (r1 != 0) goto L34
            java.lang.String r1 = "&"
            boolean r2 = r3.endsWith(r1)
            if (r2 != 0) goto L34
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            boolean r3 = r3.contains(r0)
            if (r3 == 0) goto L2d
            r0 = r1
        L2d:
            r2.append(r0)
            java.lang.String r3 = r2.toString()
        L34:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            goto L46
        L44:
            java.lang.String r3 = ""
        L46:
            return r3
    }

    public static void a() {
            return
    }

    public static void a(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.o()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.o()
            r2 = 0
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    public static void a(android.content.Context r7, com.tkay.expressad.foundation.d.c r8, int r9, int r10) {
            com.tkay.expressad.foundation.d.n r0 = r8.L()     // Catch: java.lang.Throwable -> La4
            java.lang.String[] r0 = r0.p()     // Catch: java.lang.Throwable -> La4
            if (r8 == 0) goto La4
            com.tkay.expressad.foundation.d.n r1 = r8.L()     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto La4
            if (r0 == 0) goto La4
            int r1 = r0.length     // Catch: java.lang.Throwable -> La4
            java.lang.String[] r1 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> La4
            r2 = 0
        L16:
            int r3 = r0.length     // Catch: java.lang.Throwable -> La4
            r4 = 1
            if (r2 >= r3) goto L9d
            r3 = r0[r2]     // Catch: java.lang.Throwable -> La4
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La4
            r5.<init>()     // Catch: java.lang.Throwable -> La4
            java.lang.String r6 = "endscreen_type"
            r5.put(r6, r9)     // Catch: java.lang.Throwable -> La4
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> La4
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> La4
            if (r6 != 0) goto L34
            java.lang.String r5 = com.tkay.expressad.foundation.h.j.a(r5)     // Catch: java.lang.Throwable -> La4
        L34:
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> La4
            if (r6 != 0) goto L52
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4
            r6.<init>()     // Catch: java.lang.Throwable -> La4
            r6.append(r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = "&value="
            r6.append(r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = java.net.URLEncoder.encode(r5)     // Catch: java.lang.Throwable -> La4
            r6.append(r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Throwable -> La4
        L52:
            int r5 = r8.n()     // Catch: java.lang.Throwable -> La4
            java.lang.String r6 = "&tmorl="
            if (r5 != r4) goto L79
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4
            r4.<init>()     // Catch: java.lang.Throwable -> La4
            r4.append(r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = "&to=1&cbt="
            r4.append(r3)     // Catch: java.lang.Throwable -> La4
            int r3 = r8.az()     // Catch: java.lang.Throwable -> La4
            r4.append(r3)     // Catch: java.lang.Throwable -> La4
            r4.append(r6)     // Catch: java.lang.Throwable -> La4
            r4.append(r10)     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> La4
            goto L97
        L79:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4
            r4.<init>()     // Catch: java.lang.Throwable -> La4
            r4.append(r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = "&to=0&cbt="
            r4.append(r3)     // Catch: java.lang.Throwable -> La4
            int r3 = r8.az()     // Catch: java.lang.Throwable -> La4
            r4.append(r3)     // Catch: java.lang.Throwable -> La4
            r4.append(r6)     // Catch: java.lang.Throwable -> La4
            r4.append(r10)     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> La4
        L97:
            r1[r2] = r3     // Catch: java.lang.Throwable -> La4
            int r2 = r2 + 1
            goto L16
        L9d:
            java.lang.String r9 = r8.K()     // Catch: java.lang.Throwable -> La4
            com.tkay.expressad.a.a.a(r7, r8, r9, r1, r4)     // Catch: java.lang.Throwable -> La4
        La4:
            return
    }

    public static void a(android.content.Context r8, com.tkay.expressad.foundation.d.c r9, int r10, int r11, int r12) {
            if (r11 == 0) goto Lb5
            if (r8 == 0) goto Lb5
            if (r9 != 0) goto L8
            goto Lb5
        L8:
            com.tkay.expressad.foundation.d.n r0 = r9.L()     // Catch: java.lang.Throwable -> Lb5
            java.util.List r0 = r0.i()     // Catch: java.lang.Throwable -> Lb5
            r1 = 1
            int r10 = r10 + r1
            int r10 = r10 * 100
            int r10 = r10 / r11
            if (r0 == 0) goto Lb5
            r11 = 0
            r2 = r11
        L19:
            int r3 = r0.size()     // Catch: java.lang.Throwable -> Lb5
            if (r2 >= r3) goto Lb5
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Throwable -> Lb5
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Throwable -> Lb5
            if (r3 == 0) goto Lb2
            int r4 = r3.size()     // Catch: java.lang.Throwable -> Lb5
            if (r4 <= 0) goto Lb2
            java.util.Set r3 = r3.entrySet()     // Catch: java.lang.Throwable -> Lb5
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> Lb5
        L35:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> Lb5
            if (r4 == 0) goto Lb2
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> Lb5
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> Lb5
            java.lang.Object r5 = r4.getKey()     // Catch: java.lang.Throwable -> Lb5
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Throwable -> Lb5
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> Lb5
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Lb5
            int r6 = r9.n()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r7 = "&tmorl="
            if (r6 != r1) goto L78
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r6.<init>()     // Catch: java.lang.Throwable -> Lb5
            r6.append(r4)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r4 = "&to=1&cbt="
            r6.append(r4)     // Catch: java.lang.Throwable -> Lb5
            int r4 = r9.az()     // Catch: java.lang.Throwable -> Lb5
            r6.append(r4)     // Catch: java.lang.Throwable -> Lb5
            r6.append(r7)     // Catch: java.lang.Throwable -> Lb5
            r6.append(r12)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> Lb5
            goto L96
        L78:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r6.<init>()     // Catch: java.lang.Throwable -> Lb5
            r6.append(r4)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r4 = "&to=0&cbt="
            r6.append(r4)     // Catch: java.lang.Throwable -> Lb5
            int r4 = r9.az()     // Catch: java.lang.Throwable -> Lb5
            r6.append(r4)     // Catch: java.lang.Throwable -> Lb5
            r6.append(r7)     // Catch: java.lang.Throwable -> Lb5
            r6.append(r12)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> Lb5
        L96:
            if (r5 > r10) goto L35
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lb5
            if (r5 != 0) goto L35
            java.lang.String[] r5 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> Lb5
            r5[r11] = r4     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r4 = r9.K()     // Catch: java.lang.Throwable -> Lb5
            com.tkay.expressad.a.a.a(r8, r9, r4, r5, r1)     // Catch: java.lang.Throwable -> Lb5
            r3.remove()     // Catch: java.lang.Throwable -> Lb5
            r0.remove(r2)     // Catch: java.lang.Throwable -> Lb5
            int r2 = r2 + (-1)
            goto L35
        Lb2:
            int r2 = r2 + r1
            goto L19
        Lb5:
            return
    }

    public static void a(com.tkay.expressad.foundation.d.c r6, com.tkay.expressad.videocommon.c.c r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "&"
            java.lang.String r1 = ""
            java.lang.String r2 = "?"
            if (r6 == 0) goto Ld0
            if (r7 == 0) goto Ld0
            com.tkay.expressad.video.module.c.a r3 = new com.tkay.expressad.video.module.c.a     // Catch: java.lang.Throwable -> Lcc
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lcc
            android.content.Context r4 = r4.f()     // Catch: java.lang.Throwable -> Lcc
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lcc
            com.tkay.expressad.foundation.g.f.h.b r4 = new com.tkay.expressad.foundation.g.f.h.b     // Catch: java.lang.Throwable -> Lcc
            r4.<init>()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r5 = "user_id"
            java.lang.String r9 = com.tkay.expressad.foundation.h.j.a(r9)     // Catch: java.lang.Throwable -> Lcc
            r4.a(r5, r9)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r9 = "cb_type"
            java.lang.String r5 = "1"
            r4.a(r9, r5)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r9 = "reward_name"
            java.lang.String r5 = r7.a()     // Catch: java.lang.Throwable -> Lcc
            r4.a(r9, r5)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r9 = "reward_amount"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcc
            r5.<init>()     // Catch: java.lang.Throwable -> Lcc
            int r7 = r7.b()     // Catch: java.lang.Throwable -> Lcc
            r5.append(r7)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r7 = r5.toString()     // Catch: java.lang.Throwable -> Lcc
            r4.a(r9, r7)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r7 = "unit_id"
            r4.a(r7, r8)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r7 = "click_id"
            java.lang.String r8 = r6.aa()     // Catch: java.lang.Throwable -> Lcc
            r4.a(r7, r8)     // Catch: java.lang.Throwable -> Lcc
            boolean r7 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> Lcc
            if (r7 != 0) goto L63
            java.lang.String r7 = "extra"
            r4.a(r7, r10)     // Catch: java.lang.Throwable -> Lcc
        L63:
            r3.a(r1, r4)     // Catch: java.lang.Throwable -> Lcc
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcc
            r7.<init>()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r8 = r6.ak()     // Catch: java.lang.Throwable -> Lcc
            r7.append(r8)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r8 = "/addReward?"
            r7.append(r8)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r8 = r4.a()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r8 = r8.trim()     // Catch: java.lang.Throwable -> Lcc
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lcc
            if (r9 != 0) goto Lbb
            boolean r9 = r7.endsWith(r2)     // Catch: java.lang.Throwable -> Lcc
            if (r9 != 0) goto Lac
            boolean r9 = r7.endsWith(r0)     // Catch: java.lang.Throwable -> Lcc
            if (r9 != 0) goto Lac
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcc
            r9.<init>()     // Catch: java.lang.Throwable -> Lcc
            r9.append(r7)     // Catch: java.lang.Throwable -> Lcc
            boolean r7 = r7.contains(r2)     // Catch: java.lang.Throwable -> Lcc
            if (r7 == 0) goto La4
            goto La5
        La4:
            r0 = r2
        La5:
            r9.append(r0)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r7 = r9.toString()     // Catch: java.lang.Throwable -> Lcc
        Lac:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcc
            r9.<init>()     // Catch: java.lang.Throwable -> Lcc
            r9.append(r7)     // Catch: java.lang.Throwable -> Lcc
            r9.append(r8)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r1 = r9.toString()     // Catch: java.lang.Throwable -> Lcc
        Lbb:
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lcc
            android.content.Context r7 = r7.f()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r8 = r6.K()     // Catch: java.lang.Throwable -> Lcc
            r9 = 0
            com.tkay.expressad.a.a.a(r7, r6, r8, r1, r9)     // Catch: java.lang.Throwable -> Lcc
            goto Ld0
        Lcc:
            r6 = move-exception
            r6.getMessage()
        Ld0:
            return
    }

    public static void a(com.tkay.expressad.foundation.d.c r4, java.lang.String r5) {
            if (r4 == 0) goto L3d
            java.util.List r0 = r4.al()     // Catch: java.lang.Exception -> L39
            if (r0 == 0) goto L3d
            java.util.List r0 = r4.al()     // Catch: java.lang.Exception -> L39
            int r0 = r0.size()     // Catch: java.lang.Exception -> L39
            if (r0 <= 0) goto L3d
            java.util.List r0 = r4.al()     // Catch: java.lang.Exception -> L39
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L39
        L1a:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L39
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L39
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L39
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L39
            if (r2 != 0) goto L1a
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L39
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> L39
            r3 = 0
            com.tkay.expressad.a.a.a(r2, r4, r5, r1, r3)     // Catch: java.lang.Exception -> L39
            goto L1a
        L39:
            r4 = move-exception
            r4.printStackTrace()
        L3d:
            return
    }

    public static void a(com.tkay.expressad.foundation.d.c r3, java.util.Map<java.lang.Integer, java.lang.String> r4, java.lang.String r5, int r6) {
            if (r3 == 0) goto L4a
            if (r4 == 0) goto L4a
            int r0 = r4.size()     // Catch: java.lang.Exception -> L46
            if (r0 <= 0) goto L4a
            java.util.Set r4 = r4.entrySet()     // Catch: java.lang.Exception -> L46
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L46
        L12:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Exception -> L46
            if (r0 == 0) goto L4a
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Exception -> L46
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Exception -> L46
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Exception -> L46
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L46
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Exception -> L46
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L46
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L46
            if (r6 != r1) goto L12
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L46
            if (r1 != 0) goto L12
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L46
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L46
            r2 = 0
            com.tkay.expressad.a.a.a(r1, r3, r5, r0, r2)     // Catch: java.lang.Exception -> L46
            r4.remove()     // Catch: java.lang.Exception -> L46
            goto L12
        L46:
            r3 = move-exception
            r3.printStackTrace()
        L4a:
            return
    }

    public static void a(java.lang.String r1) {
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r0 = com.tkay.expressad.video.module.b.a.a
            r0.remove(r1)
            return
    }

    public static void b(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.j()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.j()
            r2 = 0
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    public static void c(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.k()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.k()
            r2 = 0
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    public static void d(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.q()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.q()
            r2 = 0
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    public static void e(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.m()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.m()
            r2 = 0
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    private static void f(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.d()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.d()
            r2 = 1
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    private static void g(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.e()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.e()
            r2 = 0
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    private static void h(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.f()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.f()
            r2 = 0
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    private static void i(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.g()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.g()
            r2 = 0
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    private static void j(android.content.Context r3, com.tkay.expressad.foundation.d.c r4) {
            if (r4 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            if (r0 == 0) goto L22
            com.tkay.expressad.foundation.d.n r0 = r4.L()
            java.lang.String[] r0 = r0.h()
            if (r0 == 0) goto L22
            java.lang.String r0 = r4.K()
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            java.lang.String[] r1 = r1.h()
            r2 = 0
            com.tkay.expressad.a.a.a(r3, r4, r0, r1, r2)
        L22:
            return
    }

    private static void k(android.content.Context r4, com.tkay.expressad.foundation.d.c r5) {
            if (r5 == 0) goto L4b
            com.tkay.expressad.foundation.d.n r0 = r5.L()
            if (r0 == 0) goto L4b
            com.tkay.expressad.foundation.d.n r0 = r5.L()
            java.lang.String[] r0 = r0.l()
            if (r0 == 0) goto L4b
            java.lang.String r0 = r5.K()
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r1 = com.tkay.expressad.video.module.b.a.a
            java.lang.Object r1 = r1.get(r0)
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            if (r1 != 0) goto L2a
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r2 = com.tkay.expressad.video.module.b.a.a
            r2.put(r0, r1)
        L2a:
            java.lang.String r0 = r5.aZ()
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L4b
            java.lang.String r0 = r5.K()
            com.tkay.expressad.foundation.d.n r2 = r5.L()
            java.lang.String[] r2 = r2.l()
            r3 = 0
            com.tkay.expressad.a.a.a(r4, r5, r0, r2, r3)
            java.lang.String r4 = r5.aZ()
            r1.add(r4)
        L4b:
            return
    }
}
