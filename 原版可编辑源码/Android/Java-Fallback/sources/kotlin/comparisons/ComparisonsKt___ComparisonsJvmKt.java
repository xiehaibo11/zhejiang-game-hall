package kotlin.comparisons;

@kotlin.Metadata(d1 = {"\u0000F\n\u0002\b\u0002\n\u0002\u0010\u000f\n\u0002\b\u0006\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\u0005\n\u0002\u0010\u0012\n\u0002\u0010\u0006\n\u0002\u0010\u0013\n\u0002\u0010\u0007\n\u0002\u0010\u0014\n\u0002\u0010\b\n\u0002\u0010\u0015\n\u0002\u0010\t\n\u0002\u0010\u0016\n\u0002\u0010\n\n\u0002\u0010\u0017\n\u0002\b\u0002\u001a-\u0010\u0000\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u00022\u0006\u0010\u0003\u001a\u0002H\u00012\u0006\u0010\u0004\u001a\u0002H\u0001H\u0007¢\u0006\u0002\u0010\u0005\u001a5\u0010\u0000\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u00022\u0006\u0010\u0003\u001a\u0002H\u00012\u0006\u0010\u0004\u001a\u0002H\u00012\u0006\u0010\u0006\u001a\u0002H\u0001H\u0007¢\u0006\u0002\u0010\u0007\u001a9\u0010\u0000\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u00022\u0006\u0010\u0003\u001a\u0002H\u00012\u0012\u0010\b\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u00010\t\"\u0002H\u0001H\u0007¢\u0006\u0002\u0010\n\u001a\u0019\u0010\u0000\u001a\u00020\u000b2\u0006\u0010\u0003\u001a\u00020\u000b2\u0006\u0010\u0004\u001a\u00020\u000bH\u0087\b\u001a!\u0010\u0000\u001a\u00020\u000b2\u0006\u0010\u0003\u001a\u00020\u000b2\u0006\u0010\u0004\u001a\u00020\u000b2\u0006\u0010\u0006\u001a\u00020\u000bH\u0087\b\u001a\u001c\u0010\u0000\u001a\u00020\u000b2\u0006\u0010\u0003\u001a\u00020\u000b2\n\u0010\b\u001a\u00020\f\"\u00020\u000bH\u0007\u001a\u0019\u0010\u0000\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\u0006\u0010\u0004\u001a\u00020\rH\u0087\b\u001a!\u0010\u0000\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\u0006\u0010\u0004\u001a\u00020\r2\u0006\u0010\u0006\u001a\u00020\rH\u0087\b\u001a\u001c\u0010\u0000\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\n\u0010\b\u001a\u00020\u000e\"\u00020\rH\u0007\u001a\u0019\u0010\u0000\u001a\u00020\u000f2\u0006\u0010\u0003\u001a\u00020\u000f2\u0006\u0010\u0004\u001a\u00020\u000fH\u0087\b\u001a!\u0010\u0000\u001a\u00020\u000f2\u0006\u0010\u0003\u001a\u00020\u000f2\u0006\u0010\u0004\u001a\u00020\u000f2\u0006\u0010\u0006\u001a\u00020\u000fH\u0087\b\u001a\u001c\u0010\u0000\u001a\u00020\u000f2\u0006\u0010\u0003\u001a\u00020\u000f2\n\u0010\b\u001a\u00020\u0010\"\u00020\u000fH\u0007\u001a\u0019\u0010\u0000\u001a\u00020\u00112\u0006\u0010\u0003\u001a\u00020\u00112\u0006\u0010\u0004\u001a\u00020\u0011H\u0087\b\u001a!\u0010\u0000\u001a\u00020\u00112\u0006\u0010\u0003\u001a\u00020\u00112\u0006\u0010\u0004\u001a\u00020\u00112\u0006\u0010\u0006\u001a\u00020\u0011H\u0087\b\u001a\u001c\u0010\u0000\u001a\u00020\u00112\u0006\u0010\u0003\u001a\u00020\u00112\n\u0010\b\u001a\u00020\u0012\"\u00020\u0011H\u0007\u001a\u0019\u0010\u0000\u001a\u00020\u00132\u0006\u0010\u0003\u001a\u00020\u00132\u0006\u0010\u0004\u001a\u00020\u0013H\u0087\b\u001a!\u0010\u0000\u001a\u00020\u00132\u0006\u0010\u0003\u001a\u00020\u00132\u0006\u0010\u0004\u001a\u00020\u00132\u0006\u0010\u0006\u001a\u00020\u0013H\u0087\b\u001a\u001c\u0010\u0000\u001a\u00020\u00132\u0006\u0010\u0003\u001a\u00020\u00132\n\u0010\b\u001a\u00020\u0014\"\u00020\u0013H\u0007\u001a\u0019\u0010\u0000\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\u0006\u0010\u0004\u001a\u00020\u0015H\u0087\b\u001a!\u0010\u0000\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\u0006\u0010\u0004\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u0015H\u0087\b\u001a\u001c\u0010\u0000\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\n\u0010\b\u001a\u00020\u0016\"\u00020\u0015H\u0007\u001a-\u0010\u0017\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u00022\u0006\u0010\u0003\u001a\u0002H\u00012\u0006\u0010\u0004\u001a\u0002H\u0001H\u0007¢\u0006\u0002\u0010\u0005\u001a5\u0010\u0017\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u00022\u0006\u0010\u0003\u001a\u0002H\u00012\u0006\u0010\u0004\u001a\u0002H\u00012\u0006\u0010\u0006\u001a\u0002H\u0001H\u0007¢\u0006\u0002\u0010\u0007\u001a9\u0010\u0017\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u00022\u0006\u0010\u0003\u001a\u0002H\u00012\u0012\u0010\b\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u00010\t\"\u0002H\u0001H\u0007¢\u0006\u0002\u0010\n\u001a\u0019\u0010\u0017\u001a\u00020\u000b2\u0006\u0010\u0003\u001a\u00020\u000b2\u0006\u0010\u0004\u001a\u00020\u000bH\u0087\b\u001a!\u0010\u0017\u001a\u00020\u000b2\u0006\u0010\u0003\u001a\u00020\u000b2\u0006\u0010\u0004\u001a\u00020\u000b2\u0006\u0010\u0006\u001a\u00020\u000bH\u0087\b\u001a\u001c\u0010\u0017\u001a\u00020\u000b2\u0006\u0010\u0003\u001a\u00020\u000b2\n\u0010\b\u001a\u00020\f\"\u00020\u000bH\u0007\u001a\u0019\u0010\u0017\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\u0006\u0010\u0004\u001a\u00020\rH\u0087\b\u001a!\u0010\u0017\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\u0006\u0010\u0004\u001a\u00020\r2\u0006\u0010\u0006\u001a\u00020\rH\u0087\b\u001a\u001c\u0010\u0017\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\n\u0010\b\u001a\u00020\u000e\"\u00020\rH\u0007\u001a\u0019\u0010\u0017\u001a\u00020\u000f2\u0006\u0010\u0003\u001a\u00020\u000f2\u0006\u0010\u0004\u001a\u00020\u000fH\u0087\b\u001a!\u0010\u0017\u001a\u00020\u000f2\u0006\u0010\u0003\u001a\u00020\u000f2\u0006\u0010\u0004\u001a\u00020\u000f2\u0006\u0010\u0006\u001a\u00020\u000fH\u0087\b\u001a\u001c\u0010\u0017\u001a\u00020\u000f2\u0006\u0010\u0003\u001a\u00020\u000f2\n\u0010\b\u001a\u00020\u0010\"\u00020\u000fH\u0007\u001a\u0019\u0010\u0017\u001a\u00020\u00112\u0006\u0010\u0003\u001a\u00020\u00112\u0006\u0010\u0004\u001a\u00020\u0011H\u0087\b\u001a!\u0010\u0017\u001a\u00020\u00112\u0006\u0010\u0003\u001a\u00020\u00112\u0006\u0010\u0004\u001a\u00020\u00112\u0006\u0010\u0006\u001a\u00020\u0011H\u0087\b\u001a\u001c\u0010\u0017\u001a\u00020\u00112\u0006\u0010\u0003\u001a\u00020\u00112\n\u0010\b\u001a\u00020\u0012\"\u00020\u0011H\u0007\u001a\u0019\u0010\u0017\u001a\u00020\u00132\u0006\u0010\u0003\u001a\u00020\u00132\u0006\u0010\u0004\u001a\u00020\u0013H\u0087\b\u001a!\u0010\u0017\u001a\u00020\u00132\u0006\u0010\u0003\u001a\u00020\u00132\u0006\u0010\u0004\u001a\u00020\u00132\u0006\u0010\u0006\u001a\u00020\u0013H\u0087\b\u001a\u001c\u0010\u0017\u001a\u00020\u00132\u0006\u0010\u0003\u001a\u00020\u00132\n\u0010\b\u001a\u00020\u0014\"\u00020\u0013H\u0007\u001a\u0019\u0010\u0017\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\u0006\u0010\u0004\u001a\u00020\u0015H\u0087\b\u001a!\u0010\u0017\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\u0006\u0010\u0004\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u0015H\u0087\b\u001a\u001c\u0010\u0017\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\n\u0010\b\u001a\u00020\u0016\"\u00020\u0015H\u0007¨\u0006\u0018"}, d2 = {"maxOf", "T", "", "a", "b", "(Ljava/lang/Comparable;Ljava/lang/Comparable;)Ljava/lang/Comparable;", "c", "(Ljava/lang/Comparable;Ljava/lang/Comparable;Ljava/lang/Comparable;)Ljava/lang/Comparable;", "other", "", "(Ljava/lang/Comparable;[Ljava/lang/Comparable;)Ljava/lang/Comparable;", "", "", "", "", "", "", "", "", "", "", "", "", "minOf", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/comparisons/ComparisonsKt")
class ComparisonsKt___ComparisonsJvmKt extends kotlin.comparisons.ComparisonsKt__ComparisonsKt {
    public ComparisonsKt___ComparisonsJvmKt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static final byte maxOf(byte r0, byte r1) {
            int r0 = java.lang.Math.max(r0, r1)
            byte r0 = (byte) r0
            return r0
    }

    private static final byte maxOf(byte r0, byte r1, byte r2) {
            int r1 = java.lang.Math.max(r1, r2)
            int r0 = java.lang.Math.max(r0, r1)
            byte r0 = (byte) r0
            return r0
    }

    public static final byte maxOf(byte r3, byte... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L13
            r2 = r4[r1]
            int r3 = java.lang.Math.max(r3, r2)
            byte r3 = (byte) r3
            int r1 = r1 + 1
            goto L7
        L13:
            return r3
    }

    private static final double maxOf(double r0, double r2) {
            double r0 = java.lang.Math.max(r0, r2)
            return r0
    }

    private static final double maxOf(double r0, double r2, double r4) {
            double r2 = java.lang.Math.max(r2, r4)
            double r0 = java.lang.Math.max(r0, r2)
            return r0
    }

    public static final double maxOf(double r4, double... r6) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            int r0 = r6.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L12
            r2 = r6[r1]
            double r4 = java.lang.Math.max(r4, r2)
            int r1 = r1 + 1
            goto L7
        L12:
            return r4
    }

    private static final float maxOf(float r0, float r1) {
            float r0 = java.lang.Math.max(r0, r1)
            return r0
    }

    private static final float maxOf(float r0, float r1, float r2) {
            float r1 = java.lang.Math.max(r1, r2)
            float r0 = java.lang.Math.max(r0, r1)
            return r0
    }

    public static final float maxOf(float r3, float... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L12
            r2 = r4[r1]
            float r3 = java.lang.Math.max(r3, r2)
            int r1 = r1 + 1
            goto L7
        L12:
            return r3
    }

    private static final int maxOf(int r0, int r1) {
            int r0 = java.lang.Math.max(r0, r1)
            return r0
    }

    private static final int maxOf(int r0, int r1, int r2) {
            int r1 = java.lang.Math.max(r1, r2)
            int r0 = java.lang.Math.max(r0, r1)
            return r0
    }

    public static final int maxOf(int r3, int... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L12
            r2 = r4[r1]
            int r3 = java.lang.Math.max(r3, r2)
            int r1 = r1 + 1
            goto L7
        L12:
            return r3
    }

    private static final long maxOf(long r0, long r2) {
            long r0 = java.lang.Math.max(r0, r2)
            return r0
    }

    private static final long maxOf(long r0, long r2, long r4) {
            long r2 = java.lang.Math.max(r2, r4)
            long r0 = java.lang.Math.max(r0, r2)
            return r0
    }

    public static final long maxOf(long r4, long... r6) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            int r0 = r6.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L12
            r2 = r6[r1]
            long r4 = java.lang.Math.max(r4, r2)
            int r1 = r1 + 1
            goto L7
        L12:
            return r4
    }

    public static final <T extends java.lang.Comparable<? super T>> T maxOf(T r1, T r2) {
            java.lang.String r0 = "a"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "b"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r1.compareTo(r2)
            if (r0 < 0) goto L11
            goto L12
        L11:
            r1 = r2
        L12:
            return r1
    }

    public static final <T extends java.lang.Comparable<? super T>> T maxOf(T r1, T r2, T r3) {
            java.lang.String r0 = "a"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "b"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "c"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.Comparable r2 = kotlin.comparisons.ComparisonsKt.maxOf(r2, r3)
            java.lang.Comparable r1 = kotlin.comparisons.ComparisonsKt.maxOf(r1, r2)
            return r1
    }

    public static final <T extends java.lang.Comparable<? super T>> T maxOf(T r3, T... r4) {
            java.lang.String r0 = "a"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        Lc:
            if (r1 >= r0) goto L17
            r2 = r4[r1]
            java.lang.Comparable r3 = kotlin.comparisons.ComparisonsKt.maxOf(r3, r2)
            int r1 = r1 + 1
            goto Lc
        L17:
            return r3
    }

    private static final short maxOf(short r0, short r1) {
            int r0 = java.lang.Math.max(r0, r1)
            short r0 = (short) r0
            return r0
    }

    private static final short maxOf(short r0, short r1, short r2) {
            int r1 = java.lang.Math.max(r1, r2)
            int r0 = java.lang.Math.max(r0, r1)
            short r0 = (short) r0
            return r0
    }

    public static final short maxOf(short r3, short... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L13
            short r2 = r4[r1]
            int r3 = java.lang.Math.max(r3, r2)
            short r3 = (short) r3
            int r1 = r1 + 1
            goto L7
        L13:
            return r3
    }

    private static final byte minOf(byte r0, byte r1) {
            int r0 = java.lang.Math.min(r0, r1)
            byte r0 = (byte) r0
            return r0
    }

    private static final byte minOf(byte r0, byte r1, byte r2) {
            int r1 = java.lang.Math.min(r1, r2)
            int r0 = java.lang.Math.min(r0, r1)
            byte r0 = (byte) r0
            return r0
    }

    public static final byte minOf(byte r3, byte... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L13
            r2 = r4[r1]
            int r3 = java.lang.Math.min(r3, r2)
            byte r3 = (byte) r3
            int r1 = r1 + 1
            goto L7
        L13:
            return r3
    }

    private static final double minOf(double r0, double r2) {
            double r0 = java.lang.Math.min(r0, r2)
            return r0
    }

    private static final double minOf(double r0, double r2, double r4) {
            double r2 = java.lang.Math.min(r2, r4)
            double r0 = java.lang.Math.min(r0, r2)
            return r0
    }

    public static final double minOf(double r4, double... r6) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            int r0 = r6.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L12
            r2 = r6[r1]
            double r4 = java.lang.Math.min(r4, r2)
            int r1 = r1 + 1
            goto L7
        L12:
            return r4
    }

    private static final float minOf(float r0, float r1) {
            float r0 = java.lang.Math.min(r0, r1)
            return r0
    }

    private static final float minOf(float r0, float r1, float r2) {
            float r1 = java.lang.Math.min(r1, r2)
            float r0 = java.lang.Math.min(r0, r1)
            return r0
    }

    public static final float minOf(float r3, float... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L12
            r2 = r4[r1]
            float r3 = java.lang.Math.min(r3, r2)
            int r1 = r1 + 1
            goto L7
        L12:
            return r3
    }

    private static final int minOf(int r0, int r1) {
            int r0 = java.lang.Math.min(r0, r1)
            return r0
    }

    private static final int minOf(int r0, int r1, int r2) {
            int r1 = java.lang.Math.min(r1, r2)
            int r0 = java.lang.Math.min(r0, r1)
            return r0
    }

    public static final int minOf(int r3, int... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L12
            r2 = r4[r1]
            int r3 = java.lang.Math.min(r3, r2)
            int r1 = r1 + 1
            goto L7
        L12:
            return r3
    }

    private static final long minOf(long r0, long r2) {
            long r0 = java.lang.Math.min(r0, r2)
            return r0
    }

    private static final long minOf(long r0, long r2, long r4) {
            long r2 = java.lang.Math.min(r2, r4)
            long r0 = java.lang.Math.min(r0, r2)
            return r0
    }

    public static final long minOf(long r4, long... r6) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            int r0 = r6.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L12
            r2 = r6[r1]
            long r4 = java.lang.Math.min(r4, r2)
            int r1 = r1 + 1
            goto L7
        L12:
            return r4
    }

    public static final <T extends java.lang.Comparable<? super T>> T minOf(T r1, T r2) {
            java.lang.String r0 = "a"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "b"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r1.compareTo(r2)
            if (r0 > 0) goto L11
            goto L12
        L11:
            r1 = r2
        L12:
            return r1
    }

    public static final <T extends java.lang.Comparable<? super T>> T minOf(T r1, T r2, T r3) {
            java.lang.String r0 = "a"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "b"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "c"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.Comparable r2 = kotlin.comparisons.ComparisonsKt.minOf(r2, r3)
            java.lang.Comparable r1 = kotlin.comparisons.ComparisonsKt.minOf(r1, r2)
            return r1
    }

    public static final <T extends java.lang.Comparable<? super T>> T minOf(T r3, T... r4) {
            java.lang.String r0 = "a"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        Lc:
            if (r1 >= r0) goto L17
            r2 = r4[r1]
            java.lang.Comparable r3 = kotlin.comparisons.ComparisonsKt.minOf(r3, r2)
            int r1 = r1 + 1
            goto Lc
        L17:
            return r3
    }

    private static final short minOf(short r0, short r1) {
            int r0 = java.lang.Math.min(r0, r1)
            short r0 = (short) r0
            return r0
    }

    private static final short minOf(short r0, short r1, short r2) {
            int r1 = java.lang.Math.min(r1, r2)
            int r0 = java.lang.Math.min(r0, r1)
            short r0 = (short) r0
            return r0
    }

    public static final short minOf(short r3, short... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L13
            short r2 = r4[r1]
            int r3 = java.lang.Math.min(r3, r2)
            short r3 = (short) r3
            int r1 = r1 + 1
            goto L7
        L13:
            return r3
    }
}
