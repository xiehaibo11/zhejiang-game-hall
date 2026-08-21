package kotlin.jvm.internal;

@kotlin.Metadata(d1 = {"\u0000F\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0019\n\u0002\u0018\u0002\n\u0002\u0010\u0013\n\u0002\u0018\u0002\n\u0002\u0010\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0015\n\u0002\u0018\u0002\n\u0002\u0010\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0017\n\u0000\u001a\u000e\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003\u001a\u000e\u0010\u0000\u001a\u00020\u00042\u0006\u0010\u0002\u001a\u00020\u0005\u001a\u000e\u0010\u0000\u001a\u00020\u00062\u0006\u0010\u0002\u001a\u00020\u0007\u001a\u000e\u0010\u0000\u001a\u00020\b2\u0006\u0010\u0002\u001a\u00020\t\u001a\u000e\u0010\u0000\u001a\u00020\n2\u0006\u0010\u0002\u001a\u00020\u000b\u001a\u000e\u0010\u0000\u001a\u00020\f2\u0006\u0010\u0002\u001a\u00020\r\u001a\u000e\u0010\u0000\u001a\u00020\u000e2\u0006\u0010\u0002\u001a\u00020\u000f\u001a\u000e\u0010\u0000\u001a\u00020\u00102\u0006\u0010\u0002\u001a\u00020\u0011¨\u0006\u0012"}, d2 = {"iterator", "Lkotlin/collections/BooleanIterator;", "array", "", "Lkotlin/collections/ByteIterator;", "", "Lkotlin/collections/CharIterator;", "", "Lkotlin/collections/DoubleIterator;", "", "Lkotlin/collections/FloatIterator;", "", "Lkotlin/collections/IntIterator;", "", "Lkotlin/collections/LongIterator;", "", "Lkotlin/collections/ShortIterator;", "", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class ArrayIteratorsKt {
    public static final kotlin.collections.BooleanIterator iterator(boolean[] r1) {
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ArrayBooleanIterator r0 = new kotlin.jvm.internal.ArrayBooleanIterator
            r0.<init>(r1)
            kotlin.collections.BooleanIterator r0 = (kotlin.collections.BooleanIterator) r0
            return r0
    }

    public static final kotlin.collections.ByteIterator iterator(byte[] r1) {
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ArrayByteIterator r0 = new kotlin.jvm.internal.ArrayByteIterator
            r0.<init>(r1)
            kotlin.collections.ByteIterator r0 = (kotlin.collections.ByteIterator) r0
            return r0
    }

    public static final kotlin.collections.CharIterator iterator(char[] r1) {
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ArrayCharIterator r0 = new kotlin.jvm.internal.ArrayCharIterator
            r0.<init>(r1)
            kotlin.collections.CharIterator r0 = (kotlin.collections.CharIterator) r0
            return r0
    }

    public static final kotlin.collections.DoubleIterator iterator(double[] r1) {
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ArrayDoubleIterator r0 = new kotlin.jvm.internal.ArrayDoubleIterator
            r0.<init>(r1)
            kotlin.collections.DoubleIterator r0 = (kotlin.collections.DoubleIterator) r0
            return r0
    }

    public static final kotlin.collections.FloatIterator iterator(float[] r1) {
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ArrayFloatIterator r0 = new kotlin.jvm.internal.ArrayFloatIterator
            r0.<init>(r1)
            kotlin.collections.FloatIterator r0 = (kotlin.collections.FloatIterator) r0
            return r0
    }

    public static final kotlin.collections.IntIterator iterator(int[] r1) {
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ArrayIntIterator r0 = new kotlin.jvm.internal.ArrayIntIterator
            r0.<init>(r1)
            kotlin.collections.IntIterator r0 = (kotlin.collections.IntIterator) r0
            return r0
    }

    public static final kotlin.collections.LongIterator iterator(long[] r1) {
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ArrayLongIterator r0 = new kotlin.jvm.internal.ArrayLongIterator
            r0.<init>(r1)
            kotlin.collections.LongIterator r0 = (kotlin.collections.LongIterator) r0
            return r0
    }

    public static final kotlin.collections.ShortIterator iterator(short[] r1) {
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ArrayShortIterator r0 = new kotlin.jvm.internal.ArrayShortIterator
            r0.<init>(r1)
            kotlin.collections.ShortIterator r0 = (kotlin.collections.ShortIterator) r0
            return r0
    }
}
