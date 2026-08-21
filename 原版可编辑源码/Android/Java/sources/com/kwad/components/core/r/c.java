package com.kwad.components.core.r;

import com.kwad.components.core.webview.b.b.w;
import com.kwad.components.core.webview.b.d;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;

public final class c extends com.kwad.components.core.webview.b.c.c {
    private d qa() {
        return new d() {
            @Override
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                w wVar = new w();
                wVar.Xi = a.pS().pZ() + 1;
                cVar.a(wVar);
            }
        };
    }

    @Override
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        lVar.c(qa());
    }

    @Override
    public final void b(WebCloseStatus webCloseStatus) {
        super.b(webCloseStatus);
        if (webCloseStatus.interactSuccess) {
            this.Xl.VP.dismiss();
        } else {
            this.Xl.mActivity.finish();
        }
    }

    @Override
    public final void cc() {
        super.cc();
    }
}
