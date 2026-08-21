package kotlin.collections;

@kotlin.Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0010\"\n\u0002\b\u0004\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\u001c\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a,\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\u0006\u0010\u0003\u001a\u0002H\u0002H\u0086\u0002¢\u0006\u0002\u0010\u0004\u001a4\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\u000e\u0010\u0005\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u00020\u0006H\u0086\u0002¢\u0006\u0002\u0010\u0007\u001a-\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u0002H\u00020\bH\u0086\u0002\u001a-\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u0002H\u00020\tH\u0086\u0002\u001a,\u0010\n\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\u0006\u0010\u0003\u001a\u0002H\u0002H\u0087\b¢\u0006\u0002\u0010\u0004\u001a,\u0010\u000b\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\u0006\u0010\u0003\u001a\u0002H\u0002H\u0086\u0002¢\u0006\u0002\u0010\u0004\u001a4\u0010\u000b\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\u000e\u0010\u0005\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u00020\u0006H\u0086\u0002¢\u0006\u0002\u0010\u0007\u001a-\u0010\u000b\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u0002H\u00020\bH\u0086\u0002\u001a-\u0010\u000b\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u0002H\u00020\tH\u0086\u0002\u001a,\u0010\f\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\u0006\u0010\u0003\u001a\u0002H\u0002H\u0087\b¢\u0006\u0002\u0010\u0004¨\u0006\r"}, d2 = {"minus", "", "T", "element", "(Ljava/util/Set;Ljava/lang/Object;)Ljava/util/Set;", "elements", "", "(Ljava/util/Set;[Ljava/lang/Object;)Ljava/util/Set;", "", "Lkotlin/sequences/Sequence;", "minusElement", "plus", "plusElement", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/collections/SetsKt")
class SetsKt___SetsKt extends kotlin.collections.SetsKt__SetsKt {
    public SetsKt___SetsKt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final <T> java.util.Set<T> minus(java.util.Set<? extends T> r3, java.lang.Iterable<? extends T> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = r3
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            java.util.Collection r4 = kotlin.collections.BrittleContainsOptimizationKt.convertToSetForSetOperationWith(r4, r0)
            boolean r1 = r4.isEmpty()
            if (r1 == 0) goto L1c
            java.util.Set r3 = kotlin.collections.CollectionsKt.toSet(r0)
            return r3
        L1c:
            boolean r1 = r4 instanceof java.util.Set
            if (r1 == 0) goto L42
            java.util.LinkedHashSet r3 = new java.util.LinkedHashSet
            r3.<init>()
            java.util.Collection r3 = (java.util.Collection) r3
            java.util.Iterator r0 = r0.iterator()
        L2b:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.next()
            boolean r2 = r4.contains(r1)
            if (r2 != 0) goto L2b
            r3.add(r1)
            goto L2b
        L3f:
            java.util.Set r3 = (java.util.Set) r3
            return r3
        L42:
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            java.util.Collection r3 = (java.util.Collection) r3
            r0.<init>(r3)
            r0.removeAll(r4)
            java.util.Set r0 = (java.util.Set) r0
            return r0
    }

    public static final <T> java.util.Set<T> minus(java.util.Set<? extends T> r6, T r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            int r1 = r6.size()
            int r1 = kotlin.collections.MapsKt.mapCapacity(r1)
            r0.<init>(r1)
            java.lang.Iterable r6 = (java.lang.Iterable) r6
            java.util.Iterator r6 = r6.iterator()
            r1 = 0
            r2 = r1
        L1a:
            boolean r3 = r6.hasNext()
            if (r3 == 0) goto L38
            java.lang.Object r3 = r6.next()
            r4 = 1
            if (r2 != 0) goto L2f
            boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r7)
            if (r5 == 0) goto L2f
            r2 = r4
            r4 = r1
        L2f:
            if (r4 == 0) goto L1a
            r4 = r0
            java.util.Collection r4 = (java.util.Collection) r4
            r4.add(r3)
            goto L1a
        L38:
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Set r0 = (java.util.Set) r0
            return r0
    }

    public static final <T> java.util.Set<T> minus(java.util.Set<? extends T> r1, kotlin.sequences.Sequence<? extends T> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            java.util.Collection r1 = (java.util.Collection) r1
            r0.<init>(r1)
            r1 = r0
            java.util.Collection r1 = (java.util.Collection) r1
            kotlin.collections.CollectionsKt.removeAll(r1, r2)
            java.util.Set r0 = (java.util.Set) r0
            return r0
    }

    public static final <T> java.util.Set<T> minus(java.util.Set<? extends T> r1, T[] r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            java.util.Collection r1 = (java.util.Collection) r1
            r0.<init>(r1)
            r1 = r0
            java.util.Collection r1 = (java.util.Collection) r1
            kotlin.collections.CollectionsKt.removeAll(r1, r2)
            java.util.Set r0 = (java.util.Set) r0
            return r0
    }

    private static final <T> java.util.Set<T> minusElement(java.util.Set<? extends T> r1, T r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.Set r1 = kotlin.collections.SetsKt.minus(r1, r2)
            return r1
    }

    public static final <T> java.util.Set<T> plus(java.util.Set<? extends T> r2, java.lang.Iterable<? extends T> r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.Integer r0 = kotlin.collections.CollectionsKt.collectionSizeOrNull(r3)
            if (r0 == 0) goto L1c
            java.lang.Number r0 = (java.lang.Number) r0
            int r0 = r0.intValue()
            int r1 = r2.size()
            int r1 = r1 + r0
            goto L22
        L1c:
            int r0 = r2.size()
            int r1 = r0 * 2
        L22:
            int r0 = kotlin.collections.MapsKt.mapCapacity(r1)
            java.util.LinkedHashSet r1 = new java.util.LinkedHashSet
            r1.<init>(r0)
            java.util.Collection r2 = (java.util.Collection) r2
            r1.addAll(r2)
            r2 = r1
            java.util.Collection r2 = (java.util.Collection) r2
            kotlin.collections.CollectionsKt.addAll(r2, r3)
            java.util.Set r1 = (java.util.Set) r1
            return r1
    }

    public static final <T> java.util.Set<T> plus(java.util.Set<? extends T> r2, T r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            int r1 = r2.size()
            int r1 = r1 + 1
            int r1 = kotlin.collections.MapsKt.mapCapacity(r1)
            r0.<init>(r1)
            java.util.Collection r2 = (java.util.Collection) r2
            r0.addAll(r2)
            r0.add(r3)
            java.util.Set r0 = (java.util.Set) r0
            return r0
    }

    public static final <T> java.util.Set<T> plus(java.util.Set<? extends T> r2, kotlin.sequences.Sequence<? extends T> r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            int r1 = r2.size()
            int r1 = r1 * 2
            int r1 = kotlin.collections.MapsKt.mapCapacity(r1)
            r0.<init>(r1)
            java.util.Collection r2 = (java.util.Collection) r2
            r0.addAll(r2)
            r2 = r0
            java.util.Collection r2 = (java.util.Collection) r2
            kotlin.collections.CollectionsKt.addAll(r2, r3)
            java.util.Set r0 = (java.util.Set) r0
            return r0
    }

    public static final <T> java.util.Set<T> plus(java.util.Set<? extends T> r3, T[] r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            int r1 = r3.size()
            int r2 = r4.length
            int r1 = r1 + r2
            int r1 = kotlin.collections.MapsKt.mapCapacity(r1)
            r0.<init>(r1)
            java.util.Collection r3 = (java.util.Collection) r3
            r0.addAll(r3)
            r3 = r0
            java.util.Collection r3 = (java.util.Collection) r3
            kotlin.collections.CollectionsKt.addAll(r3, r4)
            java.util.Set r0 = (java.util.Set) r0
            return r0
    }

    private static final <T> java.util.Set<T> plusElement(java.util.Set<? extends T> r1, T r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.Set r1 = kotlin.collections.SetsKt.plus(r1, r2)
            return r1
    }
}
