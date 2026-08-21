package com.czhj.sdk.common.ThreadPool;

import java.util.concurrent.ThreadFactory;

/* JADX INFO: loaded from: classes.dex */
class BackgroundThreadFactory implements ThreadFactory {
    BackgroundThreadFactory() {
    }

    @Override // java.util.concurrent.ThreadFactory
    public Thread newThread(Runnable runnable) {
        return new Thread(runnable) { // from class: com.czhj.sdk.common.ThreadPool.BackgroundThreadFactory.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                super.run();
            }
        };
    }
}
