package org.json.simple.parser;

class Yylex {
    public static final int STRING_BEGIN = 2;
    public static final int YYEOF = -1;
    public static final int YYINITIAL = 0;
    private static final int[] ZZ_ACTION = null;
    private static final java.lang.String ZZ_ACTION_PACKED_0 = "\u0002\u0000\u0002\u0001\u0001\u0002\u0001\u0003\u0001\u0004\u0003\u0001\u0001\u0005\u0001\u0006\u0001\u0007\u0001\b\u0001\t\u0001\n\u0001\u000b\u0001\f\u0001\r\u0005\u0000\u0001\f\u0001\u000e\u0001\u000f\u0001\u0010\u0001\u0011\u0001\u0012\u0001\u0013\u0001\u0014\u0001\u0000\u0001\u0015\u0001\u0000\u0001\u0015\u0004\u0000\u0001\u0016\u0001\u0017\u0002\u0000\u0001\u0018";
    private static final int[] ZZ_ATTRIBUTE = null;
    private static final java.lang.String ZZ_ATTRIBUTE_PACKED_0 = "\u0002\u0000\u0001\t\u0003\u0001\u0001\t\u0003\u0001\u0006\t\u0002\u0001\u0001\t\u0005\u0000\b\t\u0001\u0000\u0001\u0001\u0001\u0000\u0001\u0001\u0004\u0000\u0002\t\u0002\u0000\u0001\t";
    private static final int ZZ_BUFFERSIZE = 16384;
    private static final char[] ZZ_CMAP = null;
    private static final java.lang.String ZZ_CMAP_PACKED = "\t\u0000\u0001\u0007\u0001\u0007\u0002\u0000\u0001\u0007\u0012\u0000\u0001\u0007\u0001\u0000\u0001\t\b\u0000\u0001\u0006\u0001\u0019\u0001\u0002\u0001\u0004\u0001\n\n\u0003\u0001\u001a\u0006\u0000\u0004\u0001\u0001\u0005\u0001\u0001\u0014\u0000\u0001\u0017\u0001\b\u0001\u0018\u0003\u0000\u0001\u0012\u0001\u000b\u0002\u0001\u0001\u0011\u0001\f\u0005\u0000\u0001\u0013\u0001\u0000\u0001\r\u0003\u0000\u0001\u000e\u0001\u0014\u0001\u000f\u0001\u0010\u0005\u0000\u0001\u0015\u0001\u0000\u0001\u0016ﾂ\u0000";
    private static final java.lang.String[] ZZ_ERROR_MSG = null;
    private static final int[] ZZ_LEXSTATE = null;
    private static final int ZZ_NO_MATCH = 1;
    private static final int ZZ_PUSHBACK_2BIG = 2;
    private static final int[] ZZ_ROWMAP = null;
    private static final java.lang.String ZZ_ROWMAP_PACKED_0 = "\u0000\u0000\u0000\u001b\u00006\u0000Q\u0000l\u0000\u0087\u00006\u0000¢\u0000½\u0000Ø\u00006\u00006\u00006\u00006\u00006\u00006\u0000ó\u0000Ď\u00006\u0000ĩ\u0000ń\u0000ş\u0000ź\u0000ƕ\u00006\u00006\u00006\u00006\u00006\u00006\u00006\u00006\u0000ư\u0000ǋ\u0000Ǧ\u0000Ǧ\u0000ȁ\u0000Ȝ\u0000ȷ\u0000ɒ\u00006\u00006\u0000ɭ\u0000ʈ\u00006";
    private static final int[] ZZ_TRANS = null;
    private static final int ZZ_UNKNOWN_ERROR = 0;
    private java.lang.StringBuffer sb;
    private int yychar;
    private int yycolumn;
    private int yyline;
    private boolean zzAtBOL;
    private boolean zzAtEOF;
    private char[] zzBuffer;
    private int zzCurrentPos;
    private int zzEndRead;
    private int zzLexicalState;
    private int zzMarkedPos;
    private java.io.Reader zzReader;
    private int zzStartRead;
    private int zzState;

    static {
            r0 = 4
            int[] r0 = new int[r0]
            r0 = {x0038: FILL_ARRAY_DATA , data: [0, 0, 1, 1} // fill-array
            org.json.simple.parser.Yylex.ZZ_LEXSTATE = r0
            java.lang.String r0 = "\t\u0000\u0001\u0007\u0001\u0007\u0002\u0000\u0001\u0007\u0012\u0000\u0001\u0007\u0001\u0000\u0001\t\b\u0000\u0001\u0006\u0001\u0019\u0001\u0002\u0001\u0004\u0001\n\n\u0003\u0001\u001a\u0006\u0000\u0004\u0001\u0001\u0005\u0001\u0001\u0014\u0000\u0001\u0017\u0001\b\u0001\u0018\u0003\u0000\u0001\u0012\u0001\u000b\u0002\u0001\u0001\u0011\u0001\f\u0005\u0000\u0001\u0013\u0001\u0000\u0001\r\u0003\u0000\u0001\u000e\u0001\u0014\u0001\u000f\u0001\u0010\u0005\u0000\u0001\u0015\u0001\u0000\u0001\u0016ﾂ\u0000"
            char[] r0 = zzUnpackCMap(r0)
            org.json.simple.parser.Yylex.ZZ_CMAP = r0
            int[] r0 = zzUnpackAction()
            org.json.simple.parser.Yylex.ZZ_ACTION = r0
            int[] r0 = zzUnpackRowMap()
            org.json.simple.parser.Yylex.ZZ_ROWMAP = r0
            r0 = 675(0x2a3, float:9.46E-43)
            int[] r0 = new int[r0]
            r0 = {x0044: FILL_ARRAY_DATA , data: [2, 2, 3, 4, 2, 2, 2, 5, 2, 6, 2, 2, 7, 8, 2, 9, 2, 2, 2, 2, 2, 10, 11, 12, 13, 14, 15, 16, 16, 16, 16, 16, 16, 16, 16, 17, 18, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 4, 19, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 21, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 22, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 23, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 16, 16, 16, 16, 16, 16, 16, 16, -1, -1, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, -1, -1, -1, -1, -1, -1, -1, -1, 24, 25, 26, 27, 28, 29, 30, 31, 32, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 33, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 34, 35, -1, -1, 34, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 36, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 37, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 38, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 39, -1, 39, -1, 39, -1, -1, -1, -1, -1, 39, 39, -1, -1, -1, -1, 39, 39, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 33, -1, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 35, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 38, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 40, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 41, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 42, -1, 42, -1, 42, -1, -1, -1, -1, -1, 42, 42, -1, -1, -1, -1, 42, 42, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, -1, 43, -1, 43, -1, -1, -1, -1, -1, 43, 43, -1, -1, -1, -1, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, 44, -1, 44, -1, 44, -1, -1, -1, -1, -1, 44, 44, -1, -1, -1, -1, 44, 44, -1, -1, -1, -1, -1, -1, -1, -1} // fill-array
            org.json.simple.parser.Yylex.ZZ_TRANS = r0
            java.lang.String r0 = "Unkown internal scanner error"
            java.lang.String r1 = "Error: could not match input"
            java.lang.String r2 = "Error: pushback value was too large"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            org.json.simple.parser.Yylex.ZZ_ERROR_MSG = r0
            int[] r0 = zzUnpackAttribute()
            org.json.simple.parser.Yylex.ZZ_ATTRIBUTE = r0
            return
    }

    Yylex(java.io.InputStream r2) {
            r1 = this;
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    Yylex(java.io.Reader r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.zzLexicalState = r0
            r0 = 16384(0x4000, float:2.2959E-41)
            char[] r0 = new char[r0]
            r1.zzBuffer = r0
            r0 = 1
            r1.zzAtBOL = r0
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1.sb = r0
            r1.zzReader = r2
            return
    }

    private boolean zzRefill() throws java.io.IOException {
            r5 = this;
            int r0 = r5.zzStartRead
            r1 = 0
            if (r0 <= 0) goto L20
            char[] r2 = r5.zzBuffer
            int r3 = r5.zzEndRead
            int r3 = r3 - r0
            java.lang.System.arraycopy(r2, r0, r2, r1, r3)
            int r0 = r5.zzEndRead
            int r2 = r5.zzStartRead
            int r0 = r0 - r2
            r5.zzEndRead = r0
            int r0 = r5.zzCurrentPos
            int r0 = r0 - r2
            r5.zzCurrentPos = r0
            int r0 = r5.zzMarkedPos
            int r0 = r0 - r2
            r5.zzMarkedPos = r0
            r5.zzStartRead = r1
        L20:
            int r0 = r5.zzCurrentPos
            char[] r2 = r5.zzBuffer
            int r3 = r2.length
            if (r0 < r3) goto L31
            int r0 = r0 * 2
            char[] r0 = new char[r0]
            int r3 = r2.length
            java.lang.System.arraycopy(r2, r1, r0, r1, r3)
            r5.zzBuffer = r0
        L31:
            java.io.Reader r0 = r5.zzReader
            char[] r2 = r5.zzBuffer
            int r3 = r5.zzEndRead
            int r4 = r2.length
            int r4 = r4 - r3
            int r0 = r0.read(r2, r3, r4)
            if (r0 <= 0) goto L45
            int r2 = r5.zzEndRead
            int r2 = r2 + r0
            r5.zzEndRead = r2
            return r1
        L45:
            r2 = 1
            if (r0 != 0) goto L5e
            java.io.Reader r0 = r5.zzReader
            int r0 = r0.read()
            r3 = -1
            if (r0 != r3) goto L52
            return r2
        L52:
            char[] r2 = r5.zzBuffer
            int r3 = r5.zzEndRead
            int r4 = r3 + 1
            r5.zzEndRead = r4
            char r0 = (char) r0
            r2[r3] = r0
            return r1
        L5e:
            return r2
    }

    private void zzScanError(int r2) {
            r1 = this;
            java.lang.String[] r0 = org.json.simple.parser.Yylex.ZZ_ERROR_MSG     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L5
            r2 = r0[r2]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L5
            goto La
        L5:
            java.lang.String[] r2 = org.json.simple.parser.Yylex.ZZ_ERROR_MSG
            r0 = 0
            r2 = r2[r0]
        La:
            java.lang.Error r0 = new java.lang.Error
            r0.<init>(r2)
            throw r0
    }

    private static int zzUnpackAction(java.lang.String r5, int r6, int[] r7) {
            int r0 = r5.length()
            r1 = 0
        L5:
            if (r1 >= r0) goto L20
            int r2 = r1 + 1
            char r1 = r5.charAt(r1)
            int r3 = r2 + 1
            char r2 = r5.charAt(r2)
        L13:
            int r4 = r6 + 1
            r7[r6] = r2
            int r1 = r1 + (-1)
            if (r1 > 0) goto L1e
            r1 = r3
            r6 = r4
            goto L5
        L1e:
            r6 = r4
            goto L13
        L20:
            return r6
    }

    private static int[] zzUnpackAction() {
            r0 = 45
            int[] r0 = new int[r0]
            r1 = 0
            java.lang.String r2 = "\u0002\u0000\u0002\u0001\u0001\u0002\u0001\u0003\u0001\u0004\u0003\u0001\u0001\u0005\u0001\u0006\u0001\u0007\u0001\b\u0001\t\u0001\n\u0001\u000b\u0001\f\u0001\r\u0005\u0000\u0001\f\u0001\u000e\u0001\u000f\u0001\u0010\u0001\u0011\u0001\u0012\u0001\u0013\u0001\u0014\u0001\u0000\u0001\u0015\u0001\u0000\u0001\u0015\u0004\u0000\u0001\u0016\u0001\u0017\u0002\u0000\u0001\u0018"
            zzUnpackAction(r2, r1, r0)
            return r0
    }

    private static int zzUnpackAttribute(java.lang.String r5, int r6, int[] r7) {
            int r0 = r5.length()
            r1 = 0
        L5:
            if (r1 >= r0) goto L20
            int r2 = r1 + 1
            char r1 = r5.charAt(r1)
            int r3 = r2 + 1
            char r2 = r5.charAt(r2)
        L13:
            int r4 = r6 + 1
            r7[r6] = r2
            int r1 = r1 + (-1)
            if (r1 > 0) goto L1e
            r1 = r3
            r6 = r4
            goto L5
        L1e:
            r6 = r4
            goto L13
        L20:
            return r6
    }

    private static int[] zzUnpackAttribute() {
            r0 = 45
            int[] r0 = new int[r0]
            r1 = 0
            java.lang.String r2 = "\u0002\u0000\u0001\t\u0003\u0001\u0001\t\u0003\u0001\u0006\t\u0002\u0001\u0001\t\u0005\u0000\b\t\u0001\u0000\u0001\u0001\u0001\u0000\u0001\u0001\u0004\u0000\u0002\t\u0002\u0000\u0001\t"
            zzUnpackAttribute(r2, r1, r0)
            return r0
    }

    private static char[] zzUnpackCMap(java.lang.String r6) {
            r0 = 65536(0x10000, float:9.1835E-41)
            char[] r0 = new char[r0]
            r1 = 0
            r2 = r1
        L6:
            r3 = 90
            if (r1 >= r3) goto L23
            int r3 = r1 + 1
            char r1 = r6.charAt(r1)
            int r4 = r3 + 1
            char r3 = r6.charAt(r3)
        L16:
            int r5 = r2 + 1
            r0[r2] = r3
            int r1 = r1 + (-1)
            if (r1 > 0) goto L21
            r1 = r4
            r2 = r5
            goto L6
        L21:
            r2 = r5
            goto L16
        L23:
            return r0
    }

    private static int zzUnpackRowMap(java.lang.String r5, int r6, int[] r7) {
            int r0 = r5.length()
            r1 = 0
        L5:
            if (r1 >= r0) goto L1d
            int r2 = r1 + 1
            char r1 = r5.charAt(r1)
            int r1 = r1 << 16
            int r3 = r6 + 1
            int r4 = r2 + 1
            char r2 = r5.charAt(r2)
            r1 = r1 | r2
            r7[r6] = r1
            r6 = r3
            r1 = r4
            goto L5
        L1d:
            return r6
    }

    private static int[] zzUnpackRowMap() {
            r0 = 45
            int[] r0 = new int[r0]
            r1 = 0
            java.lang.String r2 = "\u0000\u0000\u0000\u001b\u00006\u0000Q\u0000l\u0000\u0087\u00006\u0000¢\u0000½\u0000Ø\u00006\u00006\u00006\u00006\u00006\u00006\u0000ó\u0000Ď\u00006\u0000ĩ\u0000ń\u0000ş\u0000ź\u0000ƕ\u00006\u00006\u00006\u00006\u00006\u00006\u00006\u00006\u0000ư\u0000ǋ\u0000Ǧ\u0000Ǧ\u0000ȁ\u0000Ȝ\u0000ȷ\u0000ɒ\u00006\u00006\u0000ɭ\u0000ʈ\u00006"
            zzUnpackRowMap(r2, r1, r0)
            return r0
    }

    int getPosition() {
            r1 = this;
            int r0 = r1.yychar
            return r0
    }

    public final void yybegin(int r1) {
            r0 = this;
            r0.zzLexicalState = r1
            return
    }

    public final char yycharat(int r3) {
            r2 = this;
            char[] r0 = r2.zzBuffer
            int r1 = r2.zzStartRead
            int r1 = r1 + r3
            char r3 = r0[r1]
            return r3
    }

    public final void yyclose() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.zzAtEOF = r0
            int r0 = r1.zzStartRead
            r1.zzEndRead = r0
            java.io.Reader r0 = r1.zzReader
            if (r0 == 0) goto Le
            r0.close()
        Le:
            return
    }

    public final int yylength() {
            r2 = this;
            int r0 = r2.zzMarkedPos
            int r1 = r2.zzStartRead
            int r0 = r0 - r1
            return r0
    }

    public org.json.simple.parser.Yytoken yylex() throws java.io.IOException, org.json.simple.parser.ParseException {
            r18 = this;
            r1 = r18
            int r0 = r1.zzEndRead
            char[] r2 = r1.zzBuffer
            char[] r3 = org.json.simple.parser.Yylex.ZZ_CMAP
            int[] r4 = org.json.simple.parser.Yylex.ZZ_TRANS
            int[] r5 = org.json.simple.parser.Yylex.ZZ_ROWMAP
            int[] r6 = org.json.simple.parser.Yylex.ZZ_ATTRIBUTE
        Le:
            int r7 = r1.zzMarkedPos
            int r8 = r1.yychar
            int r9 = r1.zzStartRead
            int r9 = r7 - r9
            int r8 = r8 + r9
            r1.yychar = r8
            r1.zzStartRead = r7
            r1.zzCurrentPos = r7
            int[] r8 = org.json.simple.parser.Yylex.ZZ_LEXSTATE
            int r9 = r1.zzLexicalState
            r8 = r8[r9]
            r1.zzState = r8
            r8 = -1
            r9 = r7
            r10 = r8
        L28:
            r11 = 8
            r12 = 1
            if (r7 >= r0) goto L32
            int r13 = r7 + 1
            char r7 = r2[r7]
            goto L5c
        L32:
            boolean r13 = r1.zzAtEOF
            if (r13 == 0) goto L38
            r7 = r8
            goto L76
        L38:
            r1.zzCurrentPos = r7
            r1.zzMarkedPos = r9
            boolean r0 = r18.zzRefill()
            int r2 = r1.zzCurrentPos
            int r9 = r1.zzMarkedPos
            char[] r7 = r1.zzBuffer
            int r13 = r1.zzEndRead
            if (r0 == 0) goto L4e
            r2 = r7
            r7 = r8
            r0 = r13
            goto L76
        L4e:
            int r0 = r2 + 1
            char r2 = r7[r2]
            r16 = r13
            r13 = r0
            r0 = r16
            r17 = r7
            r7 = r2
            r2 = r17
        L5c:
            int r14 = r1.zzState
            r14 = r5[r14]
            char r15 = r3[r7]
            int r14 = r14 + r15
            r14 = r4[r14]
            if (r14 != r8) goto L68
            goto L76
        L68:
            r1.zzState = r14
            r15 = r6[r14]
            r8 = r15 & 1
            if (r8 != r12) goto L178
            r8 = r15 & 8
            if (r8 != r11) goto L174
            r9 = r13
            r10 = r14
        L76:
            r1.zzMarkedPos = r9
            if (r10 >= 0) goto L7b
            goto L7f
        L7b:
            int[] r8 = org.json.simple.parser.Yylex.ZZ_ACTION
            r10 = r8[r10]
        L7f:
            r8 = 2
            r9 = 0
            r13 = 0
            switch(r10) {
                case 1: goto L15e;
                case 2: goto L150;
                case 3: goto Le;
                case 4: goto L142;
                case 5: goto L13c;
                case 6: goto L136;
                case 7: goto L12f;
                case 8: goto L128;
                case 9: goto L121;
                case 10: goto L11a;
                case 11: goto L10f;
                case 12: goto L10a;
                case 13: goto Lfb;
                case 14: goto Lf6;
                case 15: goto Lf1;
                case 16: goto Lea;
                case 17: goto Le5;
                case 18: goto Le0;
                case 19: goto Ldb;
                case 20: goto Ld2;
                case 21: goto Lc4;
                case 22: goto Lbe;
                case 23: goto Lb0;
                case 24: goto L91;
                case 25: goto Le;
                case 26: goto Le;
                case 27: goto Le;
                case 28: goto Le;
                case 29: goto Le;
                case 30: goto Le;
                case 31: goto Le;
                case 32: goto Le;
                case 33: goto Le;
                case 34: goto Le;
                case 35: goto Le;
                case 36: goto Le;
                case 37: goto Le;
                case 38: goto Le;
                case 39: goto Le;
                case 40: goto Le;
                case 41: goto Le;
                case 42: goto Le;
                case 43: goto Le;
                case 44: goto Le;
                case 45: goto Le;
                case 46: goto Le;
                case 47: goto Le;
                case 48: goto Le;
                default: goto L85;
            }
        L85:
            r8 = -1
            if (r7 != r8) goto L16f
            int r7 = r1.zzStartRead
            int r8 = r1.zzCurrentPos
            if (r7 != r8) goto L16f
            r1.zzAtEOF = r12
            return r9
        L91:
            java.lang.String r7 = r18.yytext()     // Catch: java.lang.Exception -> La7
            java.lang.String r7 = r7.substring(r8)     // Catch: java.lang.Exception -> La7
            r9 = 16
            int r7 = java.lang.Integer.parseInt(r7, r9)     // Catch: java.lang.Exception -> La7
            java.lang.StringBuffer r9 = r1.sb     // Catch: java.lang.Exception -> La7
            char r7 = (char) r7     // Catch: java.lang.Exception -> La7
            r9.append(r7)     // Catch: java.lang.Exception -> La7
            goto Le
        La7:
            r0 = move-exception
            org.json.simple.parser.ParseException r2 = new org.json.simple.parser.ParseException
            int r3 = r1.yychar
            r2.<init>(r3, r8, r0)
            throw r2
        Lb0:
            java.lang.String r0 = r18.yytext()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            org.json.simple.parser.Yytoken r2 = new org.json.simple.parser.Yytoken
            r2.<init>(r13, r0)
            return r2
        Lbe:
            org.json.simple.parser.Yytoken r0 = new org.json.simple.parser.Yytoken
            r0.<init>(r13, r9)
            return r0
        Lc4:
            java.lang.String r0 = r18.yytext()
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            org.json.simple.parser.Yytoken r2 = new org.json.simple.parser.Yytoken
            r2.<init>(r13, r0)
            return r2
        Ld2:
            java.lang.StringBuffer r7 = r1.sb
            r8 = 9
        Ld6:
            r7.append(r8)
            goto Le
        Ldb:
            java.lang.StringBuffer r7 = r1.sb
            r8 = 13
            goto Ld6
        Le0:
            java.lang.StringBuffer r7 = r1.sb
            r8 = 10
            goto Ld6
        Le5:
            java.lang.StringBuffer r7 = r1.sb
            r8 = 12
            goto Ld6
        Lea:
            java.lang.StringBuffer r7 = r1.sb
            r7.append(r11)
            goto Le
        Lf1:
            java.lang.StringBuffer r7 = r1.sb
            r8 = 47
            goto Ld6
        Lf6:
            java.lang.StringBuffer r7 = r1.sb
            r8 = 34
            goto Ld6
        Lfb:
            r1.yybegin(r13)
            org.json.simple.parser.Yytoken r0 = new org.json.simple.parser.Yytoken
            java.lang.StringBuffer r2 = r1.sb
            java.lang.String r2 = r2.toString()
            r0.<init>(r13, r2)
            return r0
        L10a:
            java.lang.StringBuffer r7 = r1.sb
            r8 = 92
            goto Ld6
        L10f:
            java.lang.StringBuffer r7 = r1.sb
            java.lang.String r8 = r18.yytext()
            r7.append(r8)
            goto Le
        L11a:
            org.json.simple.parser.Yytoken r0 = new org.json.simple.parser.Yytoken
            r2 = 6
            r0.<init>(r2, r9)
            return r0
        L121:
            org.json.simple.parser.Yytoken r0 = new org.json.simple.parser.Yytoken
            r2 = 5
            r0.<init>(r2, r9)
            return r0
        L128:
            org.json.simple.parser.Yytoken r0 = new org.json.simple.parser.Yytoken
            r2 = 4
            r0.<init>(r2, r9)
            return r0
        L12f:
            org.json.simple.parser.Yytoken r0 = new org.json.simple.parser.Yytoken
            r2 = 3
            r0.<init>(r2, r9)
            return r0
        L136:
            org.json.simple.parser.Yytoken r0 = new org.json.simple.parser.Yytoken
            r0.<init>(r8, r9)
            return r0
        L13c:
            org.json.simple.parser.Yytoken r0 = new org.json.simple.parser.Yytoken
            r0.<init>(r12, r9)
            return r0
        L142:
            java.lang.StringBuffer r7 = r1.sb
            int r9 = r7.length()
            r7.delete(r13, r9)
            r1.yybegin(r8)
            goto Le
        L150:
            java.lang.String r0 = r18.yytext()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            org.json.simple.parser.Yytoken r2 = new org.json.simple.parser.Yytoken
            r2.<init>(r13, r0)
            return r2
        L15e:
            org.json.simple.parser.ParseException r0 = new org.json.simple.parser.ParseException
            int r2 = r1.yychar
            java.lang.Character r3 = new java.lang.Character
            char r4 = r1.yycharat(r13)
            r3.<init>(r4)
            r0.<init>(r2, r13, r3)
            throw r0
        L16f:
            r1.zzScanError(r12)
            goto Le
        L174:
            r8 = -1
            r9 = r13
            r10 = r14
            goto L179
        L178:
            r8 = -1
        L179:
            r7 = r13
            goto L28
    }

    public void yypushback(int r2) {
            r1 = this;
            int r0 = r1.yylength()
            if (r2 <= r0) goto La
            r0 = 2
            r1.zzScanError(r0)
        La:
            int r0 = r1.zzMarkedPos
            int r0 = r0 - r2
            r1.zzMarkedPos = r0
            return
    }

    public final void yyreset(java.io.Reader r1) {
            r0 = this;
            r0.zzReader = r1
            r1 = 1
            r0.zzAtBOL = r1
            r1 = 0
            r0.zzAtEOF = r1
            r0.zzStartRead = r1
            r0.zzEndRead = r1
            r0.zzMarkedPos = r1
            r0.zzCurrentPos = r1
            r0.yycolumn = r1
            r0.yychar = r1
            r0.yyline = r1
            r0.zzLexicalState = r1
            return
    }

    public final int yystate() {
            r1 = this;
            int r0 = r1.zzLexicalState
            return r0
    }

    public final java.lang.String yytext() {
            r4 = this;
            java.lang.String r0 = new java.lang.String
            char[] r1 = r4.zzBuffer
            int r2 = r4.zzStartRead
            int r3 = r4.zzMarkedPos
            int r3 = r3 - r2
            r0.<init>(r1, r2, r3)
            return r0
    }
}
