package com.kwad.components.offline.api.core.soloader;

public interface SoLoadListener {
    void onFailed(int i, Throwable th);

    void onLoaded();

    void onPreUpdate();
}
