package kotlin;

@kotlin.Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u000f\n\u0000\n\u0002\u0010\b\n\u0002\b\f\n\u0002\u0010\u000b\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0007\u0018\u0000 \u00172\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0017B\u0017\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0002\u0010\u0005B\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003¢\u0006\u0002\u0010\u0007J\u0011\u0010\r\u001a\u00020\u00032\u0006\u0010\u000e\u001a\u00020\u0000H\u0096\u0002J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u000e\u001a\u0004\u0018\u00010\u0011H\u0096\u0002J\b\u0010\u0012\u001a\u00020\u0003H\u0016J\u0016\u0010\u0013\u001a\u00020\u00102\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0003J\u001e\u0010\u0013\u001a\u00020\u00102\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u0003J\b\u0010\u0014\u001a\u00020\u0015H\u0016J \u0010\u0016\u001a\u00020\u00032\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u0003H\u0002R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\tR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\tR\u000e\u0010\f\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lkotlin/KotlinVersion;", "", "major", "", "minor", "(II)V", "patch", "(III)V", "getMajor", "()I", "getMinor", "getPatch", "version", "compareTo", "other", "equals", "", "", "hashCode", "isAtLeast", "toString", "", "versionOf", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class KotlinVersion implements java.lang.Comparable<kotlin.KotlinVersion> {
    public static final kotlin.KotlinVersion CURRENT = null;
    public static final kotlin.KotlinVersion.Companion Companion = null;
    public static final int MAX_COMPONENT_VALUE = 255;
    private final int major;
    private final int minor;
    private final int patch;
    private final int version;

    @kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"Lkotlin/KotlinVersion$Companion;", "", "()V", "CURRENT", "Lkotlin/KotlinVersion;", "MAX_COMPONENT_VALUE", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
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
    }

    static {
            kotlin.KotlinVersion$Companion r0 = new kotlin.KotlinVersion$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.KotlinVersion.Companion = r0
            kotlin.KotlinVersion r0 = kotlin.KotlinVersionCurrentValue.get()
            kotlin.KotlinVersion.CURRENT = r0
            return
    }

    public KotlinVersion(int r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public KotlinVersion(int r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.major = r1
            r0.minor = r2
            r0.patch = r3
            int r1 = r0.versionOf(r1, r2, r3)
            r0.version = r1
            return
    }

    private final int versionOf(int r5, int r6, int r7) {
            r4 = this;
            r0 = 256(0x100, float:3.59E-43)
            r1 = 1
            r2 = 0
            if (r5 < 0) goto La
            if (r5 >= r0) goto La
            r3 = r1
            goto Lb
        La:
            r3 = r2
        Lb:
            if (r3 == 0) goto L20
            if (r6 < 0) goto L13
            if (r6 >= r0) goto L13
            r3 = r1
            goto L14
        L13:
            r3 = r2
        L14:
            if (r3 == 0) goto L20
            if (r7 < 0) goto L1c
            if (r7 >= r0) goto L1c
            r0 = r1
            goto L1d
        L1c:
            r0 = r2
        L1d:
            if (r0 == 0) goto L20
            goto L21
        L20:
            r1 = r2
        L21:
            if (r1 == 0) goto L2a
            int r5 = r5 << 16
            int r6 = r6 << 8
            int r5 = r5 + r6
            int r5 = r5 + r7
            return r5
        L2a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Version components are out of range: "
            r0.append(r1)
            r0.append(r5)
            r5 = 46
            r0.append(r5)
            r0.append(r6)
            r0.append(r5)
            r0.append(r7)
            java.lang.String r5 = r0.toString()
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r5 = r5.toString()
            r6.<init>(r5)
            throw r6
    }

    @Override
    public int compareTo(kotlin.KotlinVersion r1) {
            r0 = this;
            kotlin.KotlinVersion r1 = (kotlin.KotlinVersion) r1
            int r1 = r0.compareTo(r1)
            return r1
    }

    public int compareTo(kotlin.KotlinVersion r2) {
            r1 = this;
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r1.version
            int r2 = r2.version
            int r0 = r0 - r2
            return r0
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            r0 = 1
            if (r3 != r4) goto L4
            return r0
        L4:
            boolean r1 = r4 instanceof kotlin.KotlinVersion
            if (r1 == 0) goto Lb
            kotlin.KotlinVersion r4 = (kotlin.KotlinVersion) r4
            goto Lc
        Lb:
            r4 = 0
        Lc:
            r1 = 0
            if (r4 != 0) goto L10
            return r1
        L10:
            int r2 = r3.version
            int r4 = r4.version
            if (r2 != r4) goto L17
            goto L18
        L17:
            r0 = r1
        L18:
            return r0
    }

    public final int getMajor() {
            r1 = this;
            int r0 = r1.major
            return r0
    }

    public final int getMinor() {
            r1 = this;
            int r0 = r1.minor
            return r0
    }

    public final int getPatch() {
            r1 = this;
            int r0 = r1.patch
            return r0
    }

    public int hashCode() {
            r1 = this;
            int r0 = r1.version
            return r0
    }

    public final boolean isAtLeast(int r2, int r3) {
            r1 = this;
            int r0 = r1.major
            if (r0 > r2) goto Ld
            if (r0 != r2) goto Lb
            int r2 = r1.minor
            if (r2 < r3) goto Lb
            goto Ld
        Lb:
            r2 = 0
            goto Le
        Ld:
            r2 = 1
        Le:
            return r2
    }

    public final boolean isAtLeast(int r2, int r3, int r4) {
            r1 = this;
            int r0 = r1.major
            if (r0 > r2) goto L13
            if (r0 != r2) goto L11
            int r2 = r1.minor
            if (r2 > r3) goto L13
            if (r2 != r3) goto L11
            int r2 = r1.patch
            if (r2 < r4) goto L11
            goto L13
        L11:
            r2 = 0
            goto L14
        L13:
            r2 = 1
        L14:
            return r2
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r3.major
            r0.append(r1)
            r1 = 46
            r0.append(r1)
            int r2 = r3.minor
            r0.append(r2)
            r0.append(r1)
            int r1 = r3.patch
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
