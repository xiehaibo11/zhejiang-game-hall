package kotlin.text;

@kotlin.Metadata(d1 = {"\u0000,\n\u0000\n\u0002\u0010\f\n\u0002\u0010\r\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u001a\u0015\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0004H\u0087\b\u001a)\u0010\u0005\u001a\u00020\u0006*\u00020\u00022\u0012\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00060\bH\u0087\bø\u0001\u0000¢\u0006\u0002\b\t\u001a)\u0010\u0005\u001a\u00020\n*\u00020\u00022\u0012\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\n0\bH\u0087\bø\u0001\u0000¢\u0006\u0002\b\u000b\u001a\u0010\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u00010\r*\u00020\u0002\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u000e"}, d2 = {"elementAt", "", "", "index", "", "sumOf", "Ljava/math/BigDecimal;", "selector", "Lkotlin/Function1;", "sumOfBigDecimal", "Ljava/math/BigInteger;", "sumOfBigInteger", "toSortedSet", "Ljava/util/SortedSet;", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/text/StringsKt")
class StringsKt___StringsJvmKt extends kotlin.text.StringsKt__StringsKt {
    public StringsKt___StringsJvmKt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static final char elementAt(java.lang.CharSequence r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            char r1 = r1.charAt(r2)
            return r1
    }

    private static final java.math.BigDecimal sumOfBigDecimal(java.lang.CharSequence r3, kotlin.jvm.functions.Function1<? super java.lang.Character, ? extends java.math.BigDecimal> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 0
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            r1 = 0
        L16:
            int r2 = r3.length()
            if (r1 >= r2) goto L36
            char r2 = r3.charAt(r1)
            java.lang.Character r2 = java.lang.Character.valueOf(r2)
            java.lang.Object r2 = r4.invoke(r2)
            java.math.BigDecimal r2 = (java.math.BigDecimal) r2
            java.math.BigDecimal r0 = r0.add(r2)
            java.lang.String r2 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r2)
            int r1 = r1 + 1
            goto L16
        L36:
            return r0
    }

    private static final java.math.BigInteger sumOfBigInteger(java.lang.CharSequence r3, kotlin.jvm.functions.Function1<? super java.lang.Character, ? extends java.math.BigInteger> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            r1 = 0
        L16:
            int r2 = r3.length()
            if (r1 >= r2) goto L36
            char r2 = r3.charAt(r1)
            java.lang.Character r2 = java.lang.Character.valueOf(r2)
            java.lang.Object r2 = r4.invoke(r2)
            java.math.BigInteger r2 = (java.math.BigInteger) r2
            java.math.BigInteger r0 = r0.add(r2)
            java.lang.String r2 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r2)
            int r1 = r1 + 1
            goto L16
        L36:
            return r0
    }

    public static final java.util.SortedSet<java.lang.Character> toSortedSet(java.lang.CharSequence r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.TreeSet r0 = new java.util.TreeSet
            r0.<init>()
            java.util.Collection r0 = (java.util.Collection) r0
            java.util.Collection r1 = kotlin.text.StringsKt.toCollection(r1, r0)
            java.util.SortedSet r1 = (java.util.SortedSet) r1
            return r1
    }
}
