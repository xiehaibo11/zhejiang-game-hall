package com.czhj.sdk.common.ThreadPool;

class BackgroundThreadFactory implements java.util.concurrent.ThreadFactory {


    BackgroundThreadFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.Thread newThread(java.lang.Runnable r2) {
            r1 = this;
            com.czhj.sdk.common.ThreadPool.BackgroundThreadFactory$1 r0 = new com.czhj.sdk.common.ThreadPool.BackgroundThreadFactory$1
            r0.<init>(r1, r2)
            return r0
    }
}
