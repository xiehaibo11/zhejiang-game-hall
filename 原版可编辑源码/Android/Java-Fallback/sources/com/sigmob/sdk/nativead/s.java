package com.sigmob.sdk.nativead;

public class s extends com.sigmob.sdk.base.common.i {
    private android.widget.RelativeLayout f;
    private android.widget.LinearLayout g;
    private android.widget.TextView h;
    private com.sigmob.sdk.base.models.BaseAdUnit i;
    private java.lang.String j;


    public s(android.app.Activity r1, com.sigmob.sdk.base.models.BaseAdUnit r2, android.os.Bundle r3, android.os.Bundle r4, java.lang.String r5, com.sigmob.sdk.base.common.j r6) {
            r0 = this;
            r0.<init>(r1, r5, r6)
            java.lang.String r1 = "此广告由SigMob提供，为了在应用程序上向您推荐展示出更加个性和实用的广告，对您可能会接收到的一部分广告进行更具相关性的定制，从而使您在应用程序上有更好的用户体验。SigMob非常重视数据安全，将努力采取合理的安全措施（包括技术方面和管理方面）来保护数据安全，防止数据信息被不正当使用或未经授权的情况下被访问。"
            r0.j = r1
            r0.i = r2
            return
    }

    static com.sigmob.sdk.base.common.j a(com.sigmob.sdk.nativead.s r0) {
            com.sigmob.sdk.base.common.j r0 = r0.d
            return r0
    }

    static com.sigmob.sdk.base.common.j b(com.sigmob.sdk.nativead.s r0) {
            com.sigmob.sdk.base.common.j r0 = r0.d
            return r0
    }

    @Override
    public void a(android.content.res.Configuration r1) {
            r0 = this;
            return
    }

    @Override
    public void a(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @Override
    public void b() {
            r10 = this;
            android.widget.RelativeLayout r0 = r10.c
            r0.removeAllViews()
            android.widget.RelativeLayout r0 = r10.c
            r1 = -1
            r0.setBackgroundColor(r1)
            com.sigmob.sdk.base.common.j r0 = r10.d
            android.widget.RelativeLayout r2 = r10.c
            r0.onSetContentView(r2)
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            android.content.Context r2 = r10.i()
            r0.<init>(r2)
            r2 = 1
            r0.setOrientation(r2)
            android.widget.RelativeLayout r3 = r10.c
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r4.<init>(r1, r1)
            r3.addView(r0, r4)
            android.widget.RelativeLayout r3 = new android.widget.RelativeLayout
            android.content.Context r4 = r10.i()
            r3.<init>(r4)
            r10.f = r3
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r5 = r10.i()
            r6 = 1112014848(0x42480000, float:50.0)
            int r5 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r6, r5)
            r4.<init>(r1, r5)
            r0.addView(r3, r4)
            android.view.View r3 = new android.view.View
            android.content.Context r4 = r10.i()
            r3.<init>(r4)
            java.lang.String r4 = "#E0E6EC"
            int r4 = android.graphics.Color.parseColor(r4)
            r3.setBackgroundColor(r4)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r5 = r10.i()
            r6 = 1065353216(0x3f800000, float:1.0)
            int r5 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r6, r5)
            r4.<init>(r1, r5)
            r0.addView(r3, r4)
            android.content.Context r3 = r10.i()
            r4 = 1092616192(0x41200000, float:10.0)
            int r3 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r4, r3)
            android.widget.ImageView r4 = new android.widget.ImageView
            android.content.Context r5 = r10.i()
            r4.<init>(r5)
            com.sigmob.sdk.nativead.s$1 r5 = new com.sigmob.sdk.nativead.s$1
            r5.<init>(r10)
            r4.setOnClickListener(r5)
            android.content.Context r5 = r10.i()
            java.lang.String r6 = "sig_image_video_back_left_black"
            int r5 = com.czhj.sdk.common.utils.ResourceUtil.getDrawableId(r5, r6)
            r4.setImageResource(r5)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            int r6 = r3 * 2
            r5.<init>(r6, r6)
            r6 = 0
            r5.setMargins(r3, r6, r3, r6)
            r6 = 9
            r5.addRule(r6)
            r6 = 15
            r5.addRule(r6)
            android.widget.RelativeLayout r6 = r10.f
            r6.addView(r4, r5)
            android.widget.TextView r4 = new android.widget.TextView
            android.content.Context r5 = r10.i()
            r4.<init>(r5)
            java.lang.String r5 = "为什么看到此广告"
            r4.setText(r5)
            r5 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r4.setTextColor(r5)
            r6 = 1101004800(0x41a00000, float:20.0)
            r4.setTextSize(r2, r6)
            r6 = 17
            r4.setGravity(r6)
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r7 = -2
            r6.<init>(r7, r7)
            r8 = 13
            r6.addRule(r8)
            android.widget.RelativeLayout r9 = r10.f
            r9.addView(r4, r6)
            android.widget.LinearLayout r4 = new android.widget.LinearLayout
            android.content.Context r6 = r10.i()
            r4.<init>(r6)
            r10.g = r4
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r6.<init>(r1, r1)
            r0.addView(r4, r6)
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r4 = r10.i()
            r0.<init>(r4)
            r10.h = r0
            java.lang.String r4 = r10.j
            r0.setText(r4)
            android.widget.TextView r0 = r10.h
            r0.setTextColor(r5)
            android.widget.TextView r0 = r10.h
            r4 = 1097859072(0x41700000, float:15.0)
            r0.setTextSize(r2, r4)
            android.widget.TextView r0 = r10.h
            r2 = 1073741824(0x40000000, float:2.0)
            r4 = 1067030938(0x3f99999a, float:1.2)
            r0.setLineSpacing(r2, r4)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r1, r7)
            r0.addRule(r8)
            int r3 = r3 / 2
            r0.setMargins(r3, r3, r3, r3)
            android.widget.LinearLayout r1 = r10.g
            android.widget.TextView r2 = r10.h
            r1.addView(r2, r0)
            return
    }

    @Override
    public void c() {
            r0 = this;
            return
    }

    @Override
    public void d() {
            r0 = this;
            return
    }

    @Override
    public void e() {
            r0 = this;
            super.e()
            return
    }

    @Override
    public void f() {
            r0 = this;
            return
    }

    @Override
    public boolean g() {
            r1 = this;
            com.sigmob.sdk.base.common.j r0 = r1.d
            if (r0 == 0) goto L9
            com.sigmob.sdk.base.common.j r0 = r1.d
            r0.a()
        L9:
            r0 = 0
            return r0
    }
}
