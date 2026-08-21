package okhttp3.internal.ws;

@kotlin.Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\b\u0010\u000b\u001a\u00020\fH\u0016J\u000e\u0010\r\u001a\u00020\f2\u0006\u0010\u000e\u001a\u00020\u0006R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lokhttp3/internal/ws/MessageInflater;", "Ljava/io/Closeable;", "noContextTakeover", "", "(Z)V", "deflatedBytes", "Lokio/Buffer;", "inflater", "Ljava/util/zip/Inflater;", "inflaterSource", "Lokio/InflaterSource;", "close", "", "inflate", "buffer", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class MessageInflater implements java.io.Closeable {
    private final okio.Buffer deflatedBytes;
    private final java.util.zip.Inflater inflater;
    private final okio.InflaterSource inflaterSource;
    private final boolean noContextTakeover;

    public MessageInflater(boolean r3) {
            r2 = this;
            r2.<init>()
            r2.noContextTakeover = r3
            okio.Buffer r3 = new okio.Buffer
            r3.<init>()
            r2.deflatedBytes = r3
            java.util.zip.Inflater r3 = new java.util.zip.Inflater
            r0 = 1
            r3.<init>(r0)
            r2.inflater = r3
            okio.InflaterSource r3 = new okio.InflaterSource
            okio.Buffer r0 = r2.deflatedBytes
            okio.Source r0 = (okio.Source) r0
            java.util.zip.Inflater r1 = r2.inflater
            r3.<init>(r0, r1)
            r2.inflaterSource = r3
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            okio.InflaterSource r0 = r1.inflaterSource
            r0.close()
            return
    }

    public final void inflate(okio.Buffer r6) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "buffer"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            okio.Buffer r0 = r5.deflatedBytes
            long r0 = r0.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L13
            r0 = 1
            goto L14
        L13:
            r0 = 0
        L14:
            if (r0 == 0) goto L51
            boolean r0 = r5.noContextTakeover
            if (r0 == 0) goto L1f
            java.util.zip.Inflater r0 = r5.inflater
            r0.reset()
        L1f:
            okio.Buffer r0 = r5.deflatedBytes
            r1 = r6
            okio.Source r1 = (okio.Source) r1
            r0.writeAll(r1)
            okio.Buffer r0 = r5.deflatedBytes
            r1 = 65535(0xffff, float:9.1834E-41)
            r0.writeInt(r1)
            java.util.zip.Inflater r0 = r5.inflater
            long r0 = r0.getBytesRead()
            okio.Buffer r2 = r5.deflatedBytes
            long r2 = r2.size()
            long r0 = r0 + r2
        L3c:
            okio.InflaterSource r2 = r5.inflaterSource
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2.readOrInflate(r6, r3)
            java.util.zip.Inflater r2 = r5.inflater
            long r2 = r2.getBytesRead()
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 < 0) goto L3c
            return
        L51:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Failed requirement."
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
    }
}
