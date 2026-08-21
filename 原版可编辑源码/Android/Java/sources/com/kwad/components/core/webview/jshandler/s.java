package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import com.sigmob.sdk.base.mta.PointCategory;

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

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.mHandler.post(new Runnable() {
            @Override
            public final void run() {
                s.this.Ua.bz();
            }
        });
        cVar.a(null);
    }

    @Override
    public final String getKey() {
        return PointCategory.DISLIKE;
    }

    @Override
    public final void onDestroy() {
        this.mHandler.removeCallbacksAndMessages(null);
    }
}
