package com.qihoo360.replugin.ext.parser.utils.xml;

import java.io.IOException;
import java.io.Writer;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class AggregateTranslator extends CharSequenceTranslator {
    private final CharSequenceTranslator[] translators;

    public AggregateTranslator(CharSequenceTranslator... charSequenceTranslatorArr) {
        this.translators = charSequenceTranslatorArr;
    }

    @Override
    public int translate(CharSequence charSequence, int i, Writer writer) throws IOException {
        for (CharSequenceTranslator charSequenceTranslator : this.translators) {
            int iTranslate = charSequenceTranslator.translate(charSequence, i, writer);
            if (iTranslate != 0) {
                return iTranslate;
            }
        }
        return 0;
    }
}
