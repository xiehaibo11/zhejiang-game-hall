package kotlin.text;

@kotlin.Metadata(d1 = {"\u0000\u001e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\b\u000b\u001a!\u0010\u0000\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u0002H\u0002¢\u0006\u0002\b\u0004\u001a\u0011\u0010\u0005\u001a\u00020\u0006*\u00020\u0002H\u0002¢\u0006\u0002\b\u0007\u001a\u0014\u0010\b\u001a\u00020\u0002*\u00020\u00022\b\b\u0002\u0010\u0003\u001a\u00020\u0002\u001aJ\u0010\t\u001a\u00020\u0002*\b\u0012\u0004\u0012\u00020\u00020\n2\u0006\u0010\u000b\u001a\u00020\u00062\u0012\u0010\f\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00020\u00012\u0014\u0010\r\u001a\u0010\u0012\u0004\u0012\u00020\u0002\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u0001H\u0082\b¢\u0006\u0002\b\u000e\u001a\u0014\u0010\u000f\u001a\u00020\u0002*\u00020\u00022\b\b\u0002\u0010\u0010\u001a\u00020\u0002\u001a\u001e\u0010\u0011\u001a\u00020\u0002*\u00020\u00022\b\b\u0002\u0010\u0010\u001a\u00020\u00022\b\b\u0002\u0010\u0012\u001a\u00020\u0002\u001a\n\u0010\u0013\u001a\u00020\u0002*\u00020\u0002\u001a\u0014\u0010\u0014\u001a\u00020\u0002*\u00020\u00022\b\b\u0002\u0010\u0012\u001a\u00020\u0002¨\u0006\u0015"}, d2 = {"getIndentFunction", "Lkotlin/Function1;", "", "indent", "getIndentFunction$StringsKt__IndentKt", "indentWidth", "", "indentWidth$StringsKt__IndentKt", "prependIndent", "reindent", "", "resultSizeEstimate", "indentAddFunction", "indentCutFunction", "reindent$StringsKt__IndentKt", "replaceIndent", "newIndent", "replaceIndentByMargin", "marginPrefix", "trimIndent", "trimMargin", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/text/StringsKt")
class StringsKt__IndentKt extends kotlin.text.StringsKt__AppendableKt {


    public StringsKt__IndentKt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static final kotlin.jvm.functions.Function1<java.lang.String, java.lang.String> getIndentFunction$StringsKt__IndentKt(java.lang.String r1) {
            r0 = r1
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            int r0 = r0.length()
            if (r0 != 0) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 == 0) goto L13
            kotlin.text.StringsKt__IndentKt$getIndentFunction$1 r1 = kotlin.text.StringsKt__IndentKt$getIndentFunction$1.INSTANCE
            kotlin.jvm.functions.Function1 r1 = (kotlin.jvm.functions.Function1) r1
            goto L1b
        L13:
            kotlin.text.StringsKt__IndentKt$getIndentFunction$2 r0 = new kotlin.text.StringsKt__IndentKt$getIndentFunction$2
            r0.<init>(r1)
            r1 = r0
            kotlin.jvm.functions.Function1 r1 = (kotlin.jvm.functions.Function1) r1
        L1b:
            return r1
    }

    private static final int indentWidth$StringsKt__IndentKt(java.lang.String r5) {
            r0 = r5
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            int r1 = r0.length()
            r2 = 0
        L8:
            r3 = -1
            if (r2 >= r1) goto L1b
            char r4 = r0.charAt(r2)
            boolean r4 = kotlin.text.CharsKt.isWhitespace(r4)
            r4 = r4 ^ 1
            if (r4 == 0) goto L18
            goto L1c
        L18:
            int r2 = r2 + 1
            goto L8
        L1b:
            r2 = r3
        L1c:
            if (r2 != r3) goto L22
            int r2 = r5.length()
        L22:
            return r2
    }

    public static final java.lang.String prependIndent(java.lang.String r10, java.lang.String r11) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            java.lang.String r0 = "indent"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.lang.CharSequence r10 = (java.lang.CharSequence) r10
            kotlin.sequences.Sequence r10 = kotlin.text.StringsKt.lineSequence(r10)
            kotlin.text.StringsKt__IndentKt$prependIndent$1 r0 = new kotlin.text.StringsKt__IndentKt$prependIndent$1
            r0.<init>(r11)
            kotlin.jvm.functions.Function1 r0 = (kotlin.jvm.functions.Function1) r0
            kotlin.sequences.Sequence r1 = kotlin.sequences.SequencesKt.map(r10, r0)
            java.lang.String r10 = "\n"
            r2 = r10
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 62
            r9 = 0
            java.lang.String r10 = kotlin.sequences.SequencesKt.joinToString$default(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return r10
    }

    public static java.lang.String prependIndent$default(java.lang.String r0, java.lang.String r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.lang.String r1 = "    "
        L6:
            java.lang.String r0 = kotlin.text.StringsKt.prependIndent(r0, r1)
            return r0
    }

    private static final java.lang.String reindent$StringsKt__IndentKt(java.util.List<java.lang.String> r12, int r13, kotlin.jvm.functions.Function1<? super java.lang.String, java.lang.String> r14, kotlin.jvm.functions.Function1<? super java.lang.String, java.lang.String> r15) {
            int r0 = kotlin.collections.CollectionsKt.getLastIndex(r12)
            java.lang.Iterable r12 = (java.lang.Iterable) r12
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.Collection r1 = (java.util.Collection) r1
            java.util.Iterator r12 = r12.iterator()
            r2 = 0
        L12:
            boolean r3 = r12.hasNext()
            if (r3 == 0) goto L4d
            java.lang.Object r3 = r12.next()
            int r4 = r2 + 1
            if (r2 >= 0) goto L23
            kotlin.collections.CollectionsKt.throwIndexOverflow()
        L23:
            java.lang.String r3 = (java.lang.String) r3
            if (r2 == 0) goto L29
            if (r2 != r0) goto L34
        L29:
            r2 = r3
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            boolean r2 = kotlin.text.StringsKt.isBlank(r2)
            if (r2 == 0) goto L34
            r3 = 0
            goto L46
        L34:
            java.lang.Object r2 = r15.invoke(r3)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto L46
            java.lang.Object r2 = r14.invoke(r2)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 != 0) goto L45
            goto L46
        L45:
            r3 = r2
        L46:
            if (r3 == 0) goto L4b
            r1.add(r3)
        L4b:
            r2 = r4
            goto L12
        L4d:
            java.util.List r1 = (java.util.List) r1
            r2 = r1
            java.lang.Iterable r2 = (java.lang.Iterable) r2
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>(r13)
            r3 = r12
            java.lang.Appendable r3 = (java.lang.Appendable) r3
            java.lang.String r12 = "\n"
            r4 = r12
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 124(0x7c, float:1.74E-43)
            r11 = 0
            java.lang.Appendable r12 = kotlin.collections.CollectionsKt.joinTo$default(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            java.lang.StringBuilder r12 = (java.lang.StringBuilder) r12
            java.lang.String r12 = r12.toString()
            java.lang.String r13 = "mapIndexedNotNull { inde…\"\\n\")\n        .toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r12, r13)
            return r12
    }

    public static final java.lang.String replaceIndent(java.lang.String r17, java.lang.String r18) {
            r0 = r17
            java.lang.String r1 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r1)
            java.lang.String r1 = "newIndent"
            r2 = r18
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            r1 = r0
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            java.util.List r1 = kotlin.text.StringsKt.lines(r1)
            r3 = r1
            java.lang.Iterable r3 = (java.lang.Iterable) r3
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.Collection r4 = (java.util.Collection) r4
            java.util.Iterator r5 = r3.iterator()
        L23:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L3e
            java.lang.Object r6 = r5.next()
            r7 = r6
            java.lang.String r7 = (java.lang.String) r7
            java.lang.CharSequence r7 = (java.lang.CharSequence) r7
            boolean r7 = kotlin.text.StringsKt.isBlank(r7)
            r7 = r7 ^ 1
            if (r7 == 0) goto L23
            r4.add(r6)
            goto L23
        L3e:
            java.util.List r4 = (java.util.List) r4
            java.lang.Iterable r4 = (java.lang.Iterable) r4
            java.util.ArrayList r5 = new java.util.ArrayList
            r6 = 10
            int r6 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r4, r6)
            r5.<init>(r6)
            java.util.Collection r5 = (java.util.Collection) r5
            java.util.Iterator r4 = r4.iterator()
        L53:
            boolean r6 = r4.hasNext()
            if (r6 == 0) goto L6b
            java.lang.Object r6 = r4.next()
            java.lang.String r6 = (java.lang.String) r6
            int r6 = indentWidth$StringsKt__IndentKt(r6)
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r5.add(r6)
            goto L53
        L6b:
            java.util.List r5 = (java.util.List) r5
            java.lang.Iterable r5 = (java.lang.Iterable) r5
            java.lang.Comparable r4 = kotlin.collections.CollectionsKt.minOrNull(r5)
            java.lang.Integer r4 = (java.lang.Integer) r4
            r5 = 0
            if (r4 == 0) goto L7d
            int r4 = r4.intValue()
            goto L7e
        L7d:
            r4 = r5
        L7e:
            int r0 = r17.length()
            int r6 = r18.length()
            int r7 = r1.size()
            int r6 = r6 * r7
            int r0 = r0 + r6
            kotlin.jvm.functions.Function1 r2 = getIndentFunction$StringsKt__IndentKt(r18)
            int r1 = kotlin.collections.CollectionsKt.getLastIndex(r1)
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.util.Collection r6 = (java.util.Collection) r6
            java.util.Iterator r3 = r3.iterator()
        L9f:
            boolean r7 = r3.hasNext()
            if (r7 == 0) goto Ld8
            java.lang.Object r7 = r3.next()
            int r8 = r5 + 1
            if (r5 >= 0) goto Lb0
            kotlin.collections.CollectionsKt.throwIndexOverflow()
        Lb0:
            java.lang.String r7 = (java.lang.String) r7
            if (r5 == 0) goto Lb6
            if (r5 != r1) goto Lc1
        Lb6:
            r5 = r7
            java.lang.CharSequence r5 = (java.lang.CharSequence) r5
            boolean r5 = kotlin.text.StringsKt.isBlank(r5)
            if (r5 == 0) goto Lc1
            r7 = 0
            goto Ld1
        Lc1:
            java.lang.String r5 = kotlin.text.StringsKt.drop(r7, r4)
            if (r5 == 0) goto Ld1
            java.lang.Object r5 = r2.invoke(r5)
            java.lang.String r5 = (java.lang.String) r5
            if (r5 != 0) goto Ld0
            goto Ld1
        Ld0:
            r7 = r5
        Ld1:
            if (r7 == 0) goto Ld6
            r6.add(r7)
        Ld6:
            r5 = r8
            goto L9f
        Ld8:
            java.util.List r6 = (java.util.List) r6
            r7 = r6
            java.lang.Iterable r7 = (java.lang.Iterable) r7
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            r8 = r1
            java.lang.Appendable r8 = (java.lang.Appendable) r8
            java.lang.String r0 = "\n"
            r9 = r0
            java.lang.CharSequence r9 = (java.lang.CharSequence) r9
            r10 = 0
            r11 = 0
            r12 = 0
            r13 = 0
            r14 = 0
            r15 = 124(0x7c, float:1.74E-43)
            r16 = 0
            java.lang.Appendable r0 = kotlin.collections.CollectionsKt.joinTo$default(r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            java.lang.StringBuilder r0 = (java.lang.StringBuilder) r0
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "mapIndexedNotNull { inde…\"\\n\")\n        .toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public static java.lang.String replaceIndent$default(java.lang.String r0, java.lang.String r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.lang.String r1 = ""
        L6:
            java.lang.String r0 = kotlin.text.StringsKt.replaceIndent(r0, r1)
            return r0
    }

    public static final java.lang.String replaceIndentByMargin(java.lang.String r21, java.lang.String r22, java.lang.String r23) {
            r0 = r21
            r6 = r23
            java.lang.String r1 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r1)
            java.lang.String r1 = "newIndent"
            r2 = r22
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            java.lang.String r1 = "marginPrefix"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r1)
            r1 = r6
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            boolean r1 = kotlin.text.StringsKt.isBlank(r1)
            r1 = r1 ^ 1
            if (r1 == 0) goto Lf4
            r1 = r0
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            java.util.List r1 = kotlin.text.StringsKt.lines(r1)
            int r0 = r21.length()
            int r3 = r22.length()
            int r4 = r1.size()
            int r3 = r3 * r4
            int r7 = r0 + r3
            kotlin.jvm.functions.Function1 r8 = getIndentFunction$StringsKt__IndentKt(r22)
            int r9 = kotlin.collections.CollectionsKt.getLastIndex(r1)
            java.lang.Iterable r1 = (java.lang.Iterable) r1
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r10 = r0
            java.util.Collection r10 = (java.util.Collection) r10
            java.util.Iterator r11 = r1.iterator()
            r12 = 0
            r0 = r12
        L4e:
            boolean r1 = r11.hasNext()
            if (r1 == 0) goto Lc6
            java.lang.Object r1 = r11.next()
            int r13 = r0 + 1
            if (r0 >= 0) goto L5f
            kotlin.collections.CollectionsKt.throwIndexOverflow()
        L5f:
            r14 = r1
            java.lang.String r14 = (java.lang.String) r14
            r15 = 0
            if (r0 == 0) goto L67
            if (r0 != r9) goto L72
        L67:
            r0 = r14
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            boolean r0 = kotlin.text.StringsKt.isBlank(r0)
            if (r0 == 0) goto L72
            r14 = r15
            goto Lbf
        L72:
            r0 = r14
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            int r1 = r0.length()
            r2 = r12
        L7a:
            r3 = -1
            if (r2 >= r1) goto L8e
            char r4 = r0.charAt(r2)
            boolean r4 = kotlin.text.CharsKt.isWhitespace(r4)
            r4 = r4 ^ 1
            if (r4 == 0) goto L8b
            r5 = r2
            goto L8f
        L8b:
            int r2 = r2 + 1
            goto L7a
        L8e:
            r5 = r3
        L8f:
            if (r5 != r3) goto L92
            goto Lb3
        L92:
            r3 = 0
            r4 = 4
            r16 = 0
            r0 = r14
            r1 = r23
            r2 = r5
            r17 = r5
            r5 = r16
            boolean r0 = kotlin.text.StringsKt.startsWith$default(r0, r1, r2, r3, r4, r5)
            if (r0 == 0) goto Lb3
            int r0 = r23.length()
            int r5 = r17 + r0
            java.lang.String r15 = r14.substring(r5)
            java.lang.String r0 = "this as java.lang.String).substring(startIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r15, r0)
        Lb3:
            if (r15 == 0) goto Lbf
            java.lang.Object r0 = r8.invoke(r15)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 != 0) goto Lbe
            goto Lbf
        Lbe:
            r14 = r0
        Lbf:
            if (r14 == 0) goto Lc4
            r10.add(r14)
        Lc4:
            r0 = r13
            goto L4e
        Lc6:
            java.util.List r10 = (java.util.List) r10
            r11 = r10
            java.lang.Iterable r11 = (java.lang.Iterable) r11
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r7)
            r12 = r0
            java.lang.Appendable r12 = (java.lang.Appendable) r12
            java.lang.String r0 = "\n"
            r13 = r0
            java.lang.CharSequence r13 = (java.lang.CharSequence) r13
            r14 = 0
            r15 = 0
            r16 = 0
            r17 = 0
            r18 = 0
            r19 = 124(0x7c, float:1.74E-43)
            r20 = 0
            java.lang.Appendable r0 = kotlin.collections.CollectionsKt.joinTo$default(r11, r12, r13, r14, r15, r16, r17, r18, r19, r20)
            java.lang.StringBuilder r0 = (java.lang.StringBuilder) r0
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "mapIndexedNotNull { inde…\"\\n\")\n        .toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
        Lf4:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "marginPrefix must be non-blank string."
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public static java.lang.String replaceIndentByMargin$default(java.lang.String r0, java.lang.String r1, java.lang.String r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L6
            java.lang.String r1 = ""
        L6:
            r3 = r3 & 2
            if (r3 == 0) goto Lc
            java.lang.String r2 = "|"
        Lc:
            java.lang.String r0 = kotlin.text.StringsKt.replaceIndentByMargin(r0, r1, r2)
            return r0
    }

    public static final java.lang.String trimIndent(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = ""
            java.lang.String r1 = kotlin.text.StringsKt.replaceIndent(r1, r0)
            return r1
    }

    public static final java.lang.String trimMargin(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "marginPrefix"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = ""
            java.lang.String r1 = kotlin.text.StringsKt.replaceIndentByMargin(r1, r0, r2)
            return r1
    }

    public static java.lang.String trimMargin$default(java.lang.String r0, java.lang.String r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.lang.String r1 = "|"
        L6:
            java.lang.String r0 = kotlin.text.StringsKt.trimMargin(r0, r1)
            return r0
    }
}
