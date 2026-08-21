package kotlin.text;

@kotlin.Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\r\b\u0086\u0001\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u00012\u00020\u0002B\u0019\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0004¢\u0006\u0002\u0010\u0006R\u0014\u0010\u0005\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\bj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010¨\u0006\u0011"}, d2 = {"Lkotlin/text/RegexOption;", "", "Lkotlin/text/FlagEnum;", "value", "", "mask", "(Ljava/lang/String;III)V", "getMask", "()I", "getValue", "IGNORE_CASE", "MULTILINE", "LITERAL", "UNIX_LINES", "COMMENTS", "DOT_MATCHES_ALL", "CANON_EQ", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public enum RegexOption extends java.lang.Enum<kotlin.text.RegexOption> implements kotlin.text.FlagEnum {
    private static final kotlin.text.RegexOption[] $VALUES = null;
    public static final kotlin.text.RegexOption CANON_EQ = null;
    public static final kotlin.text.RegexOption COMMENTS = null;
    public static final kotlin.text.RegexOption DOT_MATCHES_ALL = null;
    public static final kotlin.text.RegexOption IGNORE_CASE = null;
    public static final kotlin.text.RegexOption LITERAL = null;
    public static final kotlin.text.RegexOption MULTILINE = null;
    public static final kotlin.text.RegexOption UNIX_LINES = null;
    private final int mask;
    private final int value;

    private static final kotlin.text.RegexOption[] $values() {
            r0 = 7
            kotlin.text.RegexOption[] r0 = new kotlin.text.RegexOption[r0]
            kotlin.text.RegexOption r1 = kotlin.text.RegexOption.IGNORE_CASE
            r2 = 0
            r0[r2] = r1
            kotlin.text.RegexOption r1 = kotlin.text.RegexOption.MULTILINE
            r2 = 1
            r0[r2] = r1
            kotlin.text.RegexOption r1 = kotlin.text.RegexOption.LITERAL
            r2 = 2
            r0[r2] = r1
            kotlin.text.RegexOption r1 = kotlin.text.RegexOption.UNIX_LINES
            r2 = 3
            r0[r2] = r1
            kotlin.text.RegexOption r1 = kotlin.text.RegexOption.COMMENTS
            r2 = 4
            r0[r2] = r1
            kotlin.text.RegexOption r1 = kotlin.text.RegexOption.DOT_MATCHES_ALL
            r2 = 5
            r0[r2] = r1
            kotlin.text.RegexOption r1 = kotlin.text.RegexOption.CANON_EQ
            r2 = 6
            r0[r2] = r1
            return r0
    }

    static {
            kotlin.text.RegexOption r7 = new kotlin.text.RegexOption
            java.lang.String r1 = "IGNORE_CASE"
            r2 = 0
            r3 = 2
            r4 = 0
            r5 = 2
            r6 = 0
            r0 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            kotlin.text.RegexOption.IGNORE_CASE = r7
            kotlin.text.RegexOption r0 = new kotlin.text.RegexOption
            java.lang.String r9 = "MULTILINE"
            r10 = 1
            r11 = 8
            r12 = 0
            r13 = 2
            r14 = 0
            r8 = r0
            r8.<init>(r9, r10, r11, r12, r13, r14)
            kotlin.text.RegexOption.MULTILINE = r0
            kotlin.text.RegexOption r0 = new kotlin.text.RegexOption
            java.lang.String r2 = "LITERAL"
            r4 = 16
            r5 = 0
            r6 = 2
            r7 = 0
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            kotlin.text.RegexOption.LITERAL = r0
            kotlin.text.RegexOption r0 = new kotlin.text.RegexOption
            java.lang.String r9 = "UNIX_LINES"
            r10 = 3
            r11 = 1
            r8 = r0
            r8.<init>(r9, r10, r11, r12, r13, r14)
            kotlin.text.RegexOption.UNIX_LINES = r0
            kotlin.text.RegexOption r0 = new kotlin.text.RegexOption
            java.lang.String r2 = "COMMENTS"
            r3 = 4
            r4 = 4
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            kotlin.text.RegexOption.COMMENTS = r0
            kotlin.text.RegexOption r0 = new kotlin.text.RegexOption
            java.lang.String r9 = "DOT_MATCHES_ALL"
            r10 = 5
            r11 = 32
            r8 = r0
            r8.<init>(r9, r10, r11, r12, r13, r14)
            kotlin.text.RegexOption.DOT_MATCHES_ALL = r0
            kotlin.text.RegexOption r0 = new kotlin.text.RegexOption
            java.lang.String r2 = "CANON_EQ"
            r3 = 6
            r4 = 128(0x80, float:1.8E-43)
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            kotlin.text.RegexOption.CANON_EQ = r0
            kotlin.text.RegexOption[] r0 = $values()
            kotlin.text.RegexOption.$VALUES = r0
            return
    }

    RegexOption(java.lang.String r1, int r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.value = r3
            r0.mask = r4
            return
    }

    RegexOption(java.lang.String r1, int r2, int r3, int r4, int r5, kotlin.jvm.internal.DefaultConstructorMarker r6) {
            r0 = this;
            r5 = r5 & 2
            if (r5 == 0) goto L5
            r4 = r3
        L5:
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public static kotlin.text.RegexOption valueOf(java.lang.String r1) {
            java.lang.Class<kotlin.text.RegexOption> r0 = kotlin.text.RegexOption.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            kotlin.text.RegexOption r1 = (kotlin.text.RegexOption) r1
            return r1
    }

    public static kotlin.text.RegexOption[] values() {
            kotlin.text.RegexOption[] r0 = kotlin.text.RegexOption.$VALUES
            java.lang.Object r0 = r0.clone()
            kotlin.text.RegexOption[] r0 = (kotlin.text.RegexOption[]) r0
            return r0
    }

    @Override
    public int getMask() {
            r1 = this;
            int r0 = r1.mask
            return r0
    }

    @Override
    public int getValue() {
            r1 = this;
            int r0 = r1.value
            return r0
    }
}
