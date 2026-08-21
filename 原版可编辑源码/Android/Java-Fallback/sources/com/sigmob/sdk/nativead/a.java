package com.sigmob.sdk.nativead;

public class a extends android.app.Dialog implements android.content.DialogInterface.OnDismissListener, android.content.DialogInterface.OnShowListener, android.view.View.OnClickListener, com.sigmob.sdk.nativead.r {
    private android.content.Context a;
    private android.view.Window b;
    private int c;
    private int d;
    private com.sigmob.sdk.base.models.BaseAdUnit e;
    private com.sigmob.windad.natives.WindNativeAdData.DislikeInteractionCallback f;
    private java.util.List<java.lang.String> g;
    private android.widget.TextView h;
    private android.widget.TextView i;
    private android.widget.TextView j;
    private android.widget.TextView k;
    private android.widget.RelativeLayout l;
    private android.widget.EditText m;
    private com.sigmob.sdk.nativead.m n;
    private android.view.ViewGroup o;




    public a(android.content.Context r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r2 = this;
            int r0 = com.sigmob.sdk.base.d.e()
            r2.<init>(r3, r0)
            r0 = 0
            r2.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.g = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.a = r3
            r2.e = r4
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            int r3 = r3.widthPixels
            android.content.Context r4 = r2.a
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            int r4 = r4.heightPixels
            android.content.Context r0 = r2.a
            r1 = 1109393408(0x42200000, float:40.0)
            int r0 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r1, r0)
            if (r4 <= r3) goto L40
            int r3 = r3 - r0
            r2.d = r3
            r3 = -2
            r2.c = r3
            goto L4f
        L40:
            int r3 = r4 - r0
            r2.d = r3
            android.content.Context r3 = r2.getContext()
            int r3 = com.sigmob.sdk.videoplayer.d.h(r3)
            int r4 = r4 - r3
            r2.c = r4
        L4f:
            r2.c()
            return
    }

    static android.widget.TextView a(com.sigmob.sdk.nativead.a r0) {
            android.widget.TextView r0 = r0.k
            return r0
    }

    static void a(com.sigmob.sdk.nativead.a r0, java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    private void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r2.e
            com.sigmob.sdk.nativead.a$3 r1 = new com.sigmob.sdk.nativead.a$3
            r1.<init>(r2, r5, r6)
            com.sigmob.sdk.base.common.z.a(r3, r4, r0, r1)
            return
    }

    static com.sigmob.windad.natives.WindNativeAdData.DislikeInteractionCallback b(com.sigmob.sdk.nativead.a r0) {
            com.sigmob.windad.natives.WindNativeAdData$DislikeInteractionCallback r0 = r0.f
            return r0
    }

    static com.sigmob.sdk.base.models.BaseAdUnit c(com.sigmob.sdk.nativead.a r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.e
            return r0
    }

    private void c() {
            r2 = this;
            java.util.List<java.lang.String> r0 = r2.g
            r0.clear()
            java.util.List<java.lang.String> r0 = r2.g
            java.lang.String r1 = "违法违规"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = r2.g
            java.lang.String r1 = "疑似抄袭"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = r2.g
            java.lang.String r1 = "虚假欺诈"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = r2.g
            java.lang.String r1 = "低俗色情"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = r2.g
            java.lang.String r1 = "诱导点击"
            r0.add(r1)
            return
    }

    private void d() {
            r2 = this;
            android.view.Window r0 = r2.getWindow()
            r2.b = r0
            if (r0 == 0) goto L35
            r1 = 17
            r0.setGravity(r1)
            int r0 = com.sigmob.sdk.base.d.f()
            if (r0 == 0) goto L18
            android.view.Window r1 = r2.b
            r1.setWindowAnimations(r0)
        L18:
            android.view.Window r0 = r2.b
            android.view.View r0 = r0.getDecorView()
            r1 = 0
            r0.setPadding(r1, r1, r1, r1)
            android.view.Window r0 = r2.b
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            int r1 = r2.d
            r0.width = r1
            int r1 = r2.c
            r0.height = r1
            android.view.Window r1 = r2.b
            r1.setAttributes(r0)
        L35:
            return
    }

    @Override
    public void a() {
            r3 = this;
            r3.show()
            java.lang.String r0 = ""
            java.lang.String r1 = "dislike"
            java.lang.String r2 = "click"
            r3.a(r1, r2, r0, r0)
            return
    }

    @Override
    public void a(com.sigmob.windad.natives.WindNativeAdData.DislikeInteractionCallback r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void b() {
            r1 = this;
            com.sigmob.windad.natives.WindNativeAdData$DislikeInteractionCallback r0 = r1.f
            if (r0 == 0) goto L7
            r0 = 0
            r1.f = r0
        L7:
            return
    }

    @Override
    public void onClick(android.view.View r7) {
            r6 = this;
            android.widget.RelativeLayout r0 = r6.l
            boolean r0 = r7.equals(r0)
            r1 = 1
            r2 = 0
            java.lang.String r3 = "dislike"
            java.lang.String r4 = ""
            if (r0 == 0) goto L22
            java.lang.String r7 = "why_click"
            r6.a(r3, r7, r4, r4)
            android.content.Context r7 = r6.a
            java.lang.Class<com.sigmob.sdk.base.common.AdActivity> r0 = com.sigmob.sdk.base.common.AdActivity.class
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r6.e
            java.lang.String r3 = r3.getUuid()
            com.sigmob.sdk.base.common.AdActivity.b(r7, r0, r3)
            goto L90
        L22:
            android.widget.TextView r0 = r6.i
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L3a
            android.widget.TextView r7 = r6.i
            java.lang.CharSequence r7 = r7.getText()
            java.lang.String r7 = (java.lang.String) r7
            java.lang.String r0 = "adnormal_show"
            r6.a(r3, r0, r4, r4)
            r4 = r7
            r2 = r1
            goto L90
        L3a:
            android.widget.TextView r0 = r6.j
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L52
            android.widget.TextView r7 = r6.j
            java.lang.CharSequence r7 = r7.getText()
            java.lang.String r7 = (java.lang.String) r7
            r2 = 2
            java.lang.String r0 = "cannot_close"
        L4d:
            r6.a(r3, r0, r4, r4)
        L50:
            r4 = r7
            goto L90
        L52:
            android.widget.TextView r0 = r6.h
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L66
            android.widget.TextView r7 = r6.h
            java.lang.CharSequence r7 = r7.getText()
            java.lang.String r7 = (java.lang.String) r7
            r2 = 3
            java.lang.String r0 = "nointerest_click"
            goto L4d
        L66:
            android.widget.TextView r0 = r6.k
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L90
            android.widget.EditText r7 = r6.m
            if (r7 == 0) goto L90
            android.text.Editable r7 = r7.getText()
            java.lang.String r7 = r7.toString()
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L50
            r0 = 5
            byte[] r5 = r7.getBytes()
            java.lang.String r2 = android.util.Base64.encodeToString(r5, r2)
            java.lang.String r5 = "advice"
            r6.a(r3, r5, r4, r2)
            r4 = r7
            r2 = r0
        L90:
            com.sigmob.windad.natives.WindNativeAdData$DislikeInteractionCallback r7 = r6.f
            if (r7 == 0) goto L9c
            if (r2 == 0) goto L9c
            r7.onSelected(r2, r4, r1)
            r6.dismiss()
        L9c:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r5) {
            r4 = this;
            super.onCreate(r5)
            android.content.Context r5 = r4.a
            java.lang.String r0 = "sig_dislike_layout"
            int r5 = com.czhj.sdk.common.utils.ResourceUtil.getLayoutId(r5, r0)
            r4.setContentView(r5)
            android.content.Context r5 = r4.a
            java.lang.String r0 = "sig_why_watch_rl"
            int r5 = com.czhj.sdk.common.utils.ResourceUtil.getId(r5, r0)
            android.view.View r5 = r4.findViewById(r5)
            android.widget.RelativeLayout r5 = (android.widget.RelativeLayout) r5
            r4.l = r5
            android.content.Context r5 = r4.a
            java.lang.String r0 = "sig_not_show_tv"
            int r5 = com.czhj.sdk.common.utils.ResourceUtil.getId(r5, r0)
            android.view.View r5 = r4.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            r4.i = r5
            android.content.Context r5 = r4.a
            java.lang.String r0 = "sig_not_close_tv"
            int r5 = com.czhj.sdk.common.utils.ResourceUtil.getId(r5, r0)
            android.view.View r5 = r4.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            r4.j = r5
            android.content.Context r5 = r4.a
            java.lang.String r0 = "sig_dislike_tv"
            int r5 = com.czhj.sdk.common.utils.ResourceUtil.getId(r5, r0)
            android.view.View r5 = r4.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            r4.h = r5
            android.content.Context r5 = r4.a
            java.lang.String r0 = "sig_commit_sl"
            int r5 = com.czhj.sdk.common.utils.ResourceUtil.getId(r5, r0)
            android.view.View r5 = r4.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            r4.k = r5
            android.content.Context r5 = r4.a
            java.lang.String r0 = "sig_suggest_et"
            int r5 = com.czhj.sdk.common.utils.ResourceUtil.getId(r5, r0)
            android.view.View r5 = r4.findViewById(r5)
            android.widget.EditText r5 = (android.widget.EditText) r5
            r4.m = r5
            android.widget.RelativeLayout r5 = r4.l
            r5.setOnClickListener(r4)
            android.widget.TextView r5 = r4.h
            r5.setOnClickListener(r4)
            android.widget.TextView r5 = r4.i
            r5.setOnClickListener(r4)
            android.widget.TextView r5 = r4.j
            r5.setOnClickListener(r4)
            android.widget.TextView r5 = r4.k
            r5.setOnClickListener(r4)
            android.widget.EditText r5 = r4.m
            com.sigmob.sdk.nativead.a$1 r0 = new com.sigmob.sdk.nativead.a$1
            r0.<init>(r4)
            r5.addTextChangedListener(r0)
            android.content.Context r5 = r4.a
            java.lang.String r0 = "sig_flow_sl"
            int r5 = com.czhj.sdk.common.utils.ResourceUtil.getId(r5, r0)
            android.view.View r5 = r4.findViewById(r5)
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5
            r4.o = r5
            com.sigmob.sdk.nativead.m r5 = new com.sigmob.sdk.nativead.m
            android.content.Context r0 = r4.a
            r5.<init>(r0)
            r4.n = r5
            java.util.List<java.lang.String> r0 = r4.g
            r5.setList(r0)
            com.sigmob.sdk.nativead.m r5 = r4.n
            com.sigmob.sdk.nativead.a$2 r0 = new com.sigmob.sdk.nativead.a$2
            r0.<init>(r4)
            r5.setOnItemClickListener(r0)
            android.view.ViewGroup r5 = r4.o
            com.sigmob.sdk.nativead.m r0 = r4.n
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r2 = -1
            r3 = -2
            r1.<init>(r2, r3)
            r5.addView(r0, r1)
            r4.setOnShowListener(r4)
            r4.setOnDismissListener(r4)
            r5 = 1
            r4.setCanceledOnTouchOutside(r5)
            r4.setCancelable(r5)
            r4.d()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "DisLikeDialog onCreate:"
            r5.append(r0)
            int r0 = r4.d
            r5.append(r0)
            java.lang.String r0 = ":"
            r5.append(r0)
            int r0 = r4.c
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.czhj.sdk.logger.SigmobLog.i(r5)
            return
    }

    @Override
    public void onDismiss(android.content.DialogInterface r1) {
            r0 = this;
            java.lang.String r1 = "DisLikeDialog  onDismiss"
            com.czhj.sdk.logger.SigmobLog.i(r1)
            com.sigmob.windad.natives.WindNativeAdData$DislikeInteractionCallback r1 = r0.f
            if (r1 == 0) goto Lc
            r1.onCancel()
        Lc:
            return
    }

    @Override
    public void onShow(android.content.DialogInterface r1) {
            r0 = this;
            java.lang.String r1 = "DisLikeDialog  onShow"
            com.czhj.sdk.logger.SigmobLog.i(r1)
            com.sigmob.windad.natives.WindNativeAdData$DislikeInteractionCallback r1 = r0.f
            if (r1 == 0) goto Lc
            r1.onShow()
        Lc:
            com.sigmob.sdk.nativead.m r1 = r0.n
            if (r1 == 0) goto L13
            r1.b()
        L13:
            return
    }
}
