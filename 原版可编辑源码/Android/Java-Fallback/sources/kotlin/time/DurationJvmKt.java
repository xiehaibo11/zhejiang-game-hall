package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000.\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0002\u001a\u0010\u0010\t\u001a\u00020\u00072\u0006\u0010\n\u001a\u00020\u000bH\u0002\u001a\u0018\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\n\u001a\u00020\u000bH\u0000\u001a\u0018\u0010\u0010\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\n\u001a\u00020\u000bH\u0000\"\u0014\u0010\u0000\u001a\u00020\u0001X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0003\"\u001c\u0010\u0004\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00070\u00060\u0005X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\b¨\u0006\u0011"}, d2 = {"durationAssertionsEnabled", "", "getDurationAssertionsEnabled", "()Z", "precisionFormats", "", "Ljava/lang/ThreadLocal;", "Ljava/text/DecimalFormat;", "[Ljava/lang/ThreadLocal;", "createFormatForDecimals", "decimals", "", "formatToExactDecimals", "", "value", "", "formatUpToDecimals", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class DurationJvmKt {
    private static final boolean durationAssertionsEnabled = false;
    private static final java.lang.ThreadLocal<java.text.DecimalFormat>[] precisionFormats = null;

    static {
            java.lang.Class<kotlin.time.Duration> r0 = kotlin.time.Duration.class
            boolean r0 = r0.desiredAssertionStatus()
            kotlin.time.DurationJvmKt.durationAssertionsEnabled = r0
            r0 = 4
            java.lang.ThreadLocal[] r1 = new java.lang.ThreadLocal[r0]
            r2 = 0
        Lc:
            if (r2 >= r0) goto L18
            java.lang.ThreadLocal r3 = new java.lang.ThreadLocal
            r3.<init>()
            r1[r2] = r3
            int r2 = r2 + 1
            goto Lc
        L18:
            kotlin.time.DurationJvmKt.precisionFormats = r1
            return
    }

    private static final java.text.DecimalFormat createFormatForDecimals(int r2) {
            java.text.DecimalFormat r0 = new java.text.DecimalFormat
            java.lang.String r1 = "0"
            r0.<init>(r1)
            if (r2 <= 0) goto Lc
            r0.setMinimumFractionDigits(r2)
        Lc:
            java.math.RoundingMode r2 = java.math.RoundingMode.HALF_UP
            r0.setRoundingMode(r2)
            return r0
    }

    public static final java.lang.String formatToExactDecimals(double r2, int r4) {
            java.lang.ThreadLocal<java.text.DecimalFormat>[] r0 = kotlin.time.DurationJvmKt.precisionFormats
            int r1 = r0.length
            if (r4 >= r1) goto L1d
            r0 = r0[r4]
            java.lang.Object r1 = r0.get()
            if (r1 != 0) goto L15
            java.text.DecimalFormat r1 = createFormatForDecimals(r4)
            r0.set(r1)
            goto L1a
        L15:
            java.lang.String r4 = "get() ?: default().also(this::set)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r4)
        L1a:
            java.text.DecimalFormat r1 = (java.text.DecimalFormat) r1
            goto L21
        L1d:
            java.text.DecimalFormat r1 = createFormatForDecimals(r4)
        L21:
            java.lang.String r2 = r1.format(r2)
            java.lang.String r3 = "format.format(value)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            return r2
    }

    public static final java.lang.String formatUpToDecimals(double r1, int r3) {
            r0 = 0
            java.text.DecimalFormat r0 = createFormatForDecimals(r0)
            r0.setMaximumFractionDigits(r3)
            java.lang.String r1 = r0.format(r1)
            java.lang.String r2 = "createFormatForDecimals(… }\n        .format(value)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    public static final boolean getDurationAssertionsEnabled() {
            boolean r0 = kotlin.time.DurationJvmKt.durationAssertionsEnabled
            return r0
    }
}
