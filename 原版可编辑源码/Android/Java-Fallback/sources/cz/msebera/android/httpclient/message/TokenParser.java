package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.Immutable
public class TokenParser {
    public static final char CR = '\r';
    public static final char DQUOTE = '\"';
    public static final char ESCAPE = '\\';
    public static final char HT = '\t';
    public static final cz.msebera.android.httpclient.message.TokenParser INSTANCE = null;
    public static final char LF = '\n';
    public static final char SP = ' ';

    static {
            cz.msebera.android.httpclient.message.TokenParser r0 = new cz.msebera.android.httpclient.message.TokenParser
            r0.<init>()
            cz.msebera.android.httpclient.message.TokenParser.INSTANCE = r0
            return
    }

    public TokenParser() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.BitSet INIT_BITSET(int... r4) {
            java.util.BitSet r0 = new java.util.BitSet
            r0.<init>()
            int r1 = r4.length
            r2 = 0
        L7:
            if (r2 >= r1) goto L11
            r3 = r4[r2]
            r0.set(r3)
            int r2 = r2 + 1
            goto L7
        L11:
            return r0
    }

    public static boolean isWhitespace(char r1) {
            r0 = 32
            if (r1 == r0) goto L13
            r0 = 9
            if (r1 == r0) goto L13
            r0 = 13
            if (r1 == r0) goto L13
            r0 = 10
            if (r1 != r0) goto L11
            goto L13
        L11:
            r1 = 0
            goto L14
        L13:
            r1 = 1
        L14:
            return r1
    }

    public void copyContent(cz.msebera.android.httpclient.util.CharArrayBuffer r6, cz.msebera.android.httpclient.message.ParserCursor r7, java.util.BitSet r8, java.lang.StringBuilder r9) {
            r5 = this;
            int r0 = r7.getPos()
            int r1 = r7.getPos()
            int r2 = r7.getUpperBound()
        Lc:
            if (r1 >= r2) goto L29
            char r3 = r6.charAt(r1)
            if (r8 == 0) goto L1a
            boolean r4 = r8.get(r3)
            if (r4 != 0) goto L29
        L1a:
            boolean r4 = isWhitespace(r3)
            if (r4 == 0) goto L21
            goto L29
        L21:
            int r0 = r0 + 1
            r9.append(r3)
            int r1 = r1 + 1
            goto Lc
        L29:
            r7.updatePos(r0)
            return
    }

    public void copyQuotedContent(cz.msebera.android.httpclient.util.CharArrayBuffer r10, cz.msebera.android.httpclient.message.ParserCursor r11, java.lang.StringBuilder r12) {
            r9 = this;
            boolean r0 = r11.atEnd()
            if (r0 == 0) goto L7
            return
        L7:
            int r0 = r11.getPos()
            int r1 = r11.getPos()
            int r2 = r11.getUpperBound()
            char r3 = r10.charAt(r0)
            r4 = 34
            if (r3 == r4) goto L1c
            return
        L1c:
            r3 = 1
            int r0 = r0 + r3
            int r1 = r1 + r3
            r5 = 0
            r6 = r0
            r0 = 0
        L22:
            if (r1 >= r2) goto L51
            char r7 = r10.charAt(r1)
            r8 = 92
            if (r0 == 0) goto L38
            if (r7 == r4) goto L33
            if (r7 == r8) goto L33
            r12.append(r8)
        L33:
            r12.append(r7)
            r0 = 0
            goto L4c
        L38:
            if (r7 != r4) goto L3d
            int r6 = r6 + 1
            goto L51
        L3d:
            if (r7 != r8) goto L41
            r0 = 1
            goto L4c
        L41:
            r8 = 13
            if (r7 == r8) goto L4c
            r8 = 10
            if (r7 == r8) goto L4c
            r12.append(r7)
        L4c:
            int r1 = r1 + 1
            int r6 = r6 + 1
            goto L22
        L51:
            r11.updatePos(r6)
            return
    }

    public void copyUnquotedContent(cz.msebera.android.httpclient.util.CharArrayBuffer r6, cz.msebera.android.httpclient.message.ParserCursor r7, java.util.BitSet r8, java.lang.StringBuilder r9) {
            r5 = this;
            int r0 = r7.getPos()
            int r1 = r7.getPos()
            int r2 = r7.getUpperBound()
        Lc:
            if (r1 >= r2) goto L2d
            char r3 = r6.charAt(r1)
            if (r8 == 0) goto L1a
            boolean r4 = r8.get(r3)
            if (r4 != 0) goto L2d
        L1a:
            boolean r4 = isWhitespace(r3)
            if (r4 != 0) goto L2d
            r4 = 34
            if (r3 != r4) goto L25
            goto L2d
        L25:
            int r0 = r0 + 1
            r9.append(r3)
            int r1 = r1 + 1
            goto Lc
        L2d:
            r7.updatePos(r0)
            return
    }

    public java.lang.String parseToken(cz.msebera.android.httpclient.util.CharArrayBuffer r6, cz.msebera.android.httpclient.message.ParserCursor r7, java.util.BitSet r8) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L6:
            r2 = 0
        L7:
            boolean r3 = r7.atEnd()
            if (r3 != 0) goto L3a
            int r3 = r7.getPos()
            char r3 = r6.charAt(r3)
            if (r8 == 0) goto L1e
            boolean r4 = r8.get(r3)
            if (r4 == 0) goto L1e
            goto L3a
        L1e:
            boolean r3 = isWhitespace(r3)
            if (r3 == 0) goto L29
            r5.skipWhiteSpace(r6, r7)
            r2 = 1
            goto L7
        L29:
            if (r2 == 0) goto L36
            int r2 = r0.length()
            if (r2 <= 0) goto L36
            r2 = 32
            r0.append(r2)
        L36:
            r5.copyContent(r6, r7, r8, r0)
            goto L6
        L3a:
            java.lang.String r6 = r0.toString()
            return r6
    }

    public java.lang.String parseValue(cz.msebera.android.httpclient.util.CharArrayBuffer r7, cz.msebera.android.httpclient.message.ParserCursor r8, java.util.BitSet r9) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L6:
            r2 = 0
        L7:
            boolean r3 = r8.atEnd()
            if (r3 != 0) goto L4d
            int r3 = r8.getPos()
            char r3 = r7.charAt(r3)
            if (r9 == 0) goto L1e
            boolean r4 = r9.get(r3)
            if (r4 == 0) goto L1e
            goto L4d
        L1e:
            boolean r4 = isWhitespace(r3)
            if (r4 == 0) goto L29
            r6.skipWhiteSpace(r7, r8)
            r2 = 1
            goto L7
        L29:
            r4 = 34
            r5 = 32
            if (r3 != r4) goto L3e
            if (r2 == 0) goto L3a
            int r2 = r0.length()
            if (r2 <= 0) goto L3a
            r0.append(r5)
        L3a:
            r6.copyQuotedContent(r7, r8, r0)
            goto L6
        L3e:
            if (r2 == 0) goto L49
            int r2 = r0.length()
            if (r2 <= 0) goto L49
            r0.append(r5)
        L49:
            r6.copyUnquotedContent(r7, r8, r9, r0)
            goto L6
        L4d:
            java.lang.String r7 = r0.toString()
            return r7
    }

    public void skipWhiteSpace(cz.msebera.android.httpclient.util.CharArrayBuffer r5, cz.msebera.android.httpclient.message.ParserCursor r6) {
            r4 = this;
            int r0 = r6.getPos()
            int r1 = r6.getPos()
            int r2 = r6.getUpperBound()
        Lc:
            if (r1 >= r2) goto L1e
            char r3 = r5.charAt(r1)
            boolean r3 = isWhitespace(r3)
            if (r3 != 0) goto L19
            goto L1e
        L19:
            int r0 = r0 + 1
            int r1 = r1 + 1
            goto Lc
        L1e:
            r6.updatePos(r0)
            return
    }
}
