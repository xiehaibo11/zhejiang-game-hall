package com.sigmob.sdk.base.views;

public class w extends android.widget.RelativeLayout {
    int a;
    boolean b;
    private final android.widget.TextView c;
    private final android.widget.TextView d;
    private int e;

    public w(android.content.Context r5) {
            r4 = this;
            r4.<init>(r5)
            r0 = 0
            r4.a = r0
            r4.b = r0
            r0 = 1106247680(0x41f00000, float:30.0)
            int r0 = com.czhj.sdk.common.utils.Dips.asIntPixels(r0, r5)
            r4.a = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            int r1 = r4.a
            r2 = -2
            r0.<init>(r1, r2)
            android.widget.TextView r1 = new android.widget.TextView
            r1.<init>(r5)
            r4.c = r1
            android.widget.TextView r1 = new android.widget.TextView
            r1.<init>(r5)
            r4.d = r1
            r4.setLayoutParams(r0)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            int r0 = r4.a
            r5.<init>(r0, r0)
            r0 = 9
            r5.addRule(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L40
            r0 = 20
            r5.addRule(r0)
        L40:
            android.widget.TextView r0 = r4.d
            r2 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setTextColor(r2)
            android.widget.TextView r0 = r4.d
            int r2 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r2)
            android.widget.TextView r0 = r4.d
            r2 = 1
            r3 = 1096810496(0x41600000, float:14.0)
            r0.setTextSize(r2, r3)
            android.widget.TextView r0 = r4.d
            r0.setGravity(r1)
            android.widget.TextView r0 = r4.d
            r4.addView(r0, r5)
            int r5 = r4.a
            int r5 = r5 / 2
            java.lang.String r0 = "#ffffff"
            int r0 = android.graphics.Color.parseColor(r0)
            android.graphics.drawable.GradientDrawable r1 = new android.graphics.drawable.GradientDrawable
            r1.<init>()
            r1.setColor(r0)
            float r5 = (float) r5
            r1.setCornerRadius(r5)
            r5 = 102(0x66, float:1.43E-43)
            r1.setAlpha(r5)
            r4.setBackground(r1)
            java.lang.String r5 = "skip"
            r4.setContentDescription(r5)
            return
    }

    public void a(int r4) {
            r3 = this;
            r3.e = r4
            boolean r0 = r3.b
            if (r0 == 0) goto L29
            if (r4 <= 0) goto L34
            android.widget.TextView r0 = r3.c
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r2 = 0
            r1[r2] = r4
            java.lang.String r4 = com.sigmob.sdk.base.d.d(r1)
            r0.setText(r4)
            android.widget.TextView r4 = r3.c
            int r4 = r4.getVisibility()
            if (r4 == 0) goto L34
            android.widget.TextView r4 = r3.c
            r4.setVisibility(r2)
            goto L34
        L29:
            if (r4 <= 0) goto L34
            android.widget.TextView r0 = r3.d
            java.lang.String r4 = java.lang.String.valueOf(r4)
            r0.setText(r4)
        L34:
            return
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public void b() {
            r7 = this;
            boolean r0 = r7.b
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r7.b = r0
            if (r0 == 0) goto Lf
            java.lang.String r1 = "show skip widget"
            com.czhj.sdk.logger.SigmobLog.d(r1)
        Lf:
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            int r3 = r7.a
            r1.<init>(r2, r3)
            android.widget.TextView r2 = r7.c
            r3 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r2.setTextColor(r3)
            android.widget.TextView r2 = r7.c
            r3 = 1096810496(0x41600000, float:14.0)
            r2.setTextSize(r0, r3)
            android.widget.TextView r2 = r7.c
            r3 = 17
            r2.setGravity(r3)
            android.widget.TextView r2 = r7.c
            r3 = 0
            r2.setVisibility(r3)
            android.widget.TextView r2 = r7.d
            r4 = 8
            r2.setVisibility(r4)
            android.widget.TextView r2 = r7.c
            int r4 = r7.a
            float r5 = (float) r4
            r6 = 1077936128(0x40400000, float:3.0)
            float r5 = r5 / r6
            int r5 = (int) r5
            float r4 = (float) r4
            float r4 = r4 / r6
            int r4 = (int) r4
            r2.setPadding(r5, r3, r4, r3)
            int r2 = r7.e
            if (r2 <= 0) goto L5e
            android.widget.TextView r4 = r7.c
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r3] = r2
            java.lang.String r0 = com.sigmob.sdk.base.d.d(r0)
            r4.setText(r0)
            goto L67
        L5e:
            android.widget.TextView r0 = r7.c
            java.lang.String r2 = com.sigmob.sdk.base.d.h()
            r0.setText(r2)
        L67:
            android.widget.TextView r0 = r7.c
            r7.addView(r0, r1)
            return
    }

    public int getTime() {
            r1 = this;
            int r0 = r1.e
            return r0
    }
}
