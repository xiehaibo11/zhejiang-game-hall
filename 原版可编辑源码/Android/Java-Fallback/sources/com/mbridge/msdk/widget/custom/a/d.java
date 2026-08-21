package com.mbridge.msdk.widget.custom.a;

public final class d {
    private com.mbridge.msdk.widget.custom.CustomViewMessageWrap a;
    private com.mbridge.msdk.widget.custom.a b;
    private com.mbridge.msdk.widget.custom.DownloadMessageDialog c;
    private int d;
    private int e;
    private android.widget.ImageView f;
    private com.mbridge.msdk.widget.custom.baseview.MBImageView g;
    private com.mbridge.msdk.widget.custom.baseview.MBButton h;
    private com.mbridge.msdk.widget.custom.baseview.MBImageView i;






    public d(com.mbridge.msdk.widget.custom.CustomViewMessageWrap r1, com.mbridge.msdk.widget.custom.a r2, com.mbridge.msdk.widget.custom.DownloadMessageDialog r3, int r4, int r5) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.e = r5
            return
    }

    static android.widget.ImageView a(com.mbridge.msdk.widget.custom.a.d r0) {
            android.widget.ImageView r0 = r0.f
            return r0
    }

    static com.mbridge.msdk.widget.custom.baseview.MBImageView b(com.mbridge.msdk.widget.custom.a.d r0) {
            com.mbridge.msdk.widget.custom.baseview.MBImageView r0 = r0.i
            return r0
    }

    static com.mbridge.msdk.widget.custom.CustomViewMessageWrap c(com.mbridge.msdk.widget.custom.a.d r0) {
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r0 = r0.a
            return r0
    }

    static com.mbridge.msdk.widget.custom.DownloadMessageDialog d(com.mbridge.msdk.widget.custom.a.d r0) {
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r0 = r0.c
            return r0
    }

    static com.mbridge.msdk.widget.custom.a e(com.mbridge.msdk.widget.custom.a.d r0) {
            com.mbridge.msdk.widget.custom.a r0 = r0.b
            return r0
    }

    public final com.mbridge.msdk.widget.custom.baseview.MBButton a() {
            r1 = this;
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r1.h
            return r0
    }

    public final void a(android.view.ViewGroup r18) {
            r17 = this;
            r1 = r17
            r2 = r18
            boolean r0 = r2 instanceof com.mbridge.msdk.widget.custom.baseview.MBStarLevelLayoutView
            r3 = 0
            if (r0 == 0) goto L2e
            java.lang.CharSequence r0 = r18.getContentDescription()
            java.lang.String r4 = "getStarCount"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L2e
            r0 = r2
            com.mbridge.msdk.widget.custom.baseview.MBStarLevelLayoutView r0 = (com.mbridge.msdk.widget.custom.baseview.MBStarLevelLayoutView) r0
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r4 = r1.a
            if (r4 == 0) goto L21
            int r4 = r4.getStarCount()
            goto L22
        L21:
            r4 = r3
        L22:
            int r4 = java.lang.Math.max(r4, r3)
            r5 = 5
            int r4 = java.lang.Math.min(r4, r5)
            r0.setRating(r4)
        L2e:
            r4 = r3
        L2f:
            int r0 = r18.getChildCount()
            if (r4 >= r0) goto L261
            android.view.View r5 = r2.getChildAt(r4)
            java.lang.CharSequence r0 = r5.getContentDescription()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r6 = "getApplicationPrivacy"
            java.lang.String r7 = "close"
            r8 = 8
            r9 = 1
            if (r0 != 0) goto Ld0
            java.lang.CharSequence r0 = r5.getContentDescription()
            r10 = r0
            java.lang.String r10 = (java.lang.String) r10
            java.lang.String r0 = "#"
            java.lang.String[] r0 = r10.split(r0)
            int r11 = r0.length
            if (r11 <= r9) goto Lb4
            r11 = r0[r3]
            r0 = r0[r9]
            boolean r12 = com.mbridge.msdk.widget.custom.b.e.a(r0)
            if (r12 == 0) goto Lb4
            int r0 = java.lang.Integer.parseInt(r0)
            if (r0 == r9) goto La2
            r11 = 2
            if (r0 == r11) goto L6e
            goto Lb4
        L6e:
            int r0 = r4 + 1
            android.view.View r0 = r2.getChildAt(r0)     // Catch: java.lang.Exception -> L99
            r11 = 0
            r12 = r5
            android.view.ViewGroup r12 = (android.view.ViewGroup) r12     // Catch: java.lang.Exception -> L99
            r13 = r3
        L79:
            int r14 = r12.getChildCount()     // Catch: java.lang.Exception -> L99
            if (r13 >= r14) goto L90
            android.view.View r14 = r12.getChildAt(r13)     // Catch: java.lang.Exception -> L99
            boolean r14 = r14 instanceof android.widget.ImageView     // Catch: java.lang.Exception -> L99
            if (r14 == 0) goto L8d
            android.view.View r11 = r12.getChildAt(r13)     // Catch: java.lang.Exception -> L99
            android.widget.ImageView r11 = (android.widget.ImageView) r11     // Catch: java.lang.Exception -> L99
        L8d:
            int r13 = r13 + 1
            goto L79
        L90:
            com.mbridge.msdk.widget.custom.a.d$1 r12 = new com.mbridge.msdk.widget.custom.a.d$1     // Catch: java.lang.Exception -> L99
            r12.<init>(r1, r0, r11)     // Catch: java.lang.Exception -> L99
            r5.setOnClickListener(r12)     // Catch: java.lang.Exception -> L99
            goto Lb4
        L99:
            r0 = move-exception
            boolean r11 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r11 == 0) goto Lb4
            r0.printStackTrace()
            goto Lb4
        La2:
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r0 = r1.a
            java.lang.String r0 = com.mbridge.msdk.widget.custom.CustomViewMessageWrap.getMessage(r0, r11)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb0
            r0 = r8
            goto Lb1
        Lb0:
            r0 = r3
        Lb1:
            r5.setVisibility(r0)
        Lb4:
            boolean r0 = r10.equals(r7)
            if (r0 == 0) goto Lc2
            com.mbridge.msdk.widget.custom.a.d$2 r0 = new com.mbridge.msdk.widget.custom.a.d$2
            r0.<init>(r1)
            r5.setOnClickListener(r0)
        Lc2:
            boolean r0 = r10.startsWith(r6)
            if (r0 == 0) goto Ld0
            com.mbridge.msdk.widget.custom.a.d$3 r0 = new com.mbridge.msdk.widget.custom.a.d$3
            r0.<init>(r1, r5)
            r5.setOnClickListener(r0)
        Ld0:
            boolean r0 = r5 instanceof android.view.ViewGroup
            if (r0 == 0) goto Ldb
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5
            r1.a(r5)
            goto L25d
        Ldb:
            boolean r0 = r5 instanceof com.mbridge.msdk.widget.custom.baseview.MBTextView
            if (r0 == 0) goto L104
            com.mbridge.msdk.widget.custom.baseview.MBTextView r5 = (com.mbridge.msdk.widget.custom.baseview.MBTextView) r5
            java.lang.CharSequence r0 = r5.getContentDescription()
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r6 = r1.a
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r0 = com.mbridge.msdk.widget.custom.CustomViewMessageWrap.getMessage(r6, r0)
            java.lang.CharSequence r6 = r5.getText()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L25d
            boolean r6 = android.text.TextUtils.isEmpty(r0)
            if (r6 != 0) goto L25d
            r5.setText(r0)
            goto L25d
        L104:
            boolean r0 = r5 instanceof com.mbridge.msdk.widget.custom.baseview.MBImageView
            java.lang.String r10 = "drawable"
            if (r0 == 0) goto L223
            r11 = r5
            com.mbridge.msdk.widget.custom.baseview.MBImageView r11 = (com.mbridge.msdk.widget.custom.baseview.MBImageView) r11
            java.lang.CharSequence r0 = r11.getContentDescription()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L25d
            java.lang.CharSequence r0 = r11.getContentDescription()
            java.lang.String r5 = "imgbg"
            boolean r0 = r0.equals(r5)
            java.lang.String r5 = "getApplicationImage"
            if (r0 == 0) goto L15b
            r1.g = r11
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r0 = r1.a
            java.lang.String r0 = com.mbridge.msdk.widget.custom.CustomViewMessageWrap.getMessage(r0, r5)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L25d
            android.content.res.Resources r0 = r11.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            com.mbridge.msdk.widget.custom.a.b r5 = com.mbridge.msdk.widget.custom.a.b.a()
            java.lang.String r6 = "20dp"
            int r5 = r5.c(r6)
            int r0 = r0 - r5
            float r5 = (float) r0
            r6 = 1057342095(0x3f05c28f, float:0.5225)
            float r5 = r5 * r6
            int r5 = (int) r5
            android.view.ViewGroup$LayoutParams r6 = r11.getLayoutParams()
            r6.width = r0
            r6.height = r5
            r11.setLayoutParams(r6)
            goto L25d
        L15b:
            java.lang.CharSequence r0 = r11.getContentDescription()
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L19e
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r0 = r1.a
            java.lang.CharSequence r5 = r11.getContentDescription()
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r13 = com.mbridge.msdk.widget.custom.CustomViewMessageWrap.getMessage(r0, r5)
            java.lang.CharSequence r0 = r11.getContentDescription()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L18f
            boolean r0 = android.text.TextUtils.isEmpty(r13)
            if (r0 == 0) goto L18f
            r11.setVisibility(r8)
            com.mbridge.msdk.widget.custom.baseview.MBImageView r0 = r1.g
            if (r0 == 0) goto L25d
            r0.setVisibility(r8)
            goto L25d
        L18f:
            com.mbridge.msdk.widget.custom.baseview.MBImageView r12 = r1.g
            int r14 = r1.d
            int r15 = r1.e
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r0 = r1.c
            r16 = r0
            com.mbridge.msdk.widget.custom.b.b.a(r11, r12, r13, r14, r15, r16)
            goto L25d
        L19e:
            java.lang.CharSequence r0 = r11.getContentDescription()
            java.lang.String r5 = "getApplicationLogo"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L1ce
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r0 = r1.a
            java.lang.CharSequence r5 = r11.getContentDescription()
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r0 = com.mbridge.msdk.widget.custom.CustomViewMessageWrap.getMessage(r0, r5)
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L1c3
            com.mbridge.msdk.widget.custom.b.b.a(r11, r0)
            goto L25d
        L1c3:
            java.lang.String r0 = "#e6e6e6"
            int r0 = android.graphics.Color.parseColor(r0)
            r11.setBackgroundColor(r0)
            goto L25d
        L1ce:
            java.lang.CharSequence r0 = r11.getContentDescription()
            boolean r0 = r0.equals(r7)
            if (r0 == 0) goto L1e9
            r1.i = r11
            android.content.Context r0 = r11.getContext()
            java.lang.String r5 = "mbridge_download_message_dialog_close"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r5, r10)
            r11.setImageResource(r0)
            goto L25d
        L1e9:
            java.lang.CharSequence r0 = r11.getContentDescription()
            java.lang.String r5 = "permissionexpand"
            boolean r0 = r0.equals(r5)
            java.lang.String r5 = "mbridge_download_message_dialog_expand"
            if (r0 == 0) goto L205
            android.content.Context r0 = r11.getContext()
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r5, r10)
            r11.setImageResource(r0)
            r1.f = r11
            goto L25d
        L205:
            java.lang.CharSequence r0 = r11.getContentDescription()
            boolean r0 = r0.equals(r6)
            if (r0 == 0) goto L25d
            android.content.Context r0 = r11.getContext()
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r5, r10)
            r11.setImageResource(r0)
            com.mbridge.msdk.widget.custom.a.d$4 r0 = new com.mbridge.msdk.widget.custom.a.d$4
            r0.<init>(r1, r11)
            r11.setOnClickListener(r0)
            goto L25d
        L223:
            boolean r0 = r5 instanceof com.mbridge.msdk.widget.custom.baseview.MBButton
            if (r0 == 0) goto L25d
            com.mbridge.msdk.widget.custom.baseview.MBButton r5 = (com.mbridge.msdk.widget.custom.baseview.MBButton) r5
            r5.setIndeterminateProgressMode(r9)
            android.content.Context r0 = r5.getContext()
            java.lang.String r6 = "mbridge_download_message_dialog_button_shape"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r6, r10)
            r5.setBackgroundResource(r0)
            java.lang.CharSequence r0 = r5.getContentDescription()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L25d
            java.lang.CharSequence r0 = r5.getContentDescription()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r6 = "download"
            boolean r0 = r0.startsWith(r6)
            if (r0 == 0) goto L25d
            r1.h = r5
            com.mbridge.msdk.widget.custom.a.d$5 r0 = new com.mbridge.msdk.widget.custom.a.d$5
            r0.<init>(r1, r5)
            r5.setOnClickListener(r0)
        L25d:
            int r4 = r4 + 1
            goto L2f
        L261:
            return
    }
}
