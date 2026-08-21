package com.huawei.hms.framework.common;

public class ScheduledThreadPoolExecutorEnhance extends java.util.concurrent.ScheduledThreadPoolExecutor {
    private static final java.lang.String TAG = "ScheduledThreadPoolExec";

    public ScheduledThreadPoolExecutorEnhance(int r1, java.util.concurrent.ThreadFactory r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void beforeExecute(java.lang.Thread r6, java.lang.Runnable r7) {
            r5 = this;
            boolean r0 = r7 instanceof com.huawei.hms.framework.common.RunnableScheduledFutureEnhance
            if (r0 == 0) goto L3f
            r0 = r7
            com.huawei.hms.framework.common.RunnableScheduledFutureEnhance r0 = (com.huawei.hms.framework.common.RunnableScheduledFutureEnhance) r0
            java.lang.String r0 = r0.getParentName()
            java.lang.String r1 = " -->"
            int r2 = r0.lastIndexOf(r1)
            r3 = -1
            if (r2 == r3) goto L1a
            int r2 = r2 + 4
            java.lang.String r0 = com.huawei.hms.framework.common.StringUtils.substring(r0, r2)
        L1a:
            java.lang.String r2 = r6.getName()
            int r4 = r2.lastIndexOf(r1)
            if (r4 == r3) goto L2a
            int r4 = r4 + 4
            java.lang.String r2 = com.huawei.hms.framework.common.StringUtils.substring(r2, r4)
        L2a:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r1)
            r3.append(r2)
            java.lang.String r0 = r3.toString()
            r6.setName(r0)
        L3f:
            super.beforeExecute(r6, r7)
            return
    }

    @Override
    protected <V> java.util.concurrent.RunnableScheduledFuture<V> decorateTask(java.lang.Runnable r2, java.util.concurrent.RunnableScheduledFuture<V> r3) {
            r1 = this;
            com.huawei.hms.framework.common.RunnableScheduledFutureEnhance r0 = new com.huawei.hms.framework.common.RunnableScheduledFutureEnhance
            java.util.concurrent.RunnableScheduledFuture r2 = super.decorateTask(r2, r3)
            r0.<init>(r2)
            return r0
    }

    @Override
    protected <V> java.util.concurrent.RunnableScheduledFuture<V> decorateTask(java.util.concurrent.Callable<V> r2, java.util.concurrent.RunnableScheduledFuture<V> r3) {
            r1 = this;
            com.huawei.hms.framework.common.RunnableScheduledFutureEnhance r0 = new com.huawei.hms.framework.common.RunnableScheduledFutureEnhance
            java.util.concurrent.RunnableScheduledFuture r2 = super.decorateTask(r2, r3)
            r0.<init>(r2)
            return r0
    }
}
