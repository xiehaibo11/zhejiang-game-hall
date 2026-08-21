package com.kwad.components.core.offline.init.a;

import com.kwad.components.offline.api.core.api.IAsync;
import com.kwad.sdk.utils.bj;
import java.util.concurrent.TimeUnit;

final class a implements IAsync {
    a() {
    }

    @Override
    public final void execute(Runnable runnable) {
        com.kwad.sdk.utils.g.execute(runnable);
    }

    @Override
    public final void runOnDefaultExecutor(Runnable runnable) {
        com.kwad.sdk.utils.g.execute(runnable);
    }

    @Override
    public final void runOnUiThread(Runnable runnable) {
        bj.runOnUiThread(runnable);
    }

    @Override
    public final void runOnUiThreadDelay(Runnable runnable, long j) {
        bj.runOnUiThreadDelay(runnable, j);
    }

    @Override
    public final void schedule(Runnable runnable, long j, TimeUnit timeUnit) {
        com.kwad.sdk.utils.g.schedule(runnable, j, timeUnit);
    }
}
