package android.support.v4.os;

import android.os.Build;

public final class CancellationSignal {
    private boolean mCancelInProgress;
    private Object mCancellationSignalObj;
    private boolean mIsCanceled;
    private OnCancelListener mOnCancelListener;

    public interface OnCancelListener {
        void onCancel();
    }

    public CancellationSignal() {
    }

    public boolean isCanceled() {
        monitor-enter(this);
        boolean r0 = this.mIsCanceled;     // Catch: Throwable -> L6
        monitor-exit(this);     // Catch: Throwable -> L6
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public void throwIfCanceled() {
        if (isCanceled() == true) goto L6;
        return;
    L6:
        throw new OperationCanceledException();
    }

    public void cancel() {
        monitor-enter(this);
    L33:
        th = move-exception;
        throw th;
    L4:
        if (this.mIsCanceled == false) goto L7;
        monitor-exit(this);     // Catch: Throwable -> L33
        return;
    L7:
        this.mIsCanceled = true;     // Catch: Throwable -> L33
        this.mCancelInProgress = true;     // Catch: Throwable -> L33
        OnCancelListener r0 = this.mOnCancelListener;     // Catch: Throwable -> L33
        Object r1 = this.mCancellationSignalObj;     // Catch: Throwable -> L33
        monitor-exit(this);     // Catch: Throwable -> L33
        if (r0 != null) goto L38;
    L14:
        if (r1 != null) goto L16;
    L26:
        monitor-enter(this);
        this.mCancelInProgress = false;     // Catch: Throwable -> L30
        notifyAll();     // Catch: Throwable -> L30
        monitor-exit(this);     // Catch: Throwable -> L30
        return;
    L30:
        th = move-exception;
        throw th;
    L16:
        if (Build.VERSION.SDK_INT < 16) goto L26;
        ((android.os.CancellationSignal) r1).cancel();     // Catch: Throwable -> L12
    L12:
        th = move-exception;
        monitor-enter(this);
        this.mCancelInProgress = false;     // Catch: Throwable -> L23
        notifyAll();     // Catch: Throwable -> L23
        throw th;
    L23:
        th = move-exception;
        throw th;
    L38:
        r0.onCancel();     // Catch: Throwable -> L12
        goto L14
    }

    public void setOnCancelListener(OnCancelListener r2) {
        monitor-enter(this);
        waitForCancelFinishedLocked();     // Catch: Throwable -> L16
        if (this.mOnCancelListener != r2) goto L7;
        monitor-exit(this);     // Catch: Throwable -> L16
        return;
    L7:
        this.mOnCancelListener = r2;     // Catch: Throwable -> L16
        if (this.mIsCanceled == false) goto L14;
        if (r2 == null) goto L14;
        monitor-exit(this);     // Catch: Throwable -> L16
        r2.onCancel();
        return;
    L14:
        monitor-exit(this);     // Catch: Throwable -> L16
        return;
    L16:
        th = move-exception;
        throw th;
    }

    public Object getCancellationSignalObject() {
        if (Build.VERSION.SDK_INT >= 16) goto L6;
        return null;
    L6:
        monitor-enter(this);
    L15:
        th = move-exception;
        throw th;
    L8:
        if (this.mCancellationSignalObj != null) goto L12;
        this.mCancellationSignalObj = new android.os.CancellationSignal();     // Catch: Throwable -> L15
        if (this.mIsCanceled == false) goto L12;
        ((android.os.CancellationSignal) this.mCancellationSignalObj).cancel();     // Catch: Throwable -> L15
    L12:
        Object r0 = this.mCancellationSignalObj;     // Catch: Throwable -> L15
        monitor-exit(this);     // Catch: Throwable -> L15
        return r0;
    }

    private void waitForCancelFinishedLocked() {
    L3:
        if (this.mCancelInProgress == false) goto L7;
        wait();     // Catch: InterruptedException -> L6
        goto L3
    }
}
