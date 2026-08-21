package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000\"\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a/\u0010\u0000\u001a\u00020\u00012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003H\u0087\bø\u0001\u0000ø\u0001\u0001\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001¢\u0006\u0002\u0010\u0005\u001a3\u0010\u0006\u001a\b\u0012\u0004\u0012\u0002H\b0\u0007\"\u0004\b\u0000\u0010\b2\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u0002H\b0\u0003H\u0087\bø\u0001\u0001\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001\u001a3\u0010\u0000\u001a\u00020\u0001*\u00020\t2\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003H\u0087\bø\u0001\u0000ø\u0001\u0001\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001¢\u0006\u0002\u0010\n\u001a7\u0010\u0006\u001a\b\u0012\u0004\u0012\u0002H\b0\u0007\"\u0004\b\u0000\u0010\b*\u00020\t2\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u0002H\b0\u0003H\u0087\bø\u0001\u0001\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001\u0082\u0002\u000b\n\u0002\b\u0019\n\u0005\b\u009920\u0001¨\u0006\u000b"}, d2 = {"measureTime", "Lkotlin/time/Duration;", "block", "Lkotlin/Function0;", "", "(Lkotlin/jvm/functions/Function0;)J", "measureTimedValue", "Lkotlin/time/TimedValue;", "T", "Lkotlin/time/TimeSource;", "(Lkotlin/time/TimeSource;Lkotlin/jvm/functions/Function0;)J", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class MeasureTimeKt {
    public static final long measureTime(kotlin.jvm.functions.Function0<kotlin.Unit> r2) {
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.time.TimeSource$Monotonic r0 = kotlin.time.TimeSource.Monotonic.INSTANCE
            kotlin.time.TimeSource r0 = (kotlin.time.TimeSource) r0
            kotlin.time.TimeMark r0 = r0.markNow()
            r2.invoke()
            long r0 = r0.elapsedNow-UwyO8pc()
            return r0
    }

    public static final long measureTime(kotlin.time.TimeSource r1, kotlin.jvm.functions.Function0<kotlin.Unit> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.time.TimeMark r1 = r1.markNow()
            r2.invoke()
            long r1 = r1.elapsedNow-UwyO8pc()
            return r1
    }

    public static final <T> kotlin.time.TimedValue<T> measureTimedValue(kotlin.jvm.functions.Function0<? extends T> r4) {
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            kotlin.time.TimeSource$Monotonic r0 = kotlin.time.TimeSource.Monotonic.INSTANCE
            kotlin.time.TimeSource r0 = (kotlin.time.TimeSource) r0
            kotlin.time.TimeMark r0 = r0.markNow()
            java.lang.Object r4 = r4.invoke()
            kotlin.time.TimedValue r1 = new kotlin.time.TimedValue
            long r2 = r0.elapsedNow-UwyO8pc()
            r0 = 0
            r1.<init>(r4, r2, r0)
            return r1
    }

    public static final <T> kotlin.time.TimedValue<T> measureTimedValue(kotlin.time.TimeSource r3, kotlin.jvm.functions.Function0<? extends T> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            kotlin.time.TimeMark r3 = r3.markNow()
            java.lang.Object r4 = r4.invoke()
            kotlin.time.TimedValue r0 = new kotlin.time.TimedValue
            long r1 = r3.elapsedNow-UwyO8pc()
            r3 = 0
            r0.<init>(r4, r1, r3)
            return r0
    }
}
