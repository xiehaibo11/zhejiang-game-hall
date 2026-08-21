package com.kwad.components.core.offline.init;

public abstract class DefaultOfflineCompo extends com.kwad.sdk.components.d implements com.kwad.components.offline.api.IOfflineCompo {
    private final com.kwad.components.offline.api.IOfflineCompo mOfflineComponents;

    public DefaultOfflineCompo(com.kwad.components.offline.api.IOfflineCompo r1) {
            r0 = this;
            r0.<init>()
            com.kwad.sdk.utils.ao.checkNotNull(r1)
            r0.mOfflineComponents = r1
            return
    }

    @Override
    public void init(android.content.Context r2) {
            r1 = this;
            com.kwad.components.offline.api.IOfflineCompo r0 = r1.mOfflineComponents
            r0.init(r2)
            return
    }

    @Override
    public int priority() {
            r1 = this;
            com.kwad.components.offline.api.IOfflineCompo r0 = r1.mOfflineComponents
            int r0 = r0.priority()
            return r0
    }
}
