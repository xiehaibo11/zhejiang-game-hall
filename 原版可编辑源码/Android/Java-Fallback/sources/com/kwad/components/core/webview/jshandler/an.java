package com.kwad.components.core.webview.jshandler;

public final class an implements com.kwad.sdk.core.webview.c.a {
    private final android.os.Handler TT;
    private com.kwad.sdk.core.webview.c.c Tv;
    private final com.kwad.components.core.webview.jshandler.an.c Vp;


    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public java.lang.String displayLikeUserCount;
        public java.lang.String displayWatchingUserCount;
        public int likeUserCount;
        public long liveDuration;
        public int status;
        public long totalWatchingDuration;
        public int watchingUserCount;

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "0"
                r1.displayWatchingUserCount = r0
                r1.displayLikeUserCount = r0
                return
        }
    }

    public static final class b {
        java.lang.ref.WeakReference<com.kwad.sdk.core.webview.c.c> Rx;

        public b(com.kwad.sdk.core.webview.c.c r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.Rx = r0
                return
        }

        public final void a(com.kwad.components.core.webview.jshandler.an.a r2) {
                r1 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.webview.c.c> r0 = r1.Rx
                java.lang.Object r0 = r0.get()
                com.kwad.sdk.core.webview.c.c r0 = (com.kwad.sdk.core.webview.c.c) r0
                if (r0 == 0) goto Ld
                r0.a(r2)
            Ld:
                return
        }
    }

    public interface c {
        void a(com.kwad.components.core.webview.jshandler.an.b r1);
    }

    public an(com.kwad.components.core.webview.jshandler.an.c r3) {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.TT = r0
            r2.Vp = r3
            return
    }

    static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.jshandler.an r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.Tv
            return r0
    }

    static com.kwad.components.core.webview.jshandler.an.c b(com.kwad.components.core.webview.jshandler.an r0) {
            com.kwad.components.core.webview.jshandler.an$c r0 = r0.Vp
            return r0
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.Tv = r2
            android.os.Handler r1 = r0.TT
            com.kwad.components.core.webview.jshandler.an$1 r2 = new com.kwad.components.core.webview.jshandler.an$1
            r2.<init>(r0)
            r1.post(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerLiveListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            r0 = 0
            r2.Tv = r0
            android.os.Handler r1 = r2.TT
            r1.removeCallbacksAndMessages(r0)
            return
    }
}
