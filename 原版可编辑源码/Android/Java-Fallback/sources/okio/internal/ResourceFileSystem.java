package okio.internal;

@kotlin.Metadata(d1 = {"\u0000T\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\r\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0000\u0018\u0000 *2\u00020\u0001:\u0001*B\u0017\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u0018\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\n2\u0006\u0010\u0012\u001a\u00020\u0005H\u0016J\u0018\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\n2\u0006\u0010\u0016\u001a\u00020\nH\u0016J\u0010\u0010\u0017\u001a\u00020\n2\u0006\u0010\u0018\u001a\u00020\nH\u0016J\u0010\u0010\u0019\u001a\u00020\n2\u0006\u0010\u0018\u001a\u00020\nH\u0002J\u0018\u0010\u001a\u001a\u00020\u00142\u0006\u0010\u001b\u001a\u00020\n2\u0006\u0010\u001c\u001a\u00020\u0005H\u0016J\u0018\u0010\u001d\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\n2\u0006\u0010\u0016\u001a\u00020\nH\u0016J\u0018\u0010\u001e\u001a\u00020\u00142\u0006\u0010\u0018\u001a\u00020\n2\u0006\u0010\u0012\u001a\u00020\u0005H\u0016J\u0016\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020\n0\b2\u0006\u0010\u001b\u001a\u00020\nH\u0016J\u0018\u0010 \u001a\n\u0012\u0004\u0012\u00020\n\u0018\u00010\b2\u0006\u0010\u001b\u001a\u00020\nH\u0016J\u0012\u0010!\u001a\u0004\u0018\u00010\"2\u0006\u0010\u0018\u001a\u00020\nH\u0016J\u0010\u0010#\u001a\u00020$2\u0006\u0010\u0011\u001a\u00020\nH\u0016J \u0010%\u001a\u00020$2\u0006\u0010\u0011\u001a\u00020\n2\u0006\u0010\u001c\u001a\u00020\u00052\u0006\u0010\u0012\u001a\u00020\u0005H\u0016J\u0018\u0010&\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\n2\u0006\u0010\u001c\u001a\u00020\u0005H\u0016J\u0010\u0010\u0015\u001a\u00020'2\u0006\u0010\u0011\u001a\u00020\nH\u0016J\f\u0010(\u001a\u00020)*\u00020\nH\u0002R-\u0010\u0007\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\n0\t0\b8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\r\u0010\u000e\u001a\u0004\b\u000b\u0010\f¨\u0006+"}, d2 = {"Lokio/internal/ResourceFileSystem;", "Lokio/FileSystem;", "classLoader", "Ljava/lang/ClassLoader;", "indexEagerly", "", "(Ljava/lang/ClassLoader;Z)V", "roots", "", "Lkotlin/Pair;", "Lokio/Path;", "getRoots", "()Ljava/util/List;", "roots$delegate", "Lkotlin/Lazy;", "appendingSink", "Lokio/Sink;", "file", "mustExist", "atomicMove", "", "source", "target", "canonicalize", "path", "canonicalizeInternal", "createDirectory", "dir", "mustCreate", "createSymlink", "delete", "list", "listOrNull", "metadataOrNull", "Lokio/FileMetadata;", "openReadOnly", "Lokio/FileHandle;", "openReadWrite", "sink", "Lokio/Source;", "toRelativePath", "", "Companion", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class ResourceFileSystem extends okio.FileSystem {
    private static final okio.internal.ResourceFileSystem.Companion Companion = null;

    @java.lang.Deprecated
    private static final okio.Path ROOT = null;
    private final kotlin.Lazy roots$delegate;

    @kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0082\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u0004H\u0002J\u0012\u0010\n\u001a\u00020\u0004*\u00020\u00042\u0006\u0010\u000b\u001a\u00020\u0004J\u001c\u0010\f\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u000f\u0012\u0004\u0012\u00020\u00040\u000e0\r*\u00020\u0010J\u0018\u0010\u0011\u001a\u0010\u0012\u0004\u0012\u00020\u000f\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u000e*\u00020\u0012J\u0018\u0010\u0013\u001a\u0010\u0012\u0004\u0012\u00020\u000f\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u000e*\u00020\u0012R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0014"}, d2 = {"Lokio/internal/ResourceFileSystem$Companion;", "", "()V", "ROOT", "Lokio/Path;", "getROOT", "()Lokio/Path;", "keepPath", "", "path", "removeBase", "base", "toClasspathRoots", "", "Lkotlin/Pair;", "Lokio/FileSystem;", "Ljava/lang/ClassLoader;", "toFileRoot", "Ljava/net/URL;", "toJarRoot", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
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

        public static final boolean access$keepPath(okio.internal.ResourceFileSystem.Companion r0, okio.Path r1) {
                boolean r0 = r0.keepPath(r1)
                return r0
        }

        private final boolean keepPath(okio.Path r3) {
                r2 = this;
                java.lang.String r3 = r3.name()
                r0 = 1
                java.lang.String r1 = ".class"
                boolean r3 = kotlin.text.StringsKt.endsWith(r3, r1, r0)
                r3 = r3 ^ r0
                return r3
        }

        public final okio.Path getROOT() {
                r1 = this;
                okio.Path r0 = okio.internal.ResourceFileSystem.access$getROOT$cp()
                return r0
        }

        public final okio.Path removeBase(okio.Path r8, okio.Path r9) {
                r7 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                java.lang.String r0 = "base"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                java.lang.String r9 = r9.toString()
                okio.Path r0 = r7.getROOT()
                java.lang.String r8 = r8.toString()
                java.lang.CharSequence r9 = (java.lang.CharSequence) r9
                java.lang.String r1 = kotlin.text.StringsKt.removePrefix(r8, r9)
                r2 = 92
                r3 = 47
                r4 = 0
                r5 = 4
                r6 = 0
                java.lang.String r8 = kotlin.text.StringsKt.replace$default(r1, r2, r3, r4, r5, r6)
                okio.Path r8 = r0.resolve(r8)
                return r8
        }

        public final java.util.List<kotlin.Pair<okio.FileSystem, okio.Path>> toClasspathRoots(java.lang.ClassLoader r7) {
                r6 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
                java.lang.String r0 = ""
                java.util.Enumeration r0 = r7.getResources(r0)
                java.lang.String r1 = "getResources(\"\")"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
                java.util.ArrayList r0 = java.util.Collections.list(r0)
                java.lang.String r1 = "java.util.Collections.list(this)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
                java.util.List r0 = (java.util.List) r0
                java.lang.Iterable r0 = (java.lang.Iterable) r0
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
                java.util.Collection r2 = (java.util.Collection) r2
                java.util.Iterator r0 = r0.iterator()
            L28:
                boolean r3 = r0.hasNext()
                java.lang.String r4 = "it"
                if (r3 == 0) goto L47
                java.lang.Object r3 = r0.next()
                java.net.URL r3 = (java.net.URL) r3
                okio.internal.ResourceFileSystem$Companion r5 = okio.internal.ResourceFileSystem.access$getCompanion$p()
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                kotlin.Pair r3 = r5.toFileRoot(r3)
                if (r3 == 0) goto L28
                r2.add(r3)
                goto L28
            L47:
                java.util.List r2 = (java.util.List) r2
                java.util.Collection r2 = (java.util.Collection) r2
                java.lang.String r0 = "META-INF/MANIFEST.MF"
                java.util.Enumeration r7 = r7.getResources(r0)
                java.lang.String r0 = "getResources(\"META-INF/MANIFEST.MF\")"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r0)
                java.util.ArrayList r7 = java.util.Collections.list(r7)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r1)
                java.util.List r7 = (java.util.List) r7
                java.lang.Iterable r7 = (java.lang.Iterable) r7
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.Collection r0 = (java.util.Collection) r0
                java.util.Iterator r7 = r7.iterator()
            L6c:
                boolean r1 = r7.hasNext()
                if (r1 == 0) goto L89
                java.lang.Object r1 = r7.next()
                java.net.URL r1 = (java.net.URL) r1
                okio.internal.ResourceFileSystem$Companion r3 = okio.internal.ResourceFileSystem.access$getCompanion$p()
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r4)
                kotlin.Pair r1 = r3.toJarRoot(r1)
                if (r1 == 0) goto L6c
                r0.add(r1)
                goto L6c
            L89:
                java.util.List r0 = (java.util.List) r0
                java.lang.Iterable r0 = (java.lang.Iterable) r0
                java.util.List r7 = kotlin.collections.CollectionsKt.plus(r2, r0)
                return r7
        }

        public final kotlin.Pair<okio.FileSystem, okio.Path> toFileRoot(java.net.URL r6) {
                r5 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                java.lang.String r0 = r6.getProtocol()
                java.lang.String r1 = "file"
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
                r1 = 0
                if (r0 != 0) goto L13
                return r1
            L13:
                okio.FileSystem r0 = okio.FileSystem.SYSTEM
                okio.Path$Companion r2 = okio.Path.Companion
                java.io.File r3 = new java.io.File
                java.net.URI r6 = r6.toURI()
                r3.<init>(r6)
                r6 = 0
                r4 = 1
                okio.Path r6 = okio.Path.Companion.get$default(r2, r3, r6, r4, r1)
                kotlin.Pair r6 = kotlin.TuplesKt.to(r0, r6)
                return r6
        }

        public final kotlin.Pair<okio.FileSystem, okio.Path> toJarRoot(java.net.URL r10) {
                r9 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
                java.lang.String r10 = r10.toString()
                java.lang.String r0 = "toString()"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r10, r0)
                r0 = 0
                r1 = 0
                java.lang.String r2 = "jar:file:"
                r3 = 2
                boolean r2 = kotlin.text.StringsKt.startsWith$default(r10, r2, r0, r3, r1)
                if (r2 != 0) goto L1a
                return r1
            L1a:
                r3 = r10
                java.lang.CharSequence r3 = (java.lang.CharSequence) r3
                r5 = 0
                r6 = 0
                r7 = 6
                r8 = 0
                java.lang.String r4 = "!"
                int r2 = kotlin.text.StringsKt.lastIndexOf$default(r3, r4, r5, r6, r7, r8)
                r3 = -1
                if (r2 != r3) goto L2b
                return r1
            L2b:
                okio.Path$Companion r3 = okio.Path.Companion
                java.io.File r4 = new java.io.File
                r5 = 4
                java.lang.String r10 = r10.substring(r5, r2)
                java.lang.String r2 = "(this as java.lang.Strin…ing(startIndex, endIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r10, r2)
                java.net.URI r10 = java.net.URI.create(r10)
                r4.<init>(r10)
                r10 = 1
                okio.Path r10 = okio.Path.Companion.get$default(r3, r4, r0, r10, r1)
                okio.FileSystem r0 = okio.FileSystem.SYSTEM
                okio.internal.ResourceFileSystem$Companion$toJarRoot$zip$1 r1 = okio.internal.ResourceFileSystem$Companion$toJarRoot$zip$1.INSTANCE
                kotlin.jvm.functions.Function1 r1 = (kotlin.jvm.functions.Function1) r1
                okio.ZipFileSystem r10 = okio.internal.ZipKt.openZip(r10, r0, r1)
                okio.Path r0 = r9.getROOT()
                kotlin.Pair r10 = kotlin.TuplesKt.to(r10, r0)
                return r10
        }
    }

    static {
            okio.internal.ResourceFileSystem$Companion r0 = new okio.internal.ResourceFileSystem$Companion
            r1 = 0
            r0.<init>(r1)
            okio.internal.ResourceFileSystem.Companion = r0
            okio.Path$Companion r0 = okio.Path.Companion
            java.lang.String r2 = "/"
            r3 = 0
            r4 = 1
            okio.Path r0 = okio.Path.Companion.get$default(r0, r2, r3, r4, r1)
            okio.internal.ResourceFileSystem.ROOT = r0
            return
    }

    public ResourceFileSystem(java.lang.ClassLoader r2, boolean r3) {
            r1 = this;
            java.lang.String r0 = "classLoader"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            okio.internal.ResourceFileSystem$roots$2 r0 = new okio.internal.ResourceFileSystem$roots$2
            r0.<init>(r2)
            kotlin.jvm.functions.Function0 r0 = (kotlin.jvm.functions.Function0) r0
            kotlin.Lazy r2 = kotlin.LazyKt.lazy(r0)
            r1.roots$delegate = r2
            if (r3 == 0) goto L1e
            java.util.List r2 = r1.getRoots()
            r2.size()
        L1e:
            return
    }

    public static final okio.internal.ResourceFileSystem.Companion access$getCompanion$p() {
            okio.internal.ResourceFileSystem$Companion r0 = okio.internal.ResourceFileSystem.Companion
            return r0
    }

    public static final okio.Path access$getROOT$cp() {
            okio.Path r0 = okio.internal.ResourceFileSystem.ROOT
            return r0
    }

    private final okio.Path canonicalizeInternal(okio.Path r3) {
            r2 = this;
            okio.Path r0 = okio.internal.ResourceFileSystem.ROOT
            r1 = 1
            okio.Path r3 = r0.resolve(r3, r1)
            return r3
    }

    private final java.util.List<kotlin.Pair<okio.FileSystem, okio.Path>> getRoots() {
            r1 = this;
            kotlin.Lazy r0 = r1.roots$delegate
            java.lang.Object r0 = r0.getValue()
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    private final java.lang.String toRelativePath(okio.Path r2) {
            r1 = this;
            okio.Path r2 = r1.canonicalizeInternal(r2)
            okio.Path r0 = okio.internal.ResourceFileSystem.ROOT
            okio.Path r2 = r2.relativeTo(r0)
            java.lang.String r2 = r2.toString()
            return r2
    }

    @Override
    public okio.Sink appendingSink(okio.Path r2, boolean r3) {
            r1 = this;
            java.lang.String r3 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r3)
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r0 = " is read-only"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void atomicMove(okio.Path r2, okio.Path r3) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r0 = " is read-only"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
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
    public void createDirectory(okio.Path r2, boolean r3) {
            r1 = this;
            java.lang.String r3 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r3)
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r0 = " is read-only"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void createSymlink(okio.Path r2, okio.Path r3) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r0 = " is read-only"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void delete(okio.Path r2, boolean r3) {
            r1 = this;
            java.lang.String r3 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r3)
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r0 = " is read-only"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    @Override
    public java.util.List<okio.Path> list(okio.Path r12) {
            r11 = this;
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            java.lang.String r0 = r11.toRelativePath(r12)
            java.util.LinkedHashSet r1 = new java.util.LinkedHashSet
            r1.<init>()
            java.util.Set r1 = (java.util.Set) r1
            java.util.List r2 = r11.getRoots()
            java.util.Iterator r2 = r2.iterator()
            r3 = 0
        L19:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto L96
            java.lang.Object r4 = r2.next()
            kotlin.Pair r4 = (kotlin.Pair) r4
            java.lang.Object r5 = r4.component1()
            okio.FileSystem r5 = (okio.FileSystem) r5
            java.lang.Object r4 = r4.component2()
            okio.Path r4 = (okio.Path) r4
            r6 = r1
            java.util.Collection r6 = (java.util.Collection) r6     // Catch: java.io.IOException -> L19
            okio.Path r7 = r4.resolve(r0)     // Catch: java.io.IOException -> L19
            java.util.List r5 = r5.list(r7)     // Catch: java.io.IOException -> L19
            java.lang.Iterable r5 = (java.lang.Iterable) r5     // Catch: java.io.IOException -> L19
            java.util.ArrayList r7 = new java.util.ArrayList     // Catch: java.io.IOException -> L19
            r7.<init>()     // Catch: java.io.IOException -> L19
            java.util.Collection r7 = (java.util.Collection) r7     // Catch: java.io.IOException -> L19
            java.util.Iterator r5 = r5.iterator()     // Catch: java.io.IOException -> L19
        L49:
            boolean r8 = r5.hasNext()     // Catch: java.io.IOException -> L19
            if (r8 == 0) goto L62
            java.lang.Object r8 = r5.next()     // Catch: java.io.IOException -> L19
            r9 = r8
            okio.Path r9 = (okio.Path) r9     // Catch: java.io.IOException -> L19
            okio.internal.ResourceFileSystem$Companion r10 = okio.internal.ResourceFileSystem.Companion     // Catch: java.io.IOException -> L19
            boolean r9 = okio.internal.ResourceFileSystem.Companion.access$keepPath(r10, r9)     // Catch: java.io.IOException -> L19
            if (r9 == 0) goto L49
            r7.add(r8)     // Catch: java.io.IOException -> L19
            goto L49
        L62:
            java.util.List r7 = (java.util.List) r7     // Catch: java.io.IOException -> L19
            java.lang.Iterable r7 = (java.lang.Iterable) r7     // Catch: java.io.IOException -> L19
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.io.IOException -> L19
            r8 = 10
            int r8 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r7, r8)     // Catch: java.io.IOException -> L19
            r5.<init>(r8)     // Catch: java.io.IOException -> L19
            java.util.Collection r5 = (java.util.Collection) r5     // Catch: java.io.IOException -> L19
            java.util.Iterator r7 = r7.iterator()     // Catch: java.io.IOException -> L19
        L77:
            boolean r8 = r7.hasNext()     // Catch: java.io.IOException -> L19
            if (r8 == 0) goto L8d
            java.lang.Object r8 = r7.next()     // Catch: java.io.IOException -> L19
            okio.Path r8 = (okio.Path) r8     // Catch: java.io.IOException -> L19
            okio.internal.ResourceFileSystem$Companion r9 = okio.internal.ResourceFileSystem.Companion     // Catch: java.io.IOException -> L19
            okio.Path r8 = r9.removeBase(r8, r4)     // Catch: java.io.IOException -> L19
            r5.add(r8)     // Catch: java.io.IOException -> L19
            goto L77
        L8d:
            java.util.List r5 = (java.util.List) r5     // Catch: java.io.IOException -> L19
            java.lang.Iterable r5 = (java.lang.Iterable) r5     // Catch: java.io.IOException -> L19
            kotlin.collections.CollectionsKt.addAll(r6, r5)     // Catch: java.io.IOException -> L19
            r3 = 1
            goto L19
        L96:
            if (r3 == 0) goto L9f
            java.lang.Iterable r1 = (java.lang.Iterable) r1
            java.util.List r12 = kotlin.collections.CollectionsKt.toList(r1)
            return r12
        L9f:
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.String r1 = "file not found: "
            java.lang.String r12 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r12)
            r0.<init>(r12)
            throw r0
    }

    @Override
    public java.util.List<okio.Path> listOrNull(okio.Path r10) {
            r9 = this;
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            java.lang.String r10 = r9.toRelativePath(r10)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            java.util.Set r0 = (java.util.Set) r0
            java.util.List r1 = r9.getRoots()
            java.util.Iterator r1 = r1.iterator()
            r2 = 0
        L19:
            boolean r3 = r1.hasNext()
            r4 = 0
            if (r3 == 0) goto L9e
            java.lang.Object r3 = r1.next()
            kotlin.Pair r3 = (kotlin.Pair) r3
            java.lang.Object r5 = r3.component1()
            okio.FileSystem r5 = (okio.FileSystem) r5
            java.lang.Object r3 = r3.component2()
            okio.Path r3 = (okio.Path) r3
            okio.Path r6 = r3.resolve(r10)
            java.util.List r5 = r5.listOrNull(r6)
            if (r5 != 0) goto L3d
            goto L91
        L3d:
            java.lang.Iterable r5 = (java.lang.Iterable) r5
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.Collection r4 = (java.util.Collection) r4
            java.util.Iterator r5 = r5.iterator()
        L4a:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L63
            java.lang.Object r6 = r5.next()
            r7 = r6
            okio.Path r7 = (okio.Path) r7
            okio.internal.ResourceFileSystem$Companion r8 = okio.internal.ResourceFileSystem.Companion
            boolean r7 = okio.internal.ResourceFileSystem.Companion.access$keepPath(r8, r7)
            if (r7 == 0) goto L4a
            r4.add(r6)
            goto L4a
        L63:
            java.util.List r4 = (java.util.List) r4
            java.lang.Iterable r4 = (java.lang.Iterable) r4
            java.util.ArrayList r5 = new java.util.ArrayList
            r6 = 10
            int r6 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r4, r6)
            r5.<init>(r6)
            java.util.Collection r5 = (java.util.Collection) r5
            java.util.Iterator r4 = r4.iterator()
        L78:
            boolean r6 = r4.hasNext()
            if (r6 == 0) goto L8e
            java.lang.Object r6 = r4.next()
            okio.Path r6 = (okio.Path) r6
            okio.internal.ResourceFileSystem$Companion r7 = okio.internal.ResourceFileSystem.Companion
            okio.Path r6 = r7.removeBase(r6, r3)
            r5.add(r6)
            goto L78
        L8e:
            r4 = r5
            java.util.List r4 = (java.util.List) r4
        L91:
            if (r4 == 0) goto L19
            r2 = r0
            java.util.Collection r2 = (java.util.Collection) r2
            java.lang.Iterable r4 = (java.lang.Iterable) r4
            kotlin.collections.CollectionsKt.addAll(r2, r4)
            r2 = 1
            goto L19
        L9e:
            if (r2 == 0) goto La6
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            java.util.List r4 = kotlin.collections.CollectionsKt.toList(r0)
        La6:
            return r4
    }

    @Override
    public okio.FileMetadata metadataOrNull(okio.Path r5) {
            r4 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            okio.internal.ResourceFileSystem$Companion r0 = okio.internal.ResourceFileSystem.Companion
            boolean r0 = okio.internal.ResourceFileSystem.Companion.access$keepPath(r0, r5)
            r1 = 0
            if (r0 != 0) goto Lf
            return r1
        Lf:
            java.lang.String r5 = r4.toRelativePath(r5)
            java.util.List r0 = r4.getRoots()
            java.util.Iterator r0 = r0.iterator()
        L1b:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3f
            java.lang.Object r2 = r0.next()
            kotlin.Pair r2 = (kotlin.Pair) r2
            java.lang.Object r3 = r2.component1()
            okio.FileSystem r3 = (okio.FileSystem) r3
            java.lang.Object r2 = r2.component2()
            okio.Path r2 = (okio.Path) r2
            okio.Path r2 = r2.resolve(r5)
            okio.FileMetadata r2 = r3.metadataOrNull(r2)
            if (r2 != 0) goto L3e
            goto L1b
        L3e:
            return r2
        L3f:
            return r1
    }

    @Override
    public okio.FileHandle openReadOnly(okio.Path r6) {
            r5 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            okio.internal.ResourceFileSystem$Companion r0 = okio.internal.ResourceFileSystem.Companion
            boolean r0 = okio.internal.ResourceFileSystem.Companion.access$keepPath(r0, r6)
            java.lang.String r1 = "file not found: "
            if (r0 == 0) goto L46
            java.lang.String r0 = r5.toRelativePath(r6)
            java.util.List r2 = r5.getRoots()
            java.util.Iterator r2 = r2.iterator()
        L1b:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L3c
            java.lang.Object r3 = r2.next()
            kotlin.Pair r3 = (kotlin.Pair) r3
            java.lang.Object r4 = r3.component1()
            okio.FileSystem r4 = (okio.FileSystem) r4
            java.lang.Object r3 = r3.component2()
            okio.Path r3 = (okio.Path) r3
            okio.Path r3 = r3.resolve(r0)     // Catch: java.io.FileNotFoundException -> L1b
            okio.FileHandle r6 = r4.openReadOnly(r3)     // Catch: java.io.FileNotFoundException -> L1b
            return r6
        L3c:
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r6)
            r0.<init>(r6)
            throw r0
        L46:
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r6)
            r0.<init>(r6)
            throw r0
    }

    @Override
    public okio.FileHandle openReadWrite(okio.Path r1, boolean r2, boolean r3) {
            r0 = this;
            java.lang.String r2 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "resources are not writable"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public okio.Sink sink(okio.Path r2, boolean r3) {
            r1 = this;
            java.lang.String r3 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r3)
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r0 = " is read-only"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    @Override
    public okio.Source source(okio.Path r6) {
            r5 = this;
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            okio.internal.ResourceFileSystem$Companion r0 = okio.internal.ResourceFileSystem.Companion
            boolean r0 = okio.internal.ResourceFileSystem.Companion.access$keepPath(r0, r6)
            java.lang.String r1 = "file not found: "
            if (r0 == 0) goto L46
            java.lang.String r0 = r5.toRelativePath(r6)
            java.util.List r2 = r5.getRoots()
            java.util.Iterator r2 = r2.iterator()
        L1b:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L3c
            java.lang.Object r3 = r2.next()
            kotlin.Pair r3 = (kotlin.Pair) r3
            java.lang.Object r4 = r3.component1()
            okio.FileSystem r4 = (okio.FileSystem) r4
            java.lang.Object r3 = r3.component2()
            okio.Path r3 = (okio.Path) r3
            okio.Path r3 = r3.resolve(r0)     // Catch: java.io.FileNotFoundException -> L1b
            okio.Source r6 = r4.source(r3)     // Catch: java.io.FileNotFoundException -> L1b
            return r6
        L3c:
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r6)
            r0.<init>(r6)
            throw r0
        L46:
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r6)
            r0.<init>(r6)
            throw r0
    }
}
