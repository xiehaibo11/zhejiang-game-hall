package okio.internal;

@kotlin.Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bJ\u0018\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0005H\u0016J\u0014\u0010\u000e\u001a\u00020\u000f*\u00020\f2\u0006\u0010\u0010\u001a\u00020\u0005H\u0002R\u000e\u0010\t\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lokio/internal/FixedLengthSource;", "Lokio/ForwardingSource;", "delegate", "Lokio/Source;", "size", "", "truncate", "", "(Lokio/Source;JZ)V", "bytesReceived", "read", "sink", "Lokio/Buffer;", "byteCount", "truncateToSize", "", "newSize", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class FixedLengthSource extends okio.ForwardingSource {
    private long bytesReceived;
    private final long size;
    private final boolean truncate;

    public FixedLengthSource(okio.Source r2, long r3, boolean r5) {
            r1 = this;
            java.lang.String r0 = "delegate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>(r2)
            r1.size = r3
            r1.truncate = r5
            return
    }

    private final void truncateToSize(okio.Buffer r3, long r4) {
            r2 = this;
            okio.Buffer r0 = new okio.Buffer
            r0.<init>()
            r1 = r3
            okio.Source r1 = (okio.Source) r1
            r0.writeAll(r1)
            r3.write(r0, r4)
            r0.clear()
            return
    }

    @Override
    public long read(okio.Buffer r10, long r11) {
            r9 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            long r0 = r9.bytesReceived
            long r2 = r9.size
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r5 = -1
            r7 = 0
            if (r4 <= 0) goto L13
            r11 = r7
            goto L21
        L13:
            boolean r4 = r9.truncate
            if (r4 == 0) goto L21
            long r2 = r2 - r0
            int r0 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r0 != 0) goto L1d
            return r5
        L1d:
            long r11 = java.lang.Math.min(r11, r2)
        L21:
            long r11 = super.read(r10, r11)
            int r0 = (r11 > r5 ? 1 : (r11 == r5 ? 0 : -1))
            if (r0 == 0) goto L2e
            long r1 = r9.bytesReceived
            long r1 = r1 + r11
            r9.bytesReceived = r1
        L2e:
            long r1 = r9.bytesReceived
            long r3 = r9.size
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L38
            if (r0 == 0) goto L40
        L38:
            long r0 = r9.bytesReceived
            long r2 = r9.size
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L7c
        L40:
            int r11 = (r11 > r7 ? 1 : (r11 == r7 ? 0 : -1))
            if (r11 <= 0) goto L59
            long r11 = r9.bytesReceived
            long r0 = r9.size
            int r11 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r11 <= 0) goto L59
            long r11 = r10.size()
            long r0 = r9.bytesReceived
            long r2 = r9.size
            long r0 = r0 - r2
            long r11 = r11 - r0
            r9.truncateToSize(r10, r11)
        L59:
            java.io.IOException r10 = new java.io.IOException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "expected "
            r11.append(r12)
            long r0 = r9.size
            r11.append(r0)
            java.lang.String r12 = " bytes but got "
            r11.append(r12)
            long r0 = r9.bytesReceived
            r11.append(r0)
            java.lang.String r11 = r11.toString()
            r10.<init>(r11)
            throw r10
        L7c:
            return r11
    }
}
