package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
public class HeapResourceFactory implements cz.msebera.android.httpclient.client.cache.ResourceFactory {
    public HeapResourceFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public cz.msebera.android.httpclient.client.cache.Resource copy(java.lang.String r1, cz.msebera.android.httpclient.client.cache.Resource r2) throws java.io.IOException {
            r0 = this;
            boolean r1 = r2 instanceof cz.msebera.android.httpclient.impl.client.cache.HeapResource
            if (r1 == 0) goto Lb
            cz.msebera.android.httpclient.impl.client.cache.HeapResource r2 = (cz.msebera.android.httpclient.impl.client.cache.HeapResource) r2
            byte[] r1 = r2.getByteArray()
            goto L1b
        Lb:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            java.io.InputStream r2 = r2.getInputStream()
            cz.msebera.android.httpclient.impl.client.cache.IOUtils.copyAndClose(r2, r1)
            byte[] r1 = r1.toByteArray()
        L1b:
            cz.msebera.android.httpclient.client.cache.Resource r1 = r0.createResource(r1)
            return r1
    }

    cz.msebera.android.httpclient.client.cache.Resource createResource(byte[] r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.HeapResource r0 = new cz.msebera.android.httpclient.impl.client.cache.HeapResource
            r0.<init>(r2)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.client.cache.Resource generate(java.lang.String r7, java.io.InputStream r8, cz.msebera.android.httpclient.client.cache.InputLimit r9) throws java.io.IOException {
            r6 = this;
            java.io.ByteArrayOutputStream r7 = new java.io.ByteArrayOutputStream
            r7.<init>()
            r0 = 2048(0x800, float:2.87E-42)
            byte[] r0 = new byte[r0]
            r1 = 0
        Lb:
            int r3 = r8.read(r0)
            r4 = -1
            if (r3 == r4) goto L25
            r4 = 0
            r7.write(r0, r4, r3)
            long r3 = (long) r3
            long r1 = r1 + r3
            if (r9 == 0) goto Lb
            long r3 = r9.getValue()
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 <= 0) goto Lb
            r9.reached()
        L25:
            byte[] r7 = r7.toByteArray()
            cz.msebera.android.httpclient.client.cache.Resource r7 = r6.createResource(r7)
            return r7
    }
}
