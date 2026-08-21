package okio.internal;

@kotlin.Metadata(d1 = {"\u0000H\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\u000b\n\u0002\u0010\u0000\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0004\n\u0002\u0010\f\n\u0002\b\u0006\n\u0002\u0010\u0005\n\u0000\u001a\u0015\u0010\u0014\u001a\u00020\r*\u00020\u000e2\u0006\u0010\u0015\u001a\u00020\u000eH\u0080\b\u001a\u0017\u0010\u0016\u001a\u00020\u0017*\u00020\u000e2\b\u0010\u0015\u001a\u0004\u0018\u00010\u0018H\u0080\b\u001a\r\u0010\u0019\u001a\u00020\r*\u00020\u000eH\u0080\b\u001a\r\u0010\u001a\u001a\u00020\u0017*\u00020\u000eH\u0080\b\u001a\r\u0010\u001b\u001a\u00020\u0017*\u00020\u000eH\u0080\b\u001a\r\u0010\u001c\u001a\u00020\u0017*\u00020\u000eH\u0080\b\u001a\r\u0010\u001d\u001a\u00020\u001e*\u00020\u000eH\u0080\b\u001a\r\u0010\u001f\u001a\u00020\u0001*\u00020\u000eH\u0080\b\u001a\r\u0010 \u001a\u00020\u000e*\u00020\u000eH\u0080\b\u001a\u000f\u0010!\u001a\u0004\u0018\u00010\u000e*\u00020\u000eH\u0080\b\u001a\u0015\u0010\"\u001a\u00020\u000e*\u00020\u000e2\u0006\u0010\u0015\u001a\u00020\u000eH\u0080\b\u001a\u001d\u0010#\u001a\u00020\u000e*\u00020\u000e2\u0006\u0010$\u001a\u00020\u001e2\u0006\u0010%\u001a\u00020\u0017H\u0080\b\u001a\u001d\u0010#\u001a\u00020\u000e*\u00020\u000e2\u0006\u0010$\u001a\u00020&2\u0006\u0010%\u001a\u00020\u0017H\u0080\b\u001a\u001d\u0010#\u001a\u00020\u000e*\u00020\u000e2\u0006\u0010$\u001a\u00020\u00012\u0006\u0010%\u001a\u00020\u0017H\u0080\b\u001a\u001c\u0010#\u001a\u00020\u000e*\u00020\u000e2\u0006\u0010$\u001a\u00020\u000e2\u0006\u0010%\u001a\u00020\u0017H\u0000\u001a\u000f\u0010'\u001a\u0004\u0018\u00010\u000e*\u00020\u000eH\u0080\b\u001a\u0013\u0010(\u001a\b\u0012\u0004\u0012\u00020\u001e0)*\u00020\u000eH\u0080\b\u001a\u0013\u0010*\u001a\b\u0012\u0004\u0012\u00020\u00010)*\u00020\u000eH\u0080\b\u001a\u0012\u0010+\u001a\u00020\u000e*\u00020\u001e2\u0006\u0010%\u001a\u00020\u0017\u001a\r\u0010,\u001a\u00020\u001e*\u00020\u000eH\u0080\b\u001a\u0014\u0010-\u001a\u0004\u0018\u00010.*\u00020\u000eH\u0080\b¢\u0006\u0002\u0010/\u001a\f\u00100\u001a\u00020\u0017*\u00020\u000eH\u0002\u001a\f\u00101\u001a\u00020\r*\u00020\u000eH\u0002\u001a\u0014\u00102\u001a\u00020\u0017*\u00020&2\u0006\u0010\u0011\u001a\u00020\u0001H\u0002\u001a\u0014\u00103\u001a\u00020\u000e*\u00020&2\u0006\u0010%\u001a\u00020\u0017H\u0000\u001a\f\u00104\u001a\u00020\u0001*\u000205H\u0002\u001a\f\u00104\u001a\u00020\u0001*\u00020\u001eH\u0002\"\u0016\u0010\u0000\u001a\u00020\u00018\u0002X\u0083\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u0002\u0010\u0003\"\u0016\u0010\u0004\u001a\u00020\u00018\u0002X\u0083\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u0005\u0010\u0003\"\u0016\u0010\u0006\u001a\u00020\u00018\u0002X\u0083\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u0007\u0010\u0003\"\u0016\u0010\b\u001a\u00020\u00018\u0002X\u0083\u0004¢\u0006\b\n\u0000\u0012\u0004\b\t\u0010\u0003\"\u0016\u0010\n\u001a\u00020\u00018\u0002X\u0083\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u000b\u0010\u0003\"\u0018\u0010\f\u001a\u00020\r*\u00020\u000e8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010\"\u001a\u0010\u0011\u001a\u0004\u0018\u00010\u0001*\u00020\u000e8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0012\u0010\u0013¨\u00066"}, d2 = {"ANY_SLASH", "Lokio/ByteString;", "getANY_SLASH$annotations", "()V", "BACKSLASH", "getBACKSLASH$annotations", "DOT", "getDOT$annotations", "DOT_DOT", "getDOT_DOT$annotations", "SLASH", "getSLASH$annotations", "indexOfLastSlash", "", "Lokio/Path;", "getIndexOfLastSlash", "(Lokio/Path;)I", "slash", "getSlash", "(Lokio/Path;)Lokio/ByteString;", "commonCompareTo", "other", "commonEquals", "", "", "commonHashCode", "commonIsAbsolute", "commonIsRelative", "commonIsRoot", "commonName", "", "commonNameBytes", "commonNormalized", "commonParent", "commonRelativeTo", "commonResolve", "child", "normalize", "Lokio/Buffer;", "commonRoot", "commonSegments", "", "commonSegmentsBytes", "commonToPath", "commonToString", "commonVolumeLetter", "", "(Lokio/Path;)Ljava/lang/Character;", "lastSegmentIsDotDot", "rootLength", "startsWithVolumeLetterAndColon", "toPath", "toSlash", "", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _PathKt {
    private static final okio.ByteString ANY_SLASH = null;
    private static final okio.ByteString BACKSLASH = null;
    private static final okio.ByteString DOT = null;
    private static final okio.ByteString DOT_DOT = null;
    private static final okio.ByteString SLASH = null;

    static {
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "/"
            okio.ByteString r0 = r0.encodeUtf8(r1)
            okio.internal._PathKt.SLASH = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "\\"
            okio.ByteString r0 = r0.encodeUtf8(r1)
            okio.internal._PathKt.BACKSLASH = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "/\\"
            okio.ByteString r0 = r0.encodeUtf8(r1)
            okio.internal._PathKt.ANY_SLASH = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "."
            okio.ByteString r0 = r0.encodeUtf8(r1)
            okio.internal._PathKt.DOT = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = ".."
            okio.ByteString r0 = r0.encodeUtf8(r1)
            okio.internal._PathKt.DOT_DOT = r0
            return
    }

    public static final okio.ByteString access$getBACKSLASH$p() {
            okio.ByteString r0 = okio.internal._PathKt.BACKSLASH
            return r0
    }

    public static final okio.ByteString access$getDOT$p() {
            okio.ByteString r0 = okio.internal._PathKt.DOT
            return r0
    }

    public static final okio.ByteString access$getDOT_DOT$p() {
            okio.ByteString r0 = okio.internal._PathKt.DOT_DOT
            return r0
    }

    public static final int access$getIndexOfLastSlash(okio.Path r0) {
            int r0 = getIndexOfLastSlash(r0)
            return r0
    }

    public static final okio.ByteString access$getSLASH$p() {
            okio.ByteString r0 = okio.internal._PathKt.SLASH
            return r0
    }

    public static final okio.ByteString access$getSlash(okio.Path r0) {
            okio.ByteString r0 = getSlash(r0)
            return r0
    }

    public static final boolean access$lastSegmentIsDotDot(okio.Path r0) {
            boolean r0 = lastSegmentIsDotDot(r0)
            return r0
    }

    public static final int access$rootLength(okio.Path r0) {
            int r0 = rootLength(r0)
            return r0
    }

    public static final okio.ByteString access$toSlash(java.lang.String r0) {
            okio.ByteString r0 = toSlash(r0)
            return r0
    }

    public static final int commonCompareTo(okio.Path r1, okio.Path r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.ByteString r1 = r1.getBytes$okio()
            okio.ByteString r2 = r2.getBytes$okio()
            int r1 = r1.compareTo(r2)
            return r1
    }

    public static final boolean commonEquals(okio.Path r1, java.lang.Object r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r2 instanceof okio.Path
            if (r0 == 0) goto L1b
            okio.Path r2 = (okio.Path) r2
            okio.ByteString r2 = r2.getBytes$okio()
            okio.ByteString r1 = r1.getBytes$okio()
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r1)
            if (r1 == 0) goto L1b
            r1 = 1
            goto L1c
        L1b:
            r1 = 0
        L1c:
            return r1
    }

    public static final int commonHashCode(okio.Path r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okio.ByteString r1 = r1.getBytes$okio()
            int r1 = r1.hashCode()
            return r1
    }

    public static final boolean commonIsAbsolute(okio.Path r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = access$rootLength(r1)
            r0 = -1
            if (r1 == r0) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public static final boolean commonIsRelative(okio.Path r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = access$rootLength(r1)
            r0 = -1
            if (r1 != r0) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public static final boolean commonIsRoot(okio.Path r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r0 = access$rootLength(r1)
            okio.ByteString r1 = r1.getBytes$okio()
            int r1 = r1.size()
            if (r0 != r1) goto L15
            r1 = 1
            goto L16
        L15:
            r1 = 0
        L16:
            return r1
    }

    public static final java.lang.String commonName(okio.Path r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okio.ByteString r1 = r1.nameBytes()
            java.lang.String r1 = r1.utf8()
            return r1
    }

    public static final okio.ByteString commonNameBytes(okio.Path r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = access$getIndexOfLastSlash(r4)
            r1 = 2
            r2 = -1
            if (r0 == r2) goto L1a
            okio.ByteString r4 = r4.getBytes$okio()
            int r0 = r0 + 1
            r2 = 0
            r3 = 0
            okio.ByteString r4 = okio.ByteString.substring$default(r4, r0, r2, r1, r3)
            goto L31
        L1a:
            java.lang.Character r0 = r4.volumeLetter()
            if (r0 == 0) goto L2d
            okio.ByteString r0 = r4.getBytes$okio()
            int r0 = r0.size()
            if (r0 != r1) goto L2d
            okio.ByteString r4 = okio.ByteString.EMPTY
            goto L31
        L2d:
            okio.ByteString r4 = r4.getBytes$okio()
        L31:
            return r4
    }

    public static final okio.Path commonNormalized(okio.Path r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.Path$Companion r0 = okio.Path.Companion
            java.lang.String r2 = r2.toString()
            r1 = 1
            okio.Path r2 = r0.get(r2, r1)
            return r2
    }

    public static final okio.Path commonParent(okio.Path r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            okio.ByteString r0 = r7.getBytes$okio()
            okio.ByteString r1 = access$getDOT$p()
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            r1 = 0
            if (r0 != 0) goto Lbe
            okio.ByteString r0 = r7.getBytes$okio()
            okio.ByteString r2 = access$getSLASH$p()
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
            if (r0 != 0) goto Lbe
            okio.ByteString r0 = r7.getBytes$okio()
            okio.ByteString r2 = access$getBACKSLASH$p()
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
            if (r0 != 0) goto Lbe
            boolean r0 = access$lastSegmentIsDotDot(r7)
            if (r0 == 0) goto L38
            goto Lbe
        L38:
            int r0 = access$getIndexOfLastSlash(r7)
            r2 = 2
            r3 = 0
            r4 = 1
            if (r0 != r2) goto L61
            java.lang.Character r5 = r7.volumeLetter()
            if (r5 == 0) goto L61
            okio.ByteString r0 = r7.getBytes$okio()
            int r0 = r0.size()
            r2 = 3
            if (r0 != r2) goto L53
            return r1
        L53:
            okio.Path r0 = new okio.Path
            okio.ByteString r7 = r7.getBytes$okio()
            okio.ByteString r7 = okio.ByteString.substring$default(r7, r3, r2, r4, r1)
            r0.<init>(r7)
            return r0
        L61:
            if (r0 != r4) goto L72
            okio.ByteString r5 = r7.getBytes$okio()
            okio.ByteString r6 = access$getBACKSLASH$p()
            boolean r5 = r5.startsWith(r6)
            if (r5 == 0) goto L72
            return r1
        L72:
            r5 = -1
            if (r0 != r5) goto L94
            java.lang.Character r6 = r7.volumeLetter()
            if (r6 == 0) goto L94
            okio.ByteString r0 = r7.getBytes$okio()
            int r0 = r0.size()
            if (r0 != r2) goto L86
            return r1
        L86:
            okio.Path r0 = new okio.Path
            okio.ByteString r7 = r7.getBytes$okio()
            okio.ByteString r7 = okio.ByteString.substring$default(r7, r3, r2, r4, r1)
            r0.<init>(r7)
            return r0
        L94:
            if (r0 != r5) goto La0
            okio.Path r7 = new okio.Path
            okio.ByteString r0 = access$getDOT$p()
            r7.<init>(r0)
            return r7
        La0:
            if (r0 != 0) goto Lb0
            okio.Path r0 = new okio.Path
            okio.ByteString r7 = r7.getBytes$okio()
            okio.ByteString r7 = okio.ByteString.substring$default(r7, r3, r4, r4, r1)
            r0.<init>(r7)
            return r0
        Lb0:
            okio.Path r2 = new okio.Path
            okio.ByteString r7 = r7.getBytes$okio()
            okio.ByteString r7 = okio.ByteString.substring$default(r7, r3, r0, r4, r1)
            r2.<init>(r7)
            return r2
        Lbe:
            return r1
    }

    public static final okio.Path commonRelativeTo(okio.Path r8, okio.Path r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            okio.Path r0 = r8.getRoot()
            okio.Path r1 = r9.getRoot()
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            java.lang.String r1 = " and "
            if (r0 == 0) goto Le6
            java.util.List r0 = r8.getSegmentsBytes()
            java.util.List r2 = r9.getSegmentsBytes()
            int r3 = r0.size()
            int r4 = r2.size()
            int r3 = java.lang.Math.min(r3, r4)
            r4 = 0
            r5 = r4
        L30:
            if (r5 >= r3) goto L43
            java.lang.Object r6 = r0.get(r5)
            java.lang.Object r7 = r2.get(r5)
            boolean r6 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r7)
            if (r6 == 0) goto L43
            int r5 = r5 + 1
            goto L30
        L43:
            r6 = 1
            if (r5 != r3) goto L62
            okio.ByteString r3 = r8.getBytes$okio()
            int r3 = r3.size()
            okio.ByteString r7 = r9.getBytes$okio()
            int r7 = r7.size()
            if (r3 != r7) goto L62
            okio.Path$Companion r8 = okio.Path.Companion
            r9 = 0
            java.lang.String r0 = "."
            okio.Path r8 = okio.Path.Companion.get$default(r8, r0, r4, r6, r9)
            return r8
        L62:
            int r3 = r2.size()
            java.util.List r3 = r2.subList(r5, r3)
            okio.ByteString r7 = access$getDOT_DOT$p()
            int r3 = r3.indexOf(r7)
            r7 = -1
            if (r3 != r7) goto L77
            r3 = r6
            goto L78
        L77:
            r3 = r4
        L78:
            if (r3 == 0) goto Lc3
            okio.Buffer r1 = new okio.Buffer
            r1.<init>()
            okio.ByteString r9 = access$getSlash(r9)
            if (r9 != 0) goto L91
            okio.ByteString r9 = access$getSlash(r8)
            if (r9 != 0) goto L91
            java.lang.String r8 = okio.Path.DIRECTORY_SEPARATOR
            okio.ByteString r9 = access$toSlash(r8)
        L91:
            int r8 = r2.size()
            if (r5 >= r8) goto La5
            r2 = r5
        L98:
            int r2 = r2 + r6
            okio.ByteString r3 = access$getDOT_DOT$p()
            r1.write(r3)
            r1.write(r9)
            if (r2 < r8) goto L98
        La5:
            int r8 = r0.size()
            if (r5 >= r8) goto Lbe
        Lab:
            int r2 = r5 + 1
            java.lang.Object r3 = r0.get(r5)
            okio.ByteString r3 = (okio.ByteString) r3
            r1.write(r3)
            r1.write(r9)
            if (r2 < r8) goto Lbc
            goto Lbe
        Lbc:
            r5 = r2
            goto Lab
        Lbe:
            okio.Path r8 = toPath(r1, r4)
            return r8
        Lc3:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Impossible relative path to resolve: "
            r0.append(r2)
            r0.append(r8)
            r0.append(r1)
            r0.append(r9)
            java.lang.String r8 = r0.toString()
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r8 = r8.toString()
            r9.<init>(r8)
            java.lang.Throwable r9 = (java.lang.Throwable) r9
            throw r9
        Le6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Paths of different roots cannot be relative to each other: "
            r0.append(r2)
            r0.append(r8)
            r0.append(r1)
            r0.append(r9)
            java.lang.String r8 = r0.toString()
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r8 = r8.toString()
            r9.<init>(r8)
            java.lang.Throwable r9 = (java.lang.Throwable) r9
            throw r9
    }

    public static final okio.Path commonResolve(okio.Path r1, java.lang.String r2, boolean r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "child"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.Buffer r0 = new okio.Buffer
            r0.<init>()
            okio.Buffer r2 = r0.writeUtf8(r2)
            r0 = 0
            okio.Path r2 = toPath(r2, r0)
            okio.Path r1 = commonResolve(r1, r2, r3)
            return r1
    }

    public static final okio.Path commonResolve(okio.Path r1, okio.Buffer r2, boolean r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "child"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 0
            okio.Path r2 = toPath(r2, r0)
            okio.Path r1 = commonResolve(r1, r2, r3)
            return r1
    }

    public static final okio.Path commonResolve(okio.Path r1, okio.ByteString r2, boolean r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "child"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.Buffer r0 = new okio.Buffer
            r0.<init>()
            okio.Buffer r2 = r0.write(r2)
            r0 = 0
            okio.Path r2 = toPath(r2, r0)
            okio.Path r1 = commonResolve(r1, r2, r3)
            return r1
    }

    public static final okio.Path commonResolve(okio.Path r6, okio.Path r7, boolean r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "child"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            boolean r0 = r7.isAbsolute()
            if (r0 != 0) goto L4e
            java.lang.Character r0 = r7.volumeLetter()
            if (r0 == 0) goto L17
            goto L4e
        L17:
            okio.ByteString r0 = getSlash(r6)
            if (r0 != 0) goto L29
            okio.ByteString r0 = getSlash(r7)
            if (r0 != 0) goto L29
            java.lang.String r0 = okio.Path.DIRECTORY_SEPARATOR
            okio.ByteString r0 = toSlash(r0)
        L29:
            okio.Buffer r1 = new okio.Buffer
            r1.<init>()
            okio.ByteString r6 = r6.getBytes$okio()
            r1.write(r6)
            long r2 = r1.size()
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L42
            r1.write(r0)
        L42:
            okio.ByteString r6 = r7.getBytes$okio()
            r1.write(r6)
            okio.Path r6 = toPath(r1, r8)
            return r6
        L4e:
            return r7
    }

    public static final okio.Path commonRoot(okio.Path r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r0 = access$rootLength(r3)
            r1 = -1
            if (r0 != r1) goto Le
            r3 = 0
            goto L1d
        Le:
            okio.Path r1 = new okio.Path
            okio.ByteString r3 = r3.getBytes$okio()
            r2 = 0
            okio.ByteString r3 = r3.substring(r2, r0)
            r1.<init>(r3)
            r3 = r1
        L1d:
            return r3
    }

    public static final java.util.List<java.lang.String> commonSegments(okio.Path r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = (java.util.List) r0
            int r1 = access$rootLength(r8)
            r2 = 92
            r3 = -1
            if (r1 != r3) goto L17
            r1 = 0
            goto L2e
        L17:
            okio.ByteString r3 = r8.getBytes$okio()
            int r3 = r3.size()
            if (r1 >= r3) goto L2e
            okio.ByteString r3 = r8.getBytes$okio()
            byte r3 = r3.getByte(r1)
            byte r4 = (byte) r2
            if (r3 != r4) goto L2e
            int r1 = r1 + 1
        L2e:
            okio.ByteString r3 = r8.getBytes$okio()
            int r3 = r3.size()
            if (r1 >= r3) goto L68
            r4 = r1
        L39:
            int r5 = r1 + 1
            okio.ByteString r6 = r8.getBytes$okio()
            byte r6 = r6.getByte(r1)
            r7 = 47
            byte r7 = (byte) r7
            if (r6 == r7) goto L53
            okio.ByteString r6 = r8.getBytes$okio()
            byte r6 = r6.getByte(r1)
            byte r7 = (byte) r2
            if (r6 != r7) goto L62
        L53:
            r6 = r0
            java.util.Collection r6 = (java.util.Collection) r6
            okio.ByteString r7 = r8.getBytes$okio()
            okio.ByteString r1 = r7.substring(r4, r1)
            r6.add(r1)
            r4 = r5
        L62:
            if (r5 < r3) goto L66
            r1 = r4
            goto L68
        L66:
            r1 = r5
            goto L39
        L68:
            okio.ByteString r2 = r8.getBytes$okio()
            int r2 = r2.size()
            if (r1 >= r2) goto L88
            r2 = r0
            java.util.Collection r2 = (java.util.Collection) r2
            okio.ByteString r3 = r8.getBytes$okio()
            okio.ByteString r8 = r8.getBytes$okio()
            int r8 = r8.size()
            okio.ByteString r8 = r3.substring(r1, r8)
            r2.add(r8)
        L88:
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            java.util.ArrayList r8 = new java.util.ArrayList
            r1 = 10
            int r1 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r0, r1)
            r8.<init>(r1)
            java.util.Collection r8 = (java.util.Collection) r8
            java.util.Iterator r0 = r0.iterator()
        L9b:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Laf
            java.lang.Object r1 = r0.next()
            okio.ByteString r1 = (okio.ByteString) r1
            java.lang.String r1 = r1.utf8()
            r8.add(r1)
            goto L9b
        Laf:
            java.util.List r8 = (java.util.List) r8
            return r8
    }

    public static final java.util.List<okio.ByteString> commonSegmentsBytes(okio.Path r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = (java.util.List) r0
            int r1 = access$rootLength(r8)
            r2 = 92
            r3 = -1
            if (r1 != r3) goto L17
            r1 = 0
            goto L2e
        L17:
            okio.ByteString r3 = r8.getBytes$okio()
            int r3 = r3.size()
            if (r1 >= r3) goto L2e
            okio.ByteString r3 = r8.getBytes$okio()
            byte r3 = r3.getByte(r1)
            byte r4 = (byte) r2
            if (r3 != r4) goto L2e
            int r1 = r1 + 1
        L2e:
            okio.ByteString r3 = r8.getBytes$okio()
            int r3 = r3.size()
            if (r1 >= r3) goto L68
            r4 = r1
        L39:
            int r5 = r1 + 1
            okio.ByteString r6 = r8.getBytes$okio()
            byte r6 = r6.getByte(r1)
            r7 = 47
            byte r7 = (byte) r7
            if (r6 == r7) goto L53
            okio.ByteString r6 = r8.getBytes$okio()
            byte r6 = r6.getByte(r1)
            byte r7 = (byte) r2
            if (r6 != r7) goto L62
        L53:
            r6 = r0
            java.util.Collection r6 = (java.util.Collection) r6
            okio.ByteString r7 = r8.getBytes$okio()
            okio.ByteString r1 = r7.substring(r4, r1)
            r6.add(r1)
            r4 = r5
        L62:
            if (r5 < r3) goto L66
            r1 = r4
            goto L68
        L66:
            r1 = r5
            goto L39
        L68:
            okio.ByteString r2 = r8.getBytes$okio()
            int r2 = r2.size()
            if (r1 >= r2) goto L88
            r2 = r0
            java.util.Collection r2 = (java.util.Collection) r2
            okio.ByteString r3 = r8.getBytes$okio()
            okio.ByteString r8 = r8.getBytes$okio()
            int r8 = r8.size()
            okio.ByteString r8 = r3.substring(r1, r8)
            r2.add(r8)
        L88:
            return r0
    }

    public static final okio.Path commonToPath(java.lang.String r1, boolean r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okio.Buffer r0 = new okio.Buffer
            r0.<init>()
            okio.Buffer r1 = r0.writeUtf8(r1)
            okio.Path r1 = toPath(r1, r2)
            return r1
    }

    public static final java.lang.String commonToString(okio.Path r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okio.ByteString r1 = r1.getBytes$okio()
            java.lang.String r1 = r1.utf8()
            return r1
    }

    public static final java.lang.Character commonVolumeLetter(okio.Path r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            okio.ByteString r0 = r5.getBytes$okio()
            okio.ByteString r1 = access$getSLASH$p()
            r2 = 2
            r3 = 0
            r4 = 0
            int r0 = okio.ByteString.indexOf$default(r0, r1, r4, r2, r3)
            r1 = -1
            if (r0 == r1) goto L18
            return r3
        L18:
            okio.ByteString r0 = r5.getBytes$okio()
            int r0 = r0.size()
            if (r0 >= r2) goto L23
            return r3
        L23:
            okio.ByteString r0 = r5.getBytes$okio()
            r1 = 1
            byte r0 = r0.getByte(r1)
            r2 = 58
            byte r2 = (byte) r2
            if (r0 == r2) goto L32
            return r3
        L32:
            okio.ByteString r5 = r5.getBytes$okio()
            byte r5 = r5.getByte(r4)
            char r5 = (char) r5
            r0 = 97
            if (r0 > r5) goto L45
            r0 = 122(0x7a, float:1.71E-43)
            if (r5 > r0) goto L45
            r0 = r1
            goto L46
        L45:
            r0 = r4
        L46:
            if (r0 != 0) goto L54
            r0 = 65
            if (r0 > r5) goto L51
            r0 = 90
            if (r5 > r0) goto L51
            r4 = r1
        L51:
            if (r4 != 0) goto L54
            return r3
        L54:
            java.lang.Character r5 = java.lang.Character.valueOf(r5)
            return r5
    }

    private static void getANY_SLASH$annotations() {
            return
    }

    private static void getBACKSLASH$annotations() {
            return
    }

    private static void getDOT$annotations() {
            return
    }

    private static void getDOT_DOT$annotations() {
            return
    }

    private static final int getIndexOfLastSlash(okio.Path r5) {
            okio.ByteString r0 = r5.getBytes$okio()
            okio.ByteString r1 = okio.internal._PathKt.SLASH
            r2 = 0
            r3 = 2
            r4 = 0
            int r0 = okio.ByteString.lastIndexOf$default(r0, r1, r4, r3, r2)
            r1 = -1
            if (r0 == r1) goto L11
            return r0
        L11:
            okio.ByteString r5 = r5.getBytes$okio()
            okio.ByteString r0 = okio.internal._PathKt.BACKSLASH
            int r5 = okio.ByteString.lastIndexOf$default(r5, r0, r4, r3, r2)
            return r5
    }

    private static void getSLASH$annotations() {
            return
    }

    private static final okio.ByteString getSlash(okio.Path r5) {
            okio.ByteString r0 = r5.getBytes$okio()
            okio.ByteString r1 = okio.internal._PathKt.SLASH
            r2 = 2
            r3 = 0
            r4 = 0
            int r0 = okio.ByteString.indexOf$default(r0, r1, r3, r2, r4)
            r1 = -1
            if (r0 == r1) goto L13
            okio.ByteString r4 = okio.internal._PathKt.SLASH
            goto L21
        L13:
            okio.ByteString r5 = r5.getBytes$okio()
            okio.ByteString r0 = okio.internal._PathKt.BACKSLASH
            int r5 = okio.ByteString.indexOf$default(r5, r0, r3, r2, r4)
            if (r5 == r1) goto L21
            okio.ByteString r4 = okio.internal._PathKt.BACKSLASH
        L21:
            return r4
    }

    private static final boolean lastSegmentIsDotDot(okio.Path r5) {
            okio.ByteString r0 = r5.getBytes$okio()
            okio.ByteString r1 = okio.internal._PathKt.DOT_DOT
            boolean r0 = r0.endsWith(r1)
            r1 = 0
            if (r0 == 0) goto L48
            okio.ByteString r0 = r5.getBytes$okio()
            int r0 = r0.size()
            r2 = 2
            r3 = 1
            if (r0 != r2) goto L1a
            return r3
        L1a:
            okio.ByteString r0 = r5.getBytes$okio()
            okio.ByteString r2 = r5.getBytes$okio()
            int r2 = r2.size()
            int r2 = r2 + (-3)
            okio.ByteString r4 = okio.internal._PathKt.SLASH
            boolean r0 = r0.rangeEquals(r2, r4, r1, r3)
            if (r0 == 0) goto L31
            return r3
        L31:
            okio.ByteString r0 = r5.getBytes$okio()
            okio.ByteString r5 = r5.getBytes$okio()
            int r5 = r5.size()
            int r5 = r5 + (-3)
            okio.ByteString r2 = okio.internal._PathKt.BACKSLASH
            boolean r5 = r0.rangeEquals(r5, r2, r1, r3)
            if (r5 == 0) goto L48
            return r3
        L48:
            return r1
    }

    private static final int rootLength(okio.Path r7) {
            okio.ByteString r0 = r7.getBytes$okio()
            int r0 = r0.size()
            r1 = -1
            if (r0 != 0) goto Lc
            return r1
        Lc:
            okio.ByteString r0 = r7.getBytes$okio()
            r2 = 0
            byte r0 = r0.getByte(r2)
            r3 = 47
            byte r3 = (byte) r3
            r4 = 1
            if (r0 != r3) goto L1c
            return r4
        L1c:
            okio.ByteString r0 = r7.getBytes$okio()
            byte r0 = r0.getByte(r2)
            r3 = 92
            byte r3 = (byte) r3
            r5 = 2
            if (r0 != r3) goto L54
            okio.ByteString r0 = r7.getBytes$okio()
            int r0 = r0.size()
            if (r0 <= r5) goto L53
            okio.ByteString r0 = r7.getBytes$okio()
            byte r0 = r0.getByte(r4)
            if (r0 != r3) goto L53
            okio.ByteString r0 = r7.getBytes$okio()
            okio.ByteString r2 = okio.internal._PathKt.BACKSLASH
            int r0 = r0.indexOf(r2, r5)
            if (r0 != r1) goto L52
            okio.ByteString r7 = r7.getBytes$okio()
            int r0 = r7.size()
        L52:
            return r0
        L53:
            return r4
        L54:
            okio.ByteString r0 = r7.getBytes$okio()
            int r0 = r0.size()
            if (r0 <= r5) goto L99
            okio.ByteString r0 = r7.getBytes$okio()
            byte r0 = r0.getByte(r4)
            r6 = 58
            byte r6 = (byte) r6
            if (r0 != r6) goto L99
            okio.ByteString r0 = r7.getBytes$okio()
            byte r0 = r0.getByte(r5)
            if (r0 != r3) goto L99
            okio.ByteString r7 = r7.getBytes$okio()
            byte r7 = r7.getByte(r2)
            char r7 = (char) r7
            r0 = 97
            if (r0 > r7) goto L88
            r0 = 122(0x7a, float:1.71E-43)
            if (r7 > r0) goto L88
            r0 = r4
            goto L89
        L88:
            r0 = r2
        L89:
            if (r0 != 0) goto L97
            r0 = 65
            if (r0 > r7) goto L94
            r0 = 90
            if (r7 > r0) goto L94
            r2 = r4
        L94:
            if (r2 != 0) goto L97
            return r1
        L97:
            r7 = 3
            return r7
        L99:
            return r1
    }

    private static final boolean startsWithVolumeLetterAndColon(okio.Buffer r5, okio.ByteString r6) {
            okio.ByteString r0 = okio.internal._PathKt.BACKSLASH
            boolean r6 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r0)
            r0 = 0
            if (r6 != 0) goto La
            return r0
        La:
            long r1 = r5.size()
            r3 = 2
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 >= 0) goto L15
            return r0
        L15:
            r1 = 1
            byte r6 = r5.getByte(r1)
            r1 = 58
            byte r1 = (byte) r1
            if (r6 == r1) goto L21
            return r0
        L21:
            r1 = 0
            byte r5 = r5.getByte(r1)
            char r5 = (char) r5
            r6 = 97
            r1 = 1
            if (r6 > r5) goto L33
            r6 = 122(0x7a, float:1.71E-43)
            if (r5 > r6) goto L33
            r6 = r1
            goto L34
        L33:
            r6 = r0
        L34:
            if (r6 != 0) goto L43
            r6 = 65
            if (r6 > r5) goto L40
            r6 = 90
            if (r5 > r6) goto L40
            r5 = r1
            goto L41
        L40:
            r5 = r0
        L41:
            if (r5 == 0) goto L44
        L43:
            r0 = r1
        L44:
            return r0
    }

    public static final okio.Path toPath(okio.Buffer r14, boolean r15) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
            okio.Buffer r0 = new okio.Buffer
            r0.<init>()
            r1 = 0
            r2 = 0
            r3 = r1
        Ld:
            okio.ByteString r4 = okio.internal._PathKt.SLASH
            r5 = 0
            boolean r4 = r14.rangeEquals(r5, r4)
            if (r4 != 0) goto L124
            okio.ByteString r4 = okio.internal._PathKt.BACKSLASH
            boolean r4 = r14.rangeEquals(r5, r4)
            if (r4 == 0) goto L21
            goto L124
        L21:
            r4 = 2
            r7 = 1
            if (r3 < r4) goto L2f
            okio.ByteString r4 = okio.internal._PathKt.BACKSLASH
            boolean r4 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r4)
            if (r4 == 0) goto L2f
            r4 = r7
            goto L30
        L2f:
            r4 = r1
        L30:
            r8 = -1
            if (r4 == 0) goto L3e
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r0.write(r2)
            r0.write(r2)
            goto L77
        L3e:
            if (r3 <= 0) goto L47
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r0.write(r2)
            goto L77
        L47:
            okio.ByteString r3 = okio.internal._PathKt.ANY_SLASH
            long r10 = r14.indexOfElement(r3)
            if (r2 != 0) goto L62
            int r2 = (r10 > r8 ? 1 : (r10 == r8 ? 0 : -1))
            if (r2 != 0) goto L5a
            java.lang.String r2 = okio.Path.DIRECTORY_SEPARATOR
            okio.ByteString r2 = toSlash(r2)
            goto L62
        L5a:
            byte r2 = r14.getByte(r10)
            okio.ByteString r2 = toSlash(r2)
        L62:
            boolean r3 = startsWithVolumeLetterAndColon(r14, r2)
            if (r3 == 0) goto L77
            r12 = 2
            int r3 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r3 != 0) goto L74
            r10 = 3
            r0.write(r14, r10)
            goto L77
        L74:
            r0.write(r14, r12)
        L77:
            long r10 = r0.size()
            int r3 = (r10 > r5 ? 1 : (r10 == r5 ? 0 : -1))
            if (r3 <= 0) goto L81
            r3 = r7
            goto L82
        L81:
            r3 = r1
        L82:
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            java.util.List r10 = (java.util.List) r10
        L89:
            boolean r11 = r14.exhausted()
            if (r11 != 0) goto Lf2
            okio.ByteString r11 = okio.internal._PathKt.ANY_SLASH
            long r11 = r14.indexOfElement(r11)
            int r13 = (r11 > r8 ? 1 : (r11 == r8 ? 0 : -1))
            if (r13 != 0) goto L9e
            okio.ByteString r11 = r14.readByteString()
            goto La5
        L9e:
            okio.ByteString r11 = r14.readByteString(r11)
            r14.readByte()
        La5:
            okio.ByteString r12 = okio.internal._PathKt.DOT_DOT
            boolean r12 = kotlin.jvm.internal.Intrinsics.areEqual(r11, r12)
            if (r12 == 0) goto Lde
            if (r3 == 0) goto Lb6
            boolean r12 = r10.isEmpty()
            if (r12 == 0) goto Lb6
            goto L89
        Lb6:
            if (r15 == 0) goto Lda
            if (r3 != 0) goto Lcd
            boolean r12 = r10.isEmpty()
            if (r12 != 0) goto Lda
            java.lang.Object r12 = kotlin.collections.CollectionsKt.last(r10)
            okio.ByteString r13 = okio.internal._PathKt.DOT_DOT
            boolean r12 = kotlin.jvm.internal.Intrinsics.areEqual(r12, r13)
            if (r12 == 0) goto Lcd
            goto Lda
        Lcd:
            if (r4 == 0) goto Ld6
            int r11 = r10.size()
            if (r11 != r7) goto Ld6
            goto L89
        Ld6:
            kotlin.collections.CollectionsKt.removeLastOrNull(r10)
            goto L89
        Lda:
            r10.add(r11)
            goto L89
        Lde:
            okio.ByteString r12 = okio.internal._PathKt.DOT
            boolean r12 = kotlin.jvm.internal.Intrinsics.areEqual(r11, r12)
            if (r12 != 0) goto L89
            okio.ByteString r12 = okio.ByteString.EMPTY
            boolean r12 = kotlin.jvm.internal.Intrinsics.areEqual(r11, r12)
            if (r12 != 0) goto L89
            r10.add(r11)
            goto L89
        Lf2:
            int r14 = r10.size()
            if (r14 <= 0) goto L10d
        Lf8:
            int r15 = r1 + 1
            if (r1 <= 0) goto Lff
            r0.write(r2)
        Lff:
            java.lang.Object r1 = r10.get(r1)
            okio.ByteString r1 = (okio.ByteString) r1
            r0.write(r1)
            if (r15 < r14) goto L10b
            goto L10d
        L10b:
            r1 = r15
            goto Lf8
        L10d:
            long r14 = r0.size()
            int r14 = (r14 > r5 ? 1 : (r14 == r5 ? 0 : -1))
            if (r14 != 0) goto L11a
            okio.ByteString r14 = okio.internal._PathKt.DOT
            r0.write(r14)
        L11a:
            okio.Path r14 = new okio.Path
            okio.ByteString r15 = r0.readByteString()
            r14.<init>(r15)
            return r14
        L124:
            byte r4 = r14.readByte()
            if (r2 != 0) goto L12e
            okio.ByteString r2 = toSlash(r4)
        L12e:
            int r3 = r3 + 1
            goto Ld
    }

    private static final okio.ByteString toSlash(byte r2) {
            r0 = 47
            if (r2 != r0) goto L7
            okio.ByteString r2 = okio.internal._PathKt.SLASH
            goto Ld
        L7:
            r0 = 92
            if (r2 != r0) goto Le
            okio.ByteString r2 = okio.internal._PathKt.BACKSLASH
        Ld:
            return r2
        Le:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            java.lang.String r1 = "not a directory separator: "
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r2)
            r0.<init>(r2)
            throw r0
    }

    private static final okio.ByteString toSlash(java.lang.String r2) {
            java.lang.String r0 = "/"
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r0)
            if (r0 == 0) goto Lb
            okio.ByteString r2 = okio.internal._PathKt.SLASH
            goto L15
        Lb:
            java.lang.String r0 = "\\"
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r0)
            if (r0 == 0) goto L16
            okio.ByteString r2 = okio.internal._PathKt.BACKSLASH
        L15:
            return r2
        L16:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "not a directory separator: "
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r2)
            r0.<init>(r2)
            throw r0
    }
}
