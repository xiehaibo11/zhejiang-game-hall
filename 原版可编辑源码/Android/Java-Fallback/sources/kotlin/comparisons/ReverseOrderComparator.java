package kotlin.comparisons;

@kotlin.Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000f\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\bÂ\u0002\u0018\u00002\u001e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\u00020\u0001j\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\u0002`\u0004B\u0007\b\u0002¢\u0006\u0002\u0010\u0005J$\u0010\u0006\u001a\u00020\u00072\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00030\u00022\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00030\u0002H\u0016J\"\u0010\n\u001a\u001e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\u00020\u0001j\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\u0002`\u0004¨\u0006\u000b"}, d2 = {"Lkotlin/comparisons/ReverseOrderComparator;", "Ljava/util/Comparator;", "", "", "Lkotlin/Comparator;", "()V", "compare", "", "a", "b", "reversed", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class ReverseOrderComparator implements java.util.Comparator<java.lang.Comparable<? super java.lang.Object>> {
    public static final kotlin.comparisons.ReverseOrderComparator INSTANCE = null;

    static {
            kotlin.comparisons.ReverseOrderComparator r0 = new kotlin.comparisons.ReverseOrderComparator
            r0.<init>()
            kotlin.comparisons.ReverseOrderComparator.INSTANCE = r0
            return
    }

    private ReverseOrderComparator() {
            r0 = this;
            r0.<init>()
            return
    }

    public int compare(java.lang.Comparable<java.lang.Object> r2, java.lang.Comparable<java.lang.Object> r3) {
            r1 = this;
            java.lang.String r0 = "a"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "b"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r2 = r3.compareTo(r2)
            return r2
    }

    @Override
    public int compare(java.lang.Comparable<? super java.lang.Object> r1, java.lang.Comparable<? super java.lang.Object> r2) {
            r0 = this;
            java.lang.Comparable r1 = (java.lang.Comparable) r1
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            int r1 = r0.compare(r1, r2)
            return r1
    }

    @Override
    public final java.util.Comparator<java.lang.Comparable<? super java.lang.Object>> reversed() {
            r1 = this;
            kotlin.comparisons.NaturalOrderComparator r0 = kotlin.comparisons.NaturalOrderComparator.INSTANCE
            java.util.Comparator r0 = (java.util.Comparator) r0
            return r0
    }
}
