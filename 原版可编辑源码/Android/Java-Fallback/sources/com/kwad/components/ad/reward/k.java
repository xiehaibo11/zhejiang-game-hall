package com.kwad.components.ad.reward;

public final class k extends com.kwad.components.core.n.g {
    private static java.lang.String qb = "进阶奖励还差 %s 步到手，\n确认放弃吗？";
    private static java.lang.String qc = "再观看%ss可获得基础奖励，\n确认放弃吗？";
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.ad.reward.k.a qa;











    public interface a extends com.kwad.components.core.webview.b.e.c {
        void g(int r1, int r2);

        void gn();
    }

    public static class b implements com.kwad.components.ad.reward.k.a {
        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void H(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public void g(int r1, int r2) {
                r0 = this;
                return
        }

        @Override
        public void gg() {
                r0 = this;
                return
        }

        @Override
        public void gn() {
                r0 = this;
                return
        }

        @Override
        public void go() {
                r0 = this;
                return
        }

        @Override
        public void gp() {
                r0 = this;
                return
        }
    }

    public static class c extends com.kwad.sdk.core.response.a.a {
        public com.kwad.components.ad.reward.k.b.a pA;
        public com.kwad.components.ad.reward.k.a.a pB;
        public java.lang.String qh;
        public java.lang.String qi;
        public java.lang.String qj;
        public java.lang.String qk;
        public java.lang.String ql;
        public java.lang.String qm;
        public java.lang.String qn;
        public java.lang.String qo;
        public int style;
        public java.lang.String title;

        private c() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.kwad.components.ad.reward.k.c I(java.lang.String r2) {
                com.kwad.components.ad.reward.k$c r0 = new com.kwad.components.ad.reward.k$c
                r0.<init>()
                r1 = 0
                r0.style = r1
                r0.title = r2
                java.lang.String r2 = "关闭广告"
                r0.qh = r2
                java.lang.String r2 = "继续观看"
                r0.qi = r2
                return r0
        }

        public static com.kwad.components.ad.reward.k.c J(java.lang.String r2) {
                com.kwad.components.ad.reward.k$c r0 = new com.kwad.components.ad.reward.k$c
                r0.<init>()
                r1 = 0
                r0.style = r1
                r0.title = r2
                java.lang.String r2 = "奖励不要了"
                r0.qh = r2
                java.lang.String r2 = "返回"
                r0.qi = r2
                return r0
        }

        public static com.kwad.components.ad.reward.k.c K(java.lang.String r2) {
                com.kwad.components.ad.reward.k$c r0 = new com.kwad.components.ad.reward.k$c
                r0.<init>()
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
                r1.<init>(r2)     // Catch: org.json.JSONException -> Ld
                r0.parseJson(r1)     // Catch: org.json.JSONException -> Ld
            Ld:
                return r0
        }

        private void L(java.lang.String r1) {
                r0 = this;
                r0.qo = r1
                return
        }

        static com.kwad.components.ad.reward.k.c a(com.kwad.components.ad.reward.k.a.a r2, com.kwad.sdk.core.response.model.AdTemplate r3, java.lang.String r4) {
                com.kwad.components.ad.reward.k$c r0 = new com.kwad.components.ad.reward.k$c
                r0.<init>()
                r1 = 2
                r0.style = r1
                r0.pB = r2
                r0.qk = r4
                com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r3)
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.bQ(r2)
                r0.ql = r2
                return r0
        }

        static com.kwad.components.ad.reward.k.c a(com.kwad.components.ad.reward.k.b.a r2, com.kwad.sdk.core.response.model.AdTemplate r3, java.lang.String r4) {
                com.kwad.components.ad.reward.k$c r0 = new com.kwad.components.ad.reward.k$c
                r0.<init>()
                r1 = 1
                r0.style = r1
                r0.pA = r2
                r0.qk = r4
                com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r3)
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.bQ(r2)
                r0.ql = r2
                return r0
        }

        public static com.kwad.components.ad.reward.k.c a(com.kwad.sdk.core.response.model.AdInfo r3, long r4) {
                com.kwad.components.ad.reward.k$c r0 = new com.kwad.components.ad.reward.k$c
                r0.<init>()
                r1 = 5
                r0.style = r1
                com.kwad.sdk.core.response.model.AdProductInfo r1 = com.kwad.sdk.core.response.b.a.cy(r3)
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.an(r3)
                r0.qm = r2
                java.lang.String r2 = r1.getName()
                r0.title = r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto L24
                java.lang.String r3 = com.kwad.sdk.core.response.b.a.ap(r3)
                r0.title = r3
            L24:
                java.lang.String r3 = r1.getIcon()
                r0.ql = r3
                r1 = 0
                int r3 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
                if (r3 <= 0) goto L35
                java.lang.String r3 = java.lang.String.valueOf(r4)
                goto L36
            L35:
                r3 = 0
            L36:
                r0.L(r3)
                return r0
        }

        static com.kwad.components.ad.reward.k.c a(com.kwad.sdk.core.response.model.AdTemplate r3, long r4) {
                com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
                com.kwad.components.ad.reward.k$c r1 = new com.kwad.components.ad.reward.k$c
                r1.<init>()
                r2 = 8
                r1.style = r2
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.bQ(r0)
                r1.ql = r2
                r2 = 1
                java.lang.Object[] r2 = new java.lang.Object[r2]
                java.lang.Long r4 = java.lang.Long.valueOf(r4)
                r5 = 0
                r2[r5] = r4
                java.lang.String r4 = "再看%s秒，可获得奖励"
                java.lang.String r4 = java.lang.String.format(r4, r2)
                r1.title = r4
                java.lang.String r4 = com.kwad.sdk.core.response.b.a.bO(r0)
                r1.qm = r4
                java.lang.String r4 = com.kwad.sdk.core.response.b.a.an(r0)
                r1.qn = r4
                java.lang.String r4 = "放弃奖励"
                r1.qh = r4
                java.lang.String r4 = "继续观看"
                r1.qi = r4
                com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
                java.lang.String r3 = com.kwad.sdk.core.response.b.a.aw(r3)
                r1.qj = r3
                return r1
        }

        static com.kwad.components.ad.reward.k.c b(com.kwad.sdk.core.response.model.AdTemplate r3, long r4) {
                com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r0 = com.kwad.sdk.core.response.b.b.bL(r3)
                com.kwad.components.ad.reward.k$c r1 = new com.kwad.components.ad.reward.k$c
                r1.<init>()
                r2 = 8
                r1.style = r2
                java.lang.String r2 = r0.userHeadUrl
                r1.ql = r2
                r2 = 1
                java.lang.Object[] r2 = new java.lang.Object[r2]
                java.lang.Long r4 = java.lang.Long.valueOf(r4)
                r5 = 0
                r2[r5] = r4
                java.lang.String r4 = "再看%s秒，可获得奖励"
                java.lang.String r4 = java.lang.String.format(r4, r2)
                r1.title = r4
                java.lang.String r4 = r0.title
                r1.qm = r4
                java.lang.String r4 = "放弃奖励"
                r1.qh = r4
                java.lang.String r4 = "继续观看"
                r1.qi = r4
                com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
                java.lang.String r3 = com.kwad.sdk.core.response.b.a.aw(r3)
                r1.qj = r3
                return r1
        }

        static com.kwad.components.ad.reward.k.c h(com.kwad.sdk.core.response.model.AdInfo r2) {
                com.kwad.components.ad.reward.k$c r0 = new com.kwad.components.ad.reward.k$c
                r0.<init>()
                r1 = 4
                r0.style = r1
                com.kwad.sdk.core.response.model.AdProductInfo r1 = com.kwad.sdk.core.response.b.a.cy(r2)
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.an(r2)
                r0.title = r2
                java.lang.String r2 = r1.getIcon()
                r0.ql = r2
                return r0
        }

        static com.kwad.components.ad.reward.k.c i(long r3) {
                com.kwad.components.ad.reward.k$c r0 = new com.kwad.components.ad.reward.k$c
                r0.<init>()
                r1 = 6
                r0.style = r1
                java.lang.String r1 = "残忍离开"
                r0.qh = r1
                java.lang.String r1 = "留下看看"
                r0.qi = r1
                r1 = 0
                int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
                if (r1 <= 0) goto L1b
                java.lang.String r3 = java.lang.String.valueOf(r3)
                goto L1c
            L1b:
                r3 = 0
            L1c:
                r0.L(r3)
                return r0
        }

        @Override
        public void afterParseJson(org.json.JSONObject r3) {
                r2 = this;
                super.afterParseJson(r3)
                java.lang.String r0 = "mLaunchAppTask"
                org.json.JSONObject r0 = r3.optJSONObject(r0)
                if (r0 == 0) goto L1b
                com.kwad.components.ad.reward.k.b.a r1 = r2.pA
                if (r1 != 0) goto L16
                com.kwad.components.ad.reward.k.b.a r1 = new com.kwad.components.ad.reward.k.b.a
                r1.<init>()
                r2.pA = r1
            L16:
                com.kwad.components.ad.reward.k.b.a r1 = r2.pA
                r1.parseJson(r0)
            L1b:
                java.lang.String r0 = "mLandPageOpenTask"
                org.json.JSONObject r3 = r3.optJSONObject(r0)
                if (r3 == 0) goto L33
                com.kwad.components.ad.reward.k.a.a r0 = r2.pB
                if (r0 != 0) goto L2e
                com.kwad.components.ad.reward.k.a.a r0 = new com.kwad.components.ad.reward.k.a.a
                r0.<init>()
                r2.pB = r0
            L2e:
                com.kwad.components.ad.reward.k.a.a r0 = r2.pB
                r0.parseJson(r3)
            L33:
                return
        }

        @Override
        public void afterToJson(org.json.JSONObject r3) {
                r2 = this;
                super.afterToJson(r3)
                com.kwad.components.ad.reward.k.b.a r0 = r2.pA
                if (r0 == 0) goto Lc
                java.lang.String r1 = "mLaunchAppTask"
                com.kwad.sdk.utils.t.a(r3, r1, r0)
            Lc:
                com.kwad.components.ad.reward.k.a.a r0 = r2.pB
                if (r0 == 0) goto L15
                java.lang.String r1 = "mLandPageOpenTask"
                com.kwad.sdk.utils.t.a(r3, r1, r0)
            L15:
                return
        }

        public final int getStyle() {
                r1 = this;
                int r0 = r1.style
                return r0
        }

        public final java.lang.String getTitle() {
                r1 = this;
                java.lang.String r0 = r1.title
                return r0
        }

        public final java.lang.String gq() {
                r1 = this;
                java.lang.String r0 = r1.qh
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto Lb
                java.lang.String r0 = "关闭广告"
                return r0
            Lb:
                java.lang.String r0 = r1.qh
                return r0
        }

        public final java.lang.String gr() {
                r1 = this;
                java.lang.String r0 = r1.qi
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto Lb
                java.lang.String r0 = "继续观看"
                return r0
            Lb:
                java.lang.String r0 = r1.qi
                return r0
        }

        public final com.kwad.components.ad.reward.k.b.a gs() {
                r1 = this;
                com.kwad.components.ad.reward.k.b.a r0 = r1.pA
                return r0
        }

        public final com.kwad.components.ad.reward.k.a.a gt() {
                r1 = this;
                com.kwad.components.ad.reward.k.a.a r0 = r1.pB
                return r0
        }

        public final java.lang.String gu() {
                r1 = this;
                java.lang.String r0 = r1.ql
                return r0
        }

        public final java.lang.String gv() {
                r1 = this;
                java.lang.String r0 = r1.qm
                return r0
        }

        public final java.lang.String gw() {
                r1 = this;
                java.lang.String r0 = r1.qn
                return r0
        }

        public final java.lang.String gx() {
                r3 = this;
                java.lang.String r0 = r3.qo
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto Lb
                java.lang.String r0 = ""
                return r0
            Lb:
                r0 = 1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                java.lang.String r2 = r3.qo
                r0[r1] = r2
                java.lang.String r1 = "再看%s秒，可获得优惠"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                return r0
        }
    }

    static {
            return
    }

    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.ad.reward.k.c H(java.lang.String r0) {
            com.kwad.components.ad.reward.k$c r0 = com.kwad.components.ad.reward.k.c.J(r0)
            return r0
    }

    private static android.view.View a(android.app.DialogFragment r2, android.view.LayoutInflater r3, android.view.ViewGroup r4, com.kwad.components.ad.reward.k.c r5, com.kwad.components.ad.reward.k.a r6) {
            int r0 = com.kwad.sdk.R.layout.ksad_video_close_dialog
            r1 = 0
            android.view.View r3 = r3.inflate(r0, r4, r1)
            int r4 = com.kwad.sdk.R.id.ksad_title
            android.view.View r4 = r3.findViewById(r4)
            android.widget.TextView r4 = (android.widget.TextView) r4
            java.lang.String r0 = r5.getTitle()
            r4.setText(r0)
            int r4 = com.kwad.sdk.R.id.ksad_close_btn
            android.view.View r4 = r3.findViewById(r4)
            android.widget.TextView r4 = (android.widget.TextView) r4
            int r0 = com.kwad.sdk.R.id.ksad_continue_btn
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            java.lang.String r1 = r5.gq()
            r4.setText(r1)
            java.lang.String r5 = r5.gr()
            r0.setText(r5)
            com.kwad.components.ad.reward.k$3 r5 = new com.kwad.components.ad.reward.k$3
            r5.<init>(r2, r6)
            r4.setOnClickListener(r5)
            com.kwad.components.ad.reward.k$4 r4 = new com.kwad.components.ad.reward.k$4
            r4.<init>(r2, r6)
            r0.setOnClickListener(r4)
            return r3
    }

    private static android.view.View a(android.app.DialogFragment r7, android.view.LayoutInflater r8, android.view.ViewGroup r9, com.kwad.components.ad.reward.k.c r10, com.kwad.sdk.core.response.model.AdTemplate r11, com.kwad.components.ad.reward.k.a r12) {
            com.kwad.components.ad.reward.k.b.a r0 = r10.gs()
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            android.view.View r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    private static android.view.View a(com.kwad.components.ad.reward.k.a r6, android.app.DialogFragment r7, android.view.LayoutInflater r8, android.view.ViewGroup r9, com.kwad.components.ad.reward.k.c r10, com.kwad.sdk.core.response.model.AdTemplate r11, com.kwad.components.ad.reward.k.a r12) {
            int r0 = com.kwad.sdk.R.layout.ksad_reward_task_launch_app_dialog
            r1 = 0
            android.view.View r8 = r8.inflate(r0, r9, r1)
            boolean r9 = r6 instanceof com.kwad.components.ad.reward.k.b.a
            if (r9 == 0) goto L15
            r9 = r6
            com.kwad.components.ad.reward.k.b.a r9 = (com.kwad.components.ad.reward.k.b.a) r9
            android.content.Context r0 = r8.getContext()
            com.kwad.components.ad.reward.k.b.a.a(r9, r0, r11)
        L15:
            int r9 = com.kwad.sdk.R.id.ksad_reward_task_dialog_steps
            android.view.View r9 = r8.findViewById(r9)
            com.kwad.components.ad.reward.widget.RewardTaskStepView r9 = (com.kwad.components.ad.reward.widget.RewardTaskStepView) r9
            java.util.List r0 = r6.jw()
            java.lang.String r2 = r10.qk
            r9.a(r0, r2)
            int r9 = com.kwad.sdk.R.id.ksad_reward_task_dialog_icon
            android.view.View r9 = r8.findViewById(r9)
            android.widget.ImageView r9 = (android.widget.ImageView) r9
            java.lang.String r0 = r10.gu()
            r2 = 12
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r9, r0, r11, r2)
            int r9 = com.kwad.sdk.R.id.ksad_reward_task_dialog_abandon
            android.view.View r9 = r8.findViewById(r9)
            android.widget.TextView r9 = (android.widget.TextView) r9
            int r11 = com.kwad.sdk.R.id.ksad_reward_task_dialog_continue
            android.view.View r11 = r8.findViewById(r11)
            android.widget.TextView r11 = (android.widget.TextView) r11
            int r0 = com.kwad.sdk.R.id.ksad_reward_task_dialog_title
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r6 = r6.jx()
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            java.lang.String r10 = r10.qk
            java.lang.String r2 = "0"
            boolean r2 = r2.equals(r10)
            r3 = 1
            if (r2 == 0) goto L75
            java.lang.String r4 = com.kwad.components.ad.reward.k.qb
            java.lang.Object[] r5 = new java.lang.Object[r3]
            r5[r1] = r6
            java.lang.String r1 = java.lang.String.format(r4, r5)
            goto L7f
        L75:
            java.lang.String r4 = com.kwad.components.ad.reward.k.qc
            java.lang.Object[] r5 = new java.lang.Object[r3]
            r5[r1] = r10
            java.lang.String r1 = java.lang.String.format(r4, r5)
        L7f:
            if (r2 == 0) goto L86
            int r6 = r1.indexOf(r6)
            goto L8a
        L86:
            int r6 = r1.indexOf(r10)
        L8a:
            if (r6 >= 0) goto L90
            r0.setText(r1)
            goto Lc0
        L90:
            if (r2 == 0) goto L95
            int r10 = r6 + 1
            goto La0
        L95:
            int r10 = r10.length()
            if (r10 <= r3) goto L9e
            int r10 = r6 + 3
            goto La0
        L9e:
            int r10 = r6 + 2
        La0:
            android.content.Context r2 = r8.getContext()
            android.content.res.Resources r2 = r2.getResources()
            int r3 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r2 = r2.getColor(r3)
            android.text.style.ForegroundColorSpan r3 = new android.text.style.ForegroundColorSpan
            r3.<init>(r2)
            android.text.SpannableString r2 = new android.text.SpannableString
            r2.<init>(r1)
            r1 = 17
            r2.setSpan(r3, r6, r10, r1)
            r0.setText(r2)
        Lc0:
            com.kwad.components.ad.reward.k$7 r6 = new com.kwad.components.ad.reward.k$7
            r6.<init>(r7, r12)
            r9.setOnClickListener(r6)
            com.kwad.components.ad.reward.k$8 r6 = new com.kwad.components.ad.reward.k$8
            r6.<init>(r7, r12)
            r11.setOnClickListener(r6)
            return r8
    }

    private android.view.View a(com.kwad.components.ad.reward.k r3, android.view.LayoutInflater r4, android.view.ViewGroup r5, com.kwad.components.ad.reward.k.c r6, com.kwad.components.ad.reward.k.a r7) {
            r2 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_video_close_extend_dialog
            r1 = 0
            android.view.View r4 = r4.inflate(r0, r5, r1)
            int r5 = com.kwad.sdk.R.id.ksad_reward_close_extend_dialog_play_time_tips
            android.view.View r5 = r4.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            android.content.Context r0 = r4.getContext()
            java.lang.String r1 = r6.qo
            android.text.SpannableString r0 = e(r0, r1)
            r5.setText(r0)
            int r5 = com.kwad.sdk.R.id.ksad_reward_close_extend_dialog_btn_deny
            android.view.View r5 = r4.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            int r0 = com.kwad.sdk.R.id.ksad_reward_close_extend_dialog_btn_continue
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            java.lang.String r1 = r6.gq()
            r5.setText(r1)
            java.lang.String r6 = r6.gr()
            r0.setText(r6)
            com.kwad.components.ad.reward.k$5 r6 = new com.kwad.components.ad.reward.k$5
            r6.<init>(r2, r3, r7)
            r5.setOnClickListener(r6)
            com.kwad.components.ad.reward.k$6 r5 = new com.kwad.components.ad.reward.k$6
            r5.<init>(r2, r3, r7)
            r0.setOnClickListener(r5)
            return r4
    }

    public static com.kwad.components.ad.reward.k.c a(com.kwad.components.ad.reward.j r12, java.lang.String r13) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r12.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.ad.reward.k.b.a r2 = r12.pA
            com.kwad.components.ad.reward.k.a.a r3 = r12.pB
            int r4 = r12.pC
            com.kwad.sdk.core.response.model.AdInfo r5 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r5 = com.kwad.components.ad.reward.a.b.k(r5)
            boolean r5 = com.kwad.sdk.core.response.b.d.f(r0, r5)
            r6 = 0
            if (r5 != 0) goto L21
            boolean r7 = com.kwad.sdk.core.response.b.d.s(r0)
            if (r7 == 0) goto L4a
        L21:
            long r7 = com.kwad.sdk.core.response.b.a.V(r1)
            int r7 = (int) r7
            int r8 = com.kwad.sdk.core.response.b.a.G(r1)
            if (r7 <= r8) goto L2d
            r7 = r8
        L2d:
            com.kwad.components.ad.reward.l.d r12 = r12.oV
            long r8 = r12.getPlayDuration()
            int r12 = r7 * 1000
            int r12 = r12 + (-800)
            long r10 = (long) r12
            int r12 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r12 >= 0) goto L4a
            float r12 = (float) r7
            float r7 = (float) r8
            r8 = 1148846080(0x447a0000, float:1000.0)
            float r7 = r7 / r8
            r8 = 1056964608(0x3f000000, float:0.5)
            float r7 = r7 + r8
            float r12 = r12 - r7
            int r12 = (int) r12
            if (r12 >= 0) goto L49
            goto L4a
        L49:
            r6 = r12
        L4a:
            if (r5 == 0) goto L57
            if (r2 == 0) goto L57
            java.lang.String r12 = java.lang.String.valueOf(r6)
            com.kwad.components.ad.reward.k$c r12 = com.kwad.components.ad.reward.k.c.a(r2, r0, r12)
            return r12
        L57:
            boolean r12 = com.kwad.sdk.core.response.b.d.s(r0)
            if (r12 == 0) goto L68
            if (r3 == 0) goto L68
            java.lang.String r12 = java.lang.String.valueOf(r6)
            com.kwad.components.ad.reward.k$c r12 = com.kwad.components.ad.reward.k.c.a(r3, r0, r12)
            return r12
        L68:
            boolean r12 = com.kwad.components.ad.reward.a.b.i(r1)
            if (r12 == 0) goto L73
            com.kwad.components.ad.reward.k$c r12 = com.kwad.components.ad.reward.k.c.h(r1)
            return r12
        L73:
            int r12 = com.kwad.sdk.core.response.b.a.bN(r1)
            r2 = 1
            if (r12 != r2) goto L86
            int r12 = com.kwad.components.ad.reward.a.b.gM()
            if (r12 != r2) goto L86
            long r12 = (long) r4
            com.kwad.components.ad.reward.k$c r12 = com.kwad.components.ad.reward.k.c.a(r1, r12)
            return r12
        L86:
            boolean r12 = com.kwad.sdk.core.response.b.a.bK(r1)
            if (r12 == 0) goto L91
            com.kwad.components.ad.reward.k$c r12 = com.kwad.components.ad.reward.k.c.J(r13)
            return r12
        L91:
            boolean r12 = com.kwad.sdk.core.response.b.a.cw(r1)
            if (r12 == 0) goto L9d
            long r12 = (long) r4
            com.kwad.components.ad.reward.k$c r12 = com.kwad.components.ad.reward.k.c.a(r0, r12)
            return r12
        L9d:
            boolean r12 = com.kwad.sdk.core.response.b.a.aN(r0)
            if (r12 == 0) goto La9
            long r12 = (long) r4
            com.kwad.components.ad.reward.k$c r12 = com.kwad.components.ad.reward.k.c.b(r0, r12)
            return r12
        La9:
            int r12 = com.kwad.components.ad.reward.a.b.gG()
            if (r12 != r2) goto Lb5
            long r12 = (long) r4
            com.kwad.components.ad.reward.k$c r12 = com.kwad.components.ad.reward.k.c.i(r12)
            return r12
        Lb5:
            com.kwad.components.ad.reward.k$c r12 = com.kwad.components.ad.reward.k.c.I(r13)
            return r12
    }

    public static com.kwad.components.ad.reward.k a(android.app.Activity r3, com.kwad.sdk.core.response.model.AdTemplate r4, com.kwad.components.ad.reward.k.c r5, com.kwad.components.ad.reward.k.a r6) {
            com.kwad.components.ad.reward.k r0 = new com.kwad.components.ad.reward.k
            r0.<init>()
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            org.json.JSONObject r5 = r5.toJson()
            java.lang.String r5 = r5.toString()
            java.lang.String r2 = "key_params_json"
            r1.putString(r2, r5)
            org.json.JSONObject r4 = r4.toJson()
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "key_template_json"
            r1.putString(r5, r4)
            r0.setArguments(r1)
            r0.a(r6)
            android.app.FragmentManager r3 = r3.getFragmentManager()
            java.lang.String r4 = "videoCloseDialog"
            r0.show(r3, r4)
            return r0
    }

    private void a(com.kwad.components.ad.reward.k.a r1) {
            r0 = this;
            r0.qa = r1
            return
    }

    private static android.view.View b(android.app.DialogFragment r7, android.view.LayoutInflater r8, android.view.ViewGroup r9, com.kwad.components.ad.reward.k.c r10, com.kwad.sdk.core.response.model.AdTemplate r11, com.kwad.components.ad.reward.k.a r12) {
            com.kwad.components.ad.reward.k.a.a r0 = r10.gt()
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            android.view.View r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    private static android.view.View c(android.app.DialogFragment r2, android.view.LayoutInflater r3, android.view.ViewGroup r4, com.kwad.components.ad.reward.k.c r5, com.kwad.sdk.core.response.model.AdTemplate r6, com.kwad.components.ad.reward.k.a r7) {
            int r0 = com.kwad.sdk.R.layout.ksad_reward_order_dialog
            r1 = 0
            android.view.View r3 = r3.inflate(r0, r4, r1)
            int r4 = com.kwad.sdk.R.id.ksad_reward_order_dialog_icon
            android.view.View r4 = r3.findViewById(r4)
            com.kwad.components.core.widget.KSCornerImageView r4 = (com.kwad.components.core.widget.KSCornerImageView) r4
            java.lang.String r0 = r5.ql
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r4, r0, r6)
            int r4 = com.kwad.sdk.R.id.ksad_reward_order_dialog_desc
            android.view.View r4 = r3.findViewById(r4)
            android.widget.TextView r4 = (android.widget.TextView) r4
            java.lang.String r5 = r5.getTitle()
            r4.setText(r5)
            int r4 = com.kwad.sdk.R.id.ksad_reward_order_dialog_btn_close
            android.view.View r4 = r3.findViewById(r4)
            com.kwad.components.ad.reward.k$9 r5 = new com.kwad.components.ad.reward.k$9
            r5.<init>(r2, r7)
            r4.setOnClickListener(r5)
            int r4 = com.kwad.sdk.R.id.ksad_reward_order_dialog_btn_view_detail
            android.view.View r4 = r3.findViewById(r4)
            com.kwad.components.ad.reward.k$10 r5 = new com.kwad.components.ad.reward.k$10
            r5.<init>(r7)
            r4.setOnClickListener(r5)
            int r4 = com.kwad.sdk.R.id.ksad_reward_order_dialog_btn_deny
            android.view.View r4 = r3.findViewById(r4)
            com.kwad.components.ad.reward.k$2 r5 = new com.kwad.components.ad.reward.k$2
            r5.<init>(r2, r7)
            r4.setOnClickListener(r5)
            return r3
    }

    private static android.text.SpannableString e(android.content.Context r6, java.lang.String r7) {
            android.text.SpannableString r0 = new android.text.SpannableString
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "再看"
            r1.<init>(r2)
            r1.append(r7)
            java.lang.String r7 = "秒，即可获得奖励"
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            android.text.style.ForegroundColorSpan r7 = new android.text.style.ForegroundColorSpan
            int r1 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r1 = com.kwad.sdk.d.a.a.getColor(r6, r1)
            r7.<init>(r1)
            android.text.style.ForegroundColorSpan r1 = new android.text.style.ForegroundColorSpan
            int r2 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r6 = com.kwad.sdk.d.a.a.getColor(r6, r2)
            r1.<init>(r6)
            android.text.style.StyleSpan r6 = new android.text.style.StyleSpan
            r2 = 1
            r6.<init>(r2)
            int r2 = r0.length()
            int r3 = r2 + (-7)
            r4 = 2
            r5 = 34
            r0.setSpan(r7, r4, r3, r5)
            int r7 = r2 + (-2)
            r0.setSpan(r1, r7, r2, r5)
            r7 = 0
            r0.setSpan(r6, r7, r2, r5)
            return r0
    }

    @Override
    public final android.view.View a(android.view.LayoutInflater r11, android.view.ViewGroup r12) {
            r10 = this;
            android.os.Bundle r0 = r10.getArguments()
            java.lang.String r1 = "key_params_json"
            java.lang.String r1 = r0.getString(r1)
            java.lang.String r2 = "key_template_json"
            java.lang.String r0 = r0.getString(r2)     // Catch: java.lang.Throwable -> L1f
            com.kwad.sdk.core.response.model.AdTemplate r2 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L1f
            r2.<init>()     // Catch: java.lang.Throwable -> L1f
            r10.mAdTemplate = r2     // Catch: java.lang.Throwable -> L1f
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1f
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L1f
            r2.parseJson(r3)     // Catch: java.lang.Throwable -> L1f
        L1f:
            com.kwad.components.ad.reward.k$c r0 = com.kwad.components.ad.reward.k.c.K(r1)
            int r1 = r0.getStyle()
            r2 = 1
            if (r1 == r2) goto L9e
            r2 = 2
            if (r1 == r2) goto L91
            r2 = 4
            if (r1 == r2) goto L79
            r2 = 5
            if (r1 == r2) goto L64
            r2 = 6
            if (r1 == r2) goto L58
            r2 = 8
            if (r1 == r2) goto L42
            com.kwad.components.ad.reward.k$a r1 = r10.qa
            android.view.View r11 = a(r10, r11, r12, r0, r1)
            goto Laa
        L42:
            com.kwad.components.ad.reward.m.m r7 = new com.kwad.components.ad.reward.m.m
            com.kwad.sdk.core.response.model.AdTemplate r3 = r10.mAdTemplate
            com.kwad.components.ad.reward.k$a r6 = r10.qa
            r1 = r7
            r2 = r10
            r4 = r11
            r5 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r7.a(r0)
            android.view.ViewGroup r11 = r7.gQ()
            goto Laa
        L58:
            com.kwad.components.ad.reward.k$a r9 = r10.qa
            r4 = r10
            r5 = r10
            r6 = r11
            r7 = r12
            r8 = r0
            android.view.View r11 = r4.a(r5, r6, r7, r8, r9)
            goto Laa
        L64:
            com.kwad.components.ad.reward.m.j r7 = new com.kwad.components.ad.reward.m.j
            com.kwad.sdk.core.response.model.AdTemplate r3 = r10.mAdTemplate
            com.kwad.components.ad.reward.k$a r6 = r10.qa
            r1 = r7
            r2 = r10
            r4 = r11
            r5 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r7.a(r0)
            android.view.ViewGroup r11 = r7.gQ()
            goto Laa
        L79:
            com.kwad.sdk.core.response.model.AdTemplate r8 = r10.mAdTemplate
            com.kwad.components.ad.reward.k$a r9 = r10.qa
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r0
            android.view.View r11 = c(r4, r5, r6, r7, r8, r9)
            com.kwad.components.core.widget.e r12 = new com.kwad.components.core.widget.e
            r12.<init>()
            r0 = r11
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            com.kwad.components.core.t.g.a(r12, r0)
            goto Laa
        L91:
            com.kwad.sdk.core.response.model.AdTemplate r8 = r10.mAdTemplate
            com.kwad.components.ad.reward.k$a r9 = r10.qa
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r0
            android.view.View r11 = b(r4, r5, r6, r7, r8, r9)
            goto Laa
        L9e:
            com.kwad.sdk.core.response.model.AdTemplate r8 = r10.mAdTemplate
            com.kwad.components.ad.reward.k$a r9 = r10.qa
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r0
            android.view.View r11 = a(r4, r5, r6, r7, r8, r9)
        Laa:
            android.app.Dialog r12 = r10.getDialog()
            com.kwad.components.ad.reward.k$1 r0 = new com.kwad.components.ad.reward.k$1
            r0.<init>(r10)
            r12.setOnKeyListener(r0)
            return r11
    }

    @Override
    public final void onActivityCreated(android.os.Bundle r3) {
            r2 = this;
            super.onActivityCreated(r3)
            android.app.Dialog r3 = r2.getDialog()
            android.view.Window r3 = r3.getWindow()
            if (r3 != 0) goto Le
            return
        Le:
            android.app.Dialog r0 = r2.getDialog()
            r1 = 0
            r0.setCanceledOnTouchOutside(r1)
            r0 = -1
            r3.setLayout(r0, r0)
            android.app.Dialog r3 = r2.getDialog()
            android.view.Window r3 = r3.getWindow()
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r0.<init>(r1)
            r3.setBackgroundDrawable(r0)
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L31
            r3.gg()
        L31:
            return
    }
}
