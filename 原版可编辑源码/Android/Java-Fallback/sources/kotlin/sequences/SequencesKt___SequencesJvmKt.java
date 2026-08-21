package kotlin.sequences;

@kotlin.Metadata(d1 = {"\u0000D\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u001f\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000f\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u001a(\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\u0006\u0012\u0002\b\u00030\u00012\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0004\u001aA\u0010\u0005\u001a\u0002H\u0006\"\u0010\b\u0000\u0010\u0006*\n\u0012\u0006\b\u0000\u0012\u0002H\u00020\u0007\"\u0004\b\u0001\u0010\u0002*\u0006\u0012\u0002\b\u00030\u00012\u0006\u0010\b\u001a\u0002H\u00062\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0004¢\u0006\u0002\u0010\t\u001a5\u0010\n\u001a\u00020\u000b\"\u0004\b\u0000\u0010\f*\b\u0012\u0004\u0012\u0002H\f0\u00012\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u0002H\f\u0012\u0004\u0012\u00020\u000b0\u000eH\u0087\bø\u0001\u0000¢\u0006\u0002\b\u000f\u001a5\u0010\n\u001a\u00020\u0010\"\u0004\b\u0000\u0010\f*\b\u0012\u0004\u0012\u0002H\f0\u00012\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u0002H\f\u0012\u0004\u0012\u00020\u00100\u000eH\u0087\bø\u0001\u0000¢\u0006\u0002\b\u0011\u001a&\u0010\u0012\u001a\b\u0012\u0004\u0012\u0002H\f0\u0013\"\u000e\b\u0000\u0010\f*\b\u0012\u0004\u0012\u0002H\f0\u0014*\b\u0012\u0004\u0012\u0002H\f0\u0001\u001a8\u0010\u0012\u001a\b\u0012\u0004\u0012\u0002H\f0\u0013\"\u0004\b\u0000\u0010\f*\b\u0012\u0004\u0012\u0002H\f0\u00012\u001a\u0010\u0015\u001a\u0016\u0012\u0006\b\u0000\u0012\u0002H\f0\u0016j\n\u0012\u0006\b\u0000\u0012\u0002H\f`\u0017\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u0018"}, d2 = {"filterIsInstance", "Lkotlin/sequences/Sequence;", "R", "klass", "Ljava/lang/Class;", "filterIsInstanceTo", "C", "", "destination", "(Lkotlin/sequences/Sequence;Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;", "sumOf", "Ljava/math/BigDecimal;", "T", "selector", "Lkotlin/Function1;", "sumOfBigDecimal", "Ljava/math/BigInteger;", "sumOfBigInteger", "toSortedSet", "Ljava/util/SortedSet;", "", "comparator", "Ljava/util/Comparator;", "Lkotlin/Comparator;", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/sequences/SequencesKt")
class SequencesKt___SequencesJvmKt extends kotlin.sequences.SequencesKt__SequencesKt {


    public SequencesKt___SequencesJvmKt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final <R> kotlin.sequences.Sequence<R> filterIsInstance(kotlin.sequences.Sequence<?> r1, java.lang.Class<R> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "klass"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.sequences.SequencesKt___SequencesJvmKt$filterIsInstance$1 r0 = new kotlin.sequences.SequencesKt___SequencesJvmKt$filterIsInstance$1
            r0.<init>(r2)
            kotlin.jvm.functions.Function1 r0 = (kotlin.jvm.functions.Function1) r0
            kotlin.sequences.Sequence r1 = kotlin.sequences.SequencesKt.filter(r1, r0)
            return r1
    }

    public static final <C extends java.util.Collection<? super R>, R> C filterIsInstanceTo(kotlin.sequences.Sequence<?> r2, C r3, java.lang.Class<R> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "destination"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "klass"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.util.Iterator r2 = r2.iterator()
        L13:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L27
            java.lang.Object r0 = r2.next()
            boolean r1 = r4.isInstance(r0)
            if (r1 == 0) goto L13
            r3.add(r0)
            goto L13
        L27:
            return r3
    }

    private static final <T> java.math.BigDecimal sumOfBigDecimal(kotlin.sequences.Sequence<? extends T> r2, kotlin.jvm.functions.Function1<? super T, ? extends java.math.BigDecimal> r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.util.Iterator r2 = r2.iterator()
        L19:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r2.next()
            java.lang.Object r1 = r3.invoke(r1)
            java.math.BigDecimal r1 = (java.math.BigDecimal) r1
            java.math.BigDecimal r0 = r0.add(r1)
            java.lang.String r1 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            goto L19
        L33:
            return r0
    }

    private static final <T> java.math.BigInteger sumOfBigInteger(kotlin.sequences.Sequence<? extends T> r2, kotlin.jvm.functions.Function1<? super T, ? extends java.math.BigInteger> r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.util.Iterator r2 = r2.iterator()
        L19:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r2.next()
            java.lang.Object r1 = r3.invoke(r1)
            java.math.BigInteger r1 = (java.math.BigInteger) r1
            java.math.BigInteger r0 = r0.add(r1)
            java.lang.String r1 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            goto L19
        L33:
            return r0
    }

    public static final <T extends java.lang.Comparable<? super T>> java.util.SortedSet<T> toSortedSet(kotlin.sequences.Sequence<? extends T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.TreeSet r0 = new java.util.TreeSet
            r0.<init>()
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Collection r1 = kotlin.sequences.SequencesKt.toCollection(r1, r0)
            java.util.SortedSet r1 = (java.util.SortedSet) r1
            return r1
    }

    public static final <T> java.util.SortedSet<T> toSortedSet(kotlin.sequences.Sequence<? extends T> r1, java.util.Comparator<? super T> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "comparator"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.TreeSet r0 = new java.util.TreeSet
            r0.<init>(r2)
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Collection r1 = kotlin.sequences.SequencesKt.toCollection(r1, r0)
            java.util.SortedSet r1 = (java.util.SortedSet) r1
            return r1
    }
}
