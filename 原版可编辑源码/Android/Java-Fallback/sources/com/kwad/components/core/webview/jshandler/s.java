package com.kwad.components.core.webview.jshandler;

public final class s implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private com.kwad.components.core.webview.jshandler.s.a Ua;
    private android.os.Handler mHandler;


    public interface a {
        void bz();
    }

    public s(com.kwad.sdk.core.webview.b r3, com.kwad.components.core.webview.jshandler.s.a r4) {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            r2.TL = r3
            r2.Ua = r4
            return
    }

    static com.kwad.components.core.webview.jshandler.s.a a(com.kwad.components.core.webview.jshandler.s r0) {
            com.kwad.components.core.webview.jshandler.s$a r0 = r0.Ua
            return r0
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            android.os.Handler r2 = r1.mHandler
            com.kwad.components.core.webview.jshandler.s$1 r0 = new com.kwad.components.core.webview.jshandler.s$1
            r0.<init>(r1)
            r2.post(r0)
            r2 = 0
            r3.a(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "dislike"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            return
    }
}
