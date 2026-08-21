package com.kwad.components.core.webview.jshandler;

import android.content.Context;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public class av implements com.kwad.sdk.core.webview.c.a {
    private a VK;
    private AdTemplate mAdTemplate;
    protected Context mContext;

    public interface a {
        boolean dw();
    }

    public av(Context context, AdTemplate adTemplate) {
        this.mContext = com.kwad.sdk.m.l.wrapContextIfNeed(context);
        this.mAdTemplate = adTemplate;
    }

    public final void a(a aVar) {
        this.VK = aVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        a aVar = this.VK;
        boolean zDw = aVar != null ? aVar.dw() : true;
        com.kwad.sdk.core.e.c.d("WebShowPlayableHandler", "handleJsCall launch AdPlayableActivityProxy : " + zDw);
        if (zDw) {
            com.kwad.components.core.page.a.launch(this.mContext, this.mAdTemplate);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "showPlayable";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
