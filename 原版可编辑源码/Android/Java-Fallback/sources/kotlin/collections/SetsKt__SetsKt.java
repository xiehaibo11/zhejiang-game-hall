package kotlin.collections;

@kotlin.Metadata(d1 = {"\u0000J\n\u0000\n\u0002\u0010\"\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010#\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0000\n\u0002\b\u0005\u001aN\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u00022\u0006\u0010\u0003\u001a\u00020\u00042\u001f\b\u0001\u0010\u0005\u001a\u0019\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0002\b\tH\u0087\bø\u0001\u0000\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0002 \u0001\u001aF\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u00022\u001f\b\u0001\u0010\u0005\u001a\u0019\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0002\b\tH\u0087\bø\u0001\u0000\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001\u001a\u0012\u0010\n\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0001\"\u0004\b\u0000\u0010\u000b\u001a\u001f\u0010\f\u001a\u0012\u0012\u0004\u0012\u0002H\u000b0\rj\b\u0012\u0004\u0012\u0002H\u000b`\u000e\"\u0004\b\u0000\u0010\u000bH\u0087\b\u001a5\u0010\f\u001a\u0012\u0012\u0004\u0012\u0002H\u000b0\rj\b\u0012\u0004\u0012\u0002H\u000b`\u000e\"\u0004\b\u0000\u0010\u000b2\u0012\u0010\u000f\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u000b0\u0010\"\u0002H\u000b¢\u0006\u0002\u0010\u0011\u001a\u001f\u0010\u0012\u001a\u0012\u0012\u0004\u0012\u0002H\u000b0\u0013j\b\u0012\u0004\u0012\u0002H\u000b`\u0014\"\u0004\b\u0000\u0010\u000bH\u0087\b\u001a5\u0010\u0012\u001a\u0012\u0012\u0004\u0012\u0002H\u000b0\u0013j\b\u0012\u0004\u0012\u0002H\u000b`\u0014\"\u0004\b\u0000\u0010\u000b2\u0012\u0010\u000f\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u000b0\u0010\"\u0002H\u000b¢\u0006\u0002\u0010\u0015\u001a\u0015\u0010\u0016\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0007\"\u0004\b\u0000\u0010\u000bH\u0087\b\u001a+\u0010\u0016\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0007\"\u0004\b\u0000\u0010\u000b2\u0012\u0010\u000f\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u000b0\u0010\"\u0002H\u000b¢\u0006\u0002\u0010\u0017\u001a\u0015\u0010\u0018\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0001\"\u0004\b\u0000\u0010\u000bH\u0087\b\u001a+\u0010\u0018\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0001\"\u0004\b\u0000\u0010\u000b2\u0012\u0010\u000f\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u000b0\u0010\"\u0002H\u000b¢\u0006\u0002\u0010\u0017\u001a'\u0010\u0019\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0001\"\b\b\u0000\u0010\u000b*\u00020\u001a2\b\u0010\u001b\u001a\u0004\u0018\u0001H\u000bH\u0007¢\u0006\u0002\u0010\u001c\u001a5\u0010\u0019\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0001\"\b\b\u0000\u0010\u000b*\u00020\u001a2\u0016\u0010\u000f\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u0001H\u000b0\u0010\"\u0004\u0018\u0001H\u000bH\u0007¢\u0006\u0002\u0010\u0017\u001a\u001e\u0010\u001d\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0001\"\u0004\b\u0000\u0010\u000b*\b\u0012\u0004\u0012\u0002H\u000b0\u0001H\u0000\u001a!\u0010\u001e\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0001\"\u0004\b\u0000\u0010\u000b*\n\u0012\u0004\u0012\u0002H\u000b\u0018\u00010\u0001H\u0087\b\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u001f"}, d2 = {"buildSet", "", "E", "capacity", "", "builderAction", "Lkotlin/Function1;", "", "", "Lkotlin/ExtensionFunctionType;", "emptySet", "T", "hashSetOf", "Ljava/util/HashSet;", "Lkotlin/collections/HashSet;", "elements", "", "([Ljava/lang/Object;)Ljava/util/HashSet;", "linkedSetOf", "Ljava/util/LinkedHashSet;", "Lkotlin/collections/LinkedHashSet;", "([Ljava/lang/Object;)Ljava/util/LinkedHashSet;", "mutableSetOf", "([Ljava/lang/Object;)Ljava/util/Set;", "setOf", "setOfNotNull", "", "element", "(Ljava/lang/Object;)Ljava/util/Set;", "optimizeReadOnlySet", "orEmpty", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/collections/SetsKt")
class SetsKt__SetsKt extends kotlin.collections.SetsKt__SetsJVMKt {
    public SetsKt__SetsKt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static final <E> java.util.Set<E> buildSet(int r1, kotlin.jvm.functions.Function1<? super java.util.Set<E>, kotlin.Unit> r2) {
            java.lang.String r0 = "builderAction"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.Set r1 = kotlin.collections.SetsKt.createSetBuilder(r1)
            r2.invoke(r1)
            java.util.Set r1 = kotlin.collections.SetsKt.build(r1)
            return r1
    }

    private static final <E> java.util.Set<E> buildSet(kotlin.jvm.functions.Function1<? super java.util.Set<E>, kotlin.Unit> r1) {
            java.lang.String r0 = "builderAction"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.Set r0 = kotlin.collections.SetsKt.createSetBuilder()
            r1.invoke(r0)
            java.util.Set r1 = kotlin.collections.SetsKt.build(r0)
            return r1
    }

    public static final <T> java.util.Set<T> emptySet() {
            kotlin.collections.EmptySet r0 = kotlin.collections.EmptySet.INSTANCE
            java.util.Set r0 = (java.util.Set) r0
            return r0
    }

    private static final <T> java.util.HashSet<T> hashSetOf() {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            return r0
    }

    public static final <T> java.util.HashSet<T> hashSetOf(T... r2) {
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.HashSet r0 = new java.util.HashSet
            int r1 = r2.length
            int r1 = kotlin.collections.MapsKt.mapCapacity(r1)
            r0.<init>(r1)
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Collection r2 = kotlin.collections.ArraysKt.toCollection(r2, r0)
            java.util.HashSet r2 = (java.util.HashSet) r2
            return r2
    }

    private static final <T> java.util.LinkedHashSet<T> linkedSetOf() {
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            return r0
    }

    public static final <T> java.util.LinkedHashSet<T> linkedSetOf(T... r2) {
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            int r1 = r2.length
            int r1 = kotlin.collections.MapsKt.mapCapacity(r1)
            r0.<init>(r1)
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Collection r2 = kotlin.collections.ArraysKt.toCollection(r2, r0)
            java.util.LinkedHashSet r2 = (java.util.LinkedHashSet) r2
            return r2
    }

    private static final <T> java.util.Set<T> mutableSetOf() {
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            java.util.Set r0 = (java.util.Set) r0
            return r0
    }

    public static final <T> java.util.Set<T> mutableSetOf(T... r2) {
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            int r1 = r2.length
            int r1 = kotlin.collections.MapsKt.mapCapacity(r1)
            r0.<init>(r1)
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Collection r2 = kotlin.collections.ArraysKt.toCollection(r2, r0)
            java.util.Set r2 = (java.util.Set) r2
            return r2
    }

    public static final <T> java.util.Set<T> optimizeReadOnlySet(java.util.Set<? extends T> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r2.size()
            if (r0 == 0) goto L1c
            r1 = 1
            if (r0 == r1) goto Lf
            goto L20
        Lf:
            java.util.Iterator r2 = r2.iterator()
            java.lang.Object r2 = r2.next()
            java.util.Set r2 = kotlin.collections.SetsKt.setOf(r2)
            goto L20
        L1c:
            java.util.Set r2 = kotlin.collections.SetsKt.emptySet()
        L20:
            return r2
    }

    private static final <T> java.util.Set<T> orEmpty(java.util.Set<? extends T> r0) {
            if (r0 != 0) goto L6
            java.util.Set r0 = kotlin.collections.SetsKt.emptySet()
        L6:
            return r0
    }

    private static final <T> java.util.Set<T> setOf() {
            java.util.Set r0 = kotlin.collections.SetsKt.emptySet()
            return r0
    }

    public static final <T> java.util.Set<T> setOf(T... r1) {
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r0 = r1.length
            if (r0 <= 0) goto Ld
            java.util.Set r1 = kotlin.collections.ArraysKt.toSet(r1)
            goto L11
        Ld:
            java.util.Set r1 = kotlin.collections.SetsKt.emptySet()
        L11:
            return r1
    }

    public static final <T> java.util.Set<T> setOfNotNull(T r0) {
            if (r0 == 0) goto L7
            java.util.Set r0 = kotlin.collections.SetsKt.setOf(r0)
            goto Lb
        L7:
            java.util.Set r0 = kotlin.collections.SetsKt.emptySet()
        Lb:
            return r0
    }

    public static final <T> java.util.Set<T> setOfNotNull(T... r1) {
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Collection r1 = kotlin.collections.ArraysKt.filterNotNullTo(r1, r0)
            java.util.Set r1 = (java.util.Set) r1
            return r1
    }
}
