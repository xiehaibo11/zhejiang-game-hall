package com.kwad.sdk.api.proxy;

public interface KSLifecycleListener {
    void onActivityCreated(android.app.Activity r1, android.os.Bundle r2);

    void onActivityDestroyed(android.app.Activity r1);

    void onActivityPaused(android.app.Activity r1);

    void onActivityResumed(android.app.Activity r1);

    void onBackToBackground();

    void onBackToForeground();
}
