package com.kwad.components.offline.tk.a;

public final class c implements com.kwad.components.offline.api.tk.IOfflineHostActionHandler {
    private final com.kwad.sdk.components.j Wi;



    public c(com.kwad.sdk.components.j r1) {
            r0 = this;
            r0.<init>()
            r0.Wi = r1
            return
    }

    private com.kwad.sdk.components.g a(com.kwad.components.offline.api.tk.IOfflineTKDialog r2) {
            r1 = this;
            com.kwad.components.offline.tk.a.c$2 r0 = new com.kwad.components.offline.tk.a.c$2
            r0.<init>(r1, r2)
            return r0
    }

    private com.kwad.sdk.components.h a(com.kwad.components.offline.api.tk.IOfflineTKNativeIntent r2) {
            r1 = this;
            com.kwad.components.offline.tk.a.c$1 r0 = new com.kwad.components.offline.tk.a.c$1
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public final void dismissDialog(com.kwad.components.offline.api.tk.IOfflineTKDialog r2) {
            r1 = this;
            com.kwad.sdk.components.j r0 = r1.Wi
            if (r0 == 0) goto Lb
            com.kwad.sdk.components.g r2 = r1.a(r2)
            r0.b(r2)
        Lb:
            return
    }

    @Override
    public final void showDialog(com.kwad.components.offline.api.tk.IOfflineTKDialog r2) {
            r1 = this;
            com.kwad.sdk.components.j r0 = r1.Wi
            if (r0 == 0) goto Lb
            com.kwad.sdk.components.g r2 = r1.a(r2)
            r0.a(r2)
        Lb:
            return
    }

    @Override
    public final void startActivity(com.kwad.components.offline.api.tk.IOfflineTKNativeIntent r2) {
            r1 = this;
            com.kwad.sdk.components.j r0 = r1.Wi
            if (r0 == 0) goto Lb
            com.kwad.sdk.components.h r2 = r1.a(r2)
            r0.a(r2)
        Lb:
            return
    }
}
