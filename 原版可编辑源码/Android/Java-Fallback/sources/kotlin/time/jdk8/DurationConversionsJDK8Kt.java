package kotlin.time.jdk8;

@kotlin.Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\u001a\u001a\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u0003\u0010\u0004\u001a\u0015\u0010\u0005\u001a\u00020\u0002*\u00020\u0001H\u0087\bø\u0001\u0000¢\u0006\u0002\u0010\u0006\u0082\u0002\u000b\n\u0002\b\u0019\n\u0005\b¡\u001e0\u0001¨\u0006\u0007"}, d2 = {"toJavaDuration", "Ljava/time/Duration;", "Lkotlin/time/Duration;", "toJavaDuration-LRDsOJo", "(J)Ljava/time/Duration;", "toKotlinDuration", "(Ljava/time/Duration;)J", "kotlin-stdlib-jdk8"}, k = 2, mv = {1, 5, 1}, pn = "kotlin.time")
public final class DurationConversionsJDK8Kt {
    private static final java.time.Duration toJavaDuration-LRDsOJo(long r2) {
            long r0 = kotlin.time.Duration.getInWholeSeconds-impl(r2)
            int r2 = kotlin.time.Duration.getNanosecondsComponent-impl(r2)
            long r2 = (long) r2
            java.time.Duration r2 = java.time.Duration.ofSeconds(r0, r2)
            java.lang.String r3 = "toComponents { seconds, …, nanoseconds.toLong()) }"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            return r2
    }

    private static final long toKotlinDuration(java.time.Duration r4) {
            kotlin.time.Duration$Companion r0 = kotlin.time.Duration.Companion
            long r1 = r4.getSeconds()
            long r0 = r0.seconds-UwyO8pc(r1)
            kotlin.time.Duration$Companion r2 = kotlin.time.Duration.Companion
            int r4 = r4.getNano()
            long r2 = r2.nanoseconds-UwyO8pc(r4)
            long r0 = kotlin.time.Duration.plus-LRDsOJo(r0, r2)
            return r0
    }
}
