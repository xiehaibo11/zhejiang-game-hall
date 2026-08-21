package com.kwad.sdk.utils;

import com.kwad.sdk.core.threads.GlobalThreadPools;
import java.util.concurrent.Executor;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

public class g {
    private static volatile Executor aHY;
    private static volatile ScheduledExecutorService aHZ;

    public static void execute(Runnable runnable) {
        if (aHY == null) {
            synchronized (g.class) {
                if (aHY == null) {
                    aHY = GlobalThreadPools.CZ();
                }
            }
        }
        aHY.execute(runnable);
    }

    public static void schedule(Runnable runnable, long j, TimeUnit timeUnit) {
        if (aHZ == null) {
            synchronized (g.class) {
                if (aHZ == null) {
                    aHZ = GlobalThreadPools.Da();
                }
            }
        }
        aHZ.schedule(runnable, j, timeUnit);
    }
}
