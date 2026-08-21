package com.qihoo360.replugin.ext.parser.utils.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class XmlEscaper {
    public static final com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator ESCAPE_XML10 = null;

    static {
            com.qihoo360.replugin.ext.parser.utils.xml.AggregateTranslator r0 = new com.qihoo360.replugin.ext.parser.utils.xml.AggregateTranslator
            r1 = 6
            com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator[] r2 = new com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator[r1]
            com.qihoo360.replugin.ext.parser.utils.xml.LookupTranslator r3 = new com.qihoo360.replugin.ext.parser.utils.xml.LookupTranslator
            java.lang.String[][] r4 = com.qihoo360.replugin.ext.parser.utils.xml.EntityArrays.BASIC_ESCAPE()
            r3.<init>(r4)
            r4 = 0
            r2[r4] = r3
            com.qihoo360.replugin.ext.parser.utils.xml.LookupTranslator r3 = new com.qihoo360.replugin.ext.parser.utils.xml.LookupTranslator
            java.lang.String[][] r5 = com.qihoo360.replugin.ext.parser.utils.xml.EntityArrays.APOS_ESCAPE()
            r3.<init>(r5)
            r5 = 1
            r2[r5] = r3
            com.qihoo360.replugin.ext.parser.utils.xml.LookupTranslator r3 = new com.qihoo360.replugin.ext.parser.utils.xml.LookupTranslator
            r6 = 31
            java.lang.String[][] r6 = new java.lang.String[r6][]
            java.lang.String r7 = ""
            java.lang.String r8 = "\u0000"
            java.lang.String[] r8 = new java.lang.String[]{r8, r7}
            r6[r4] = r8
            java.lang.String r4 = "\u0001"
            java.lang.String[] r4 = new java.lang.String[]{r4, r7}
            r6[r5] = r4
            java.lang.String r4 = "\u0002"
            java.lang.String[] r4 = new java.lang.String[]{r4, r7}
            r5 = 2
            r6[r5] = r4
            java.lang.String r4 = "\u0003"
            java.lang.String[] r4 = new java.lang.String[]{r4, r7}
            r8 = 3
            r6[r8] = r4
            java.lang.String r4 = "\u0004"
            java.lang.String[] r4 = new java.lang.String[]{r4, r7}
            r9 = 4
            r6[r9] = r4
            java.lang.String r4 = "\u0005"
            java.lang.String[] r4 = new java.lang.String[]{r4, r7}
            r10 = 5
            r6[r10] = r4
            java.lang.String r4 = "\u0006"
            java.lang.String[] r4 = new java.lang.String[]{r4, r7}
            r6[r1] = r4
            java.lang.String r1 = "\u0007"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 7
            r6[r4] = r1
            java.lang.String r1 = "\b"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 8
            r6[r4] = r1
            java.lang.String r1 = "\u000b"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 9
            r6[r4] = r1
            java.lang.String r1 = "\f"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 10
            r6[r4] = r1
            java.lang.String r1 = "\u000e"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 11
            r6[r4] = r1
            java.lang.String r1 = "\u000f"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 12
            r6[r4] = r1
            java.lang.String r1 = "\u0010"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 13
            r6[r4] = r1
            java.lang.String r1 = "\u0011"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 14
            r6[r4] = r1
            java.lang.String r1 = "\u0012"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 15
            r6[r4] = r1
            java.lang.String r1 = "\u0013"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 16
            r6[r4] = r1
            java.lang.String r1 = "\u0014"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 17
            r6[r4] = r1
            java.lang.String r1 = "\u0015"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 18
            r6[r4] = r1
            java.lang.String r1 = "\u0016"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 19
            r6[r4] = r1
            java.lang.String r1 = "\u0017"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 20
            r6[r4] = r1
            java.lang.String r1 = "\u0018"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 21
            r6[r4] = r1
            java.lang.String r1 = "\u0019"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 22
            r6[r4] = r1
            java.lang.String r1 = "\u001a"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 23
            r6[r4] = r1
            java.lang.String r1 = "\u001b"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 24
            r6[r4] = r1
            java.lang.String r1 = "\u001c"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 25
            r6[r4] = r1
            java.lang.String r1 = "\u001d"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 26
            r6[r4] = r1
            java.lang.String r1 = "\u001e"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 27
            r6[r4] = r1
            java.lang.String r1 = "\u001f"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 28
            r6[r4] = r1
            java.lang.String r1 = "\ufffe"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 29
            r6[r4] = r1
            java.lang.String r1 = "\uffff"
            java.lang.String[] r1 = new java.lang.String[]{r1, r7}
            r4 = 30
            r6[r4] = r1
            r3.<init>(r6)
            r2[r5] = r3
            r1 = 127(0x7f, float:1.78E-43)
            r3 = 132(0x84, float:1.85E-43)
            com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper r1 = com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper.between(r1, r3)
            r2[r8] = r1
            r1 = 134(0x86, float:1.88E-43)
            r3 = 159(0x9f, float:2.23E-43)
            com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper r1 = com.qihoo360.replugin.ext.parser.utils.xml.NumericEntityEscaper.between(r1, r3)
            r2[r9] = r1
            com.qihoo360.replugin.ext.parser.utils.xml.UnicodeUnpairedSurrogateRemover r1 = new com.qihoo360.replugin.ext.parser.utils.xml.UnicodeUnpairedSurrogateRemover
            r1.<init>()
            r2[r10] = r1
            r0.<init>(r2)
            com.qihoo360.replugin.ext.parser.utils.xml.XmlEscaper.ESCAPE_XML10 = r0
            return
    }

    public XmlEscaper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String escapeXml10(java.lang.String r1) {
            com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator r0 = com.qihoo360.replugin.ext.parser.utils.xml.XmlEscaper.ESCAPE_XML10
            java.lang.String r1 = r0.translate(r1)
            return r1
    }
}
