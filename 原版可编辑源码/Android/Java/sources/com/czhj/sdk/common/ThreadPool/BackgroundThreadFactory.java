package com.czhj.sdk.common.ThreadPool;

import java.util.concurrent.ThreadFactory;

class BackgroundThreadFactory implements ThreadFactory {
    BackgroundThreadFactory() {
    }

    @Override
    public Thread newThread(Runnable runnable) {
        return new Thread(runnable) {
            @Override
            public void run() {
                super.run();
            }
        };
    }
}
