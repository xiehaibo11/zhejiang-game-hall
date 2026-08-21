package com.alipay.sdk.m.x;

public class e extends android.widget.LinearLayout {
    public static android.os.Handler m;
    public android.widget.ImageView a;
    public android.widget.TextView b;
    public android.widget.ImageView c;
    public android.widget.ProgressBar d;
    public android.webkit.WebView e;
    public final com.alipay.sdk.m.x.e.e f;
    public com.alipay.sdk.m.x.e.f g;
    public com.alipay.sdk.m.x.e.g h;
    public com.alipay.sdk.m.x.e.h i;
    public final com.alipay.sdk.m.s.a j;
    public android.view.View.OnClickListener k;
    public final float l;

    public class a implements android.view.View.OnClickListener {
        public final com.alipay.sdk.m.x.e a;

        public class a implements java.lang.Runnable {
            public final android.view.View a;
            public final com.alipay.sdk.m.x.e.a b;

            public a(com.alipay.sdk.m.x.e.a r1, android.view.View r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    android.view.View r0 = r2.a
                    r1 = 1
                    r0.setEnabled(r1)
                    return
            }
        }

        public a(com.alipay.sdk.m.x.e r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onClick(android.view.View r6) {
                r5 = this;
                com.alipay.sdk.m.x.e r0 = r5.a
                com.alipay.sdk.m.x.e$h r0 = com.alipay.sdk.m.x.e.a(r0)
                if (r0 == 0) goto L35
                r1 = 0
                r6.setEnabled(r1)
                android.os.Handler r1 = com.alipay.sdk.m.x.e.b()
                com.alipay.sdk.m.x.e$a$a r2 = new com.alipay.sdk.m.x.e$a$a
                r2.<init>(r5, r6)
                r3 = 256(0x100, double:1.265E-321)
                r1.postDelayed(r2, r3)
                com.alipay.sdk.m.x.e r1 = r5.a
                android.widget.ImageView r1 = com.alipay.sdk.m.x.e.b(r1)
                if (r6 != r1) goto L28
                com.alipay.sdk.m.x.e r6 = r5.a
                r0.b(r6)
                goto L35
            L28:
                com.alipay.sdk.m.x.e r1 = r5.a
                android.widget.ImageView r1 = com.alipay.sdk.m.x.e.c(r1)
                if (r6 != r1) goto L35
                com.alipay.sdk.m.x.e r6 = r5.a
                r0.a(r6)
            L35:
                return
        }
    }

    public class b implements android.webkit.DownloadListener {
        public final android.content.Context a;
        public final com.alipay.sdk.m.x.e b;

        public b(com.alipay.sdk.m.x.e r1, android.content.Context r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void onDownloadStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5) {
                r0 = this;
                android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L15
                android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L15
                java.lang.String r3 = "android.intent.action.VIEW"
                r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L15
                r1 = 268435456(0x10000000, float:2.524355E-29)
                r2.setFlags(r1)     // Catch: java.lang.Throwable -> L15
                android.content.Context r1 = r0.a     // Catch: java.lang.Throwable -> L15
                r1.startActivity(r2)     // Catch: java.lang.Throwable -> L15
            L15:
                return
        }
    }

    public class c extends android.webkit.WebChromeClient {
        public final com.alipay.sdk.m.x.e a;

        public c(com.alipay.sdk.m.x.e r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public boolean onJsPrompt(android.webkit.WebView r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, android.webkit.JsPromptResult r11) {
                r6 = this;
                com.alipay.sdk.m.x.e r7 = r6.a
                com.alipay.sdk.m.x.e$f r0 = com.alipay.sdk.m.x.e.f(r7)
                com.alipay.sdk.m.x.e r1 = r6.a
                r2 = r8
                r3 = r9
                r4 = r10
                r5 = r11
                boolean r7 = r0.a(r1, r2, r3, r4, r5)
                return r7
        }

        @Override
        public void onProgressChanged(android.webkit.WebView r2, int r3) {
                r1 = this;
                com.alipay.sdk.m.x.e r2 = r1.a
                com.alipay.sdk.m.x.e$e r2 = com.alipay.sdk.m.x.e.d(r2)
                boolean r2 = com.alipay.sdk.m.x.e.e.b(r2)
                if (r2 == 0) goto L3b
                r2 = 90
                r0 = 4
                if (r3 <= r2) goto L1b
                com.alipay.sdk.m.x.e r2 = r1.a
                android.widget.ProgressBar r2 = com.alipay.sdk.m.x.e.e(r2)
                r2.setVisibility(r0)
                goto L46
            L1b:
                com.alipay.sdk.m.x.e r2 = r1.a
                android.widget.ProgressBar r2 = com.alipay.sdk.m.x.e.e(r2)
                int r2 = r2.getVisibility()
                if (r2 != r0) goto L31
                com.alipay.sdk.m.x.e r2 = r1.a
                android.widget.ProgressBar r2 = com.alipay.sdk.m.x.e.e(r2)
                r0 = 0
                r2.setVisibility(r0)
            L31:
                com.alipay.sdk.m.x.e r2 = r1.a
                android.widget.ProgressBar r2 = com.alipay.sdk.m.x.e.e(r2)
                r2.setProgress(r3)
                goto L46
            L3b:
                com.alipay.sdk.m.x.e r2 = r1.a
                android.widget.ProgressBar r2 = com.alipay.sdk.m.x.e.e(r2)
                r3 = 8
                r2.setVisibility(r3)
            L46:
                return
        }

        @Override
        public void onReceivedTitle(android.webkit.WebView r2, java.lang.String r3) {
                r1 = this;
                com.alipay.sdk.m.x.e r2 = r1.a
                com.alipay.sdk.m.x.e$f r2 = com.alipay.sdk.m.x.e.f(r2)
                com.alipay.sdk.m.x.e r0 = r1.a
                r2.c(r0, r3)
                return
        }
    }

    public class d extends android.webkit.WebViewClient {
        public final com.alipay.sdk.m.x.e a;

        public d(com.alipay.sdk.m.x.e r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onPageFinished(android.webkit.WebView r3, java.lang.String r4) {
                r2 = this;
                com.alipay.sdk.m.x.e r0 = r2.a
                com.alipay.sdk.m.x.e$g r0 = com.alipay.sdk.m.x.e.g(r0)
                com.alipay.sdk.m.x.e r1 = r2.a
                boolean r0 = r0.b(r1, r4)
                if (r0 != 0) goto L11
                super.onPageFinished(r3, r4)
            L11:
                return
        }

        @Override
        public void onPageStarted(android.webkit.WebView r2, java.lang.String r3, android.graphics.Bitmap r4) {
                r1 = this;
                com.alipay.sdk.m.x.e r4 = r1.a
                com.alipay.sdk.m.x.e$g r4 = com.alipay.sdk.m.x.e.g(r4)
                com.alipay.sdk.m.x.e r0 = r1.a
                boolean r4 = r4.d(r0, r3)
                if (r4 != 0) goto L11
                super.onPageFinished(r2, r3)
            L11:
                return
        }

        @Override
        public void onReceivedError(android.webkit.WebView r3, int r4, java.lang.String r5, java.lang.String r6) {
                r2 = this;
                com.alipay.sdk.m.x.e r0 = r2.a
                com.alipay.sdk.m.x.e$g r0 = com.alipay.sdk.m.x.e.g(r0)
                com.alipay.sdk.m.x.e r1 = r2.a
                boolean r0 = r0.a(r1, r4, r5, r6)
                if (r0 != 0) goto L11
                super.onReceivedError(r3, r4, r5, r6)
            L11:
                return
        }

        @Override
        public void onReceivedSslError(android.webkit.WebView r3, android.webkit.SslErrorHandler r4, android.net.http.SslError r5) {
                r2 = this;
                com.alipay.sdk.m.x.e r0 = r2.a
                com.alipay.sdk.m.x.e$g r0 = com.alipay.sdk.m.x.e.g(r0)
                com.alipay.sdk.m.x.e r1 = r2.a
                boolean r0 = r0.a(r1, r4, r5)
                if (r0 != 0) goto L11
                super.onReceivedSslError(r3, r4, r5)
            L11:
                return
        }

        @Override
        public boolean shouldOverrideUrlLoading(android.webkit.WebView r3, java.lang.String r4) {
                r2 = this;
                com.alipay.sdk.m.x.e r0 = r2.a
                com.alipay.sdk.m.x.e$g r0 = com.alipay.sdk.m.x.e.g(r0)
                com.alipay.sdk.m.x.e r1 = r2.a
                boolean r0 = r0.a(r1, r4)
                if (r0 != 0) goto L13
                boolean r3 = super.shouldOverrideUrlLoading(r3, r4)
                return r3
            L13:
                r3 = 1
                return r3
        }
    }

    public static final class e {
        public boolean a;
        public boolean b;

        public e(boolean r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        public static boolean a(com.alipay.sdk.m.x.e.e r0) {
                boolean r0 = r0.a
                return r0
        }

        public static boolean b(com.alipay.sdk.m.x.e.e r0) {
                boolean r0 = r0.b
                return r0
        }
    }

    public interface f {
        boolean a(com.alipay.sdk.m.x.e r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, android.webkit.JsPromptResult r5);

        void c(com.alipay.sdk.m.x.e r1, java.lang.String r2);
    }

    public interface g {
        boolean a(com.alipay.sdk.m.x.e r1, int r2, java.lang.String r3, java.lang.String r4);

        boolean a(com.alipay.sdk.m.x.e r1, android.webkit.SslErrorHandler r2, android.net.http.SslError r3);

        boolean a(com.alipay.sdk.m.x.e r1, java.lang.String r2);

        boolean b(com.alipay.sdk.m.x.e r1, java.lang.String r2);

        boolean d(com.alipay.sdk.m.x.e r1, java.lang.String r2);
    }

    public interface h {
        void a(com.alipay.sdk.m.x.e r1);

        void b(com.alipay.sdk.m.x.e r1);
    }

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.alipay.sdk.m.x.e.m = r0
            return
    }

    public e(android.content.Context r1, android.util.AttributeSet r2, com.alipay.sdk.m.s.a r3, com.alipay.sdk.m.x.e.e r4) {
            r0 = this;
            r0.<init>(r1, r2)
            com.alipay.sdk.m.x.e$a r2 = new com.alipay.sdk.m.x.e$a
            r2.<init>(r0)
            r0.k = r2
            if (r4 != 0) goto L12
            com.alipay.sdk.m.x.e$e r4 = new com.alipay.sdk.m.x.e$e
            r2 = 0
            r4.<init>(r2, r2)
        L12:
            r0.f = r4
            r0.j = r3
            android.content.res.Resources r2 = r1.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            float r2 = r2.density
            r0.l = r2
            r2 = 1
            r0.setOrientation(r2)
            r0.a(r1)
            r0.b(r1)
            r0.c(r1)
            return
    }

    public e(android.content.Context r2, com.alipay.sdk.m.s.a r3, com.alipay.sdk.m.x.e.e r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r3, r4)
            return
    }

    private int a(int r2) {
            r1 = this;
            float r2 = (float) r2
            float r0 = r1.l
            float r2 = r2 * r0
            int r2 = (int) r2
            return r2
    }

    public static com.alipay.sdk.m.x.e.h a(com.alipay.sdk.m.x.e r0) {
            com.alipay.sdk.m.x.e$h r0 = r0.i
            return r0
    }

    private void a(android.content.Context r10) {
            r9 = this;
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            r0.<init>(r10)
            r1 = -218103809(0xfffffffff2ffffff, float:-1.0141204E31)
            r0.setBackgroundColor(r1)
            r1 = 0
            r0.setOrientation(r1)
            r2 = 16
            r0.setGravity(r2)
            com.alipay.sdk.m.x.e$e r2 = r9.f
            boolean r2 = com.alipay.sdk.m.x.e.e.a(r2)
            if (r2 == 0) goto L1e
            r2 = 0
            goto L20
        L1e:
            r2 = 8
        L20:
            r0.setVisibility(r2)
            android.widget.ImageView r2 = new android.widget.ImageView
            r2.<init>(r10)
            r9.a = r2
            android.view.View$OnClickListener r3 = r9.k
            r2.setOnClickListener(r3)
            android.widget.ImageView r2 = r9.a
            android.widget.ImageView$ScaleType r3 = android.widget.ImageView.ScaleType.CENTER
            r2.setScaleType(r3)
            android.widget.ImageView r2 = r9.a
            java.lang.String r3 = "iVBORw0KGgoAAAANSUhEUgAAAEgAAABIBAMAAACnw650AAAAFVBMVEUAAAARjusRkOkQjuoRkeoRj+oQjunya570AAAABnRSTlMAinWeSkk7CjRNAAAAZElEQVRIx+3MOw6AIBQF0YsrMDGx1obaLeGH/S9BQgkJ82rypp4ceTN1ilvyKizmZIAyU7FML0JVYig55BBAfQ2EU4V4CpZJ+2AiSj11C6rUoTannBpRn4W6xNQjLBSI2+TN0w/+3HT2wPClrQAAAABJRU5ErkJggg=="
            android.graphics.drawable.Drawable r3 = com.alipay.sdk.m.u.k.a(r3, r10)
            r2.setImageDrawable(r3)
            android.widget.ImageView r2 = r9.a
            r3 = 12
            int r4 = r9.a(r3)
            int r5 = r9.a(r3)
            r2.setPadding(r4, r1, r5, r1)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r4 = -2
            r2.<init>(r4, r4)
            android.widget.ImageView r5 = r9.a
            r0.addView(r5, r2)
            android.view.View r2 = new android.view.View
            r2.<init>(r10)
            r5 = -2500135(0xffffffffffd9d9d9, float:NaN)
            r2.setBackgroundColor(r5)
            android.widget.LinearLayout$LayoutParams r5 = new android.widget.LinearLayout$LayoutParams
            r6 = 1
            int r7 = r9.a(r6)
            r8 = 25
            int r8 = r9.a(r8)
            r5.<init>(r7, r8)
            r0.addView(r2, r5)
            android.widget.TextView r2 = new android.widget.TextView
            r2.<init>(r10)
            r9.b = r2
            r5 = -15658735(0xffffffffff111111, float:-1.9282667E38)
            r2.setTextColor(r5)
            android.widget.TextView r2 = r9.b
            r5 = 1099431936(0x41880000, float:17.0)
            r2.setTextSize(r5)
            android.widget.TextView r2 = r9.b
            r2.setMaxLines(r6)
            android.widget.TextView r2 = r9.b
            android.text.TextUtils$TruncateAt r5 = android.text.TextUtils.TruncateAt.END
            r2.setEllipsize(r5)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r5 = -1
            r2.<init>(r5, r4)
            r6 = 17
            int r6 = r9.a(r6)
            r2.setMargins(r6, r1, r1, r1)
            r6 = 1065353216(0x3f800000, float:1.0)
            r2.weight = r6
            android.widget.TextView r6 = r9.b
            r0.addView(r6, r2)
            android.widget.ImageView r2 = new android.widget.ImageView
            r2.<init>(r10)
            r9.c = r2
            android.view.View$OnClickListener r6 = r9.k
            r2.setOnClickListener(r6)
            android.widget.ImageView r2 = r9.c
            android.widget.ImageView$ScaleType r6 = android.widget.ImageView.ScaleType.CENTER
            r2.setScaleType(r6)
            android.widget.ImageView r2 = r9.c
            java.lang.String r6 = "iVBORw0KGgoAAAANSUhEUgAAAEgAAABICAMAAABiM0N1AAAAmVBMVEUAAAARj+oQjuoRkOsVk/AQj+oRjuoQj+oSkO3///8Rj+kRj+oQkOsTk+whm/8Qj+oRj+oQj+oSkus2p/8QjuoQj+oQj+oQj+oQj+oRj+oTkuwRj+oQj+oRj+oRj+oSkOsSkO0ZlfMbk+8XnPgQj+oRj+oQj+oQj+sSj+sRkOoSkescqv8Rj+oQj+oSj+sXku4Rj+kQjuoQjumXGBCVAAAAMnRSTlMAxPtPF8ry7CoB9npbGwe6lm0wBODazb1+aSejm5GEYjcTDwvls6uJc0g/CdWfRCF20AXrk5QAAAJqSURBVFjD7ZfXmpswEIUFphmDCxi3talurGvm/R8uYSDe5FNBwlzsxf6XmvFBmiaZ/PCdWDk9CWn61OhHCMAaXfoRAth7wx6EkMXnWyrho4yg4bDpquI8Jy78Q7eoj9cmUFijsaLM0JsD9CD0uQAa9aNdPuCFvbA7B9t/Becap8Pu6Q/2jcyH81VHc/WCHDQZXwbvtUhQ61iDlqadncU6Rp31yGkZIzOAu7AjtPpYGREzq/pY5DRFHS1siyO6HfkOKTrMjdb2qevV4zosK7MbkFY2LmYk55hL6juCIFWMOI2KGzblmho3b18EIbxL1hs6r5m2Q2WaEElwS3NW4xh6ZZJuzTtUsBKT4G0h35s4y1mNgkNoS6TZ8SKBXTZQGBNYdPTozXGYKoyLAmOasttjThT4xT6Ch+2qIjRhV9Ja3NC87Kyo5We1vCNEMW1T+j1VLZ9UhE54Q1DL52r5piJ0YxdegvWlHOwTu76uKkJX+MOTHno4YFSEbHYdhViojsLrCTg/MKnhKWaEYzvkZFM8aOkPH7iTSvoFZKD7jGEJbarkRaxQyOeWvGVIbsji152jK7TbDgRzcIuz7SGj89BFU8d30TqWeDtrILxyTkD1IXfvmHseuU3lVHDz607bw0f3xDqejm5ncd0j8VDwfoibRy8RcgTkWHBvocbDbMlJsQAkGnAOHwGy90kLmQY1Wkob07/GaCNRIzdoWK7/+6y/XkLDJCcynOGFuUrKIMuCMonNr9VpSOQoIxBgJ0SacGbzZNy4ICrkscvU2fpElYz+U3sd+aQThjfVmjNa5i15kLcojM3Gz8kP34jf4VaV3X55gNEAAAAASUVORK5CYII="
            android.graphics.drawable.Drawable r10 = com.alipay.sdk.m.u.k.a(r6, r10)
            r2.setImageDrawable(r10)
            android.widget.ImageView r10 = r9.c
            int r2 = r9.a(r3)
            int r3 = r9.a(r3)
            r10.setPadding(r2, r1, r3, r1)
            android.widget.LinearLayout$LayoutParams r10 = new android.widget.LinearLayout$LayoutParams
            r10.<init>(r4, r4)
            android.widget.ImageView r1 = r9.c
            r0.addView(r1, r10)
            android.widget.LinearLayout$LayoutParams r10 = new android.widget.LinearLayout$LayoutParams
            r1 = 48
            int r1 = r9.a(r1)
            r10.<init>(r5, r1)
            r9.addView(r0, r10)
            return
    }

    public static android.os.Handler b() {
            android.os.Handler r0 = com.alipay.sdk.m.x.e.m
            return r0
    }

    public static android.widget.ImageView b(com.alipay.sdk.m.x.e r0) {
            android.widget.ImageView r0 = r0.a
            return r0
    }

    private void b(android.content.Context r4) {
            r3 = this;
            android.widget.ProgressBar r0 = new android.widget.ProgressBar
            r1 = 0
            r2 = 16973855(0x103001f, float:2.4060987E-38)
            r0.<init>(r4, r1, r2)
            r3.d = r0
            android.content.res.Resources r4 = r4.getResources()
            r1 = 17301612(0x108006c, float:2.4979558E-38)
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r1)
            r0.setProgressDrawable(r4)
            android.widget.ProgressBar r4 = r3.d
            r0 = 100
            r4.setMax(r0)
            android.widget.ProgressBar r4 = r3.d
            r0 = -218103809(0xfffffffff2ffffff, float:-1.0141204E31)
            r4.setBackgroundColor(r0)
            android.widget.LinearLayout$LayoutParams r4 = new android.widget.LinearLayout$LayoutParams
            r0 = 2
            int r0 = r3.a(r0)
            r1 = -1
            r4.<init>(r1, r0)
            android.widget.ProgressBar r0 = r3.d
            r3.addView(r0, r4)
            return
    }

    public static android.widget.ImageView c(com.alipay.sdk.m.x.e r0) {
            android.widget.ImageView r0 = r0.c
            return r0
    }

    private void c(android.content.Context r9) {
            r8 = this;
            java.lang.String r0 = "accessibilityTraversal"
            java.lang.String r1 = "accessibility"
            java.lang.String r2 = "searchBoxJavaBridge_"
            android.webkit.WebView r3 = new android.webkit.WebView
            r3.<init>(r9)
            r8.e = r3
            r4 = 1
            r3.setVerticalScrollbarOverlay(r4)
            android.webkit.WebView r3 = r8.e
            r8.a(r3, r9)
            android.webkit.WebView r3 = r8.e
            android.webkit.WebSettings r3 = r3.getSettings()
            android.webkit.WebSettings$RenderPriority r5 = android.webkit.WebSettings.RenderPriority.HIGH
            r3.setRenderPriority(r5)
            r3.setSupportMultipleWindows(r4)
            r3.setUseWideViewPort(r4)
            r5 = 5242880(0x500000, double:2.590327E-317)
            r3.setAppCacheMaxSize(r5)
            java.io.File r5 = r9.getCacheDir()
            java.lang.String r5 = r5.getAbsolutePath()
            r3.setAppCachePath(r5)
            r5 = 0
            r3.setAllowFileAccess(r5)
            android.webkit.WebSettings$TextSize r6 = android.webkit.WebSettings.TextSize.NORMAL
            r3.setTextSize(r6)
            int r6 = android.os.Build.VERSION.SDK_INT
            r7 = 16
            if (r6 < r7) goto L4d
            r3.setAllowFileAccessFromFileURLs(r5)
            r3.setAllowUniversalAccessFromFileURLs(r5)
        L4d:
            r3.setAppCacheEnabled(r4)
            r3.setJavaScriptEnabled(r4)
            r3.setSavePassword(r5)
            r3.setJavaScriptCanOpenWindowsAutomatically(r4)
            r3.setCacheMode(r4)
            r3.setDomStorageEnabled(r4)
            r3.setAllowContentAccess(r5)
            android.webkit.WebView r3 = r8.e
            r3.setVerticalScrollbarOverlay(r4)
            android.webkit.WebView r3 = r8.e
            com.alipay.sdk.m.x.e$b r6 = new com.alipay.sdk.m.x.e$b
            r6.<init>(r8, r9)
            r3.setDownloadListener(r6)
            android.webkit.WebView r9 = r8.e     // Catch: java.lang.Exception -> L81
            r9.removeJavascriptInterface(r2)     // Catch: java.lang.Exception -> L81
            android.webkit.WebView r9 = r8.e     // Catch: java.lang.Exception -> L81
            r9.removeJavascriptInterface(r1)     // Catch: java.lang.Exception -> L81
            android.webkit.WebView r9 = r8.e     // Catch: java.lang.Exception -> L81
            r9.removeJavascriptInterface(r0)     // Catch: java.lang.Exception -> L81
            goto Lac
        L81:
            android.webkit.WebView r9 = r8.e     // Catch: java.lang.Throwable -> Lac
            java.lang.Class r9 = r9.getClass()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = "removeJavascriptInterface"
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> Lac
            java.lang.reflect.Method r9 = r9.getMethod(r3, r6)     // Catch: java.lang.Throwable -> Lac
            if (r9 == 0) goto Lac
            android.webkit.WebView r3 = r8.e     // Catch: java.lang.Throwable -> Lac
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Lac
            r6[r5] = r2     // Catch: java.lang.Throwable -> Lac
            r9.invoke(r3, r6)     // Catch: java.lang.Throwable -> Lac
            android.webkit.WebView r2 = r8.e     // Catch: java.lang.Throwable -> Lac
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Lac
            r3[r5] = r1     // Catch: java.lang.Throwable -> Lac
            r9.invoke(r2, r3)     // Catch: java.lang.Throwable -> Lac
            android.webkit.WebView r1 = r8.e     // Catch: java.lang.Throwable -> Lac
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Lac
            r2[r5] = r0     // Catch: java.lang.Throwable -> Lac
            r9.invoke(r1, r2)     // Catch: java.lang.Throwable -> Lac
        Lac:
            android.webkit.WebView r9 = r8.e
            com.alipay.sdk.m.x.c.a(r9)
            android.widget.LinearLayout$LayoutParams r9 = new android.widget.LinearLayout$LayoutParams
            r0 = -1
            r9.<init>(r0, r0)
            android.webkit.WebView r0 = r8.e
            r8.addView(r0, r9)
            return
    }

    public static com.alipay.sdk.m.x.e.e d(com.alipay.sdk.m.x.e r0) {
            com.alipay.sdk.m.x.e$e r0 = r0.f
            return r0
    }

    public static android.widget.ProgressBar e(com.alipay.sdk.m.x.e r0) {
            android.widget.ProgressBar r0 = r0.d
            return r0
    }

    public static com.alipay.sdk.m.x.e.f f(com.alipay.sdk.m.x.e r0) {
            com.alipay.sdk.m.x.e$f r0 = r0.g
            return r0
    }

    public static com.alipay.sdk.m.x.e.g g(com.alipay.sdk.m.x.e r0) {
            com.alipay.sdk.m.x.e$g r0 = r0.h
            return r0
    }

    public void a() {
            r2 = this;
            r2.removeAllViews()
            android.webkit.WebView r0 = r2.e
            r0.removeAllViews()
            android.webkit.WebView r0 = r2.e
            r1 = 0
            r0.setWebViewClient(r1)
            android.webkit.WebView r0 = r2.e
            r0.setWebChromeClient(r1)
            android.webkit.WebView r0 = r2.e
            r0.destroy()
            return
    }

    public void a(android.webkit.WebView r3, android.content.Context r4) {
            r2 = this;
            android.webkit.WebSettings r0 = r3.getSettings()
            java.lang.String r0 = r0.getUserAgentString()
            android.webkit.WebSettings r3 = r3.getSettings()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r4 = com.alipay.sdk.m.u.n.g(r4)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r3.setUserAgentString(r4)
            return
    }

    public void a(java.lang.String r2) {
            r1 = this;
            android.webkit.WebView r0 = r1.e
            r0.loadUrl(r2)
            android.webkit.WebView r2 = r1.e
            com.alipay.sdk.m.x.c.a(r2)
            return
    }

    public void a(java.lang.String r2, byte[] r3) {
            r1 = this;
            android.webkit.WebView r0 = r1.e
            r0.postUrl(r2, r3)
            return
    }

    public android.widget.ImageView getBackButton() {
            r1 = this;
            android.widget.ImageView r0 = r1.a
            return r0
    }

    public android.widget.ProgressBar getProgressbar() {
            r1 = this;
            android.widget.ProgressBar r0 = r1.d
            return r0
    }

    public android.widget.ImageView getRefreshButton() {
            r1 = this;
            android.widget.ImageView r0 = r1.c
            return r0
    }

    public android.widget.TextView getTitle() {
            r1 = this;
            android.widget.TextView r0 = r1.b
            return r0
    }

    public java.lang.String getUrl() {
            r1 = this;
            android.webkit.WebView r0 = r1.e
            java.lang.String r0 = r0.getUrl()
            return r0
    }

    public android.webkit.WebView getWebView() {
            r1 = this;
            android.webkit.WebView r0 = r1.e
            return r0
    }

    public void setChromeProxy(com.alipay.sdk.m.x.e.f r2) {
            r1 = this;
            r1.g = r2
            if (r2 != 0) goto Lb
            android.webkit.WebView r2 = r1.e
            r0 = 0
            r2.setWebChromeClient(r0)
            goto L15
        Lb:
            android.webkit.WebView r2 = r1.e
            com.alipay.sdk.m.x.e$c r0 = new com.alipay.sdk.m.x.e$c
            r0.<init>(r1)
            r2.setWebChromeClient(r0)
        L15:
            return
    }

    public void setWebClientProxy(com.alipay.sdk.m.x.e.g r2) {
            r1 = this;
            r1.h = r2
            if (r2 != 0) goto Lb
            android.webkit.WebView r2 = r1.e
            r0 = 0
            r2.setWebViewClient(r0)
            goto L15
        Lb:
            android.webkit.WebView r2 = r1.e
            com.alipay.sdk.m.x.e$d r0 = new com.alipay.sdk.m.x.e$d
            r0.<init>(r1)
            r2.setWebViewClient(r0)
        L15:
            return
    }

    public void setWebEventProxy(com.alipay.sdk.m.x.e.h r1) {
            r0 = this;
            r0.i = r1
            return
    }
}
