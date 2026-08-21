package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONException;
import org.json.JSONObject;

public final class ac implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private final Handler TT;
    private final b UR;

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public boolean UX;
        public String UY;
        public int UZ;
        public com.kwad.sdk.core.webview.d.b.c Va;
    }

    public interface b {
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        final com.kwad.components.core.e.d.c cVar2;
        final a aVar = new a();
        final AdTemplate adTemplate = new AdTemplate();
        try {
            aVar.parseJson(new JSONObject(str));
            adTemplate.parseJson(new JSONObject(aVar.UY));
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        if (com.kwad.sdk.core.response.b.d.bY(adTemplate)) {
            if (this.TL.ayf != null) {
                cVar2 = (com.kwad.components.core.e.d.c) this.TL.ayf.fy(com.kwad.sdk.core.response.b.d.cg(adTemplate).downloadId);
            } else {
                cVar2 = null;
            }
            if (this.TL.ayg) {
                this.TT.post(new Runnable() {
                    @Override
                    public final void run() {
                        z.b bVar = new z.b();
                        bVar.UP = aVar.Va.UP;
                        com.kwad.components.core.e.d.a.a(new a.a(ac.this.TL.MT.getContext()).P(adTemplate).b(cVar2).ao(aVar.UZ).am(true).a(bVar).ao(true).a(new a.b() {
                            @Override
                            public final void onAdClicked() {
                            }
                        }));
                    }
                });
            } else if (this.UR != null) {
                this.TT.post(new Runnable() {
                    @Override
                    public final void run() {
                    }
                });
            }
            cVar.a(null);
        }
    }

    @Override
    public final String getKey() {
        return "clickAction";
    }

    @Override
    public final void onDestroy() {
        this.TT.removeCallbacksAndMessages(null);
    }
}
