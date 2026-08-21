package com.kwad.sdk.core.webview;

public class c extends android.webkit.WebView {
    private boolean ayj;
    private com.kwad.sdk.core.webview.a.a ayk;

    public c(android.content.Context r1) {
            r0 = this;
            android.content.Context r1 = bn(r1)
            r0.<init>(r1)
            r1 = 1
            r0.ayj = r1
            r0.init()
            return
    }

    public c(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            android.content.Context r1 = bn(r1)
            r0.<init>(r1, r2)
            r1 = 1
            r0.ayj = r1
            r0.init()
            return
    }

    public c(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            android.content.Context r1 = bn(r1)
            r0.<init>(r1, r2, r3)
            r1 = 1
            r0.ayj = r1
            r0.init()
            return
    }

    public c(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            android.content.Context r1 = bn(r1)
            r0.<init>(r1, r2, r3, r4)
            r1 = 1
            r0.ayj = r1
            r0.init()
            return
    }

    public c(android.content.Context r1, android.util.AttributeSet r2, int r3, boolean r4) {
            r0 = this;
            android.content.Context r1 = bn(r1)
            r0.<init>(r1, r2, r3, r4)
            r1 = 1
            r0.ayj = r1
            r0.init()
            return
    }

    private static android.content.Context bn(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L15
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 >= r1) goto L15
            android.content.res.Configuration r0 = new android.content.res.Configuration
            r0.<init>()
            android.content.Context r3 = r3.createConfigurationContext(r0)
        L15:
            android.content.Context r3 = com.kwad.sdk.m.l.dt(r3)
            boolean r0 = com.kwad.sdk.m.l.dw(r3)
            if (r0 != 0) goto L75
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "KSApiWebView context not except--context:"
            r1.<init>(r2)
            java.lang.Class r2 = r3.getClass()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = "--classloader:"
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.ClassLoader r3 = r3.getClassLoader()
            r1.append(r3)
            java.lang.String r3 = "--context2:"
            r1.append(r3)
            android.content.Context r3 = com.kwad.sdk.service.ServiceProvider.HD()
            android.content.Context r3 = com.kwad.sdk.m.l.dt(r3)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            java.lang.Class<com.kwad.sdk.service.a.d> r3 = com.kwad.sdk.service.a.d.class
            java.lang.Object r3 = com.kwad.sdk.service.ServiceProvider.get(r3)
            com.kwad.sdk.service.a.d r3 = (com.kwad.sdk.service.a.d) r3
            r3.gatherException(r0)
            android.content.Context r3 = com.kwad.sdk.service.ServiceProvider.HD()
            android.content.Context r3 = com.kwad.sdk.m.l.dt(r3)
        L75:
            return r3
    }

    private void init() {
            r1 = this;
            com.kwad.sdk.utils.bo.a(r1)
            com.kwad.sdk.core.webview.a.a r0 = new com.kwad.sdk.core.webview.a.a
            r0.<init>()
            r1.ayk = r0
            r1.setWebViewClient(r0)
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            boolean r0 = r1.ayj
            if (r0 == 0) goto L7
            r1.release()
        L7:
            return
    }

    public final void release() {
            r2 = this;
            android.view.ViewParent r0 = r2.getParent()     // Catch: java.lang.Throwable -> L14
            boolean r1 = r0 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto Ld
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L14
            r0.removeView(r2)     // Catch: java.lang.Throwable -> L14
        Ld:
            r2.removeAllViews()     // Catch: java.lang.Throwable -> L14
            super.destroy()     // Catch: java.lang.Throwable -> L14
            return
        L14:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
    }

    public void setEnableDestroy(boolean r1) {
            r0 = this;
            r0.ayj = r1
            return
    }

    public void setNeedHybridLoad(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.a.a r0 = r1.ayk
            r0.setNeedHybridLoad(r2)
            return
    }
}
