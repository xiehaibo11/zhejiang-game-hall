package com.qihoo360.replugin.ext.parser.utils.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class EntityArrays {
    private static final String[][] BASIC_ESCAPE = {new String[]{"\"", "&quot;"}, new String[]{"&", "&amp;"}, new String[]{"<", "&lt;"}, new String[]{">", "&gt;"}};
    private static final String[][] APOS_ESCAPE = {new String[]{"'", "&apos;"}};

    public static String[][] BASIC_ESCAPE() {
        return (String[][]) BASIC_ESCAPE.clone();
    }

    public static String[][] APOS_ESCAPE() {
        return (String[][]) APOS_ESCAPE.clone();
    }
}
