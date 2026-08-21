package com.sigmob.sdk.base.views;

public class d extends android.widget.RelativeLayout {
    private final int a;
    private final int b;
    private final int c;
    private final int d;
    private final int e;
    private final int f;
    private final int g;
    private android.widget.Button h;
    private android.widget.Button i;
    private int j;
    private android.widget.TextView k;
    private com.sigmob.sdk.videoAd.e l;



    public interface a {
        void a();

        void b();
    }

    public d(android.content.Context r5, com.sigmob.sdk.videoAd.e r6) {
            r4 = this;
            r4.<init>(r5)
            r0 = 0
            r4.l = r0
            r4.l = r6
            r6 = 1092616192(0x41200000, float:10.0)
            int r6 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r6, r5)
            r4.a = r6
            r6 = 1077936128(0x40400000, float:3.0)
            int r6 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r6, r5)
            r4.b = r6
            r6 = 1128792064(0x43480000, float:200.0)
            int r6 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r6, r5)
            r4.c = r6
            float r6 = (float) r6
            r0 = 1098907648(0x41800000, float:16.0)
            float r6 = r6 * r0
            double r0 = (double) r6
            r2 = 4621256167635550208(0x4022000000000000, double:9.0)
            double r0 = r0 / r2
            int r6 = (int) r0
            r4.f = r6
            r6 = 1112014848(0x42480000, float:50.0)
            int r6 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r6, r5)
            r4.d = r6
            r6 = 1108082688(0x420c0000, float:35.0)
            com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r6, r5)
            r6 = 1120403456(0x42c80000, float:100.0)
            int r6 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r6, r5)
            r4.e = r6
            int r6 = r4.d
            int r0 = r4.b
            int r6 = r6 + r0
            r4.g = r6
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r0 = -1
            r6.<init>(r0, r0)
            java.lang.String r0 = "#50000000"
            int r0 = android.graphics.Color.parseColor(r0)
            r4.setBackgroundColor(r0)
            r4.setLayoutParams(r6)
            r4.e(r5)
            return
    }

    private android.widget.TextView a(android.content.Context r6) {
            r5 = this;
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r6)
            int r6 = r5.a
            int r1 = r6 * 3
            int r6 = r6 * 2
            r2 = 0
            r0.setPadding(r1, r6, r2, r2)
            com.sigmob.sdk.videoAd.e r6 = r5.l
            java.lang.String r6 = r6.a()
            r0.setText(r6)
            int r6 = com.sigmob.sdk.base.views.n.a
            r0.setTextColor(r6)
            int r6 = r5.a
            double r1 = (double) r6
            r3 = 4604480259023595110(0x3fe6666666666666, double:0.7)
            double r1 = r1 * r3
            float r6 = (float) r1
            r0.setTextSize(r6)
            return r0
    }

    private android.widget.TextView b(android.content.Context r6) {
            r5 = this;
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r6)
            r5.k = r0
            int r6 = r5.a
            int r1 = r6 * 3
            r2 = 2
            int r6 = r6 * r2
            r3 = 0
            r0.setPadding(r1, r6, r3, r3)
            android.widget.TextView r6 = r5.k
            int r0 = com.sigmob.sdk.base.views.n.b
            r6.setTextColor(r0)
            android.widget.TextView r6 = r5.k
            int r0 = r5.a
            double r0 = (double) r0
            r3 = 4603129179135383962(0x3fe199999999999a, double:0.55)
            double r0 = r0 * r3
            float r0 = (float) r0
            r6.setTextSize(r0)
            android.widget.TextView r6 = r5.k
            r6.setMaxLines(r2)
            android.widget.TextView r6 = r5.k
            return r6
    }

    private android.widget.Button c(android.content.Context r6) {
            r5 = this;
            android.widget.Button r0 = new android.widget.Button
            r0.<init>(r6)
            com.sigmob.sdk.videoAd.e r6 = r5.l
            java.lang.String r6 = r6.c()
            r0.setText(r6)
            int r6 = com.sigmob.sdk.base.views.n.a
            r0.setTextColor(r6)
            int r6 = r5.a
            double r1 = (double) r6
            r3 = 4603579539098121011(0x3fe3333333333333, double:0.6)
            double r1 = r1 * r3
            float r6 = (float) r1
            r0.setTextSize(r6)
            r6 = 0
            r0.setBackgroundColor(r6)
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            int r2 = r5.e
            int r3 = r5.d
            int r4 = r5.a
            int r3 = r3 + r4
            r1.<init>(r2, r3)
            int r2 = r5.a
            int r3 = r2 * 6
            r1.setMargins(r3, r6, r2, r6)
            r0.setLayoutParams(r1)
            return r0
    }

    private android.widget.Button d(android.content.Context r9) {
            r8 = this;
            android.widget.Button r7 = new android.widget.Button
            r7.<init>(r9)
            com.sigmob.sdk.videoAd.e r9 = r8.l
            java.lang.String r9 = r9.d()
            r7.setText(r9)
            android.widget.LinearLayout$LayoutParams r9 = new android.widget.LinearLayout$LayoutParams
            int r0 = r8.e
            int r1 = r8.a
            int r0 = r0 + r1
            int r2 = r8.d
            int r2 = r2 + r1
            r9.<init>(r0, r2)
            r7.setLayoutParams(r9)
            r9 = -1
            r7.setTextColor(r9)
            r9 = 0
            r7.setBackgroundColor(r9)
            int r9 = r8.a
            double r0 = (double) r9
            r2 = 4603579539098121011(0x3fe3333333333333, double:0.6)
            double r0 = r0 * r2
            float r9 = (float) r0
            r7.setTextSize(r9)
            int r1 = com.sigmob.sdk.base.views.n.a
            int r2 = r8.b
            java.lang.String r9 = "#66000000"
            int r3 = android.graphics.Color.parseColor(r9)
            int r4 = r8.a
            r5 = 0
            r6 = 0
            r0 = r7
            com.sigmob.sdk.base.views.u.a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    private void e(android.content.Context r10) {
            r9 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r10)
            android.widget.LinearLayout r8 = new android.widget.LinearLayout
            r8.<init>(r10)
            r1 = 1
            r8.setOrientation(r1)
            android.widget.TextView r1 = r9.a(r10)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r3 = -2
            r2.<init>(r3, r3)
            r8.addView(r1, r2)
            android.widget.TextView r1 = r9.b(r10)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r2.<init>(r3, r3)
            r8.addView(r1, r2)
            java.lang.String r1 = "#FFFFFF"
            int r2 = android.graphics.Color.parseColor(r1)
            int r3 = r9.b
            java.lang.String r1 = "#66000000"
            int r4 = android.graphics.Color.parseColor(r1)
            int r5 = r9.a
            r6 = 0
            r7 = 0
            r1 = r8
            com.sigmob.sdk.base.views.u.a(r1, r2, r3, r4, r5, r6, r7)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            int r2 = r9.f
            int r3 = r9.c
            r1.<init>(r2, r3)
            r2 = 13
            r1.addRule(r2)
            r0.setLayoutParams(r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r0.addView(r8, r1)
            android.widget.LinearLayout r1 = new android.widget.LinearLayout
            r1.<init>(r10)
            r3 = 0
            r1.setOrientation(r3)
            android.widget.Button r4 = r9.c(r10)
            r9.h = r4
            r1.addView(r4)
            android.widget.Button r10 = r9.d(r10)
            r9.i = r10
            r1.addView(r10)
            android.widget.RelativeLayout$LayoutParams r10 = new android.widget.RelativeLayout$LayoutParams
            int r4 = r9.g
            r10.<init>(r2, r4)
            int r2 = r9.a
            int r2 = r2 * 2
            r10.setMargins(r3, r3, r3, r2)
            r2 = 12
            r10.addRule(r2)
            r0.addView(r1, r10)
            r9.addView(r0)
            return
    }

    public void setDialogListener(com.sigmob.sdk.base.views.d.a r3) {
            r2 = this;
            android.widget.Button r0 = r2.h
            if (r0 == 0) goto Lc
            com.sigmob.sdk.base.views.d$1 r1 = new com.sigmob.sdk.base.views.d$1
            r1.<init>(r2, r3)
            r0.setOnClickListener(r1)
        Lc:
            android.widget.Button r0 = r2.i
            if (r0 == 0) goto L18
            com.sigmob.sdk.base.views.d$2 r1 = new com.sigmob.sdk.base.views.d$2
            r1.<init>(r2, r3)
            r0.setOnClickListener(r1)
        L18:
            return
    }

    @Override
    public void setVisibility(int r1) {
            r0 = this;
            super.setVisibility(r1)
            return
    }

    public void setduration(int r4) {
            r3 = this;
            r3.j = r4
            android.widget.TextView r4 = r3.k
            if (r4 == 0) goto L1b
            com.sigmob.sdk.videoAd.e r0 = r3.l
            java.lang.String r0 = r0.b()
            int r1 = r3.j
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "_SEC_"
            java.lang.String r0 = r0.replace(r2, r1)
            r4.setText(r0)
        L1b:
            return
    }
}
