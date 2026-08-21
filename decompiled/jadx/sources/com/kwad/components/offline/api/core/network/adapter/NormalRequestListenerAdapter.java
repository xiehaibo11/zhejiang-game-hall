package com.kwad.components.offline.api.core.network.adapter;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.IOfflineCompoRequestListener;
import com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData;
import com.kwad.sdk.core.network.h;

/* JADX INFO: loaded from: classes2.dex */
public class NormalRequestListenerAdapter<R extends IOfflineCompoRequest, T extends NormalOfflineCompoResultData> implements h<NormalRequestAdapter<R>, NormalResultDataAdapter<T>> {
    private final IOfflineCompoRequestListener<R, T> mRequestListener;

    public NormalRequestListenerAdapter(IOfflineCompoRequestListener<R, T> iOfflineCompoRequestListener) {
        this.mRequestListener = iOfflineCompoRequestListener;
    }

    @Override // com.kwad.sdk.core.network.h
    public void onError(NormalRequestAdapter<R> normalRequestAdapter, int i, String str) {
        this.mRequestListener.onError(normalRequestAdapter.getOfflineCompoRequest(), i, str);
    }

    @Override // com.kwad.sdk.core.network.h
    public void onStartRequest(NormalRequestAdapter<R> normalRequestAdapter) {
        this.mRequestListener.onStartRequest(normalRequestAdapter.getOfflineCompoRequest());
    }

    @Override // com.kwad.sdk.core.network.h
    public void onSuccess(NormalRequestAdapter<R> normalRequestAdapter, NormalResultDataAdapter<T> normalResultDataAdapter) {
        this.mRequestListener.onSuccess(normalRequestAdapter.getOfflineCompoRequest(), normalResultDataAdapter.getOfflineCompoResultData());
    }
}
