package kotlin.collections.unsigned;

@kotlin.Metadata(d1 = {"\u0000T\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0016\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\t\u001a\u001c\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\u0007ø\u0001\u0000¢\u0006\u0004\b\u0004\u0010\u0005\u001a\u001c\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00060\u0001*\u00020\u0007H\u0007ø\u0001\u0000¢\u0006\u0004\b\b\u0010\t\u001a\u001c\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\n0\u0001*\u00020\u000bH\u0007ø\u0001\u0000¢\u0006\u0004\b\f\u0010\r\u001a\u001c\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u000e0\u0001*\u00020\u000fH\u0007ø\u0001\u0000¢\u0006\u0004\b\u0010\u0010\u0011\u001a2\u0010\u0012\u001a\u00020\u0013*\u00020\u00032\u0006\u0010\u0014\u001a\u00020\u00022\b\b\u0002\u0010\u0015\u001a\u00020\u00132\b\b\u0002\u0010\u0016\u001a\u00020\u0013H\u0007ø\u0001\u0000¢\u0006\u0004\b\u0017\u0010\u0018\u001a2\u0010\u0012\u001a\u00020\u0013*\u00020\u00072\u0006\u0010\u0014\u001a\u00020\u00062\b\b\u0002\u0010\u0015\u001a\u00020\u00132\b\b\u0002\u0010\u0016\u001a\u00020\u0013H\u0007ø\u0001\u0000¢\u0006\u0004\b\u0019\u0010\u001a\u001a2\u0010\u0012\u001a\u00020\u0013*\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\n2\b\b\u0002\u0010\u0015\u001a\u00020\u00132\b\b\u0002\u0010\u0016\u001a\u00020\u0013H\u0007ø\u0001\u0000¢\u0006\u0004\b\u001b\u0010\u001c\u001a2\u0010\u0012\u001a\u00020\u0013*\u00020\u000f2\u0006\u0010\u0014\u001a\u00020\u000e2\b\b\u0002\u0010\u0015\u001a\u00020\u00132\b\b\u0002\u0010\u0016\u001a\u00020\u0013H\u0007ø\u0001\u0000¢\u0006\u0004\b\u001d\u0010\u001e\u001a\u001f\u0010\u001f\u001a\u00020\u0002*\u00020\u00032\u0006\u0010 \u001a\u00020\u0013H\u0087\bø\u0001\u0000¢\u0006\u0004\b!\u0010\"\u001a\u001f\u0010\u001f\u001a\u00020\u0006*\u00020\u00072\u0006\u0010 \u001a\u00020\u0013H\u0087\bø\u0001\u0000¢\u0006\u0004\b#\u0010$\u001a\u001f\u0010\u001f\u001a\u00020\n*\u00020\u000b2\u0006\u0010 \u001a\u00020\u0013H\u0087\bø\u0001\u0000¢\u0006\u0004\b%\u0010&\u001a\u001f\u0010\u001f\u001a\u00020\u000e*\u00020\u000f2\u0006\u0010 \u001a\u00020\u0013H\u0087\bø\u0001\u0000¢\u0006\u0004\b'\u0010(\u001a.\u0010)\u001a\u00020**\u00020\u00032\u0012\u0010+\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020*0,H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b-\u0010.\u001a.\u0010)\u001a\u00020/*\u00020\u00032\u0012\u0010+\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020/0,H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b0\u00101\u001a.\u0010)\u001a\u00020**\u00020\u00072\u0012\u0010+\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020*0,H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b-\u00102\u001a.\u0010)\u001a\u00020/*\u00020\u00072\u0012\u0010+\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020/0,H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b0\u00103\u001a.\u0010)\u001a\u00020**\u00020\u000b2\u0012\u0010+\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020*0,H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b-\u00104\u001a.\u0010)\u001a\u00020/*\u00020\u000b2\u0012\u0010+\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020/0,H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b0\u00105\u001a.\u0010)\u001a\u00020**\u00020\u000f2\u0012\u0010+\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020*0,H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b-\u00106\u001a.\u0010)\u001a\u00020/*\u00020\u000f2\u0012\u0010+\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020/0,H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b0\u00107\u0082\u0002\u000b\n\u0002\b\u0019\n\u0005\b\u009920\u0001¨\u00068"}, d2 = {"asList", "", "Lkotlin/UByte;", "Lkotlin/UByteArray;", "asList-GBYM_sE", "([B)Ljava/util/List;", "Lkotlin/UInt;", "Lkotlin/UIntArray;", "asList--ajY-9A", "([I)Ljava/util/List;", "Lkotlin/ULong;", "Lkotlin/ULongArray;", "asList-QwZRm1k", "([J)Ljava/util/List;", "Lkotlin/UShort;", "Lkotlin/UShortArray;", "asList-rL5Bavg", "([S)Ljava/util/List;", "binarySearch", "", "element", "fromIndex", "toIndex", "binarySearch-WpHrYlw", "([BBII)I", "binarySearch-2fe2U9s", "([IIII)I", "binarySearch-K6DWlUc", "([JJII)I", "binarySearch-EtDCXyQ", "([SSII)I", "elementAt", "index", "elementAt-PpDY95g", "([BI)B", "elementAt-qFRl0hI", "([II)I", "elementAt-r7IrZao", "([JI)J", "elementAt-nggk6HY", "([SI)S", "sumOf", "Ljava/math/BigDecimal;", "selector", "Lkotlin/Function1;", "sumOfBigDecimal", "([BLkotlin/jvm/functions/Function1;)Ljava/math/BigDecimal;", "Ljava/math/BigInteger;", "sumOfBigInteger", "([BLkotlin/jvm/functions/Function1;)Ljava/math/BigInteger;", "([ILkotlin/jvm/functions/Function1;)Ljava/math/BigDecimal;", "([ILkotlin/jvm/functions/Function1;)Ljava/math/BigInteger;", "([JLkotlin/jvm/functions/Function1;)Ljava/math/BigDecimal;", "([JLkotlin/jvm/functions/Function1;)Ljava/math/BigInteger;", "([SLkotlin/jvm/functions/Function1;)Ljava/math/BigDecimal;", "([SLkotlin/jvm/functions/Function1;)Ljava/math/BigInteger;", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, pn = "kotlin.collections", xi = 49, xs = "kotlin/collections/unsigned/UArraysKt")
class UArraysKt___UArraysJvmKt {
    public UArraysKt___UArraysJvmKt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final java.util.List<kotlin.UInt> asList--ajY-9A(int[] r1) {
            java.lang.String r0 = "$this$asList"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.collections.unsigned.UArraysKt___UArraysJvmKt$asList$1 r0 = new kotlin.collections.unsigned.UArraysKt___UArraysJvmKt$asList$1
            r0.<init>(r1)
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    public static final java.util.List<kotlin.UByte> asList-GBYM_sE(byte[] r1) {
            java.lang.String r0 = "$this$asList"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.collections.unsigned.UArraysKt___UArraysJvmKt$asList$3 r0 = new kotlin.collections.unsigned.UArraysKt___UArraysJvmKt$asList$3
            r0.<init>(r1)
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    public static final java.util.List<kotlin.ULong> asList-QwZRm1k(long[] r1) {
            java.lang.String r0 = "$this$asList"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.collections.unsigned.UArraysKt___UArraysJvmKt$asList$2 r0 = new kotlin.collections.unsigned.UArraysKt___UArraysJvmKt$asList$2
            r0.<init>(r1)
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    public static final java.util.List<kotlin.UShort> asList-rL5Bavg(short[] r1) {
            java.lang.String r0 = "$this$asList"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.collections.unsigned.UArraysKt___UArraysJvmKt$asList$4 r0 = new kotlin.collections.unsigned.UArraysKt___UArraysJvmKt$asList$4
            r0.<init>(r1)
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    public static final int binarySearch-2fe2U9s(int[] r2, int r3, int r4, int r5) {
            java.lang.String r0 = "$this$binarySearch"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.AbstractList$Companion r0 = kotlin.collections.AbstractList.Companion
            int r1 = kotlin.UIntArray.getSize-impl(r2)
            r0.checkRangeIndexes$kotlin_stdlib(r4, r5, r1)
            int r5 = r5 + (-1)
        L10:
            if (r4 > r5) goto L27
            int r0 = r4 + r5
            int r0 = r0 >>> 1
            r1 = r2[r0]
            int r1 = kotlin.UnsignedKt.uintCompare(r1, r3)
            if (r1 >= 0) goto L21
            int r4 = r0 + 1
            goto L10
        L21:
            if (r1 <= 0) goto L26
            int r5 = r0 + (-1)
            goto L10
        L26:
            return r0
        L27:
            int r4 = r4 + 1
            int r2 = -r4
            return r2
    }

    public static int binarySearch-2fe2U9s$default(int[] r0, int r1, int r2, int r3, int r4, java.lang.Object r5) {
            r5 = r4 & 2
            if (r5 == 0) goto L5
            r2 = 0
        L5:
            r4 = r4 & 4
            if (r4 == 0) goto Ld
            int r3 = kotlin.UIntArray.getSize-impl(r0)
        Ld:
            int r0 = kotlin.collections.unsigned.UArraysKt.binarySearch-2fe2U9s(r0, r1, r2, r3)
            return r0
    }

    public static final int binarySearch-EtDCXyQ(short[] r2, short r3, int r4, int r5) {
            java.lang.String r0 = "$this$binarySearch"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.AbstractList$Companion r0 = kotlin.collections.AbstractList.Companion
            int r1 = kotlin.UShortArray.getSize-impl(r2)
            r0.checkRangeIndexes$kotlin_stdlib(r4, r5, r1)
            r0 = 65535(0xffff, float:9.1834E-41)
            r3 = r3 & r0
            int r5 = r5 + (-1)
        L14:
            if (r4 > r5) goto L2b
            int r0 = r4 + r5
            int r0 = r0 >>> 1
            short r1 = r2[r0]
            int r1 = kotlin.UnsignedKt.uintCompare(r1, r3)
            if (r1 >= 0) goto L25
            int r4 = r0 + 1
            goto L14
        L25:
            if (r1 <= 0) goto L2a
            int r5 = r0 + (-1)
            goto L14
        L2a:
            return r0
        L2b:
            int r4 = r4 + 1
            int r2 = -r4
            return r2
    }

    public static int binarySearch-EtDCXyQ$default(short[] r0, short r1, int r2, int r3, int r4, java.lang.Object r5) {
            r5 = r4 & 2
            if (r5 == 0) goto L5
            r2 = 0
        L5:
            r4 = r4 & 4
            if (r4 == 0) goto Ld
            int r3 = kotlin.UShortArray.getSize-impl(r0)
        Ld:
            int r0 = kotlin.collections.unsigned.UArraysKt.binarySearch-EtDCXyQ(r0, r1, r2, r3)
            return r0
    }

    public static final int binarySearch-K6DWlUc(long[] r3, long r4, int r6, int r7) {
            java.lang.String r0 = "$this$binarySearch"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            kotlin.collections.AbstractList$Companion r0 = kotlin.collections.AbstractList.Companion
            int r1 = kotlin.ULongArray.getSize-impl(r3)
            r0.checkRangeIndexes$kotlin_stdlib(r6, r7, r1)
            int r7 = r7 + (-1)
        L10:
            if (r6 > r7) goto L27
            int r0 = r6 + r7
            int r0 = r0 >>> 1
            r1 = r3[r0]
            int r1 = kotlin.UnsignedKt.ulongCompare(r1, r4)
            if (r1 >= 0) goto L21
            int r6 = r0 + 1
            goto L10
        L21:
            if (r1 <= 0) goto L26
            int r7 = r0 + (-1)
            goto L10
        L26:
            return r0
        L27:
            int r6 = r6 + 1
            int r3 = -r6
            return r3
    }

    public static int binarySearch-K6DWlUc$default(long[] r0, long r1, int r3, int r4, int r5, java.lang.Object r6) {
            r6 = r5 & 2
            if (r6 == 0) goto L5
            r3 = 0
        L5:
            r5 = r5 & 4
            if (r5 == 0) goto Ld
            int r4 = kotlin.ULongArray.getSize-impl(r0)
        Ld:
            int r0 = kotlin.collections.unsigned.UArraysKt.binarySearch-K6DWlUc(r0, r1, r3, r4)
            return r0
    }

    public static final int binarySearch-WpHrYlw(byte[] r2, byte r3, int r4, int r5) {
            java.lang.String r0 = "$this$binarySearch"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.AbstractList$Companion r0 = kotlin.collections.AbstractList.Companion
            int r1 = kotlin.UByteArray.getSize-impl(r2)
            r0.checkRangeIndexes$kotlin_stdlib(r4, r5, r1)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r5 = r5 + (-1)
        L12:
            if (r4 > r5) goto L29
            int r0 = r4 + r5
            int r0 = r0 >>> 1
            r1 = r2[r0]
            int r1 = kotlin.UnsignedKt.uintCompare(r1, r3)
            if (r1 >= 0) goto L23
            int r4 = r0 + 1
            goto L12
        L23:
            if (r1 <= 0) goto L28
            int r5 = r0 + (-1)
            goto L12
        L28:
            return r0
        L29:
            int r4 = r4 + 1
            int r2 = -r4
            return r2
    }

    public static int binarySearch-WpHrYlw$default(byte[] r0, byte r1, int r2, int r3, int r4, java.lang.Object r5) {
            r5 = r4 & 2
            if (r5 == 0) goto L5
            r2 = 0
        L5:
            r4 = r4 & 4
            if (r4 == 0) goto Ld
            int r3 = kotlin.UByteArray.getSize-impl(r0)
        Ld:
            int r0 = kotlin.collections.unsigned.UArraysKt.binarySearch-WpHrYlw(r0, r1, r2, r3)
            return r0
    }

    private static final byte elementAt-PpDY95g(byte[] r1, int r2) {
            java.lang.String r0 = "$this$elementAt"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            byte r1 = kotlin.UByteArray.get-w2LRezQ(r1, r2)
            return r1
    }

    private static final short elementAt-nggk6HY(short[] r1, int r2) {
            java.lang.String r0 = "$this$elementAt"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            short r1 = kotlin.UShortArray.get-Mh2AYeg(r1, r2)
            return r1
    }

    private static final int elementAt-qFRl0hI(int[] r1, int r2) {
            java.lang.String r0 = "$this$elementAt"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = kotlin.UIntArray.get-pVg5ArA(r1, r2)
            return r1
    }

    private static final long elementAt-r7IrZao(long[] r1, int r2) {
            java.lang.String r0 = "$this$elementAt"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            long r1 = kotlin.ULongArray.get-s-VKNKU(r1, r2)
            return r1
    }

    private static final java.math.BigDecimal sumOfBigDecimal(byte[] r4, kotlin.jvm.functions.Function1<? super kotlin.UByte, ? extends java.math.BigDecimal> r5) {
            java.lang.String r0 = "$this$sumOf"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = kotlin.UByteArray.getSize-impl(r4)
            r2 = 0
        L1a:
            if (r2 >= r1) goto L36
            byte r3 = kotlin.UByteArray.get-w2LRezQ(r4, r2)
            kotlin.UByte r3 = kotlin.UByte.box-impl(r3)
            java.lang.Object r3 = r5.invoke(r3)
            java.math.BigDecimal r3 = (java.math.BigDecimal) r3
            java.math.BigDecimal r0 = r0.add(r3)
            java.lang.String r3 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)
            int r2 = r2 + 1
            goto L1a
        L36:
            return r0
    }

    private static final java.math.BigDecimal sumOfBigDecimal(int[] r4, kotlin.jvm.functions.Function1<? super kotlin.UInt, ? extends java.math.BigDecimal> r5) {
            java.lang.String r0 = "$this$sumOf"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = kotlin.UIntArray.getSize-impl(r4)
            r2 = 0
        L1a:
            if (r2 >= r1) goto L36
            int r3 = kotlin.UIntArray.get-pVg5ArA(r4, r2)
            kotlin.UInt r3 = kotlin.UInt.box-impl(r3)
            java.lang.Object r3 = r5.invoke(r3)
            java.math.BigDecimal r3 = (java.math.BigDecimal) r3
            java.math.BigDecimal r0 = r0.add(r3)
            java.lang.String r3 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)
            int r2 = r2 + 1
            goto L1a
        L36:
            return r0
    }

    private static final java.math.BigDecimal sumOfBigDecimal(long[] r5, kotlin.jvm.functions.Function1<? super kotlin.ULong, ? extends java.math.BigDecimal> r6) {
            java.lang.String r0 = "$this$sumOf"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            r0 = 0
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = kotlin.ULongArray.getSize-impl(r5)
            r2 = 0
        L1a:
            if (r2 >= r1) goto L36
            long r3 = kotlin.ULongArray.get-s-VKNKU(r5, r2)
            kotlin.ULong r3 = kotlin.ULong.box-impl(r3)
            java.lang.Object r3 = r6.invoke(r3)
            java.math.BigDecimal r3 = (java.math.BigDecimal) r3
            java.math.BigDecimal r0 = r0.add(r3)
            java.lang.String r3 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)
            int r2 = r2 + 1
            goto L1a
        L36:
            return r0
    }

    private static final java.math.BigDecimal sumOfBigDecimal(short[] r4, kotlin.jvm.functions.Function1<? super kotlin.UShort, ? extends java.math.BigDecimal> r5) {
            java.lang.String r0 = "$this$sumOf"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = kotlin.UShortArray.getSize-impl(r4)
            r2 = 0
        L1a:
            if (r2 >= r1) goto L36
            short r3 = kotlin.UShortArray.get-Mh2AYeg(r4, r2)
            kotlin.UShort r3 = kotlin.UShort.box-impl(r3)
            java.lang.Object r3 = r5.invoke(r3)
            java.math.BigDecimal r3 = (java.math.BigDecimal) r3
            java.math.BigDecimal r0 = r0.add(r3)
            java.lang.String r3 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)
            int r2 = r2 + 1
            goto L1a
        L36:
            return r0
    }

    private static final java.math.BigInteger sumOfBigInteger(byte[] r4, kotlin.jvm.functions.Function1<? super kotlin.UByte, ? extends java.math.BigInteger> r5) {
            java.lang.String r0 = "$this$sumOf"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = kotlin.UByteArray.getSize-impl(r4)
            r2 = 0
        L1a:
            if (r2 >= r1) goto L36
            byte r3 = kotlin.UByteArray.get-w2LRezQ(r4, r2)
            kotlin.UByte r3 = kotlin.UByte.box-impl(r3)
            java.lang.Object r3 = r5.invoke(r3)
            java.math.BigInteger r3 = (java.math.BigInteger) r3
            java.math.BigInteger r0 = r0.add(r3)
            java.lang.String r3 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)
            int r2 = r2 + 1
            goto L1a
        L36:
            return r0
    }

    private static final java.math.BigInteger sumOfBigInteger(int[] r4, kotlin.jvm.functions.Function1<? super kotlin.UInt, ? extends java.math.BigInteger> r5) {
            java.lang.String r0 = "$this$sumOf"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = kotlin.UIntArray.getSize-impl(r4)
            r2 = 0
        L1a:
            if (r2 >= r1) goto L36
            int r3 = kotlin.UIntArray.get-pVg5ArA(r4, r2)
            kotlin.UInt r3 = kotlin.UInt.box-impl(r3)
            java.lang.Object r3 = r5.invoke(r3)
            java.math.BigInteger r3 = (java.math.BigInteger) r3
            java.math.BigInteger r0 = r0.add(r3)
            java.lang.String r3 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)
            int r2 = r2 + 1
            goto L1a
        L36:
            return r0
    }

    private static final java.math.BigInteger sumOfBigInteger(long[] r5, kotlin.jvm.functions.Function1<? super kotlin.ULong, ? extends java.math.BigInteger> r6) {
            java.lang.String r0 = "$this$sumOf"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = kotlin.ULongArray.getSize-impl(r5)
            r2 = 0
        L1a:
            if (r2 >= r1) goto L36
            long r3 = kotlin.ULongArray.get-s-VKNKU(r5, r2)
            kotlin.ULong r3 = kotlin.ULong.box-impl(r3)
            java.lang.Object r3 = r6.invoke(r3)
            java.math.BigInteger r3 = (java.math.BigInteger) r3
            java.math.BigInteger r0 = r0.add(r3)
            java.lang.String r3 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)
            int r2 = r2 + 1
            goto L1a
        L36:
            return r0
    }

    private static final java.math.BigInteger sumOfBigInteger(short[] r4, kotlin.jvm.functions.Function1<? super kotlin.UShort, ? extends java.math.BigInteger> r5) {
            java.lang.String r0 = "$this$sumOf"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "selector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            java.lang.String r1 = "valueOf(this.toLong())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = kotlin.UShortArray.getSize-impl(r4)
            r2 = 0
        L1a:
            if (r2 >= r1) goto L36
            short r3 = kotlin.UShortArray.get-Mh2AYeg(r4, r2)
            kotlin.UShort r3 = kotlin.UShort.box-impl(r3)
            java.lang.Object r3 = r5.invoke(r3)
            java.math.BigInteger r3 = (java.math.BigInteger) r3
            java.math.BigInteger r0 = r0.add(r3)
            java.lang.String r3 = "this.add(other)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)
            int r2 = r2 + 1
            goto L1a
        L36:
            return r0
    }
}
