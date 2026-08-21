package com.kwad.components.core.webview.jshandler;

public final class c implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private int mB;
    private int mC;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int showLiveStatus;
        public int showLiveStyle;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public c(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.mB = r1
            r0.mC = r2
            return
    }

    private void o(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.core.webview.c.c r0 = r1.Tv
            if (r0 != 0) goto L5
            return
        L5:
            com.kwad.components.core.webview.jshandler.c$a r0 = new com.kwad.components.core.webview.jshandler.c$a
            r0.<init>()
            r0.showLiveStatus = r2
            r0.showLiveStyle = r3
            com.kwad.sdk.core.webview.c.c r2 = r1.Tv
            r2.a(r0)
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.Tv = r2
            int r1 = r0.mB
            int r2 = r0.mC
            r0.o(r1, r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getLiveInfo"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Tv = r0
            return
    }
}
