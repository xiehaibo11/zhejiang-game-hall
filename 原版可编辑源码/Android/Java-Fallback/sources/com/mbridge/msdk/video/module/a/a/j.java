package com.mbridge.msdk.video.module.a.a;

public class j extends com.mbridge.msdk.video.module.a.a.e {
    protected boolean a;
    protected com.mbridge.msdk.foundation.entity.CampaignEx b;
    protected java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> c;
    protected boolean d;
    protected com.mbridge.msdk.videocommon.download.a e;
    protected com.mbridge.msdk.videocommon.b.d f;
    protected java.lang.String g;
    protected java.lang.String h;
    protected com.mbridge.msdk.video.module.a.a i;
    protected int j;
    private boolean k;
    private boolean l;
    private boolean m;





    public j(com.mbridge.msdk.foundation.entity.CampaignEx r4, com.mbridge.msdk.videocommon.download.a r5, com.mbridge.msdk.videocommon.b.d r6, java.lang.String r7, java.lang.String r8, com.mbridge.msdk.video.module.a.a r9, int r10, boolean r11) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.d = r0
            com.mbridge.msdk.video.module.a.a.e r1 = new com.mbridge.msdk.video.module.a.a.e
            r1.<init>()
            r3.i = r1
            r1 = 1
            r3.j = r1
            r3.k = r0
            r3.l = r0
            r3.m = r0
            if (r11 != 0) goto L37
            if (r4 == 0) goto L37
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.b(r8)
            if (r2 == 0) goto L37
            if (r5 == 0) goto L37
            if (r9 == 0) goto L37
            r3.b = r4
            r3.h = r7
            r3.g = r8
            r3.e = r5
            r3.f = r6
            r3.i = r9
            r3.a = r1
            r3.j = r10
            r3.d = r0
            goto L55
        L37:
            if (r11 == 0) goto L55
            if (r4 == 0) goto L55
            boolean r11 = com.mbridge.msdk.foundation.tools.ai.b(r8)
            if (r11 == 0) goto L55
            if (r9 == 0) goto L55
            r3.b = r4
            r3.h = r7
            r3.g = r8
            r3.e = r5
            r3.f = r6
            r3.i = r9
            r3.a = r1
            r3.j = r10
            r3.d = r1
        L55:
            return
    }

    public final void a() {
            r8 = this;
            boolean r0 = r8.a
            if (r0 == 0) goto L4d
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b
            if (r0 == 0) goto L4d
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r7 = com.mbridge.msdk.foundation.tools.v.D(r0)
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b
            java.lang.String r3 = r1.getId()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b
            java.lang.String r4 = r1.getRequestId()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b
            java.lang.String r5 = r1.getRequestIdNotice()
            java.lang.String r6 = r8.g
            java.lang.String r2 = "2000061"
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b
            boolean r1 = r1.isMraid()
            if (r1 == 0) goto L3b
            int r1 = com.mbridge.msdk.foundation.entity.p.a
            goto L3d
        L3b:
            int r1 = com.mbridge.msdk.foundation.entity.p.b
        L3d:
            r0.a(r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = r8.g
            com.mbridge.msdk.foundation.same.report.c.b(r0, r1, r2)
        L4d:
            return
    }

    public final void a(int r4) {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            if (r0 == 0) goto L1a
            r0 = 1
            if (r4 == r0) goto Lb
            r0 = 2
            if (r4 == r0) goto Lb
            goto L1a
        Lb:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b
            int r2 = r3.j
            com.mbridge.msdk.video.module.b.b.a(r0, r1, r4, r2)
        L1a:
            return
    }

    @Override
    public void a(int r2, java.lang.Object r3) {
            r1 = this;
            super.a(r2, r3)
            com.mbridge.msdk.video.module.a.a r0 = r1.i
            r0.a(r2, r3)
            return
    }

    public final void a(int r11, java.lang.String r12) {
            r10 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b
            if (r0 == 0) goto L3b
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r7 = com.mbridge.msdk.foundation.tools.v.D(r0)
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            java.lang.String r3 = r1.getId()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            java.lang.String r4 = r1.getRequestId()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            java.lang.String r5 = r1.getRequestIdNotice()
            java.lang.String r6 = r10.g
            java.lang.String r2 = "2000062"
            r1 = r0
            r8 = r11
            r9 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r11 = r11.j()
            java.lang.String r12 = r10.g
            com.mbridge.msdk.foundation.same.report.c.c(r0, r11, r12)
        L3b:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0 = this;
            r0.b = r1
            return
    }

    protected final void a(java.lang.String r9) {
            r8 = this;
            boolean r0 = r8.a     // Catch: java.lang.Exception -> Lae
            if (r0 == 0) goto Lb2
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lae
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.db.t r0 = com.mbridge.msdk.foundation.db.t.a(r0)     // Catch: java.lang.Exception -> Lae
            r1 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.getNoticeUrl()     // Catch: java.lang.Exception -> Lae
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 != 0) goto L49
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lae
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> Lae
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r1)     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.entity.p r1 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = "2000021"
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r5 = r2.getNoticeUrl()     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lae
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> Lae
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.a(r2, r4)     // Catch: java.lang.Exception -> Lae
            r2 = r1
            r6 = r9
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> Lae
            goto L7c
        L49:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.getClickURL()     // Catch: java.lang.Exception -> Lae
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 != 0) goto L7c
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lae
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> Lae
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r1)     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.entity.p r1 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = "2000021"
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r5 = r2.getClickURL()     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lae
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> Lae
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.a(r2, r4)     // Catch: java.lang.Exception -> Lae
            r2 = r1
            r6 = r9
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> Lae
        L7c:
            if (r1 == 0) goto Lb2
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> Lae
            r1.n(r2)     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.getVideoUrlEncode()     // Catch: java.lang.Exception -> Lae
            r1.e(r2)     // Catch: java.lang.Exception -> Lae
            r1.p(r9)     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r9 = r9.getRequestId()     // Catch: java.lang.Exception -> Lae
            r1.k(r9)     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r9 = r9.getRequestIdNotice()     // Catch: java.lang.Exception -> Lae
            r1.l(r9)     // Catch: java.lang.Exception -> Lae
            java.lang.String r9 = r8.g     // Catch: java.lang.Exception -> Lae
            r1.m(r9)     // Catch: java.lang.Exception -> Lae
            r0.a(r1)     // Catch: java.lang.Exception -> Lae
            goto Lb2
        Lae:
            r9 = move-exception
            r9.printStackTrace()
        Lb2:
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void b() {
            r2 = this;
            com.mbridge.msdk.video.module.a.a.j$1 r0 = new com.mbridge.msdk.video.module.a.a.j$1
            r0.<init>(r2)
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r1 = r1.d()
            if (r1 == 0) goto L17
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.a()
            r1.execute(r0)
            goto L1a
        L17:
            r0.run()
        L1a:
            return
    }

    public final void b(int r5) {
            r4 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.b
            if (r0 == 0) goto L5f
            java.lang.String r0 = r0.getNoticeUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5f
            r1 = 1
            r2 = 2
            if (r5 == r1) goto L14
            if (r5 != r2) goto L5f
        L14:
            java.lang.String r1 = "endscreen_type"
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto L38
            java.lang.String r1 = "endscreen_type=1"
            java.lang.String r3 = "endscreen_type=2"
            if (r5 != r2) goto L2d
            boolean r5 = r0.contains(r1)
            if (r5 == 0) goto L5a
            java.lang.String r0 = r0.replace(r1, r3)
            goto L5a
        L2d:
            boolean r5 = r0.contains(r3)
            if (r5 == 0) goto L5a
            java.lang.String r0 = r0.replace(r3, r1)
            goto L5a
        L38:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r2 = "?"
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L4e
            java.lang.String r0 = "&endscreen_type="
            r1.append(r0)
            r1.append(r5)
            goto L56
        L4e:
            java.lang.String r0 = "?endscreen_type="
            r1.append(r0)
            r1.append(r5)
        L56:
            java.lang.String r0 = r1.toString()
        L5a:
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.b
            r5.setNoticeUrl(r0)
        L5f:
            return
    }

    protected final void b(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "camp_position"
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.b
            if (r1 != 0) goto L7
            return
        L7:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r2.c
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
            if (r3 == 0) goto L31
            int r3 = r1.getInt(r0)     // Catch: org.json.JSONException -> L2d
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r2.c     // Catch: org.json.JSONException -> L2d
            java.lang.Object r3 = r0.get(r3)     // Catch: org.json.JSONException -> L2d
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: org.json.JSONException -> L2d
            r2.b = r3     // Catch: org.json.JSONException -> L2d
            goto L31
        L2d:
            r3 = move-exception
            r3.printStackTrace()
        L31:
            return
    }

    public final void c() {
            r3 = this;
            com.mbridge.msdk.video.module.a.a.j$2 r0 = new com.mbridge.msdk.video.module.a.a.j$2     // Catch: java.lang.Throwable -> L1b
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1b
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()     // Catch: java.lang.Throwable -> L1b
            boolean r1 = r1.d()     // Catch: java.lang.Throwable -> L1b
            if (r1 == 0) goto L17
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> L1b
            r1.execute(r0)     // Catch: java.lang.Throwable -> L1b
            goto L25
        L17:
            r0.run()     // Catch: java.lang.Throwable -> L1b
            goto L25
        L1b:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "NotifyListener"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L25:
            return
    }

    protected final void d() {
            r2 = this;
            com.mbridge.msdk.videocommon.download.a r0 = r2.e
            if (r0 == 0) goto L8
            r1 = 1
            r0.b(r1)
        L8:
            return
    }

    protected final void e() {
            r11 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b     // Catch: java.lang.Exception -> Ld0
            r1 = 1
            if (r0 == 0) goto L1c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b     // Catch: java.lang.Exception -> Ld0
            boolean r0 = r0.isDynamicView()     // Catch: java.lang.Exception -> Ld0
            if (r0 == 0) goto L1c
            boolean r0 = r11.d     // Catch: java.lang.Exception -> Ld0
            if (r0 == 0) goto L1c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b     // Catch: java.lang.Exception -> Ld0
            boolean r0 = r0.isCampaignIsFiltered()     // Catch: java.lang.Exception -> Ld0
            if (r0 != 0) goto L1c
            r11.l = r1     // Catch: java.lang.Exception -> Ld0
            return
        L1c:
            boolean r0 = r11.a     // Catch: java.lang.Exception -> Ld0
            if (r0 == 0) goto Ld4
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b     // Catch: java.lang.Exception -> Ld0
            java.lang.String r0 = r0.getOnlyImpressionURL()     // Catch: java.lang.Exception -> Ld0
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Ld0
            if (r0 != 0) goto Ld4
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.mbridge.msdk.foundation.same.a.d.a     // Catch: java.lang.Exception -> Ld0
            if (r0 == 0) goto Ld4
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.mbridge.msdk.foundation.same.a.d.a     // Catch: java.lang.Exception -> Ld0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.b     // Catch: java.lang.Exception -> Ld0
            java.lang.String r2 = r2.getOnlyImpressionURL()     // Catch: java.lang.Exception -> Ld0
            boolean r0 = r0.containsKey(r2)     // Catch: java.lang.Exception -> Ld0
            if (r0 != 0) goto Ld4
            boolean r0 = r11.l     // Catch: java.lang.Exception -> Ld0
            if (r0 != 0) goto Ld4
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.mbridge.msdk.foundation.same.a.d.a     // Catch: java.lang.Exception -> Ld0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.b     // Catch: java.lang.Exception -> Ld0
            java.lang.String r2 = r2.getOnlyImpressionURL()     // Catch: java.lang.Exception -> Ld0
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Ld0
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> Ld0
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ld0
            r8 = 0
            r9 = 1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b     // Catch: java.lang.Exception -> Ld0
            java.lang.String r0 = r0.getOnlyImpressionURL()     // Catch: java.lang.Exception -> Ld0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.b     // Catch: java.lang.Exception -> Ld0
            int r2 = r2.getSpareOfferFlag()     // Catch: java.lang.Exception -> Ld0
            java.lang.String r3 = "&tmorl="
            if (r2 != r1) goto L8a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld0
            r2.<init>()     // Catch: java.lang.Exception -> Ld0
            r2.append(r0)     // Catch: java.lang.Exception -> Ld0
            java.lang.String r0 = "&to=1&cbt="
            r2.append(r0)     // Catch: java.lang.Exception -> Ld0
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b     // Catch: java.lang.Exception -> Ld0
            int r0 = r0.getCbt()     // Catch: java.lang.Exception -> Ld0
            r2.append(r0)     // Catch: java.lang.Exception -> Ld0
            r2.append(r3)     // Catch: java.lang.Exception -> Ld0
            int r0 = r11.j     // Catch: java.lang.Exception -> Ld0
            r2.append(r0)     // Catch: java.lang.Exception -> Ld0
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> Ld0
            goto Lac
        L8a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld0
            r2.<init>()     // Catch: java.lang.Exception -> Ld0
            r2.append(r0)     // Catch: java.lang.Exception -> Ld0
            java.lang.String r0 = "&to=0&cbt="
            r2.append(r0)     // Catch: java.lang.Exception -> Ld0
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b     // Catch: java.lang.Exception -> Ld0
            int r0 = r0.getCbt()     // Catch: java.lang.Exception -> Ld0
            r2.append(r0)     // Catch: java.lang.Exception -> Ld0
            r2.append(r3)     // Catch: java.lang.Exception -> Ld0
            int r0 = r11.j     // Catch: java.lang.Exception -> Ld0
            r2.append(r0)     // Catch: java.lang.Exception -> Ld0
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> Ld0
        Lac:
            r7 = r0
            boolean r0 = r11.d     // Catch: java.lang.Exception -> Ld0
            if (r0 == 0) goto Lb9
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b     // Catch: java.lang.Exception -> Ld0
            boolean r0 = r0.isCampaignIsFiltered()     // Catch: java.lang.Exception -> Ld0
            if (r0 == 0) goto Lcd
        Lb9:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Ld0
            android.content.Context r4 = r0.j()     // Catch: java.lang.Exception -> Ld0
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r11.b     // Catch: java.lang.Exception -> Ld0
            java.lang.String r6 = r11.g     // Catch: java.lang.Exception -> Ld0
            int r10 = com.mbridge.msdk.click.a.a.h     // Catch: java.lang.Exception -> Ld0
            com.mbridge.msdk.click.b.a(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> Ld0
            r11.c()     // Catch: java.lang.Exception -> Ld0
        Lcd:
            r11.l = r1     // Catch: java.lang.Exception -> Ld0
            goto Ld4
        Ld0:
            r0 = move-exception
            r0.printStackTrace()
        Ld4:
            return
    }

    protected final void f() {
            r9 = this;
            boolean r0 = r9.a     // Catch: java.lang.Throwable -> L1a2
            if (r0 == 0) goto L1ac
            boolean r0 = r9.k     // Catch: java.lang.Throwable -> L1a2
            if (r0 != 0) goto L1ac
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r0 = r0.getImpressionURL()     // Catch: java.lang.Throwable -> L1a2
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1a2
            if (r0 != 0) goto L1ac
            r0 = 1
            r9.k = r0     // Catch: java.lang.Throwable -> L1a2
            r5 = 0
            r6 = 1
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Throwable -> L1a2
            boolean r1 = r1.isBidCampaign()     // Catch: java.lang.Throwable -> L1a2
            if (r1 == 0) goto L103
            java.lang.String r1 = "encrypt_p="
            java.lang.String r2 = "irlfa="
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r9.b     // Catch: java.lang.Throwable -> L1a2
            if (r3 == 0) goto L103
            java.util.HashMap r3 = new java.util.HashMap     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r3.<init>()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.db.b r4 = com.mbridge.msdk.foundation.db.b.a(r4)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r9.b     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r7 = r7.getCampaignUnitId()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r9.b     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r8 = r8.getRequestId()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.util.List r4 = r4.b(r7, r8)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            if (r4 == 0) goto L103
            int r7 = r4.size()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            if (r7 <= 0) goto L103
            r7 = 0
            java.lang.Object r8 = r4.get(r7)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            if (r8 == 0) goto L103
            java.lang.Object r8 = r4.get(r7)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.d r8 = (com.mbridge.msdk.foundation.entity.d) r8     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            int r8 = r8.d()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.Object r4 = r4.get(r7)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.d r4 = (com.mbridge.msdk.foundation.entity.d) r4     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r4 = r4.b()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            if (r8 != r0) goto Ld2
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r7.<init>()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r7.append(r1)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r7.append(r4)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r3.put(r1, r4)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r1.<init>()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r1.append(r2)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r1.append(r0)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r3.put(r2, r1)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.util.Set r1 = r3.entrySet()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
        L9b:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            if (r2 == 0) goto Ld2
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.Object r3 = r2.getKey()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r9.b     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r9.b     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r7 = r7.getImpressionURL()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r7 = r7.replaceAll(r3, r2)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r4.setImpressionURL(r7)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r9.b     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r9.b     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r7 = r7.getOnlyImpressionURL()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r2 = r7.replaceAll(r3, r2)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r4.setOnlyImpressionURL(r2)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            goto L9b
        Ld2:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.db.b r1 = com.mbridge.msdk.foundation.db.b.a(r1)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r9.b     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r2 = r2.getRequestId()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            int r1 = r1.a(r2)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r2 = "BidReplaceCampignDao"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r3.<init>()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r4 = "removeReplace count "
            r3.append(r4)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            r3.append(r1)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)     // Catch: java.lang.Exception -> Lff java.lang.Throwable -> L1a2
            goto L103
        Lff:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L1a2
        L103:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r1 = r1.getImpressionURL()     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r9.b     // Catch: java.lang.Throwable -> L1a2
            int r2 = r2.getSpareOfferFlag()     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r3 = "&tmorl="
            if (r2 != r0) goto L136
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a2
            r0.<init>()     // Catch: java.lang.Throwable -> L1a2
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r1 = "&to=1&cbt="
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Throwable -> L1a2
            int r1 = r1.getCbt()     // Catch: java.lang.Throwable -> L1a2
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a2
            r0.append(r3)     // Catch: java.lang.Throwable -> L1a2
            int r1 = r9.j     // Catch: java.lang.Throwable -> L1a2
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1a2
            goto L158
        L136:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a2
            r0.<init>()     // Catch: java.lang.Throwable -> L1a2
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r1 = "&to=0&cbt="
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Throwable -> L1a2
            int r1 = r1.getCbt()     // Catch: java.lang.Throwable -> L1a2
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a2
            r0.append(r3)     // Catch: java.lang.Throwable -> L1a2
            int r1 = r9.j     // Catch: java.lang.Throwable -> L1a2
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1a2
        L158:
            r4 = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1a2
            android.content.Context r1 = r0.j()     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r9.b     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r3 = r9.g     // Catch: java.lang.Throwable -> L1a2
            int r7 = com.mbridge.msdk.click.a.a.g     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1a2
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.video.module.b.b.a(r0, r1)     // Catch: java.lang.Throwable -> L1a2
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.video.module.a.a.j$3 r1 = new com.mbridge.msdk.video.module.a.a.j$3     // Catch: java.lang.Throwable -> L1a2
            r1.<init>(r9)     // Catch: java.lang.Throwable -> L1a2
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1a2
            r0.start()     // Catch: java.lang.Throwable -> L1a2
            boolean r0 = r9.a     // Catch: java.lang.Throwable -> L1a2
            if (r0 == 0) goto L1ac
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.d.a>> r0 = com.mbridge.msdk.foundation.same.a.d.d     // Catch: java.lang.Throwable -> L1a2
            if (r0 == 0) goto L1ac
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r0 = r0.getId()     // Catch: java.lang.Throwable -> L1a2
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1a2
            if (r0 != 0) goto L1ac
            java.lang.String r0 = r9.g     // Catch: java.lang.Throwable -> L1a2
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r2 = "reward"
            com.mbridge.msdk.foundation.same.a.d.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L1a2
            goto L1ac
        L1a2:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "NotifyListener"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L1ac:
            return
    }

    protected final void g() {
            r8 = this;
            boolean r0 = r8.a     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L5f
            boolean r0 = r8.m     // Catch: java.lang.Throwable -> L55
            if (r0 != 0) goto L5f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L5f
            r0 = 1
            r8.m = r0     // Catch: java.lang.Throwable -> L55
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b     // Catch: java.lang.Throwable -> L55
            boolean r0 = r0.isDynamicView()     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L24
            boolean r0 = r8.d     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L24
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b     // Catch: java.lang.Throwable -> L55
            boolean r0 = r0.isCampaignIsFiltered()     // Catch: java.lang.Throwable -> L55
            if (r0 != 0) goto L24
            return
        L24:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b     // Catch: java.lang.Throwable -> L55
            java.util.List r0 = r0.getPv_urls()     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L5f
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L55
            if (r1 <= 0) goto L5f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L55
        L36:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L5f
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L55
            r5 = r1
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L55
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L55
            android.content.Context r2 = r1.j()     // Catch: java.lang.Throwable -> L55
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.b     // Catch: java.lang.Throwable -> L55
            java.lang.String r4 = r8.g     // Catch: java.lang.Throwable -> L55
            r6 = 0
            r7 = 1
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L55
            goto L36
        L55:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "NotifyListener"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L5f:
            return
    }

    protected final void h() {
            r7 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            if (r0 == 0) goto L3f
            java.lang.String r0 = r0.getCampaignUnitId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()
            if (r0 == 0) goto L3f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()
            java.lang.String[] r0 = r0.k()
            if (r0 == 0) goto L3f
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r0.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.b
            java.lang.String r3 = r2.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()
            java.lang.String[] r4 = r0.k()
            r5 = 0
            r6 = 0
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L3f:
            return
    }
}
