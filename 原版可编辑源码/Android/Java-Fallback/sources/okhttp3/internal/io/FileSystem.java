package okhttp3.internal.io;

@kotlin.Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\bf\u0018\u0000 \u00142\u00020\u0001:\u0001\u0014J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\b\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\u0005H&J\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0018\u0010\f\u001a\u00020\u00072\u0006\u0010\r\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u0005H&J\u0010\u0010\u000f\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0004\u001a\u00020\u0005H&¨\u0006\u0015"}, d2 = {"Lokhttp3/internal/io/FileSystem;", "", "appendingSink", "Lokio/Sink;", "file", "Ljava/io/File;", "delete", "", "deleteContents", "directory", "exists", "", "rename", "from", "to", "sink", "size", "", "source", "Lokio/Source;", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public interface FileSystem {
    public static final okhttp3.internal.io.FileSystem.Companion Companion = null;
    public static final okhttp3.internal.io.FileSystem SYSTEM = null;

    class 1 implements okhttp3.internal.io.FileSystem {
        1() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public okio.Sink appendingSink(java.io.File r2) throws java.io.FileNotFoundException {
                r1 = this;
                okio.Sink r2 = okio.Okio.appendingSink(r2)     // Catch: java.io.FileNotFoundException -> L5
                return r2
            L5:
                java.io.File r0 = r2.getParentFile()
                r0.mkdirs()
                okio.Sink r2 = okio.Okio.appendingSink(r2)
                return r2
        }

        @Override
        public void delete(java.io.File r4) throws java.io.IOException {
                r3 = this;
                boolean r0 = r4.delete()
                if (r0 != 0) goto L24
                boolean r0 = r4.exists()
                if (r0 != 0) goto Ld
                goto L24
            Ld:
                java.io.IOException r0 = new java.io.IOException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "failed to delete "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
            L24:
                return
        }

        @Override
        public void deleteContents(java.io.File r5) throws java.io.IOException {
                r4 = this;
                java.io.File[] r0 = r5.listFiles()
                if (r0 == 0) goto L36
                int r5 = r0.length
                r1 = 0
            L8:
                if (r1 >= r5) goto L35
                r2 = r0[r1]
                boolean r3 = r2.isDirectory()
                if (r3 == 0) goto L15
                r4.deleteContents(r2)
            L15:
                boolean r3 = r2.delete()
                if (r3 == 0) goto L1e
                int r1 = r1 + 1
                goto L8
            L1e:
                java.io.IOException r5 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "failed to delete "
                r0.append(r1)
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                r5.<init>(r0)
                throw r5
            L35:
                return
            L36:
                java.io.IOException r0 = new java.io.IOException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "not a readable directory: "
                r1.append(r2)
                r1.append(r5)
                java.lang.String r5 = r1.toString()
                r0.<init>(r5)
                goto L4e
            L4d:
                throw r0
            L4e:
                goto L4d
        }

        @Override
        public boolean exists(java.io.File r1) {
                r0 = this;
                boolean r1 = r1.exists()
                return r1
        }

        @Override
        public void rename(java.io.File r4, java.io.File r5) throws java.io.IOException {
                r3 = this;
                r3.delete(r5)
                boolean r0 = r4.renameTo(r5)
                if (r0 == 0) goto La
                return
            La:
                java.io.IOException r0 = new java.io.IOException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "failed to rename "
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
        public okio.Sink sink(java.io.File r2) throws java.io.FileNotFoundException {
                r1 = this;
                okio.Sink r2 = okio.Okio.sink(r2)     // Catch: java.io.FileNotFoundException -> L5
                return r2
            L5:
                java.io.File r0 = r2.getParentFile()
                r0.mkdirs()
                okio.Sink r2 = okio.Okio.sink(r2)
                return r2
        }

        @Override
        public long size(java.io.File r3) {
                r2 = this;
                long r0 = r3.length()
                return r0
        }

        @Override
        public okio.Source source(java.io.File r1) throws java.io.FileNotFoundException {
                r0 = this;
                okio.Source r1 = okio.Okio.source(r1)
                return r1
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001:\u0001\u0005B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0013\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u0001¨\u0006\u0006"}, d2 = {"Lokhttp3/internal/io/FileSystem$Companion;", "", "()V", "SYSTEM", "Lokhttp3/internal/io/FileSystem;", "SystemFileSystem", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        static final okhttp3.internal.io.FileSystem.Companion $$INSTANCE = null;

        @kotlin.Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0002\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0010\u0010\u0007\u001a\u00020\b2\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0010\u0010\t\u001a\u00020\b2\u0006\u0010\n\u001a\u00020\u0006H\u0016J\u0010\u0010\u000b\u001a\u00020\f2\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0018\u0010\r\u001a\u00020\b2\u0006\u0010\u000e\u001a\u00020\u00062\u0006\u0010\u000f\u001a\u00020\u0006H\u0016J\u0010\u0010\u0010\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0010\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\b\u0010\u0015\u001a\u00020\u0016H\u0016¨\u0006\u0017"}, d2 = {"Lokhttp3/internal/io/FileSystem$Companion$SystemFileSystem;", "Lokhttp3/internal/io/FileSystem;", "()V", "appendingSink", "Lokio/Sink;", "file", "Ljava/io/File;", "delete", "", "deleteContents", "directory", "exists", "", "rename", "from", "to", "sink", "size", "", "source", "Lokio/Source;", "toString", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
        private static final class SystemFileSystem implements okhttp3.internal.io.FileSystem {
            public SystemFileSystem() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            @Override
            public okio.Sink appendingSink(java.io.File r2) throws java.io.FileNotFoundException {
                    r1 = this;
                    java.lang.String r0 = "file"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                    okio.Sink r2 = okio.Okio.appendingSink(r2)     // Catch: java.io.FileNotFoundException -> La
                    goto L15
                La:
                    java.io.File r0 = r2.getParentFile()
                    r0.mkdirs()
                    okio.Sink r2 = okio.Okio.appendingSink(r2)
                L15:
                    return r2
            }

            @Override
            public void delete(java.io.File r3) throws java.io.IOException {
                    r2 = this;
                    java.lang.String r0 = "file"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                    boolean r0 = r3.delete()
                    if (r0 != 0) goto L1e
                    boolean r0 = r3.exists()
                    if (r0 != 0) goto L12
                    goto L1e
                L12:
                    java.io.IOException r0 = new java.io.IOException
                    java.lang.String r1 = "failed to delete "
                    java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r3)
                    r0.<init>(r3)
                    throw r0
                L1e:
                    return
            }

            @Override
            public void deleteContents(java.io.File r5) throws java.io.IOException {
                    r4 = this;
                    java.lang.String r0 = "directory"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                    java.io.File[] r0 = r5.listFiles()
                    if (r0 == 0) goto L35
                    r5 = 0
                    int r1 = r0.length
                Ld:
                    if (r5 >= r1) goto L34
                    r2 = r0[r5]
                    int r5 = r5 + 1
                    boolean r3 = r2.isDirectory()
                    if (r3 == 0) goto L21
                    java.lang.String r3 = "file"
                    kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
                    r4.deleteContents(r2)
                L21:
                    boolean r3 = r2.delete()
                    if (r3 == 0) goto L28
                    goto Ld
                L28:
                    java.io.IOException r5 = new java.io.IOException
                    java.lang.String r0 = "failed to delete "
                    java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r2)
                    r5.<init>(r0)
                    throw r5
                L34:
                    return
                L35:
                    java.io.IOException r0 = new java.io.IOException
                    java.lang.String r1 = "not a readable directory: "
                    java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r5)
                    r0.<init>(r5)
                    throw r0
            }

            @Override
            public boolean exists(java.io.File r2) {
                    r1 = this;
                    java.lang.String r0 = "file"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                    boolean r2 = r2.exists()
                    return r2
            }

            @Override
            public void rename(java.io.File r4, java.io.File r5) throws java.io.IOException {
                    r3 = this;
                    java.lang.String r0 = "from"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                    java.lang.String r0 = "to"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                    r3.delete(r5)
                    boolean r0 = r4.renameTo(r5)
                    if (r0 == 0) goto L14
                    return
                L14:
                    java.io.IOException r0 = new java.io.IOException
                    java.lang.StringBuilder r1 = new java.lang.StringBuilder
                    r1.<init>()
                    java.lang.String r2 = "failed to rename "
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
            public okio.Sink sink(java.io.File r5) throws java.io.FileNotFoundException {
                    r4 = this;
                    java.lang.String r0 = "file"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                    r0 = 0
                    r1 = 1
                    r2 = 0
                    okio.Sink r5 = okio.Okio.sink$default(r5, r2, r1, r0)     // Catch: java.io.FileNotFoundException -> Ld
                    goto L18
                Ld:
                    java.io.File r3 = r5.getParentFile()
                    r3.mkdirs()
                    okio.Sink r5 = okio.Okio.sink$default(r5, r2, r1, r0)
                L18:
                    return r5
            }

            @Override
            public long size(java.io.File r3) {
                    r2 = this;
                    java.lang.String r0 = "file"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                    long r0 = r3.length()
                    return r0
            }

            @Override
            public okio.Source source(java.io.File r2) throws java.io.FileNotFoundException {
                    r1 = this;
                    java.lang.String r0 = "file"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                    okio.Source r2 = okio.Okio.source(r2)
                    return r2
            }

            public java.lang.String toString() {
                    r1 = this;
                    java.lang.String r0 = "FileSystem.SYSTEM"
                    return r0
            }
        }

        static {
                okhttp3.internal.io.FileSystem$Companion r0 = new okhttp3.internal.io.FileSystem$Companion
                r0.<init>()
                okhttp3.internal.io.FileSystem.Companion.$$INSTANCE = r0
                return
        }

        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            okhttp3.internal.io.FileSystem$Companion r0 = okhttp3.internal.io.FileSystem.Companion.$$INSTANCE
            okhttp3.internal.io.FileSystem.Companion = r0
            okhttp3.internal.io.FileSystem$Companion$SystemFileSystem r0 = new okhttp3.internal.io.FileSystem$Companion$SystemFileSystem
            r0.<init>()
            okhttp3.internal.io.FileSystem r0 = (okhttp3.internal.io.FileSystem) r0
            okhttp3.internal.io.FileSystem.SYSTEM = r0
            return
    }

    okio.Sink appendingSink(java.io.File r1) throws java.io.FileNotFoundException;

    void delete(java.io.File r1) throws java.io.IOException;

    void deleteContents(java.io.File r1) throws java.io.IOException;

    boolean exists(java.io.File r1);

    void rename(java.io.File r1, java.io.File r2) throws java.io.IOException;

    okio.Sink sink(java.io.File r1) throws java.io.FileNotFoundException;

    long size(java.io.File r1);

    okio.Source source(java.io.File r1) throws java.io.FileNotFoundException;
}
