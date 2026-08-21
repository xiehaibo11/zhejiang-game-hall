package com.kwad.components.core.webview.b;

import com.kwad.sdk.utils.bj;

public class e implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c nA;

    @Override
    public void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.nA = cVar;
    }

    public final void b(final com.kwad.sdk.core.response.a.a aVar) {
        if (this.nA != null) {
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    e.this.nA.a(aVar);
                }
            });
        }
    }

    @Override
    public final String getKey() {
        return "giveRewardInAdvance";
    }

    @Override
    public final void onDestroy() {
    }
}
