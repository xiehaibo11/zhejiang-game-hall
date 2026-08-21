package okio;

@kotlin.Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0007\b\u0000\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\b\u0010\u0007\u001a\u00020\bH\u0014J\b\u0010\t\u001a\u00020\bH\u0014J(\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u000b2\u0006\u0010\u0011\u001a\u00020\u000bH\u0014J\u0010\u0010\u0012\u001a\u00020\b2\u0006\u0010\u0013\u001a\u00020\rH\u0014J\b\u0010\u0014\u001a\u00020\rH\u0014J(\u0010\u0015\u001a\u00020\b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u000b2\u0006\u0010\u0011\u001a\u00020\u000bH\u0014R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lokio/JvmFileHandle;", "Lokio/FileHandle;", "readWrite", "", "randomAccessFile", "Ljava/io/RandomAccessFile;", "(ZLjava/io/RandomAccessFile;)V", "protectedClose", "", "protectedFlush", "protectedRead", "", "fileOffset", "", "array", "", "arrayOffset", "byteCount", "protectedResize", "size", "protectedSize", "protectedWrite", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class JvmFileHandle extends okio.FileHandle {
    private final java.io.RandomAccessFile randomAccessFile;

    public JvmFileHandle(boolean r2, java.io.RandomAccessFile r3) {
            r1 = this;
            java.lang.String r0 = "randomAccessFile"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>(r2)
            r1.randomAccessFile = r3
            return
    }

    @Override
    protected synchronized void protectedClose() {
            r1 = this;
            monitor-enter(r1)
            java.io.RandomAccessFile r0 = r1.randomAccessFile     // Catch: java.lang.Throwable -> L8
            r0.close()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    protected synchronized void protectedFlush() {
            r1 = this;
            monitor-enter(r1)
            java.io.RandomAccessFile r0 = r1.randomAccessFile     // Catch: java.lang.Throwable -> Lc
            java.io.FileDescriptor r0 = r0.getFD()     // Catch: java.lang.Throwable -> Lc
            r0.sync()     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r1)
            return
        Lc:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    protected synchronized int protectedRead(long r2, byte[] r4, int r5, int r6) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)     // Catch: java.lang.Throwable -> L21
            java.io.RandomAccessFile r0 = r1.randomAccessFile     // Catch: java.lang.Throwable -> L21
            r0.seek(r2)     // Catch: java.lang.Throwable -> L21
            r2 = 0
        Lc:
            if (r2 >= r6) goto L1f
            java.io.RandomAccessFile r3 = r1.randomAccessFile     // Catch: java.lang.Throwable -> L21
            int r0 = r6 - r2
            int r3 = r3.read(r4, r5, r0)     // Catch: java.lang.Throwable -> L21
            r0 = -1
            if (r3 != r0) goto L1d
            if (r2 != 0) goto L1f
            monitor-exit(r1)
            return r0
        L1d:
            int r2 = r2 + r3
            goto Lc
        L1f:
            monitor-exit(r1)
            return r2
        L21:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    protected synchronized void protectedResize(long r8) {
            r7 = this;
            monitor-enter(r7)
            long r1 = r7.size()     // Catch: java.lang.Throwable -> L1d
            long r3 = r8 - r1
            r5 = 0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L16
            int r5 = (int) r3     // Catch: java.lang.Throwable -> L1d
            byte[] r3 = new byte[r5]     // Catch: java.lang.Throwable -> L1d
            r4 = 0
            r0 = r7
            r0.protectedWrite(r1, r3, r4, r5)     // Catch: java.lang.Throwable -> L1d
            goto L1b
        L16:
            java.io.RandomAccessFile r0 = r7.randomAccessFile     // Catch: java.lang.Throwable -> L1d
            r0.setLength(r8)     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r7)
            return
        L1d:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    @Override
    protected synchronized long protectedSize() {
            r2 = this;
            monitor-enter(r2)
            java.io.RandomAccessFile r0 = r2.randomAccessFile     // Catch: java.lang.Throwable -> L9
            long r0 = r0.length()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r2)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    protected synchronized void protectedWrite(long r2, byte[] r4, int r5, int r6) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)     // Catch: java.lang.Throwable -> L12
            java.io.RandomAccessFile r0 = r1.randomAccessFile     // Catch: java.lang.Throwable -> L12
            r0.seek(r2)     // Catch: java.lang.Throwable -> L12
            java.io.RandomAccessFile r2 = r1.randomAccessFile     // Catch: java.lang.Throwable -> L12
            r2.write(r4, r5, r6)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r1)
            return
        L12:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
