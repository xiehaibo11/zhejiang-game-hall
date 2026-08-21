package com.kwad.components.offline.api.core.soloader;

public interface SoLoadListener {
    void onFailed(int r1, java.lang.Throwable r2);

    void onLoaded();

    void onPreUpdate();
}
