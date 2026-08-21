package com.kwad.components.core.webview.jshandler;

public final class ar implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int Vx;

        public a(int r1) {
                r0 = this;
                r0.<init>()
                r0.Vx = r1
                return
        }
    }

    public ar() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.Tv = r2
            return
    }

    public final void ai(boolean r3) {
            r2 = this;
            com.kwad.sdk.core.webview.c.c r0 = r2.Tv
            if (r0 != 0) goto L18
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "notifyTaskStatus , status:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "WebCardRewardTaskStatusHandler"
            com.kwad.sdk.core.e.c.d(r0, r3)
            return
        L18:
            com.kwad.components.core.webview.jshandler.ar$a r0 = new com.kwad.components.core.webview.jshandler.ar$a
            r0.<init>(r3)
            com.kwad.sdk.core.webview.c.c r3 = r2.Tv
            r3.a(r0)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "rewardTaskStatus"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
