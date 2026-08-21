package okio.internal;

@kotlin.Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0010!\n\u0002\b\u0010\b\u0000\u0018\u00002\u00020\u0001B_\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007\u0012\b\b\u0002\u0010\b\u001a\u00020\t\u0012\b\b\u0002\u0010\n\u001a\u00020\t\u0012\b\b\u0002\u0010\u000b\u001a\u00020\t\u0012\b\b\u0002\u0010\f\u001a\u00020\r\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\t\u0012\b\b\u0002\u0010\u000f\u001a\u00020\t¢\u0006\u0002\u0010\u0010R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00030\u0014¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u0011\u0010\n\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001aR\u0011\u0010\f\u001a\u00020\r¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001aR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u001eR\u0015\u0010\u000e\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010!\u001a\u0004\b\u001f\u0010 R\u0011\u0010\u000f\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010\u001aR\u0011\u0010\u000b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\u001a¨\u0006$"}, d2 = {"Lokio/internal/ZipEntry;", "", "canonicalPath", "Lokio/Path;", "isDirectory", "", "comment", "", "crc", "", "compressedSize", "size", "compressionMethod", "", "lastModifiedAtMillis", "offset", "(Lokio/Path;ZLjava/lang/String;JJJILjava/lang/Long;J)V", "getCanonicalPath", "()Lokio/Path;", "children", "", "getChildren", "()Ljava/util/List;", "getComment", "()Ljava/lang/String;", "getCompressedSize", "()J", "getCompressionMethod", "()I", "getCrc", "()Z", "getLastModifiedAtMillis", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getOffset", "getSize", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class ZipEntry {
    private final okio.Path canonicalPath;
    private final java.util.List<okio.Path> children;
    private final java.lang.String comment;
    private final long compressedSize;
    private final int compressionMethod;
    private final long crc;
    private final boolean isDirectory;
    private final java.lang.Long lastModifiedAtMillis;
    private final long offset;
    private final long size;

    public ZipEntry(okio.Path r2, boolean r3, java.lang.String r4, long r5, long r7, long r9, int r11, java.lang.Long r12, long r13) {
            r1 = this;
            java.lang.String r0 = "canonicalPath"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "comment"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r1.<init>()
            r1.canonicalPath = r2
            r1.isDirectory = r3
            r1.comment = r4
            r1.crc = r5
            r1.compressedSize = r7
            r1.size = r9
            r1.compressionMethod = r11
            r1.lastModifiedAtMillis = r12
            r1.offset = r13
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.List r2 = (java.util.List) r2
            r1.children = r2
            return
    }

    public ZipEntry(okio.Path r14, boolean r15, java.lang.String r16, long r17, long r19, long r21, int r23, java.lang.Long r24, long r25, int r27, kotlin.jvm.internal.DefaultConstructorMarker r28) {
            r13 = this;
            r0 = r27
            r1 = r0 & 2
            if (r1 == 0) goto L8
            r1 = 0
            goto L9
        L8:
            r1 = r15
        L9:
            r2 = r0 & 4
            if (r2 == 0) goto L10
            java.lang.String r2 = ""
            goto L12
        L10:
            r2 = r16
        L12:
            r3 = r0 & 8
            r4 = -1
            if (r3 == 0) goto L1a
            r6 = r4
            goto L1c
        L1a:
            r6 = r17
        L1c:
            r3 = r0 & 16
            if (r3 == 0) goto L22
            r8 = r4
            goto L24
        L22:
            r8 = r19
        L24:
            r3 = r0 & 32
            if (r3 == 0) goto L2a
            r10 = r4
            goto L2c
        L2a:
            r10 = r21
        L2c:
            r3 = r0 & 64
            if (r3 == 0) goto L32
            r3 = -1
            goto L34
        L32:
            r3 = r23
        L34:
            r12 = r0 & 128(0x80, float:1.8E-43)
            if (r12 == 0) goto L3a
            r12 = 0
            goto L3c
        L3a:
            r12 = r24
        L3c:
            r0 = r0 & 256(0x100, float:3.59E-43)
            if (r0 == 0) goto L41
            goto L43
        L41:
            r4 = r25
        L43:
            r15 = r13
            r16 = r14
            r17 = r1
            r18 = r2
            r19 = r6
            r21 = r8
            r23 = r10
            r25 = r3
            r26 = r12
            r27 = r4
            r15.<init>(r16, r17, r18, r19, r21, r23, r25, r26, r27)
            return
    }

    public final okio.Path getCanonicalPath() {
            r1 = this;
            okio.Path r0 = r1.canonicalPath
            return r0
    }

    public final java.util.List<okio.Path> getChildren() {
            r1 = this;
            java.util.List<okio.Path> r0 = r1.children
            return r0
    }

    public final java.lang.String getComment() {
            r1 = this;
            java.lang.String r0 = r1.comment
            return r0
    }

    public final long getCompressedSize() {
            r2 = this;
            long r0 = r2.compressedSize
            return r0
    }

    public final int getCompressionMethod() {
            r1 = this;
            int r0 = r1.compressionMethod
            return r0
    }

    public final long getCrc() {
            r2 = this;
            long r0 = r2.crc
            return r0
    }

    public final java.lang.Long getLastModifiedAtMillis() {
            r1 = this;
            java.lang.Long r0 = r1.lastModifiedAtMillis
            return r0
    }

    public final long getOffset() {
            r2 = this;
            long r0 = r2.offset
            return r0
    }

    public final long getSize() {
            r2 = this;
            long r0 = r2.size
            return r0
    }

    public final boolean isDirectory() {
            r1 = this;
            boolean r0 = r1.isDirectory
            return r0
    }
}
