package com.kwad.components.core.offline.init.a;

final class b implements com.kwad.components.offline.api.core.api.ICache {
    b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String getPreCacheUrl(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            r0 = 0
            int r1 = com.kwad.sdk.core.config.d.zz()
            if (r1 >= 0) goto L27
            com.kwad.sdk.core.diskcache.b.a r1 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r3 = r1.bR(r3)
            if (r3 == 0) goto L25
            boolean r1 = r3.exists()
            if (r1 == 0) goto L25
            java.lang.String r3 = r3.getAbsolutePath()
            goto L3a
        L25:
            r3 = r0
            goto L3a
        L27:
            if (r1 != 0) goto L2a
            goto L3a
        L2a:
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            com.kwad.sdk.core.videocache.f r0 = com.kwad.sdk.core.videocache.c.a.bj(r0)
            java.lang.String r3 = r0.dN(r3)
        L3a:
            return r3
    }
}
