package com.qihoo360.replugin.ext.parser.utils.xml;

import java.io.IOException;
import java.io.Writer;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
class NumericEntityEscaper extends CodePointTranslator {
    private final int above;
    private final int below;
    private final boolean between;

    private NumericEntityEscaper(int i, int i2, boolean z) {
        this.below = i;
        this.above = i2;
        this.between = z;
    }

    public NumericEntityEscaper() {
        this(0, Integer.MAX_VALUE, true);
    }

    public static NumericEntityEscaper below(int i) {
        return outsideOf(i, Integer.MAX_VALUE);
    }

    public static NumericEntityEscaper above(int i) {
        return outsideOf(0, i);
    }

    public static NumericEntityEscaper between(int i, int i2) {
        return new NumericEntityEscaper(i, i2, true);
    }

    public static NumericEntityEscaper outsideOf(int i, int i2) {
        return new NumericEntityEscaper(i, i2, false);
    }

    @Override // com.qihoo360.replugin.ext.parser.utils.xml.CodePointTranslator
    public boolean translate(int i, Writer writer) throws IOException {
        if (this.between) {
            if (i < this.below || i > this.above) {
                return false;
            }
        } else if (i >= this.below && i <= this.above) {
            return false;
        }
        writer.write("&#");
        writer.write(Integer.toString(i, 10));
        writer.write(59);
        return true;
    }
}
