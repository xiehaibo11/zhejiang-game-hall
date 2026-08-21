package com.mbridge.msdk.video.module;

public class MBridgeNativeEndCardView extends com.mbridge.msdk.video.module.MBridgeBaseView {
    private android.widget.LinearLayout A;
    private com.mbridge.msdk.widget.FeedBackButton B;
    private java.lang.Runnable C;
    private android.widget.RelativeLayout D;
    private com.mbridge.msdk.video.js.factory.b E;
    private boolean F;
    private boolean G;
    private int H;
    private boolean I;
    private boolean J;
    private boolean K;
    private android.view.animation.AlphaAnimation L;
    private int M;
    private int N;
    private int O;
    private int P;
    private boolean Q;
    private android.graphics.Bitmap R;
    private android.view.View S;
    private com.mbridge.msdk.widget.MBDownloadProgressBar T;
    private boolean U;
    private java.lang.String V;
    private com.mbridge.msdk.foundation.entity.CampaignUnit W;
    private com.mbridge.msdk.shake.MBShakeView aa;
    private com.mbridge.msdk.shake.b ab;
    private com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView ac;
    private int ad;
    private android.view.ViewGroup n;
    private android.view.ViewGroup o;
    private android.widget.RelativeLayout p;
    private android.widget.RelativeLayout q;
    private android.widget.ImageView r;
    private android.widget.ImageView s;
    private android.widget.ImageView t;
    private android.widget.ImageView u;
    private android.widget.ImageView v;
    private android.widget.TextView w;
    private android.widget.TextView x;
    private android.widget.TextView y;
    private android.widget.LinearLayout z;

















    private static class a implements java.lang.Runnable {
        private final java.lang.String a;
        private final com.mbridge.msdk.foundation.entity.CampaignEx b;

        public a(java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r11 = this;
                java.lang.String r0 = ""
                java.lang.String r1 = r11.a
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L9c
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.b
                if (r1 == 0) goto L9c
                java.lang.String r2 = r11.a     // Catch: java.lang.Exception -> L9c
                boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L9c
                if (r3 != 0) goto L9c
                if (r1 != 0) goto L1a
                goto L9c
            L1a:
                r5 = 0
                r3 = 0
                java.lang.String r4 = r1.getRequestId()     // Catch: java.lang.Throwable -> L83 java.lang.Exception -> L8d
                java.lang.String r7 = r1.getId()     // Catch: java.lang.Throwable -> L7b java.lang.Exception -> L8d
                java.lang.String r8 = r1.getRequestIdNotice()     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L8d
                com.mbridge.msdk.foundation.entity.CampaignEx$c r6 = r1.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L8d
                if (r6 == 0) goto L4f
                java.lang.String r9 = r6.e()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L8d
                int r6 = r6.b()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L8d
                java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L8d
                boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L8d
                if (r10 != 0) goto L46
                java.lang.String r10 = "alecfc"
                java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r9, r10)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L8d
            L46:
                r9 = r6
                goto L50
            L48:
                r1 = move-exception
                r9 = r6
                goto L6f
            L4b:
                r1 = move-exception
                r9 = r0
                r6 = r3
                goto L80
            L4f:
                r9 = r0
            L50:
                java.lang.String r1 = r1.getendcard_url()     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L8d
                boolean r6 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L8d
                if (r6 != 0) goto L67
                java.lang.String r6 = "ec_id"
                java.lang.String r3 = com.mbridge.msdk.foundation.tools.ak.a(r1, r6)     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L8d
                java.lang.String r6 = "mof"
                java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r1, r6)     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L8d
                r5 = r1
            L67:
                r6 = r3
                r3 = r4
                r4 = r0
            L6a:
                com.mbridge.msdk.video.module.b.a.a(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L9c
                goto L9c
            L6e:
                r1 = move-exception
            L6f:
                r6 = r3
                r3 = r4
                r4 = r0
                goto L89
            L73:
                r1 = move-exception
                r6 = r3
                r9 = r6
                goto L80
            L77:
                r1 = move-exception
                r6 = r3
                r8 = r6
                goto L7f
            L7b:
                r1 = move-exception
                r6 = r3
                r7 = r6
                r8 = r7
            L7f:
                r9 = r8
            L80:
                r3 = r4
                r4 = r9
                goto L89
            L83:
                r1 = move-exception
                r4 = r3
                r6 = r4
                r7 = r6
                r8 = r7
                r9 = r8
            L89:
                com.mbridge.msdk.video.module.b.a.a(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L9c
                throw r1     // Catch: java.lang.Exception -> L9c
            L8d:
                java.lang.String r3 = ""
                java.lang.String r7 = ""
                java.lang.String r8 = ""
                java.lang.String r9 = ""
                java.lang.String r4 = ""
                java.lang.String r6 = ""
                java.lang.String r5 = ""
                goto L6a
            L9c:
                return
        }
    }

    public MBridgeNativeEndCardView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.F = r1
            r0.G = r1
            r0.H = r1
            r0.I = r1
            r0.J = r1
            r0.K = r1
            r0.Q = r1
            r1 = 1
            r0.ad = r1
            return
    }

    public MBridgeNativeEndCardView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.F = r1
            r0.G = r1
            r0.H = r1
            r0.I = r1
            r0.J = r1
            r0.K = r1
            r0.Q = r1
            r1 = 1
            r0.ad = r1
            return
    }

    public MBridgeNativeEndCardView(android.content.Context r1, android.util.AttributeSet r2, boolean r3, int r4, boolean r5, int r6, int r7) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r1 = 0
            r0.F = r1
            r0.G = r1
            r0.H = r1
            r0.I = r1
            r0.J = r1
            r0.K = r1
            r0.Q = r1
            r1 = 1
            r0.ad = r1
            return
    }

    static android.view.View a(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            android.view.View r0 = r0.S
            return r0
    }

    private void a() {
            r3 = this;
            r3.c()
            boolean r0 = r3.f
            if (r0 != 0) goto L10
            com.mbridge.msdk.video.module.a.a r0 = r3.e
            r1 = 104(0x68, float:1.46E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
        L10:
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r1 = 0
            r2 = 1120403456(0x42c80000, float:100.0)
            r0.<init>(r1, r2)
            r3.L = r0
            r1 = 200(0xc8, double:9.9E-322)
            r0.setDuration(r1)
            return
    }

    private void a(android.view.View r2) {
            r1 = this;
            if (r2 != 0) goto Lb
            r1.setLayout()
            com.mbridge.msdk.video.js.factory.b r2 = r1.E
            r1.preLoadData(r2)
            goto L23
        Lb:
            android.view.ViewParent r0 = r2.getParent()
            if (r0 == 0) goto L1a
            android.view.ViewParent r0 = r2.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeView(r2)
        L1a:
            r1.addView(r2)
            r1.b(r2)
            r1.c()
        L23:
            r1.b()
            return
    }

    static void a(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r9, int r10) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b
            if (r0 == 0) goto L54
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L54
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = ""
            if (r0 == 0) goto L29
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L50
            r2.<init>()     // Catch: java.lang.Exception -> L50
            int r0 = r0.b()     // Catch: java.lang.Exception -> L50
            r2.append(r0)     // Catch: java.lang.Exception -> L50
            r2.append(r1)     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L50
        L29:
            r8 = r1
            android.content.Context r1 = r9.a     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = "end_card_click"
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> L50
            java.lang.String r3 = r0.getCampaignUnitId()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> L50
            boolean r4 = r0.isBidCampaign()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = r0.getRequestId()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> L50
            java.lang.String r6 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> L50
            java.lang.String r7 = r0.getId()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.same.report.e.a(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L50
            goto L54
        L50:
            r0 = move-exception
            r0.printStackTrace()
        L54:
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L76
            r1.<init>()     // Catch: org.json.JSONException -> L76
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.p     // Catch: org.json.JSONException -> L73
            org.json.JSONObject r10 = r9.a(r10)     // Catch: org.json.JSONException -> L73
            r1.put(r0, r10)     // Catch: org.json.JSONException -> L73
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b     // Catch: org.json.JSONException -> L73
            int r10 = r10.getDynamicTempCode()     // Catch: org.json.JSONException -> L73
            r0 = 5
            if (r10 != r0) goto L7b
            java.lang.String r10 = "camp_position"
            r0 = 0
            r1.put(r10, r0)     // Catch: org.json.JSONException -> L73
            goto L7b
        L73:
            r10 = move-exception
            r0 = r1
            goto L77
        L76:
            r10 = move-exception
        L77:
            r10.printStackTrace()
            r1 = r0
        L7b:
            com.mbridge.msdk.video.module.a.a r9 = r9.e
            r10 = 105(0x69, float:1.47E-43)
            r9.a(r10, r1)
            return
    }

    static void a(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r1, android.graphics.Bitmap r2) {
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$12 r0 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$12     // Catch: java.lang.Exception -> L18
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L18
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.d()     // Catch: java.lang.Exception -> L18
            int r1 = r1.getActiveCount()     // Catch: java.lang.Exception -> L18
            r2 = 1
            if (r1 >= r2) goto L22
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.c()     // Catch: java.lang.Exception -> L18
            r1.execute(r0)     // Catch: java.lang.Exception -> L18
            goto L22
        L18:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)
        L22:
            return
    }

    static boolean a(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0, android.view.View r1) {
            boolean r0 = r0.b(r1)
            return r0
    }

    static boolean a(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0, boolean r1) {
            r0.G = r1
            return r1
    }

    static android.graphics.Bitmap b(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0, android.graphics.Bitmap r1) {
            r0.R = r1
            return r1
    }

    private void b() {
            r4 = this;
            boolean r0 = r4.f
            if (r0 == 0) goto L12
            android.widget.RelativeLayout r0 = r4.D
            if (r0 == 0) goto L12
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$3 r1 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$3
            r1.<init>(r4)
            r2 = 200(0xc8, double:9.9E-322)
            r0.postDelayed(r1, r2)
        L12:
            return
    }

    static void b(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            r0.a()
            return
    }

    private boolean b(android.view.View r10) {
            r9 = this;
            r0 = 0
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_native_ec_layout"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L190
            r9.p = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_native_ec_layer_layout"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L190
            r9.q = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_iv_adbanner"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L190
            r9.s = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_iv_icon"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L190
            r9.t = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_iv_flag"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L190
            r9.u = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_iv_link"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L190
            r9.v = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_tv_apptitle"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> L190
            r9.w = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_sv_starlevel"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.LinearLayout r1 = (android.widget.LinearLayout) r1     // Catch: java.lang.Throwable -> L190
            r9.z = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_sv_heat_count_level"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.LinearLayout r1 = (android.widget.LinearLayout) r1     // Catch: java.lang.Throwable -> L190
            r9.A = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_iv_close"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            r9.S = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_tv_cta"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            if (r1 == 0) goto Lb5
            boolean r2 = r1 instanceof com.mbridge.msdk.widget.MBDownloadProgressBar     // Catch: java.lang.Throwable -> L190
            if (r2 == 0) goto Lb5
            com.mbridge.msdk.widget.MBDownloadProgressBar r1 = (com.mbridge.msdk.widget.MBDownloadProgressBar) r1     // Catch: java.lang.Throwable -> L190
            r9.T = r1     // Catch: java.lang.Throwable -> L190
        Lb5:
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_native_endcard_feed_btn"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            com.mbridge.msdk.widget.FeedBackButton r1 = (com.mbridge.msdk.widget.FeedBackButton) r1     // Catch: java.lang.Throwable -> L190
            r9.B = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_native_ec_controller"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L190
            r9.D = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_iv_adbanner_bg"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L190
            r9.r = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = "mbridge_animation_click_view"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r9.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r1 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView) r1     // Catch: java.lang.Throwable -> L190
            r9.ac = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.i     // Catch: java.lang.Throwable -> L190
            r2 = 5
            r3 = 4
            r4 = 3
            r5 = 2
            r6 = 1
            r7 = 6
            if (r1 == 0) goto L142
            android.widget.ImageView r10 = r9.s     // Catch: java.lang.Throwable -> L190
            r1 = 10
            if (r10 == 0) goto L112
            android.widget.ImageView r10 = r9.s     // Catch: java.lang.Throwable -> L190
            boolean r10 = r10 instanceof com.mbridge.msdk.videocommon.view.RoundImageView     // Catch: java.lang.Throwable -> L190
            if (r10 == 0) goto L112
            android.widget.ImageView r10 = r9.s     // Catch: java.lang.Throwable -> L190
            com.mbridge.msdk.videocommon.view.RoundImageView r10 = (com.mbridge.msdk.videocommon.view.RoundImageView) r10     // Catch: java.lang.Throwable -> L190
            r10.setBorderRadius(r1)     // Catch: java.lang.Throwable -> L190
        L112:
            android.widget.ImageView r10 = r9.t     // Catch: java.lang.Throwable -> L190
            if (r10 == 0) goto L123
            android.widget.ImageView r10 = r9.t     // Catch: java.lang.Throwable -> L190
            boolean r10 = r10 instanceof com.mbridge.msdk.videocommon.view.RoundImageView     // Catch: java.lang.Throwable -> L190
            if (r10 == 0) goto L123
            android.widget.ImageView r10 = r9.t     // Catch: java.lang.Throwable -> L190
            com.mbridge.msdk.videocommon.view.RoundImageView r10 = (com.mbridge.msdk.videocommon.view.RoundImageView) r10     // Catch: java.lang.Throwable -> L190
            r10.setBorderRadius(r1)     // Catch: java.lang.Throwable -> L190
        L123:
            android.view.View[] r10 = new android.view.View[r7]     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r1 = r9.r     // Catch: java.lang.Throwable -> L190
            r10[r0] = r1     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r1 = r9.s     // Catch: java.lang.Throwable -> L190
            r10[r6] = r1     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r1 = r9.t     // Catch: java.lang.Throwable -> L190
            r10[r5] = r1     // Catch: java.lang.Throwable -> L190
            android.widget.TextView r1 = r9.w     // Catch: java.lang.Throwable -> L190
            r10[r4] = r1     // Catch: java.lang.Throwable -> L190
            android.widget.LinearLayout r1 = r9.z     // Catch: java.lang.Throwable -> L190
            r10[r3] = r1     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r9.S     // Catch: java.lang.Throwable -> L190
            r10[r2] = r1     // Catch: java.lang.Throwable -> L190
            boolean r10 = r9.isNotNULL(r10)     // Catch: java.lang.Throwable -> L190
            return r10
        L142:
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r8 = "mbridge_tv_appdesc"
            int r1 = r9.filterFindViewId(r1, r8)     // Catch: java.lang.Throwable -> L190
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> L190
            r9.x = r1     // Catch: java.lang.Throwable -> L190
            boolean r1 = r9.Q     // Catch: java.lang.Throwable -> L190
            java.lang.String r8 = "mbridge_tv_number"
            int r1 = r9.filterFindViewId(r1, r8)     // Catch: java.lang.Throwable -> L190
            android.view.View r10 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L190
            android.widget.TextView r10 = (android.widget.TextView) r10     // Catch: java.lang.Throwable -> L190
            r9.y = r10     // Catch: java.lang.Throwable -> L190
            r1 = 9
            android.view.View[] r1 = new android.view.View[r1]     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r8 = r9.r     // Catch: java.lang.Throwable -> L190
            r1[r0] = r8     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r8 = r9.s     // Catch: java.lang.Throwable -> L190
            r1[r6] = r8     // Catch: java.lang.Throwable -> L190
            android.widget.ImageView r6 = r9.t     // Catch: java.lang.Throwable -> L190
            r1[r5] = r6     // Catch: java.lang.Throwable -> L190
            android.widget.TextView r5 = r9.w     // Catch: java.lang.Throwable -> L190
            r1[r4] = r5     // Catch: java.lang.Throwable -> L190
            android.widget.TextView r4 = r9.x     // Catch: java.lang.Throwable -> L190
            r1[r3] = r4     // Catch: java.lang.Throwable -> L190
            r1[r2] = r10     // Catch: java.lang.Throwable -> L190
            android.widget.LinearLayout r10 = r9.z     // Catch: java.lang.Throwable -> L190
            r1[r7] = r10     // Catch: java.lang.Throwable -> L190
            r10 = 7
            android.view.View r2 = r9.S     // Catch: java.lang.Throwable -> L190
            r1[r10] = r2     // Catch: java.lang.Throwable -> L190
            r10 = 8
            com.mbridge.msdk.widget.MBDownloadProgressBar r2 = r9.T     // Catch: java.lang.Throwable -> L190
            r1[r10] = r2     // Catch: java.lang.Throwable -> L190
            boolean r10 = r9.isNotNULL(r1)     // Catch: java.lang.Throwable -> L190
            return r10
        L190:
            r10 = move-exception
            java.lang.String r1 = r10.getMessage()
            java.lang.String r2 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r10)
            return r0
    }

    static boolean b(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0, boolean r1) {
            r0.Q = r1
            return r1
    }

    static android.widget.ImageView c(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            android.widget.ImageView r0 = r0.s
            return r0
    }

    static boolean c(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0, boolean r1) {
            r0.K = r1
            return r1
    }

    static android.widget.ImageView d(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            android.widget.ImageView r0 = r0.r
            return r0
    }

    static android.graphics.Bitmap e(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            android.graphics.Bitmap r0 = r0.R
            return r0
    }

    static boolean f(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            boolean r0 = r0.F
            return r0
    }

    static java.lang.String g(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            java.lang.String r0 = r0.V
            return r0
    }

    static com.mbridge.msdk.widget.MBDownloadProgressBar h(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r0.T
            return r0
    }

    static android.widget.RelativeLayout i(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            android.widget.RelativeLayout r0 = r0.D
            return r0
    }

    static int j(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            int r0 = r0.M
            return r0
    }

    static int k(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            int r0 = r0.O
            return r0
    }

    static int l(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            int r0 = r0.N
            return r0
    }

    static int m(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            int r0 = r0.P
            return r0
    }

    static android.view.animation.AlphaAnimation n(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            android.view.animation.AlphaAnimation r0 = r0.L
            return r0
    }

    static boolean o(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            boolean r0 = r0.G
            return r0
    }

    static void p(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r5) {
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L8f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            java.lang.String r1 = r5.V
            r0.setCampaignUnitId(r1)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r5.V
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            r3 = 2
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$4 r4 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$4
            r4.<init>(r5)
            r0.a(r1, r4)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = r5.V
            r1.append(r4)
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r5.b
            r0.a(r1, r4)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = r5.V
            r1.append(r4)
            r1.append(r2)
            r4 = 1
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.c(r1)
            com.mbridge.msdk.widget.FeedBackButton r0 = r5.B
            if (r0 == 0) goto L98
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = r5.V
            r1.append(r4)
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.widget.FeedBackButton r5 = r5.B
            r0.a(r1, r5)
            goto L98
        L8f:
            com.mbridge.msdk.widget.FeedBackButton r5 = r5.B
            if (r5 == 0) goto L98
            r0 = 8
            r5.setVisibility(r0)
        L98:
            return
    }

    static boolean q(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            boolean r0 = r0.K
            return r0
    }

    static boolean r(com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0) {
            boolean r0 = r0.J
            return r0
    }

    public android.graphics.Bitmap blurBitmap(android.graphics.Bitmap r6) {
            r5 = this;
            int r0 = r6.getWidth()     // Catch: java.lang.Throwable -> L3a
            int r1 = r6.getHeight()     // Catch: java.lang.Throwable -> L3a
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L3a
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)     // Catch: java.lang.Throwable -> L3a
            android.content.Context r1 = r5.a     // Catch: java.lang.Throwable -> L3a
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L3a
            android.renderscript.RenderScript r1 = android.renderscript.RenderScript.create(r1)     // Catch: java.lang.Throwable -> L3a
            android.renderscript.Element r2 = android.renderscript.Element.U8_4(r1)     // Catch: java.lang.Throwable -> L3a
            android.renderscript.ScriptIntrinsicBlur r2 = android.renderscript.ScriptIntrinsicBlur.create(r1, r2)     // Catch: java.lang.Throwable -> L3a
            android.renderscript.Allocation r6 = android.renderscript.Allocation.createFromBitmap(r1, r6)     // Catch: java.lang.Throwable -> L3a
            android.renderscript.Allocation r3 = android.renderscript.Allocation.createFromBitmap(r1, r0)     // Catch: java.lang.Throwable -> L3a
            r4 = 1103626240(0x41c80000, float:25.0)
            r2.setRadius(r4)     // Catch: java.lang.Throwable -> L3a
            r2.setInput(r6)     // Catch: java.lang.Throwable -> L3a
            r2.forEach(r3)     // Catch: java.lang.Throwable -> L3a
            r3.copyTo(r0)     // Catch: java.lang.Throwable -> L3a
            r1.destroy()     // Catch: java.lang.Throwable -> L3a
            return r0
        L3a:
            r6 = 0
            return r6
    }

    @Override
    protected final void c() {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L38
            android.widget.RelativeLayout r0 = r2.p
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$13 r1 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$13
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.view.View r0 = r2.S
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$14 r1 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$14
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r2.T
            if (r0 == 0) goto L24
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$15 r1 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$15
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L24:
            android.widget.ImageView r0 = r2.t
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$16 r1 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$16
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.s
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$2 r1 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L38:
            return
    }

    public boolean canBackPress() {
            r1 = this;
            android.view.View r0 = r1.S
            if (r0 == 0) goto Lc
            int r0 = r0.getVisibility()
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public void clearMoreOfferBitmap() {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            if (r0 == 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r3.W
            if (r0 == 0) goto L56
            java.util.ArrayList r0 = r0.getAds()
            if (r0 == 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r3.W
            java.util.ArrayList r0 = r0.getAds()
            int r0 = r0.size()
            if (r0 <= 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r3.W
            java.util.ArrayList r0 = r0.getAds()
            java.util.Iterator r0 = r0.iterator()
        L2c:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L56
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
            java.lang.String r2 = r1.getIconUrl()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L2c
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            com.mbridge.msdk.foundation.same.c.b r2 = com.mbridge.msdk.foundation.same.c.b.a(r2)
            java.lang.String r1 = r1.getIconUrl()
            r2.c(r1)
            goto L2c
        L56:
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            return
    }

    public boolean isDyXmlSuccess() {
            r1 = this;
            boolean r0 = r1.Q
            return r0
    }

    public void notifyShowListener() {
            r3 = this;
            com.mbridge.msdk.video.module.a.a r0 = r3.e
            r1 = 110(0x6e, float:1.54E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r8 = this;
            super.onAttachedToWindow()
            java.lang.Runnable r0 = r8.C
            if (r0 != 0) goto Le
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$1 r0 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$1
            r0.<init>(r8)
            r8.C = r0
        Le:
            java.lang.Runnable r0 = r8.C
            java.lang.String r1 = "1"
            r2 = 1
            java.lang.String r3 = "MBridgeBaseView"
            if (r0 == 0) goto L69
            int r4 = r8.H
            int r4 = r4 * 1000
            long r4 = (long) r4
            r8.postDelayed(r0, r4)
            boolean r0 = r8.J
            if (r0 != 0) goto L25
            r8.J = r2
        L25:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L69
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b     // Catch: java.lang.Throwable -> L61
            boolean r0 = r0.isDynamicView()     // Catch: java.lang.Throwable -> L61
            if (r0 != 0) goto L32
            goto L69
        L32:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b     // Catch: java.lang.Throwable -> L61
            java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Throwable -> L61
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L61
            if (r4 == 0) goto L44
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b     // Catch: java.lang.Throwable -> L61
            java.lang.String r0 = r0.getEndScreenUrl()     // Catch: java.lang.Throwable -> L61
        L44:
            java.lang.String r4 = "alac"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r4)     // Catch: java.lang.Throwable -> L61
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L61
            if (r4 != 0) goto L69
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L69
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$8 r0 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$8     // Catch: java.lang.Throwable -> L61
            r0.<init>(r8)     // Catch: java.lang.Throwable -> L61
            r4 = 1000(0x3e8, double:4.94E-321)
            r8.postDelayed(r0, r4)     // Catch: java.lang.Throwable -> L61
            goto L69
        L61:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
        L69:
            r0 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Throwable -> Lc5
            if (r4 == 0) goto Lcd
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Throwable -> Lc5
            boolean r4 = r4.isDynamicView()     // Catch: java.lang.Throwable -> Lc5
            if (r4 != 0) goto L77
            goto Lcd
        L77:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r4 = r4.getendcard_url()     // Catch: java.lang.Throwable -> Lc5
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lc5
            if (r5 == 0) goto L89
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r4 = r4.getEndScreenUrl()     // Catch: java.lang.Throwable -> Lc5
        L89:
            java.lang.String r5 = "bait_click"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ak.a(r4, r5)     // Catch: java.lang.Throwable -> Lc5
            int r5 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L94
            goto L9d
        L94:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.foundation.tools.z.d(r3, r5)     // Catch: java.lang.Throwable -> Lc5
            r5 = r2
        L9d:
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lc5
            if (r4 != 0) goto Lcd
            if (r5 == 0) goto Lcd
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r4 = r8.ac     // Catch: java.lang.Throwable -> Lc5
            if (r4 == 0) goto Lcd
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r4 = r8.ac     // Catch: java.lang.Throwable -> Lc5
            r4.setVisibility(r0)     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r4 = r8.ac     // Catch: java.lang.Throwable -> Lc5
            r6 = 1342177280(0x50000000, float:8.589935E9)
            r4.init(r6, r5)     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r4 = r8.ac     // Catch: java.lang.Throwable -> Lc5
            r4.startAnimation()     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r4 = r8.ac     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$7 r5 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$7     // Catch: java.lang.Throwable -> Lc5
            r5.<init>(r8)     // Catch: java.lang.Throwable -> Lc5
            r4.setOnClickListener(r5)     // Catch: java.lang.Throwable -> Lc5
            goto Lcd
        Lc5:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r4)
        Lcd:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Throwable -> L1c3
            if (r4 == 0) goto L1cb
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Throwable -> L1c3
            boolean r4 = r4.isDynamicView()     // Catch: java.lang.Throwable -> L1c3
            if (r4 != 0) goto Ldb
            goto L1cb
        Ldb:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Throwable -> L1c3
            java.lang.String r4 = r4.getendcard_url()     // Catch: java.lang.Throwable -> L1c3
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L1c3
            if (r5 == 0) goto Led
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Throwable -> L1c3
            java.lang.String r4 = r4.getEndScreenUrl()     // Catch: java.lang.Throwable -> L1c3
        Led:
            java.lang.String r5 = "shake_show"
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ak.a(r4, r5)     // Catch: java.lang.Throwable -> L1c3
            java.lang.String r6 = "shake_strength"
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.ak.a(r4, r6)     // Catch: java.lang.Throwable -> L1c3
            java.lang.String r7 = "shake_time"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ak.a(r4, r7)     // Catch: java.lang.Throwable -> L1c3
            boolean r7 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L1c3
            if (r7 != 0) goto L1cb
            boolean r1 = r5.equals(r1)     // Catch: java.lang.Throwable -> L1c3
            if (r1 == 0) goto L1cb
            com.mbridge.msdk.shake.MBShakeView r1 = r8.aa     // Catch: java.lang.Throwable -> L1c3
            if (r1 == 0) goto L111
            goto L1cb
        L111:
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r1 = r8.ac     // Catch: java.lang.Throwable -> L1c3
            if (r1 == 0) goto L11c
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r1 = r8.ac     // Catch: java.lang.Throwable -> L1c3
            r5 = 8
            r1.setVisibility(r5)     // Catch: java.lang.Throwable -> L1c3
        L11c:
            com.mbridge.msdk.shake.MBShakeView r1 = new com.mbridge.msdk.shake.MBShakeView     // Catch: java.lang.Throwable -> L1c3
            android.content.Context r5 = r8.getContext()     // Catch: java.lang.Throwable -> L1c3
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L1c3
            r8.aa = r1     // Catch: java.lang.Throwable -> L1c3
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r8.b     // Catch: java.lang.Throwable -> L1c3
            java.lang.String r5 = r5.getAdCall()     // Catch: java.lang.Throwable -> L1c3
            r1.initView(r5, r2)     // Catch: java.lang.Throwable -> L1c3
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L1c3
            r2 = -2
            r1.<init>(r2, r2)     // Catch: java.lang.Throwable -> L1c3
            boolean r2 = r8.isLandscape()     // Catch: java.lang.Throwable -> L1c3
            if (r2 != 0) goto L15d
            boolean r2 = r8.Q     // Catch: java.lang.Throwable -> L1c3
            java.lang.String r5 = "mbridge_iv_logo"
            int r2 = r8.filterFindViewId(r2, r5)     // Catch: java.lang.Throwable -> L1c3
            r5 = 2
            r1.addRule(r5, r2)     // Catch: java.lang.Throwable -> L1c3
            r2 = 14
            r1.addRule(r2)     // Catch: java.lang.Throwable -> L1c3
            com.mbridge.msdk.shake.MBShakeView r2 = r8.aa     // Catch: java.lang.Throwable -> L1c3
            android.content.Context r5 = r8.getContext()     // Catch: java.lang.Throwable -> L1c3
            r7 = 1101004800(0x41a00000, float:20.0)
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r7)     // Catch: java.lang.Throwable -> L1c3
            r2.setPadding(r0, r0, r0, r5)     // Catch: java.lang.Throwable -> L1c3
            goto L162
        L15d:
            r0 = 13
            r1.addRule(r0)     // Catch: java.lang.Throwable -> L1c3
        L162:
            com.mbridge.msdk.shake.MBShakeView r0 = r8.aa     // Catch: java.lang.Throwable -> L1c3
            r0.setLayoutParams(r1)     // Catch: java.lang.Throwable -> L1c3
            android.widget.RelativeLayout r0 = r8.p     // Catch: java.lang.Throwable -> L1c3
            if (r0 != 0) goto L16c
            goto L1cb
        L16c:
            android.widget.RelativeLayout r0 = r8.p     // Catch: java.lang.Throwable -> L1c3
            boolean r0 = r0.isShown()     // Catch: java.lang.Throwable -> L1c3
            if (r0 != 0) goto L175
            goto L1cb
        L175:
            android.widget.RelativeLayout r0 = r8.p     // Catch: java.lang.Throwable -> L1c3
            com.mbridge.msdk.shake.MBShakeView r1 = r8.aa     // Catch: java.lang.Throwable -> L1c3
            r0.addView(r1)     // Catch: java.lang.Throwable -> L1c3
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r8.T     // Catch: java.lang.Throwable -> L1c3
            if (r0 == 0) goto L186
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r8.T     // Catch: java.lang.Throwable -> L1c3
            r1 = 4
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L1c3
        L186:
            com.mbridge.msdk.shake.MBShakeView r0 = r8.aa     // Catch: java.lang.Throwable -> L1c3
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$5 r1 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$5     // Catch: java.lang.Throwable -> L1c3
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L1c3
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L1c3
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L1c3
            r1 = 10
            if (r0 != 0) goto L1a0
            int r0 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> L1c3
            if (r0 > 0) goto L19f
            goto L1a0
        L19f:
            r1 = r0
        L1a0:
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L1c3
            r2 = 5000(0x1388, float:7.006E-42)
            if (r0 != 0) goto L1b2
            int r0 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L1c3
            if (r0 > 0) goto L1af
            goto L1b2
        L1af:
            int r0 = r0 * 1000
            r2 = r0
        L1b2:
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$6 r0 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$6     // Catch: java.lang.Throwable -> L1c3
            r0.<init>(r8, r1, r2)     // Catch: java.lang.Throwable -> L1c3
            r8.ab = r0     // Catch: java.lang.Throwable -> L1c3
            com.mbridge.msdk.shake.a r0 = com.mbridge.msdk.shake.a.a()     // Catch: java.lang.Throwable -> L1c3
            com.mbridge.msdk.shake.b r1 = r8.ab     // Catch: java.lang.Throwable -> L1c3
            r0.a(r1)     // Catch: java.lang.Throwable -> L1c3
            goto L1cb
        L1c3:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
        L1cb:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            java.lang.Runnable r0 = r2.C
            if (r0 == 0) goto La
            r2.removeCallbacks(r0)
        La:
            com.mbridge.msdk.shake.b r0 = r2.ab
            if (r0 == 0) goto L1a
            com.mbridge.msdk.shake.a r0 = com.mbridge.msdk.shake.a.a()
            com.mbridge.msdk.shake.b r1 = r2.ab
            r0.b(r1)
            r0 = 0
            r2.ab = r0
        L1a:
            return
    }

    @Override
    public void onSelfConfigurationChanged(android.content.res.Configuration r3) {
            r2 = this;
            super.onSelfConfigurationChanged(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            if (r0 == 0) goto L10
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L10
            return
        L10:
            android.widget.RelativeLayout r0 = r2.D
            if (r0 == 0) goto L18
            r1 = 4
            r0.setVisibility(r1)
        L18:
            int r3 = r3.orientation
            r2.d = r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = " native onSelfConfigurationChanged:"
            r3.append(r0)
            int r0 = r2.d
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            int r3 = r2.d
            r0 = 2
            if (r3 != r0) goto L44
            android.view.ViewGroup r3 = r2.n
            r2.removeView(r3)
            android.view.ViewGroup r3 = r2.o
            r2.a(r3)
            goto L4e
        L44:
            android.view.ViewGroup r3 = r2.o
            r2.removeView(r3)
            android.view.ViewGroup r3 = r2.n
            r2.a(r3)
        L4e:
            return
    }

    public void preLoadData(com.mbridge.msdk.video.js.factory.b r6) {
            r5 = this;
            r5.E = r6
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto L1b5
            boolean r6 = r5.f     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto L1b5
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$10 r6 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$10     // Catch: java.lang.Throwable -> L1ab
            r6.<init>(r5)     // Catch: java.lang.Throwable -> L1ab
            android.content.Context r0 = r5.a     // Catch: java.lang.Throwable -> L1ab
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.b     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r1 = r1.getImageUrl()     // Catch: java.lang.Throwable -> L1ab
            r0.a(r1, r6)     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.video.module.a.a.i r6 = new com.mbridge.msdk.video.module.a.a.i     // Catch: java.lang.Throwable -> L1ab
            android.widget.ImageView r0 = r5.t     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1ab
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L1ab
            r2 = 1090519040(0x41000000, float:8.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> L1ab
            r6.<init>(r0, r1)     // Catch: java.lang.Throwable -> L1ab
            android.content.Context r0 = r5.a     // Catch: java.lang.Throwable -> L1ab
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.b     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r1 = r1.getIconUrl()     // Catch: java.lang.Throwable -> L1ab
            r0.a(r1, r6)     // Catch: java.lang.Throwable -> L1ab
            android.widget.TextView r6 = r5.w     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r0 = r0.getAppName()     // Catch: java.lang.Throwable -> L1ab
            r6.setText(r0)     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.widget.MBDownloadProgressBar r6 = r5.T     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto L64
            com.mbridge.msdk.widget.MBDownloadProgressBar r6 = r5.T     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r0 = r0.getAdCall()     // Catch: java.lang.Throwable -> L1ab
            r6.setText(r0)     // Catch: java.lang.Throwable -> L1ab
        L64:
            android.widget.TextView r6 = r5.x     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto L73
            android.widget.TextView r6 = r5.x     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r0 = r0.getAppDesc()     // Catch: java.lang.Throwable -> L1ab
            r6.setText(r0)     // Catch: java.lang.Throwable -> L1ab
        L73:
            android.widget.TextView r6 = r5.y     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto L93
            android.widget.TextView r6 = r5.y     // Catch: java.lang.Throwable -> L1ab
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1ab
            r0.<init>()     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.b     // Catch: java.lang.Throwable -> L1ab
            int r1 = r1.getNumberRating()     // Catch: java.lang.Throwable -> L1ab
            r0.append(r1)     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r1 = ")"
            r0.append(r1)     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1ab
            r6.setText(r0)     // Catch: java.lang.Throwable -> L1ab
        L93:
            android.widget.LinearLayout r6 = r5.z     // Catch: java.lang.Throwable -> L1ab
            r6.removeAllViews()     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b     // Catch: java.lang.Throwable -> L1ab
            double r0 = r6.getRating()     // Catch: java.lang.Throwable -> L1ab
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 > 0) goto La6
            r0 = 4617315517961601024(0x4014000000000000, double:5.0)
        La6:
            android.widget.LinearLayout r6 = r5.z     // Catch: java.lang.Throwable -> L1ab
            boolean r6 = r6 instanceof com.mbridge.msdk.videocommon.view.StarLevelView     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto Lb3
            android.widget.LinearLayout r6 = r5.z     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.videocommon.view.StarLevelView r6 = (com.mbridge.msdk.videocommon.view.StarLevelView) r6     // Catch: java.lang.Throwable -> L1ab
            r6.initScore(r0)     // Catch: java.lang.Throwable -> L1ab
        Lb3:
            android.widget.LinearLayout r6 = r5.z     // Catch: java.lang.Throwable -> L1ab
            boolean r6 = r6 instanceof com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto Lc6
            android.widget.LinearLayout r6 = r5.z     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView r6 = (com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView) r6     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.b     // Catch: java.lang.Throwable -> L1ab
            int r2 = r2.getNumberRating()     // Catch: java.lang.Throwable -> L1ab
            r6.setRatingAndUser(r0, r2)     // Catch: java.lang.Throwable -> L1ab
        Lc6:
            android.widget.LinearLayout r6 = r5.z     // Catch: java.lang.Throwable -> L1ab
            boolean r6 = r6 instanceof com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto Ld4
            android.widget.LinearLayout r6 = r5.z     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView r6 = (com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView) r6     // Catch: java.lang.Throwable -> L1ab
            int r0 = (int) r0     // Catch: java.lang.Throwable -> L1ab
            r6.setRating(r0)     // Catch: java.lang.Throwable -> L1ab
        Ld4:
            android.widget.LinearLayout r6 = r5.A     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto Leb
            android.widget.LinearLayout r6 = r5.A     // Catch: java.lang.Throwable -> L1ab
            boolean r6 = r6 instanceof com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto Leb
            android.widget.LinearLayout r6 = r5.A     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView r6 = (com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView) r6     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b     // Catch: java.lang.Throwable -> L1ab
            int r0 = r0.getNumberRating()     // Catch: java.lang.Throwable -> L1ab
            r6.setHeatCount(r0)     // Catch: java.lang.Throwable -> L1ab
        Leb:
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r6 = r6.getendcard_url()     // Catch: java.lang.Throwable -> L1ab
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L1ab
            if (r6 != 0) goto L108
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r6 = r6.getendcard_url()     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r0 = "alecfc=1"
            boolean r6 = r6.contains(r0)     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto L108
            r6 = 1
            r5.F = r6     // Catch: java.lang.Throwable -> L1ab
        L108:
            java.util.Locale r6 = java.util.Locale.getDefault()     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r6 = r6.getLanguage()     // Catch: java.lang.Throwable -> L1ab
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r1 = "drawable"
            if (r0 != 0) goto L140
            java.lang.String r0 = "zh"
            boolean r6 = r6.equals(r0)     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto L140
            android.widget.ImageView r6 = r5.u     // Catch: java.lang.Throwable -> L1ab
            android.content.res.Resources r0 = r5.getResources()     // Catch: java.lang.Throwable -> L1ab
            android.content.res.Resources r2 = r5.getResources()     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r3 = "mbridge_reward_flag_cn"
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r4 = r4.d()     // Catch: java.lang.Throwable -> L1ab
            int r1 = r2.getIdentifier(r3, r1, r4)     // Catch: java.lang.Throwable -> L1ab
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)     // Catch: java.lang.Throwable -> L1ab
            r6.setImageDrawable(r0)     // Catch: java.lang.Throwable -> L1ab
            goto L15f
        L140:
            android.widget.ImageView r6 = r5.u     // Catch: java.lang.Throwable -> L1ab
            android.content.res.Resources r0 = r5.getResources()     // Catch: java.lang.Throwable -> L1ab
            android.content.res.Resources r2 = r5.getResources()     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r3 = "mbridge_reward_flag_en"
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r4 = r4.d()     // Catch: java.lang.Throwable -> L1ab
            int r1 = r2.getIdentifier(r3, r1, r4)     // Catch: java.lang.Throwable -> L1ab
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)     // Catch: java.lang.Throwable -> L1ab
            r6.setImageDrawable(r0)     // Catch: java.lang.Throwable -> L1ab
        L15f:
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1ab
            java.lang.String r6 = r6.k()     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.c.a r6 = r0.b(r6)     // Catch: java.lang.Throwable -> L1ab
            r0 = 8
            if (r6 == 0) goto L18d
            java.lang.String r6 = r6.az()     // Catch: java.lang.Throwable -> L1ab
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L1ab
            if (r1 == 0) goto L182
            android.widget.ImageView r1 = r5.v     // Catch: java.lang.Throwable -> L1ab
            r1.setVisibility(r0)     // Catch: java.lang.Throwable -> L1ab
        L182:
            android.widget.ImageView r1 = r5.v     // Catch: java.lang.Throwable -> L1ab
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$11 r2 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$11     // Catch: java.lang.Throwable -> L1ab
            r2.<init>(r5, r6)     // Catch: java.lang.Throwable -> L1ab
            r1.setOnClickListener(r2)     // Catch: java.lang.Throwable -> L1ab
            goto L192
        L18d:
            android.widget.ImageView r6 = r5.v     // Catch: java.lang.Throwable -> L1ab
            r6.setVisibility(r0)     // Catch: java.lang.Throwable -> L1ab
        L192:
            boolean r6 = r5.G     // Catch: java.lang.Throwable -> L1ab
            if (r6 != 0) goto L19b
            android.view.View r6 = r5.S     // Catch: java.lang.Throwable -> L1ab
            r6.setVisibility(r0)     // Catch: java.lang.Throwable -> L1ab
        L19b:
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1ab
            r1 = 17
            if (r6 >= r1) goto L1b5
            android.widget.ImageView r6 = r5.r     // Catch: java.lang.Throwable -> L1ab
            if (r6 == 0) goto L1b5
            android.widget.ImageView r6 = r5.r     // Catch: java.lang.Throwable -> L1ab
            r6.setVisibility(r0)     // Catch: java.lang.Throwable -> L1ab
            goto L1b5
        L1ab:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r0 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r0, r6)
        L1b5:
            return
    }

    public void release() {
            r2 = this;
            r2.removeAllViews()     // Catch: java.lang.Exception -> L10
            android.view.animation.AlphaAnimation r0 = r2.L     // Catch: java.lang.Exception -> L10
            if (r0 == 0) goto Lc
            android.view.animation.AlphaAnimation r0 = r2.L     // Catch: java.lang.Exception -> L10
            r0.cancel()     // Catch: java.lang.Exception -> L10
        Lc:
            r0 = 0
            r2.C = r0     // Catch: java.lang.Exception -> L10
            goto L1a
        L10:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1a:
            return
    }

    public void setCloseBtnDelay(int r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public void setLayout() {
            r6 = this;
            boolean r0 = r6.i
            if (r0 == 0) goto L25
            com.mbridge.msdk.video.dynview.j.c r0 = new com.mbridge.msdk.video.dynview.j.c
            r0.<init>()
            android.content.Context r1 = r6.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.b
            int r3 = r6.j
            java.lang.String r4 = "cn_"
            com.mbridge.msdk.video.dynview.c r0 = r0.a(r1, r2, r3, r4)
            com.mbridge.msdk.video.dynview.b r1 = com.mbridge.msdk.video.dynview.b.a()
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$9 r2 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$9
            r2.<init>(r6)
            r1.a(r0, r2)
            goto L94
        L25:
            int r0 = r6.ad
            java.lang.String r1 = "mbridge_reward_endcard_native_half_landscape"
            java.lang.String r2 = "mbridge_reward_endcard_native_land"
            java.lang.String r3 = "mbridge_reward_endcard_native_half_portrait"
            java.lang.String r4 = "mbridge_reward_endcard_native_hor"
            if (r0 != 0) goto L42
            boolean r0 = r6.U
            if (r0 == 0) goto L36
            goto L37
        L36:
            r3 = r4
        L37:
            boolean r0 = r6.isLandscape()
            if (r0 == 0) goto L5b
            boolean r0 = r6.U
            if (r0 == 0) goto L59
            goto L5a
        L42:
            r5 = 1
            if (r0 != r5) goto L4c
            boolean r0 = r6.U
            if (r0 == 0) goto L4a
            goto L4f
        L4a:
            r3 = r4
            goto L4f
        L4c:
            java.lang.String r0 = ""
            r3 = r0
        L4f:
            int r0 = r6.ad
            r4 = 2
            if (r0 != r4) goto L5b
            boolean r0 = r6.U
            if (r0 == 0) goto L59
            goto L5a
        L59:
            r1 = r2
        L5a:
            r3 = r1
        L5b:
            int r0 = r6.findLayout(r3)
            if (r0 <= 0) goto L94
            boolean r1 = r6.isLandscape()
            r2 = 0
            if (r1 == 0) goto L7c
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.o = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.o
            boolean r0 = r6.b(r0)
            goto L8f
        L7c:
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.n = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.n
            boolean r0 = r6.b(r0)
        L8f:
            r6.f = r0
            r6.a()
        L94:
            return
    }

    public void setMoreOfferCampaignUnit(com.mbridge.msdk.foundation.entity.CampaignUnit r3) {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            if (r0 == 0) goto L35
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L35
            r2.W = r3
            if (r3 == 0) goto L35
            java.util.ArrayList r3 = r3.getAds()
            if (r3 == 0) goto L35
            com.mbridge.msdk.foundation.entity.CampaignUnit r3 = r2.W
            java.util.ArrayList r3 = r3.getAds()
            int r3 = r3.size()
            r0 = 5
            if (r3 <= r0) goto L35
            com.mbridge.msdk.shake.MBShakeView r3 = r2.aa
            if (r3 == 0) goto L35
            android.content.Context r0 = r2.getContext()
            r1 = 1084227584(0x40a00000, float:5.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            r1 = 0
            r3.setPadding(r1, r1, r1, r0)
        L35:
            return
    }

    public void setNotchPadding(int r5, int r6, int r7, int r8) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NOTCH NativeEndCard "
            r0.append(r1)
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r5)
            r3 = 0
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r6)
            r3 = 1
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r7)
            r3 = 2
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r8)
            r3 = 3
            r1[r3] = r2
            java.lang.String r2 = "%1s-%2s-%3s-%4s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r4.M = r5
            r4.N = r6
            r4.O = r7
            r4.P = r8
            r4.b()
            return
    }

    public void setOnPause() {
            r1 = this;
            r0 = 0
            r1.J = r0
            return
    }

    public void setOnResume() {
            r1 = this;
            r0 = 1
            r1.J = r0
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.V = r1
            return
    }
}
