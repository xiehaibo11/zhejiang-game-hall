package com.kwad.components.ad.reward.m;

public final class p extends com.kwad.components.ad.reward.m.s implements android.view.View.OnClickListener {
    private android.widget.ImageView Ah;
    private android.widget.TextView Ai;
    private android.widget.TextView Aj;
    private android.widget.TextView Ak;
    private android.widget.TextView Al;
    private android.widget.TextView Am;
    private android.widget.TextView An;
    private android.widget.TextView Ao;
    private com.kwad.components.ad.reward.j qx;

    public p(com.kwad.components.ad.reward.j r1) {
            r0 = this;
            r0.<init>()
            r0.qx = r1
            return
    }

    private void b(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            android.widget.ImageView r0 = r3.Ah
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.drawable.ksad_ic_default_user_avatar
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            android.widget.ImageView r1 = r3.Ah
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bQ(r4)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadCircleIcon(r1, r2, r0)
            android.widget.TextView r0 = r3.Ai
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.bO(r4)
            r0.setText(r4)
            return
    }

    private void initView() {
            r2 = this;
            android.view.ViewGroup r0 = r2.sw
            if (r0 != 0) goto L5
            return
        L5:
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_live_end_page_author_icon
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.Ah = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_author_name_txt
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Ai = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_live_end_detail_watch_person_count
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Aj = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_live_end_detail_like_person_count
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Ak = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_live_end_detail_watch_time
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Al = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_live_end_bottom_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Am = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_live_end_bottom_action_btn
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.An = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_live_end_bottom_des_btn
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Ao = r0
            android.widget.TextView r0 = r2.An
            r0.setOnClickListener(r2)
            android.widget.TextView r0 = r2.Ao
            r0.setOnClickListener(r2)
            return
    }

    private static java.lang.String l(long r8) {
            r0 = 3600000(0x36ee80, double:1.7786363E-317)
            long r0 = r8 / r0
            r2 = 60000(0xea60, double:2.9644E-319)
            long r2 = r8 / r2
            r4 = 60
            long r6 = r0 * r4
            long r2 = r2 - r6
            r6 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 / r6
            long r4 = r4 * r2
            long r8 = r8 - r4
            r4 = 3600(0xe10, double:1.7786E-320)
            long r4 = r4 * r0
            long r8 = r8 - r4
            r4 = 0
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            r5 = 1
            r6 = 0
            r7 = 2
            if (r4 <= 0) goto L3d
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r4[r6] = r0
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            r4[r5] = r0
            java.lang.Long r8 = java.lang.Long.valueOf(r8)
            r4[r7] = r8
            java.lang.String r8 = "%02d:%02d:%02d"
            java.lang.String r8 = java.lang.String.format(r8, r4)
            return r8
        L3d:
            java.lang.Object[] r0 = new java.lang.Object[r7]
            java.lang.Long r1 = java.lang.Long.valueOf(r2)
            r0[r6] = r1
            java.lang.Long r8 = java.lang.Long.valueOf(r8)
            r0[r5] = r8
            java.lang.String r8 = "%02d:%02d"
            java.lang.String r8 = java.lang.String.format(r8, r0)
            return r8
    }

    public final void U(int r7) {
            r6 = this;
            android.widget.TextView r0 = r6.Am
            if (r0 == 0) goto L56
            if (r7 <= 0) goto L56
            com.kwad.components.ad.reward.j r0 = r6.qx
            boolean r0 = r0.pj
            if (r0 == 0) goto L4f
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r0[r1] = r7
            java.lang.String r7 = "再停留%s秒，即可获得奖励"
            java.lang.String r7 = java.lang.String.format(r7, r0)
            android.text.SpannableString r0 = new android.text.SpannableString
            r0.<init>(r7)
            android.view.ViewGroup r1 = r6.gQ()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r1 = r1.getColor(r2)
            android.text.style.ForegroundColorSpan r2 = new android.text.style.ForegroundColorSpan
            r2.<init>(r1)
            r3 = 3
            r4 = 6
            r5 = 18
            r0.setSpan(r2, r3, r4, r5)
            android.text.style.ForegroundColorSpan r2 = new android.text.style.ForegroundColorSpan
            r2.<init>(r1)
            int r7 = r7.length()
            int r1 = r7 + (-2)
            r0.setSpan(r2, r1, r7, r5)
            android.widget.TextView r7 = r6.Am
            r7.setText(r0)
            return
        L4f:
            android.widget.TextView r7 = r6.Am
            java.lang.String r0 = "已获得奖励"
            r7.setText(r0)
        L56:
            return
    }

    public final void a(com.kwad.components.ad.reward.j r4, com.kwad.components.ad.reward.model.AdLiveEndResultData.AdLivePushEndInfo r5, long r6) {
            r3 = this;
            android.widget.TextView r0 = r3.Ak
            java.lang.String r1 = r5.mDisplayLikeUserCount
            r0.setText(r1)
            android.widget.TextView r0 = r3.Al
            long r1 = r5.mLiveDuration
            java.lang.String r1 = l(r1)
            r0.setText(r1)
            android.widget.TextView r0 = r3.Aj
            java.lang.String r5 = r5.mDisplayWatchingUserCount
            r0.setText(r5)
            boolean r5 = r4.pj
            if (r5 == 0) goto L75
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            long r4 = com.kwad.sdk.core.response.b.a.Y(r4)
            long r4 = r4 - r6
            r6 = 0
            long r4 = java.lang.Math.max(r4, r6)
            r6 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 / r6
            int r4 = (int) r4
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r6 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r5[r6] = r4
            java.lang.String r4 = "再停留%s秒，即可获得奖励"
            java.lang.String r4 = java.lang.String.format(r4, r5)
            android.text.SpannableString r5 = new android.text.SpannableString
            r5.<init>(r4)
            android.view.ViewGroup r6 = r3.gQ()
            android.content.res.Resources r6 = r6.getResources()
            int r7 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r6 = r6.getColor(r7)
            android.text.style.ForegroundColorSpan r7 = new android.text.style.ForegroundColorSpan
            r7.<init>(r6)
            r0 = 3
            r1 = 6
            r2 = 18
            r5.setSpan(r7, r0, r1, r2)
            android.text.style.ForegroundColorSpan r7 = new android.text.style.ForegroundColorSpan
            r7.<init>(r6)
            int r4 = r4.length()
            int r6 = r4 + (-2)
            r5.setSpan(r7, r6, r4, r2)
            android.widget.TextView r4 = r3.Am
        L71:
            r4.setText(r5)
            return
        L75:
            android.widget.TextView r4 = r3.Am
            java.lang.String r5 = "内容很精彩，不要错过哦"
            goto L71
    }

    @Override
    protected final void a(com.kwad.components.ad.reward.m.r r1) {
            r0 = this;
            super.a(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
            r0.b(r1)
            return
    }

    public final void h(android.view.ViewGroup r3) {
            r2 = this;
            int r0 = com.kwad.sdk.R.id.ksad_reward_origin_live_end_page_stub
            int r1 = com.kwad.sdk.R.id.ksad_live_end_page_layout_root
            super.a(r3, r0, r1)
            r2.initView()
            return
    }

    @Override
    public final void onClick(android.view.View r10) {
            r9 = this;
            com.kwad.sdk.core.report.j r8 = new com.kwad.sdk.core.report.j
            r8.<init>()
            r0 = 24
            r8.cm(r0)
            android.widget.TextView r0 = r9.An
            boolean r0 = r10.equals(r0)
            if (r0 == 0) goto L23
            com.kwad.components.ad.reward.j r0 = r9.qx
            r1 = 2
            android.content.Context r2 = r10.getContext()
            r3 = 38
            r4 = 1
            r5 = 0
            r7 = 0
            r0.a(r1, r2, r3, r4, r5, r7, r8)
            return
        L23:
            android.widget.TextView r0 = r9.Ao
            boolean r0 = r10.equals(r0)
            if (r0 == 0) goto L3b
            com.kwad.components.ad.reward.j r0 = r9.qx
            r1 = 2
            android.content.Context r2 = r10.getContext()
            r3 = 37
            r4 = 1
            r5 = 0
            r7 = 0
            r0.a(r1, r2, r3, r4, r5, r7, r8)
        L3b:
            return
    }
}
