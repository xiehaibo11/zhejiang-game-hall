package okio;

@kotlin.Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010$\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u000b\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u0000 '2\u00020\u0001:\u0001'B5\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0001\u0012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00070\u0006\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\u0002\u0010\nJ\u0018\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u00032\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0018\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00032\u0006\u0010\u0013\u001a\u00020\u0003H\u0016J\u0010\u0010\u0014\u001a\u00020\u00032\u0006\u0010\u0015\u001a\u00020\u0003H\u0016J\u0010\u0010\u0016\u001a\u00020\u00032\u0006\u0010\u0015\u001a\u00020\u0003H\u0002J\u0018\u0010\u0017\u001a\u00020\u00112\u0006\u0010\u0018\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u000fH\u0016J\u0018\u0010\u001a\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00032\u0006\u0010\u0013\u001a\u00020\u0003H\u0016J\u0018\u0010\u001b\u001a\u00020\u00112\u0006\u0010\u0015\u001a\u00020\u00032\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0016\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00030\u001d2\u0006\u0010\u0018\u001a\u00020\u0003H\u0016J \u0010\u001c\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u001d2\u0006\u0010\u0018\u001a\u00020\u00032\u0006\u0010\u001e\u001a\u00020\u000fH\u0002J\u0018\u0010\u001f\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u001d2\u0006\u0010\u0018\u001a\u00020\u0003H\u0016J\u0012\u0010 \u001a\u0004\u0018\u00010!2\u0006\u0010\u0015\u001a\u00020\u0003H\u0016J\u0010\u0010\"\u001a\u00020#2\u0006\u0010\r\u001a\u00020\u0003H\u0016J \u0010$\u001a\u00020#2\u0006\u0010\r\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0018\u0010%\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u000fH\u0016J\u0010\u0010\u0012\u001a\u00020&2\u0006\u0010\u0015\u001a\u00020\u0003H\u0016R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00070\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006("}, d2 = {"Lokio/ZipFileSystem;", "Lokio/FileSystem;", "zipPath", "Lokio/Path;", "fileSystem", "entries", "", "Lokio/internal/ZipEntry;", "comment", "", "(Lokio/Path;Lokio/FileSystem;Ljava/util/Map;Ljava/lang/String;)V", "appendingSink", "Lokio/Sink;", "file", "mustExist", "", "atomicMove", "", "source", "target", "canonicalize", "path", "canonicalizeInternal", "createDirectory", "dir", "mustCreate", "createSymlink", "delete", "list", "", "throwOnFailure", "listOrNull", "metadataOrNull", "Lokio/FileMetadata;", "openReadOnly", "Lokio/FileHandle;", "openReadWrite", "sink", "Lokio/Source;", "Companion", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class ZipFileSystem extends okio.FileSystem {
    private static final okio.ZipFileSystem.Companion Companion = null;

    @java.lang.Deprecated
    private static final okio.Path ROOT = null;
    private final java.lang.String comment;
    private final java.util.Map<okio.Path, okio.internal.ZipEntry> entries;
    private final okio.FileSystem fileSystem;
    private final okio.Path zipPath;

    @kotlin.Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0082\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lokio/ZipFileSystem$Companion;", "", "()V", "ROOT", "Lokio/Path;", "getROOT", "()Lokio/Path;", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
    private static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final okio.Path getROOT() {
                r1 = this;
                okio.Path r0 = okio.ZipFileSystem.access$getROOT$cp()
                return r0
        }
    }

    static {
            okio.ZipFileSystem$Companion r0 = new okio.ZipFileSystem$Companion
            r1 = 0
            r0.<init>(r1)
            okio.ZipFileSystem.Companion = r0
            okio.Path$Companion r0 = okio.Path.Companion
            java.lang.String r2 = "/"
            r3 = 0
            r4 = 1
            okio.Path r0 = okio.Path.Companion.get$default(r0, r2, r3, r4, r1)
            okio.ZipFileSystem.ROOT = r0
            return
    }

    public ZipFileSystem(okio.Path r2, okio.FileSystem r3, java.util.Map<okio.Path, okio.internal.ZipEntry> r4, java.lang.String r5) {
            r1 = this;
            java.lang.String r0 = "zipPath"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "fileSystem"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "entries"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r1.<init>()
            r1.zipPath = r2
            r1.fileSystem = r3
            r1.entries = r4
            r1.comment = r5
            return
    }

    public static final okio.Path access$getROOT$cp() {
            okio.Path r0 = okio.ZipFileSystem.ROOT
            return r0
    }

    private final okio.Path canonicalizeInternal(okio.Path r3) {
            r2 = this;
            okio.Path r0 = okio.ZipFileSystem.ROOT
            r1 = 1
            okio.Path r3 = r0.resolve(r3, r1)
            return r3
    }

    private final java.util.List<okio.Path> list(okio.Path r3, boolean r4) {
            r2 = this;
            okio.Path r0 = r2.canonicalizeInternal(r3)
            java.util.Map<okio.Path, okio.internal.ZipEntry> r1 = r2.entries
            java.lang.Object r0 = r1.get(r0)
            okio.internal.ZipEntry r0 = (okio.internal.ZipEntry) r0
            if (r0 != 0) goto L1e
            if (r4 != 0) goto L12
            r3 = 0
            return r3
        L12:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "not a directory: "
            java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r3)
            r4.<init>(r3)
            throw r4
        L1e:
            java.util.List r3 = r0.getChildren()
            java.lang.Iterable r3 = (java.lang.Iterable) r3
            java.util.List r3 = kotlin.collections.CollectionsKt.toList(r3)
            return r3
    }

    @Override
    public okio.Sink appendingSink(okio.Path r1, boolean r2) {
            r0 = this;
            java.lang.String r2 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "zip file systems are read-only"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void atomicMove(okio.Path r2, okio.Path r3) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "zip file systems are read-only"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public okio.Path canonicalize(okio.Path r2) {
            r1 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.Path r2 = r1.canonicalizeInternal(r2)
            return r2
    }

    @Override
    public void createDirectory(okio.Path r1, boolean r2) {
            r0 = this;
            java.lang.String r2 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "zip file systems are read-only"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void createSymlink(okio.Path r2, okio.Path r3) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "zip file systems are read-only"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void delete(okio.Path r1, boolean r2) {
            r0 = this;
            java.lang.String r2 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "zip file systems are read-only"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public java.util.List<okio.Path> list(okio.Path r2) {
            r1 = this;
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 1
            java.util.List r2 = r1.list(r2, r0)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            return r2
    }

    @Override
    public java.util.List<okio.Path> listOrNull(okio.Path r2) {
            r1 = this;
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 0
            java.util.List r2 = r1.list(r2, r0)
            return r2
    }

    @Override
    public okio.FileMetadata metadataOrNull(okio.Path r15) {
            r14 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, r0)
            okio.Path r15 = r14.canonicalizeInternal(r15)
            java.util.Map<okio.Path, okio.internal.ZipEntry> r0 = r14.entries
            java.lang.Object r15 = r0.get(r15)
            okio.internal.ZipEntry r15 = (okio.internal.ZipEntry) r15
            r0 = 0
            if (r15 != 0) goto L15
            return r0
        L15:
            okio.FileMetadata r12 = new okio.FileMetadata
            boolean r1 = r15.isDirectory()
            r2 = r1 ^ 1
            boolean r3 = r15.isDirectory()
            r4 = 0
            boolean r1 = r15.isDirectory()
            if (r1 == 0) goto L2a
            r5 = r0
            goto L33
        L2a:
            long r5 = r15.getSize()
            java.lang.Long r1 = java.lang.Long.valueOf(r5)
            r5 = r1
        L33:
            r6 = 0
            java.lang.Long r7 = r15.getLastModifiedAtMillis()
            r8 = 0
            r9 = 0
            r10 = 128(0x80, float:1.8E-43)
            r11 = 0
            r1 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            long r1 = r15.getOffset()
            r3 = -1
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L4c
            return r12
        L4c:
            okio.FileSystem r1 = r14.fileSystem
            okio.Path r2 = r14.zipPath
            okio.FileHandle r1 = r1.openReadOnly(r2)
            java.io.Closeable r1 = (java.io.Closeable) r1
            r2 = r1
            okio.FileHandle r2 = (okio.FileHandle) r2     // Catch: java.lang.Throwable -> L66
            long r3 = r15.getOffset()     // Catch: java.lang.Throwable -> L66
            okio.Source r15 = r2.source(r3)     // Catch: java.lang.Throwable -> L66
            okio.BufferedSource r15 = okio.Okio.buffer(r15)     // Catch: java.lang.Throwable -> L66
            goto L6a
        L66:
            r15 = move-exception
            r13 = r0
            r0 = r15
            r15 = r13
        L6a:
            if (r1 != 0) goto L6d
            goto L79
        L6d:
            r1.close()     // Catch: java.lang.Throwable -> L71
            goto L79
        L71:
            r1 = move-exception
            if (r0 != 0) goto L76
            r0 = r1
            goto L79
        L76:
            kotlin.ExceptionsKt.addSuppressed(r0, r1)
        L79:
            if (r0 != 0) goto L83
            kotlin.jvm.internal.Intrinsics.checkNotNull(r15)
            okio.FileMetadata r15 = okio.internal.ZipKt.readLocalHeader(r15, r12)
            return r15
        L83:
            throw r0
    }

    @Override
    public okio.FileHandle openReadOnly(okio.Path r2) {
            r1 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "not implemented yet!"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public okio.FileHandle openReadWrite(okio.Path r1, boolean r2, boolean r3) {
            r0 = this;
            java.lang.String r2 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "zip entries are not writable"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public okio.Sink sink(okio.Path r1, boolean r2) {
            r0 = this;
            java.lang.String r2 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "zip file systems are read-only"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public okio.Source source(okio.Path r8) throws java.io.IOException {
            r7 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            okio.Path r0 = r7.canonicalizeInternal(r8)
            java.util.Map<okio.Path, okio.internal.ZipEntry> r1 = r7.entries
            java.lang.Object r0 = r1.get(r0)
            okio.internal.ZipEntry r0 = (okio.internal.ZipEntry) r0
            if (r0 == 0) goto L86
            okio.FileSystem r8 = r7.fileSystem
            okio.Path r1 = r7.zipPath
            okio.FileHandle r8 = r8.openReadOnly(r1)
            java.io.Closeable r8 = (java.io.Closeable) r8
            r1 = 0
            r2 = r8
            okio.FileHandle r2 = (okio.FileHandle) r2     // Catch: java.lang.Throwable -> L2e
            long r3 = r0.getOffset()     // Catch: java.lang.Throwable -> L2e
            okio.Source r2 = r2.source(r3)     // Catch: java.lang.Throwable -> L2e
            okio.BufferedSource r2 = okio.Okio.buffer(r2)     // Catch: java.lang.Throwable -> L2e
            goto L32
        L2e:
            r2 = move-exception
            r6 = r2
            r2 = r1
            r1 = r6
        L32:
            if (r8 != 0) goto L35
            goto L41
        L35:
            r8.close()     // Catch: java.lang.Throwable -> L39
            goto L41
        L39:
            r8 = move-exception
            if (r1 != 0) goto L3e
            r1 = r8
            goto L41
        L3e:
            kotlin.ExceptionsKt.addSuppressed(r1, r8)
        L41:
            if (r1 != 0) goto L85
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            okio.internal.ZipKt.skipLocalHeader(r2)
            int r8 = r0.getCompressionMethod()
            r1 = 1
            if (r8 != 0) goto L5e
            okio.internal.FixedLengthSource r8 = new okio.internal.FixedLengthSource
            okio.Source r2 = (okio.Source) r2
            long r3 = r0.getSize()
            r8.<init>(r2, r3, r1)
            okio.Source r8 = (okio.Source) r8
            goto L84
        L5e:
            okio.InflaterSource r8 = new okio.InflaterSource
            okio.internal.FixedLengthSource r3 = new okio.internal.FixedLengthSource
            okio.Source r2 = (okio.Source) r2
            long r4 = r0.getCompressedSize()
            r3.<init>(r2, r4, r1)
            okio.Source r3 = (okio.Source) r3
            java.util.zip.Inflater r2 = new java.util.zip.Inflater
            r2.<init>(r1)
            r8.<init>(r3, r2)
            okio.internal.FixedLengthSource r1 = new okio.internal.FixedLengthSource
            okio.Source r8 = (okio.Source) r8
            long r2 = r0.getSize()
            r0 = 0
            r1.<init>(r8, r2, r0)
            r8 = r1
            okio.Source r8 = (okio.Source) r8
        L84:
            return r8
        L85:
            throw r1
        L86:
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.String r1 = "no such file: "
            java.lang.String r8 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r8)
            r0.<init>(r8)
            throw r0
    }
}
