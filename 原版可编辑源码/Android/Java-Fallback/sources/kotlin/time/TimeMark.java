package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\b\b'\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0015\u0010\u0003\u001a\u00020\u0004H&ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u0005\u0010\u0006J\u0006\u0010\u0007\u001a\u00020\bJ\u0006\u0010\t\u001a\u00020\bJ\u001b\u0010\n\u001a\u00020\u00002\u0006\u0010\u000b\u001a\u00020\u0004H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b\f\u0010\rJ\u001b\u0010\u000e\u001a\u00020\u00002\u0006\u0010\u000b\u001a\u00020\u0004H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b\u000f\u0010\r\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u0010"}, d2 = {"Lkotlin/time/TimeMark;", "", "()V", "elapsedNow", "Lkotlin/time/Duration;", "elapsedNow-UwyO8pc", "()J", "hasNotPassedNow", "", "hasPassedNow", "minus", "duration", "minus-LRDsOJo", "(J)Lkotlin/time/TimeMark;", "plus", "plus-LRDsOJo", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class TimeMark {
    public TimeMark() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract long elapsedNow-UwyO8pc();

    public final boolean hasNotPassedNow() {
            r2 = this;
            long r0 = r2.elapsedNow-UwyO8pc()
            boolean r0 = kotlin.time.Duration.isNegative-impl(r0)
            return r0
    }

    public final boolean hasPassedNow() {
            r2 = this;
            long r0 = r2.elapsedNow-UwyO8pc()
            boolean r0 = kotlin.time.Duration.isNegative-impl(r0)
            r0 = r0 ^ 1
            return r0
    }

    public kotlin.time.TimeMark minus-LRDsOJo(long r1) {
            r0 = this;
            long r1 = kotlin.time.Duration.unaryMinus-UwyO8pc(r1)
            kotlin.time.TimeMark r1 = r0.plus-LRDsOJo(r1)
            return r1
    }

    public kotlin.time.TimeMark plus-LRDsOJo(long r3) {
            r2 = this;
            kotlin.time.AdjustedTimeMark r0 = new kotlin.time.AdjustedTimeMark
            r1 = 0
            r0.<init>(r2, r3, r1)
            kotlin.time.TimeMark r0 = (kotlin.time.TimeMark) r0
            return r0
    }
}
