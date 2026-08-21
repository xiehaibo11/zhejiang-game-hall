package com.czhj.sdk.common.ThreadPool;

import android.os.Handler;
import com.czhj.sdk.common.utils.Preconditions;

public abstract class RepeatingHandlerRunnable implements Runnable {
    private final Handler a;
    private volatile boolean b;
    protected volatile long mUpdateIntervalMillis;

    protected RepeatingHandlerRunnable(Handler handler) {
        Preconditions.NoThrow.checkNotNull(handler);
        this.a = handler;
    }

    protected abstract void doWork();

    @Override
    public void run() {
        if (this.b) {
            doWork();
            this.a.postDelayed(this, this.mUpdateIntervalMillis);
        }
    }

    public void startRepeating(long j) {
        Preconditions.NoThrow.checkArgument(j > 0, "intervalMillis must be greater than 0. Saw: " + j);
        this.mUpdateIntervalMillis = j;
        if (this.b) {
            return;
        }
        this.b = true;
        this.a.post(this);
    }

    public void stop() {
        this.b = false;
        this.a.removeCallbacksAndMessages(null);
    }
}
