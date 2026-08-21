package kotlin.io.path;

@kotlin.Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\bÂ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0016\u0010\u0007\u001a\u00020\u00042\u0006\u0010\b\u001a\u00020\u00042\u0006\u0010\t\u001a\u00020\u0004R\u0016\u0010\u0003\u001a\n \u0005*\u0004\u0018\u00010\u00040\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0006\u001a\n \u0005*\u0004\u0018\u00010\u00040\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lkotlin/io/path/PathRelativizer;", "", "()V", "emptyPath", "Ljava/nio/file/Path;", "kotlin.jvm.PlatformType", "parentPath", "tryRelativeTo", "path", "base", "kotlin-stdlib-jdk7"}, k = 1, mv = {1, 5, 1})
final class PathRelativizer {
    public static final kotlin.io.path.PathRelativizer INSTANCE = null;
    private static final java.nio.file.Path emptyPath = null;
    private static final java.nio.file.Path parentPath = null;

    static {
            kotlin.io.path.PathRelativizer r0 = new kotlin.io.path.PathRelativizer
            r0.<init>()
            kotlin.io.path.PathRelativizer.INSTANCE = r0
            r0 = 0
            java.lang.String[] r1 = new java.lang.String[r0]
            java.lang.String r2 = ""
            java.nio.file.Path r1 = java.nio.file.Paths.get(r2, r1)
            kotlin.io.path.PathRelativizer.emptyPath = r1
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r1 = ".."
            java.nio.file.Path r0 = java.nio.file.Paths.get(r1, r0)
            kotlin.io.path.PathRelativizer.parentPath = r0
            return
    }

    private PathRelativizer() {
            r0 = this;
            r0.<init>()
            return
    }

    public final java.nio.file.Path tryRelativeTo(java.nio.file.Path r7, java.nio.file.Path r8) {
            r6 = this;
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "base"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.nio.file.Path r8 = r8.normalize()
            java.nio.file.Path r7 = r7.normalize()
            java.nio.file.Path r0 = r8.relativize(r7)
            java.lang.String r1 = "bn"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r1)
            int r1 = r8.getNameCount()
            java.lang.String r2 = "pn"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r2)
            int r2 = r7.getNameCount()
            int r1 = java.lang.Math.min(r1, r2)
            r2 = 0
            r3 = r2
        L2e:
            if (r3 >= r1) goto L5a
            java.nio.file.Path r4 = r8.getName(r3)
            java.nio.file.Path r5 = kotlin.io.path.PathRelativizer.parentPath
            boolean r4 = kotlin.jvm.internal.Intrinsics.areEqual(r4, r5)
            r4 = r4 ^ 1
            if (r4 == 0) goto L3f
            goto L5a
        L3f:
            java.nio.file.Path r4 = r7.getName(r3)
            java.nio.file.Path r5 = kotlin.io.path.PathRelativizer.parentPath
            boolean r4 = kotlin.jvm.internal.Intrinsics.areEqual(r4, r5)
            r4 = r4 ^ 1
            if (r4 != 0) goto L50
            int r3 = r3 + 1
            goto L2e
        L50:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Unable to compute relative path"
            r7.<init>(r8)
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            throw r7
        L5a:
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r7, r8)
            r1 = r1 ^ 1
            if (r1 == 0) goto L6b
            java.nio.file.Path r1 = kotlin.io.path.PathRelativizer.emptyPath
            boolean r8 = kotlin.jvm.internal.Intrinsics.areEqual(r8, r1)
            if (r8 == 0) goto L6b
            goto Lad
        L6b:
            java.lang.String r7 = r0.toString()
            java.lang.String r8 = "rn"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r8)
            java.nio.file.FileSystem r8 = r0.getFileSystem()
            java.lang.String r1 = "rn.fileSystem"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r1)
            java.lang.String r8 = r8.getSeparator()
            java.lang.String r3 = "rn.fileSystem.separator"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r3)
            r3 = 2
            r4 = 0
            boolean r8 = kotlin.text.StringsKt.endsWith$default(r7, r8, r2, r3, r4)
            if (r8 == 0) goto Lac
            java.nio.file.FileSystem r8 = r0.getFileSystem()
            java.nio.file.FileSystem r0 = r0.getFileSystem()
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.String r0 = r0.getSeparator()
            int r0 = r0.length()
            java.lang.String r7 = kotlin.text.StringsKt.dropLast(r7, r0)
            java.lang.String[] r0 = new java.lang.String[r2]
            java.nio.file.Path r7 = r8.getPath(r7, r0)
            goto Lad
        Lac:
            r7 = r0
        Lad:
            java.lang.String r8 = "r"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r8)
            return r7
    }
}
