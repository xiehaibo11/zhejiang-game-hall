package kotlin.io;

@kotlin.Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\r\b\u0080\b\u0018\u00002\u00020\u0001B\u001d\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005¢\u0006\u0002\u0010\u0006J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005HÆ\u0003J#\u0010\u0018\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005HÆ\u0001J\u0013\u0010\u0019\u001a\u00020\b2\b\u0010\u001a\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001b\u001a\u00020\u0013HÖ\u0001J\u0016\u0010\u001c\u001a\u00020\u00032\u0006\u0010\u001d\u001a\u00020\u00132\u0006\u0010\u001e\u001a\u00020\u0013J\t\u0010\u001f\u001a\u00020\rHÖ\u0001R\u0011\u0010\u0007\u001a\u00020\b8F¢\u0006\u0006\u001a\u0004\b\u0007\u0010\tR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\f\u001a\u00020\r8F¢\u0006\u0006\u001a\u0004\b\u000e\u0010\u000fR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0012\u001a\u00020\u00138F¢\u0006\u0006\u001a\u0004\b\u0014\u0010\u0015¨\u0006 "}, d2 = {"Lkotlin/io/FilePathComponents;", "", "root", "Ljava/io/File;", "segments", "", "(Ljava/io/File;Ljava/util/List;)V", "isRooted", "", "()Z", "getRoot", "()Ljava/io/File;", "rootName", "", "getRootName", "()Ljava/lang/String;", "getSegments", "()Ljava/util/List;", "size", "", "getSize", "()I", "component1", "component2", "copy", "equals", "other", "hashCode", "subPath", "beginIndex", "endIndex", "toString", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class FilePathComponents {
    private final java.io.File root;
    private final java.util.List<java.io.File> segments;

    public FilePathComponents(java.io.File r2, java.util.List<? extends java.io.File> r3) {
            r1 = this;
            java.lang.String r0 = "root"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "segments"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            r1.root = r2
            r1.segments = r3
            return
    }

    public static kotlin.io.FilePathComponents copy$default(kotlin.io.FilePathComponents r0, java.io.File r1, java.util.List r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L6
            java.io.File r1 = r0.root
        L6:
            r3 = r3 & 2
            if (r3 == 0) goto Lc
            java.util.List<java.io.File> r2 = r0.segments
        Lc:
            kotlin.io.FilePathComponents r0 = r0.copy(r1, r2)
            return r0
    }

    public final java.io.File component1() {
            r1 = this;
            java.io.File r0 = r1.root
            return r0
    }

    public final java.util.List<java.io.File> component2() {
            r1 = this;
            java.util.List<java.io.File> r0 = r1.segments
            return r0
    }

    public final kotlin.io.FilePathComponents copy(java.io.File r2, java.util.List<? extends java.io.File> r3) {
            r1 = this;
            java.lang.String r0 = "root"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "segments"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            kotlin.io.FilePathComponents r0 = new kotlin.io.FilePathComponents
            r0.<init>(r2, r3)
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof kotlin.io.FilePathComponents
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            kotlin.io.FilePathComponents r5 = (kotlin.io.FilePathComponents) r5
            java.io.File r1 = r4.root
            java.io.File r3 = r5.root
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)
            if (r1 != 0) goto L17
            return r2
        L17:
            java.util.List<java.io.File> r1 = r4.segments
            java.util.List<java.io.File> r5 = r5.segments
            boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r5)
            if (r5 != 0) goto L22
            return r2
        L22:
            return r0
    }

    public final java.io.File getRoot() {
            r1 = this;
            java.io.File r0 = r1.root
            return r0
    }

    public final java.lang.String getRootName() {
            r2 = this;
            java.io.File r0 = r2.root
            java.lang.String r0 = r0.getPath()
            java.lang.String r1 = "root.path"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public final java.util.List<java.io.File> getSegments() {
            r1 = this;
            java.util.List<java.io.File> r0 = r1.segments
            return r0
    }

    public final int getSize() {
            r1 = this;
            java.util.List<java.io.File> r0 = r1.segments
            int r0 = r0.size()
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.io.File r0 = r2.root
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            java.util.List<java.io.File> r1 = r2.segments
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            return r0
    }

    public final boolean isRooted() {
            r2 = this;
            java.io.File r0 = r2.root
            java.lang.String r0 = r0.getPath()
            java.lang.String r1 = "root.path"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            int r0 = r0.length()
            if (r0 <= 0) goto L15
            r0 = 1
            goto L16
        L15:
            r0 = 0
        L16:
            return r0
    }

    public final java.io.File subPath(int r11, int r12) {
            r10 = this;
            if (r11 < 0) goto L2f
            if (r11 > r12) goto L2f
            int r0 = r10.getSize()
            if (r12 > r0) goto L2f
            java.io.File r0 = new java.io.File
            java.util.List<java.io.File> r1 = r10.segments
            java.util.List r11 = r1.subList(r11, r12)
            r1 = r11
            java.lang.Iterable r1 = (java.lang.Iterable) r1
            java.lang.String r11 = java.io.File.separator
            java.lang.String r12 = "separator"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r11, r12)
            r2 = r11
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 62
            r9 = 0
            java.lang.String r11 = kotlin.collections.CollectionsKt.joinToString$default(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r0.<init>(r11)
            return r0
        L2f:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            r11.<init>()
            throw r11
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "FilePathComponents(root="
            r0.append(r1)
            java.io.File r1 = r2.root
            r0.append(r1)
            java.lang.String r1 = ", segments="
            r0.append(r1)
            java.util.List<java.io.File> r1 = r2.segments
            r0.append(r1)
            r1 = 41
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
