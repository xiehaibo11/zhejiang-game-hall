package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
public class FileResourceFactory implements cz.msebera.android.httpclient.client.cache.ResourceFactory {
    private final java.io.File cacheDir;
    private final cz.msebera.android.httpclient.impl.client.cache.BasicIdGenerator idgen;

    public FileResourceFactory(java.io.File r1) {
            r0 = this;
            r0.<init>()
            r0.cacheDir = r1
            cz.msebera.android.httpclient.impl.client.cache.BasicIdGenerator r1 = new cz.msebera.android.httpclient.impl.client.cache.BasicIdGenerator
            r1.<init>()
            r0.idgen = r1
            return
    }

    private java.io.File generateUniqueCacheFile(java.lang.String r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.cache.BasicIdGenerator r1 = r6.idgen
            r1.generate(r0)
            r1 = 46
            r0.append(r1)
            int r2 = r7.length()
            r3 = 100
            int r2 = java.lang.Math.min(r2, r3)
            r3 = 0
        L1a:
            if (r3 >= r2) goto L35
            char r4 = r7.charAt(r3)
            boolean r5 = java.lang.Character.isLetterOrDigit(r4)
            if (r5 != 0) goto L2f
            if (r4 != r1) goto L29
            goto L2f
        L29:
            r4 = 45
            r0.append(r4)
            goto L32
        L2f:
            r0.append(r4)
        L32:
            int r3 = r3 + 1
            goto L1a
        L35:
            java.io.File r7 = new java.io.File
            java.io.File r1 = r6.cacheDir
            java.lang.String r0 = r0.toString()
            r7.<init>(r1, r0)
            return r7
    }

    @Override
    public cz.msebera.android.httpclient.client.cache.Resource copy(java.lang.String r2, cz.msebera.android.httpclient.client.cache.Resource r3) throws java.io.IOException {
            r1 = this;
            java.io.File r2 = r1.generateUniqueCacheFile(r2)
            boolean r0 = r3 instanceof cz.msebera.android.httpclient.impl.client.cache.FileResource
            if (r0 == 0) goto L12
            cz.msebera.android.httpclient.impl.client.cache.FileResource r3 = (cz.msebera.android.httpclient.impl.client.cache.FileResource) r3
            java.io.File r3 = r3.getFile()
            cz.msebera.android.httpclient.impl.client.cache.IOUtils.copyFile(r3, r2)
            goto L1e
        L12:
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r2)
            java.io.InputStream r3 = r3.getInputStream()
            cz.msebera.android.httpclient.impl.client.cache.IOUtils.copyAndClose(r3, r0)
        L1e:
            cz.msebera.android.httpclient.impl.client.cache.FileResource r3 = new cz.msebera.android.httpclient.impl.client.cache.FileResource
            r3.<init>(r2)
            return r3
    }

    @Override
    public cz.msebera.android.httpclient.client.cache.Resource generate(java.lang.String r8, java.io.InputStream r9, cz.msebera.android.httpclient.client.cache.InputLimit r10) throws java.io.IOException {
            r7 = this;
            java.io.File r8 = r7.generateUniqueCacheFile(r8)
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r8)
            r1 = 2048(0x800, float:2.87E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L32
            r2 = 0
        Lf:
            int r4 = r9.read(r1)     // Catch: java.lang.Throwable -> L32
            r5 = -1
            if (r4 == r5) goto L29
            r5 = 0
            r0.write(r1, r5, r4)     // Catch: java.lang.Throwable -> L32
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L32
            long r2 = r2 + r4
            if (r10 == 0) goto Lf
            long r4 = r10.getValue()     // Catch: java.lang.Throwable -> L32
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto Lf
            r10.reached()     // Catch: java.lang.Throwable -> L32
        L29:
            r0.close()
            cz.msebera.android.httpclient.impl.client.cache.FileResource r9 = new cz.msebera.android.httpclient.impl.client.cache.FileResource
            r9.<init>(r8)
            return r9
        L32:
            r8 = move-exception
            r0.close()
            throw r8
    }
}
