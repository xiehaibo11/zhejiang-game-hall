package com.kwad.sdk.core.network;

import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.g;

public abstract class p<R extends g, T extends BaseResultData> implements h<R, T> {
    @Override
    public void onError(R r, int i, String str) {
    }

    @Override
    public void onStartRequest(R r) {
    }

    @Override
    public void onSuccess(R r, T t) {
    }
}
