package com.kwad.components.offline.api.tk;

public interface IOfflineTKRenderListener {
    void onFailed(Throwable th);

    void onSuccess();
}
