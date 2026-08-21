package kotlin.io;

@kotlin.Metadata(d1 = {"\u0000$\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\u001a\u0011\u0010\u000b\u001a\u00020\f*\u00020\bH\u0002¢\u0006\u0002\b\r\u001a\u001c\u0010\u000e\u001a\u00020\u0002*\u00020\u00022\u0006\u0010\u000f\u001a\u00020\f2\u0006\u0010\u0010\u001a\u00020\fH\u0000\u001a\f\u0010\u0011\u001a\u00020\u0012*\u00020\u0002H\u0000\"\u0015\u0010\u0000\u001a\u00020\u0001*\u00020\u00028F¢\u0006\u0006\u001a\u0004\b\u0000\u0010\u0003\"\u0018\u0010\u0004\u001a\u00020\u0002*\u00020\u00028@X\u0080\u0004¢\u0006\u0006\u001a\u0004\b\u0005\u0010\u0006\"\u0018\u0010\u0007\u001a\u00020\b*\u00020\u00028@X\u0080\u0004¢\u0006\u0006\u001a\u0004\b\t\u0010\n¨\u0006\u0013"}, d2 = {"isRooted", "", "Ljava/io/File;", "(Ljava/io/File;)Z", "root", "getRoot", "(Ljava/io/File;)Ljava/io/File;", "rootName", "", "getRootName", "(Ljava/io/File;)Ljava/lang/String;", "getRootLength", "", "getRootLength$FilesKt__FilePathComponentsKt", "subPath", "beginIndex", "endIndex", "toComponents", "Lkotlin/io/FilePathComponents;", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/io/FilesKt")
class FilesKt__FilePathComponentsKt {
    public FilesKt__FilePathComponentsKt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final java.io.File getRoot(java.io.File r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.io.File r0 = new java.io.File
            java.lang.String r1 = kotlin.io.FilesKt.getRootName(r1)
            r0.<init>(r1)
            return r0
    }

    private static final int getRootLength$FilesKt__FilePathComponentsKt(java.lang.String r8) {
            r6 = r8
            java.lang.CharSequence r6 = (java.lang.CharSequence) r6
            char r1 = java.io.File.separatorChar
            r2 = 0
            r3 = 0
            r4 = 4
            r5 = 0
            r0 = r6
            int r0 = kotlin.text.StringsKt.indexOf$default(r0, r1, r2, r3, r4, r5)
            r7 = 1
            if (r0 != 0) goto L42
            int r0 = r8.length()
            if (r0 <= r7) goto L41
            char r0 = r8.charAt(r7)
            char r1 = java.io.File.separatorChar
            if (r0 != r1) goto L41
            char r1 = java.io.File.separatorChar
            r2 = 2
            r3 = 0
            r4 = 4
            r5 = 0
            r0 = r6
            int r0 = kotlin.text.StringsKt.indexOf$default(r0, r1, r2, r3, r4, r5)
            if (r0 < 0) goto L41
            char r1 = java.io.File.separatorChar
            int r2 = r0 + 1
            r3 = 0
            r4 = 4
            r5 = 0
            r0 = r6
            int r0 = kotlin.text.StringsKt.indexOf$default(r0, r1, r2, r3, r4, r5)
            if (r0 < 0) goto L3c
            int r0 = r0 + r7
            return r0
        L3c:
            int r8 = r8.length()
            return r8
        L41:
            return r7
        L42:
            r1 = 58
            if (r0 <= 0) goto L50
            int r2 = r0 + (-1)
            char r2 = r8.charAt(r2)
            if (r2 != r1) goto L50
            int r0 = r0 + r7
            return r0
        L50:
            r2 = -1
            r3 = 0
            if (r0 != r2) goto L61
            r0 = 2
            r2 = 0
            boolean r0 = kotlin.text.StringsKt.endsWith$default(r6, r1, r3, r0, r2)
            if (r0 == 0) goto L61
            int r8 = r8.length()
            return r8
        L61:
            return r3
    }

    public static final java.lang.String getRootName(java.io.File r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = r2.getPath()
            java.lang.String r1 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.String r2 = r2.getPath()
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r1)
            int r2 = getRootLength$FilesKt__FilePathComponentsKt(r2)
            r1 = 0
            java.lang.String r2 = r0.substring(r1, r2)
            java.lang.String r0 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r0)
            return r2
    }

    public static final boolean isRooted(java.io.File r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = r1.getPath()
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            int r1 = getRootLength$FilesKt__FilePathComponentsKt(r1)
            if (r1 <= 0) goto L16
            r1 = 1
            goto L17
        L16:
            r1 = 0
        L17:
            return r1
    }

    public static final java.io.File subPath(java.io.File r1, int r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.io.FilePathComponents r1 = kotlin.io.FilesKt.toComponents(r1)
            java.io.File r1 = r1.subPath(r2, r3)
            return r1
    }

    public static final kotlin.io.FilePathComponents toComponents(java.io.File r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.lang.String r9 = r9.getPath()
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r9, r0)
            int r0 = getRootLength$FilesKt__FilePathComponentsKt(r9)
            r1 = 0
            java.lang.String r2 = r9.substring(r1, r0)
            java.lang.String r3 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            java.lang.String r9 = r9.substring(r0)
            java.lang.String r0 = "this as java.lang.String).substring(startIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r9, r0)
            r3 = r9
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3
            int r9 = r3.length()
            r0 = 1
            if (r9 != 0) goto L31
            r9 = r0
            goto L32
        L31:
            r9 = r1
        L32:
            if (r9 == 0) goto L39
            java.util.List r9 = kotlin.collections.CollectionsKt.emptyList()
            goto L72
        L39:
            char[] r4 = new char[r0]
            char r9 = java.io.File.separatorChar
            r4[r1] = r9
            r5 = 0
            r6 = 0
            r7 = 6
            r8 = 0
            java.util.List r9 = kotlin.text.StringsKt.split$default(r3, r4, r5, r6, r7, r8)
            java.lang.Iterable r9 = (java.lang.Iterable) r9
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 10
            int r1 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r9, r1)
            r0.<init>(r1)
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Iterator r9 = r9.iterator()
        L5a:
            boolean r1 = r9.hasNext()
            if (r1 == 0) goto L6f
            java.lang.Object r1 = r9.next()
            java.lang.String r1 = (java.lang.String) r1
            java.io.File r3 = new java.io.File
            r3.<init>(r1)
            r0.add(r3)
            goto L5a
        L6f:
            r9 = r0
            java.util.List r9 = (java.util.List) r9
        L72:
            kotlin.io.FilePathComponents r0 = new kotlin.io.FilePathComponents
            java.io.File r1 = new java.io.File
            r1.<init>(r2)
            r0.<init>(r1, r9)
            return r0
    }
}
