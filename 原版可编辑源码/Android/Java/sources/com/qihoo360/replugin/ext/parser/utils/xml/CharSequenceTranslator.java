package com.qihoo360.replugin.ext.parser.utils.xml;

import java.io.IOException;
import java.io.StringWriter;
import java.io.Writer;
import java.util.Locale;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
abstract class CharSequenceTranslator {
    public abstract int translate(CharSequence charSequence, int i, Writer writer) throws IOException;

    CharSequenceTranslator() {
    }

    public static String hex(int i) {
        return Integer.toHexString(i).toUpperCase(Locale.ENGLISH);
    }

    public final String translate(CharSequence charSequence) {
        if (charSequence == null) {
            return null;
        }
        try {
            StringWriter stringWriter = new StringWriter(charSequence.length() * 2);
            translate(charSequence, stringWriter);
            return stringWriter.toString();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

    public final void translate(CharSequence charSequence, Writer writer) throws IOException {
        if (writer == null) {
            throw new IllegalArgumentException("The Writer must not be null");
        }
        if (charSequence == null) {
            return;
        }
        int length = charSequence.length();
        int length2 = 0;
        while (length2 < length) {
            int iTranslate = translate(charSequence, length2, writer);
            if (iTranslate == 0) {
                char[] chars = Character.toChars(Character.codePointAt(charSequence, length2));
                writer.write(chars);
                length2 += chars.length;
            } else {
                for (int i = 0; i < iTranslate; i++) {
                    length2 += Character.charCount(Character.codePointAt(charSequence, length2));
                }
            }
        }
    }

    public final CharSequenceTranslator with(CharSequenceTranslator... charSequenceTranslatorArr) {
        CharSequenceTranslator[] charSequenceTranslatorArr2 = new CharSequenceTranslator[charSequenceTranslatorArr.length + 1];
        charSequenceTranslatorArr2[0] = this;
        System.arraycopy(charSequenceTranslatorArr, 0, charSequenceTranslatorArr2, 1, charSequenceTranslatorArr.length);
        return new AggregateTranslator(charSequenceTranslatorArr2);
    }
}
