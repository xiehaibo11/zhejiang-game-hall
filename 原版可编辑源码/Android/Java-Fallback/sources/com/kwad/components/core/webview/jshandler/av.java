package com.kwad.components.core.webview.jshandler;

public class av implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.jshandler.av.a VK;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    protected android.content.Context mContext;

    public interface a {
        boolean dw();
    }

    public av(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            r0.mContext = r1
            r0.mAdTemplate = r2
            return
    }

    public final void a(com.kwad.components.core.webview.jshandler.av.a r1) {
            r0 = this;
            r0.VK = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.av$a r2 = r1.VK
            if (r2 == 0) goto L9
            boolean r2 = r2.dw()
            goto La
        L9:
            r2 = 1
        La:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "handleJsCall launch AdPlayableActivityProxy : "
            r3.<init>(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "WebShowPlayableHandler"
            com.kwad.sdk.core.e.c.d(r0, r3)
            if (r2 == 0) goto L26
            android.content.Context r2 = r1.mContext
            com.kwad.sdk.core.response.model.AdTemplate r3 = r1.mAdTemplate
            com.kwad.components.core.page.a.launch(r2, r3)
        L26:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "showPlayable"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
