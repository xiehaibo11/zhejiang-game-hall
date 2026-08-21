package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0007\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u001a\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0002ø\u0001\u0000¢\u0006\u0004\b\t\u0010\nJ\u001b\u0010\u000b\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0086\u0002ø\u0001\u0000¢\u0006\u0004\b\f\u0010\nJ\b\u0010\r\u001a\u00020\u0004H\u0014R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u000e"}, d2 = {"Lkotlin/time/TestTimeSource;", "Lkotlin/time/AbstractLongTimeSource;", "()V", "reading", "", "overflow", "", "duration", "Lkotlin/time/Duration;", "overflow-LRDsOJo", "(J)V", "plusAssign", "plusAssign-LRDsOJo", "read", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class TestTimeSource extends kotlin.time.AbstractLongTimeSource {
    private long reading;

    public TestTimeSource() {
            r1 = this;
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            r1.<init>(r0)
            return
    }

    private final void overflow-LRDsOJo(long r5) {
            r4 = this;
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "TestTimeSource will overflow if its reading "
            r1.append(r2)
            long r2 = r4.reading
            r1.append(r2)
            java.lang.String r2 = "ns is advanced by "
            r1.append(r2)
            java.lang.String r5 = kotlin.time.Duration.toString-impl(r5)
            r1.append(r5)
            r5 = 46
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    public final void plusAssign-LRDsOJo(long r9) {
            r8 = this;
            kotlin.time.DurationUnit r0 = r8.getUnit()
            long r0 = kotlin.time.Duration.toLong-impl(r9, r0)
            r2 = -9223372036854775808
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L2c
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L2c
            long r2 = r8.reading
            long r4 = r2 + r0
            long r0 = r0 ^ r2
            r6 = 0
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 < 0) goto L48
            long r0 = r2 ^ r4
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 >= 0) goto L48
            r8.overflow-LRDsOJo(r9)
            goto L48
        L2c:
            kotlin.time.DurationUnit r0 = r8.getUnit()
            double r0 = kotlin.time.Duration.toDouble-impl(r9, r0)
            long r2 = r8.reading
            double r2 = (double) r2
            double r2 = r2 + r0
            r0 = 4890909195324358656(0x43e0000000000000, double:9.223372036854776E18)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 > 0) goto L44
            r0 = -4332462841530417152(0xc3e0000000000000, double:-9.223372036854776E18)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L47
        L44:
            r8.overflow-LRDsOJo(r9)
        L47:
            long r4 = (long) r2
        L48:
            r8.reading = r4
            return
    }

    @Override
    protected long read() {
            r2 = this;
            long r0 = r2.reading
            return r0
    }
}
