package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultHttpCacheEntrySerializer implements cz.msebera.android.httpclient.client.cache.HttpCacheEntrySerializer {
    public DefaultHttpCacheEntrySerializer() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public cz.msebera.android.httpclient.client.cache.HttpCacheEntry readFrom(java.io.InputStream r5) throws java.io.IOException {
            r4 = this;
            java.io.ObjectInputStream r0 = new java.io.ObjectInputStream
            r0.<init>(r5)
            java.lang.Object r5 = r0.readObject()     // Catch: java.lang.Throwable -> Lf java.lang.ClassNotFoundException -> L11
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5 = (cz.msebera.android.httpclient.client.cache.HttpCacheEntry) r5     // Catch: java.lang.Throwable -> Lf java.lang.ClassNotFoundException -> L11
            r0.close()
            return r5
        Lf:
            r5 = move-exception
            goto L2d
        L11:
            r5 = move-exception
            cz.msebera.android.httpclient.client.cache.HttpCacheEntrySerializationException r1 = new cz.msebera.android.httpclient.client.cache.HttpCacheEntrySerializationException     // Catch: java.lang.Throwable -> Lf
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf
            r2.<init>()     // Catch: java.lang.Throwable -> Lf
            java.lang.String r3 = "Class not found: "
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r3 = r5.getMessage()     // Catch: java.lang.Throwable -> Lf
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lf
            r1.<init>(r2, r5)     // Catch: java.lang.Throwable -> Lf
            throw r1     // Catch: java.lang.Throwable -> Lf
        L2d:
            r0.close()
            throw r5
    }

    @Override
    public void writeTo(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2, java.io.OutputStream r3) throws java.io.IOException {
            r1 = this;
            java.io.ObjectOutputStream r0 = new java.io.ObjectOutputStream
            r0.<init>(r3)
            r0.writeObject(r2)     // Catch: java.lang.Throwable -> Lc
            r0.close()
            return
        Lc:
            r2 = move-exception
            r0.close()
            throw r2
    }
}
