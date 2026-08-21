package com.kwad.components.offline.api.core.network.adapter;

import com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData;

public class NormalResultDataAdapter<T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData> extends com.kwad.sdk.core.network.NormalResultData {
    private final T mOfflineCompoResultData;

    public NormalResultDataAdapter(T r1) {
            r0 = this;
            r0.<init>()
            r0.mOfflineCompoResultData = r1
            return
    }

    public T getOfflineCompoResultData() {
            r1 = this;
            T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData r0 = r1.mOfflineCompoResultData
            return r0
    }

    @Override
    public void parseResponse(com.kwad.sdk.core.network.c r2) {
            r1 = this;
            super.parseResponse(r2)
            T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData r0 = r1.mOfflineCompoResultData
            r0.parseResponse(r2)
            return
    }
}
