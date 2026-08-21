package com.kwad.components.core.offline.init.a;

final class f implements com.kwad.components.offline.api.core.api.INet {
    f() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final int getActiveNetworkType(android.content.Context r1) {
            r0 = this;
            int r1 = com.kwad.sdk.utils.ag.getActiveNetworkType(r1)
            return r1
    }

    @Override
    public final java.lang.String getCurrHost(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.kwad.sdk.core.network.idc.a r0 = com.kwad.sdk.core.network.idc.a.Bo()
            java.lang.String r2 = r0.P(r2, r3)
            return r2
    }

    @Override
    public final void handleSwitchHost(java.lang.String r3, java.lang.String r4, int r5, java.lang.Throwable r6) {
            r2 = this;
            com.kwad.sdk.core.network.idc.a r0 = com.kwad.sdk.core.network.idc.a.Bo()
            com.kwad.sdk.core.network.idc.DomainException r1 = new com.kwad.sdk.core.network.idc.DomainException
            r1.<init>(r5, r6)
            r0.a(r3, r4, r1)
            return
    }

    @Override
    public final boolean isMobileConnected(android.content.Context r1) {
            r0 = this;
            boolean r1 = com.kwad.sdk.utils.ag.isMobileConnected(r1)
            return r1
    }

    @Override
    public final boolean isNetworkConnected(android.content.Context r1) {
            r0 = this;
            boolean r1 = com.kwad.sdk.utils.ag.isNetworkConnected(r1)
            return r1
    }

    @Override
    public final boolean isWifiConnected(android.content.Context r1) {
            r0 = this;
            boolean r1 = com.kwad.sdk.utils.ag.isWifiConnected(r1)
            return r1
    }
}
