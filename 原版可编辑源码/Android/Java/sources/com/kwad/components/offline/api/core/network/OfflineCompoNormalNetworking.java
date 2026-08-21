package com.kwad.components.offline.api.core.network;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.adapter.NormalNetworkingAdapter;
import com.kwad.components.offline.api.core.network.adapter.NormalRequestListenerAdapter;
import com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData;
import com.kwad.sdk.core.network.c;

public abstract class OfflineCompoNormalNetworking<R extends IOfflineCompoRequest, T extends NormalOfflineCompoResultData> implements IOfflineCompoNetworking<R, T> {
    private NormalNetworkingAdapter<R, T> mNetworking = new NormalNetworkingAdapter<>(this);

    @Override
    public void cancel() {
        this.mNetworking.cancel();
    }

    public abstract T createResponseData();

    @Override
    public boolean enableMonitorReport() {
        return false;
    }

    @Override
    public boolean isPostByJson() {
        return false;
    }

    @Override
    public void onResponse(R r, c cVar) {
    }

    @Override
    public void request(IOfflineCompoRequestListener<R, T> iOfflineCompoRequestListener) {
        this.mNetworking.request(new NormalRequestListenerAdapter(iOfflineCompoRequestListener));
    }
}
