package org.apache.commons.codec1.language;

public class Metaphone implements org.apache.commons.codec1.StringEncoder {
    private static final java.lang.String FRONTV = "EIY";
    private static final java.lang.String VARSON = "CSPTG";
    private static final java.lang.String VOWELS = "AEIOU";
    private int maxCodeLen;

    public Metaphone() {
            r1 = this;
            r1.<init>()
            r0 = 4
            r1.maxCodeLen = r0
            return
    }

    private boolean isLastChar(int r2, int r3) {
            r1 = this;
            r0 = 1
            int r3 = r3 + r0
            if (r3 != r2) goto L5
            return r0
        L5:
            r2 = 0
            return r2
    }

    private boolean isNextChar(java.lang.StringBuilder r4, int r5, char r6) {
            r3 = this;
            r0 = 0
            if (r5 < 0) goto L13
            int r1 = r4.length()
            r2 = 1
            int r1 = r1 - r2
            if (r5 >= r1) goto L13
            int r5 = r5 + r2
            char r4 = r4.charAt(r5)
            if (r4 != r6) goto L13
            r0 = r2
        L13:
            return r0
    }

    private boolean isPreviousChar(java.lang.StringBuilder r3, int r4, char r5) {
            r2 = this;
            r0 = 0
            if (r4 <= 0) goto L12
            int r1 = r3.length()
            if (r4 >= r1) goto L12
            r1 = 1
            int r4 = r4 - r1
            char r3 = r3.charAt(r4)
            if (r3 != r5) goto L12
            r0 = r1
        L12:
            return r0
    }

    private boolean isVowel(java.lang.StringBuilder r1, int r2) {
            r0 = this;
            char r1 = r1.charAt(r2)
            java.lang.String r2 = "AEIOU"
            int r1 = r2.indexOf(r1)
            if (r1 < 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    private boolean regionMatch(java.lang.StringBuilder r3, int r4, java.lang.String r5) {
            r2 = this;
            if (r4 < 0) goto L1d
            int r0 = r5.length()
            int r0 = r0 + r4
            int r0 = r0 + (-1)
            int r1 = r3.length()
            if (r0 >= r1) goto L1d
            int r0 = r5.length()
            int r0 = r0 + r4
            java.lang.String r3 = r3.substring(r4, r0)
            boolean r3 = r3.equals(r5)
            goto L1e
        L1d:
            r3 = 0
        L1e:
            return r3
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.metaphone(r2)
            return r2
        Lb:
            org.apache.commons.codec1.EncoderException r2 = new org.apache.commons.codec1.EncoderException
            java.lang.String r0 = "Parameter supplied to Metaphone encode is not of type java.lang.String"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String encode(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.metaphone(r1)
            return r1
    }

    public int getMaxCodeLen() {
            r1 = this;
            int r0 = r1.maxCodeLen
            return r0
    }

    public boolean isMetaphoneEqual(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = r0.metaphone(r1)
            java.lang.String r2 = r0.metaphone(r2)
            boolean r1 = r1.equals(r2)
            return r1
    }

    public java.lang.String metaphone(java.lang.String r17) {
            r16 = this;
            r0 = r16
            r1 = r17
            if (r1 == 0) goto L2b0
            int r2 = r17.length()
            if (r2 != 0) goto Le
            goto L2b0
        Le:
            r3 = 1
            if (r2 != r3) goto L18
            java.util.Locale r2 = java.util.Locale.ENGLISH
            java.lang.String r1 = r1.toUpperCase(r2)
            return r1
        L18:
            java.util.Locale r2 = java.util.Locale.ENGLISH
            java.lang.String r1 = r1.toUpperCase(r2)
            char[] r1 = r1.toCharArray()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r4 = 40
            r2.<init>(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r5 = 10
            r4.<init>(r5)
            r5 = 0
            char r6 = r1[r5]
            r7 = 65
            r8 = 71
            r9 = 88
            r10 = 72
            r11 = 83
            r12 = 75
            if (r6 == r7) goto L86
            if (r6 == r8) goto L76
            if (r6 == r12) goto L76
            r7 = 80
            if (r6 == r7) goto L76
            r7 = 87
            if (r6 == r7) goto L59
            if (r6 == r9) goto L53
            r2.append(r1)
            goto L95
        L53:
            r1[r5] = r11
            r2.append(r1)
            goto L95
        L59:
            char r6 = r1[r3]
            r13 = 82
            if (r6 != r13) goto L65
            int r6 = r1.length
            int r6 = r6 - r3
            r2.append(r1, r3, r6)
            goto L95
        L65:
            char r6 = r1[r3]
            if (r6 != r10) goto L72
            int r6 = r1.length
            int r6 = r6 - r3
            r2.append(r1, r3, r6)
            r2.setCharAt(r5, r7)
            goto L95
        L72:
            r2.append(r1)
            goto L95
        L76:
            char r6 = r1[r3]
            r7 = 78
            if (r6 != r7) goto L82
            int r6 = r1.length
            int r6 = r6 - r3
            r2.append(r1, r3, r6)
            goto L95
        L82:
            r2.append(r1)
            goto L95
        L86:
            char r6 = r1[r3]
            r7 = 69
            if (r6 != r7) goto L92
            int r6 = r1.length
            int r6 = r6 - r3
            r2.append(r1, r3, r6)
            goto L95
        L92:
            r2.append(r1)
        L95:
            int r1 = r2.length()
        L99:
            int r6 = r4.length()
            int r7 = r16.getMaxCodeLen()
            if (r6 >= r7) goto L2ab
            if (r5 < r1) goto La7
            goto L2ab
        La7:
            char r6 = r2.charAt(r5)
            r7 = 67
            if (r6 == r7) goto Lb9
            boolean r13 = r0.isPreviousChar(r2, r5, r6)
            if (r13 == 0) goto Lb9
            int r5 = r5 + 1
            goto L298
        Lb9:
            r13 = 74
            r14 = 84
            r15 = 70
            java.lang.String r3 = "EIY"
            switch(r6) {
                case 65: goto L291;
                case 66: goto L27e;
                case 67: goto L214;
                case 68: goto L1ef;
                case 69: goto L291;
                case 70: goto L1ea;
                case 71: goto L190;
                case 72: goto L169;
                case 73: goto L291;
                case 74: goto L1ea;
                case 75: goto L157;
                case 76: goto L1ea;
                case 77: goto L1ea;
                case 78: goto L1ea;
                case 79: goto L291;
                case 80: goto L147;
                case 81: goto L142;
                case 82: goto L1ea;
                case 83: goto L11f;
                case 84: goto Leb;
                case 85: goto L291;
                case 86: goto Le6;
                case 87: goto Ld3;
                case 88: goto Lcb;
                case 89: goto Ld3;
                case 90: goto Lc6;
                default: goto Lc4;
            }
        Lc4:
            goto L296
        Lc6:
            r4.append(r11)
            goto L296
        Lcb:
            r4.append(r12)
            r4.append(r11)
            goto L296
        Ld3:
            boolean r3 = r0.isLastChar(r1, r5)
            if (r3 != 0) goto L296
            int r3 = r5 + 1
            boolean r3 = r0.isVowel(r2, r3)
            if (r3 == 0) goto L296
            r4.append(r6)
            goto L296
        Le6:
            r4.append(r15)
            goto L296
        Leb:
            java.lang.String r3 = "TIA"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 != 0) goto L11a
            java.lang.String r3 = "TIO"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 == 0) goto Lfc
            goto L11a
        Lfc:
            java.lang.String r3 = "TCH"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 == 0) goto L106
            goto L296
        L106:
            java.lang.String r3 = "TH"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 == 0) goto L115
            r3 = 48
            r4.append(r3)
            goto L296
        L115:
            r4.append(r14)
            goto L296
        L11a:
            r4.append(r9)
            goto L296
        L11f:
            java.lang.String r3 = "SH"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 != 0) goto L13d
            java.lang.String r3 = "SIO"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 != 0) goto L13d
            java.lang.String r3 = "SIA"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 == 0) goto L138
            goto L13d
        L138:
            r4.append(r11)
            goto L296
        L13d:
            r4.append(r9)
            goto L296
        L142:
            r4.append(r12)
            goto L296
        L147:
            boolean r3 = r0.isNextChar(r2, r5, r10)
            if (r3 == 0) goto L152
            r4.append(r15)
            goto L296
        L152:
            r4.append(r6)
            goto L296
        L157:
            if (r5 <= 0) goto L164
            boolean r3 = r0.isPreviousChar(r2, r5, r7)
            if (r3 != 0) goto L296
            r4.append(r6)
            goto L296
        L164:
            r4.append(r6)
            goto L296
        L169:
            boolean r3 = r0.isLastChar(r1, r5)
            if (r3 == 0) goto L171
            goto L296
        L171:
            if (r5 <= 0) goto L183
            int r3 = r5 + (-1)
            char r3 = r2.charAt(r3)
            java.lang.String r6 = "CSPTG"
            int r3 = r6.indexOf(r3)
            if (r3 < 0) goto L183
            goto L296
        L183:
            int r3 = r5 + 1
            boolean r3 = r0.isVowel(r2, r3)
            if (r3 == 0) goto L296
            r4.append(r10)
            goto L296
        L190:
            int r6 = r5 + 1
            boolean r7 = r0.isLastChar(r1, r6)
            if (r7 == 0) goto L1a0
            boolean r7 = r0.isNextChar(r2, r5, r10)
            if (r7 == 0) goto L1a0
            goto L296
        L1a0:
            boolean r7 = r0.isLastChar(r1, r6)
            if (r7 != 0) goto L1b6
            boolean r7 = r0.isNextChar(r2, r5, r10)
            if (r7 == 0) goto L1b6
            int r7 = r5 + 2
            boolean r7 = r0.isVowel(r2, r7)
            if (r7 != 0) goto L1b6
            goto L296
        L1b6:
            if (r5 <= 0) goto L1ca
            java.lang.String r7 = "GN"
            boolean r7 = r0.regionMatch(r2, r5, r7)
            if (r7 != 0) goto L296
            java.lang.String r7 = "GNED"
            boolean r7 = r0.regionMatch(r2, r5, r7)
            if (r7 == 0) goto L1ca
            goto L296
        L1ca:
            boolean r7 = r0.isPreviousChar(r2, r5, r8)
            boolean r14 = r0.isLastChar(r1, r5)
            if (r14 != 0) goto L1e5
            char r6 = r2.charAt(r6)
            int r3 = r3.indexOf(r6)
            if (r3 < 0) goto L1e5
            if (r7 != 0) goto L1e5
            r4.append(r13)
            goto L296
        L1e5:
            r4.append(r12)
            goto L296
        L1ea:
            r4.append(r6)
            goto L296
        L1ef:
            int r6 = r5 + 1
            boolean r6 = r0.isLastChar(r1, r6)
            if (r6 != 0) goto L20f
            boolean r6 = r0.isNextChar(r2, r5, r8)
            if (r6 == 0) goto L20f
            int r6 = r5 + 2
            char r7 = r2.charAt(r6)
            int r3 = r3.indexOf(r7)
            if (r3 < 0) goto L20f
            r4.append(r13)
            r5 = r6
            goto L296
        L20f:
            r4.append(r14)
            goto L296
        L214:
            boolean r6 = r0.isPreviousChar(r2, r5, r11)
            if (r6 == 0) goto L22e
            boolean r6 = r0.isLastChar(r1, r5)
            if (r6 != 0) goto L22e
            int r6 = r5 + 1
            char r6 = r2.charAt(r6)
            int r6 = r3.indexOf(r6)
            if (r6 < 0) goto L22e
            goto L296
        L22e:
            java.lang.String r6 = "CIA"
            boolean r6 = r0.regionMatch(r2, r5, r6)
            if (r6 == 0) goto L23a
            r4.append(r9)
            goto L296
        L23a:
            boolean r6 = r0.isLastChar(r1, r5)
            if (r6 != 0) goto L250
            int r6 = r5 + 1
            char r6 = r2.charAt(r6)
            int r3 = r3.indexOf(r6)
            if (r3 < 0) goto L250
            r4.append(r11)
            goto L296
        L250:
            boolean r3 = r0.isPreviousChar(r2, r5, r11)
            if (r3 == 0) goto L260
            boolean r3 = r0.isNextChar(r2, r5, r10)
            if (r3 == 0) goto L260
            r4.append(r12)
            goto L296
        L260:
            boolean r3 = r0.isNextChar(r2, r5, r10)
            if (r3 == 0) goto L27a
            if (r5 != 0) goto L276
            r3 = 3
            if (r1 < r3) goto L276
            r3 = 2
            boolean r3 = r0.isVowel(r2, r3)
            if (r3 == 0) goto L276
            r4.append(r12)
            goto L296
        L276:
            r4.append(r9)
            goto L296
        L27a:
            r4.append(r12)
            goto L296
        L27e:
            r3 = 77
            boolean r3 = r0.isPreviousChar(r2, r5, r3)
            if (r3 == 0) goto L28d
            boolean r3 = r0.isLastChar(r1, r5)
            if (r3 == 0) goto L28d
            goto L296
        L28d:
            r4.append(r6)
            goto L296
        L291:
            if (r5 != 0) goto L296
            r4.append(r6)
        L296:
            r3 = 1
            int r5 = r5 + r3
        L298:
            int r6 = r4.length()
            int r7 = r16.getMaxCodeLen()
            if (r6 <= r7) goto L99
            int r6 = r16.getMaxCodeLen()
            r4.setLength(r6)
            goto L99
        L2ab:
            java.lang.String r1 = r4.toString()
            return r1
        L2b0:
            java.lang.String r1 = ""
            return r1
    }

    public void setMaxCodeLen(int r1) {
            r0 = this;
            r0.maxCodeLen = r1
            return
    }
}
