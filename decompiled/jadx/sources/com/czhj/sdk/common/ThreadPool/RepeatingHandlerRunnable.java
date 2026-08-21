package com.czhj.sdk.common.ThreadPool;

import android.os.Handler;
import com.czhj.sdk.common.utils.Preconditions;

/* JADX INFO: loaded from: classes.dex */
public abstract class RepeatingHandlerRunnable implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Handler f1764a;
    private volatile boolean b;
    protected volatile long mUpdateIntervalMillis;

    protected RepeatingHandlerRunnable(Handler handler) {
        Preconditions.NoThrow.checkNotNull(handler);
        this.f1764a = handler;
    }

    protected abstract void doWork();

    @Override // java.lang.Runnable
    public void run() {
        if (this.b) {
            doWork();
            this.f1764a.postDelayed(this, this.mUpdateIntervalMillis);
        }
    }

    public void startRepeating(long j) {
        Preconditions.NoThrow.checkArgument(j > 0, "intervalMillis must be greater than 0. Saw: " + j);
        this.mUpdateIntervalMillis = j;
        if (this.b) {
            return;
        }
        this.b = true;
        this.f1764a.post(this);
    }

    public void stop() {
        this.b = false;
        this.f1764a.removeCallbacksAndMessages(null);
    }
}
