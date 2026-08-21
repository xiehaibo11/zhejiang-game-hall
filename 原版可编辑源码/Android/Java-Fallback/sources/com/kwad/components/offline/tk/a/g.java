package com.kwad.components.offline.tk.a;

public final class g implements com.kwad.sdk.components.l {
    private final com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView ZS;

    public g(com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r1) {
            r0 = this;
            r0.<init>()
            com.kwad.sdk.utils.ao.checkNotNull(r1)
            r0.ZS = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.j r3) {
            r2 = this;
            if (r3 == 0) goto Lc
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r0 = r2.ZS
            com.kwad.components.offline.tk.a.c r1 = new com.kwad.components.offline.tk.a.c
            r1.<init>(r3)
            r0.registerHostActionHandler(r1)
        Lc:
            return
    }

    @Override
    public final void a(java.lang.String r3, java.lang.String r4, com.kwad.sdk.components.k r5) {
            r2 = this;
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r0 = r2.ZS
            com.kwad.components.offline.tk.a.f r1 = new com.kwad.components.offline.tk.a.f
            r1.<init>(r5)
            r0.execute(r3, r4, r1)
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.webview.c.g r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r0 = r2.ZS
            com.kwad.components.offline.tk.a.d r1 = new com.kwad.components.offline.tk.a.d
            r1.<init>(r3)
            r0.registerTKBridge(r1)
            return
    }

    @Override
    public final void c(com.kwad.sdk.core.webview.c.a r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r0 = r2.ZS
            com.kwad.components.offline.tk.a.b r1 = new com.kwad.components.offline.tk.a.b
            r1.<init>(r3)
            r0.registerJsBridge(r1)
            return
    }

    @Override
    public final java.lang.Object execute(java.lang.String r2) {
            r1 = this;
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r0 = r1.ZS
            java.lang.Object r2 = r0.execute(r2)
            return r2
    }

    @Override
    public final int getUniqId() {
            r1 = this;
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r0 = r1.ZS
            int r0 = r0.getUniqId()
            return r0
    }

    @Override
    public final android.view.View getView() {
            r1 = this;
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r0 = r1.ZS
            android.view.View r0 = r0.getView()
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r0 = r1.ZS
            r0.onDestroy()
            return
    }

    @Override
    public final void setCustomEnv(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView r0 = r1.ZS
            r0.setCustomEnv(r2)
            return
    }
}
