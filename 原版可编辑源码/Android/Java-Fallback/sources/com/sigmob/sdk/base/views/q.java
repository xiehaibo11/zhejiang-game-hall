package com.sigmob.sdk.base.views;

public class q extends android.app.Dialog implements android.content.DialogInterface.OnDismissListener, android.content.DialogInterface.OnShowListener {
    private com.sigmob.sdk.base.views.q.b a;
    private java.util.Map<java.lang.String, java.lang.String> b;
    private android.content.Context c;
    private android.view.Window d;
    private int e;
    private int f;
    private int g;
    private int h;
    private com.sigmob.sdk.base.views.i i;
    private com.sigmob.sdk.base.models.BaseAdUnit j;
    private boolean k;
    private android.widget.ImageView l;
    private java.lang.String m;
    private java.io.File n;



    static class a {
        private java.util.Map<java.lang.String, java.lang.String> a;

        public a(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @android.webkit.JavascriptInterface
        public java.lang.String getPrivacyInfo() {
                r4 = this;
                java.util.Map<java.lang.String, java.lang.String> r0 = r4.a     // Catch: java.lang.Throwable -> L3a
                if (r0 == 0) goto L3e
                java.util.Map<java.lang.String, java.lang.String> r0 = r4.a     // Catch: java.lang.Throwable -> L3a
                int r0 = r0.size()     // Catch: java.lang.Throwable -> L3a
                if (r0 <= 0) goto L3e
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3a
                r0.<init>()     // Catch: java.lang.Throwable -> L3a
                java.util.Map<java.lang.String, java.lang.String> r1 = r4.a     // Catch: java.lang.Throwable -> L3a
                java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L3a
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L3a
            L1b:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L3a
                if (r2 == 0) goto L35
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L3a
                java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L3a
                java.lang.Object r3 = r2.getKey()     // Catch: java.lang.Throwable -> L3a
                java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L3a
                java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L3a
                r0.put(r3, r2)     // Catch: java.lang.Throwable -> L3a
                goto L1b
            L35:
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3a
                return r0
            L3a:
                r0 = move-exception
                r0.printStackTrace()
            L3e:
                r0 = 0
                return r0
        }
    }

    public interface b {
        void a();

        void a(java.lang.String r1, java.lang.String r2);

        void b();
    }

    public q(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r1 = this;
            int r0 = com.sigmob.sdk.base.d.e()
            r1.<init>(r2, r0)
            r0 = 0
            r1.d = r0
            r0 = 0
            r1.k = r0
            java.lang.String r0 = ""
            r1.m = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.c = r2
            r1.j = r3
            com.sigmob.sdk.base.views.i r2 = r1.b()
            r1.i = r2
            android.widget.ImageView r2 = r1.d()
            r1.l = r2
            android.content.Context r2 = r1.c
            android.content.res.Resources r2 = r2.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.widthPixels
            r1.g = r2
            android.content.Context r2 = r1.c
            android.content.res.Resources r2 = r2.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.heightPixels
            r1.h = r2
            int r3 = r1.g
            if (r2 <= r3) goto L4e
            int r2 = r2 * 1
            int r2 = r2 / 2
            r1.e = r2
            r1.f = r3
            goto L56
        L4e:
            int r3 = r2 * 5
            int r3 = r3 / 6
            r1.e = r3
            r1.f = r2
        L56:
            return
    }

    static com.sigmob.sdk.base.views.q.b a(com.sigmob.sdk.base.views.q r0) {
            com.sigmob.sdk.base.views.q$b r0 = r0.a
            return r0
    }

    static com.sigmob.sdk.base.models.BaseAdUnit b(com.sigmob.sdk.base.views.q r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.j
            return r0
    }

    private android.widget.ImageView d() {
            r2 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r2.c
            r0.<init>(r1)
            r2.l = r0
            com.sigmob.sdk.base.views.o r1 = com.sigmob.sdk.base.views.o.e
            android.graphics.Bitmap r1 = r1.a()
            r0.setImageBitmap(r1)
            android.widget.ImageView r0 = r2.l
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP
            r0.setScaleType(r1)
            android.widget.ImageView r0 = r2.l
            r1 = 127(0x7f, float:1.78E-43)
            r0.setImageAlpha(r1)
            android.widget.ImageView r0 = r2.l
            r1 = 1
            r0.setClickable(r1)
            android.widget.ImageView r0 = r2.l
            com.sigmob.sdk.base.views.q$1 r1 = new com.sigmob.sdk.base.views.q$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.l
            return r0
    }

    private void e() {
            r2 = this;
            android.view.Window r0 = r2.getWindow()
            r2.d = r0
            if (r0 == 0) goto L35
            r1 = 80
            r0.setGravity(r1)
            int r0 = com.sigmob.sdk.base.d.f()
            if (r0 == 0) goto L18
            android.view.Window r1 = r2.d
            r1.setWindowAnimations(r0)
        L18:
            android.view.Window r0 = r2.d
            android.view.View r0 = r0.getDecorView()
            r1 = 0
            r0.setPadding(r1, r1, r1, r1)
            android.view.Window r0 = r2.d
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            int r1 = r2.f
            r0.width = r1
            int r1 = r2.e
            r0.height = r1
            android.view.Window r1 = r2.d
            r1.setAttributes(r0)
        L35:
            return
    }

    public void a(com.sigmob.sdk.base.views.q.b r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.k
            return r0
    }

    public com.sigmob.sdk.base.views.i b() {
            r5 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r5.j
            if (r0 == 0) goto L5e
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r0.getMaterial()
            if (r0 == 0) goto L59
            com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r0.ad_privacy
            if (r1 == 0) goto L59
            com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r0.ad_privacy
            java.lang.String r1 = r0.privacy_info_url
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1c
            java.lang.String r1 = r0.privacy_info_url
            r5.m = r1
        L1c:
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.privacy_template_info
            if (r1 == 0) goto L2c
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.privacy_template_info
            int r1 = r1.size()
            if (r1 <= 0) goto L2c
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.privacy_template_info
            r5.b = r1
        L2c:
            java.lang.String r1 = r0.privacy_template_url
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L5e
            java.lang.String r0 = r0.privacy_template_url
            java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r0)
            java.io.File r1 = new java.io.File
            java.lang.String r2 = com.sigmob.sdk.base.utils.b.b
            java.io.File r2 = com.sigmob.sdk.base.utils.b.b(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = ".html"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r1.<init>(r2, r0)
            r5.n = r1
            goto L5e
        L59:
            java.lang.String r0 = "ad_privacy is null"
            com.czhj.sdk.logger.SigmobLog.i(r0)
        L5e:
            java.lang.String r0 = r5.m
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            r2 = 0
            r3 = 1
            if (r0 != 0) goto L6c
        L69:
            r5.k = r3
            goto L7b
        L6c:
            java.io.File r0 = r5.n
            if (r0 == 0) goto Le4
            boolean r0 = r0.exists()
            if (r0 == 0) goto Le4
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.b
            if (r0 == 0) goto Le4
            goto L69
        L7b:
            com.sigmob.sdk.base.views.i r0 = new com.sigmob.sdk.base.views.i
            android.content.Context r4 = r5.c
            r0.<init>(r4)
            r5.i = r0
            r0.a(r3)
            com.sigmob.sdk.base.views.i r0 = r5.i
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r5.j
            r0.setAdUnit(r3)
            com.sigmob.sdk.base.views.i r0 = r5.i
            r0.a(r1)
            com.sigmob.sdk.base.views.i r0 = r5.i
            com.sigmob.sdk.base.views.q$2 r1 = new com.sigmob.sdk.base.views.q$2
            r1.<init>(r5)
            r0.setWebViewClient(r1)
            java.lang.String r0 = r5.m
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lad
            com.sigmob.sdk.base.views.i r0 = r5.i
            java.lang.String r1 = r5.m
        La9:
            r0.loadUrl(r1)
            goto Le1
        Lad:
            java.io.File r0 = r5.n
            if (r0 == 0) goto Ldf
            boolean r0 = r0.exists()
            if (r0 == 0) goto Ldf
            com.sigmob.sdk.base.views.i r0 = r5.i
            com.sigmob.sdk.base.views.q$a r1 = new com.sigmob.sdk.base.views.q$a
            java.util.Map<java.lang.String, java.lang.String> r2 = r5.b
            r1.<init>(r2)
            java.lang.String r2 = "sigPrivacy"
            r0.addJavascriptInterface(r1, r2)
            com.sigmob.sdk.base.views.i r0 = r5.i
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "file://"
            r1.append(r2)
            java.io.File r2 = r5.n
            java.lang.String r2 = r2.getAbsolutePath()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            goto La9
        Ldf:
            r5.k = r2
        Le1:
            com.sigmob.sdk.base.views.i r0 = r5.i
            return r0
        Le4:
            r5.k = r2
            return r1
    }

    public void c() {
            r2 = this;
            com.sigmob.sdk.base.views.i r0 = r2.i
            r1 = 0
            if (r0 == 0) goto La
            r0.destroy()
            r2.i = r1
        La:
            android.widget.ImageView r0 = r2.l
            if (r0 == 0) goto L13
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r0)
            r2.l = r1
        L13:
            android.content.Context r0 = r2.c
            if (r0 == 0) goto L19
            r2.c = r1
        L19:
            com.sigmob.sdk.base.views.q$b r0 = r2.a
            if (r0 == 0) goto L1f
            r2.a = r1
        L1f:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r9) {
            r8 = this;
            super.onCreate(r9)
            android.widget.RelativeLayout r9 = new android.widget.RelativeLayout
            android.content.Context r0 = r8.getContext()
            r9.<init>(r0)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r9.setLayoutParams(r0)
            java.lang.String r0 = r8.m
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r2 = 2
            r3 = 1
            r4 = 0
            if (r0 != 0) goto L5d
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r0.setColor(r1)
            r5 = 1101004800(0x41a00000, float:20.0)
            android.content.Context r6 = r8.c
            int r5 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r5, r6)
            r6 = 8
            float[] r6 = new float[r6]
            float r5 = (float) r5
            r6[r4] = r5
            r6[r3] = r5
            r6[r2] = r5
            r7 = 3
            r6[r7] = r5
            r5 = 4
            r7 = 0
            r6[r5] = r7
            r5 = 5
            r6[r5] = r7
            r5 = 6
            r6[r5] = r7
            r5 = 7
            r6[r5] = r7
            r0.setCornerRadii(r6)
            r5 = 1092616192(0x41200000, float:10.0)
            android.content.Context r6 = r8.c
            int r5 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r5, r6)
            r9.setPadding(r5, r5, r5, r5)
            r9.setBackground(r0)
            goto L60
        L5d:
            r9.setBackgroundColor(r4)
        L60:
            r8.setContentView(r9)
            r8.setOnShowListener(r8)
            r8.setOnDismissListener(r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = "FourElementsDialog onCreate:"
            r0.append(r5)
            int r5 = r8.f
            r0.append(r5)
            java.lang.String r5 = ":"
            r0.append(r5)
            int r5 = r8.e
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            com.sigmob.sdk.base.views.i r0 = r8.i
            if (r0 == 0) goto L97
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r1, r1)
            com.sigmob.sdk.base.views.i r1 = r8.i
            r9.addView(r1, r0)
        L97:
            android.widget.ImageView r0 = r8.l
            if (r0 == 0) goto Lc3
            java.lang.String r0 = r8.m
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc3
            r0 = 1099956224(0x41900000, float:18.0)
            android.content.Context r1 = r8.c
            int r0 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r1.<init>(r0, r0)
            r5 = 10
            r1.addRule(r5)
            r5 = 11
            r1.addRule(r5)
            int r0 = r0 / r2
            r1.setMargins(r4, r0, r0, r4)
            android.widget.ImageView r0 = r8.l
            r9.addView(r0, r1)
        Lc3:
            r8.setCanceledOnTouchOutside(r3)
            r8.setCancelable(r3)
            r8.e()
            return
    }

    @Override
    public void onDismiss(android.content.DialogInterface r1) {
            r0 = this;
            java.lang.String r1 = "FourElementsDialog  onDismiss"
            com.czhj.sdk.logger.SigmobLog.i(r1)
            com.sigmob.sdk.base.views.q$b r1 = r0.a
            if (r1 == 0) goto Lc
            r1.a()
        Lc:
            return
    }

    @Override
    public void onShow(android.content.DialogInterface r1) {
            r0 = this;
            java.lang.String r1 = "FourElementsDialog  onShow"
            com.czhj.sdk.logger.SigmobLog.i(r1)
            com.sigmob.sdk.base.views.q$b r1 = r0.a
            if (r1 == 0) goto Lc
            r1.b()
        Lc:
            return
    }
}
