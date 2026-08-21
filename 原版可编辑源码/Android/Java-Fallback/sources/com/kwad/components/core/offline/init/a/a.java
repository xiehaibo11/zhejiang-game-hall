package com.kwad.components.core.offline.init.a;

final class a implements com.kwad.components.offline.api.core.api.IAsync {
    a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void execute(java.lang.Runnable r1) {
            r0 = this;
            com.kwad.sdk.utils.g.execute(r1)
            return
    }

    @Override
    public final void runOnDefaultExecutor(java.lang.Runnable r1) {
            r0 = this;
            com.kwad.sdk.utils.g.execute(r1)
            return
    }

    @Override
    public final void runOnUiThread(java.lang.Runnable r1) {
            r0 = this;
            com.kwad.sdk.utils.bj.runOnUiThread(r1)
            return
    }

    @Override
    public final void runOnUiThreadDelay(java.lang.Runnable r1, long r2) {
            r0 = this;
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r1, r2)
            return
    }

    @Override
    public final void schedule(java.lang.Runnable r1, long r2, java.util.concurrent.TimeUnit r4) {
            r0 = this;
            com.kwad.sdk.utils.g.schedule(r1, r2, r4)
            return
    }
}
