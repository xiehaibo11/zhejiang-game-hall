package com.mbridge.msdk.foundation.tools;

import com.mbridge.msdk.MBridgeConstans;
import java.util.concurrent.Executor;

public final class n implements Executor {
    private Runnable a;
    private Runnable b;

    @Override
    public final synchronized void execute(Runnable runnable) {
        if (this.a == null) {
            this.a = a(runnable);
            k.a().execute(this.a);
        } else if (this.b == null) {
            this.b = a(runnable);
        }
    }

    private Runnable a(final Runnable runnable) {
        return new Runnable() {
            @Override
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

    private synchronized void a() {
        Runnable runnable = this.b;
        this.a = runnable;
        this.b = null;
        if (runnable != null) {
            k.a().execute(this.a);
        }
    }
}
