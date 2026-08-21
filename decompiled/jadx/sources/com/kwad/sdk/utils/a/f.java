package com.kwad.sdk.utils.a;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes2.dex */
public final class f implements Executor {
    private Runnable aLv;
    private Runnable aLw;

    private Runnable c(final Runnable runnable) {
        return new Runnable() { // from class: com.kwad.sdk.utils.a.f.1
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    runnable.run();
                } finally {
                    f.this.scheduleNext();
                }
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void scheduleNext() {
        Runnable runnable = this.aLw;
        this.aLv = runnable;
        this.aLw = null;
        if (runnable != null) {
            d.getExecutor().execute(this.aLv);
        }
    }

    @Override // java.util.concurrent.Executor
    public final synchronized void execute(Runnable runnable) {
        if (this.aLv == null) {
            this.aLv = c(runnable);
            d.getExecutor().execute(this.aLv);
        } else {
            if (this.aLw == null) {
                this.aLw = c(runnable);
            }
        }
    }
}
