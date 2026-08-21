package com.qihoo360.replugin.ext.parser.utils.xml;

import java.io.IOException;
import java.io.Writer;
import java.util.HashMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class LookupTranslator extends CharSequenceTranslator {
    private final int longest;
    private final HashMap<String, CharSequence> lookupMap = new HashMap<>();
    private final int shortest;

    public LookupTranslator(CharSequence[]... charSequenceArr) {
        int i = 0;
        int i2 = Integer.MAX_VALUE;
        if (charSequenceArr != null) {
            int i3 = 0;
            for (CharSequence[] charSequenceArr2 : charSequenceArr) {
                this.lookupMap.put(charSequenceArr2[0].toString(), charSequenceArr2[1]);
                int length = charSequenceArr2[0].length();
                i2 = length < i2 ? length : i2;
                if (length > i3) {
                    i3 = length;
                }
            }
            i = i3;
        }
        this.shortest = i2;
        this.longest = i;
    }

    @Override
    public int translate(CharSequence charSequence, int i, Writer writer) throws IOException {
        int length = this.longest;
        if (i + length > charSequence.length()) {
            length = charSequence.length() - i;
        }
        while (length >= this.shortest) {
            CharSequence charSequence2 = this.lookupMap.get(charSequence.subSequence(i, i + length).toString());
            if (charSequence2 != null) {
                writer.write(charSequence2.toString());
                return length;
            }
            length--;
        }
        return 0;
    }
}
