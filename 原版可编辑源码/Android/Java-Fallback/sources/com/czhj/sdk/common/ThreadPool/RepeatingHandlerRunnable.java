package com.czhj.sdk.common.ThreadPool;

public abstract class RepeatingHandlerRunnable implements java.lang.Runnable {
    private final android.os.Handler a;
    private volatile boolean b;
    protected volatile long mUpdateIntervalMillis;

    protected RepeatingHandlerRunnable(android.os.Handler r1) {
            r0 = this;
            r0.<init>()
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            r0.a = r1
            return
    }

    protected abstract void doWork();

    @Override
    public void run() {
            r3 = this;
            boolean r0 = r3.b
            if (r0 == 0) goto Le
            r3.doWork()
            android.os.Handler r0 = r3.a
            long r1 = r3.mUpdateIntervalMillis
            r0.postDelayed(r3, r1)
        Le:
            return
    }

    public void startRepeating(long r5) {
            r4 = this;
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            r1 = 1
            if (r0 <= 0) goto L9
            r0 = r1
            goto La
        L9:
            r0 = 0
        La:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "intervalMillis must be greater than 0. Saw: "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkArgument(r0, r2)
            r4.mUpdateIntervalMillis = r5
            boolean r5 = r4.b
            if (r5 != 0) goto L2b
            r4.b = r1
            android.os.Handler r5 = r4.a
            r5.post(r4)
        L2b:
            return
    }

    public void stop() {
            r2 = this;
            r0 = 0
            r2.b = r0
            android.os.Handler r0 = r2.a
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            return
    }
}
