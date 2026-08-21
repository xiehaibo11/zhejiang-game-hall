package com.kwad.sdk.core.threads.a;

import android.os.SystemClock;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.ThreadFactory;

public final class a extends ScheduledThreadPoolExecutor implements c {
    public static volatile boolean avy;
    private long avA;
    private int avB;
    private final ConcurrentHashMap<Runnable, Long> avz;

    public a(int i, ThreadFactory threadFactory) {
        super(1, threadFactory);
        this.avz = new ConcurrentHashMap<>();
        this.avA = 0L;
        this.avB = 0;
    }

    @Override
    public final long Dl() {
        return this.avA;
    }

    @Override
    protected final void beforeExecute(Thread thread, Runnable runnable) {
        super.beforeExecute(thread, runnable);
        if (avy && this.avz.containsKey(runnable) && this.avz.get(runnable) != null) {
            long jElapsedRealtime = SystemClock.elapsedRealtime() - this.avz.get(runnable).longValue();
            if (jElapsedRealtime >= 0 && jElapsedRealtime < 1800000) {
                long j = this.avA;
                int i = this.avB;
                this.avA = ((j * ((long) i)) + jElapsedRealtime) / ((long) (i + 1));
                this.avB = i + 1;
            }
            this.avz.remove(runnable);
        }
    }

    @Override
    public final void execute(Runnable runnable) {
        if (avy) {
            this.avz.put(runnable, Long.valueOf(SystemClock.elapsedRealtime()));
        }
        super.execute(runnable);
    }
}
