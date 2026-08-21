package com.kwad.components.offline.api.core.network;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData;

public abstract class OfflineCompoNetworking<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData> implements com.kwad.components.offline.api.core.network.IOfflineCompoNetworking<R, T> {
    private com.kwad.sdk.core.network.m<com.kwad.components.offline.api.core.network.adapter.RequestAdapter<R>, com.kwad.components.offline.api.core.network.adapter.ResultDataAdapter<T>> mNetworking;

    public OfflineCompoNetworking() {
            r1 = this;
            r1.<init>()
            com.kwad.components.offline.api.core.network.adapter.NetworkingAdapter r0 = new com.kwad.components.offline.api.core.network.adapter.NetworkingAdapter
            r0.<init>(r1)
            r1.mNetworking = r0
            return
    }

    public static <DATA extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData> DATA parseData(java.lang.String r1, DATA r2) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r1)
            r2.parseJson(r0)
            return r2
    }

    @Override
    public void cancel() {
            r1 = this;
            com.kwad.sdk.core.network.m<com.kwad.components.offline.api.core.network.adapter.RequestAdapter<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest>, com.kwad.components.offline.api.core.network.adapter.ResultDataAdapter<T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData>> r0 = r1.mNetworking
            r0.cancel()
            return
    }

    protected abstract T createResponseData();

    @Override
    public boolean enableMonitorReport() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean isPostByJson() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void onResponse(R r1, com.kwad.sdk.core.network.c r2) {
            r0 = this;
            return
    }

    public T parseData(java.lang.String r2) {
            r1 = this;
            com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r0 = r1.createResponseData()
            com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r2 = parseData(r2, r0)
            return r2
    }

    @Override
    public void request(com.kwad.components.offline.api.core.network.IOfflineCompoRequestListener<R, T> r3) {
            r2 = this;
            com.kwad.sdk.core.network.m<com.kwad.components.offline.api.core.network.adapter.RequestAdapter<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest>, com.kwad.components.offline.api.core.network.adapter.ResultDataAdapter<T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData>> r0 = r2.mNetworking
            com.kwad.components.offline.api.core.network.adapter.RequestListenerAdapter r1 = new com.kwad.components.offline.api.core.network.adapter.RequestListenerAdapter
            r1.<init>(r3)
            r0.request(r1)
            return
    }
}
