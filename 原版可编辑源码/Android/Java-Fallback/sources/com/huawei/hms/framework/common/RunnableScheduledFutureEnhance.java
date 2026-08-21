package com.huawei.hms.framework.common;

public class RunnableScheduledFutureEnhance<T> implements java.util.concurrent.RunnableScheduledFuture<T> {
    private java.lang.String parentName;
    private java.util.concurrent.RunnableScheduledFuture<T> proxy;

    public RunnableScheduledFutureEnhance(java.util.concurrent.RunnableScheduledFuture<T> r2) {
            r1 = this;
            r1.<init>()
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.String r0 = r0.getName()
            r1.parentName = r0
            r1.proxy = r2
            return
    }

    @Override
    public boolean cancel(boolean r2) {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            boolean r2 = r0.cancel(r2)
            return r2
    }

    @Override
    public int compareTo(java.util.concurrent.Delayed r1) {
            r0 = this;
            java.util.concurrent.Delayed r1 = (java.util.concurrent.Delayed) r1
            int r1 = r0.compareTo(r1)
            return r1
    }

    public int compareTo(java.util.concurrent.Delayed r2) {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            int r2 = r0.compareTo(r2)
            return r2
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    public T get() {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            java.lang.Object r0 = r0.get()
            return r0
    }

    @Override
    public T get(long r2, java.util.concurrent.TimeUnit r4) {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            java.lang.Object r2 = r0.get(r2, r4)
            return r2
    }

    @Override
    public long getDelay(java.util.concurrent.TimeUnit r3) {
            r2 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r2.proxy
            long r0 = r0.getDelay(r3)
            return r0
    }

    public java.lang.String getParentName() {
            r1 = this;
            java.lang.String r0 = r1.parentName
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public boolean isCancelled() {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            boolean r0 = r0.isCancelled()
            return r0
    }

    @Override
    public boolean isDone() {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            boolean r0 = r0.isDone()
            return r0
    }

    @Override
    public boolean isPeriodic() {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            boolean r0 = r0.isPeriodic()
            return r0
    }

    @Override
    public void run() {
            r1 = this;
            java.util.concurrent.RunnableScheduledFuture<T> r0 = r1.proxy
            r0.run()
            return
    }
}
