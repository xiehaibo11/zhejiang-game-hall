package com.kwad.components.ad.splashscreen;

import java.lang.ref.WeakReference;
import java.util.HashMap;

public final class SplashPlayModuleCache {
    private HashMap<String, WeakReference<com.kwad.components.ad.splashscreen.e.a>> BY;

    enum Holder {
        INSTANCE;

        private SplashPlayModuleCache mInstance = new SplashPlayModuleCache(0);

        Holder() {
        }

        final SplashPlayModuleCache getInstance() {
            return this.mInstance;
        }
    }

    private SplashPlayModuleCache() {
        this.BY = new HashMap<>(1);
    }

    SplashPlayModuleCache(byte b) {
        this();
    }
}
