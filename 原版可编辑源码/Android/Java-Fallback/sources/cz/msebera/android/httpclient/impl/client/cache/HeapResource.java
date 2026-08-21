package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
public class HeapResource implements cz.msebera.android.httpclient.client.cache.Resource {
    private static final long serialVersionUID = -2078599905620463394L;
    private final byte[] b;

    public HeapResource(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    @Override
    public void dispose() {
            r0 = this;
            return
    }

    byte[] getByteArray() {
            r1 = this;
            byte[] r0 = r1.b
            return r0
    }

    @Override
    public java.io.InputStream getInputStream() {
            r2 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r2.b
            r0.<init>(r1)
            return r0
    }

    @Override
    public long length() {
            r2 = this;
            byte[] r0 = r2.b
            int r0 = r0.length
            long r0 = (long) r0
            return r0
    }
}
