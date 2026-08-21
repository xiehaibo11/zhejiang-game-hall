package com.kwad.components.core.webview.jshandler;

import com.kwad.components.core.playable.PlayableSource;
import org.json.JSONObject;

public final class e implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private i Tw;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public String Tx;

        public final String getTarget() {
            return this.Tx;
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public int KR;
        public int Ty;
        public int Tz;
    }

    public e(i iVar) {
        this.Tw = iVar;
    }

    public final void a(com.kwad.sdk.core.response.a.a aVar) {
        com.kwad.sdk.core.webview.c.c cVar = this.Tv;
        if (cVar == null || aVar == null) {
            return;
        }
        cVar.a(aVar);
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.Tv = cVar;
        try {
            a aVar = new a();
            aVar.parseJson(new JSONObject(str));
            String target = aVar.getTarget();
            if (this.Tw != null) {
                this.Tw.a(this, target);
            }
        } catch (Exception unused) {
        }
    }

    public final void aM(int i) {
        b bVar = new b();
        bVar.KR = i;
        a(bVar);
    }

    public final void aM(boolean z) {
        b bVar = new b();
        bVar.Tz = z ? 1 : 0;
        a(bVar);
    }

    public final void f(PlayableSource playableSource) {
        if (playableSource == null) {
            return;
        }
        b bVar = new b();
        bVar.Ty = playableSource.getCode();
        a(bVar);
    }

    @Override
    public final String getKey() {
        return "getNativeData";
    }

    @Override
    public final void onDestroy() {
        this.Tv = null;
    }
}
