package com.qihoo360.replugin.ext.parser.utils.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class EntityArrays {
    private static final java.lang.String[][] APOS_ESCAPE = null;
    private static final java.lang.String[][] BASIC_ESCAPE = null;

    static {
            r0 = 4
            java.lang.String[][] r0 = new java.lang.String[r0][]
            java.lang.String r1 = "\""
            java.lang.String r2 = "&quot;"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2}
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "&"
            java.lang.String r3 = "&amp;"
            java.lang.String[] r1 = new java.lang.String[]{r1, r3}
            r3 = 1
            r0[r3] = r1
            java.lang.String r1 = "<"
            java.lang.String r4 = "&lt;"
            java.lang.String[] r1 = new java.lang.String[]{r1, r4}
            r4 = 2
            r0[r4] = r1
            java.lang.String r1 = ">"
            java.lang.String r4 = "&gt;"
            java.lang.String[] r1 = new java.lang.String[]{r1, r4}
            r4 = 3
            r0[r4] = r1
            com.qihoo360.replugin.ext.parser.utils.xml.EntityArrays.BASIC_ESCAPE = r0
            java.lang.String[][] r0 = new java.lang.String[r3][]
            java.lang.String r1 = "'"
            java.lang.String r3 = "&apos;"
            java.lang.String[] r1 = new java.lang.String[]{r1, r3}
            r0[r2] = r1
            com.qihoo360.replugin.ext.parser.utils.xml.EntityArrays.APOS_ESCAPE = r0
            return
    }

    public EntityArrays() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String[][] APOS_ESCAPE() {
            java.lang.String[][] r0 = com.qihoo360.replugin.ext.parser.utils.xml.EntityArrays.APOS_ESCAPE
            java.lang.Object r0 = r0.clone()
            java.lang.String[][] r0 = (java.lang.String[][]) r0
            return r0
    }

    public static java.lang.String[][] BASIC_ESCAPE() {
            java.lang.String[][] r0 = com.qihoo360.replugin.ext.parser.utils.xml.EntityArrays.BASIC_ESCAPE
            java.lang.Object r0 = r0.clone()
            java.lang.String[][] r0 = (java.lang.String[][]) r0
            return r0
    }
}
