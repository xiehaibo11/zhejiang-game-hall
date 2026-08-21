package com.kwad.components.offline.tk.a;

public final class f implements com.kwad.components.offline.api.tk.IOfflineTKRenderListener {
    private final com.kwad.sdk.components.k ZR;

    public f(com.kwad.sdk.components.k r1) {
            r0 = this;
            r0.<init>()
            r0.ZR = r1
            return
    }

    @Override
    public final void onFailed(java.lang.Throwable r2) {
            r1 = this;
            com.kwad.sdk.components.k r0 = r1.ZR
            if (r0 == 0) goto L7
            r0.onFailed(r2)
        L7:
            return
    }

    @Override
    public final void onSuccess() {
            r1 = this;
            com.kwad.sdk.components.k r0 = r1.ZR
            if (r0 == 0) goto L7
            r0.onSuccess()
        L7:
            return
    }
}
