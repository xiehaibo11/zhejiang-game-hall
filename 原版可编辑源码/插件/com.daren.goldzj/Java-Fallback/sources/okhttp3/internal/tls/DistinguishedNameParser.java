package okhttp3.internal.tls;

import javax.security.auth.x500.X500Principal;

final class DistinguishedNameParser {
    private int beg;
    private char[] chars;
    private int cur;
    private final String dn;
    private int end;
    private final int length;
    private int pos;

    DistinguishedNameParser(X500Principal r2) {
        this.dn = r2.getName("RFC2253");
        this.length = this.dn.length();
    }

    private String nextAT() {
    L2:
        int r0 = this.pos;
        if (r0 >= this.length) goto L7;
        if (this.chars[r0] != ' ') goto L7;
        this.pos = r0 + 1;
    L7:
        int r02 = this.pos;
        if (r02 != this.length) goto L11;
        return null;
    L11:
        this.beg = r02;
        this.pos = r02 + 1;
    L12:
        int r03 = this.pos;
        if (r03 >= this.length) goto L19;
        char[] r1 = this.chars;
        if (r1[r03] == '=') goto L19;
        if (r1[r03] == ' ') goto L19;
        this.pos = r03 + 1;
    L19:
        int r04 = this.pos;
        if (r04 >= this.length) goto L63;
        this.end = r04;
        if (this.chars[r04] != ' ') goto L37;
    L23:
        int r05 = this.pos;
        if (r05 >= this.length) goto L30;
        char[] r12 = this.chars;
        if (r12[r05] == '=') goto L30;
        if (r12[r05] != ' ') goto L30;
        this.pos = r05 + 1;
    L30:
        char[] r06 = this.chars;
        int r13 = this.pos;
        if (r06[r13] != '=') goto L36;
        if (r13 != this.length) goto L37;
    L36:
        throw new IllegalStateException("Unexpected end of DN: " + this.dn);
    L37:
        this.pos++;
    L38:
        int r07 = this.pos;
        if (r07 >= this.length) goto L43;
        if (this.chars[r07] != ' ') goto L43;
        this.pos = r07 + 1;
    L43:
        int r08 = this.end;
        int r14 = this.beg;
        if ((r08 - r14) <= 4) goto L60;
        char[] r09 = this.chars;
        if (r09[r14 + 3] != '.') goto L60;
        if (r09[r14] != 'O') goto L50;
    L51:
        char[] r010 = this.chars;
        int r15 = this.beg;
        if (r010[r15 + 1] != 'I') goto L54;
    L55:
        char[] r011 = this.chars;
        int r16 = this.beg;
        if (r011[r16 + 2] != 'D') goto L58;
    L59:
        this.beg += 4;
        goto L60
    L58:
        if (r011[r16 + 2] != 'd') goto L60;
    L54:
        if (r010[r15 + 1] != 'i') goto L60;
    L50:
        if (r09[r14] == 'o') goto L51;
    L60:
        char[] r17 = this.chars;
        int r2 = this.beg;
        return new String(r17, r2, this.end - r2);
    L63:
        throw new IllegalStateException("Unexpected end of DN: " + this.dn);
    }

    private String quotedAV() {
        this.pos++;
        this.beg = this.pos;
        this.end = this.beg;
    L3:
        int r0 = this.pos;
        if (r0 == this.length) goto L21;
        char[] r1 = this.chars;
        if (r1[r0] == '\"') goto L7;
        if (r1[r0] != '\\') goto L18;
        r1[this.end] = getEscaped();
    L19:
        this.pos++;
        this.end++;
        goto L3
    L18:
        r1[this.end] = r1[r0];
        goto L19
    L7:
        this.pos = r0 + 1;
    L8:
        int r02 = this.pos;
        if (r02 >= this.length) goto L13;
        if (this.chars[r02] != ' ') goto L13;
        this.pos = r02 + 1;
    L13:
        char[] r12 = this.chars;
        int r2 = this.beg;
        return new String(r12, r2, this.end - r2);
    L21:
        throw new IllegalStateException("Unexpected end of DN: " + this.dn);
    }

    private String hexAV() {
        int r0 = this.pos;
        if ((r0 + 4) >= this.length) goto L42;
        this.beg = r0;
        this.pos = r0 + 1;
    L5:
        int r02 = this.pos;
        if (r02 == this.length) goto L28;
        char[] r1 = this.chars;
        if (r1[r02] == '+') goto L28;
        if (r1[r02] == ',') goto L28;
        if (r1[r02] == ';') goto L28;
        if (r1[r02] == ' ') goto L16;
        if (r1[r02] < 'A') goto L27;
        if (r1[r02] > 'F') goto L27;
        r1[r02] = (char) (r1[r02] + ' ');
    L27:
        this.pos++;
        goto L5
    L16:
        this.end = r02;
        this.pos = r02 + 1;
    L17:
        int r03 = this.pos;
        if (r03 >= this.length) goto L29;
        if (this.chars[r03] != ' ') goto L29;
        this.pos = r03 + 1;
    L29:
        int r04 = this.end;
        int r12 = this.beg;
        int r05 = r04 - r12;
        if (r05 < 5) goto L40;
        if ((r05 & 1) == 0) goto L40;
        byte[] r2 = new byte[r05 / 2];
        int r3 = 0;
        int r13 = r12 + 1;
    L35:
        if (r3 >= r2.length) goto L38;
        r2[r3] = (byte) getByte(r13);
        r13 = r13 + 2;
        r3 = r3 + 1;
        goto L35
    L38:
        return new String(this.chars, this.beg, r05);
    L40:
        throw new IllegalStateException("Unexpected end of DN: " + this.dn);
    L28:
        this.end = this.pos;
        goto L29
    L42:
        throw new IllegalStateException("Unexpected end of DN: " + this.dn);
    }

    private String escapedAV() {
        int r0 = this.pos;
        this.beg = r0;
        this.end = r0;
    L3:
        int r02 = this.pos;
        if (r02 >= this.length) goto L5;
        char[] r1 = this.chars;
        char r2 = r1[r02];
        if (r2 != ' ') goto L9;
        int r22 = this.end;
        this.cur = r22;
        this.pos = r02 + 1;
        this.end = r22 + 1;
        r1[r22] = ' ';
    L19:
        int r03 = this.pos;
        if (r03 >= this.length) goto L24;
        char[] r12 = this.chars;
        if (r12[r03] != ' ') goto L24;
        int r23 = this.end;
        this.end = r23 + 1;
        r12[r23] = ' ';
        this.pos = r03 + 1;
    L24:
        int r04 = this.pos;
        if (r04 == this.length) goto L32;
        char[] r13 = this.chars;
        if (r13[r04] == ',') goto L32;
        if (r13[r04] == '+') goto L32;
        if (r13[r04] != ';') goto L3;
    L32:
        char[] r14 = this.chars;
        int r24 = this.beg;
        return new String(r14, r24, this.cur - r24);
    L9:
        if (r2 == ';') goto L16;
        if (r2 != '\\') goto L12;
        int r05 = this.end;
        this.end = r05 + 1;
        r1[r05] = getEscaped();
        this.pos++;
        goto L3
    L12:
        if (r2 == '+') goto L16;
        if (r2 == ',') goto L16;
        int r25 = this.end;
        this.end = r25 + 1;
        r1[r25] = r1[r02];
        this.pos = r02 + 1;
    L16:
        char[] r15 = this.chars;
        int r26 = this.beg;
        return new String(r15, r26, this.end - r26);
    L5:
        char[] r16 = this.chars;
        int r27 = this.beg;
        return new String(r16, r27, this.end - r27);
    }

    private char getEscaped() {
        this.pos++;
        int r0 = this.pos;
        if (r0 == this.length) goto L23;
        char r02 = this.chars[r0];
        if (r02 == ' ') goto L21;
        if (r02 == '%') goto L21;
        if (r02 == '\\') goto L21;
        if (r02 == '_') goto L21;
        if (r02 == '\"') goto L21;
        if (r02 == '#') goto L21;
        switch(r02) {
            case 42: goto L21;
            case 43: goto L21;
            case 44: goto L21;
            default: goto L17;
        };
    L17:
        switch(r02) {
            case 59: goto L21;
            case 60: goto L21;
            case 61: goto L21;
            case 62: goto L21;
            default: goto L19;
        };
    L19:
        return getUTF8();
    L21:
        return this.chars[this.pos];
    L23:
        throw new IllegalStateException("Unexpected end of DN: " + this.dn);
    }

    private char getUTF8() {
        int r0 = getByte(this.pos);
        this.pos++;
        if (r0 >= 128) goto L7;
        return (char) r0;
    L7:
        if (r0 >= 192) goto L9;
    L31:
        return '?';
    L9:
        if (r0 > 247) goto L31;
        if (r0 > 223) goto L14;
        int r02 = r0 & 31;
        int r3 = 1;
    L17:
        int r5 = 0;
    L18:
        if (r5 >= r3) goto L30;
        this.pos++;
        int r6 = this.pos;
        if (r6 == this.length) goto L28;
        if (this.chars[r6] != '\\') goto L28;
        this.pos = r6 + 1;
        int r62 = getByte(this.pos);
        this.pos++;
        if ((r62 & 192) != 128) goto L26;
        r02 = (r02 << 6) + (r62 & 63);
        r5 = r5 + 1;
        goto L18
    L26:
        return '?';
    L28:
        return '?';
    L30:
        return (char) r02;
    L14:
        if (r0 > 239) goto L16;
        r3 = 2;
        r02 = r0 & 15;
        goto L17
    L16:
        r3 = 3;
        r02 = r0 & 7;
        goto L17
    }

    private int getByte(int r10) {
        int r0 = r10 + 1;
        if (r0 >= this.length) goto L31;
        char r102 = this.chars[r10];
        if (r102 < '0') goto L8;
        if (r102 > '9') goto L8;
        int r103 = r102 - '0';
    L14:
        char r02 = this.chars[r0];
        if (r02 < '0') goto L18;
        if (r02 > '9') goto L18;
        int r03 = r02 - '0';
    L25:
        return (r103 << 4) + r03;
    L18:
        if (r02 < 'a') goto L21;
        if (r02 > 'f') goto L21;
        r03 = r02 - 'W';
    L21:
        if (r02 < 'A') goto L27;
        if (r02 > 'F') goto L27;
        r03 = r02 - '7';
    L27:
        throw new IllegalStateException("Malformed DN: " + this.dn);
    L8:
        if (r102 < 'a') goto L11;
        if (r102 > 'f') goto L11;
        r103 = r102 - 'W';
    L11:
        if (r102 < 'A') goto L29;
        if (r102 > 'F') goto L29;
        r103 = r102 - '7';
    L29:
        throw new IllegalStateException("Malformed DN: " + this.dn);
    L31:
        throw new IllegalStateException("Malformed DN: " + this.dn);
    }

    public String findMostSpecific(String r9) {
        this.pos = 0;
        this.beg = 0;
        this.end = 0;
        this.cur = 0;
        this.chars = this.dn.toCharArray();
        String r0 = nextAT();
        if (r0 != null) goto L5;
        return null;
    L5:
        int r2 = this.pos;
        if (r2 == this.length) goto L7;
        char r22 = this.chars[r2];
        if (r22 != '\"') goto L11;
        String r23 = quotedAV();
    L20:
        if (r9.equalsIgnoreCase(r0) == true) goto L21;
        int r02 = this.pos;
        if (r02 >= this.length) goto L24;
        char[] r24 = this.chars;
        if (r24[r02] != ',') goto L28;
    L35:
        this.pos++;
        r0 = nextAT();
        if (r0 != null) goto L5;
        throw new IllegalStateException("Malformed DN: " + this.dn);
    L28:
        if (r24[r02] == ';') goto L35;
        if (r24[r02] == '+') goto L35;
        throw new IllegalStateException("Malformed DN: " + this.dn);
    L24:
        return null;
    L21:
        return r23;
    L11:
        if (r22 == '#') goto L17;
        if (r22 == '+') goto L16;
        if (r22 == ',') goto L16;
        if (r22 == ';') goto L16;
        r23 = escapedAV();
    L16:
        r23 = "";
        goto L20
    L17:
        r23 = hexAV();
        goto L20
    L7:
        return null;
    }
}
