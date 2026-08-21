package cz.msebera.android.httpclient.protocol;

@java.lang.Deprecated
public class SyncBasicHttpContext extends cz.msebera.android.httpclient.protocol.BasicHttpContext {
    public SyncBasicHttpContext() {
            r0 = this;
            r0.<init>()
            return
    }

    public SyncBasicHttpContext(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public synchronized void clear() {
            r1 = this;
            monitor-enter(r1)
            super.clear()     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized java.lang.Object getAttribute(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            java.lang.Object r1 = super.getAttribute(r1)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized java.lang.Object removeAttribute(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            java.lang.Object r1 = super.removeAttribute(r1)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized void setAttribute(java.lang.String r1, java.lang.Object r2) {
            r0 = this;
            monitor-enter(r0)
            super.setAttribute(r1, r2)     // Catch: java.lang.Throwable -> L6
            monitor-exit(r0)
            return
        L6:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
