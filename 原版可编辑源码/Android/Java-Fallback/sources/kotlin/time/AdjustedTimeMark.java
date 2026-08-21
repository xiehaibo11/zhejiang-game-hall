package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\r\b\u0003\u0018\u00002\u00020\u0001B\u0018\u0012\u0006\u0010\u0002\u001a\u00020\u0001\u0012\u0006\u0010\u0003\u001a\u00020\u0004ø\u0001\u0000¢\u0006\u0002\u0010\u0005J\u0015\u0010\u000b\u001a\u00020\u0004H\u0016ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\f\u0010\u0007J\u001b\u0010\r\u001a\u00020\u00012\u0006\u0010\u000e\u001a\u00020\u0004H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b\u000f\u0010\u0010R\u0019\u0010\u0003\u001a\u00020\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\b\u001a\u0004\b\u0006\u0010\u0007R\u0011\u0010\u0002\u001a\u00020\u0001¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u0011"}, d2 = {"Lkotlin/time/AdjustedTimeMark;", "Lkotlin/time/TimeMark;", "mark", "adjustment", "Lkotlin/time/Duration;", "(Lkotlin/time/TimeMark;JLkotlin/jvm/internal/DefaultConstructorMarker;)V", "getAdjustment-UwyO8pc", "()J", "J", "getMark", "()Lkotlin/time/TimeMark;", "elapsedNow", "elapsedNow-UwyO8pc", "plus", "duration", "plus-LRDsOJo", "(J)Lkotlin/time/TimeMark;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class AdjustedTimeMark extends kotlin.time.TimeMark {
    private final long adjustment;
    private final kotlin.time.TimeMark mark;

    private AdjustedTimeMark(kotlin.time.TimeMark r1, long r2) {
            r0 = this;
            r0.<init>()
            r0.mark = r1
            r0.adjustment = r2
            return
    }

    public AdjustedTimeMark(kotlin.time.TimeMark r1, long r2, kotlin.jvm.internal.DefaultConstructorMarker r4) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public long elapsedNow-UwyO8pc() {
            r4 = this;
            kotlin.time.TimeMark r0 = r4.mark
            long r0 = r0.elapsedNow-UwyO8pc()
            long r2 = r4.getAdjustment-UwyO8pc()
            long r0 = kotlin.time.Duration.minus-LRDsOJo(r0, r2)
            return r0
    }

    public final long getAdjustment-UwyO8pc() {
            r2 = this;
            long r0 = r2.adjustment
            return r0
    }

    public final kotlin.time.TimeMark getMark() {
            r1 = this;
            kotlin.time.TimeMark r0 = r1.mark
            return r0
    }

    @Override
    public kotlin.time.TimeMark plus-LRDsOJo(long r5) {
            r4 = this;
            kotlin.time.AdjustedTimeMark r0 = new kotlin.time.AdjustedTimeMark
            kotlin.time.TimeMark r1 = r4.mark
            long r2 = r4.getAdjustment-UwyO8pc()
            long r5 = kotlin.time.Duration.plus-LRDsOJo(r2, r5)
            r2 = 0
            r0.<init>(r1, r5, r2)
            kotlin.time.TimeMark r0 = (kotlin.time.TimeMark) r0
            return r0
    }
}
