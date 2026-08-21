package com.kwad.components.core.widget;

public class ComplianceTextView extends android.widget.TextView {
    private java.lang.String XW;
    private java.lang.String XX;
    private java.lang.String XY;
    private java.lang.String XZ;
    private java.lang.String Ya;
    private int Yb;
    private java.lang.String Yc;
    private int Yd;
    private boolean Ye;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;




    public ComplianceTextView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ComplianceTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ComplianceTextView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r3 = 154(0x9a, float:2.16E-43)
            r0.Yb = r3
            r0.init(r1, r2)
            return
    }

    static java.lang.String a(com.kwad.components.core.widget.ComplianceTextView r0) {
            java.lang.String r0 = r0.XW
            return r0
    }

    static void a(com.kwad.components.core.widget.ComplianceTextView r0, java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lc
            r4 = 8
            r3.setVisibility(r4)
            return
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.XZ
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L21
            java.lang.String r1 = r3.Ya
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L26
        L21:
            java.lang.String r1 = "  "
            r0.append(r1)
        L26:
            java.lang.String r1 = r3.XZ
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L31
            r0.append(r5)
        L31:
            java.lang.String r1 = r3.XZ
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L46
            java.lang.String r1 = r3.Ya
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L46
            java.lang.String r1 = " | "
            r0.append(r1)
        L46:
            java.lang.String r1 = r3.Ya
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L51
            r0.append(r6)
        L51:
            r3.getContext()
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            if (r1 != 0) goto L5d
            int r1 = r3.Yb
            goto L61
        L5d:
            int r1 = r3.getWidth()
        L61:
            int r2 = r3.getPaddingLeft()
            int r1 = r1 - r2
            int r2 = r3.getPaddingRight()
            int r1 = r1 - r2
            if (r1 >= 0) goto L6e
            return
        L6e:
            java.lang.String r0 = r0.toString()
            boolean r0 = r3.a(r4, r0, r1)
            if (r0 == 0) goto L83
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "\n"
            goto L8d
        L83:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "   "
        L8d:
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.Yc = r4
            r3.l(r5, r6)
            r3.requestLayout()
            return
    }

    private boolean a(java.lang.String r13, java.lang.String r14, int r15) {
            r12 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r13)
            r0.append(r14)
            java.lang.String r2 = r0.toString()
            int r14 = android.os.Build.VERSION.SDK_INT
            r0 = 0
            r1 = 23
            if (r14 < r1) goto L37
            int r14 = r13.length()
            android.text.TextPaint r1 = r12.getPaint()
            android.text.StaticLayout$Builder r13 = android.text.StaticLayout.Builder.obtain(r13, r0, r14, r1, r15)
            android.text.StaticLayout r13 = r13.build()
            int r14 = r2.length()
            android.text.TextPaint r1 = r12.getPaint()
            android.text.StaticLayout$Builder r14 = android.text.StaticLayout.Builder.obtain(r2, r0, r14, r1, r15)
            android.text.StaticLayout r14 = r14.build()
            goto L5b
        L37:
            android.text.StaticLayout r14 = new android.text.StaticLayout
            android.text.TextPaint r5 = r12.getPaint()
            android.text.Layout$Alignment r7 = android.text.Layout.Alignment.ALIGN_NORMAL
            r8 = 0
            r9 = 0
            r10 = 1
            r3 = r14
            r4 = r13
            r6 = r15
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            android.text.StaticLayout r13 = new android.text.StaticLayout
            android.text.TextPaint r3 = r12.getPaint()
            android.text.Layout$Alignment r5 = android.text.Layout.Alignment.ALIGN_NORMAL
            r6 = 0
            r7 = 0
            r8 = 1
            r1 = r13
            r4 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r11 = r14
            r14 = r13
            r13 = r11
        L5b:
            int r14 = r14.getLineCount()
            int r13 = r13.getLineCount()
            if (r14 <= r13) goto L67
            r13 = 1
            return r13
        L67:
            return r0
    }

    static java.lang.String b(com.kwad.components.core.widget.ComplianceTextView r0) {
            java.lang.String r0 = r0.XX
            return r0
    }

    static java.lang.String c(com.kwad.components.core.widget.ComplianceTextView r0) {
            java.lang.String r0 = r0.XY
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.core.widget.ComplianceTextView r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static java.lang.String e(com.kwad.components.core.widget.ComplianceTextView r0) {
            java.lang.String r0 = r0.XZ
            return r0
    }

    static int f(com.kwad.components.core.widget.ComplianceTextView r0) {
            int r0 = r0.Yd
            return r0
    }

    static boolean g(com.kwad.components.core.widget.ComplianceTextView r0) {
            boolean r0 = r0.Ye
            return r0
    }

    static java.lang.String h(com.kwad.components.core.widget.ComplianceTextView r0) {
            java.lang.String r0 = r0.Ya
            return r0
    }

    private void init(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            int[] r0 = com.kwad.sdk.R.styleable.ksad_ComplianceTextView
            android.content.res.TypedArray r4 = r3.obtainStyledAttributes(r4, r0)
            int r0 = com.kwad.sdk.R.styleable.ksad_ComplianceTextView_ksad_width_in_landscape
            r1 = 154(0x9a, float:2.16E-43)
            int r0 = r4.getDimensionPixelOffset(r0, r1)
            r2.Yb = r0
            android.content.res.Resources r0 = r2.getResources()
            int r1 = com.kwad.sdk.R.color.ksad_default_privacy_link_color
            int r0 = r0.getColor(r1)
            int r1 = com.kwad.sdk.R.styleable.ksad_ComplianceTextView_ksad_privacy_color
            int r0 = r4.getColor(r1, r0)
            r2.Yd = r0
            int r0 = com.kwad.sdk.R.styleable.ksad_ComplianceTextView_ksad_show_clickable_underline
            r1 = 1
            boolean r0 = r4.getBoolean(r0, r1)
            r2.Ye = r0
            android.graphics.drawable.Drawable r0 = r2.getBackground()
            if (r0 != 0) goto L3a
            int r0 = com.kwad.sdk.R.drawable.ksad_compliance_view_bg
            android.graphics.drawable.Drawable r3 = android.support.v4.content.ContextCompat.getDrawable(r3, r0)
            r2.setBackground(r3)
        L3a:
            r4.recycle()
            return
    }

    private void l(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
            r0.<init>()
            java.lang.String r1 = r4.Yc
            r0.append(r1)
            java.lang.String r1 = r4.XZ
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 33
            if (r1 != 0) goto L27
            int r1 = r0.length()
            r0.append(r5)
            com.kwad.components.core.widget.ComplianceTextView$2 r3 = new com.kwad.components.core.widget.ComplianceTextView$2
            r3.<init>(r4, r5)
            int r5 = r0.length()
            r0.setSpan(r3, r1, r5, r2)
        L27:
            java.lang.String r5 = r4.XZ
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L3c
            java.lang.String r5 = r4.Ya
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L3c
            java.lang.String r5 = " | "
            r0.append(r5)
        L3c:
            java.lang.String r5 = r4.Ya
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L57
            int r5 = r0.length()
            r0.append(r6)
            com.kwad.components.core.widget.ComplianceTextView$3 r1 = new com.kwad.components.core.widget.ComplianceTextView$3
            r1.<init>(r4, r6)
            int r6 = r0.length()
            r0.setSpan(r1, r5, r6, r2)
        L57:
            java.lang.String r5 = " "
            r0.append(r5)
            android.text.method.MovementMethod r5 = android.text.method.LinkMovementMethod.getInstance()
            r4.setMovementMethod(r5)
            android.content.Context r5 = r4.getContext()
            int r6 = com.kwad.sdk.R.color.ksad_translucent
            int r5 = android.support.v4.content.ContextCompat.getColor(r5, r6)
            r4.setHighlightColor(r5)
            r4.setText(r0)
            return
    }

    public void setAdTemplate(com.kwad.sdk.core.response.model.AdTemplate r8) {
            r7 = this;
            r7.mAdTemplate = r8
            com.kwad.sdk.core.response.model.AdInfo r8 = com.kwad.sdk.core.response.b.d.cg(r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r8.downloadSafeInfo
            java.lang.String r1 = r1.appName
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r2 = " "
            if (r1 != 0) goto L26
            java.lang.String r1 = "应用名："
            r0.append(r1)
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r8.downloadSafeInfo
            java.lang.String r1 = r1.appName
            r0.append(r1)
            r0.append(r2)
        L26:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r8.downloadSafeInfo
            java.lang.String r1 = r1.appVersion
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3f
            java.lang.String r1 = "版本号："
            r0.append(r1)
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r8.downloadSafeInfo
            java.lang.String r1 = r1.appVersion
            r0.append(r1)
            r0.append(r2)
        L3f:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r8.downloadSafeInfo
            long r3 = r1.packageSize
            r5 = 0
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 <= 0) goto L5d
            java.lang.String r1 = "应用大小："
            r0.append(r1)
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r8.downloadSafeInfo
            long r3 = r1.packageSize
            r1 = 1
            java.lang.String r1 = com.kwad.components.core.t.e.a(r3, r1)
            r0.append(r1)
            r0.append(r2)
        L5d:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r8.downloadSafeInfo
            java.lang.String r1 = r1.corporationName
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L76
            java.lang.String r1 = "开发者："
            r0.append(r1)
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r8.downloadSafeInfo
            java.lang.String r1 = r1.corporationName
            r0.append(r1)
            r0.append(r2)
        L76:
            java.lang.String r0 = r0.toString()
            r7.XW = r0
            java.lang.String r0 = "权限信息"
            r7.XX = r0
            java.lang.String r0 = "隐私政策"
            r7.XY = r0
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r8.downloadSafeInfo
            java.lang.String r0 = r0.appPermissionInfoUrl
            r7.XZ = r0
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r8 = r8.downloadSafeInfo
            java.lang.String r8 = r8.appPrivacyUrl
            r7.Ya = r8
            int r8 = r7.Yb
            if (r8 <= 0) goto Lb3
            android.view.ViewGroup$LayoutParams r8 = r7.getLayoutParams()
            r7.getContext()
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto Lad
            android.content.Context r0 = r7.getContext()
            int r1 = r7.Yb
            float r1 = (float) r1
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            goto Lae
        Lad:
            r0 = -1
        Lae:
            r8.width = r0
            r7.setLayoutParams(r8)
        Lb3:
            com.kwad.components.core.widget.ComplianceTextView$1 r8 = new com.kwad.components.core.widget.ComplianceTextView$1
            r8.<init>(r7)
            r7.post(r8)
            return
    }
}
