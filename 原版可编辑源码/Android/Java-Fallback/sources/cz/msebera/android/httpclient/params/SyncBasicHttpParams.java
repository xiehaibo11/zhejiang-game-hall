package cz.msebera.android.httpclient.params;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class SyncBasicHttpParams extends cz.msebera.android.httpclient.params.BasicHttpParams {
    private static final long serialVersionUID = 5387834869062660642L;

    public SyncBasicHttpParams() {
            r0 = this;
            r0.<init>()
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
    public synchronized java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            monitor-enter(r1)
            java.lang.Object r0 = super.clone()     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return r0
        L7:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized java.lang.Object getParameter(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            java.lang.Object r1 = super.getParameter(r1)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized boolean isParameterSet(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            boolean r1 = super.isParameterSet(r1)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized boolean isParameterSetLocally(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            boolean r1 = super.isParameterSetLocally(r1)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized boolean removeParameter(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            boolean r1 = super.removeParameter(r1)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized cz.msebera.android.httpclient.params.HttpParams setParameter(java.lang.String r1, java.lang.Object r2) {
            r0 = this;
            monitor-enter(r0)
            cz.msebera.android.httpclient.params.HttpParams r1 = super.setParameter(r1, r2)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized void setParameters(java.lang.String[] r1, java.lang.Object r2) {
            r0 = this;
            monitor-enter(r0)
            super.setParameters(r1, r2)     // Catch: java.lang.Throwable -> L6
            monitor-exit(r0)
            return
        L6:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
