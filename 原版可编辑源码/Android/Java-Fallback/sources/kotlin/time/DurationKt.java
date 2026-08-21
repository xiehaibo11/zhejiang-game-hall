package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000>\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0006\n\u0002\b*\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0010\f\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a \u0010#\u001a\u00020\u00072\u0006\u0010$\u001a\u00020\u00012\u0006\u0010%\u001a\u00020\u0005H\u0002ø\u0001\u0000¢\u0006\u0002\u0010&\u001a\u0018\u0010'\u001a\u00020\u00072\u0006\u0010(\u001a\u00020\u0001H\u0002ø\u0001\u0000¢\u0006\u0002\u0010\u0010\u001a\u0018\u0010)\u001a\u00020\u00072\u0006\u0010*\u001a\u00020\u0001H\u0002ø\u0001\u0000¢\u0006\u0002\u0010\u0010\u001a\u0018\u0010+\u001a\u00020\u00072\u0006\u0010,\u001a\u00020\u0001H\u0002ø\u0001\u0000¢\u0006\u0002\u0010\u0010\u001a\u0018\u0010-\u001a\u00020\u00072\u0006\u0010.\u001a\u00020\u0001H\u0002ø\u0001\u0000¢\u0006\u0002\u0010\u0010\u001a\u0010\u0010/\u001a\u00020\u00012\u0006\u0010*\u001a\u00020\u0001H\u0002\u001a\u0010\u00100\u001a\u00020\u00012\u0006\u0010.\u001a\u00020\u0001H\u0002\u001a \u00101\u001a\u00020\u00072\u0006\u00102\u001a\u0002032\u0006\u00104\u001a\u000205H\u0002ø\u0001\u0000¢\u0006\u0002\u00106\u001a\u0010\u00107\u001a\u00020\u00012\u0006\u00102\u001a\u000203H\u0002\u001a)\u00108\u001a\u00020\u0005*\u0002032\u0006\u00109\u001a\u00020\u00052\u0012\u0010:\u001a\u000e\u0012\u0004\u0012\u00020<\u0012\u0004\u0012\u0002050;H\u0082\b\u001a)\u0010=\u001a\u000203*\u0002032\u0006\u00109\u001a\u00020\u00052\u0012\u0010:\u001a\u000e\u0012\u0004\u0012\u00020<\u0012\u0004\u0012\u0002050;H\u0082\b\u001a\u001f\u0010>\u001a\u00020\u0007*\u00020\b2\u0006\u0010?\u001a\u00020\u0007H\u0087\nø\u0001\u0000¢\u0006\u0004\b@\u0010A\u001a\u001f\u0010>\u001a\u00020\u0007*\u00020\u00052\u0006\u0010?\u001a\u00020\u0007H\u0087\nø\u0001\u0000¢\u0006\u0004\bB\u0010C\u001a\u001c\u0010D\u001a\u00020\u0007*\u00020\b2\u0006\u0010E\u001a\u00020FH\u0007ø\u0001\u0000¢\u0006\u0002\u0010G\u001a\u001c\u0010D\u001a\u00020\u0007*\u00020\u00052\u0006\u0010E\u001a\u00020FH\u0007ø\u0001\u0000¢\u0006\u0002\u0010H\u001a\u001c\u0010D\u001a\u00020\u0007*\u00020\u00012\u0006\u0010E\u001a\u00020FH\u0007ø\u0001\u0000¢\u0006\u0002\u0010I\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0003\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0004\u001a\u00020\u0005X\u0080T¢\u0006\u0002\n\u0000\"!\u0010\u0006\u001a\u00020\u0007*\u00020\b8FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\t\u0010\n\u001a\u0004\b\u000b\u0010\f\"!\u0010\u0006\u001a\u00020\u0007*\u00020\u00058FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\t\u0010\r\u001a\u0004\b\u000b\u0010\u000e\"!\u0010\u0006\u001a\u00020\u0007*\u00020\u00018FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\t\u0010\u000f\u001a\u0004\b\u000b\u0010\u0010\"!\u0010\u0011\u001a\u00020\u0007*\u00020\b8FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u0012\u0010\n\u001a\u0004\b\u0013\u0010\f\"!\u0010\u0011\u001a\u00020\u0007*\u00020\u00058FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u0012\u0010\r\u001a\u0004\b\u0013\u0010\u000e\"!\u0010\u0011\u001a\u00020\u0007*\u00020\u00018FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u0012\u0010\u000f\u001a\u0004\b\u0013\u0010\u0010\"!\u0010\u0014\u001a\u00020\u0007*\u00020\b8FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u0015\u0010\n\u001a\u0004\b\u0016\u0010\f\"!\u0010\u0014\u001a\u00020\u0007*\u00020\u00058FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u0015\u0010\r\u001a\u0004\b\u0016\u0010\u000e\"!\u0010\u0014\u001a\u00020\u0007*\u00020\u00018FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u0015\u0010\u000f\u001a\u0004\b\u0016\u0010\u0010\"!\u0010\u0017\u001a\u00020\u0007*\u00020\b8FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u0018\u0010\n\u001a\u0004\b\u0019\u0010\f\"!\u0010\u0017\u001a\u00020\u0007*\u00020\u00058FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u0018\u0010\r\u001a\u0004\b\u0019\u0010\u000e\"!\u0010\u0017\u001a\u00020\u0007*\u00020\u00018FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u0018\u0010\u000f\u001a\u0004\b\u0019\u0010\u0010\"!\u0010\u001a\u001a\u00020\u0007*\u00020\b8FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u001b\u0010\n\u001a\u0004\b\u001c\u0010\f\"!\u0010\u001a\u001a\u00020\u0007*\u00020\u00058FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u001b\u0010\r\u001a\u0004\b\u001c\u0010\u000e\"!\u0010\u001a\u001a\u00020\u0007*\u00020\u00018FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u001b\u0010\u000f\u001a\u0004\b\u001c\u0010\u0010\"!\u0010\u001d\u001a\u00020\u0007*\u00020\b8FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u001e\u0010\n\u001a\u0004\b\u001f\u0010\f\"!\u0010\u001d\u001a\u00020\u0007*\u00020\u00058FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u001e\u0010\r\u001a\u0004\b\u001f\u0010\u000e\"!\u0010\u001d\u001a\u00020\u0007*\u00020\u00018FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b\u001e\u0010\u000f\u001a\u0004\b\u001f\u0010\u0010\"!\u0010 \u001a\u00020\u0007*\u00020\b8FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b!\u0010\n\u001a\u0004\b\"\u0010\f\"!\u0010 \u001a\u00020\u0007*\u00020\u00058FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b!\u0010\r\u001a\u0004\b\"\u0010\u000e\"!\u0010 \u001a\u00020\u0007*\u00020\u00018FX\u0087\u0004ø\u0001\u0000¢\u0006\f\u0012\u0004\b!\u0010\u000f\u001a\u0004\b\"\u0010\u0010\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006J"}, d2 = {"MAX_MILLIS", "", "MAX_NANOS", "MAX_NANOS_IN_MILLIS", "NANOS_IN_MILLIS", "", "days", "Lkotlin/time/Duration;", "", "getDays$annotations", "(D)V", "getDays", "(D)J", "(I)V", "(I)J", "(J)V", "(J)J", "hours", "getHours$annotations", "getHours", "microseconds", "getMicroseconds$annotations", "getMicroseconds", "milliseconds", "getMilliseconds$annotations", "getMilliseconds", "minutes", "getMinutes$annotations", "getMinutes", "nanoseconds", "getNanoseconds$annotations", "getNanoseconds", "seconds", "getSeconds$annotations", "getSeconds", "durationOf", "normalValue", "unitDiscriminator", "(JI)J", "durationOfMillis", "normalMillis", "durationOfMillisNormalized", "millis", "durationOfNanos", "normalNanos", "durationOfNanosNormalized", "nanos", "millisToNanos", "nanosToMillis", "parseDuration", "value", "", "strictIso", "", "(Ljava/lang/String;Z)J", "parseOverLongIsoComponent", "skipWhile", "startIndex", "predicate", "Lkotlin/Function1;", "", "substringWhile", "times", "duration", "times-kIfJnKk", "(DJ)J", "times-mvk6XK0", "(IJ)J", "toDuration", "unit", "Lkotlin/time/DurationUnit;", "(DLkotlin/time/DurationUnit;)J", "(ILkotlin/time/DurationUnit;)J", "(JLkotlin/time/DurationUnit;)J", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class DurationKt {
    public static final long MAX_MILLIS = 4611686018427387903L;
    public static final long MAX_NANOS = 4611686018426999999L;
    private static final long MAX_NANOS_IN_MILLIS = 4611686018426L;
    public static final int NANOS_IN_MILLIS = 1000000;

    public static final long access$durationOf(long r0, int r2) {
            long r0 = durationOf(r0, r2)
            return r0
    }

    public static final long access$durationOfMillis(long r0) {
            long r0 = durationOfMillis(r0)
            return r0
    }

    public static final long access$durationOfMillisNormalized(long r0) {
            long r0 = durationOfMillisNormalized(r0)
            return r0
    }

    public static final long access$durationOfNanos(long r0) {
            long r0 = durationOfNanos(r0)
            return r0
    }

    public static final long access$durationOfNanosNormalized(long r0) {
            long r0 = durationOfNanosNormalized(r0)
            return r0
    }

    public static final long access$millisToNanos(long r0) {
            long r0 = millisToNanos(r0)
            return r0
    }

    public static final long access$nanosToMillis(long r0) {
            long r0 = nanosToMillis(r0)
            return r0
    }

    public static final long access$parseDuration(java.lang.String r0, boolean r1) {
            long r0 = parseDuration(r0, r1)
            return r0
    }

    private static final long durationOf(long r2, int r4) {
            r0 = 1
            long r2 = r2 << r0
            long r0 = (long) r4
            long r2 = r2 + r0
            long r2 = kotlin.time.Duration.constructor-impl(r2)
            return r2
    }

    private static final long durationOfMillis(long r2) {
            r0 = 1
            long r2 = r2 << r0
            r0 = 1
            long r2 = r2 + r0
            long r2 = kotlin.time.Duration.constructor-impl(r2)
            return r2
    }

    private static final long durationOfMillisNormalized(long r6) {
            r0 = -4611686018426(0xfffffbce4217d286, double:NaN)
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto L14
            r2 = 4611686018427(0x431bde82d7b, double:2.278475631111E-311)
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 >= 0) goto L14
            r1 = 1
        L14:
            if (r1 == 0) goto L1f
            long r6 = millisToNanos(r6)
            long r6 = durationOfNanos(r6)
            goto L32
        L1f:
            r2 = -4611686018427387903(0xc000000000000001, double:-2.0000000000000004)
            r4 = 4611686018427387903(0x3fffffffffffffff, double:1.9999999999999998)
            r0 = r6
            long r6 = kotlin.ranges.RangesKt.coerceIn(r0, r2, r4)
            long r6 = durationOfMillis(r6)
        L32:
            return r6
    }

    private static final long durationOfNanos(long r1) {
            r0 = 1
            long r1 = r1 << r0
            long r1 = kotlin.time.Duration.constructor-impl(r1)
            return r1
    }

    private static final long durationOfNanosNormalized(long r4) {
            r0 = -4611686018426999999(0xc00000000005eb41, double:-2.0000000001722644)
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto L14
            r2 = 4611686018427000000(0x3ffffffffffa14c0, double:1.999999999913868)
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 >= 0) goto L14
            r1 = 1
        L14:
            if (r1 == 0) goto L1b
            long r4 = durationOfNanos(r4)
            goto L23
        L1b:
            long r4 = nanosToMillis(r4)
            long r4 = durationOfMillis(r4)
        L23:
            return r4
    }

    public static final long getDays(double r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
            long r1 = toDuration(r1, r0)
            return r1
    }

    public static final long getDays(int r2) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
            long r0 = toDuration(r2, r0)
            return r0
    }

    public static final long getDays(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
            long r1 = toDuration(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use 'Double.days' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.days", imports = {"kotlin.time.Duration.Companion.days"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getDays$annotations(double r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Int.days' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.days", imports = {"kotlin.time.Duration.Companion.days"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getDays$annotations(int r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Long.days' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.days", imports = {"kotlin.time.Duration.Companion.days"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getDays$annotations(long r0) {
            return
    }

    public static final long getHours(double r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
            long r1 = toDuration(r1, r0)
            return r1
    }

    public static final long getHours(int r2) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
            long r0 = toDuration(r2, r0)
            return r0
    }

    public static final long getHours(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
            long r1 = toDuration(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use 'Double.hours' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.hours", imports = {"kotlin.time.Duration.Companion.hours"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getHours$annotations(double r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Int.hours' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.hours", imports = {"kotlin.time.Duration.Companion.hours"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getHours$annotations(int r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Long.hours' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.hours", imports = {"kotlin.time.Duration.Companion.hours"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getHours$annotations(long r0) {
            return
    }

    public static final long getMicroseconds(double r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
            long r1 = toDuration(r1, r0)
            return r1
    }

    public static final long getMicroseconds(int r2) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
            long r0 = toDuration(r2, r0)
            return r0
    }

    public static final long getMicroseconds(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
            long r1 = toDuration(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use 'Double.microseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.microseconds", imports = {"kotlin.time.Duration.Companion.microseconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getMicroseconds$annotations(double r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Int.microseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.microseconds", imports = {"kotlin.time.Duration.Companion.microseconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getMicroseconds$annotations(int r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Long.microseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.microseconds", imports = {"kotlin.time.Duration.Companion.microseconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getMicroseconds$annotations(long r0) {
            return
    }

    public static final long getMilliseconds(double r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
            long r1 = toDuration(r1, r0)
            return r1
    }

    public static final long getMilliseconds(int r2) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
            long r0 = toDuration(r2, r0)
            return r0
    }

    public static final long getMilliseconds(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
            long r1 = toDuration(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use 'Double.milliseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.milliseconds", imports = {"kotlin.time.Duration.Companion.milliseconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getMilliseconds$annotations(double r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Int.milliseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.milliseconds", imports = {"kotlin.time.Duration.Companion.milliseconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getMilliseconds$annotations(int r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Long.milliseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.milliseconds", imports = {"kotlin.time.Duration.Companion.milliseconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getMilliseconds$annotations(long r0) {
            return
    }

    public static final long getMinutes(double r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
            long r1 = toDuration(r1, r0)
            return r1
    }

    public static final long getMinutes(int r2) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
            long r0 = toDuration(r2, r0)
            return r0
    }

    public static final long getMinutes(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
            long r1 = toDuration(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use 'Double.minutes' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.minutes", imports = {"kotlin.time.Duration.Companion.minutes"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getMinutes$annotations(double r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Int.minutes' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.minutes", imports = {"kotlin.time.Duration.Companion.minutes"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getMinutes$annotations(int r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Long.minutes' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.minutes", imports = {"kotlin.time.Duration.Companion.minutes"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getMinutes$annotations(long r0) {
            return
    }

    public static final long getNanoseconds(double r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            long r1 = toDuration(r1, r0)
            return r1
    }

    public static final long getNanoseconds(int r2) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            long r0 = toDuration(r2, r0)
            return r0
    }

    public static final long getNanoseconds(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            long r1 = toDuration(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use 'Double.nanoseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.nanoseconds", imports = {"kotlin.time.Duration.Companion.nanoseconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getNanoseconds$annotations(double r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Int.nanoseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.nanoseconds", imports = {"kotlin.time.Duration.Companion.nanoseconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getNanoseconds$annotations(int r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Long.nanoseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.nanoseconds", imports = {"kotlin.time.Duration.Companion.nanoseconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getNanoseconds$annotations(long r0) {
            return
    }

    public static final long getSeconds(double r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
            long r1 = toDuration(r1, r0)
            return r1
    }

    public static final long getSeconds(int r2) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
            long r0 = toDuration(r2, r0)
            return r0
    }

    public static final long getSeconds(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
            long r1 = toDuration(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use 'Double.seconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.seconds", imports = {"kotlin.time.Duration.Companion.seconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getSeconds$annotations(double r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Int.seconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.seconds", imports = {"kotlin.time.Duration.Companion.seconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getSeconds$annotations(int r0) {
            return
    }

    @kotlin.Deprecated(message = "Use 'Long.seconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.seconds", imports = {"kotlin.time.Duration.Companion.seconds"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static void getSeconds$annotations(long r0) {
            return
    }

    private static final long millisToNanos(long r2) {
            r0 = 1000000(0xf4240, float:1.401298E-39)
            long r0 = (long) r0
            long r2 = r2 * r0
            return r2
    }

    private static final long nanosToMillis(long r2) {
            r0 = 1000000(0xf4240, float:1.401298E-39)
            long r0 = (long) r0
            long r2 = r2 / r0
            return r2
    }

    private static final long parseDuration(java.lang.String r27, boolean r28) {
            r6 = r27
            int r7 = r27.length()
            if (r7 == 0) goto L2ca
            kotlin.time.Duration$Companion r0 = kotlin.time.Duration.Companion
            long r8 = r0.getZERO-UwyO8pc()
            r10 = 0
            char r0 = r6.charAt(r10)
            r1 = 43
            r2 = 45
            r11 = 1
            if (r0 != r1) goto L1c
        L1a:
            r0 = r11
            goto L20
        L1c:
            if (r0 != r2) goto L1f
            goto L1a
        L1f:
            r0 = r10
        L20:
            if (r0 == 0) goto L24
            r12 = r11
            goto L25
        L24:
            r12 = r10
        L25:
            if (r12 <= 0) goto L29
            r13 = r11
            goto L2a
        L29:
            r13 = r10
        L2a:
            r0 = 2
            r14 = 0
            if (r13 == 0) goto L39
            r1 = r6
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            boolean r1 = kotlin.text.StringsKt.startsWith$default(r1, r2, r10, r0, r14)
            if (r1 == 0) goto L39
            r15 = r11
            goto L3a
        L39:
            r15 = r10
        L3a:
            java.lang.String r5 = "No components"
            if (r7 <= r12) goto L2c3
            char r1 = r6.charAt(r12)
            r2 = 80
            java.lang.String r4 = "this as java.lang.String).substring(startIndex)"
            java.lang.String r3 = "Unexpected order of duration components"
            r16 = r5
            r5 = 58
            r0 = 48
            java.lang.String r10 = "this as java.lang.String…ing(startIndex, endIndex)"
            if (r1 != r2) goto L167
            int r12 = r12 + r11
            if (r12 == r7) goto L161
            r2 = r14
            r1 = 0
        L57:
            if (r12 >= r7) goto L15d
            char r13 = r6.charAt(r12)
            r11 = 84
            if (r13 != r11) goto L70
            if (r1 != 0) goto L6a
            int r12 = r12 + 1
            if (r12 == r7) goto L6a
            r1 = 1
            r11 = 1
            goto L57
        L6a:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
        L70:
            r11 = r12
        L71:
            int r13 = r27.length()
            if (r11 >= r13) goto La8
            char r13 = r6.charAt(r11)
            if (r0 > r13) goto L82
            if (r13 >= r5) goto L82
            r16 = 1
            goto L84
        L82:
            r16 = 0
        L84:
            if (r16 != 0) goto L99
            java.lang.String r16 = "+-."
            r0 = r16
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r17 = r15
            r5 = 2
            r15 = 0
            boolean r0 = kotlin.text.StringsKt.contains$default(r0, r13, r15, r5, r14)
            if (r0 == 0) goto L97
            goto L9c
        L97:
            r0 = 0
            goto L9d
        L99:
            r17 = r15
            r5 = 2
        L9c:
            r0 = 1
        L9d:
            if (r0 == 0) goto Lab
            int r11 = r11 + 1
            r15 = r17
            r0 = 48
            r5 = 58
            goto L71
        La8:
            r17 = r15
            r5 = 2
        Lab:
            java.lang.String r0 = r6.substring(r12, r11)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r10)
            r20 = r0
            java.lang.CharSequence r20 = (java.lang.CharSequence) r20
            int r11 = r20.length()
            if (r11 != 0) goto Lbe
            r11 = 1
            goto Lbf
        Lbe:
            r11 = 0
        Lbf:
            if (r11 != 0) goto L157
            int r11 = r0.length()
            int r12 = r12 + r11
            r11 = r6
            java.lang.CharSequence r11 = (java.lang.CharSequence) r11
            if (r12 < 0) goto L140
            int r13 = kotlin.text.StringsKt.getLastIndex(r11)
            if (r12 > r13) goto L140
            char r11 = r11.charAt(r12)
            int r12 = r12 + 1
            kotlin.time.DurationUnit r11 = kotlin.time.DurationUnitKt.durationUnitByIsoChar(r11, r1)
            if (r2 == 0) goto Led
            r13 = r11
            java.lang.Enum r13 = (java.lang.Enum) r13
            int r2 = r2.compareTo(r13)
            if (r2 <= 0) goto Le7
            goto Led
        Le7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r3)
            throw r0
        Led:
            r21 = 46
            r22 = 0
            r23 = 0
            r24 = 6
            r25 = 0
            int r2 = kotlin.text.StringsKt.indexOf$default(r20, r21, r22, r23, r24, r25)
            kotlin.time.DurationUnit r13 = kotlin.time.DurationUnit.SECONDS
            if (r11 != r13) goto L129
            if (r2 <= 0) goto L129
            r13 = 0
            java.lang.String r15 = r0.substring(r13, r2)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r15, r10)
            long r14 = parseOverLongIsoComponent(r15)
            long r13 = toDuration(r14, r11)
            long r8 = kotlin.time.Duration.plus-LRDsOJo(r8, r13)
            java.lang.String r0 = r0.substring(r2)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r4)
            double r13 = java.lang.Double.parseDouble(r0)
            long r13 = toDuration(r13, r11)
            long r8 = kotlin.time.Duration.plus-LRDsOJo(r8, r13)
            goto L135
        L129:
            long r13 = parseOverLongIsoComponent(r0)
            long r13 = toDuration(r13, r11)
            long r8 = kotlin.time.Duration.plus-LRDsOJo(r8, r13)
        L135:
            r2 = r11
            r15 = r17
            r0 = 48
            r5 = 58
            r11 = 1
            r14 = 0
            goto L57
        L140:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Missing unit for value "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L157:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
        L15d:
            r17 = r15
            goto L2b6
        L161:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
        L167:
            r17 = r15
            if (r28 != 0) goto L2bd
            r5 = 0
            int r0 = r7 - r12
            r1 = 8
            int r11 = java.lang.Math.max(r0, r1)
            r14 = 1
            java.lang.String r2 = "Infinity"
            r15 = 48
            r0 = r27
            r1 = r12
            r26 = r3
            r3 = r5
            r5 = r4
            r4 = r11
            r11 = r5
            r15 = r16
            r5 = r14
            boolean r0 = kotlin.text.StringsKt.regionMatches(r0, r1, r2, r3, r4, r5)
            if (r0 == 0) goto L193
            kotlin.time.Duration$Companion r0 = kotlin.time.Duration.Companion
            long r8 = r0.getINFINITE-UwyO8pc()
            goto L2b6
        L193:
            r0 = r13 ^ 1
            if (r13 == 0) goto L1b8
            char r1 = r6.charAt(r12)
            r2 = 40
            if (r1 != r2) goto L1b8
            r1 = r6
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            char r1 = kotlin.text.StringsKt.last(r1)
            r2 = 41
            if (r1 != r2) goto L1b8
            int r12 = r12 + 1
            int r7 = r7 + (-1)
            if (r12 == r7) goto L1b2
            r0 = 1
            goto L1b8
        L1b2:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r15)
            throw r0
        L1b8:
            r14 = 0
            r15 = 0
        L1ba:
            if (r12 >= r7) goto L2b6
            if (r15 == 0) goto L1d6
            if (r0 == 0) goto L1d6
        L1c0:
            int r1 = r27.length()
            if (r12 >= r1) goto L1d6
            char r1 = r6.charAt(r12)
            r2 = 32
            if (r1 != r2) goto L1d0
            r15 = 1
            goto L1d1
        L1d0:
            r15 = 0
        L1d1:
            if (r15 == 0) goto L1d6
            int r12 = r12 + 1
            goto L1c0
        L1d6:
            r1 = r12
        L1d7:
            int r2 = r27.length()
            if (r1 >= r2) goto L1fb
            char r2 = r6.charAt(r1)
            r3 = 48
            r4 = 58
            if (r3 > r2) goto L1eb
            if (r2 >= r4) goto L1eb
            r15 = 1
            goto L1ec
        L1eb:
            r15 = 0
        L1ec:
            if (r15 != 0) goto L1f5
            r5 = 46
            if (r2 != r5) goto L1f3
            goto L1f5
        L1f3:
            r15 = 0
            goto L1f6
        L1f5:
            r15 = 1
        L1f6:
            if (r15 == 0) goto L1ff
            int r1 = r1 + 1
            goto L1d7
        L1fb:
            r3 = 48
            r4 = 58
        L1ff:
            java.lang.String r1 = r6.substring(r12, r1)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r10)
            r18 = r1
            java.lang.CharSequence r18 = (java.lang.CharSequence) r18
            int r2 = r18.length()
            if (r2 != 0) goto L212
            r15 = 1
            goto L213
        L212:
            r15 = 0
        L213:
            if (r15 != 0) goto L2b0
            int r2 = r1.length()
            int r12 = r12 + r2
            r2 = r12
        L21b:
            int r5 = r27.length()
            if (r2 >= r5) goto L235
            char r5 = r6.charAt(r2)
            r13 = 97
            if (r13 > r5) goto L22f
            r13 = 123(0x7b, float:1.72E-43)
            if (r5 >= r13) goto L22f
            r15 = 1
            goto L230
        L22f:
            r15 = 0
        L230:
            if (r15 == 0) goto L235
            int r2 = r2 + 1
            goto L21b
        L235:
            java.lang.String r2 = r6.substring(r12, r2)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r10)
            int r5 = r2.length()
            int r12 = r12 + r5
            kotlin.time.DurationUnit r2 = kotlin.time.DurationUnitKt.durationUnitByShortName(r2)
            if (r14 == 0) goto L259
            r5 = r2
            java.lang.Enum r5 = (java.lang.Enum) r5
            int r5 = r14.compareTo(r5)
            if (r5 <= 0) goto L251
            goto L259
        L251:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r5 = r26
            r0.<init>(r5)
            throw r0
        L259:
            r5 = r26
            r19 = 46
            r20 = 0
            r21 = 0
            r22 = 6
            r23 = 0
            int r13 = kotlin.text.StringsKt.indexOf$default(r18, r19, r20, r21, r22, r23)
            if (r13 <= 0) goto L29d
            r14 = 0
            java.lang.String r15 = r1.substring(r14, r13)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r15, r10)
            long r3 = java.lang.Long.parseLong(r15)
            long r3 = toDuration(r3, r2)
            long r3 = kotlin.time.Duration.plus-LRDsOJo(r8, r3)
            java.lang.String r1 = r1.substring(r13)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r11)
            double r8 = java.lang.Double.parseDouble(r1)
            long r8 = toDuration(r8, r2)
            long r8 = kotlin.time.Duration.plus-LRDsOJo(r3, r8)
            if (r12 < r7) goto L295
            goto L2aa
        L295:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Fractional component must be last"
            r0.<init>(r1)
            throw r0
        L29d:
            r14 = 0
            long r3 = java.lang.Long.parseLong(r1)
            long r3 = toDuration(r3, r2)
            long r8 = kotlin.time.Duration.plus-LRDsOJo(r8, r3)
        L2aa:
            r14 = r2
            r26 = r5
            r15 = 1
            goto L1ba
        L2b0:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
        L2b6:
            if (r17 == 0) goto L2bc
            long r8 = kotlin.time.Duration.unaryMinus-UwyO8pc(r8)
        L2bc:
            return r8
        L2bd:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
        L2c3:
            r15 = r5
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r15)
            throw r0
        L2ca:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "The string is empty"
            r0.<init>(r1)
            throw r0
    }

    private static final long parseOverLongIsoComponent(java.lang.String r7) {
            int r0 = r7.length()
            r1 = 0
            r2 = 2
            r3 = 1
            r4 = 0
            if (r0 <= 0) goto L1a
            java.lang.String r5 = "+-"
            java.lang.CharSequence r5 = (java.lang.CharSequence) r5
            char r6 = r7.charAt(r4)
            boolean r5 = kotlin.text.StringsKt.contains$default(r5, r6, r4, r2, r1)
            if (r5 == 0) goto L1a
            r5 = r3
            goto L1b
        L1a:
            r5 = r4
        L1b:
            int r0 = r0 - r5
            r6 = 16
            if (r0 <= r6) goto L73
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            r6 = r7
            java.lang.CharSequence r6 = (java.lang.CharSequence) r6
            int r6 = kotlin.text.StringsKt.getLastIndex(r6)
            r0.<init>(r5, r6)
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            boolean r5 = r0 instanceof java.util.Collection
            if (r5 == 0) goto L3d
            r5 = r0
            java.util.Collection r5 = (java.util.Collection) r5
            boolean r5 = r5.isEmpty()
            if (r5 == 0) goto L3d
        L3b:
            r0 = r3
            goto L60
        L3d:
            java.util.Iterator r0 = r0.iterator()
        L41:
            boolean r5 = r0.hasNext()
            if (r5 == 0) goto L3b
            r5 = r0
            kotlin.collections.IntIterator r5 = (kotlin.collections.IntIterator) r5
            int r5 = r5.nextInt()
            char r5 = r7.charAt(r5)
            r6 = 48
            if (r6 > r5) goto L5c
            r6 = 58
            if (r5 >= r6) goto L5c
            r5 = r3
            goto L5d
        L5c:
            r5 = r4
        L5d:
            if (r5 != 0) goto L41
            r0 = r4
        L60:
            if (r0 == 0) goto L73
            char r7 = r7.charAt(r4)
            r0 = 45
            if (r7 != r0) goto L6d
            r0 = -9223372036854775808
            goto L72
        L6d:
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        L72:
            return r0
        L73:
            java.lang.String r0 = "+"
            boolean r0 = kotlin.text.StringsKt.startsWith$default(r7, r0, r4, r2, r1)
            if (r0 == 0) goto L7f
            java.lang.String r7 = kotlin.text.StringsKt.drop(r7, r3)
        L7f:
            long r0 = java.lang.Long.parseLong(r7)
            return r0
    }

    private static final int skipWhile(java.lang.String r1, int r2, kotlin.jvm.functions.Function1<? super java.lang.Character, java.lang.Boolean> r3) {
        L0:
            int r0 = r1.length()
            if (r2 >= r0) goto L1d
            char r0 = r1.charAt(r2)
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            java.lang.Object r0 = r3.invoke(r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L1d
            int r2 = r2 + 1
            goto L0
        L1d:
            return r2
    }

    private static final java.lang.String substringWhile(java.lang.String r2, int r3, kotlin.jvm.functions.Function1<? super java.lang.Character, java.lang.Boolean> r4) {
            r0 = r3
        L1:
            int r1 = r2.length()
            if (r0 >= r1) goto L1e
            char r1 = r2.charAt(r0)
            java.lang.Character r1 = java.lang.Character.valueOf(r1)
            java.lang.Object r1 = r4.invoke(r1)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            if (r1 == 0) goto L1e
            int r0 = r0 + 1
            goto L1
        L1e:
            java.lang.String r2 = r2.substring(r3, r0)
            java.lang.String r3 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            return r2
    }

    private static final long times-kIfJnKk(double r0, long r2) {
            long r0 = kotlin.time.Duration.times-UwyO8pc(r2, r0)
            return r0
    }

    private static final long times-mvk6XK0(int r0, long r1) {
            long r0 = kotlin.time.Duration.times-UwyO8pc(r1, r0)
            return r0
    }

    public static final long toDuration(double r7, kotlin.time.DurationUnit r9) {
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            double r0 = kotlin.time.DurationUnitKt.convertDurationUnit(r7, r9, r0)
            boolean r2 = java.lang.Double.isNaN(r0)
            r3 = 1
            r2 = r2 ^ r3
            if (r2 == 0) goto L42
            long r0 = kotlin.math.MathKt.roundToLong(r0)
            r4 = -4611686018426999999(0xc00000000005eb41, double:-2.0000000001722644)
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r4 = 0
            if (r2 > 0) goto L2b
            r5 = 4611686018427000000(0x3ffffffffffa14c0, double:1.999999999913868)
            int r2 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r2 >= 0) goto L2b
            goto L2c
        L2b:
            r3 = r4
        L2c:
            if (r3 == 0) goto L33
            long r7 = durationOfNanos(r0)
            goto L41
        L33:
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
            double r7 = kotlin.time.DurationUnitKt.convertDurationUnit(r7, r9, r0)
            long r7 = kotlin.math.MathKt.roundToLong(r7)
            long r7 = durationOfMillisNormalized(r7)
        L41:
            return r7
        L42:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Duration value cannot be NaN."
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
    }

    public static final long toDuration(int r2, kotlin.time.DurationUnit r3) {
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
            java.lang.Enum r0 = (java.lang.Enum) r0
            int r0 = r3.compareTo(r0)
            if (r0 > 0) goto L1b
            long r0 = (long) r2
            kotlin.time.DurationUnit r2 = kotlin.time.DurationUnit.NANOSECONDS
            long r2 = kotlin.time.DurationUnitKt.convertDurationUnitOverflow(r0, r3, r2)
            long r2 = durationOfNanos(r2)
            goto L20
        L1b:
            long r0 = (long) r2
            long r2 = toDuration(r0, r3)
        L20:
            return r2
    }

    public static final long toDuration(long r7, kotlin.time.DurationUnit r9) {
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            r1 = 4611686018426999999(0x3ffffffffffa14bf, double:1.9999999999138678)
            long r0 = kotlin.time.DurationUnitKt.convertDurationUnitOverflow(r1, r0, r9)
            long r2 = -r0
            int r2 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            r3 = 0
            if (r2 > 0) goto L1b
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 > 0) goto L1b
            r3 = 1
        L1b:
            if (r3 == 0) goto L28
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            long r7 = kotlin.time.DurationUnitKt.convertDurationUnitOverflow(r7, r9, r0)
            long r7 = durationOfNanos(r7)
            return r7
        L28:
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
            long r1 = kotlin.time.DurationUnitKt.convertDurationUnit(r7, r9, r0)
            r3 = -4611686018427387903(0xc000000000000001, double:-2.0000000000000004)
            r5 = 4611686018427387903(0x3fffffffffffffff, double:1.9999999999999998)
            long r7 = kotlin.ranges.RangesKt.coerceIn(r1, r3, r5)
            long r7 = durationOfMillis(r7)
            return r7
    }
}
