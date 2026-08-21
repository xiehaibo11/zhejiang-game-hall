package com.kwad.components.offline.api.core.api;

public interface IAsync {
    void execute(java.lang.Runnable r1);

    void runOnDefaultExecutor(java.lang.Runnable r1);

    void runOnUiThread(java.lang.Runnable r1);

    void runOnUiThreadDelay(java.lang.Runnable r1, long r2);

    void schedule(java.lang.Runnable r1, long r2, java.util.concurrent.TimeUnit r4);
}
