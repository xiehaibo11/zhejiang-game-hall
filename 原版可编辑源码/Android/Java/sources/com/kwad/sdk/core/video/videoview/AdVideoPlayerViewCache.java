package com.kwad.sdk.core.video.videoview;

import java.lang.ref.WeakReference;
import java.util.HashMap;

public final class AdVideoPlayerViewCache {
    private HashMap<String, WeakReference<a>> BY;

    enum Holder {
        INSTANCE;

        private AdVideoPlayerViewCache mInstance = new AdVideoPlayerViewCache(0);

        Holder() {
        }

        final AdVideoPlayerViewCache getInstance() {
            return this.mInstance;
        }
    }

    private AdVideoPlayerViewCache() {
        this.BY = new HashMap<>(1);
    }

    AdVideoPlayerViewCache(byte b) {
        this();
    }

    public static AdVideoPlayerViewCache getInstance() {
        return Holder.INSTANCE.getInstance();
    }

    public final void a(String str, a aVar) {
        this.BY.put(str, new WeakReference<>(aVar));
    }

    public final a dJ(String str) {
        WeakReference<a> weakReference = this.BY.get(str);
        if (weakReference != null) {
            a aVar = weakReference.get();
            if (aVar != null) {
                return aVar;
            }
            this.BY.remove(str);
        }
        return null;
    }

    public final void remove(String str) {
        this.BY.remove(str);
    }
}
