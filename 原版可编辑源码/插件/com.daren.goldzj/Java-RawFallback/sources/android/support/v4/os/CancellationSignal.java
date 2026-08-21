package android.support.v4.os;

public final class CancellationSignal {
    private boolean mCancelInProgress;
    private java.lang.Object mCancellationSignalObj;
    private boolean mIsCanceled;
    private android.support.v4.os.CancellationSignal.OnCancelListener mOnCancelListener;

    public interface OnCancelListener {
        void onCancel();
    }

    public CancellationSignal() {
            r0 = this;
            r0.<init>()
            return
    }

    private void waitForCancelFinishedLocked() {
            r1 = this;
        L0:
            boolean r0 = r1.mCancelInProgress
            if (r0 == 0) goto La
            r1.wait()     // Catch: java.lang.InterruptedException -> L8
            goto L0
        L8:
            goto L0
        La:
            return
    }

    public void cancel() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.mIsCanceled     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto L7
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3e
            return
        L7:
            r0 = 1
            r4.mIsCanceled = r0     // Catch: java.lang.Throwable -> L3e
            r4.mCancelInProgress = r0     // Catch: java.lang.Throwable -> L3e
            android.support.v4.os.CancellationSignal$OnCancelListener r0 = r4.mOnCancelListener     // Catch: java.lang.Throwable -> L3e
            java.lang.Object r1 = r4.mCancellationSignalObj     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3e
            r2 = 0
            if (r0 == 0) goto L1a
            r0.onCancel()     // Catch: java.lang.Throwable -> L18
            goto L1a
        L18:
            r0 = move-exception
            goto L28
        L1a:
            if (r1 == 0) goto L33
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L18
            r3 = 16
            if (r0 < r3) goto L33
            android.os.CancellationSignal r1 = (android.os.CancellationSignal) r1     // Catch: java.lang.Throwable -> L18
            r1.cancel()     // Catch: java.lang.Throwable -> L18
            goto L33
        L28:
            monitor-enter(r4)
            r4.mCancelInProgress = r2     // Catch: java.lang.Throwable -> L30
            r4.notifyAll()     // Catch: java.lang.Throwable -> L30
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L30
            throw r0
        L30:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L30
            throw r0
        L33:
            monitor-enter(r4)
            r4.mCancelInProgress = r2     // Catch: java.lang.Throwable -> L3b
            r4.notifyAll()     // Catch: java.lang.Throwable -> L3b
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3b
            throw r0
        L3e:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3e
            throw r0
    }

    public java.lang.Object getCancellationSignalObject() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 >= r1) goto L8
            r0 = 0
            return r0
        L8:
            monitor-enter(r2)
            java.lang.Object r0 = r2.mCancellationSignalObj     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L1f
            android.os.CancellationSignal r0 = new android.os.CancellationSignal     // Catch: java.lang.Throwable -> L23
            r0.<init>()     // Catch: java.lang.Throwable -> L23
            r2.mCancellationSignalObj = r0     // Catch: java.lang.Throwable -> L23
            boolean r0 = r2.mIsCanceled     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r2.mCancellationSignalObj     // Catch: java.lang.Throwable -> L23
            android.os.CancellationSignal r0 = (android.os.CancellationSignal) r0     // Catch: java.lang.Throwable -> L23
            r0.cancel()     // Catch: java.lang.Throwable -> L23
        L1f:
            java.lang.Object r0 = r2.mCancellationSignalObj     // Catch: java.lang.Throwable -> L23
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L23
            return r0
        L23:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L23
            throw r0
    }

    public boolean isCanceled() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mIsCanceled     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5
            throw r0
    }

    public void setOnCancelListener(android.support.v4.os.CancellationSignal.OnCancelListener r2) {
            r1 = this;
            monitor-enter(r1)
            r1.waitForCancelFinishedLocked()     // Catch: java.lang.Throwable -> L1a
            android.support.v4.os.CancellationSignal$OnCancelListener r0 = r1.mOnCancelListener     // Catch: java.lang.Throwable -> L1a
            if (r0 != r2) goto La
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1a
            return
        La:
            r1.mOnCancelListener = r2     // Catch: java.lang.Throwable -> L1a
            boolean r0 = r1.mIsCanceled     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L18
            if (r2 != 0) goto L13
            goto L18
        L13:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1a
            r2.onCancel()
            return
        L18:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1a
            throw r2
    }

    public void throwIfCanceled() {
            r1 = this;
            boolean r0 = r1.isCanceled()
            if (r0 != 0) goto L7
            return
        L7:
            android.support.v4.os.OperationCanceledException r0 = new android.support.v4.os.OperationCanceledException
            r0.<init>()
            throw r0
    }
}
