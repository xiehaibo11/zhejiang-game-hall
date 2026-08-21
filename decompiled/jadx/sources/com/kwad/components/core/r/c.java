package com.kwad.components.core.r;

import com.kwad.components.core.webview.b.b.w;
import com.kwad.components.core.webview.b.d;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends com.kwad.components.core.webview.b.c.c {
    private d qa() {
        return new d() { // from class: com.kwad.components.core.r.c.1
            @Override // com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                w wVar = new w();
                wVar.Xi = a.pS().pZ() + 1;
                cVar.a(wVar);
            }
        };
    }

    @Override // com.kwad.components.core.webview.b.c.a, com.kwad.components.core.webview.b.i
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        lVar.c(qa());
    }

    @Override // com.kwad.components.core.webview.b.c.c, com.kwad.components.core.webview.b.c.a, com.kwad.components.core.webview.b.i
    public final void b(WebCloseStatus webCloseStatus) {
        super.b(webCloseStatus);
        if (webCloseStatus.interactSuccess) {
            this.Xl.VP.dismiss();
        } else {
            this.Xl.mActivity.finish();
        }
    }

    @Override // com.kwad.components.core.webview.b.c.c, com.kwad.components.core.webview.b.i
    public final void cc() {
        super.cc();
    }
}
