package android.support.v4.provider;

import android.os.Handler;
import android.os.HandlerThread;
import android.support.annotation.GuardedBy;
import android.support.annotation.RestrictTo;
import android.support.annotation.VisibleForTesting;
import java.util.concurrent.Callable;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.ReentrantLock;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class SelfDestructiveThread {
    private static final int MSG_DESTRUCTION = 0;
    private static final int MSG_INVOKE_RUNNABLE = 1;
    private Handler.Callback mCallback;
    private final int mDestructAfterMillisec;

    @GuardedBy("mLock")
    private int mGeneration;

    @GuardedBy("mLock")
    private Handler mHandler;
    private final Object mLock;
    private final int mPriority;

    @GuardedBy("mLock")
    private HandlerThread mThread;
    private final String mThreadName;

    public interface ReplyCallback<T> {
        void onReply(T r1);
    }

    public SelfDestructiveThread(String r2, int r3, int r4) {
        this.mLock = new Object();
        this.mCallback = new 1(this);
        this.mThreadName = r2;
        this.mPriority = r3;
        this.mDestructAfterMillisec = r4;
        this.mGeneration = 0;
    }

    @VisibleForTesting
    public boolean isRunning() {
        Object r0 = this.mLock;
        monitor-enter(r0);
    L10:
        th = move-exception;
        throw th;
    L5:
        if (this.mThread == null) goto L7;
        boolean r1 = true;
    L8:
        monitor-exit(r0);     // Catch: Throwable -> L10
        return r1;
    L7:
        r1 = false;
        goto L8
    }

    @VisibleForTesting
    public int getGeneration() {
        Object r0 = this.mLock;
        monitor-enter(r0);
        int r1 = this.mGeneration;     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return r1;
    L7:
        th = move-exception;
        throw th;
    }

    private void post(Runnable r6) {
        Object r0 = this.mLock;
        monitor-enter(r0);
    L10:
        th = move-exception;
        throw th;
    L5:
        if (this.mThread != null) goto L7;
        this.mThread = new HandlerThread(this.mThreadName, this.mPriority);     // Catch: Throwable -> L10
        this.mThread.start();     // Catch: Throwable -> L10
        this.mHandler = new Handler(this.mThread.getLooper(), this.mCallback);     // Catch: Throwable -> L10
        this.mGeneration++;
    L7:
        this.mHandler.removeMessages(0);     // Catch: Throwable -> L10
        this.mHandler.sendMessage(this.mHandler.obtainMessage(1, r6));     // Catch: Throwable -> L10
        monitor-exit(r0);     // Catch: Throwable -> L10
    }

    public <T> void postAndReply(final Callable<T> r3, final ReplyCallback<T> r4) {
        final Handler r0 = new Handler();
        post(new 2(this, r3, r0, r4));
    }

    public <T> T postAndWait(final Callable<T> r13, int r14) throws InterruptedException {
        final ReentrantLock r7 = new ReentrantLock();
        final Condition r8 = r7.newCondition();
        final AtomicReference r9 = new AtomicReference();
        final AtomicBoolean r10 = new AtomicBoolean(true);
        post(new 3(this, r9, r13, r7, r10, r8));
        r7.lock();
    L20:
        th = move-exception;
        r7.unlock();
        throw th;
    L4:
        if (r10.get() == true) goto L8;
        T r132 = (T) r9.get();
        r7.unlock();
        return r132;
    L8:
        long r133 = TimeUnit.MILLISECONDS.toNanos(r14);     // Catch: Throwable -> L20
    L24:
        r133 = r8.awaitNanos(r133);     // Catch: InterruptedException -> L23 Throwable -> L20
    L11:
        if (r10.get() == false) goto L12;
        if (r133 > 0) goto L24;
        throw new InterruptedException("timeout");     // Catch: Throwable -> L20
    L12:
        T r134 = (T) r9.get();
        r7.unlock();
        return r134;
    }

    void onInvokeRunnable(Runnable r5) {
        r5.run();
        Object r52 = this.mLock;
        monitor-enter(r52);
        this.mHandler.removeMessages(0);     // Catch: Throwable -> L7
        this.mHandler.sendMessageDelayed(this.mHandler.obtainMessage(0), this.mDestructAfterMillisec);     // Catch: Throwable -> L7
        monitor-exit(r52);     // Catch: Throwable -> L7
        return;
    L7:
        th = move-exception;
        throw th;
    }

    void onDestruction() {
        Object r0 = this.mLock;
        monitor-enter(r0);
    L11:
        th = move-exception;
        throw th;
    L5:
        if (this.mHandler.hasMessages(1) == false) goto L8;
        monitor-exit(r0);     // Catch: Throwable -> L11
        return;
    L8:
        this.mThread.quit();     // Catch: Throwable -> L11
        this.mThread = null;     // Catch: Throwable -> L11
        this.mHandler = null;     // Catch: Throwable -> L11
        monitor-exit(r0);     // Catch: Throwable -> L11
    }
}
