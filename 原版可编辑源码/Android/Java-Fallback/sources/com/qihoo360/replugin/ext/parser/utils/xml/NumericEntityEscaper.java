package com.qihoo360.replugin.ext.parser.utils.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class NumericEntityEscaper extends com.qihoo360.replugin.ext.parser.utils.xml.CodePointTranslator {
    private final int above;
    private final int below;
    private final boolean between;

    public NumericEntityEscaper() {
            r3 = this;
            r0 = 0
            r1 = 2147483647(0x7fffffff, float:NaN)
            r2 = 1
            r3.<init>(r0, r1, r2)
            return
    }

    private NumericEntityEscaper(int r1, int r2, boolean r3) {
            r0 = this;
            r0.<init>()
            r0.below = r1
            r0.above = r2
            r0.between = r3
            return
    }

    public static com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper above(int r1) {
            r0 = 0
            com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper r1 = outsideOf(r0, r1)
            return r1
    }

    public static com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper below(int r1) {
            r0 = 2147483647(0x7fffffff, float:NaN)
            com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper r1 = outsideOf(r1, r0)
            return r1
    }

    public static com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper between(int r2, int r3) {
            com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper r0 = new com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper
            r1 = 1
            r0.<init>(r2, r3, r1)
            return r0
    }

    public static com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper outsideOf(int r2, int r3) {
            com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper r0 = new com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper
            r1 = 0
            r0.<init>(r2, r3, r1)
            return r0
    }

    @Override
    public boolean translate(int r3, java.io.Writer r4) throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.between
            r1 = 0
            if (r0 == 0) goto Le
            int r0 = r2.below
            if (r3 < r0) goto Ld
            int r0 = r2.above
            if (r3 <= r0) goto L17
        Ld:
            return r1
        Le:
            int r0 = r2.below
            if (r3 < r0) goto L17
            int r0 = r2.above
            if (r3 > r0) goto L17
            return r1
        L17:
            java.lang.String r0 = "&#"
            r4.write(r0)
            r0 = 10
            java.lang.String r3 = java.lang.Integer.toString(r3, r0)
            r4.write(r3)
            r3 = 59
            r4.write(r3)
            r3 = 1
            return r3
    }
}
