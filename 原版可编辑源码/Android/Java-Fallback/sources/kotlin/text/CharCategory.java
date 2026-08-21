package kotlin.text;

@kotlin.Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\f\n\u0002\b \b\u0086\u0001\u0018\u0000 -2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001-B\u0017\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u0011\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000eH\u0086\u0002R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nj\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017j\u0002\b\u0018j\u0002\b\u0019j\u0002\b\u001aj\u0002\b\u001bj\u0002\b\u001cj\u0002\b\u001dj\u0002\b\u001ej\u0002\b\u001fj\u0002\b j\u0002\b!j\u0002\b\"j\u0002\b#j\u0002\b$j\u0002\b%j\u0002\b&j\u0002\b'j\u0002\b(j\u0002\b)j\u0002\b*j\u0002\b+j\u0002\b,¨\u0006."}, d2 = {"Lkotlin/text/CharCategory;", "", "value", "", "code", "", "(Ljava/lang/String;IILjava/lang/String;)V", "getCode", "()Ljava/lang/String;", "getValue", "()I", "contains", "", "char", "", "UNASSIGNED", "UPPERCASE_LETTER", "LOWERCASE_LETTER", "TITLECASE_LETTER", "MODIFIER_LETTER", "OTHER_LETTER", "NON_SPACING_MARK", "ENCLOSING_MARK", "COMBINING_SPACING_MARK", "DECIMAL_DIGIT_NUMBER", "LETTER_NUMBER", "OTHER_NUMBER", "SPACE_SEPARATOR", "LINE_SEPARATOR", "PARAGRAPH_SEPARATOR", "CONTROL", "FORMAT", "PRIVATE_USE", "SURROGATE", "DASH_PUNCTUATION", "START_PUNCTUATION", "END_PUNCTUATION", "CONNECTOR_PUNCTUATION", "OTHER_PUNCTUATION", "MATH_SYMBOL", "CURRENCY_SYMBOL", "MODIFIER_SYMBOL", "OTHER_SYMBOL", "INITIAL_QUOTE_PUNCTUATION", "FINAL_QUOTE_PUNCTUATION", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public enum CharCategory extends java.lang.Enum<kotlin.text.CharCategory> {
    private static final kotlin.text.CharCategory[] $VALUES = null;
    public static final kotlin.text.CharCategory COMBINING_SPACING_MARK = null;
    public static final kotlin.text.CharCategory CONNECTOR_PUNCTUATION = null;
    public static final kotlin.text.CharCategory CONTROL = null;
    public static final kotlin.text.CharCategory CURRENCY_SYMBOL = null;
    public static final kotlin.text.CharCategory.Companion Companion = null;
    public static final kotlin.text.CharCategory DASH_PUNCTUATION = null;
    public static final kotlin.text.CharCategory DECIMAL_DIGIT_NUMBER = null;
    public static final kotlin.text.CharCategory ENCLOSING_MARK = null;
    public static final kotlin.text.CharCategory END_PUNCTUATION = null;
    public static final kotlin.text.CharCategory FINAL_QUOTE_PUNCTUATION = null;
    public static final kotlin.text.CharCategory FORMAT = null;
    public static final kotlin.text.CharCategory INITIAL_QUOTE_PUNCTUATION = null;
    public static final kotlin.text.CharCategory LETTER_NUMBER = null;
    public static final kotlin.text.CharCategory LINE_SEPARATOR = null;
    public static final kotlin.text.CharCategory LOWERCASE_LETTER = null;
    public static final kotlin.text.CharCategory MATH_SYMBOL = null;
    public static final kotlin.text.CharCategory MODIFIER_LETTER = null;
    public static final kotlin.text.CharCategory MODIFIER_SYMBOL = null;
    public static final kotlin.text.CharCategory NON_SPACING_MARK = null;
    public static final kotlin.text.CharCategory OTHER_LETTER = null;
    public static final kotlin.text.CharCategory OTHER_NUMBER = null;
    public static final kotlin.text.CharCategory OTHER_PUNCTUATION = null;
    public static final kotlin.text.CharCategory OTHER_SYMBOL = null;
    public static final kotlin.text.CharCategory PARAGRAPH_SEPARATOR = null;
    public static final kotlin.text.CharCategory PRIVATE_USE = null;
    public static final kotlin.text.CharCategory SPACE_SEPARATOR = null;
    public static final kotlin.text.CharCategory START_PUNCTUATION = null;
    public static final kotlin.text.CharCategory SURROGATE = null;
    public static final kotlin.text.CharCategory TITLECASE_LETTER = null;
    public static final kotlin.text.CharCategory UNASSIGNED = null;
    public static final kotlin.text.CharCategory UPPERCASE_LETTER = null;
    private final java.lang.String code;
    private final int value;

    @kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lkotlin/text/CharCategory$Companion;", "", "()V", "valueOf", "Lkotlin/text/CharCategory;", "category", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final kotlin.text.CharCategory valueOf(int r4) {
                r3 = this;
                r0 = 1
                r1 = 0
                if (r4 < 0) goto La
                r2 = 17
                if (r4 >= r2) goto La
                r2 = r0
                goto Lb
            La:
                r2 = r1
            Lb:
                if (r2 == 0) goto L14
                kotlin.text.CharCategory[] r0 = kotlin.text.CharCategory.values()
                r4 = r0[r4]
                goto L26
            L14:
                r2 = 18
                if (r2 > r4) goto L1d
                r2 = 31
                if (r4 >= r2) goto L1d
                r1 = r0
            L1d:
                if (r1 == 0) goto L27
                kotlin.text.CharCategory[] r1 = kotlin.text.CharCategory.values()
                int r4 = r4 - r0
                r4 = r1[r4]
            L26:
                return r4
            L27:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Category #"
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = " is not defined."
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }
    }

    private static final kotlin.text.CharCategory[] $values() {
            r0 = 30
            kotlin.text.CharCategory[] r0 = new kotlin.text.CharCategory[r0]
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.UNASSIGNED
            r2 = 0
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.UPPERCASE_LETTER
            r2 = 1
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.LOWERCASE_LETTER
            r2 = 2
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.TITLECASE_LETTER
            r2 = 3
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.MODIFIER_LETTER
            r2 = 4
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.OTHER_LETTER
            r2 = 5
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.NON_SPACING_MARK
            r2 = 6
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.ENCLOSING_MARK
            r2 = 7
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.COMBINING_SPACING_MARK
            r2 = 8
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.DECIMAL_DIGIT_NUMBER
            r2 = 9
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.LETTER_NUMBER
            r2 = 10
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.OTHER_NUMBER
            r2 = 11
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.SPACE_SEPARATOR
            r2 = 12
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.LINE_SEPARATOR
            r2 = 13
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.PARAGRAPH_SEPARATOR
            r2 = 14
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.CONTROL
            r2 = 15
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.FORMAT
            r2 = 16
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.PRIVATE_USE
            r2 = 17
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.SURROGATE
            r2 = 18
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.DASH_PUNCTUATION
            r2 = 19
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.START_PUNCTUATION
            r2 = 20
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.END_PUNCTUATION
            r2 = 21
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.CONNECTOR_PUNCTUATION
            r2 = 22
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.OTHER_PUNCTUATION
            r2 = 23
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.MATH_SYMBOL
            r2 = 24
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.CURRENCY_SYMBOL
            r2 = 25
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.MODIFIER_SYMBOL
            r2 = 26
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.OTHER_SYMBOL
            r2 = 27
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.INITIAL_QUOTE_PUNCTUATION
            r2 = 28
            r0[r2] = r1
            kotlin.text.CharCategory r1 = kotlin.text.CharCategory.FINAL_QUOTE_PUNCTUATION
            r2 = 29
            r0[r2] = r1
            return r0
    }

    static {
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 0
            java.lang.String r2 = "UNASSIGNED"
            java.lang.String r3 = "Cn"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.UNASSIGNED = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 1
            java.lang.String r2 = "UPPERCASE_LETTER"
            java.lang.String r3 = "Lu"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.UPPERCASE_LETTER = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 2
            java.lang.String r2 = "LOWERCASE_LETTER"
            java.lang.String r3 = "Ll"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.LOWERCASE_LETTER = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 3
            java.lang.String r2 = "TITLECASE_LETTER"
            java.lang.String r3 = "Lt"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.TITLECASE_LETTER = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 4
            java.lang.String r2 = "MODIFIER_LETTER"
            java.lang.String r3 = "Lm"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.MODIFIER_LETTER = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 5
            java.lang.String r2 = "OTHER_LETTER"
            java.lang.String r3 = "Lo"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.OTHER_LETTER = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 6
            java.lang.String r2 = "NON_SPACING_MARK"
            java.lang.String r3 = "Mn"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.NON_SPACING_MARK = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 7
            java.lang.String r2 = "ENCLOSING_MARK"
            java.lang.String r3 = "Me"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.ENCLOSING_MARK = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 8
            java.lang.String r2 = "COMBINING_SPACING_MARK"
            java.lang.String r3 = "Mc"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.COMBINING_SPACING_MARK = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 9
            java.lang.String r2 = "DECIMAL_DIGIT_NUMBER"
            java.lang.String r3 = "Nd"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.DECIMAL_DIGIT_NUMBER = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 10
            java.lang.String r2 = "LETTER_NUMBER"
            java.lang.String r3 = "Nl"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.LETTER_NUMBER = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 11
            java.lang.String r2 = "OTHER_NUMBER"
            java.lang.String r3 = "No"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.OTHER_NUMBER = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 12
            java.lang.String r2 = "SPACE_SEPARATOR"
            java.lang.String r3 = "Zs"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.SPACE_SEPARATOR = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 13
            java.lang.String r2 = "LINE_SEPARATOR"
            java.lang.String r3 = "Zl"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.LINE_SEPARATOR = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 14
            java.lang.String r2 = "PARAGRAPH_SEPARATOR"
            java.lang.String r3 = "Zp"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.PARAGRAPH_SEPARATOR = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 15
            java.lang.String r2 = "CONTROL"
            java.lang.String r3 = "Cc"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.CONTROL = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 16
            java.lang.String r2 = "FORMAT"
            java.lang.String r3 = "Cf"
            r0.<init>(r2, r1, r1, r3)
            kotlin.text.CharCategory.FORMAT = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 18
            java.lang.String r2 = "PRIVATE_USE"
            r3 = 17
            java.lang.String r4 = "Co"
            r0.<init>(r2, r3, r1, r4)
            kotlin.text.CharCategory.PRIVATE_USE = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r2 = 19
            java.lang.String r3 = "SURROGATE"
            java.lang.String r4 = "Cs"
            r0.<init>(r3, r1, r2, r4)
            kotlin.text.CharCategory.SURROGATE = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 20
            java.lang.String r3 = "DASH_PUNCTUATION"
            java.lang.String r4 = "Pd"
            r0.<init>(r3, r2, r1, r4)
            kotlin.text.CharCategory.DASH_PUNCTUATION = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r2 = 21
            java.lang.String r3 = "START_PUNCTUATION"
            java.lang.String r4 = "Ps"
            r0.<init>(r3, r1, r2, r4)
            kotlin.text.CharCategory.START_PUNCTUATION = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            r1 = 22
            java.lang.String r3 = "END_PUNCTUATION"
            java.lang.String r4 = "Pe"
            r0.<init>(r3, r2, r1, r4)
            kotlin.text.CharCategory.END_PUNCTUATION = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            java.lang.String r2 = "CONNECTOR_PUNCTUATION"
            r3 = 23
            java.lang.String r4 = "Pc"
            r0.<init>(r2, r1, r3, r4)
            kotlin.text.CharCategory.CONNECTOR_PUNCTUATION = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            java.lang.String r1 = "OTHER_PUNCTUATION"
            r2 = 23
            r3 = 24
            java.lang.String r4 = "Po"
            r0.<init>(r1, r2, r3, r4)
            kotlin.text.CharCategory.OTHER_PUNCTUATION = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            java.lang.String r1 = "MATH_SYMBOL"
            r2 = 24
            r3 = 25
            java.lang.String r4 = "Sm"
            r0.<init>(r1, r2, r3, r4)
            kotlin.text.CharCategory.MATH_SYMBOL = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            java.lang.String r1 = "CURRENCY_SYMBOL"
            r2 = 25
            r3 = 26
            java.lang.String r4 = "Sc"
            r0.<init>(r1, r2, r3, r4)
            kotlin.text.CharCategory.CURRENCY_SYMBOL = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            java.lang.String r1 = "MODIFIER_SYMBOL"
            r2 = 26
            r3 = 27
            java.lang.String r4 = "Sk"
            r0.<init>(r1, r2, r3, r4)
            kotlin.text.CharCategory.MODIFIER_SYMBOL = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            java.lang.String r1 = "OTHER_SYMBOL"
            r2 = 27
            r3 = 28
            java.lang.String r4 = "So"
            r0.<init>(r1, r2, r3, r4)
            kotlin.text.CharCategory.OTHER_SYMBOL = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            java.lang.String r1 = "INITIAL_QUOTE_PUNCTUATION"
            r2 = 28
            r3 = 29
            java.lang.String r4 = "Pi"
            r0.<init>(r1, r2, r3, r4)
            kotlin.text.CharCategory.INITIAL_QUOTE_PUNCTUATION = r0
            kotlin.text.CharCategory r0 = new kotlin.text.CharCategory
            java.lang.String r1 = "FINAL_QUOTE_PUNCTUATION"
            r2 = 29
            r3 = 30
            java.lang.String r4 = "Pf"
            r0.<init>(r1, r2, r3, r4)
            kotlin.text.CharCategory.FINAL_QUOTE_PUNCTUATION = r0
            kotlin.text.CharCategory[] r0 = $values()
            kotlin.text.CharCategory.$VALUES = r0
            kotlin.text.CharCategory$Companion r0 = new kotlin.text.CharCategory$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.text.CharCategory.Companion = r0
            return
    }

    CharCategory(java.lang.String r1, int r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.value = r3
            r0.code = r4
            return
    }

    public static kotlin.text.CharCategory valueOf(java.lang.String r1) {
            java.lang.Class<kotlin.text.CharCategory> r0 = kotlin.text.CharCategory.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            kotlin.text.CharCategory r1 = (kotlin.text.CharCategory) r1
            return r1
    }

    public static kotlin.text.CharCategory[] values() {
            kotlin.text.CharCategory[] r0 = kotlin.text.CharCategory.$VALUES
            java.lang.Object r0 = r0.clone()
            kotlin.text.CharCategory[] r0 = (kotlin.text.CharCategory[]) r0
            return r0
    }

    public final boolean contains(char r2) {
            r1 = this;
            int r2 = java.lang.Character.getType(r2)
            int r0 = r1.value
            if (r2 != r0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    public final java.lang.String getCode() {
            r1 = this;
            java.lang.String r0 = r1.code
            return r0
    }

    public final int getValue() {
            r1 = this;
            int r0 = r1.value
            return r0
    }
}
