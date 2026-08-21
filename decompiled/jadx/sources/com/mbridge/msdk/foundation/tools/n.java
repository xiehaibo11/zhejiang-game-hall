package com.mbridge.msdk.foundation.tools;

import com.mbridge.msdk.MBridgeConstans;
import java.util.concurrent.Executor;

/* JADX INFO: compiled from: LimitExecutor.java */
/* JADX INFO: loaded from: classes2.dex */
public final class n implements Executor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Runnable f3535a;
    private Runnable b;

    @Override // java.util.concurrent.Executor
    public final synchronized void execute(Runnable runnable) {
        if (this.f3535a == null) {
            this.f3535a = a(runnable);
            k.a().execute(this.f3535a);
        } else if (this.b == null) {
            this.b = a(runnable);
        }
    }

    private Runnable a(final Runnable runnable) {
        return new Runnable() { // from class: com.mbridge.msdk.foundation.tools.n.1
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    try {
                        runnable.run();
                    } catch (Exception e) {
                        if (MBridgeConstans.DEBUG) {
                            z.d("LimitExecutor", e.getMessage());
                        }
                    }
                } finally {
                    n.this.a();
                }
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a() {
        Runnable runnable = this.b;
        this.f3535a = runnable;
        this.b = null;
        if (runnable != null) {
            k.a().execute(this.f3535a);
        }
    }
}
