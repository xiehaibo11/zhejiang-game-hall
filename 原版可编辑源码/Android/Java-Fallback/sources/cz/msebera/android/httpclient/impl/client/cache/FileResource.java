package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class FileResource implements cz.msebera.android.httpclient.client.cache.Resource {
    private static final long serialVersionUID = 4132244415919043397L;
    private volatile boolean disposed;
    private final java.io.File file;

    public FileResource(java.io.File r1) {
            r0 = this;
            r0.<init>()
            r0.file = r1
            r1 = 0
            r0.disposed = r1
            return
    }

    @Override
    public synchronized void dispose() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.disposed     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L7
            monitor-exit(r1)
            return
        L7:
            r0 = 1
            r1.disposed = r0     // Catch: java.lang.Throwable -> L11
            java.io.File r0 = r1.file     // Catch: java.lang.Throwable -> L11
            r0.delete()     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return
        L11:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    synchronized java.io.File getFile() {
            r1 = this;
            monitor-enter(r1)
            java.io.File r0 = r1.file     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized java.io.InputStream getInputStream() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> La
            java.io.File r1 = r2.file     // Catch: java.lang.Throwable -> La
            r0.<init>(r1)     // Catch: java.lang.Throwable -> La
            monitor-exit(r2)
            return r0
        La:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public synchronized long length() {
            r2 = this;
            monitor-enter(r2)
            java.io.File r0 = r2.file     // Catch: java.lang.Throwable -> L9
            long r0 = r0.length()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r2)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
