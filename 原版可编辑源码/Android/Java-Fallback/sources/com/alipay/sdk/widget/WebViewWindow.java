package com.alipay.sdk.widget;

public class WebViewWindow extends android.widget.LinearLayout {
    private static android.os.Handler f;
    private android.widget.ImageView a;
    private android.widget.TextView b;
    private android.widget.ImageView c;
    private android.widget.ProgressBar d;
    private android.webkit.WebView e;
    private com.alipay.sdk.widget.WebViewWindow.a g;
    private com.alipay.sdk.widget.WebViewWindow.b h;
    private com.alipay.sdk.widget.WebViewWindow.c i;
    private android.view.View.OnClickListener j;
    private final float k;

    public interface a {
        void a(com.alipay.sdk.widget.WebViewWindow r1, java.lang.String r2);

        boolean a(com.alipay.sdk.widget.WebViewWindow r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, android.webkit.JsPromptResult r5);
    }

    public interface b {
        boolean a(com.alipay.sdk.widget.WebViewWindow r1, int r2, java.lang.String r3, java.lang.String r4);

        boolean a(com.alipay.sdk.widget.WebViewWindow r1, android.webkit.SslErrorHandler r2, android.net.http.SslError r3);

        boolean b(com.alipay.sdk.widget.WebViewWindow r1, java.lang.String r2);

        boolean c(com.alipay.sdk.widget.WebViewWindow r1, java.lang.String r2);
    }

    public interface c {
        void a(com.alipay.sdk.widget.WebViewWindow r1);

        void b(com.alipay.sdk.widget.WebViewWindow r1);
    }

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.alipay.sdk.widget.WebViewWindow.f = r0
            return
    }

    public WebViewWindow(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public WebViewWindow(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.alipay.sdk.widget.q r2 = new com.alipay.sdk.widget.q
            r2.<init>(r0)
            r0.j = r2
            android.content.res.Resources r2 = r1.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            float r2 = r2.density
            r0.k = r2
            r2 = 1
            r0.setOrientation(r2)
            r0.a(r1)
            r0.b(r1)
            r0.c(r1)
            return
    }

    private int a(int r2) {
            r1 = this;
            float r2 = (float) r2
            float r0 = r1.k
            float r2 = r2 * r0
            int r2 = (int) r2
            return r2
    }

    static com.alipay.sdk.widget.WebViewWindow.c a(com.alipay.sdk.widget.WebViewWindow r0) {
            com.alipay.sdk.widget.WebViewWindow$c r0 = r0.i
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
            android.widget.ImageView r2 = new android.widget.ImageView
            r2.<init>(r10)
            r9.a = r2
            android.widget.ImageView r2 = r9.a
            android.view.View$OnClickListener r3 = r9.j
            r2.setOnClickListener(r3)
            android.widget.ImageView r2 = r9.a
            android.widget.ImageView$ScaleType r3 = android.widget.ImageView.ScaleType.CENTER
            r2.setScaleType(r3)
            android.widget.ImageView r2 = r9.a
            java.lang.String r3 = "iVBORw0KGgoAAAANSUhEUgAAAEgAAABIBAMAAACnw650AAAAFVBMVEUAAAARjusRkOkQjuoRkeoRj+oQjunya570AAAABnRSTlMAinWeSkk7CjRNAAAAZElEQVRIx+3MOw6AIBQF0YsrMDGx1obaLeGH/S9BQgkJ82rypp4ceTN1ilvyKizmZIAyU7FML0JVYig55BBAfQ2EU4V4CpZJ+2AiSj11C6rUoTannBpRn4W6xNQjLBSI2+TN0w/+3HT2wPClrQAAAABJRU5ErkJggg=="
            android.graphics.drawable.Drawable r3 = com.alipay.sdk.util.k.a(r3, r10)
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
            android.widget.TextView r2 = r9.b
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
            android.widget.ImageView r2 = r9.c
            android.view.View$OnClickListener r6 = r9.j
            r2.setOnClickListener(r6)
            android.widget.ImageView r2 = r9.c
            android.widget.ImageView$ScaleType r6 = android.widget.ImageView.ScaleType.CENTER
            r2.setScaleType(r6)
            android.widget.ImageView r2 = r9.c
            java.lang.String r6 = "iVBORw0KGgoAAAANSUhEUgAAAEgAAABICAMAAABiM0N1AAAAmVBMVEUAAAARj+oQjuoRkOsVk/AQj+oRjuoQj+oSkO3///8Rj+kRj+oQkOsTk+whm/8Qj+oRj+oQj+oSkus2p/8QjuoQj+oQj+oQj+oQj+oRj+oTkuwRj+oQj+oRj+oRj+oSkOsSkO0ZlfMbk+8XnPgQj+oRj+oQj+oQj+sSj+sRkOoSkescqv8Rj+oQj+oSj+sXku4Rj+kQjuoQjumXGBCVAAAAMnRSTlMAxPtPF8ry7CoB9npbGwe6lm0wBODazb1+aSejm5GEYjcTDwvls6uJc0g/CdWfRCF20AXrk5QAAAJqSURBVFjD7ZfXmpswEIUFphmDCxi3talurGvm/R8uYSDe5FNBwlzsxf6XmvFBmiaZ/PCdWDk9CWn61OhHCMAaXfoRAth7wx6EkMXnWyrho4yg4bDpquI8Jy78Q7eoj9cmUFijsaLM0JsD9CD0uQAa9aNdPuCFvbA7B9t/Becap8Pu6Q/2jcyH81VHc/WCHDQZXwbvtUhQ61iDlqadncU6Rp31yGkZIzOAu7AjtPpYGREzq/pY5DRFHS1siyO6HfkOKTrMjdb2qevV4zosK7MbkFY2LmYk55hL6juCIFWMOI2KGzblmho3b18EIbxL1hs6r5m2Q2WaEElwS3NW4xh6ZZJuzTtUsBKT4G0h35s4y1mNgkNoS6TZ8SKBXTZQGBNYdPTozXGYKoyLAmOasttjThT4xT6Ch+2qIjRhV9Ja3NC87Kyo5We1vCNEMW1T+j1VLZ9UhE54Q1DL52r5piJ0YxdegvWlHOwTu76uKkJX+MOTHno4YFSEbHYdhViojsLrCTg/MKnhKWaEYzvkZFM8aOkPH7iTSvoFZKD7jGEJbarkRaxQyOeWvGVIbsji152jK7TbDgRzcIuz7SGj89BFU8d30TqWeDtrILxyTkD1IXfvmHseuU3lVHDz607bw0f3xDqejm5ncd0j8VDwfoibRy8RcgTkWHBvocbDbMlJsQAkGnAOHwGy90kLmQY1Wkob07/GaCNRIzdoWK7/+6y/XkLDJCcynOGFuUrKIMuCMonNr9VpSOQoIxBgJ0SacGbzZNy4ICrkscvU2fpElYz+U3sd+aQThjfVmjNa5i15kLcojM3Gz8kP34jf4VaV3X55gNEAAAAASUVORK5CYII="
            android.graphics.drawable.Drawable r10 = com.alipay.sdk.util.k.a(r6, r10)
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

    static android.os.Handler b() {
            android.os.Handler r0 = com.alipay.sdk.widget.WebViewWindow.f
            return r0
    }

    static android.widget.ImageView b(com.alipay.sdk.widget.WebViewWindow r0) {
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
            android.widget.ProgressBar r0 = r3.d
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

    static android.widget.ImageView c(com.alipay.sdk.widget.WebViewWindow r0) {
            android.widget.ImageView r0 = r0.c
            return r0
    }

    private void c(android.content.Context r5) {
            r4 = this;
            android.webkit.WebView r0 = new android.webkit.WebView
            r0.<init>(r5)
            r4.e = r0
            android.webkit.WebView r0 = r4.e
            r1 = 1
            r0.setVerticalScrollbarOverlay(r1)
            android.webkit.WebView r0 = r4.e
            r4.a(r0, r5)
            android.webkit.WebView r0 = r4.e
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setUseWideViewPort(r1)
            r2 = 5242880(0x500000, double:2.590327E-317)
            r0.setAppCacheMaxSize(r2)
            java.io.File r5 = r5.getCacheDir()
            java.lang.String r5 = r5.getAbsolutePath()
            r0.setAppCachePath(r5)
            r0.setAllowFileAccess(r1)
            r0.setAppCacheEnabled(r1)
            r0.setJavaScriptEnabled(r1)
            r5 = -1
            r0.setCacheMode(r5)
            r0.setSupportMultipleWindows(r1)
            r0.setJavaScriptEnabled(r1)
            r2 = 0
            r0.setSavePassword(r2)
            r0.setJavaScriptCanOpenWindowsAutomatically(r1)
            r0.setDomStorageEnabled(r1)
            android.webkit.WebView r0 = r4.e     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = "searchBoxJavaBridge_"
            r0.removeJavascriptInterface(r1)     // Catch: java.lang.Exception -> L5e
            android.webkit.WebView r0 = r4.e     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = "accessibility"
            r0.removeJavascriptInterface(r1)     // Catch: java.lang.Exception -> L5e
            android.webkit.WebView r0 = r4.e     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = "accessibilityTraversal"
            r0.removeJavascriptInterface(r1)     // Catch: java.lang.Exception -> L5e
        L5e:
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r0.<init>(r5, r5)
            android.webkit.WebView r5 = r4.e
            r4.addView(r5, r0)
            return
    }

    static android.widget.ProgressBar d(com.alipay.sdk.widget.WebViewWindow r0) {
            android.widget.ProgressBar r0 = r0.d
            return r0
    }

    static com.alipay.sdk.widget.WebViewWindow.a e(com.alipay.sdk.widget.WebViewWindow r0) {
            com.alipay.sdk.widget.WebViewWindow$a r0 = r0.g
            return r0
    }

    static com.alipay.sdk.widget.WebViewWindow.b f(com.alipay.sdk.widget.WebViewWindow r0) {
            com.alipay.sdk.widget.WebViewWindow$b r0 = r0.h
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

    protected void a(android.webkit.WebView r4, android.content.Context r5) {
            r3 = this;
            android.webkit.WebSettings r0 = r4.getSettings()
            java.lang.String r0 = r0.getUserAgentString()
            java.lang.String r1 = r5.getPackageName()
            java.lang.String r5 = com.alipay.sdk.util.n.i(r5)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = " AlipaySDK("
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = "/"
            r2.append(r0)
            r2.append(r5)
            r2.append(r0)
            java.lang.String r5 = "15.6.2"
            r2.append(r5)
            java.lang.String r5 = ")"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            android.webkit.WebSettings r4 = r4.getSettings()
            r4.setUserAgentString(r5)
            return
    }

    public void a(java.lang.String r2) {
            r1 = this;
            android.webkit.WebView r0 = r1.e
            r0.loadUrl(r2)
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

    public void setChromeProxy(com.alipay.sdk.widget.WebViewWindow.a r2) {
            r1 = this;
            r1.g = r2
            if (r2 != 0) goto Lb
            android.webkit.WebView r2 = r1.e
            r0 = 0
            r2.setWebChromeClient(r0)
            goto L15
        Lb:
            android.webkit.WebView r2 = r1.e
            com.alipay.sdk.widget.s r0 = new com.alipay.sdk.widget.s
            r0.<init>(r1)
            r2.setWebChromeClient(r0)
        L15:
            return
    }

    public void setWebClientProxy(com.alipay.sdk.widget.WebViewWindow.b r2) {
            r1 = this;
            r1.h = r2
            if (r2 != 0) goto Lb
            android.webkit.WebView r2 = r1.e
            r0 = 0
            r2.setWebViewClient(r0)
            goto L15
        Lb:
            android.webkit.WebView r2 = r1.e
            com.alipay.sdk.widget.t r0 = new com.alipay.sdk.widget.t
            r0.<init>(r1)
            r2.setWebViewClient(r0)
        L15:
            return
    }

    public void setWebEventProxy(com.alipay.sdk.widget.WebViewWindow.c r1) {
            r0 = this;
            r0.i = r1
            return
    }
}
