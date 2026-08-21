package com.kwad.components.core.t;

import java.lang.ref.WeakReference;

public final class n implements Runnable {
    private WeakReference<Runnable> weakReference;

    public n(Runnable runnable) {
        this.weakReference = new WeakReference<>(runnable);
    }

    @Override
    public final void run() {
        Runnable runnable = this.weakReference.get();
        if (runnable != null) {
            runnable.run();
        }
    }
}
