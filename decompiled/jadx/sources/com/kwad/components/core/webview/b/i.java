package com.kwad.components.core.webview.b;

import android.widget.FrameLayout;
import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;

/* JADX INFO: loaded from: classes2.dex */
public interface i {
    void a(o oVar);

    void a(p pVar);

    void a(t tVar);

    void a(am amVar);

    void a(l lVar, com.kwad.sdk.core.webview.b bVar);

    void a(com.kwad.sdk.core.webview.d.b.a aVar);

    void b(m mVar);

    void b(t.a aVar);

    void b(WebCloseStatus webCloseStatus);

    void cc();

    void eh();

    void em();

    FrameLayout getTKContainer();

    String getTkTemplateId();

    com.kwad.sdk.widget.e getTouchCoordsView();
}
