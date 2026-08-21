package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0002\b'\u0018\u00002\u00020\u0001:\u0001\u000bB\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\b\u0010\u0007\u001a\u00020\bH\u0016J\b\u0010\t\u001a\u00020\nH$R\u0014\u0010\u0002\u001a\u00020\u0003X\u0084\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\f"}, d2 = {"Lkotlin/time/AbstractDoubleTimeSource;", "Lkotlin/time/TimeSource;", "unit", "Lkotlin/time/DurationUnit;", "(Lkotlin/time/DurationUnit;)V", "getUnit", "()Lkotlin/time/DurationUnit;", "markNow", "Lkotlin/time/TimeMark;", "read", "", "DoubleTimeMark", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class AbstractDoubleTimeSource implements kotlin.time.TimeSource {
    private final kotlin.time.DurationUnit unit;

    @kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\b\u0002\u0018\u00002\u00020\u0001B \u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007ø\u0001\u0000¢\u0006\u0002\u0010\bJ\u0015\u0010\n\u001a\u00020\u0007H\u0016ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u000b\u0010\fJ\u001b\u0010\r\u001a\u00020\u00012\u0006\u0010\u000e\u001a\u00020\u0007H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b\u000f\u0010\u0010R\u0016\u0010\u0006\u001a\u00020\u0007X\u0082\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\n\u0002\u0010\tR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u0011"}, d2 = {"Lkotlin/time/AbstractDoubleTimeSource$DoubleTimeMark;", "Lkotlin/time/TimeMark;", "startedAt", "", "timeSource", "Lkotlin/time/AbstractDoubleTimeSource;", "offset", "Lkotlin/time/Duration;", "(DLkotlin/time/AbstractDoubleTimeSource;JLkotlin/jvm/internal/DefaultConstructorMarker;)V", "J", "elapsedNow", "elapsedNow-UwyO8pc", "()J", "plus", "duration", "plus-LRDsOJo", "(J)Lkotlin/time/TimeMark;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    private static final class DoubleTimeMark extends kotlin.time.TimeMark {
        private final long offset;
        private final double startedAt;
        private final kotlin.time.AbstractDoubleTimeSource timeSource;

        private DoubleTimeMark(double r1, kotlin.time.AbstractDoubleTimeSource r3, long r4) {
                r0 = this;
                r0.<init>()
                r0.startedAt = r1
                r0.timeSource = r3
                r0.offset = r4
                return
        }

        public DoubleTimeMark(double r1, kotlin.time.AbstractDoubleTimeSource r3, long r4, kotlin.jvm.internal.DefaultConstructorMarker r6) {
                r0 = this;
                r0.<init>(r1, r3, r4)
                return
        }

        @Override
        public long elapsedNow-UwyO8pc() {
                r4 = this;
                kotlin.time.AbstractDoubleTimeSource r0 = r4.timeSource
                double r0 = r0.read()
                double r2 = r4.startedAt
                double r0 = r0 - r2
                kotlin.time.AbstractDoubleTimeSource r2 = r4.timeSource
                kotlin.time.DurationUnit r2 = r2.getUnit()
                long r0 = kotlin.time.DurationKt.toDuration(r0, r2)
                long r2 = r4.offset
                long r0 = kotlin.time.Duration.minus-LRDsOJo(r0, r2)
                return r0
        }

        @Override
        public kotlin.time.TimeMark plus-LRDsOJo(long r9) {
                r8 = this;
                kotlin.time.AbstractDoubleTimeSource$DoubleTimeMark r7 = new kotlin.time.AbstractDoubleTimeSource$DoubleTimeMark
                double r1 = r8.startedAt
                kotlin.time.AbstractDoubleTimeSource r3 = r8.timeSource
                long r4 = r8.offset
                long r4 = kotlin.time.Duration.plus-LRDsOJo(r4, r9)
                r6 = 0
                r0 = r7
                r0.<init>(r1, r3, r4, r6)
                kotlin.time.TimeMark r7 = (kotlin.time.TimeMark) r7
                return r7
        }
    }

    public AbstractDoubleTimeSource(kotlin.time.DurationUnit r2) {
            r1 = this;
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.unit = r2
            return
    }

    protected final kotlin.time.DurationUnit getUnit() {
            r1 = this;
            kotlin.time.DurationUnit r0 = r1.unit
            return r0
    }

    @Override
    public kotlin.time.TimeMark markNow() {
            r8 = this;
            kotlin.time.AbstractDoubleTimeSource$DoubleTimeMark r7 = new kotlin.time.AbstractDoubleTimeSource$DoubleTimeMark
            double r1 = r8.read()
            kotlin.time.Duration$Companion r0 = kotlin.time.Duration.Companion
            long r4 = r0.getZERO-UwyO8pc()
            r6 = 0
            r0 = r7
            r3 = r8
            r0.<init>(r1, r3, r4, r6)
            kotlin.time.TimeMark r7 = (kotlin.time.TimeMark) r7
            return r7
    }

    protected abstract double read();
}
