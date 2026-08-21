package kotlin.collections;

@kotlin.Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0010 \n\u0000\n\u0002\u0010!\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0005\u001a\u001c\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0001\u001a#\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0003\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0003H\u0007¢\u0006\u0002\b\u0004\u001a\u001d\u0010\u0005\u001a\u00020\u0006*\u0006\u0012\u0002\b\u00030\u00012\u0006\u0010\u0007\u001a\u00020\u0006H\u0002¢\u0006\u0002\b\b\u001a\u001d\u0010\t\u001a\u00020\u0006*\u0006\u0012\u0002\b\u00030\u00012\u0006\u0010\u0007\u001a\u00020\u0006H\u0002¢\u0006\u0002\b\n¨\u0006\u000b"}, d2 = {"asReversed", "", "T", "", "asReversedMutable", "reverseElementIndex", "", "index", "reverseElementIndex$CollectionsKt__ReversedViewsKt", "reversePositionIndex", "reversePositionIndex$CollectionsKt__ReversedViewsKt", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/collections/CollectionsKt")
class CollectionsKt__ReversedViewsKt extends kotlin.collections.CollectionsKt__MutableCollectionsKt {
    public CollectionsKt__ReversedViewsKt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final int access$reverseElementIndex(java.util.List r0, int r1) {
            int r0 = reverseElementIndex$CollectionsKt__ReversedViewsKt(r0, r1)
            return r0
    }

    public static final int access$reversePositionIndex(java.util.List r0, int r1) {
            int r0 = reversePositionIndex$CollectionsKt__ReversedViewsKt(r0, r1)
            return r0
    }

    public static final <T> java.util.List<T> asReversed(java.util.List<? extends T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.collections.ReversedListReadOnly r0 = new kotlin.collections.ReversedListReadOnly
            r0.<init>(r1)
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    public static final <T> java.util.List<T> asReversedMutable(java.util.List<T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.collections.ReversedList r0 = new kotlin.collections.ReversedList
            r0.<init>(r1)
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    private static final int reverseElementIndex$CollectionsKt__ReversedViewsKt(java.util.List<?> r4, int r5) {
            r0 = 0
            if (r5 < 0) goto Lb
            int r1 = kotlin.collections.CollectionsKt.getLastIndex(r4)
            if (r5 > r1) goto Lb
            r1 = 1
            goto Lc
        Lb:
            r1 = r0
        Lc:
            if (r1 == 0) goto L14
            int r4 = kotlin.collections.CollectionsKt.getLastIndex(r4)
            int r4 = r4 - r5
            return r4
        L14:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Element index "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = " must be in range ["
            r2.append(r5)
            kotlin.ranges.IntRange r5 = new kotlin.ranges.IntRange
            int r4 = kotlin.collections.CollectionsKt.getLastIndex(r4)
            r5.<init>(r0, r4)
            r2.append(r5)
            java.lang.String r4 = "]."
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            throw r1
    }

    private static final int reversePositionIndex$CollectionsKt__ReversedViewsKt(java.util.List<?> r4, int r5) {
            r0 = 0
            if (r5 < 0) goto Lb
            int r1 = r4.size()
            if (r5 > r1) goto Lb
            r1 = 1
            goto Lc
        Lb:
            r1 = r0
        Lc:
            if (r1 == 0) goto L14
            int r4 = r4.size()
            int r4 = r4 - r5
            return r4
        L14:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Position index "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = " must be in range ["
            r2.append(r5)
            kotlin.ranges.IntRange r5 = new kotlin.ranges.IntRange
            int r4 = r4.size()
            r5.<init>(r0, r4)
            r2.append(r5)
            java.lang.String r4 = "]."
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            throw r1
    }
}
