package cz.msebera.android.httpclient.impl.conn.tsccm;

@java.lang.Deprecated
public class WaitingThreadAborter {
    private boolean aborted;
    private cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread waitingThread;

    public WaitingThreadAborter() {
            r0 = this;
            r0.<init>()
            return
    }

    public void abort() {
            r1 = this;
            r0 = 1
            r1.aborted = r0
            cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r0 = r1.waitingThread
            if (r0 == 0) goto La
            r0.interrupt()
        La:
            return
    }

    public void setWaitingThread(cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r2) {
            r1 = this;
            r1.waitingThread = r2
            boolean r0 = r1.aborted
            if (r0 == 0) goto L9
            r2.interrupt()
        L9:
            return
    }
}
