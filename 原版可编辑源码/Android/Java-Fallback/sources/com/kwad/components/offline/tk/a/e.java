package com.kwad.components.offline.tk.a;

public final class e implements com.kwad.components.offline.api.tk.IOfflineTKCallHandler {
    private final com.kwad.sdk.components.i ZQ;

    public e(com.kwad.sdk.components.i r1) {
            r0 = this;
            r0.<init>()
            r0.ZQ = r1
            return
    }

    @Override
    public final void callJS(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.components.i r0 = r1.ZQ
            if (r0 == 0) goto L7
            r0.callJS(r2)
        L7:
            return
    }
}
