package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes2.dex */
public final class an implements com.kwad.sdk.core.webview.c.a {
    private final Handler TT = new Handler(Looper.getMainLooper());
    private com.kwad.sdk.core.webview.c.c Tv;
    private final c Vp;

    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int likeUserCount;
        public long liveDuration;
        public int status;
        public long totalWatchingDuration;
        public int watchingUserCount;
        public String displayWatchingUserCount = "0";
        public String displayLikeUserCount = "0";
    }

    public static final class b {
        WeakReference<com.kwad.sdk.core.webview.c.c> Rx;

        public b(com.kwad.sdk.core.webview.c.c cVar) {
            this.Rx = new WeakReference<>(cVar);
        }

        public final void a(a aVar) {
            com.kwad.sdk.core.webview.c.c cVar = this.Rx.get();
            if (cVar != null) {
                cVar.a(aVar);
            }
        }
    }

    public interface c {
        void a(b bVar);
    }

    public an(c cVar) {
        this.Vp = cVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.Tv = cVar;
        this.TT.post(new Runnable() { // from class: com.kwad.components.core.webview.jshandler.an.1
            @Override // java.lang.Runnable
            public final void run() {
                an.this.Vp.a(new b(an.this.Tv));
            }
        });
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "registerLiveListener";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.Tv = null;
        this.TT.removeCallbacksAndMessages(null);
    }
}
