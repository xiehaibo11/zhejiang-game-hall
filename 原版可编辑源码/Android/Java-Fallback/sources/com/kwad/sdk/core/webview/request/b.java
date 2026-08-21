package com.kwad.sdk.core.webview.request;

public final class b {
    private static final android.os.Handler mHandler = null;



    public interface a {
        void a(com.kwad.sdk.core.webview.request.WebCardGetDataResponse r1);

        void onError(int r1, java.lang.String r2);
    }

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.kwad.sdk.core.webview.request.b.mHandler = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.os.Handler vW() {
            android.os.Handler r0 = com.kwad.sdk.core.webview.request.b.mHandler
            return r0
    }

    public final void a(com.kwad.sdk.core.webview.d.b.a r2, com.kwad.sdk.core.webview.request.b.a r3) {
            r1 = this;
            com.kwad.sdk.core.webview.request.b$1 r0 = new com.kwad.sdk.core.webview.request.b$1
            r0.<init>(r1, r2)
            com.kwad.sdk.core.webview.request.b$2 r2 = new com.kwad.sdk.core.webview.request.b$2
            r2.<init>(r1, r3)
            r0.request(r2)
            return
    }
}
