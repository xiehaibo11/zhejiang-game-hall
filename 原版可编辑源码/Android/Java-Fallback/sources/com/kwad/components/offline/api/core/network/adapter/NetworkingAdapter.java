package com.kwad.components.offline.api.core.network.adapter;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData;

public class NetworkingAdapter<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData> extends com.kwad.sdk.core.network.m<com.kwad.components.offline.api.core.network.adapter.RequestAdapter<R>, com.kwad.components.offline.api.core.network.adapter.ResultDataAdapter<T>> {
    private final com.kwad.components.offline.api.core.network.OfflineCompoNetworking<R, T> mOfflineCompoNetworking;


    public NetworkingAdapter(com.kwad.components.offline.api.core.network.OfflineCompoNetworking<R, T> r1) {
            r0 = this;
            r0.<init>()
            r0.mOfflineCompoNetworking = r1
            return
    }

    @Override
    protected com.kwad.components.offline.api.core.network.adapter.RequestAdapter<R> createRequest() {
            r2 = this;
            com.kwad.components.offline.api.core.network.OfflineCompoNetworking<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData> r0 = r2.mOfflineCompoNetworking
            com.kwad.components.offline.api.core.network.IOfflineCompoRequest r0 = r0.createRequest()
            com.kwad.components.offline.api.core.network.adapter.NetworkingAdapter$1 r1 = new com.kwad.components.offline.api.core.network.adapter.NetworkingAdapter$1
            r1.<init>(r2, r0)
            return r1
    }

    @Override
    public com.kwad.sdk.core.network.g createRequest() {
            r1 = this;
            com.kwad.components.offline.api.core.network.adapter.RequestAdapter r0 = r1.createRequest()
            return r0
    }

    @Override
    public boolean enableMonitorReport() {
            r1 = this;
            com.kwad.components.offline.api.core.network.OfflineCompoNetworking<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData> r0 = r1.mOfflineCompoNetworking
            boolean r0 = r0.enableMonitorReport()
            return r0
    }

    @Override
    public boolean isPostByJson() {
            r1 = this;
            com.kwad.components.offline.api.core.network.OfflineCompoNetworking<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData> r0 = r1.mOfflineCompoNetworking
            boolean r0 = r0.isPostByJson()
            return r0
    }

    protected void onResponse(com.kwad.components.offline.api.core.network.adapter.RequestAdapter<R> r2, com.kwad.sdk.core.network.c r3) {
            r1 = this;
            super.onResponse(r2, r3)
            com.kwad.components.offline.api.core.network.OfflineCompoNetworking<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData> r0 = r1.mOfflineCompoNetworking
            com.kwad.components.offline.api.core.network.IOfflineCompoRequest r2 = r2.getOfflineCompoRequest()
            r0.onResponse(r2, r3)
            return
    }

    @Override
    public void onResponse(com.kwad.sdk.core.network.g r1, com.kwad.sdk.core.network.c r2) {
            r0 = this;
            com.kwad.components.offline.api.core.network.adapter.RequestAdapter r1 = (com.kwad.components.offline.api.core.network.adapter.RequestAdapter) r1
            r0.onResponse(r1, r2)
            return
    }

    @Override
    protected com.kwad.components.offline.api.core.network.adapter.ResultDataAdapter<T> parseData(java.lang.String r2) {
            r1 = this;
            com.kwad.components.offline.api.core.network.OfflineCompoNetworking<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData> r0 = r1.mOfflineCompoNetworking
            com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r2 = r0.parseData(r2)
            com.kwad.components.offline.api.core.network.adapter.ResultDataAdapter r0 = new com.kwad.components.offline.api.core.network.adapter.ResultDataAdapter
            r0.<init>(r2)
            return r0
    }

    @Override
    public com.kwad.sdk.core.network.BaseResultData parseData(java.lang.String r1) {
            r0 = this;
            com.kwad.components.offline.api.core.network.adapter.ResultDataAdapter r1 = r0.parseData(r1)
            return r1
    }
}
