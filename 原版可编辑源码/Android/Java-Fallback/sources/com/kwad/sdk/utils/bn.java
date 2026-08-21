package com.kwad.sdk.utils;

public final class bn extends android.os.Handler {
    private java.lang.ref.WeakReference<com.kwad.sdk.utils.bn.a> aKu;

    public interface a {
        void a(android.os.Message r1);
    }

    public bn(com.kwad.sdk.utils.bn.a r2) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.aKu = r0
            return
    }

    public bn(com.kwad.sdk.utils.bn.a r1, android.os.Looper r2) {
            r0 = this;
            r0.<init>(r2)
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r1)
            r0.aKu = r2
            return
    }

    @Override
    public final void handleMessage(android.os.Message r2) {
            r1 = this;
            java.lang.ref.WeakReference<com.kwad.sdk.utils.bn$a> r0 = r1.aKu     // Catch: java.lang.Exception -> L14
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.ref.WeakReference<com.kwad.sdk.utils.bn$a> r0 = r1.aKu     // Catch: java.lang.Exception -> L14
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L14
            com.kwad.sdk.utils.bn$a r0 = (com.kwad.sdk.utils.bn.a) r0     // Catch: java.lang.Exception -> L14
            if (r0 != 0) goto L10
            return
        L10:
            r0.a(r2)     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L18:
            super.handleMessage(r2)
            return
    }
}
