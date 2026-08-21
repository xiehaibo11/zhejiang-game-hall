package com.mbridge.msdk.foundation.download.core;

public class PriorityThreadFactory implements java.util.concurrent.ThreadFactory {
    private final int threadPriority;


    PriorityThreadFactory(int r1) {
            r0 = this;
            r0.<init>()
            r0.threadPriority = r1
            return
    }

    static int access$000(com.mbridge.msdk.foundation.download.core.PriorityThreadFactory r0) {
            int r0 = r0.threadPriority
            return r0
    }

    @Override
    public java.lang.Thread newThread(java.lang.Runnable r2) {
            r1 = this;
            com.mbridge.msdk.foundation.download.core.PriorityThreadFactory$1 r0 = new com.mbridge.msdk.foundation.download.core.PriorityThreadFactory$1
            r0.<init>(r1, r2)
            java.lang.Thread r2 = new java.lang.Thread
            r2.<init>(r0)
            java.lang.String r0 = "mb_download_thread"
            r2.setName(r0)
            return r2
    }
}
