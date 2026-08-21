package cz.msebera.android.httpclient.impl.conn.tsccm;

@java.lang.Deprecated
public class BasicPooledConnAdapter extends cz.msebera.android.httpclient.impl.conn.AbstractPooledConnAdapter {
    protected BasicPooledConnAdapter(cz.msebera.android.httpclient.impl.conn.tsccm.ThreadSafeClientConnManager r1, cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.markReusable()
            return
    }

    @Override
    protected void detach() {
            r0 = this;
            super.detach()
            return
    }

    @Override
    protected cz.msebera.android.httpclient.conn.ClientConnectionManager getManager() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = super.getManager()
            return r0
    }

    @Override
    protected cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry getPoolEntry() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = super.getPoolEntry()
            return r0
    }
}
