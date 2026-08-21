package com.mbridge.msdk.foundation.download.core;

import android.os.Process;
import java.util.concurrent.ThreadFactory;

public class PriorityThreadFactory implements ThreadFactory {
    private final int threadPriority;

    PriorityThreadFactory(int i) {
        this.threadPriority = i;
    }

    @Override
    public Thread newThread(final Runnable runnable) {
        Thread thread = new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    Process.setThreadPriority(PriorityThreadFactory.this.threadPriority);
                } catch (Throwable unused) {
                }
                runnable.run();
            }
        });
        thread.setName("mb_download_thread");
        return thread;
    }
}
