package com.mbridge.msdk.video.dynview.h;

public final class a {
    private static boolean a;


    static {
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public a(android.content.Context r2, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3, com.mbridge.msdk.video.dynview.e.g r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.video.dynview.j.c r0 = new com.mbridge.msdk.video.dynview.j.c
            r0.<init>()
            com.mbridge.msdk.video.dynview.c r2 = r0.a(r2, r3)
            r1.a(r2, r4, r5)
            return
    }

    public a(com.mbridge.msdk.video.dynview.c r1, com.mbridge.msdk.video.dynview.e.g r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.<init>()
            r0.a(r1, r2, r3)
            return
    }

    private void a(com.mbridge.msdk.video.dynview.c r13, com.mbridge.msdk.video.dynview.e.g r14, java.util.Map<java.lang.String, java.lang.Object> r15) {
            r12 = this;
            java.lang.String r0 = ""
            if (r14 != 0) goto L5
            return
        L5:
            if (r13 != 0) goto Ld
            com.mbridge.msdk.video.dynview.c.a r13 = com.mbridge.msdk.video.dynview.c.a.a
            r14.a(r13)
            return
        Ld:
            android.content.Context r1 = r13.a()
            if (r1 != 0) goto L19
            com.mbridge.msdk.video.dynview.c.a r13 = com.mbridge.msdk.video.dynview.c.a.b
            r14.a(r13)
            return
        L19:
            java.lang.String r1 = r13.b()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L29
            com.mbridge.msdk.video.dynview.c.a r13 = com.mbridge.msdk.video.dynview.c.a.c
            r14.a(r13)
            return
        L29:
            java.util.List r1 = r13.l()     // Catch: java.lang.Exception -> L13d
            java.lang.String r2 = "layout"
            r3 = 0
            r4 = 0
            if (r1 == 0) goto Lfd
            java.util.List r1 = r13.g()     // Catch: java.lang.Exception -> L13d
            if (r1 == 0) goto L4f
            java.util.List r1 = r13.g()     // Catch: java.lang.Exception -> L13d
            int r1 = r1.size()     // Catch: java.lang.Exception -> L13d
            if (r1 <= 0) goto L4f
            java.util.List r1 = r13.g()     // Catch: java.lang.Exception -> L13d
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Exception -> L13d
            r11 = r1
            goto L50
        L4f:
            r11 = r3
        L50:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L76
            android.content.Context r5 = r1.j()     // Catch: java.lang.Exception -> L76
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L76
            r1.<init>()     // Catch: java.lang.Exception -> L76
            com.mbridge.msdk.dycreator.wrapper.DyAdType r6 = com.mbridge.msdk.dycreator.wrapper.DyAdType.REWARD     // Catch: java.lang.Exception -> L76
            r1.append(r6)     // Catch: java.lang.Exception -> L76
            r1.append(r0)     // Catch: java.lang.Exception -> L76
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L76
            int r7 = r13.i()     // Catch: java.lang.Exception -> L76
            java.lang.String r8 = "create dynamic view"
            java.lang.String r9 = "start"
            r10 = r11
            com.mbridge.msdk.foundation.same.report.e.a(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> L76
            goto L7a
        L76:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Exception -> L13d
        L7a:
            com.mbridge.msdk.dycreator.wrapper.DyOption$Builder r1 = new com.mbridge.msdk.dycreator.wrapper.DyOption$Builder     // Catch: java.lang.Exception -> L13d
            r1.<init>()     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r1 = r1.campaignEx(r11)     // Catch: java.lang.Exception -> L13d
            java.util.List r5 = r13.l()     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r1 = r1.fileDirs(r5)     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.dycreator.wrapper.DyAdType r5 = com.mbridge.msdk.dycreator.wrapper.DyAdType.REWARD     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r1 = r1.dyAdType(r5)     // Catch: java.lang.Exception -> L13d
            int r5 = r13.e()     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r1 = r1.orientation(r5)     // Catch: java.lang.Exception -> L13d
            int r5 = r13.i()     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r1 = r1.templateType(r5)     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.dycreator.wrapper.DyOption r1 = r1.build()     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator r5 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.getInstance()     // Catch: java.lang.Exception -> L13d
            android.view.View r6 = r5.createDynamicView(r1)     // Catch: java.lang.Exception -> L13d
            if (r6 == 0) goto Le2
            r1 = 1
            com.mbridge.msdk.video.dynview.h.a.a = r1     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Ldd
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> Ldd
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ldd
            r2.<init>()     // Catch: java.lang.Exception -> Ldd
            com.mbridge.msdk.dycreator.wrapper.DyAdType r3 = com.mbridge.msdk.dycreator.wrapper.DyAdType.REWARD     // Catch: java.lang.Exception -> Ldd
            r2.append(r3)     // Catch: java.lang.Exception -> Ldd
            r2.append(r0)     // Catch: java.lang.Exception -> Ldd
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Ldd
            int r3 = r13.i()     // Catch: java.lang.Exception -> Ldd
            java.lang.String r4 = "create dynamic view"
            java.lang.String r5 = "view create done"
            r0 = r1
            r1 = r2
            r2 = r3
            r3 = r4
            r4 = r5
            r5 = r11
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> Ldd
            goto L117
        Ldd:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L13d
            goto L117
        Le2:
            com.mbridge.msdk.video.dynview.h.a.a = r4     // Catch: java.lang.Exception -> L13d
            android.content.Context r0 = r13.a()     // Catch: java.lang.Exception -> L13d
            java.lang.String r1 = r13.b()     // Catch: java.lang.Exception -> L13d
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r2)     // Catch: java.lang.Exception -> L13d
            android.content.Context r1 = r13.a()     // Catch: java.lang.Exception -> L13d
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)     // Catch: java.lang.Exception -> L13d
            android.view.View r6 = r1.inflate(r0, r3)     // Catch: java.lang.Exception -> L13d
            goto L117
        Lfd:
            com.mbridge.msdk.video.dynview.h.a.a = r4     // Catch: java.lang.Exception -> L13d
            android.content.Context r0 = r13.a()     // Catch: java.lang.Exception -> L13d
            java.lang.String r1 = r13.b()     // Catch: java.lang.Exception -> L13d
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r2)     // Catch: java.lang.Exception -> L13d
            android.content.Context r1 = r13.a()     // Catch: java.lang.Exception -> L13d
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)     // Catch: java.lang.Exception -> L13d
            android.view.View r6 = r1.inflate(r0, r3)     // Catch: java.lang.Exception -> L13d
        L117:
            if (r15 != 0) goto L11e
            java.util.HashMap r15 = new java.util.HashMap     // Catch: java.lang.Exception -> L13d
            r15.<init>()     // Catch: java.lang.Exception -> L13d
        L11e:
            java.lang.String r0 = "is_dy_success"
            boolean r1 = com.mbridge.msdk.video.dynview.h.a.a     // Catch: java.lang.Exception -> L13d
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Exception -> L13d
            r15.put(r0, r1)     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.video.dynview.b.b r0 = com.mbridge.msdk.video.dynview.b.b.a()     // Catch: java.lang.Exception -> L13d
            r0.a(r6, r13, r15)     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.video.dynview.b.a r0 = com.mbridge.msdk.video.dynview.b.a.a()     // Catch: java.lang.Exception -> L13d
            com.mbridge.msdk.video.dynview.h.a$1 r1 = new com.mbridge.msdk.video.dynview.h.a$1     // Catch: java.lang.Exception -> L13d
            r1.<init>(r12, r14)     // Catch: java.lang.Exception -> L13d
            r0.a(r6, r13, r15, r1)     // Catch: java.lang.Exception -> L13d
            goto L14e
        L13d:
            r13 = move-exception
            java.lang.String r13 = r13.getMessage()
            java.lang.String r15 = "MBridgeUI"
            com.mbridge.msdk.foundation.tools.z.d(r15, r13)
            if (r14 == 0) goto L14e
            com.mbridge.msdk.video.dynview.c.a r13 = com.mbridge.msdk.video.dynview.c.a.e
            r14.a(r13)
        L14e:
            return
    }

    static boolean a() {
            boolean r0 = com.mbridge.msdk.video.dynview.h.a.a
            return r0
    }
}
