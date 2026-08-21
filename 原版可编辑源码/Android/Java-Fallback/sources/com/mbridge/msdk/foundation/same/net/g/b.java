package com.mbridge.msdk.foundation.same.net.g;

public class b {
    private static final java.lang.String TAG = null;
    protected android.content.Context mContext;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.g.b> r0 = com.mbridge.msdk.foundation.same.net.g.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.g.b.TAG = r0
            return
    }

    public b(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto L10
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r0.mContext = r1
            goto L16
        L10:
            android.content.Context r1 = r1.getApplicationContext()
            r0.mContext = r1
        L16:
            return
    }

    private java.lang.String asUrlParams(java.util.Map<java.lang.String, java.lang.String> r7) {
            r6 = this;
            r0 = 0
            if (r7 == 0) goto L64
            int r1 = r7.size()
            if (r1 != 0) goto La
            goto L64
        La:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Set r2 = r7.keySet()     // Catch: java.lang.Exception -> L48
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L48
        L17:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L48
            if (r3 == 0) goto L57
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L48
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L48
            if (r4 != 0) goto L17
            java.lang.Object r4 = r7.get(r3)     // Catch: java.lang.Exception -> L48
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L48
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L48
            if (r5 == 0) goto L37
            java.lang.String r4 = ""
        L37:
            java.lang.String r5 = "&"
            r1.append(r5)     // Catch: java.lang.Exception -> L48
            r1.append(r3)     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = "="
            r1.append(r3)     // Catch: java.lang.Exception -> L48
            r1.append(r4)     // Catch: java.lang.Exception -> L48
            goto L17
        L48:
            r7 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L56
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.g.b.TAG
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r7)
        L56:
            r1 = r0
        L57:
            if (r1 == 0) goto L64
            int r7 = r1.length()
            if (r7 <= 0) goto L64
            java.lang.String r7 = r1.toString()
            return r7
        L64:
            return r0
    }

    public static void downloadFile(java.io.File r3, java.lang.String r4, com.mbridge.msdk.foundation.same.net.e r5) {
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.b.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "downloadFile url = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.foundation.same.net.d.b r0 = com.mbridge.msdk.foundation.same.net.n.a()
            r0.a(r3, r4, r5)
            return
    }

    private void post(int r15, java.lang.String r16, com.mbridge.msdk.foundation.same.net.g.d r17, com.mbridge.msdk.foundation.same.net.l r18, com.mbridge.msdk.foundation.same.net.e r19) {
            r14 = this;
            r1 = r15
            r2 = r16
            r9 = r19
            if (r17 != 0) goto L14
            com.mbridge.msdk.foundation.same.net.g.d r0 = new com.mbridge.msdk.foundation.same.net.g.d     // Catch: java.lang.Exception -> Lf
            r0.<init>()     // Catch: java.lang.Exception -> Lf
            r10 = r14
            r3 = r0
            goto L17
        Lf:
            r0 = move-exception
            r10 = r14
            r3 = r17
            goto L2e
        L14:
            r10 = r14
            r3 = r17
        L17:
            r14.addExtraParams(r2, r3)     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.foundation.same.net.g.e.f(r3)     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.foundation.same.net.f.c r0 = com.mbridge.msdk.foundation.same.net.f.c.a()     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.foundation.same.net.k r0 = r0.a(r3)     // Catch: java.lang.Exception -> L2d
            if (r0 == 0) goto L37
            if (r9 == 0) goto L37
            r9.onSuccess(r0)     // Catch: java.lang.Exception -> L2d
            return
        L2d:
            r0 = move-exception
        L2e:
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.g.b.TAG
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
        L37:
            r11 = r3
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.b.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "post url = "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r0 = r0.a
            boolean r0 = r2.contains(r0)
            r12 = 2
            r13 = 1
            if (r0 == 0) goto Lff
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.k()
            com.mbridge.msdk.c.a r3 = r0.b(r3)
            java.lang.String r4 = ""
            r0 = 0
            if (r3 == 0) goto La4
            int r5 = r3.aE()
            java.util.Map r0 = r11.b()     // Catch: java.lang.Exception -> L8e
            java.lang.String r6 = "data"
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Exception -> L8e
            r6 = r0
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L8e
            boolean r0 = com.mbridge.msdk.foundation.same.report.e.a(r3, r6)     // Catch: java.lang.Exception -> L8b
            if (r0 != 0) goto L89
            return
        L89:
            r4 = r6
            goto L92
        L8b:
            r0 = move-exception
            r4 = r6
            goto L8f
        L8e:
            r0 = move-exception
        L8f:
            r0.printStackTrace()
        L92:
            java.lang.String r0 = r3.ah()
            int r6 = r3.j()
            java.lang.String r7 = r3.o()
            java.lang.String r8 = "a_stid"
            r11.a(r8, r7)
            goto La9
        La4:
            java.lang.String r5 = "UNKNOWN"
            r6 = r0
            r0 = r5
            r5 = r6
        La9:
            java.lang.String r7 = "country_code"
            r11.a(r7, r0)
            if (r5 != r12) goto Lde
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Ldc
            if (r0 != 0) goto Ldb
            boolean r0 = com.mbridge.msdk.foundation.same.report.e.a(r3, r4)     // Catch: java.lang.Exception -> Ldc
            if (r0 == 0) goto Ldb
            if (r6 == r13) goto Lc1
            r0 = 3
            if (r6 != r0) goto L140
        Lc1:
            com.mbridge.msdk.foundation.same.net.m r3 = com.mbridge.msdk.foundation.same.net.m.a()     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Ldc
            java.lang.String r4 = r0.f     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Ldc
            int r5 = r0.g     // Catch: java.lang.Exception -> Ldc
            java.lang.String r6 = r11.toString()     // Catch: java.lang.Exception -> Ldc
            r7 = 0
            r8 = r19
            r3.a(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> Ldc
        Ldb:
            return
        Ldc:
            r0 = move-exception
            goto Lfb
        Lde:
            if (r5 != r13) goto L140
            com.mbridge.msdk.foundation.same.net.m r3 = com.mbridge.msdk.foundation.same.net.m.a()     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Ldc
            java.lang.String r4 = r0.f     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Ldc
            int r5 = r0.g     // Catch: java.lang.Exception -> Ldc
            java.lang.String r6 = r11.toString()     // Catch: java.lang.Exception -> Ldc
            r7 = 0
            r8 = r19
            r3.a(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> Ldc
            return
        Lfb:
            r0.printStackTrace()
            goto L140
        Lff:
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r0 = r0.o
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L140
            if (r11 == 0) goto L126
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "?"
            r0.append(r2)
            java.lang.String r2 = r11.toString()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            goto L127
        L126:
            r0 = r2
        L127:
            com.mbridge.msdk.foundation.db.a.a r2 = com.mbridge.msdk.foundation.db.a.a.a()
            org.json.JSONArray r2 = r2.b()
            if (r2 == 0) goto L141
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.same.net.g.d r11 = new com.mbridge.msdk.foundation.same.net.g.d
            r11.<init>()
            java.lang.String r3 = com.mbridge.msdk.foundation.same.net.g.d.e
            r11.a(r3, r2)
            goto L141
        L140:
            r0 = r2
        L141:
            r2 = 0
            java.lang.String r3 = "application/x-www-form-urlencoded"
            java.lang.String r4 = "Content-Type"
            if (r1 == 0) goto L167
            if (r1 == r13) goto L15a
            if (r1 == r12) goto L14d
            goto L173
        L14d:
            com.mbridge.msdk.foundation.same.net.d.c r2 = new com.mbridge.msdk.foundation.same.net.d.c
            java.lang.String r1 = r11.toString()
            r2.<init>(r13, r0, r1, r9)
            r2.a(r4, r3)
            goto L173
        L15a:
            com.mbridge.msdk.foundation.same.net.d.d r2 = new com.mbridge.msdk.foundation.same.net.d.d
            java.lang.String r1 = r11.toString()
            r2.<init>(r13, r0, r1, r9)
            r2.a(r4, r3)
            goto L173
        L167:
            com.mbridge.msdk.foundation.same.net.d.f r2 = new com.mbridge.msdk.foundation.same.net.d.f
            java.lang.String r1 = r11.toString()
            r2.<init>(r13, r0, r1, r9)
            r2.a(r4, r3)
        L173:
            if (r2 == 0) goto L17d
            r1 = r18
            r2.a(r1)
            com.mbridge.msdk.foundation.same.net.n.a(r2)
        L17d:
            return
    }

    public void addExtraParams(java.lang.String r5, com.mbridge.msdk.foundation.same.net.g.d r6) {
            r4 = this;
            if (r6 == 0) goto Lba
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.Aa.a()
            java.lang.String r1 = ""
            if (r0 != 0) goto Lb
            r0 = r1
        Lb:
            java.lang.String r2 = "channel"
            r6.a(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.same.net.a r2 = com.mbridge.msdk.foundation.same.net.a.a()
            long r2 = r2.e()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "band_width"
            r6.a(r1, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.D
            java.lang.String r1 = "open"
            r6.a(r1, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.b.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "excute addExtraParams , url:"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L66
            java.lang.String r0 = "setting"
            boolean r0 = r5.contains(r0)
            if (r0 == 0) goto L66
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.Aa.b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L66
            java.lang.String r1 = "keyword"
            r6.a(r1, r0)
        L66:
            java.util.Map r0 = r6.b()
            java.lang.String r1 = "unit_id"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto Lac
            com.mbridge.msdk.out.CustomInfoManager r1 = com.mbridge.msdk.out.CustomInfoManager.getInstance()
            java.lang.String r5 = r1.getCustomInfoByUnitId(r0, r5)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L87
            java.lang.String r1 = "ch_info"
            r6.a(r1, r5)
        L87:
            com.mbridge.msdk.c.b r5 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.d r5 = r5.e(r1, r0)
            if (r5 == 0) goto Lac
            java.lang.String r0 = r5.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lac
            java.lang.String r5 = r5.a()
            java.lang.String r0 = "u_stid"
            r6.a(r0, r5)
        Lac:
            boolean r5 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()
            if (r5 != 0) goto Lc1
            java.lang.String r5 = "dev_source"
            java.lang.String r0 = "2"
            r6.a(r5, r0)
            goto Lc1
        Lba:
            java.lang.String r5 = com.mbridge.msdk.foundation.same.net.g.b.TAG
            java.lang.String r6 = "addExtraParams error, params is null,frame work error"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)
        Lc1:
            return
    }

    public void choiceV3OrV5BySetting(int r7, com.mbridge.msdk.foundation.same.net.g.d r8, com.mbridge.msdk.foundation.same.net.e r9, java.lang.String r10) {
            r6 = this;
            com.mbridge.msdk.foundation.same.net.b r5 = new com.mbridge.msdk.foundation.same.net.b
            r5.<init>()
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.choiceV3OrV5BySetting(r1, r2, r3, r4, r5)
            return
    }

    public void choiceV3OrV5BySetting(int r10, com.mbridge.msdk.foundation.same.net.g.d r11, com.mbridge.msdk.foundation.same.net.e r12, java.lang.String r13, com.mbridge.msdk.foundation.same.net.l r14) {
            r9 = this;
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.g(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r13)
            if (r1 == 0) goto L1b
            int r0 = r0.ba()
            goto L1f
        L1b:
            int r0 = r0.aZ()
        L1f:
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r4 = r1.a(r13, r0)
            r13 = 2
            if (r0 >= r13) goto L39
            if (r14 != 0) goto L30
            r9.postV5(r10, r4, r11, r12)
            goto L79
        L30:
            r2 = r9
            r3 = r10
            r5 = r11
            r6 = r12
            r7 = r14
            r2.postV5(r3, r4, r5, r6, r7)
            goto L79
        L39:
            int r0 = r0 % r13
            if (r0 != 0) goto L6a
            if (r11 != 0) goto L43
            com.mbridge.msdk.foundation.same.net.g.d r11 = new com.mbridge.msdk.foundation.same.net.g.d
            r11.<init>()
        L43:
            com.mbridge.msdk.foundation.db.a.a r13 = com.mbridge.msdk.foundation.db.a.a.a()
            org.json.JSONArray r13 = r13.b()
            if (r13 == 0) goto L6a
            java.lang.String r13 = r13.toString()
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            int r0 = r0.b()
            if (r0 <= 0) goto L65
            int r1 = r13.length()
            if (r1 <= r0) goto L65
            r9.post(r10, r4, r11, r12)
            return
        L65:
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.e
            r11.a(r0, r13)
        L6a:
            r5 = r11
            if (r14 != 0) goto L71
            r9.getLoadOrSetting(r10, r4, r5, r12)
            goto L79
        L71:
            r8 = 1
            r2 = r9
            r3 = r10
            r6 = r14
            r7 = r12
            r2.getLoadOrSetting(r3, r4, r5, r6, r7, r8)
        L79:
            return
    }

    public void get(int r8, java.lang.String r9, com.mbridge.msdk.foundation.same.net.g.d r10, com.mbridge.msdk.foundation.same.net.e r11) {
            r7 = this;
            com.mbridge.msdk.foundation.same.net.b r4 = new com.mbridge.msdk.foundation.same.net.b
            r4.<init>()
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r5 = r11
            r0.get(r1, r2, r3, r4, r5, r6)
            return
    }

    public void get(int r14, java.lang.String r15, com.mbridge.msdk.foundation.same.net.g.d r16, com.mbridge.msdk.foundation.same.net.l r17, com.mbridge.msdk.foundation.same.net.e r18, boolean r19) {
            r13 = this;
            r2 = r14
            r3 = r15
            r10 = r18
            if (r16 != 0) goto L13
            com.mbridge.msdk.foundation.same.net.g.d r0 = new com.mbridge.msdk.foundation.same.net.g.d     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            r11 = r13
            r1 = r0
            goto L16
        Le:
            r0 = move-exception
            r11 = r13
            r1 = r16
            goto L72
        L13:
            r11 = r13
            r1 = r16
        L16:
            r13.addExtraParams(r15, r1)     // Catch: java.lang.Exception -> L71
            com.mbridge.msdk.foundation.same.net.g.e.f(r1)     // Catch: java.lang.Exception -> L71
            java.util.Map r0 = r1.b()     // Catch: java.lang.Exception -> L71
            java.lang.String r4 = "sign"
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L71
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L71
            java.lang.String r5 = ""
            if (r4 == 0) goto L31
            r0 = r5
        L31:
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L71
            java.lang.String r4 = "ts"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            r8.<init>()     // Catch: java.lang.Exception -> L71
            r8.append(r6)     // Catch: java.lang.Exception -> L71
            r8.append(r5)     // Catch: java.lang.Exception -> L71
            java.lang.String r5 = r8.toString()     // Catch: java.lang.Exception -> L71
            r1.a(r4, r5)     // Catch: java.lang.Exception -> L71
            java.lang.String r4 = "st"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            r5.<init>()     // Catch: java.lang.Exception -> L71
            r5.append(r6)     // Catch: java.lang.Exception -> L71
            r5.append(r0)     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r0)     // Catch: java.lang.Exception -> L71
            r1.a(r4, r0)     // Catch: java.lang.Exception -> L71
            com.mbridge.msdk.foundation.same.net.f.c r0 = com.mbridge.msdk.foundation.same.net.f.c.a()     // Catch: java.lang.Exception -> L71
            com.mbridge.msdk.foundation.same.net.k r0 = r0.a(r1)     // Catch: java.lang.Exception -> L71
            if (r0 == 0) goto L7b
            if (r10 == 0) goto L7b
            r10.onSuccess(r0)     // Catch: java.lang.Exception -> L71
            return
        L71:
            r0 = move-exception
        L72:
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.g.b.TAG
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
        L7b:
            r12 = r1
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r0 = r0.c
            boolean r0 = r15.contains(r0)
            if (r0 == 0) goto Lf0
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            boolean r0 = r0.i
            if (r0 == 0) goto Lf0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le6
            r1.<init>()     // Catch: java.lang.Throwable -> Le6
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r0 = r0.d     // Catch: java.lang.Throwable -> Lc1
            android.net.Uri r4 = android.net.Uri.parse(r15)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r4 = r4.getPath()     // Catch: java.lang.Throwable -> Lc1
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r5.<init>()     // Catch: java.lang.Throwable -> Lc1
            r5.append(r0)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r4)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r4 = "uri"
            r1.put(r4, r0)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r0 = "data"
            java.lang.String r4 = r12.a()     // Catch: java.lang.Throwable -> Lc1
            r1.put(r0, r4)     // Catch: java.lang.Throwable -> Lc1
            goto Lcb
        Lc1:
            r0 = move-exception
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.g.b.TAG     // Catch: java.lang.Throwable -> Le6
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> Le6
            com.mbridge.msdk.foundation.tools.z.d(r4, r0)     // Catch: java.lang.Throwable -> Le6
        Lcb:
            com.mbridge.msdk.foundation.same.net.m r4 = com.mbridge.msdk.foundation.same.net.m.a()     // Catch: java.lang.Throwable -> Le6
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> Le6
            java.lang.String r5 = r0.d     // Catch: java.lang.Throwable -> Le6
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> Le6
            int r6 = r0.h     // Catch: java.lang.Throwable -> Le6
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> Le6
            r8 = 1
            r9 = r18
            r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> Le6
            return
        Le6:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.g.b.TAG
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        Lf0:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r15)
            java.lang.String r1 = "?"
            r0.append(r1)
            java.lang.String r1 = r12.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.k()
            com.mbridge.msdk.c.a r1 = r1.g(r4)
            int r4 = r0.length()
            int r5 = r1.b()
            if (r4 < r5) goto L13a
            com.mbridge.msdk.foundation.same.net.f.d r4 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r4 = r4.c
            boolean r4 = r0.contains(r4)
            if (r4 == 0) goto L13a
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r12
            r5 = r17
            r6 = r18
            r1.post(r2, r3, r4, r5, r6)
            return
        L13a:
            int r4 = r0.length()
            int r1 = r1.c()
            if (r4 < r1) goto L152
            if (r19 == 0) goto L152
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r12
            r5 = r17
            r6 = r18
            r1.post(r2, r3, r4, r5, r6)
            return
        L152:
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.g.b.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "get url = "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.b(r1, r3)
            r1 = 0
            r3 = 0
            if (r2 == 0) goto L17f
            r4 = 1
            if (r2 == r4) goto L179
            r4 = 2
            if (r2 == r4) goto L173
            goto L185
        L173:
            com.mbridge.msdk.foundation.same.net.d.c r2 = new com.mbridge.msdk.foundation.same.net.d.c
            r2.<init>(r1, r0, r3, r10)
            goto L184
        L179:
            com.mbridge.msdk.foundation.same.net.d.d r2 = new com.mbridge.msdk.foundation.same.net.d.d
            r2.<init>(r1, r0, r3, r10)
            goto L184
        L17f:
            com.mbridge.msdk.foundation.same.net.d.f r2 = new com.mbridge.msdk.foundation.same.net.d.f
            r2.<init>(r1, r0, r3, r10)
        L184:
            r3 = r2
        L185:
            if (r3 == 0) goto L196
            r1 = r17
            r3.a(r1)
            int r0 = r3.g()
            r3.b(r0)
            com.mbridge.msdk.foundation.same.net.n.a(r3)
        L196:
            return
    }

    public void get(int r3, java.lang.String r4, java.util.Map<java.lang.String, java.lang.String> r5, com.mbridge.msdk.foundation.same.net.l r6, com.mbridge.msdk.foundation.same.net.e r7) {
            r2 = this;
            if (r5 != 0) goto L7
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
        L7:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            java.lang.String r1 = "app_id"
            r5.put(r1, r0)
            java.lang.String r0 = "sdk_version"
            java.lang.String r1 = "MAL_16.3.67"
            r5.put(r0, r1)
            java.lang.String r0 = "platform"
            java.lang.String r1 = "1"
            r5.put(r0, r1)
            java.lang.String r5 = r2.asUrlParams(r5)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L40
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "?"
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = r0.toString()
        L40:
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto L5a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "get wx scheme url = "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            java.lang.String r0 = "AppletsModel"
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)
        L5a:
            r5 = 0
            r0 = 0
            if (r3 == 0) goto L71
            r1 = 1
            if (r3 == r1) goto L6b
            r1 = 2
            if (r3 == r1) goto L65
            goto L77
        L65:
            com.mbridge.msdk.foundation.same.net.d.c r3 = new com.mbridge.msdk.foundation.same.net.d.c     // Catch: java.lang.Exception -> L77
            r3.<init>(r5, r4, r0, r7)     // Catch: java.lang.Exception -> L77
            goto L76
        L6b:
            com.mbridge.msdk.foundation.same.net.d.d r3 = new com.mbridge.msdk.foundation.same.net.d.d     // Catch: java.lang.Exception -> L77
            r3.<init>(r5, r4, r0, r7)     // Catch: java.lang.Exception -> L77
            goto L76
        L71:
            com.mbridge.msdk.foundation.same.net.d.f r3 = new com.mbridge.msdk.foundation.same.net.d.f     // Catch: java.lang.Exception -> L77
            r3.<init>(r5, r4, r0, r7)     // Catch: java.lang.Exception -> L77
        L76:
            r0 = r3
        L77:
            if (r0 == 0) goto L86
            r0.a(r6)     // Catch: java.lang.Exception -> L86
            int r3 = r0.g()     // Catch: java.lang.Exception -> L86
            r0.b(r3)     // Catch: java.lang.Exception -> L86
            com.mbridge.msdk.foundation.same.net.n.a(r0)     // Catch: java.lang.Exception -> L86
        L86:
            return
    }

    public void getLoadOrSetting(int r8, java.lang.String r9, com.mbridge.msdk.foundation.same.net.g.d r10, com.mbridge.msdk.foundation.same.net.e r11) {
            r7 = this;
            com.mbridge.msdk.foundation.same.net.b r4 = new com.mbridge.msdk.foundation.same.net.b
            r4.<init>()
            r6 = 1
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r5 = r11
            r0.getLoadOrSetting(r1, r2, r3, r4, r5, r6)
            return
    }

    public void getLoadOrSetting(int r1, java.lang.String r2, com.mbridge.msdk.foundation.same.net.g.d r3, com.mbridge.msdk.foundation.same.net.l r4, com.mbridge.msdk.foundation.same.net.e r5, boolean r6) {
            r0 = this;
            r0.get(r1, r2, r3, r4, r5, r6)
            return
    }

    public void post(int r7, java.lang.String r8, com.mbridge.msdk.foundation.same.net.g.d r9, com.mbridge.msdk.foundation.same.net.e r10) {
            r6 = this;
            com.mbridge.msdk.foundation.same.net.b r4 = new com.mbridge.msdk.foundation.same.net.b
            r4.<init>()
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            r0.post(r1, r2, r3, r4, r5)
            return
    }

    public void postV5(int r9, java.lang.String r10, com.mbridge.msdk.foundation.same.net.g.d r11, com.mbridge.msdk.foundation.same.net.e r12) {
            r8 = this;
            java.util.Map r0 = r11.b()
            java.lang.String r1 = "sign"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = ""
            if (r1 == 0) goto L15
            r0 = r2
        L15:
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ts"
            r11.a(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r0)
            java.lang.String r1 = "st"
            r11.a(r1, r0)
            com.mbridge.msdk.foundation.same.net.b r6 = new com.mbridge.msdk.foundation.same.net.b
            r6.<init>()
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r7 = r12
            r2.post(r3, r4, r5, r6, r7)
            return
    }

    public void postV5(int r8, java.lang.String r9, com.mbridge.msdk.foundation.same.net.g.d r10, com.mbridge.msdk.foundation.same.net.e r11, com.mbridge.msdk.foundation.same.net.l r12) {
            r7 = this;
            java.util.Map r0 = r10.b()
            java.lang.String r1 = "sign"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = ""
            if (r0 != 0) goto L11
            r0 = r1
        L11:
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            java.lang.String r4 = "ts"
            r10.a(r4, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r0)
            java.lang.String r1 = "st"
            r10.a(r1, r0)
            if (r12 == 0) goto L4d
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r12
            r5 = r11
            r0.post(r1, r2, r3, r4, r5)
            goto L5a
        L4d:
            com.mbridge.msdk.foundation.same.net.b r5 = new com.mbridge.msdk.foundation.same.net.b
            r5.<init>()
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            r1.post(r2, r3, r4, r5, r6)
        L5a:
            return
    }
}
