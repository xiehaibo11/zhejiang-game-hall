package com.alibaba.sdk.android.oss.common;

public class LogThreadPoolManager {
    private static final int PERIOD_TASK_QOS = 1000;
    private static final int SIZE_CACHE_QUEUE = 200;
    private static final int SIZE_CORE_POOL = 1;
    private static final int SIZE_MAX_POOL = 1;
    private static final int SIZE_WORK_QUEUE = 500;
    private static final int TIME_KEEP_ALIVE = 5000;
    private static com.alibaba.sdk.android.oss.common.LogThreadPoolManager sThreadPoolManager;
    private final java.lang.Runnable mAccessBufferThread;
    private final java.util.concurrent.RejectedExecutionHandler mHandler;
    protected final java.util.concurrent.ScheduledFuture<?> mTaskHandler;
    private final java.util.Queue<java.lang.Runnable> mTaskQueue;
    private final java.util.concurrent.ThreadPoolExecutor mThreadPool;
    private final java.util.concurrent.ScheduledExecutorService scheduler;




    static {
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager r0 = new com.alibaba.sdk.android.oss.common.LogThreadPoolManager
            r0.<init>()
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager.sThreadPoolManager = r0
            return
    }

    private LogThreadPoolManager() {
            r18 = this;
            r0 = r18
            r18.<init>()
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            r0.mTaskQueue = r1
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager$1 r1 = new com.alibaba.sdk.android.oss.common.LogThreadPoolManager$1
            r1.<init>(r0)
            r0.mHandler = r1
            r1 = 1
            java.util.concurrent.ScheduledExecutorService r1 = java.util.concurrent.Executors.newScheduledThreadPool(r1)
            r0.scheduler = r1
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.ArrayBlockingQueue r8 = new java.util.concurrent.ArrayBlockingQueue
            r2 = 500(0x1f4, float:7.0E-43)
            r8.<init>(r2)
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager$2 r9 = new com.alibaba.sdk.android.oss.common.LogThreadPoolManager$2
            r9.<init>(r0)
            java.util.concurrent.RejectedExecutionHandler r10 = r0.mHandler
            r3 = 1
            r4 = 1
            r5 = 5000(0x1388, double:2.4703E-320)
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9, r10)
            r0.mThreadPool = r1
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager$3 r12 = new com.alibaba.sdk.android.oss.common.LogThreadPoolManager$3
            r12.<init>(r0)
            r0.mAccessBufferThread = r12
            java.util.concurrent.ScheduledExecutorService r11 = r0.scheduler
            java.util.concurrent.TimeUnit r17 = java.util.concurrent.TimeUnit.MILLISECONDS
            r13 = 0
            r15 = 1000(0x3e8, double:4.94E-321)
            java.util.concurrent.ScheduledFuture r1 = r11.scheduleAtFixedRate(r12, r13, r15, r17)
            r0.mTaskHandler = r1
            return
    }

    static java.util.Queue access$000(com.alibaba.sdk.android.oss.common.LogThreadPoolManager r0) {
            java.util.Queue<java.lang.Runnable> r0 = r0.mTaskQueue
            return r0
    }

    static boolean access$100(com.alibaba.sdk.android.oss.common.LogThreadPoolManager r0) {
            boolean r0 = r0.hasMoreAcquire()
            return r0
    }

    static java.util.concurrent.ThreadPoolExecutor access$200(com.alibaba.sdk.android.oss.common.LogThreadPoolManager r0) {
            java.util.concurrent.ThreadPoolExecutor r0 = r0.mThreadPool
            return r0
    }

    private boolean hasMoreAcquire() {
            r1 = this;
            java.util.Queue<java.lang.Runnable> r0 = r1.mTaskQueue
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ 1
            return r0
    }

    public static com.alibaba.sdk.android.oss.common.LogThreadPoolManager newInstance() {
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager r0 = com.alibaba.sdk.android.oss.common.LogThreadPoolManager.sThreadPoolManager
            if (r0 != 0) goto Lb
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager r0 = new com.alibaba.sdk.android.oss.common.LogThreadPoolManager
            r0.<init>()
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager.sThreadPoolManager = r0
        Lb:
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager r0 = com.alibaba.sdk.android.oss.common.LogThreadPoolManager.sThreadPoolManager
            return r0
    }

    public void addExecuteTask(java.lang.Runnable r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.concurrent.ThreadPoolExecutor r0 = r1.mThreadPool
            r0.execute(r2)
        L7:
            return
    }
}
