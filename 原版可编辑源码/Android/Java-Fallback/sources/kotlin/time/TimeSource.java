package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bg\u0018\u0000 \u00042\u00020\u0001:\u0002\u0004\u0005J\b\u0010\u0002\u001a\u00020\u0003H&¨\u0006\u0006"}, d2 = {"Lkotlin/time/TimeSource;", "", "markNow", "Lkotlin/time/TimeMark;", "Companion", "Monotonic", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public interface TimeSource {
    public static final kotlin.time.TimeSource.Companion Companion = null;

    @kotlin.Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002¨\u0006\u0003"}, d2 = {"Lkotlin/time/TimeSource$Companion;", "", "()V", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        static final kotlin.time.TimeSource.Companion $$INSTANCE = null;

        static {
                kotlin.time.TimeSource$Companion r0 = new kotlin.time.TimeSource$Companion
                r0.<init>()
                kotlin.time.TimeSource.Companion.$$INSTANCE = r0
                return
        }

        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\t\u0010\u0003\u001a\u00020\u0004H\u0096\u0001J\b\u0010\u0005\u001a\u00020\u0006H\u0016¨\u0006\u0007"}, d2 = {"Lkotlin/time/TimeSource$Monotonic;", "Lkotlin/time/TimeSource;", "()V", "markNow", "Lkotlin/time/TimeMark;", "toString", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Monotonic implements kotlin.time.TimeSource {
        public static final kotlin.time.TimeSource.Monotonic INSTANCE = null;
        private final kotlin.time.MonotonicTimeSource $$delegate_0;

        static {
                kotlin.time.TimeSource$Monotonic r0 = new kotlin.time.TimeSource$Monotonic
                r0.<init>()
                kotlin.time.TimeSource.Monotonic.INSTANCE = r0
                return
        }

        private Monotonic() {
                r1 = this;
                r1.<init>()
                kotlin.time.MonotonicTimeSource r0 = kotlin.time.MonotonicTimeSource.INSTANCE
                r1.$$delegate_0 = r0
                return
        }

        @Override
        public kotlin.time.TimeMark markNow() {
                r1 = this;
                kotlin.time.MonotonicTimeSource r0 = r1.$$delegate_0
                kotlin.time.TimeMark r0 = r0.markNow()
                return r0
        }

        public java.lang.String toString() {
                r1 = this;
                kotlin.time.MonotonicTimeSource r0 = kotlin.time.MonotonicTimeSource.INSTANCE
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            kotlin.time.TimeSource$Companion r0 = kotlin.time.TimeSource.Companion.$$INSTANCE
            kotlin.time.TimeSource.Companion = r0
            return
    }

    kotlin.time.TimeMark markNow();
}
