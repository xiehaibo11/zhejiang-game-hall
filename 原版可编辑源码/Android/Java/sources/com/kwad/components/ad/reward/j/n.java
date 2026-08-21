package com.kwad.components.ad.reward.j;

import com.kwad.components.core.webview.b.a.v;

public final class n extends v {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int status;
    }

    public final void ab(boolean z) {
        a aVar = new a();
        aVar.status = z ? 1 : 0;
        b(aVar);
    }

    @Override
    public final String getKey() {
        return "registerNeoStatusListener";
    }
}
