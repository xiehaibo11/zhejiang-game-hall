package com.mbridge.msdk.video.dynview.ordercamp.a;

public final class a extends android.widget.BaseAdapter {
    private boolean a;
    private com.mbridge.msdk.video.dynview.ordercamp.a.a.a b;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> c;


    static class a {
        android.widget.RelativeLayout a;
        com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView b;
        com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView c;
        com.mbridge.msdk.videocommon.view.RoundImageView d;
        android.widget.TextView e;
        android.widget.TextView f;
        android.widget.TextView g;
        android.widget.TextView h;
        com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView i;
        android.widget.ImageView j;
        android.widget.ImageView k;
        com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView l;
        com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView m;
        com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView n;
        com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView o;
        com.mbridge.msdk.dycreator.baseview.MBFrameLayout p;

        a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.c = r2
            return
    }

    private int a(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "layout"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    private android.view.View a() {
            r3 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            java.lang.String r1 = "mbridge_order_layout_item"
            int r1 = r3.a(r1)
            r2 = 0
            android.view.View r0 = r0.inflate(r1, r2)
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r1 = new com.mbridge.msdk.video.dynview.ordercamp.a.a$a
            r1.<init>()
            r3.b = r1
            java.lang.String r2 = "mbridge_lv_iv"
            int r2 = r3.b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView r2 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView) r2
            r1.c = r2
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r1 = r3.b
            java.lang.String r2 = "mbridge_lv_iv_burl"
            int r2 = r3.b(r2)
            android.view.View r2 = r0.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.k = r2
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r1 = r3.b
            java.lang.String r2 = "mbridge_lv_icon_iv"
            int r2 = r3.b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.mbridge.msdk.videocommon.view.RoundImageView r2 = (com.mbridge.msdk.videocommon.view.RoundImageView) r2
            r1.d = r2
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r1 = r3.b
            java.lang.String r2 = "mbridge_lv_sv_starlevel"
            int r2 = r3.b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView r2 = (com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView) r2
            r1.i = r2
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r1 = r3.b
            java.lang.String r2 = "mbridge_lv_ration"
            int r2 = r3.b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView r2 = (com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView) r2
            r1.b = r2
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r1 = r3.b
            r0.setTag(r1)
            return r0
    }

    private android.view.View a(int r6) {
            r5 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.c     // Catch: java.lang.Exception -> L15d
            java.lang.String r1 = ""
            if (r0 == 0) goto L36
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.c     // Catch: java.lang.Exception -> L15d
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Exception -> L15d
            if (r0 == 0) goto L36
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15d
            r0.<init>()     // Catch: java.lang.Exception -> L15d
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r5.c     // Catch: java.lang.Exception -> L15d
            java.lang.Object r2 = r2.get(r6)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L15d
            int r2 = r2.getMof_tplid()     // Catch: java.lang.Exception -> L15d
            r0.append(r2)     // Catch: java.lang.Exception -> L15d
            r0.append(r1)     // Catch: java.lang.Exception -> L15d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L15d
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r5.c     // Catch: java.lang.Exception -> L15d
            java.lang.Object r1 = r1.get(r6)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Exception -> L15d
            java.lang.String r1 = r1.getCMPTEntryUrl()     // Catch: java.lang.Exception -> L15d
            goto L38
        L36:
            java.lang.String r0 = "501"
        L38:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L15d
            if (r2 == 0) goto L43
            android.view.View r6 = r5.a()     // Catch: java.lang.Exception -> L15d
            return r6
        L43:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L15d
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L15d
            int r2 = com.mbridge.msdk.foundation.tools.v.t(r2)     // Catch: java.lang.Exception -> L15d
            r3 = 0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.i.a(r3, r0, r1)     // Catch: java.lang.Exception -> L15d
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L15d
            if (r1 == 0) goto L5f
            android.view.View r6 = r5.a()     // Catch: java.lang.Exception -> L15d
            return r6
        L5f:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L15d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15d
            r3.<init>()     // Catch: java.lang.Exception -> L15d
            r3.append(r0)     // Catch: java.lang.Exception -> L15d
            java.lang.String r4 = java.io.File.separator     // Catch: java.lang.Exception -> L15d
            r3.append(r4)     // Catch: java.lang.Exception -> L15d
            java.lang.String r4 = "template_config.json"
            r3.append(r4)     // Catch: java.lang.Exception -> L15d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L15d
            r1.<init>(r3)     // Catch: java.lang.Exception -> L15d
            boolean r3 = r1.isFile()     // Catch: java.lang.Exception -> L15d
            if (r3 == 0) goto L158
            boolean r1 = r1.exists()     // Catch: java.lang.Exception -> L15d
            if (r1 != 0) goto L88
            goto L158
        L88:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15d
            r1.<init>()     // Catch: java.lang.Exception -> L15d
            java.lang.String r3 = "template_"
            r1.append(r3)     // Catch: java.lang.Exception -> L15d
            r1.append(r2)     // Catch: java.lang.Exception -> L15d
            java.lang.String r2 = "_item"
            r1.append(r2)     // Catch: java.lang.Exception -> L15d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15d
            java.util.List r0 = com.mbridge.msdk.foundation.tools.x.b(r0, r1)     // Catch: java.lang.Exception -> L15d
            if (r0 != 0) goto La9
            android.view.View r6 = r5.a()     // Catch: java.lang.Exception -> L15d
            return r6
        La9:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L15d
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L15d
            int r1 = com.mbridge.msdk.foundation.tools.v.t(r1)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L15d
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.c.a r2 = r3.b(r2)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.wrapper.DyOption$Builder r3 = new com.mbridge.msdk.dycreator.wrapper.DyOption$Builder     // Catch: java.lang.Exception -> L15d
            r3.<init>()     // Catch: java.lang.Exception -> L15d
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r5.c     // Catch: java.lang.Exception -> L15d
            java.lang.Object r6 = r4.get(r6)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r6 = r3.campaignEx(r6)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r6 = r6.fileDirs(r0)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.wrapper.DyAdType r0 = com.mbridge.msdk.dycreator.wrapper.DyAdType.REWARD     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r6 = r6.dyAdType(r0)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r6 = r6.orientation(r1)     // Catch: java.lang.Exception -> L15d
            java.lang.String r0 = r2.az()     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r6 = r6.adChoiceLink(r0)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.wrapper.DyOption r6 = r6.build()     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator r0 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.getInstance()     // Catch: java.lang.Exception -> L15d
            android.view.View r6 = r0.createDynamicView(r6)     // Catch: java.lang.Exception -> L15d
            if (r6 == 0) goto L168
            r0 = 1
            r5.a = r0     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = new com.mbridge.msdk.video.dynview.ordercamp.a.a$a     // Catch: java.lang.Exception -> L15d
            r0.<init>()     // Catch: java.lang.Exception -> L15d
            r5.b = r0     // Catch: java.lang.Exception -> L15d
            java.lang.String r1 = "mbridge_lv_iv"
            int r1 = r5.c(r1)     // Catch: java.lang.Exception -> L15d
            android.view.View r1 = r6.findViewById(r1)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r1 = (com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView) r1     // Catch: java.lang.Exception -> L15d
            r0.l = r1     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r5.b     // Catch: java.lang.Exception -> L15d
            java.lang.String r1 = "mbridge_lv_iv_burl"
            int r1 = r5.c(r1)     // Catch: java.lang.Exception -> L15d
            android.view.View r1 = r6.findViewById(r1)     // Catch: java.lang.Exception -> L15d
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Exception -> L15d
            r0.k = r1     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r5.b     // Catch: java.lang.Exception -> L15d
            java.lang.String r1 = "mbridge_lv_icon_iv"
            int r1 = r5.c(r1)     // Catch: java.lang.Exception -> L15d
            android.view.View r1 = r6.findViewById(r1)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r1 = (com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView) r1     // Catch: java.lang.Exception -> L15d
            r0.m = r1     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r5.b     // Catch: java.lang.Exception -> L15d
            java.lang.String r1 = "mbridge_lv_sv_starlevel"
            int r1 = r5.c(r1)     // Catch: java.lang.Exception -> L15d
            android.view.View r1 = r6.findViewById(r1)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView r1 = (com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView) r1     // Catch: java.lang.Exception -> L15d
            r0.n = r1     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r5.b     // Catch: java.lang.Exception -> L15d
            java.lang.String r1 = "mbridge_lv_ration"
            int r1 = r5.c(r1)     // Catch: java.lang.Exception -> L15d
            android.view.View r1 = r6.findViewById(r1)     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.dycreator.baseview.MBFrameLayout r1 = (com.mbridge.msdk.dycreator.baseview.MBFrameLayout) r1     // Catch: java.lang.Exception -> L15d
            r0.p = r1     // Catch: java.lang.Exception -> L15d
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r5.b     // Catch: java.lang.Exception -> L15d
            r6.setTag(r0)     // Catch: java.lang.Exception -> L15d
            goto L168
        L158:
            android.view.View r6 = r5.a()     // Catch: java.lang.Exception -> L15d
            return r6
        L15d:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r0 = "OrderCampAdapter"
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
            r6 = 0
        L168:
            boolean r0 = r5.a
            if (r0 == 0) goto L16d
            goto L171
        L16d:
            android.view.View r6 = r5.a()
        L171:
            return r6
    }

    private void a(android.widget.ImageView r3, java.lang.String r4, boolean r5) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L11
            if (r5 == 0) goto L10
            r4 = 8
            r3.setVisibility(r4)
        L10:
            return
        L11:
            android.content.Context r0 = r3.getContext()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.video.dynview.ordercamp.a.a$1 r1 = new com.mbridge.msdk.video.dynview.ordercamp.a.a$1
            r1.<init>(r2, r3, r5)
            r0.a(r4, r1)
            return
    }

    private int b(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "id"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    private int c(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lb
            int r2 = r2.hashCode()
            return r2
        Lb:
            r2 = -1
            return r2
    }

    private int d(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto L9
            int r2 = r1.c(r2)
            goto Ld
        L9:
            int r2 = r1.b(r2)
        Ld:
            return r2
    }

    @Override
    public final int getCount() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.c
            if (r0 == 0) goto L11
            int r0 = r0.size()
            if (r0 <= 0) goto L11
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.c
            int r0 = r0.size()
            return r0
        L11:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.Object getItem(int r2) {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.c
            if (r0 == 0) goto L9
            java.lang.Object r2 = r0.get(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public final long getItemId(int r3) {
            r2 = this;
            long r0 = (long) r3
            return r0
    }

    @Override
    public final android.view.View getView(int r19, android.view.View r20, android.view.ViewGroup r21) {
            r18 = this;
            r1 = r18
            r0 = r19
            java.lang.String r2 = "OrderCampAdapter"
            if (r20 != 0) goto Ld
            android.view.View r3 = r18.a(r19)     // Catch: java.lang.Exception -> L35e
            goto L17
        Ld:
            java.lang.Object r3 = r20.getTag()     // Catch: java.lang.Exception -> L35e
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r3 = (com.mbridge.msdk.video.dynview.ordercamp.a.a.a) r3     // Catch: java.lang.Exception -> L35e
            r1.b = r3     // Catch: java.lang.Exception -> L35e
            r3 = r20
        L17:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            java.lang.String r5 = "mbridge_lv_item_rl"
            int r5 = r1.d(r5)     // Catch: java.lang.Exception -> L35c
            android.view.View r5 = r3.findViewById(r5)     // Catch: java.lang.Exception -> L35c
            android.widget.RelativeLayout r5 = (android.widget.RelativeLayout) r5     // Catch: java.lang.Exception -> L35c
            r4.a = r5     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            java.lang.String r5 = "mbridge_lv_title_tv"
            int r5 = r1.d(r5)     // Catch: java.lang.Exception -> L35c
            android.view.View r5 = r3.findViewById(r5)     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r5 = (android.widget.TextView) r5     // Catch: java.lang.Exception -> L35c
            r4.e = r5     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            java.lang.String r5 = "mbridge_lv_tv_install"
            int r5 = r1.d(r5)     // Catch: java.lang.Exception -> L35c
            android.view.View r5 = r3.findViewById(r5)     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r5 = (android.widget.TextView) r5     // Catch: java.lang.Exception -> L35c
            r4.g = r5     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            java.lang.String r5 = "mbridge_lv_sv_heat_level"
            int r5 = r1.d(r5)     // Catch: java.lang.Exception -> L35c
            android.view.View r5 = r3.findViewById(r5)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView r5 = (com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView) r5     // Catch: java.lang.Exception -> L35c
            r4.o = r5     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            java.lang.String r5 = "mbridge_lv_desc_tv"
            int r5 = r1.d(r5)     // Catch: java.lang.Exception -> L35c
            android.view.View r5 = r3.findViewById(r5)     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r5 = (android.widget.TextView) r5     // Catch: java.lang.Exception -> L35c
            r4.f = r5     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            java.lang.String r5 = "mbridge_iv_flag"
            int r5 = r1.d(r5)     // Catch: java.lang.Exception -> L35c
            android.view.View r5 = r3.findViewById(r5)     // Catch: java.lang.Exception -> L35c
            android.widget.ImageView r5 = (android.widget.ImageView) r5     // Catch: java.lang.Exception -> L35c
            r4.j = r5     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            java.lang.String r5 = "mbridge_order_viewed_tv"
            int r5 = r1.d(r5)     // Catch: java.lang.Exception -> L35c
            android.view.View r5 = r3.findViewById(r5)     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r5 = (android.widget.TextView) r5     // Catch: java.lang.Exception -> L35c
            r4.h = r5     // Catch: java.lang.Exception -> L35c
            boolean r4 = r1.a     // Catch: java.lang.Exception -> L35c
            r5 = 1
            r6 = 4617315517961601024(0x4014000000000000, double:5.0)
            r8 = 0
            r10 = 0
            if (r4 == 0) goto L161
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.c     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L231
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            if (r4 != 0) goto L9b
            goto L231
        L9b:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.c     // Catch: java.lang.Exception -> L35c
            int r4 = r4.size()     // Catch: java.lang.Exception -> L35c
            if (r4 != 0) goto La5
            goto L231
        La5:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r4 = r4.l     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto Ld9
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r4 = r4.l     // Catch: java.lang.Exception -> L35c
            boolean r4 = r4 instanceof com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto Ld9
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r11 = r4.l     // Catch: java.lang.Exception -> L35c
            r12 = 30
            r13 = 30
            r14 = 30
            r15 = 30
            r16 = 10
            r17 = -1728053248(0xffffffff99000000, float:-6.617445E-24)
            r11.setCustomBorder(r12, r13, r14, r15, r16, r17)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r4 = r4.l     // Catch: java.lang.Exception -> L35c
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r11 = r11.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = (com.mbridge.msdk.foundation.entity.CampaignEx) r11     // Catch: java.lang.Exception -> L35c
            java.lang.String r11 = r11.getImageUrl()     // Catch: java.lang.Exception -> L35c
            r1.a(r4, r11, r10)     // Catch: java.lang.Exception -> L35c
        Ld9:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.ImageView r4 = r4.k     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto Lf2
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.ImageView r4 = r4.k     // Catch: java.lang.Exception -> L35c
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r11 = r11.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = (com.mbridge.msdk.foundation.entity.CampaignEx) r11     // Catch: java.lang.Exception -> L35c
            java.lang.String r11 = r11.getImageUrl()     // Catch: java.lang.Exception -> L35c
            r1.a(r4, r11, r10)     // Catch: java.lang.Exception -> L35c
        Lf2:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r4 = r4.m     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L11f
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r4 = r4.m     // Catch: java.lang.Exception -> L35c
            boolean r4 = r4 instanceof com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L11f
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r4 = r4.m     // Catch: java.lang.Exception -> L35c
            r11 = 50
            r12 = 20
            r13 = -1
            r4.setBorder(r11, r12, r13)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r4 = r4.m     // Catch: java.lang.Exception -> L35c
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r11 = r11.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = (com.mbridge.msdk.foundation.entity.CampaignEx) r11     // Catch: java.lang.Exception -> L35c
            java.lang.String r11 = r11.getIconUrl()     // Catch: java.lang.Exception -> L35c
            r1.a(r4, r11, r5)     // Catch: java.lang.Exception -> L35c
        L11f:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> L35c
            double r4 = r4.getRating()     // Catch: java.lang.Exception -> L35c
            int r8 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r8 > 0) goto L130
            goto L131
        L130:
            r6 = r4
        L131:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView r4 = r4.n     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L146
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView r4 = r4.n     // Catch: java.lang.Exception -> L35c
            int r5 = (int) r6     // Catch: java.lang.Exception -> L35c
            r4.setRating(r5)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView r4 = r4.n     // Catch: java.lang.Exception -> L35c
            r4.setOrientation(r10)     // Catch: java.lang.Exception -> L35c
        L146:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView r4 = r4.o     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L231
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView r4 = r4.o     // Catch: java.lang.Exception -> L35c
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> L35c
            int r5 = r5.getNumberRating()     // Catch: java.lang.Exception -> L35c
            r4.setHeatCount(r5)     // Catch: java.lang.Exception -> L35c
            goto L231
        L161:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.c     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L231
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            if (r4 != 0) goto L16b
            goto L231
        L16b:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.c     // Catch: java.lang.Exception -> L35c
            int r4 = r4.size()     // Catch: java.lang.Exception -> L35c
            if (r4 != 0) goto L175
            goto L231
        L175:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView r4 = r4.c     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L18e
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView r4 = r4.c     // Catch: java.lang.Exception -> L35c
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r11 = r11.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = (com.mbridge.msdk.foundation.entity.CampaignEx) r11     // Catch: java.lang.Exception -> L35c
            java.lang.String r11 = r11.getImageUrl()     // Catch: java.lang.Exception -> L35c
            r1.a(r4, r11, r10)     // Catch: java.lang.Exception -> L35c
        L18e:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.ImageView r4 = r4.k     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L1a7
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.ImageView r4 = r4.k     // Catch: java.lang.Exception -> L35c
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r11 = r11.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = (com.mbridge.msdk.foundation.entity.CampaignEx) r11     // Catch: java.lang.Exception -> L35c
            java.lang.String r11 = r11.getImageUrl()     // Catch: java.lang.Exception -> L35c
            r1.a(r4, r11, r10)     // Catch: java.lang.Exception -> L35c
        L1a7:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.videocommon.view.RoundImageView r4 = r4.d     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L1c9
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.videocommon.view.RoundImageView r4 = r4.d     // Catch: java.lang.Exception -> L35c
            r11 = 25
            r4.setBorderRadius(r11)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.videocommon.view.RoundImageView r4 = r4.d     // Catch: java.lang.Exception -> L35c
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r11 = r11.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = (com.mbridge.msdk.foundation.entity.CampaignEx) r11     // Catch: java.lang.Exception -> L35c
            java.lang.String r11 = r11.getIconUrl()     // Catch: java.lang.Exception -> L35c
            r1.a(r4, r11, r5)     // Catch: java.lang.Exception -> L35c
        L1c9:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> L35c
            double r4 = r4.getRating()     // Catch: java.lang.Exception -> L35c
            int r8 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r8 > 0) goto L1da
            goto L1db
        L1da:
            r6 = r4
        L1db:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView r4 = r4.i     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L1fb
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView r4 = r4.i     // Catch: java.lang.Exception -> L35c
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> L35c
            int r5 = r5.getNumberRating()     // Catch: java.lang.Exception -> L35c
            r4.setRatingAndUser(r6, r5)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView r4 = r4.i     // Catch: java.lang.Exception -> L35c
            r4.setOrientation(r10)     // Catch: java.lang.Exception -> L35c
        L1fb:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView r4 = r4.b     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L218
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView r4 = r4.b     // Catch: java.lang.Exception -> L35c
            r5 = 1065353216(0x3f800000, float:1.0)
            r4.setWidthRatio(r5)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView r4 = r4.b     // Catch: java.lang.Exception -> L35c
            r4.setHeightRatio(r5)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView r4 = r4.b     // Catch: java.lang.Exception -> L35c
            r4.setAutoscroll(r10)     // Catch: java.lang.Exception -> L35c
        L218:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView r4 = r4.c     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L231
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView r11 = r4.c     // Catch: java.lang.Exception -> L35c
            r12 = 30
            r13 = 30
            r14 = 30
            r15 = 30
            r16 = 10
            r17 = -1728053248(0xffffffff99000000, float:-6.617445E-24)
            r11.setCustomBorder(r12, r13, r14, r15, r16, r17)     // Catch: java.lang.Exception -> L35c
        L231:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L368
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r4 = r4.e     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L24e
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> L35c
            java.lang.String r4 = r4.getAppName()     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r5 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r5 = r5.e     // Catch: java.lang.Exception -> L35c
            r5.setText(r4)     // Catch: java.lang.Exception -> L35c
        L24e:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r4 = r4.f     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L267
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> L35c
            java.lang.String r4 = r4.getAppDesc()     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r5 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r5 = r5.f     // Catch: java.lang.Exception -> L35c
            r5.setText(r4)     // Catch: java.lang.Exception -> L35c
        L267:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r4 = r4.g     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L29e
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.c     // Catch: java.lang.Exception -> L35c
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L35c
            java.lang.String r0 = r0.getAdCall()     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r4 = r4.g     // Catch: java.lang.Exception -> L35c
            boolean r4 = r4 instanceof com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView     // Catch: java.lang.Exception -> L35c
            if (r4 == 0) goto L297
            com.mbridge.msdk.video.dynview.h.b r4 = new com.mbridge.msdk.video.dynview.h.b     // Catch: java.lang.Exception -> L35c
            r4.<init>()     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r5 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r5 = r5.g     // Catch: java.lang.Exception -> L35c
            android.animation.ObjectAnimator r4 = r4.c(r5)     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r5 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r5 = r5.g     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView r5 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView) r5     // Catch: java.lang.Exception -> L35c
            r5.setObjectAnimator(r4)     // Catch: java.lang.Exception -> L35c
        L297:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r4 = r4.g     // Catch: java.lang.Exception -> L35c
            r4.setText(r0)     // Catch: java.lang.Exception -> L35c
        L29e:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.ImageView r0 = r0.j     // Catch: java.lang.Exception -> L35c
            if (r0 == 0) goto L312
            java.util.Locale r0 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> L30a
            java.lang.String r0 = r0.getLanguage()     // Catch: java.lang.Exception -> L30a
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L30a
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> L30a
            if (r4 == 0) goto L312
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L30a
            java.lang.String r6 = "drawable"
            if (r5 != 0) goto L2e8
            java.lang.String r5 = "zh"
            boolean r0 = r0.equals(r5)     // Catch: java.lang.Exception -> L30a
            if (r0 == 0) goto L2e8
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r1.b     // Catch: java.lang.Exception -> L30a
            android.widget.ImageView r0 = r0.j     // Catch: java.lang.Exception -> L30a
            android.content.res.Resources r5 = r4.getResources()     // Catch: java.lang.Exception -> L30a
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L30a
            java.lang.String r7 = "mbridge_reward_flag_cn"
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L30a
            java.lang.String r8 = r8.d()     // Catch: java.lang.Exception -> L30a
            int r4 = r4.getIdentifier(r7, r6, r8)     // Catch: java.lang.Exception -> L30a
            android.graphics.drawable.Drawable r4 = r5.getDrawable(r4)     // Catch: java.lang.Exception -> L30a
            r0.setImageDrawable(r4)     // Catch: java.lang.Exception -> L30a
            goto L312
        L2e8:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r1.b     // Catch: java.lang.Exception -> L30a
            android.widget.ImageView r0 = r0.j     // Catch: java.lang.Exception -> L30a
            android.content.res.Resources r5 = r4.getResources()     // Catch: java.lang.Exception -> L30a
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L30a
            java.lang.String r7 = "mbridge_reward_flag_en"
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L30a
            java.lang.String r8 = r8.d()     // Catch: java.lang.Exception -> L30a
            int r4 = r4.getIdentifier(r7, r6, r8)     // Catch: java.lang.Exception -> L30a
            android.graphics.drawable.Drawable r4 = r5.getDrawable(r4)     // Catch: java.lang.Exception -> L30a
            r0.setImageDrawable(r4)     // Catch: java.lang.Exception -> L30a
            goto L312
        L30a:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)     // Catch: java.lang.Exception -> L35c
        L312:
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r1.b     // Catch: java.lang.Exception -> L35c
            android.widget.TextView r0 = r0.h     // Catch: java.lang.Exception -> L35c
            if (r0 == 0) goto L368
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L353
            java.lang.String r0 = r0.d()     // Catch: java.lang.Exception -> L353
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L353
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> L353
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L353
            java.lang.String r5 = "mbridge_reward_viewed_text_str"
            java.lang.String r6 = "string"
            int r0 = r4.getIdentifier(r5, r6, r0)     // Catch: java.lang.Exception -> L353
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r4 = r1.b     // Catch: java.lang.Exception -> L353
            android.widget.TextView r4 = r4.h     // Catch: java.lang.Exception -> L353
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L353
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L353
            android.content.res.Resources r5 = r5.getResources()     // Catch: java.lang.Exception -> L353
            java.lang.String r0 = r5.getString(r0)     // Catch: java.lang.Exception -> L353
            r4.setText(r0)     // Catch: java.lang.Exception -> L353
            com.mbridge.msdk.video.dynview.ordercamp.a.a$a r0 = r1.b     // Catch: java.lang.Exception -> L353
            android.widget.TextView r0 = r0.h     // Catch: java.lang.Exception -> L353
            r0.setVisibility(r10)     // Catch: java.lang.Exception -> L353
            goto L368
        L353:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L35c
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)     // Catch: java.lang.Exception -> L35c
            goto L368
        L35c:
            r0 = move-exception
            goto L361
        L35e:
            r0 = move-exception
            r3 = r20
        L361:
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
        L368:
            return r3
    }
}
