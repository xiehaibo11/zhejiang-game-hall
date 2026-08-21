package okio;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0010$\n\u0002\u0018\u0002\n\u0002\b\u0013\n\u0002\u0010\u000e\n\u0000\u0018\u00002\u00020\u0001Bo\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\b\u0012\u0018\b\u0002\u0010\f\u001a\u0012\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u000e\u0012\u0004\u0012\u00020\u00010\r¢\u0006\u0002\u0010\u000fJu\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\b2\u0018\b\u0002\u0010\f\u001a\u0012\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u000e\u0012\u0004\u0012\u00020\u00010\r¢\u0006\u0002\u0010\u001cJ'\u0010\u001d\u001a\u0004\u0018\u0001H\u001e\"\b\b\u0000\u0010\u001e*\u00020\u00012\u000e\u0010\u001f\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u001e0\u000e¢\u0006\u0002\u0010 J\b\u0010!\u001a\u00020\"H\u0016R\u0015\u0010\t\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u0010\u0012\u001a\u0004\b\u0010\u0010\u0011R!\u0010\f\u001a\u0012\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u000e\u0012\u0004\u0012\u00020\u00010\r¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u0015R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0015R\u0015\u0010\u000b\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u0010\u0012\u001a\u0004\b\u0016\u0010\u0011R\u0015\u0010\n\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u0010\u0012\u001a\u0004\b\u0017\u0010\u0011R\u0015\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u0010\u0012\u001a\u0004\b\u0018\u0010\u0011R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001a¨\u0006#"}, d2 = {"Lokio/FileMetadata;", "", "isRegularFile", "", "isDirectory", "symlinkTarget", "Lokio/Path;", "size", "", "createdAtMillis", "lastModifiedAtMillis", "lastAccessedAtMillis", "extras", "", "Lkotlin/reflect/KClass;", "(ZZLokio/Path;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/util/Map;)V", "getCreatedAtMillis", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getExtras", "()Ljava/util/Map;", "()Z", "getLastAccessedAtMillis", "getLastModifiedAtMillis", "getSize", "getSymlinkTarget", "()Lokio/Path;", "copy", "(ZZLokio/Path;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/util/Map;)Lokio/FileMetadata;", "extra", "T", "type", "(Lkotlin/reflect/KClass;)Ljava/lang/Object;", "toString", "", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class FileMetadata {
    private final java.lang.Long createdAtMillis;
    private final java.util.Map<kotlin.reflect.KClass<?>, java.lang.Object> extras;
    private final boolean isDirectory;
    private final boolean isRegularFile;
    private final java.lang.Long lastAccessedAtMillis;
    private final java.lang.Long lastModifiedAtMillis;
    private final java.lang.Long size;
    private final okio.Path symlinkTarget;

    public FileMetadata() {
            r11 = this;
            r1 = 0
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 255(0xff, float:3.57E-43)
            r10 = 0
            r0 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public FileMetadata(boolean r2, boolean r3, okio.Path r4, java.lang.Long r5, java.lang.Long r6, java.lang.Long r7, java.lang.Long r8, java.util.Map<kotlin.reflect.KClass<?>, ? extends java.lang.Object> r9) {
            r1 = this;
            java.lang.String r0 = "extras"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r1.<init>()
            r1.isRegularFile = r2
            r1.isDirectory = r3
            r1.symlinkTarget = r4
            r1.size = r5
            r1.createdAtMillis = r6
            r1.lastModifiedAtMillis = r7
            r1.lastAccessedAtMillis = r8
            java.util.Map r2 = kotlin.collections.MapsKt.toMap(r9)
            r1.extras = r2
            return
    }

    public FileMetadata(boolean r10, boolean r11, okio.Path r12, java.lang.Long r13, java.lang.Long r14, java.lang.Long r15, java.lang.Long r16, java.util.Map r17, int r18, kotlin.jvm.internal.DefaultConstructorMarker r19) {
            r9 = this;
            r0 = r18
            r1 = r0 & 1
            r2 = 0
            if (r1 == 0) goto L9
            r1 = r2
            goto La
        L9:
            r1 = r10
        La:
            r3 = r0 & 2
            if (r3 == 0) goto Lf
            goto L10
        Lf:
            r2 = r11
        L10:
            r3 = r0 & 4
            r4 = 0
            if (r3 == 0) goto L17
            r3 = r4
            goto L18
        L17:
            r3 = r12
        L18:
            r5 = r0 & 8
            if (r5 == 0) goto L1e
            r5 = r4
            goto L1f
        L1e:
            r5 = r13
        L1f:
            r6 = r0 & 16
            if (r6 == 0) goto L25
            r6 = r4
            goto L26
        L25:
            r6 = r14
        L26:
            r7 = r0 & 32
            if (r7 == 0) goto L2c
            r7 = r4
            goto L2d
        L2c:
            r7 = r15
        L2d:
            r8 = r0 & 64
            if (r8 == 0) goto L32
            goto L34
        L32:
            r4 = r16
        L34:
            r0 = r0 & 128(0x80, float:1.8E-43)
            if (r0 == 0) goto L3d
            java.util.Map r0 = kotlin.collections.MapsKt.emptyMap()
            goto L3f
        L3d:
            r0 = r17
        L3f:
            r10 = r9
            r11 = r1
            r12 = r2
            r13 = r3
            r14 = r5
            r15 = r6
            r16 = r7
            r17 = r4
            r18 = r0
            r10.<init>(r11, r12, r13, r14, r15, r16, r17, r18)
            return
    }

    public static okio.FileMetadata copy$default(okio.FileMetadata r9, boolean r10, boolean r11, okio.Path r12, java.lang.Long r13, java.lang.Long r14, java.lang.Long r15, java.lang.Long r16, java.util.Map r17, int r18, java.lang.Object r19) {
            r0 = r9
            r1 = r18
            r2 = r1 & 1
            if (r2 == 0) goto La
            boolean r2 = r0.isRegularFile
            goto Lb
        La:
            r2 = r10
        Lb:
            r3 = r1 & 2
            if (r3 == 0) goto L12
            boolean r3 = r0.isDirectory
            goto L13
        L12:
            r3 = r11
        L13:
            r4 = r1 & 4
            if (r4 == 0) goto L1a
            okio.Path r4 = r0.symlinkTarget
            goto L1b
        L1a:
            r4 = r12
        L1b:
            r5 = r1 & 8
            if (r5 == 0) goto L22
            java.lang.Long r5 = r0.size
            goto L23
        L22:
            r5 = r13
        L23:
            r6 = r1 & 16
            if (r6 == 0) goto L2a
            java.lang.Long r6 = r0.createdAtMillis
            goto L2b
        L2a:
            r6 = r14
        L2b:
            r7 = r1 & 32
            if (r7 == 0) goto L32
            java.lang.Long r7 = r0.lastModifiedAtMillis
            goto L33
        L32:
            r7 = r15
        L33:
            r8 = r1 & 64
            if (r8 == 0) goto L3a
            java.lang.Long r8 = r0.lastAccessedAtMillis
            goto L3c
        L3a:
            r8 = r16
        L3c:
            r1 = r1 & 128(0x80, float:1.8E-43)
            if (r1 == 0) goto L43
            java.util.Map<kotlin.reflect.KClass<?>, java.lang.Object> r1 = r0.extras
            goto L45
        L43:
            r1 = r17
        L45:
            r10 = r2
            r11 = r3
            r12 = r4
            r13 = r5
            r14 = r6
            r15 = r7
            r16 = r8
            r17 = r1
            okio.FileMetadata r0 = r9.copy(r10, r11, r12, r13, r14, r15, r16, r17)
            return r0
    }

    public final okio.FileMetadata copy(boolean r11, boolean r12, okio.Path r13, java.lang.Long r14, java.lang.Long r15, java.lang.Long r16, java.lang.Long r17, java.util.Map<kotlin.reflect.KClass<?>, ? extends java.lang.Object> r18) {
            r10 = this;
            java.lang.String r0 = "extras"
            r9 = r18
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            okio.FileMetadata r0 = new okio.FileMetadata
            r1 = r0
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            return r0
    }

    public final <T> T extra(kotlin.reflect.KClass<? extends T> r2) {
            r1 = this;
            java.lang.String r0 = "type"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.Map<kotlin.reflect.KClass<?>, java.lang.Object> r0 = r1.extras
            java.lang.Object r0 = r0.get(r2)
            if (r0 != 0) goto Lf
            r2 = 0
            return r2
        Lf:
            java.lang.Object r2 = kotlin.reflect.KClasses.cast(r2, r0)
            return r2
    }

    public final java.lang.Long getCreatedAtMillis() {
            r1 = this;
            java.lang.Long r0 = r1.createdAtMillis
            return r0
    }

    public final java.util.Map<kotlin.reflect.KClass<?>, java.lang.Object> getExtras() {
            r1 = this;
            java.util.Map<kotlin.reflect.KClass<?>, java.lang.Object> r0 = r1.extras
            return r0
    }

    public final java.lang.Long getLastAccessedAtMillis() {
            r1 = this;
            java.lang.Long r0 = r1.lastAccessedAtMillis
            return r0
    }

    public final java.lang.Long getLastModifiedAtMillis() {
            r1 = this;
            java.lang.Long r0 = r1.lastModifiedAtMillis
            return r0
    }

    public final java.lang.Long getSize() {
            r1 = this;
            java.lang.Long r0 = r1.size
            return r0
    }

    public final okio.Path getSymlinkTarget() {
            r1 = this;
            okio.Path r0 = r1.symlinkTarget
            return r0
    }

    public final boolean isDirectory() {
            r1 = this;
            boolean r0 = r1.isDirectory
            return r0
    }

    public final boolean isRegularFile() {
            r1 = this;
            boolean r0 = r1.isRegularFile
            return r0
    }

    public java.lang.String toString() {
            r12 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = (java.util.List) r0
            boolean r1 = r12.isRegularFile
            if (r1 == 0) goto L13
            r1 = r0
            java.util.Collection r1 = (java.util.Collection) r1
            java.lang.String r2 = "isRegularFile"
            r1.add(r2)
        L13:
            boolean r1 = r12.isDirectory
            if (r1 == 0) goto L1f
            r1 = r0
            java.util.Collection r1 = (java.util.Collection) r1
            java.lang.String r2 = "isDirectory"
            r1.add(r2)
        L1f:
            java.lang.Long r1 = r12.size
            if (r1 == 0) goto L2f
            r2 = r0
            java.util.Collection r2 = (java.util.Collection) r2
            java.lang.String r3 = "byteCount="
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r1)
            r2.add(r1)
        L2f:
            java.lang.Long r1 = r12.createdAtMillis
            if (r1 == 0) goto L3f
            r2 = r0
            java.util.Collection r2 = (java.util.Collection) r2
            java.lang.String r3 = "createdAt="
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r1)
            r2.add(r1)
        L3f:
            java.lang.Long r1 = r12.lastModifiedAtMillis
            if (r1 == 0) goto L4f
            r2 = r0
            java.util.Collection r2 = (java.util.Collection) r2
            java.lang.String r3 = "lastModifiedAt="
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r1)
            r2.add(r1)
        L4f:
            java.lang.Long r1 = r12.lastAccessedAtMillis
            if (r1 == 0) goto L5f
            r2 = r0
            java.util.Collection r2 = (java.util.Collection) r2
            java.lang.String r3 = "lastAccessedAt="
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r1)
            r2.add(r1)
        L5f:
            java.util.Map<kotlin.reflect.KClass<?>, java.lang.Object> r1 = r12.extras
            boolean r1 = r1.isEmpty()
            r1 = r1 ^ 1
            if (r1 == 0) goto L77
            r1 = r0
            java.util.Collection r1 = (java.util.Collection) r1
            java.util.Map<kotlin.reflect.KClass<?>, java.lang.Object> r2 = r12.extras
            java.lang.String r3 = "extras="
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r2)
            r1.add(r2)
        L77:
            r3 = r0
            java.lang.Iterable r3 = (java.lang.Iterable) r3
            java.lang.String r0 = ", "
            r4 = r0
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            java.lang.String r0 = "FileMetadata("
            r5 = r0
            java.lang.CharSequence r5 = (java.lang.CharSequence) r5
            java.lang.String r0 = ")"
            r6 = r0
            java.lang.CharSequence r6 = (java.lang.CharSequence) r6
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 56
            r11 = 0
            java.lang.String r0 = kotlin.collections.CollectionsKt.joinToString$default(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            return r0
    }
}
