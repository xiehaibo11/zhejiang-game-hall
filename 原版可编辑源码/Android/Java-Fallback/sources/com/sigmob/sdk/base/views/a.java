package com.sigmob.sdk.base.views;

public class a extends android.app.Dialog implements android.content.DialogInterface.OnDismissListener, android.content.DialogInterface.OnShowListener, android.view.View.OnClickListener {
    private android.content.Context a;
    private android.view.Window b;
    private int c;
    private int d;
    private int e;
    private int f;
    private java.lang.String g;
    private java.lang.String h;
    private android.widget.ImageView i;


    public a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            int r0 = com.sigmob.sdk.base.d.e()
            r1.<init>(r2, r0)
            r0 = 0
            r1.b = r0
            android.content.Context r0 = r2.getApplicationContext()
            r1.a = r0
            r1.g = r3
            r1.h = r4
            android.widget.ImageView r3 = r1.b()
            r1.i = r3
            android.content.Context r3 = r1.a
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            int r3 = r3.widthPixels
            r1.d = r3
            r3 = 1123024896(0x42f00000, float:120.0)
            int r2 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r2)
            r1.c = r2
            return
    }

    static java.lang.String a(com.sigmob.sdk.base.views.a r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    private boolean a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "clipboard"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Throwable -> L13
            android.content.ClipboardManager r2 = (android.content.ClipboardManager) r2     // Catch: java.lang.Throwable -> L13
            java.lang.String r0 = ""
            android.content.ClipData r3 = android.content.ClipData.newPlainText(r0, r3)     // Catch: java.lang.Throwable -> L13
            r2.setPrimaryClip(r3)     // Catch: java.lang.Throwable -> L13
            r2 = 1
            return r2
        L13:
            r2 = 0
            return r2
    }

    static boolean a(com.sigmob.sdk.base.views.a r0, android.content.Context r1, java.lang.String r2) {
            boolean r0 = r0.a(r1, r2)
            return r0
    }

    private android.widget.ImageView b() {
            r2 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r2.a
            r0.<init>(r1)
            r2.i = r0
            com.sigmob.sdk.base.views.o r1 = com.sigmob.sdk.base.views.o.e
            android.graphics.Bitmap r1 = r1.a()
            r0.setImageBitmap(r1)
            android.widget.ImageView r0 = r2.i
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP
            r0.setScaleType(r1)
            android.widget.ImageView r0 = r2.i
            r1 = 127(0x7f, float:1.78E-43)
            r0.setImageAlpha(r1)
            android.widget.ImageView r0 = r2.i
            r1 = 1
            r0.setClickable(r1)
            android.widget.ImageView r0 = r2.i
            r0.setOnClickListener(r2)
            android.widget.ImageView r0 = r2.i
            return r0
    }

    static java.lang.String b(com.sigmob.sdk.base.views.a r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    private android.widget.TextView c() {
            r2 = this;
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            java.lang.String r1 = "复制广告信息"
            r0.setText(r1)
            r1 = -16776961(0xffffffffff0000ff, float:-1.7014636E38)
            r0.setTextColor(r1)
            com.sigmob.sdk.base.views.a$1 r1 = new com.sigmob.sdk.base.views.a$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return r0
    }

    private android.view.View d() {
            r7 = this;
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            android.content.Context r1 = r7.getContext()
            r0.<init>(r1)
            android.content.Context r1 = r7.getContext()
            r2 = 1101004800(0x41a00000, float:20.0)
            int r1 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r2, r1)
            r2 = 1
            r0.setOrientation(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r1)
            int r1 = r1 / 4
            r3 = 0
            r2.setMargins(r3, r1, r3, r3)
            android.widget.TextView r1 = new android.widget.TextView
            android.content.Context r3 = r7.getContext()
            r1.<init>(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "appid: "
            r3.append(r4)
            com.sigmob.windad.WindAds r4 = com.sigmob.windad.WindAds.sharedAds()
            java.lang.String r4 = r4.getAppId()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.setText(r3)
            r3 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r1.setTextColor(r3)
            r4 = 1094713344(0x41400000, float:12.0)
            r1.setTextSize(r4)
            r0.addView(r1, r2)
            android.widget.TextView r1 = new android.widget.TextView
            android.content.Context r5 = r7.getContext()
            r1.<init>(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "p_id: "
            r5.append(r6)
            java.lang.String r6 = r7.h
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r1.setText(r5)
            r1.setTextColor(r3)
            r1.setTextSize(r4)
            r0.addView(r1, r2)
            android.widget.TextView r1 = new android.widget.TextView
            android.content.Context r5 = r7.getContext()
            r1.<init>(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "req_id: "
            r5.append(r6)
            java.lang.String r6 = r7.g
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r1.setTextSize(r4)
            r1.setText(r5)
            r1.setTextColor(r3)
            r0.addView(r1, r2)
            return r0
    }

    private void e() {
            r2 = this;
            android.view.Window r0 = r2.getWindow()
            r2.b = r0
            if (r0 == 0) goto L35
            r1 = 80
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

    public void a() {
            r2 = this;
            android.widget.ImageView r0 = r2.i
            r1 = 0
            if (r0 == 0) goto La
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r0)
            r2.i = r1
        La:
            android.content.Context r0 = r2.a
            if (r0 == 0) goto L10
            r2.a = r1
        L10:
            return
    }

    @Override
    public void onClick(android.view.View r1) {
            r0 = this;
            r0.dismiss()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r11) {
            r10 = this;
            super.onCreate(r11)
            android.widget.RelativeLayout r11 = new android.widget.RelativeLayout
            android.content.Context r0 = r10.getContext()
            r11.<init>(r0)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r11.setLayoutParams(r0)
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r0.setColor(r1)
            android.content.Context r2 = r10.a
            r3 = 1101004800(0x41a00000, float:20.0)
            int r2 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r2)
            r3 = 8
            float[] r3 = new float[r3]
            float r2 = (float) r2
            r4 = 0
            r3[r4] = r2
            r5 = 1
            r3[r5] = r2
            r6 = 2
            r3[r6] = r2
            r7 = 3
            r3[r7] = r2
            r2 = 4
            r8 = 0
            r3[r2] = r8
            r2 = 5
            r3[r2] = r8
            r2 = 6
            r3[r2] = r8
            r2 = 7
            r3[r2] = r8
            r0.setCornerRadii(r3)
            android.content.Context r2 = r10.a
            r3 = 1092616192(0x41200000, float:10.0)
            int r2 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r2)
            r11.setPadding(r2, r2, r2, r2)
            r11.setBackground(r0)
            r10.setContentView(r11)
            r10.setOnShowListener(r10)
            r10.setOnDismissListener(r10)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "AdInfoDialog onCreate:"
            r0.append(r2)
            int r2 = r10.d
            r0.append(r2)
            java.lang.String r2 = ":"
            r0.append(r2)
            int r2 = r10.c
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            android.content.Context r0 = r10.a
            r2 = 1099956224(0x41900000, float:18.0)
            int r0 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r2, r0)
            android.widget.ImageView r2 = r10.i
            r3 = 10
            if (r2 == 0) goto La4
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r2.<init>(r0, r0)
            r2.addRule(r3)
            r8 = 11
            r2.addRule(r8)
            int r8 = r0 / 4
            int r9 = r0 / 2
            r2.setMargins(r4, r8, r9, r4)
            android.widget.ImageView r8 = r10.i
            r11.addView(r8, r2)
        La4:
            android.widget.TextView r2 = r10.c()
            int r8 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r2.setId(r8)
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r1, r0)
            r8.addRule(r3)
            r3 = 9
            r8.addRule(r3)
            int r9 = r0 / 4
            int r0 = r0 / r6
            r8.setMargins(r4, r9, r0, r4)
            r11.addView(r2, r8)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r4 = -2
            r0.<init>(r1, r4)
            int r1 = r2.getId()
            r0.addRule(r7, r1)
            r0.addRule(r3)
            android.view.View r1 = r10.d()
            r11.addView(r1, r0)
            r10.setCanceledOnTouchOutside(r5)
            r10.setCancelable(r5)
            r10.e()
            return
    }

    @Override
    public void onDismiss(android.content.DialogInterface r1) {
            r0 = this;
            java.lang.String r1 = "AdInfoDialog  onDismiss"
            com.czhj.sdk.logger.SigmobLog.i(r1)
            return
    }

    @Override
    public void onShow(android.content.DialogInterface r1) {
            r0 = this;
            java.lang.String r1 = "AdInfoDialog  onShow"
            com.czhj.sdk.logger.SigmobLog.i(r1)
            return
    }
}
