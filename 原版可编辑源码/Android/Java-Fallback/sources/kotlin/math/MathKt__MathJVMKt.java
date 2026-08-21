package kotlin.math;

@kotlin.Metadata(d1 = {"\u0000\"\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0004\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b7\u001a\u0011\u0010\u0016\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010\u0016\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010\u0016\u001a\u00020\t2\u0006\u0010\u0018\u001a\u00020\tH\u0087\b\u001a\u0011\u0010\u0016\u001a\u00020\f2\u0006\u0010\u0018\u001a\u00020\fH\u0087\b\u001a\u0011\u0010\u0019\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010\u0019\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0010\u0010\u001a\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0007\u001a\u0011\u0010\u001a\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010\u001b\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010\u001b\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0010\u0010\u001c\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0007\u001a\u0011\u0010\u001c\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010\u001d\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010\u001d\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0019\u0010\u001e\u001a\u00020\u00012\u0006\u0010\u001f\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0019\u0010\u001e\u001a\u00020\u00062\u0006\u0010\u001f\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0010\u0010 \u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0007\u001a\u0011\u0010 \u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010!\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010!\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010\"\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010\"\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010#\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010#\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010$\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010$\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010%\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010%\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010&\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010&\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0019\u0010'\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u00012\u0006\u0010\u001f\u001a\u00020\u0001H\u0087\b\u001a\u0019\u0010'\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u00062\u0006\u0010\u001f\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010(\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010(\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010)\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010)\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0018\u0010*\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u00012\u0006\u0010+\u001a\u00020\u0001H\u0007\u001a\u0018\u0010*\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u00062\u0006\u0010+\u001a\u00020\u0006H\u0007\u001a\u0011\u0010,\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010,\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0010\u0010-\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0007\u001a\u0010\u0010-\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0007\u001a\u0019\u0010.\u001a\u00020\u00012\u0006\u0010/\u001a\u00020\u00012\u0006\u00100\u001a\u00020\u0001H\u0087\b\u001a\u0019\u0010.\u001a\u00020\u00062\u0006\u0010/\u001a\u00020\u00062\u0006\u00100\u001a\u00020\u0006H\u0087\b\u001a\u0019\u0010.\u001a\u00020\t2\u0006\u0010/\u001a\u00020\t2\u0006\u00100\u001a\u00020\tH\u0087\b\u001a\u0019\u0010.\u001a\u00020\f2\u0006\u0010/\u001a\u00020\f2\u0006\u00100\u001a\u00020\fH\u0087\b\u001a\u0019\u00101\u001a\u00020\u00012\u0006\u0010/\u001a\u00020\u00012\u0006\u00100\u001a\u00020\u0001H\u0087\b\u001a\u0019\u00101\u001a\u00020\u00062\u0006\u0010/\u001a\u00020\u00062\u0006\u00100\u001a\u00020\u0006H\u0087\b\u001a\u0019\u00101\u001a\u00020\t2\u0006\u0010/\u001a\u00020\t2\u0006\u00100\u001a\u00020\tH\u0087\b\u001a\u0019\u00101\u001a\u00020\f2\u0006\u0010/\u001a\u00020\f2\u0006\u00100\u001a\u00020\fH\u0087\b\u001a\u0011\u00102\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u00102\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u0010\u000f\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u0010\u000f\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u00103\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u00103\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u00104\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u00104\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u00105\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u00105\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u00106\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u00106\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0011\u00107\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0011\u00107\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0010\u00108\u001a\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0007\u001a\u0010\u00108\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0007\u001a\u0015\u00109\u001a\u00020\u0001*\u00020\u00012\u0006\u0010:\u001a\u00020\u0001H\u0087\b\u001a\u0015\u00109\u001a\u00020\u0006*\u00020\u00062\u0006\u0010:\u001a\u00020\u0006H\u0087\b\u001a\r\u0010;\u001a\u00020\u0001*\u00020\u0001H\u0087\b\u001a\r\u0010;\u001a\u00020\u0006*\u00020\u0006H\u0087\b\u001a\u0015\u0010<\u001a\u00020\u0001*\u00020\u00012\u0006\u0010=\u001a\u00020\u0001H\u0087\b\u001a\u0015\u0010<\u001a\u00020\u0006*\u00020\u00062\u0006\u0010=\u001a\u00020\u0006H\u0087\b\u001a\r\u0010>\u001a\u00020\u0001*\u00020\u0001H\u0087\b\u001a\r\u0010>\u001a\u00020\u0006*\u00020\u0006H\u0087\b\u001a\u0015\u0010?\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0017\u001a\u00020\u0001H\u0087\b\u001a\u0015\u0010?\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0018\u001a\u00020\tH\u0087\b\u001a\u0015\u0010?\u001a\u00020\u0006*\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0087\b\u001a\u0015\u0010?\u001a\u00020\u0006*\u00020\u00062\u0006\u0010\u0018\u001a\u00020\tH\u0087\b\u001a\f\u0010@\u001a\u00020\t*\u00020\u0001H\u0007\u001a\f\u0010@\u001a\u00020\t*\u00020\u0006H\u0007\u001a\f\u0010A\u001a\u00020\f*\u00020\u0001H\u0007\u001a\f\u0010A\u001a\u00020\f*\u00020\u0006H\u0007\u001a\u0015\u0010B\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u000f\u001a\u00020\u0001H\u0087\b\u001a\u0015\u0010B\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u000f\u001a\u00020\tH\u0087\b\u001a\u0015\u0010B\u001a\u00020\u0006*\u00020\u00062\u0006\u0010\u000f\u001a\u00020\u0006H\u0087\b\u001a\u0015\u0010B\u001a\u00020\u0006*\u00020\u00062\u0006\u0010\u000f\u001a\u00020\tH\u0087\b\"\u001f\u0010\u0000\u001a\u00020\u0001*\u00020\u00018Æ\u0002X\u0087\u0004¢\u0006\f\u0012\u0004\b\u0002\u0010\u0003\u001a\u0004\b\u0004\u0010\u0005\"\u001f\u0010\u0000\u001a\u00020\u0006*\u00020\u00068Æ\u0002X\u0087\u0004¢\u0006\f\u0012\u0004\b\u0002\u0010\u0007\u001a\u0004\b\u0004\u0010\b\"\u001f\u0010\u0000\u001a\u00020\t*\u00020\t8Æ\u0002X\u0087\u0004¢\u0006\f\u0012\u0004\b\u0002\u0010\n\u001a\u0004\b\u0004\u0010\u000b\"\u001f\u0010\u0000\u001a\u00020\f*\u00020\f8Æ\u0002X\u0087\u0004¢\u0006\f\u0012\u0004\b\u0002\u0010\r\u001a\u0004\b\u0004\u0010\u000e\"\u001f\u0010\u000f\u001a\u00020\u0001*\u00020\u00018Æ\u0002X\u0087\u0004¢\u0006\f\u0012\u0004\b\u0010\u0010\u0003\u001a\u0004\b\u0011\u0010\u0005\"\u001f\u0010\u000f\u001a\u00020\u0006*\u00020\u00068Æ\u0002X\u0087\u0004¢\u0006\f\u0012\u0004\b\u0010\u0010\u0007\u001a\u0004\b\u0011\u0010\b\"\u001e\u0010\u000f\u001a\u00020\t*\u00020\t8FX\u0087\u0004¢\u0006\f\u0012\u0004\b\u0010\u0010\n\u001a\u0004\b\u0011\u0010\u000b\"\u001e\u0010\u000f\u001a\u00020\t*\u00020\f8FX\u0087\u0004¢\u0006\f\u0012\u0004\b\u0010\u0010\r\u001a\u0004\b\u0011\u0010\u0012\"\u001f\u0010\u0013\u001a\u00020\u0001*\u00020\u00018Æ\u0002X\u0087\u0004¢\u0006\f\u0012\u0004\b\u0014\u0010\u0003\u001a\u0004\b\u0015\u0010\u0005\"\u001f\u0010\u0013\u001a\u00020\u0006*\u00020\u00068Æ\u0002X\u0087\u0004¢\u0006\f\u0012\u0004\b\u0014\u0010\u0007\u001a\u0004\b\u0015\u0010\b¨\u0006C"}, d2 = {"absoluteValue", "", "getAbsoluteValue$annotations", "(D)V", "getAbsoluteValue", "(D)D", "", "(F)V", "(F)F", "", "(I)V", "(I)I", "", "(J)V", "(J)J", "sign", "getSign$annotations", "getSign", "(J)I", "ulp", "getUlp$annotations", "getUlp", "abs", "x", "n", "acos", "acosh", "asin", "asinh", "atan", "atan2", "y", "atanh", "ceil", "cos", "cosh", "exp", "expm1", "floor", "hypot", "ln", "ln1p", "log", "base", "log10", "log2", "max", "a", "b", "min", "round", "sin", "sinh", "sqrt", "tan", "tanh", "truncate", "IEEErem", "divisor", "nextDown", "nextTowards", "to", "nextUp", "pow", "roundToInt", "roundToLong", "withSign", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/math/MathKt")
class MathKt__MathJVMKt extends kotlin.math.MathKt__MathHKt {
    public MathKt__MathJVMKt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static final double IEEErem(double r0, double r2) {
            double r0 = java.lang.Math.IEEEremainder(r0, r2)
            return r0
    }

    private static final float IEEErem(float r2, float r3) {
            double r0 = (double) r2
            double r2 = (double) r3
            double r2 = java.lang.Math.IEEEremainder(r0, r2)
            float r2 = (float) r2
            return r2
    }

    private static final double abs(double r0) {
            double r0 = java.lang.Math.abs(r0)
            return r0
    }

    private static final float abs(float r0) {
            float r0 = java.lang.Math.abs(r0)
            return r0
    }

    private static final int abs(int r0) {
            int r0 = java.lang.Math.abs(r0)
            return r0
    }

    private static final long abs(long r0) {
            long r0 = java.lang.Math.abs(r0)
            return r0
    }

    private static final double acos(double r0) {
            double r0 = java.lang.Math.acos(r0)
            return r0
    }

    private static final float acos(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.acos(r0)
            float r2 = (float) r0
            return r2
    }

    public static final double acosh(double r6) {
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 >= 0) goto L9
            r6 = 9221120237041090560(0x7ff8000000000000, double:NaN)
            goto L47
        L9:
            double r0 = kotlin.math.Constants.upper_taylor_2_bound
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L17
            double r6 = java.lang.Math.log(r6)
            double r0 = kotlin.math.Constants.LN2
            double r6 = r6 + r0
            goto L47
        L17:
            r0 = 1
            double r0 = (double) r0
            double r2 = r6 - r0
            double r4 = kotlin.math.Constants.taylor_n_bound
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 < 0) goto L2e
            double r2 = r6 * r6
            double r2 = r2 - r0
            double r0 = java.lang.Math.sqrt(r2)
            double r6 = r6 + r0
            double r6 = java.lang.Math.log(r6)
            goto L47
        L2e:
            double r6 = java.lang.Math.sqrt(r2)
            double r0 = kotlin.math.Constants.taylor_2_bound
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 < 0) goto L40
            double r0 = r6 * r6
            double r0 = r0 * r6
            r2 = 12
            double r2 = (double) r2
            double r0 = r0 / r2
            double r6 = r6 - r0
        L40:
            r0 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r0 = java.lang.Math.sqrt(r0)
            double r6 = r6 * r0
        L47:
            return r6
    }

    private static final float acosh(float r2) {
            double r0 = (double) r2
            double r0 = kotlin.math.MathKt.acosh(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double asin(double r0) {
            double r0 = java.lang.Math.asin(r0)
            return r0
    }

    private static final float asin(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.asin(r0)
            float r2 = (float) r0
            return r2
    }

    public static final double asinh(double r4) {
            double r0 = kotlin.math.Constants.taylor_n_bound
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L34
            double r0 = kotlin.math.Constants.upper_taylor_n_bound
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 1
            if (r0 <= 0) goto L26
            double r2 = kotlin.math.Constants.upper_taylor_2_bound
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1b
            double r4 = java.lang.Math.log(r4)
            double r0 = kotlin.math.Constants.LN2
            double r4 = r4 + r0
            goto L53
        L1b:
            r0 = 2
            double r2 = (double) r0
            double r4 = r4 * r2
            double r0 = (double) r1
            double r0 = r0 / r4
            double r4 = r4 + r0
            double r4 = java.lang.Math.log(r4)
            goto L53
        L26:
            double r2 = r4 * r4
            double r0 = (double) r1
            double r2 = r2 + r0
            double r0 = java.lang.Math.sqrt(r2)
            double r4 = r4 + r0
            double r4 = java.lang.Math.log(r4)
            goto L53
        L34:
            double r0 = kotlin.math.Constants.taylor_n_bound
            double r0 = -r0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 > 0) goto L42
            double r4 = -r4
            double r4 = kotlin.math.MathKt.asinh(r4)
            double r4 = -r4
            goto L53
        L42:
            double r0 = java.lang.Math.abs(r4)
            double r2 = kotlin.math.Constants.taylor_2_bound
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L53
            double r0 = r4 * r4
            double r0 = r0 * r4
            r2 = 6
            double r2 = (double) r2
            double r0 = r0 / r2
            double r4 = r4 - r0
        L53:
            return r4
    }

    private static final float asinh(float r2) {
            double r0 = (double) r2
            double r0 = kotlin.math.MathKt.asinh(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double atan(double r0) {
            double r0 = java.lang.Math.atan(r0)
            return r0
    }

    private static final float atan(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.atan(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double atan2(double r0, double r2) {
            double r0 = java.lang.Math.atan2(r0, r2)
            return r0
    }

    private static final float atan2(float r2, float r3) {
            double r0 = (double) r2
            double r2 = (double) r3
            double r2 = java.lang.Math.atan2(r0, r2)
            float r2 = (float) r2
            return r2
    }

    public static final double atanh(double r4) {
            double r0 = java.lang.Math.abs(r4)
            double r2 = kotlin.math.Constants.taylor_n_bound
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L1c
            double r0 = java.lang.Math.abs(r4)
            double r2 = kotlin.math.Constants.taylor_2_bound
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1b
            double r0 = r4 * r4
            double r0 = r0 * r4
            r2 = 3
            double r2 = (double) r2
            double r0 = r0 / r2
            double r4 = r4 + r0
        L1b:
            return r4
        L1c:
            r0 = 1
            double r0 = (double) r0
            double r2 = r0 + r4
            double r0 = r0 - r4
            double r2 = r2 / r0
            double r4 = java.lang.Math.log(r2)
            r0 = 2
            double r0 = (double) r0
            double r4 = r4 / r0
            return r4
    }

    private static final float atanh(float r2) {
            double r0 = (double) r2
            double r0 = kotlin.math.MathKt.atanh(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double ceil(double r0) {
            double r0 = java.lang.Math.ceil(r0)
            return r0
    }

    private static final float ceil(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.ceil(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double cos(double r0) {
            double r0 = java.lang.Math.cos(r0)
            return r0
    }

    private static final float cos(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.cos(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double cosh(double r0) {
            double r0 = java.lang.Math.cosh(r0)
            return r0
    }

    private static final float cosh(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.cosh(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double exp(double r0) {
            double r0 = java.lang.Math.exp(r0)
            return r0
    }

    private static final float exp(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.exp(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double expm1(double r0) {
            double r0 = java.lang.Math.expm1(r0)
            return r0
    }

    private static final float expm1(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.expm1(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double floor(double r0) {
            double r0 = java.lang.Math.floor(r0)
            return r0
    }

    private static final float floor(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.floor(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double getAbsoluteValue(double r0) {
            double r0 = java.lang.Math.abs(r0)
            return r0
    }

    private static final float getAbsoluteValue(float r0) {
            float r0 = java.lang.Math.abs(r0)
            return r0
    }

    private static final int getAbsoluteValue(int r0) {
            int r0 = java.lang.Math.abs(r0)
            return r0
    }

    private static final long getAbsoluteValue(long r0) {
            long r0 = java.lang.Math.abs(r0)
            return r0
    }

    public static void getAbsoluteValue$annotations(double r0) {
            return
    }

    public static void getAbsoluteValue$annotations(float r0) {
            return
    }

    public static void getAbsoluteValue$annotations(int r0) {
            return
    }

    public static void getAbsoluteValue$annotations(long r0) {
            return
    }

    private static final double getSign(double r0) {
            double r0 = java.lang.Math.signum(r0)
            return r0
    }

    private static final float getSign(float r0) {
            float r0 = java.lang.Math.signum(r0)
            return r0
    }

    public static final int getSign(int r0) {
            if (r0 >= 0) goto L4
            r0 = -1
            goto L9
        L4:
            if (r0 <= 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static final int getSign(long r2) {
            r0 = 0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 >= 0) goto L8
            r2 = -1
            goto Ld
        L8:
            if (r2 <= 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public static void getSign$annotations(double r0) {
            return
    }

    public static void getSign$annotations(float r0) {
            return
    }

    public static void getSign$annotations(int r0) {
            return
    }

    public static void getSign$annotations(long r0) {
            return
    }

    private static final double getUlp(double r0) {
            double r0 = java.lang.Math.ulp(r0)
            return r0
    }

    private static final float getUlp(float r0) {
            float r0 = java.lang.Math.ulp(r0)
            return r0
    }

    public static void getUlp$annotations(double r0) {
            return
    }

    public static void getUlp$annotations(float r0) {
            return
    }

    private static final double hypot(double r0, double r2) {
            double r0 = java.lang.Math.hypot(r0, r2)
            return r0
    }

    private static final float hypot(float r2, float r3) {
            double r0 = (double) r2
            double r2 = (double) r3
            double r2 = java.lang.Math.hypot(r0, r2)
            float r2 = (float) r2
            return r2
    }

    private static final double ln(double r0) {
            double r0 = java.lang.Math.log(r0)
            return r0
    }

    private static final float ln(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.log(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double ln1p(double r0) {
            double r0 = java.lang.Math.log1p(r0)
            return r0
    }

    private static final float ln1p(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.log1p(r0)
            float r2 = (float) r0
            return r2
    }

    public static final double log(double r2, double r4) {
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1c
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 != 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            if (r0 == 0) goto L12
            goto L1c
        L12:
            double r2 = java.lang.Math.log(r2)
            double r4 = java.lang.Math.log(r4)
            double r2 = r2 / r4
            return r2
        L1c:
            r2 = 9221120237041090560(0x7ff8000000000000, double:NaN)
            return r2
    }

    public static final float log(float r2, float r3) {
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1e
            r0 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r0 == 0) goto L11
            goto L1e
        L11:
            double r0 = (double) r2
            double r0 = java.lang.Math.log(r0)
            double r2 = (double) r3
            double r2 = java.lang.Math.log(r2)
            double r0 = r0 / r2
            float r2 = (float) r0
            return r2
        L1e:
            r2 = 2143289344(0x7fc00000, float:NaN)
            return r2
    }

    private static final double log10(double r0) {
            double r0 = java.lang.Math.log10(r0)
            return r0
    }

    private static final float log10(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.log10(r0)
            float r2 = (float) r0
            return r2
    }

    public static final double log2(double r2) {
            double r2 = java.lang.Math.log(r2)
            double r0 = kotlin.math.Constants.LN2
            double r2 = r2 / r0
            return r2
    }

    public static final float log2(float r4) {
            double r0 = (double) r4
            double r0 = java.lang.Math.log(r0)
            double r2 = kotlin.math.Constants.LN2
            double r0 = r0 / r2
            float r4 = (float) r0
            return r4
    }

    private static final double max(double r0, double r2) {
            double r0 = java.lang.Math.max(r0, r2)
            return r0
    }

    private static final float max(float r0, float r1) {
            float r0 = java.lang.Math.max(r0, r1)
            return r0
    }

    private static final int max(int r0, int r1) {
            int r0 = java.lang.Math.max(r0, r1)
            return r0
    }

    private static final long max(long r0, long r2) {
            long r0 = java.lang.Math.max(r0, r2)
            return r0
    }

    private static final double min(double r0, double r2) {
            double r0 = java.lang.Math.min(r0, r2)
            return r0
    }

    private static final float min(float r0, float r1) {
            float r0 = java.lang.Math.min(r0, r1)
            return r0
    }

    private static final int min(int r0, int r1) {
            int r0 = java.lang.Math.min(r0, r1)
            return r0
    }

    private static final long min(long r0, long r2) {
            long r0 = java.lang.Math.min(r0, r2)
            return r0
    }

    private static final double nextDown(double r2) {
            r0 = -4503599627370496(0xfff0000000000000, double:-Infinity)
            double r2 = java.lang.Math.nextAfter(r2, r0)
            return r2
    }

    private static final float nextDown(float r2) {
            r0 = -4503599627370496(0xfff0000000000000, double:-Infinity)
            float r2 = java.lang.Math.nextAfter(r2, r0)
            return r2
    }

    private static final double nextTowards(double r0, double r2) {
            double r0 = java.lang.Math.nextAfter(r0, r2)
            return r0
    }

    private static final float nextTowards(float r2, float r3) {
            double r0 = (double) r3
            float r2 = java.lang.Math.nextAfter(r2, r0)
            return r2
    }

    private static final double nextUp(double r0) {
            double r0 = java.lang.Math.nextUp(r0)
            return r0
    }

    private static final float nextUp(float r0) {
            float r0 = java.lang.Math.nextUp(r0)
            return r0
    }

    private static final double pow(double r0, double r2) {
            double r0 = java.lang.Math.pow(r0, r2)
            return r0
    }

    private static final double pow(double r2, int r4) {
            double r0 = (double) r4
            double r2 = java.lang.Math.pow(r2, r0)
            return r2
    }

    private static final float pow(float r2, float r3) {
            double r0 = (double) r2
            double r2 = (double) r3
            double r2 = java.lang.Math.pow(r0, r2)
            float r2 = (float) r2
            return r2
    }

    private static final float pow(float r2, int r3) {
            double r0 = (double) r2
            double r2 = (double) r3
            double r2 = java.lang.Math.pow(r0, r2)
            float r2 = (float) r2
            return r2
    }

    private static final double round(double r0) {
            double r0 = java.lang.Math.rint(r0)
            return r0
    }

    private static final float round(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.rint(r0)
            float r2 = (float) r0
            return r2
    }

    public static final int roundToInt(double r2) {
            boolean r0 = java.lang.Double.isNaN(r2)
            if (r0 != 0) goto L22
            r0 = 4746794007244308480(0x41dfffffffc00000, double:2.147483647E9)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L13
            r2 = 2147483647(0x7fffffff, float:NaN)
            goto L21
        L13:
            r0 = -4476578029606273024(0xc1e0000000000000, double:-2.147483648E9)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L1c
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            goto L21
        L1c:
            long r2 = java.lang.Math.round(r2)
            int r2 = (int) r2
        L21:
            return r2
        L22:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Cannot round NaN value."
            r2.<init>(r3)
            throw r2
    }

    public static final int roundToInt(float r1) {
            boolean r0 = java.lang.Float.isNaN(r1)
            if (r0 != 0) goto Lb
            int r1 = java.lang.Math.round(r1)
            return r1
        Lb:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Cannot round NaN value."
            r1.<init>(r0)
            throw r1
    }

    public static final long roundToLong(double r1) {
            boolean r0 = java.lang.Double.isNaN(r1)
            if (r0 != 0) goto Lb
            long r1 = java.lang.Math.round(r1)
            return r1
        Lb:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Cannot round NaN value."
            r1.<init>(r2)
            throw r1
    }

    public static final long roundToLong(float r2) {
            double r0 = (double) r2
            long r0 = kotlin.math.MathKt.roundToLong(r0)
            return r0
    }

    private static final double sign(double r0) {
            double r0 = java.lang.Math.signum(r0)
            return r0
    }

    private static final float sign(float r0) {
            float r0 = java.lang.Math.signum(r0)
            return r0
    }

    private static final double sin(double r0) {
            double r0 = java.lang.Math.sin(r0)
            return r0
    }

    private static final float sin(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.sin(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double sinh(double r0) {
            double r0 = java.lang.Math.sinh(r0)
            return r0
    }

    private static final float sinh(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.sinh(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double sqrt(double r0) {
            double r0 = java.lang.Math.sqrt(r0)
            return r0
    }

    private static final float sqrt(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.sqrt(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double tan(double r0) {
            double r0 = java.lang.Math.tan(r0)
            return r0
    }

    private static final float tan(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.tan(r0)
            float r2 = (float) r0
            return r2
    }

    private static final double tanh(double r0) {
            double r0 = java.lang.Math.tanh(r0)
            return r0
    }

    private static final float tanh(float r2) {
            double r0 = (double) r2
            double r0 = java.lang.Math.tanh(r0)
            float r2 = (float) r0
            return r2
    }

    public static final double truncate(double r2) {
            boolean r0 = java.lang.Double.isNaN(r2)
            if (r0 != 0) goto L1c
            boolean r0 = java.lang.Double.isInfinite(r2)
            if (r0 == 0) goto Ld
            goto L1c
        Ld:
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L18
            double r2 = java.lang.Math.floor(r2)
            goto L1c
        L18:
            double r2 = java.lang.Math.ceil(r2)
        L1c:
            return r2
    }

    public static final float truncate(float r2) {
            boolean r0 = java.lang.Float.isNaN(r2)
            if (r0 != 0) goto L1e
            boolean r0 = java.lang.Float.isInfinite(r2)
            if (r0 == 0) goto Ld
            goto L1e
        Ld:
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L18
            double r0 = (double) r2
            double r0 = java.lang.Math.floor(r0)
            goto L1d
        L18:
            double r0 = (double) r2
            double r0 = java.lang.Math.ceil(r0)
        L1d:
            float r2 = (float) r0
        L1e:
            return r2
    }

    private static final double withSign(double r0, double r2) {
            double r0 = java.lang.Math.copySign(r0, r2)
            return r0
    }

    private static final double withSign(double r2, int r4) {
            double r0 = (double) r4
            double r2 = java.lang.Math.copySign(r2, r0)
            return r2
    }

    private static final float withSign(float r0, float r1) {
            float r0 = java.lang.Math.copySign(r0, r1)
            return r0
    }

    private static final float withSign(float r0, int r1) {
            float r1 = (float) r1
            float r0 = java.lang.Math.copySign(r0, r1)
            return r0
    }
}
