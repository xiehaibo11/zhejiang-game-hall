package com.kwad.components.ad.splashscreen;

import java.lang.ref.WeakReference;
import java.util.HashMap;

/* JADX INFO: loaded from: classes2.dex */
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

    /* synthetic */ SplashPlayModuleCache(byte b) {
        this();
    }
}
