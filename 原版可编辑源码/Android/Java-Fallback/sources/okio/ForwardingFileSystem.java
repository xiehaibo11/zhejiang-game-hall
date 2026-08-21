package okio;

@kotlin.Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\n\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b&\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0001¢\u0006\u0002\u0010\u0003J\u0018\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0016J\u0018\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\b2\u0006\u0010\u000e\u001a\u00020\bH\u0016J\u0010\u0010\u000f\u001a\u00020\b2\u0006\u0010\u0010\u001a\u00020\bH\u0016J\u0018\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\b2\u0006\u0010\u0013\u001a\u00020\nH\u0016J\u0018\u0010\u0014\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\b2\u0006\u0010\u000e\u001a\u00020\bH\u0016J\u0018\u0010\u0015\u001a\u00020\f2\u0006\u0010\u0010\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0016J\u0016\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\b0\u00172\u0006\u0010\u0012\u001a\u00020\bH\u0016J\u0018\u0010\u0018\u001a\n\u0012\u0004\u0012\u00020\b\u0018\u00010\u00172\u0006\u0010\u0012\u001a\u00020\bH\u0016J\u001e\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\b0\u001a2\u0006\u0010\u0012\u001a\u00020\b2\u0006\u0010\u001b\u001a\u00020\nH\u0016J\u0012\u0010\u001c\u001a\u0004\u0018\u00010\u001d2\u0006\u0010\u0010\u001a\u00020\bH\u0016J \u0010\u001e\u001a\u00020\b2\u0006\u0010\u0010\u001a\u00020\b2\u0006\u0010\u001f\u001a\u00020 2\u0006\u0010!\u001a\u00020 H\u0016J\u0018\u0010\"\u001a\u00020\b2\u0006\u0010\u0010\u001a\u00020\b2\u0006\u0010\u001f\u001a\u00020 H\u0016J\u0010\u0010#\u001a\u00020$2\u0006\u0010\u0007\u001a\u00020\bH\u0016J \u0010%\u001a\u00020$2\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u0013\u001a\u00020\n2\u0006\u0010\t\u001a\u00020\nH\u0016J\u0018\u0010&\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u0013\u001a\u00020\nH\u0016J\u0010\u0010\r\u001a\u00020'2\u0006\u0010\u0007\u001a\u00020\bH\u0016J\b\u0010(\u001a\u00020 H\u0016R\u0013\u0010\u0002\u001a\u00020\u00018\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0004¨\u0006)"}, d2 = {"Lokio/ForwardingFileSystem;", "Lokio/FileSystem;", "delegate", "(Lokio/FileSystem;)V", "()Lokio/FileSystem;", "appendingSink", "Lokio/Sink;", "file", "Lokio/Path;", "mustExist", "", "atomicMove", "", "source", "target", "canonicalize", "path", "createDirectory", "dir", "mustCreate", "createSymlink", "delete", "list", "", "listOrNull", "listRecursively", "Lkotlin/sequences/Sequence;", "followSymlinks", "metadataOrNull", "Lokio/FileMetadata;", "onPathParameter", "functionName", "", "parameterName", "onPathResult", "openReadOnly", "Lokio/FileHandle;", "openReadWrite", "sink", "Lokio/Source;", "toString", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public abstract class ForwardingFileSystem extends okio.FileSystem {
    private final okio.FileSystem delegate;


    public ForwardingFileSystem(okio.FileSystem r2) {
            r1 = this;
            java.lang.String r0 = "delegate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.delegate = r2
            return
    }

    @Override
    public okio.Sink appendingSink(okio.Path r3, boolean r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r1 = "appendingSink"
            okio.Path r3 = r2.onPathParameter(r3, r1, r0)
            okio.FileSystem r0 = r2.delegate
            okio.Sink r3 = r0.appendingSink(r3, r4)
            return r3
    }

    @Override
    public void atomicMove(okio.Path r4, okio.Path r5) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r1 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r1)
            java.lang.String r2 = "atomicMove"
            okio.Path r4 = r3.onPathParameter(r4, r2, r0)
            okio.Path r5 = r3.onPathParameter(r5, r2, r1)
            okio.FileSystem r0 = r3.delegate
            r0.atomicMove(r4, r5)
            return
    }

    @Override
    public okio.Path canonicalize(okio.Path r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r1 = "canonicalize"
            okio.Path r3 = r2.onPathParameter(r3, r1, r0)
            okio.FileSystem r0 = r2.delegate
            okio.Path r3 = r0.canonicalize(r3)
            okio.Path r3 = r2.onPathResult(r3, r1)
            return r3
    }

    @Override
    public void createDirectory(okio.Path r3, boolean r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r1 = "createDirectory"
            okio.Path r3 = r2.onPathParameter(r3, r1, r0)
            okio.FileSystem r0 = r2.delegate
            r0.createDirectory(r3, r4)
            return
    }

    @Override
    public void createSymlink(okio.Path r4, okio.Path r5) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r1 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r1)
            java.lang.String r2 = "createSymlink"
            okio.Path r4 = r3.onPathParameter(r4, r2, r0)
            okio.Path r5 = r3.onPathParameter(r5, r2, r1)
            okio.FileSystem r0 = r3.delegate
            r0.createSymlink(r4, r5)
            return
    }

    public final okio.FileSystem delegate() {
            r1 = this;
            okio.FileSystem r0 = r1.delegate
            return r0
    }

    @Override
    public void delete(okio.Path r3, boolean r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r1 = "delete"
            okio.Path r3 = r2.onPathParameter(r3, r1, r0)
            okio.FileSystem r0 = r2.delegate
            r0.delete(r3, r4)
            return
    }

    @Override
    public java.util.List<okio.Path> list(okio.Path r4) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r1 = "list"
            okio.Path r4 = r3.onPathParameter(r4, r1, r0)
            okio.FileSystem r0 = r3.delegate
            java.util.List r4 = r0.list(r4)
            java.lang.Iterable r4 = (java.lang.Iterable) r4
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = (java.util.List) r0
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Iterator r4 = r4.iterator()
        L20:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L34
            java.lang.Object r2 = r4.next()
            okio.Path r2 = (okio.Path) r2
            okio.Path r2 = r3.onPathResult(r2, r1)
            r0.add(r2)
            goto L20
        L34:
            java.util.List r0 = (java.util.List) r0
            kotlin.collections.CollectionsKt.sort(r0)
            return r0
    }

    @Override
    public java.util.List<okio.Path> listOrNull(okio.Path r4) {
            r3 = this;
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r1 = "listOrNull"
            okio.Path r4 = r3.onPathParameter(r4, r1, r0)
            okio.FileSystem r0 = r3.delegate
            java.util.List r4 = r0.listOrNull(r4)
            if (r4 != 0) goto L15
            r4 = 0
            return r4
        L15:
            java.lang.Iterable r4 = (java.lang.Iterable) r4
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = (java.util.List) r0
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Iterator r4 = r4.iterator()
        L24:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L38
            java.lang.Object r2 = r4.next()
            okio.Path r2 = (okio.Path) r2
            okio.Path r2 = r3.onPathResult(r2, r1)
            r0.add(r2)
            goto L24
        L38:
            java.util.List r0 = (java.util.List) r0
            kotlin.collections.CollectionsKt.sort(r0)
            return r0
    }

    @Override
    public kotlin.sequences.Sequence<okio.Path> listRecursively(okio.Path r3, boolean r4) {
            r2 = this;
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r1 = "listRecursively"
            okio.Path r3 = r2.onPathParameter(r3, r1, r0)
            okio.FileSystem r0 = r2.delegate
            kotlin.sequences.Sequence r3 = r0.listRecursively(r3, r4)
            okio.ForwardingFileSystem$listRecursively$1 r4 = new okio.ForwardingFileSystem$listRecursively$1
            r4.<init>(r2)
            kotlin.jvm.functions.Function1 r4 = (kotlin.jvm.functions.Function1) r4
            kotlin.sequences.Sequence r3 = kotlin.sequences.SequencesKt.map(r3, r4)
            return r3
    }

    @Override
    public okio.FileMetadata metadataOrNull(okio.Path r14) throws java.io.IOException {
            r13 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
            java.lang.String r1 = "metadataOrNull"
            okio.Path r14 = r13.onPathParameter(r14, r1, r0)
            okio.FileSystem r0 = r13.delegate
            okio.FileMetadata r2 = r0.metadataOrNull(r14)
            if (r2 != 0) goto L15
            r14 = 0
            return r14
        L15:
            okio.Path r14 = r2.getSymlinkTarget()
            if (r14 != 0) goto L1c
            return r2
        L1c:
            okio.Path r14 = r2.getSymlinkTarget()
            okio.Path r5 = r13.onPathResult(r14, r1)
            r3 = 0
            r4 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 251(0xfb, float:3.52E-43)
            r12 = 0
            okio.FileMetadata r14 = okio.FileMetadata.copy$default(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            return r14
    }

    public okio.Path onPathParameter(okio.Path r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "functionName"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r3 = "parameterName"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r3)
            return r2
    }

    public okio.Path onPathResult(okio.Path r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "functionName"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            return r2
    }

    @Override
    public okio.FileHandle openReadOnly(okio.Path r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r1 = "openReadOnly"
            okio.Path r3 = r2.onPathParameter(r3, r1, r0)
            okio.FileSystem r0 = r2.delegate
            okio.FileHandle r3 = r0.openReadOnly(r3)
            return r3
    }

    @Override
    public okio.FileHandle openReadWrite(okio.Path r3, boolean r4, boolean r5) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r1 = "openReadWrite"
            okio.Path r3 = r2.onPathParameter(r3, r1, r0)
            okio.FileSystem r0 = r2.delegate
            okio.FileHandle r3 = r0.openReadWrite(r3, r4, r5)
            return r3
    }

    @Override
    public okio.Sink sink(okio.Path r3, boolean r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r1 = "sink"
            okio.Path r3 = r2.onPathParameter(r3, r1, r0)
            okio.FileSystem r0 = r2.delegate
            okio.Sink r3 = r0.sink(r3, r4)
            return r3
    }

    @Override
    public okio.Source source(okio.Path r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r1 = "source"
            okio.Path r3 = r2.onPathParameter(r3, r1, r0)
            okio.FileSystem r0 = r2.delegate
            okio.Source r3 = r0.source(r3)
            return r3
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            kotlin.reflect.KClass r1 = kotlin.jvm.internal.Reflection.getOrCreateKotlinClass(r1)
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            r1 = 40
            r0.append(r1)
            okio.FileSystem r1 = r2.delegate
            r0.append(r1)
            r1 = 41
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
