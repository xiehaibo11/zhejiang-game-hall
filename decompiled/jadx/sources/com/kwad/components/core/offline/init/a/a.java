package com.kwad.components.core.offline.init.a;

import com.kwad.components.offline.api.core.api.IAsync;
import com.kwad.sdk.utils.bj;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
final class a implements IAsync {
    a() {
    }

    @Override // com.kwad.components.offline.api.core.api.IAsync
    public final void execute(Runnable runnable) {
        com.kwad.sdk.utils.g.execute(runnable);
    }

    @Override // com.kwad.components.offline.api.core.api.IAsync
    public final void runOnDefaultExecutor(Runnable runnable) {
        com.kwad.sdk.utils.g.execute(runnable);
    }

    @Override // com.kwad.components.offline.api.core.api.IAsync
    public final void runOnUiThread(Runnable runnable) {
        bj.runOnUiThread(runnable);
    }

    @Override // com.kwad.components.offline.api.core.api.IAsync
    public final void runOnUiThreadDelay(Runnable runnable, long j) {
        bj.runOnUiThreadDelay(runnable, j);
    }

    @Override // com.kwad.components.offline.api.core.api.IAsync
    public final void schedule(Runnable runnable, long j, TimeUnit timeUnit) {
        com.kwad.sdk.utils.g.schedule(runnable, j, timeUnit);
    }
}
