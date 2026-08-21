package okio;

@kotlin.Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\n\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0010\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0018\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0016J\u0018\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u00062\u0006\u0010\f\u001a\u00020\u0006H\u0016J\u0010\u0010\r\u001a\u00020\u00062\u0006\u0010\u000e\u001a\u00020\u0006H\u0016J\u0018\u0010\u000f\u001a\u00020\n2\u0006\u0010\u0010\u001a\u00020\u00062\u0006\u0010\u0011\u001a\u00020\bH\u0016J\u0018\u0010\u0012\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u00062\u0006\u0010\f\u001a\u00020\u0006H\u0016J\u0018\u0010\u0013\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0016J\u0016\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00060\u00152\u0006\u0010\u0010\u001a\u00020\u0006H\u0016J \u0010\u0014\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u00152\u0006\u0010\u0010\u001a\u00020\u00062\u0006\u0010\u0016\u001a\u00020\bH\u0002J\u0018\u0010\u0017\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u00152\u0006\u0010\u0010\u001a\u00020\u0006H\u0016J\u0012\u0010\u0018\u001a\u0004\u0018\u00010\u00192\u0006\u0010\u000e\u001a\u00020\u0006H\u0016J\u0010\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J \u0010\u001c\u001a\u00020\u001b2\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0011\u001a\u00020\b2\u0006\u0010\u0007\u001a\u00020\bH\u0016J\u0018\u0010\u001d\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0011\u001a\u00020\bH\u0016J\u0010\u0010\u000b\u001a\u00020\u001e2\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\b\u0010\u001f\u001a\u00020 H\u0016J\f\u0010!\u001a\u00020\n*\u00020\u0006H\u0002J\f\u0010\"\u001a\u00020\n*\u00020\u0006H\u0002¨\u0006#"}, d2 = {"Lokio/JvmSystemFileSystem;", "Lokio/FileSystem;", "()V", "appendingSink", "Lokio/Sink;", "file", "Lokio/Path;", "mustExist", "", "atomicMove", "", "source", "target", "canonicalize", "path", "createDirectory", "dir", "mustCreate", "createSymlink", "delete", "list", "", "throwOnFailure", "listOrNull", "metadataOrNull", "Lokio/FileMetadata;", "openReadOnly", "Lokio/FileHandle;", "openReadWrite", "sink", "Lokio/Source;", "toString", "", "requireCreate", "requireExist", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public class JvmSystemFileSystem extends okio.FileSystem {
    public JvmSystemFileSystem() {
            r0 = this;
            r0.<init>()
            return
    }

    private final java.util.List<okio.Path> list(okio.Path r6, boolean r7) {
            r5 = this;
            java.io.File r0 = r6.toFile()
            java.lang.String[] r1 = r0.list()
            if (r1 != 0) goto L2c
            if (r7 == 0) goto L2a
            boolean r7 = r0.exists()
            if (r7 != 0) goto L1e
            java.io.FileNotFoundException r7 = new java.io.FileNotFoundException
            java.lang.String r0 = "no such file: "
            java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r6)
            r7.<init>(r6)
            throw r7
        L1e:
            java.io.IOException r7 = new java.io.IOException
            java.lang.String r0 = "failed to list "
            java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r6)
            r7.<init>(r6)
            throw r7
        L2a:
            r6 = 0
            return r6
        L2c:
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            java.util.List r7 = (java.util.List) r7
            java.util.Collection r7 = (java.util.Collection) r7
            int r0 = r1.length
            r2 = 0
        L37:
            if (r2 >= r0) goto L4a
            r3 = r1[r2]
            java.lang.String r4 = "it"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
            okio.Path r3 = r6.resolve(r3)
            r7.add(r3)
            int r2 = r2 + 1
            goto L37
        L4a:
            java.util.List r7 = (java.util.List) r7
            kotlin.collections.CollectionsKt.sort(r7)
            return r7
    }

    private final void requireCreate(okio.Path r3) {
            r2 = this;
            boolean r0 = r2.exists(r3)
            if (r0 != 0) goto L7
            return
        L7:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = " already exists."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private final void requireExist(okio.Path r3) {
            r2 = this;
            boolean r0 = r2.exists(r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = " doesn't exist."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @Override
    public okio.Sink appendingSink(okio.Path r2, boolean r3) {
            r1 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            if (r3 == 0) goto La
            r1.requireExist(r2)
        La:
            java.io.File r2 = r2.toFile()
            r3 = 1
            okio.Sink r2 = okio.Okio.sink(r2, r3)
            return r2
    }

    @Override
    public void atomicMove(okio.Path r4, okio.Path r5) {
            r3 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.io.File r0 = r4.toFile()
            java.io.File r1 = r5.toFile()
            boolean r0 = r0.renameTo(r1)
            if (r0 == 0) goto L19
            return
        L19:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "failed to move "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " to "
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public okio.Path canonicalize(okio.Path r5) {
            r4 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.io.File r5 = r5.toFile()
            java.io.File r5 = r5.getCanonicalFile()
            boolean r0 = r5.exists()
            if (r0 == 0) goto L22
            okio.Path$Companion r0 = okio.Path.Companion
            java.lang.String r1 = "canonicalFile"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r1)
            r1 = 0
            r2 = 1
            r3 = 0
            okio.Path r5 = okio.Path.Companion.get$default(r0, r5, r1, r2, r3)
            return r5
        L22:
            java.io.FileNotFoundException r5 = new java.io.FileNotFoundException
            java.lang.String r0 = "no such file"
            r5.<init>(r0)
            throw r5
    }

    @Override
    public void createDirectory(okio.Path r4, boolean r5) {
            r3 = this;
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.io.File r0 = r4.toFile()
            boolean r0 = r0.mkdir()
            if (r0 != 0) goto L47
            okio.FileMetadata r0 = r3.metadataOrNull(r4)
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L18
            goto L1f
        L18:
            boolean r0 = r0.isDirectory()
            if (r0 != r2) goto L1f
            r1 = r2
        L1f:
            if (r1 == 0) goto L3b
            if (r5 != 0) goto L24
            return
        L24:
            java.io.IOException r5 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = " already exist."
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
        L3b:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r0 = "failed to create directory: "
            java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r4)
            r5.<init>(r4)
            throw r5
        L47:
            return
    }

    @Override
    public void createSymlink(okio.Path r2, okio.Path r3) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "unsupported"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void delete(okio.Path r3, boolean r4) {
            r2 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.io.File r0 = r3.toFile()
            boolean r1 = r0.delete()
            if (r1 != 0) goto L30
            boolean r0 = r0.exists()
            if (r0 != 0) goto L24
            if (r4 != 0) goto L18
            goto L30
        L18:
            java.io.FileNotFoundException r4 = new java.io.FileNotFoundException
            java.lang.String r0 = "no such file: "
            java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r3)
            r4.<init>(r3)
            throw r4
        L24:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "failed to delete "
            java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r3)
            r4.<init>(r3)
            throw r4
        L30:
            return
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
    public okio.FileMetadata metadataOrNull(okio.Path r14) {
            r13 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
            java.io.File r14 = r14.toFile()
            boolean r1 = r14.isFile()
            boolean r2 = r14.isDirectory()
            long r3 = r14.lastModified()
            long r5 = r14.length()
            if (r1 != 0) goto L2f
            if (r2 != 0) goto L2f
            r7 = 0
            int r0 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r0 != 0) goto L2f
            int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r0 != 0) goto L2f
            boolean r14 = r14.exists()
            if (r14 != 0) goto L2f
            r14 = 0
            return r14
        L2f:
            okio.FileMetadata r14 = new okio.FileMetadata
            r7 = 0
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            r6 = 0
            java.lang.Long r8 = java.lang.Long.valueOf(r3)
            r9 = 0
            r10 = 0
            r11 = 128(0x80, float:1.8E-43)
            r12 = 0
            r0 = r14
            r3 = r7
            r4 = r5
            r5 = r6
            r6 = r8
            r7 = r9
            r8 = r10
            r9 = r11
            r10 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r14
    }

    @Override
    public okio.FileHandle openReadOnly(okio.Path r4) {
            r3 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            okio.JvmFileHandle r0 = new okio.JvmFileHandle
            java.io.RandomAccessFile r1 = new java.io.RandomAccessFile
            java.io.File r4 = r4.toFile()
            java.lang.String r2 = "r"
            r1.<init>(r4, r2)
            r4 = 0
            r0.<init>(r4, r1)
            okio.FileHandle r0 = (okio.FileHandle) r0
            return r0
    }

    @Override
    public okio.FileHandle openReadWrite(okio.Path r3, boolean r4, boolean r5) {
            r2 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 1
            if (r4 == 0) goto Ld
            if (r5 != 0) goto Lb
            goto Ld
        Lb:
            r1 = 0
            goto Le
        Ld:
            r1 = r0
        Le:
            if (r1 == 0) goto L2d
            if (r4 == 0) goto L15
            r2.requireCreate(r3)
        L15:
            if (r5 == 0) goto L1a
            r2.requireExist(r3)
        L1a:
            okio.JvmFileHandle r4 = new okio.JvmFileHandle
            java.io.RandomAccessFile r5 = new java.io.RandomAccessFile
            java.io.File r3 = r3.toFile()
            java.lang.String r1 = "rw"
            r5.<init>(r3, r1)
            r4.<init>(r0, r5)
            okio.FileHandle r4 = (okio.FileHandle) r4
            return r4
        L2d:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Cannot require mustCreate and mustExist at the same time."
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            throw r3
    }

    @Override
    public okio.Sink sink(okio.Path r3, boolean r4) {
            r2 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            if (r4 == 0) goto La
            r2.requireCreate(r3)
        La:
            java.io.File r3 = r3.toFile()
            r4 = 0
            r0 = 1
            r1 = 0
            okio.Sink r3 = okio.Okio.sink$default(r3, r4, r0, r1)
            return r3
    }

    @Override
    public okio.Source source(okio.Path r2) {
            r1 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.io.File r2 = r2.toFile()
            okio.Source r2 = okio.Okio.source(r2)
            return r2
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "JvmSystemFileSystem"
            return r0
    }
}
