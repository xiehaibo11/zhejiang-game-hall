package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import com.sigmob.sdk.base.mta.PointCategory;

/* JADX INFO: loaded from: classes2.dex */
public final class s implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private a Ua;
    private Handler mHandler = new Handler(Looper.getMainLooper());

    public interface a {
        void bz();
    }

    public s(com.kwad.sdk.core.webview.b bVar, a aVar) {
        this.TL = bVar;
        this.Ua = aVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.mHandler.post(new Runnable() { // from class: com.kwad.components.core.webview.jshandler.s.1
            @Override // java.lang.Runnable
            public final void run() {
                s.this.Ua.bz();
            }
        });
        cVar.a(null);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return PointCategory.DISLIKE;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.mHandler.removeCallbacksAndMessages(null);
    }
}
