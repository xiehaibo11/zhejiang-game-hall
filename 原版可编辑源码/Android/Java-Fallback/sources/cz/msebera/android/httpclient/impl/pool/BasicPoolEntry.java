package cz.msebera.android.httpclient.impl.pool;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class BasicPoolEntry extends cz.msebera.android.httpclient.pool.PoolEntry<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.HttpClientConnection> {
    public BasicPoolEntry(java.lang.String r1, cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpClientConnection r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public void close() {
            r1 = this;
            java.lang.Object r0 = r1.getConnection()     // Catch: java.io.IOException -> L9
            cz.msebera.android.httpclient.HttpClientConnection r0 = (cz.msebera.android.httpclient.HttpClientConnection) r0     // Catch: java.io.IOException -> L9
            r0.close()     // Catch: java.io.IOException -> L9
        L9:
            return
    }

    @Override
    public boolean isClosed() {
            r1 = this;
            java.lang.Object r0 = r1.getConnection()
            cz.msebera.android.httpclient.HttpClientConnection r0 = (cz.msebera.android.httpclient.HttpClientConnection) r0
            boolean r0 = r0.isOpen()
            r0 = r0 ^ 1
            return r0
    }
}
