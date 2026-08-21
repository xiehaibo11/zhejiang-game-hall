package okhttp3.internal.cache2;

@kotlin.Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0000\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u001e\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\bJ\u001e\u0010\f\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\bR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lokhttp3/internal/cache2/FileOperator;", "", "fileChannel", "Ljava/nio/channels/FileChannel;", "(Ljava/nio/channels/FileChannel;)V", "read", "", "pos", "", "sink", "Lokio/Buffer;", "byteCount", "write", "source", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class FileOperator {
    private final java.nio.channels.FileChannel fileChannel;

    public FileOperator(java.nio.channels.FileChannel r2) {
            r1 = this;
            java.lang.String r0 = "fileChannel"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.fileChannel = r2
            return
    }

    public final void read(long r10, okio.Buffer r12, long r13) {
            r9 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            r0 = 0
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 < 0) goto L1e
        Lb:
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 <= 0) goto L1d
            java.nio.channels.FileChannel r3 = r9.fileChannel
            r8 = r12
            java.nio.channels.WritableByteChannel r8 = (java.nio.channels.WritableByteChannel) r8
            r4 = r10
            r6 = r13
            long r2 = r3.transferTo(r4, r6, r8)
            long r10 = r10 + r2
            long r13 = r13 - r2
            goto Lb
        L1d:
            return
        L1e:
            java.lang.IndexOutOfBoundsException r10 = new java.lang.IndexOutOfBoundsException
            r10.<init>()
            throw r10
    }

    public final void write(long r10, okio.Buffer r12, long r13) throws java.io.IOException {
            r9 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            r0 = 0
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 < 0) goto L26
            long r2 = r12.size()
            int r2 = (r13 > r2 ? 1 : (r13 == r2 ? 0 : -1))
            if (r2 > 0) goto L26
        L13:
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 <= 0) goto L25
            java.nio.channels.FileChannel r3 = r9.fileChannel
            r4 = r12
            java.nio.channels.ReadableByteChannel r4 = (java.nio.channels.ReadableByteChannel) r4
            r5 = r10
            r7 = r13
            long r2 = r3.transferFrom(r4, r5, r7)
            long r10 = r10 + r2
            long r13 = r13 - r2
            goto L13
        L25:
            return
        L26:
            java.lang.IndexOutOfBoundsException r10 = new java.lang.IndexOutOfBoundsException
            r10.<init>()
            throw r10
    }
}
