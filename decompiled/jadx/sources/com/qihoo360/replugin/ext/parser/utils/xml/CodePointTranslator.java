package com.qihoo360.replugin.ext.parser.utils.xml;

import java.io.IOException;
import java.io.Writer;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
abstract class CodePointTranslator extends CharSequenceTranslator {
    public abstract boolean translate(int i, Writer writer) throws IOException;

    CodePointTranslator() {
    }

    @Override // com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator
    public final int translate(CharSequence charSequence, int i, Writer writer) throws IOException {
        return translate(Character.codePointAt(charSequence, i), writer) ? 1 : 0;
    }
}
