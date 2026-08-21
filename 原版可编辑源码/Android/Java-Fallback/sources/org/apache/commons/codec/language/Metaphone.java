package org.apache.commons.codec.language;

public class Metaphone implements org.apache.commons.codec.StringEncoder {
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
            goto L6
        L5:
            r0 = 0
        L6:
            return r0
    }

    private boolean isNextChar(java.lang.StringBuffer r4, int r5, char r6) {
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

    private boolean isPreviousChar(java.lang.StringBuffer r3, int r4, char r5) {
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

    private boolean isVowel(java.lang.StringBuffer r1, int r2) {
            r0 = this;
            char r1 = r1.charAt(r2)
            java.lang.String r2 = "AEIOU"
            int r1 = r2.indexOf(r1)
            if (r1 < 0) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    private boolean regionMatch(java.lang.StringBuffer r3, int r4, java.lang.String r5) {
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
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.metaphone(r2)
            return r2
        Lb:
            org.apache.commons.codec.EncoderException r2 = new org.apache.commons.codec.EncoderException
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
            if (r1 == 0) goto L2b2
            int r2 = r17.length()
            if (r2 != 0) goto Le
            goto L2b2
        Le:
            int r2 = r17.length()
            r3 = 1
            if (r2 != r3) goto L1c
            java.util.Locale r2 = java.util.Locale.ENGLISH
            java.lang.String r1 = r1.toUpperCase(r2)
            return r1
        L1c:
            java.util.Locale r2 = java.util.Locale.ENGLISH
            java.lang.String r1 = r1.toUpperCase(r2)
            char[] r1 = r1.toCharArray()
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            r4 = 40
            r2.<init>(r4)
            java.lang.StringBuffer r4 = new java.lang.StringBuffer
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
            if (r6 == r7) goto L8a
            if (r6 == r8) goto L7a
            if (r6 == r12) goto L7a
            r7 = 80
            if (r6 == r7) goto L7a
            r7 = 87
            if (r6 == r7) goto L5d
            if (r6 == r9) goto L57
            r2.append(r1)
            goto L99
        L57:
            r1[r5] = r11
            r2.append(r1)
            goto L99
        L5d:
            char r6 = r1[r3]
            r13 = 82
            if (r6 != r13) goto L69
            int r6 = r1.length
            int r6 = r6 - r3
            r2.append(r1, r3, r6)
            goto L99
        L69:
            char r6 = r1[r3]
            if (r6 != r10) goto L76
            int r6 = r1.length
            int r6 = r6 - r3
            r2.append(r1, r3, r6)
            r2.setCharAt(r5, r7)
            goto L99
        L76:
            r2.append(r1)
            goto L99
        L7a:
            char r6 = r1[r3]
            r7 = 78
            if (r6 != r7) goto L86
            int r6 = r1.length
            int r6 = r6 - r3
            r2.append(r1, r3, r6)
            goto L99
        L86:
            r2.append(r1)
            goto L99
        L8a:
            char r6 = r1[r3]
            r7 = 69
            if (r6 != r7) goto L96
            int r6 = r1.length
            int r6 = r6 - r3
            r2.append(r1, r3, r6)
            goto L99
        L96:
            r2.append(r1)
        L99:
            int r1 = r2.length()
        L9d:
            int r6 = r4.length()
            int r7 = r16.getMaxCodeLen()
            if (r6 >= r7) goto L2ad
            if (r5 >= r1) goto L2ad
            char r6 = r2.charAt(r5)
            r7 = 67
            if (r6 == r7) goto Lbb
            boolean r13 = r0.isPreviousChar(r2, r5, r6)
            if (r13 == 0) goto Lbb
            int r5 = r5 + 1
            goto L29a
        Lbb:
            r13 = 74
            r14 = 84
            r15 = 70
            java.lang.String r3 = "EIY"
            switch(r6) {
                case 65: goto L293;
                case 66: goto L280;
                case 67: goto L216;
                case 68: goto L1f1;
                case 69: goto L293;
                case 70: goto L1ec;
                case 71: goto L192;
                case 72: goto L16b;
                case 73: goto L293;
                case 74: goto L1ec;
                case 75: goto L159;
                case 76: goto L1ec;
                case 77: goto L1ec;
                case 78: goto L1ec;
                case 79: goto L293;
                case 80: goto L149;
                case 81: goto L144;
                case 82: goto L1ec;
                case 83: goto L121;
                case 84: goto Led;
                case 85: goto L293;
                case 86: goto Le8;
                case 87: goto Ld5;
                case 88: goto Lcd;
                case 89: goto Ld5;
                case 90: goto Lc8;
                default: goto Lc6;
            }
        Lc6:
            goto L298
        Lc8:
            r4.append(r11)
            goto L298
        Lcd:
            r4.append(r12)
            r4.append(r11)
            goto L298
        Ld5:
            boolean r3 = r0.isLastChar(r1, r5)
            if (r3 != 0) goto L298
            int r3 = r5 + 1
            boolean r3 = r0.isVowel(r2, r3)
            if (r3 == 0) goto L298
            r4.append(r6)
            goto L298
        Le8:
            r4.append(r15)
            goto L298
        Led:
            java.lang.String r3 = "TIA"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 != 0) goto L11c
            java.lang.String r3 = "TIO"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 == 0) goto Lfe
            goto L11c
        Lfe:
            java.lang.String r3 = "TCH"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 == 0) goto L108
            goto L298
        L108:
            java.lang.String r3 = "TH"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 == 0) goto L117
            r3 = 48
            r4.append(r3)
            goto L298
        L117:
            r4.append(r14)
            goto L298
        L11c:
            r4.append(r9)
            goto L298
        L121:
            java.lang.String r3 = "SH"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 != 0) goto L13f
            java.lang.String r3 = "SIO"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 != 0) goto L13f
            java.lang.String r3 = "SIA"
            boolean r3 = r0.regionMatch(r2, r5, r3)
            if (r3 == 0) goto L13a
            goto L13f
        L13a:
            r4.append(r11)
            goto L298
        L13f:
            r4.append(r9)
            goto L298
        L144:
            r4.append(r12)
            goto L298
        L149:
            boolean r3 = r0.isNextChar(r2, r5, r10)
            if (r3 == 0) goto L154
            r4.append(r15)
            goto L298
        L154:
            r4.append(r6)
            goto L298
        L159:
            if (r5 <= 0) goto L166
            boolean r3 = r0.isPreviousChar(r2, r5, r7)
            if (r3 != 0) goto L298
            r4.append(r6)
            goto L298
        L166:
            r4.append(r6)
            goto L298
        L16b:
            boolean r3 = r0.isLastChar(r1, r5)
            if (r3 == 0) goto L173
            goto L298
        L173:
            if (r5 <= 0) goto L185
            int r3 = r5 + (-1)
            char r3 = r2.charAt(r3)
            java.lang.String r6 = "CSPTG"
            int r3 = r6.indexOf(r3)
            if (r3 < 0) goto L185
            goto L298
        L185:
            int r3 = r5 + 1
            boolean r3 = r0.isVowel(r2, r3)
            if (r3 == 0) goto L298
            r4.append(r10)
            goto L298
        L192:
            int r6 = r5 + 1
            boolean r7 = r0.isLastChar(r1, r6)
            if (r7 == 0) goto L1a2
            boolean r7 = r0.isNextChar(r2, r5, r10)
            if (r7 == 0) goto L1a2
            goto L298
        L1a2:
            boolean r7 = r0.isLastChar(r1, r6)
            if (r7 != 0) goto L1b8
            boolean r7 = r0.isNextChar(r2, r5, r10)
            if (r7 == 0) goto L1b8
            int r7 = r5 + 2
            boolean r7 = r0.isVowel(r2, r7)
            if (r7 != 0) goto L1b8
            goto L298
        L1b8:
            if (r5 <= 0) goto L1cc
            java.lang.String r7 = "GN"
            boolean r7 = r0.regionMatch(r2, r5, r7)
            if (r7 != 0) goto L298
            java.lang.String r7 = "GNED"
            boolean r7 = r0.regionMatch(r2, r5, r7)
            if (r7 == 0) goto L1cc
            goto L298
        L1cc:
            boolean r7 = r0.isPreviousChar(r2, r5, r8)
            boolean r14 = r0.isLastChar(r1, r5)
            if (r14 != 0) goto L1e7
            char r6 = r2.charAt(r6)
            int r3 = r3.indexOf(r6)
            if (r3 < 0) goto L1e7
            if (r7 != 0) goto L1e7
            r4.append(r13)
            goto L298
        L1e7:
            r4.append(r12)
            goto L298
        L1ec:
            r4.append(r6)
            goto L298
        L1f1:
            int r6 = r5 + 1
            boolean r6 = r0.isLastChar(r1, r6)
            if (r6 != 0) goto L211
            boolean r6 = r0.isNextChar(r2, r5, r8)
            if (r6 == 0) goto L211
            int r6 = r5 + 2
            char r7 = r2.charAt(r6)
            int r3 = r3.indexOf(r7)
            if (r3 < 0) goto L211
            r4.append(r13)
            r5 = r6
            goto L298
        L211:
            r4.append(r14)
            goto L298
        L216:
            boolean r6 = r0.isPreviousChar(r2, r5, r11)
            if (r6 == 0) goto L230
            boolean r6 = r0.isLastChar(r1, r5)
            if (r6 != 0) goto L230
            int r6 = r5 + 1
            char r6 = r2.charAt(r6)
            int r6 = r3.indexOf(r6)
            if (r6 < 0) goto L230
            goto L298
        L230:
            java.lang.String r6 = "CIA"
            boolean r6 = r0.regionMatch(r2, r5, r6)
            if (r6 == 0) goto L23c
            r4.append(r9)
            goto L298
        L23c:
            boolean r6 = r0.isLastChar(r1, r5)
            if (r6 != 0) goto L252
            int r6 = r5 + 1
            char r6 = r2.charAt(r6)
            int r3 = r3.indexOf(r6)
            if (r3 < 0) goto L252
            r4.append(r11)
            goto L298
        L252:
            boolean r3 = r0.isPreviousChar(r2, r5, r11)
            if (r3 == 0) goto L262
            boolean r3 = r0.isNextChar(r2, r5, r10)
            if (r3 == 0) goto L262
            r4.append(r12)
            goto L298
        L262:
            boolean r3 = r0.isNextChar(r2, r5, r10)
            if (r3 == 0) goto L27c
            if (r5 != 0) goto L278
            r3 = 3
            if (r1 < r3) goto L278
            r3 = 2
            boolean r3 = r0.isVowel(r2, r3)
            if (r3 == 0) goto L278
            r4.append(r12)
            goto L298
        L278:
            r4.append(r9)
            goto L298
        L27c:
            r4.append(r12)
            goto L298
        L280:
            r3 = 77
            boolean r3 = r0.isPreviousChar(r2, r5, r3)
            if (r3 == 0) goto L28f
            boolean r3 = r0.isLastChar(r1, r5)
            if (r3 == 0) goto L28f
            goto L298
        L28f:
            r4.append(r6)
            goto L298
        L293:
            if (r5 != 0) goto L298
            r4.append(r6)
        L298:
            r3 = 1
            int r5 = r5 + r3
        L29a:
            int r6 = r4.length()
            int r7 = r16.getMaxCodeLen()
            if (r6 <= r7) goto L9d
            int r6 = r16.getMaxCodeLen()
            r4.setLength(r6)
            goto L9d
        L2ad:
            java.lang.String r1 = r4.toString()
            return r1
        L2b2:
            java.lang.String r1 = ""
            return r1
    }

    public void setMaxCodeLen(int r1) {
            r0 = this;
            r0.maxCodeLen = r1
            return
    }
}
