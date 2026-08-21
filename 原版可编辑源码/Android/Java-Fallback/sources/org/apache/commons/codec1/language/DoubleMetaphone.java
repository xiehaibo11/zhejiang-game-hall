package org.apache.commons.codec1.language;

public class DoubleMetaphone implements org.apache.commons.codec1.StringEncoder {
    private static final java.lang.String[] ES_EP_EB_EL_EY_IB_IL_IN_IE_EI_ER = null;
    private static final java.lang.String[] L_R_N_M_B_H_F_V_W_SPACE = null;
    private static final java.lang.String[] L_T_K_S_N_M_B_Z = null;
    private static final java.lang.String[] SILENT_START = null;
    private static final java.lang.String VOWELS = "AEIOUY";
    private int maxCodeLen;

    public class DoubleMetaphoneResult {
        private final java.lang.StringBuilder alternate;
        private final int maxLength;
        private final java.lang.StringBuilder primary;
        final org.apache.commons.codec1.language.DoubleMetaphone this$0;

        public DoubleMetaphoneResult(org.apache.commons.codec1.language.DoubleMetaphone r3, int r4) {
                r2 = this;
                r2.this$0 = r3
                r2.<init>()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                int r1 = r3.getMaxCodeLen()
                r0.<init>(r1)
                r2.primary = r0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                int r3 = r3.getMaxCodeLen()
                r0.<init>(r3)
                r2.alternate = r0
                r2.maxLength = r4
                return
        }

        public void append(char r1) {
                r0 = this;
                r0.appendPrimary(r1)
                r0.appendAlternate(r1)
                return
        }

        public void append(char r1, char r2) {
                r0 = this;
                r0.appendPrimary(r1)
                r0.appendAlternate(r2)
                return
        }

        public void append(java.lang.String r1) {
                r0 = this;
                r0.appendPrimary(r1)
                r0.appendAlternate(r1)
                return
        }

        public void append(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.appendPrimary(r1)
                r0.appendAlternate(r2)
                return
        }

        public void appendAlternate(char r3) {
                r2 = this;
                java.lang.StringBuilder r0 = r2.alternate
                int r0 = r0.length()
                int r1 = r2.maxLength
                if (r0 >= r1) goto Lf
                java.lang.StringBuilder r0 = r2.alternate
                r0.append(r3)
            Lf:
                return
        }

        public void appendAlternate(java.lang.String r4) {
                r3 = this;
                int r0 = r3.maxLength
                java.lang.StringBuilder r1 = r3.alternate
                int r1 = r1.length()
                int r0 = r0 - r1
                int r1 = r4.length()
                if (r1 > r0) goto L15
                java.lang.StringBuilder r0 = r3.alternate
                r0.append(r4)
                goto L1f
            L15:
                java.lang.StringBuilder r1 = r3.alternate
                r2 = 0
                java.lang.String r4 = r4.substring(r2, r0)
                r1.append(r4)
            L1f:
                return
        }

        public void appendPrimary(char r3) {
                r2 = this;
                java.lang.StringBuilder r0 = r2.primary
                int r0 = r0.length()
                int r1 = r2.maxLength
                if (r0 >= r1) goto Lf
                java.lang.StringBuilder r0 = r2.primary
                r0.append(r3)
            Lf:
                return
        }

        public void appendPrimary(java.lang.String r4) {
                r3 = this;
                int r0 = r3.maxLength
                java.lang.StringBuilder r1 = r3.primary
                int r1 = r1.length()
                int r0 = r0 - r1
                int r1 = r4.length()
                if (r1 > r0) goto L15
                java.lang.StringBuilder r0 = r3.primary
                r0.append(r4)
                goto L1f
            L15:
                java.lang.StringBuilder r1 = r3.primary
                r2 = 0
                java.lang.String r4 = r4.substring(r2, r0)
                r1.append(r4)
            L1f:
                return
        }

        public java.lang.String getAlternate() {
                r1 = this;
                java.lang.StringBuilder r0 = r1.alternate
                java.lang.String r0 = r0.toString()
                return r0
        }

        public java.lang.String getPrimary() {
                r1 = this;
                java.lang.StringBuilder r0 = r1.primary
                java.lang.String r0 = r0.toString()
                return r0
        }

        public boolean isComplete() {
                r2 = this;
                java.lang.StringBuilder r0 = r2.primary
                int r0 = r0.length()
                int r1 = r2.maxLength
                if (r0 < r1) goto L16
                java.lang.StringBuilder r0 = r2.alternate
                int r0 = r0.length()
                int r1 = r2.maxLength
                if (r0 < r1) goto L16
                r0 = 1
                return r0
            L16:
                r0 = 0
                return r0
        }
    }

    static {
            java.lang.String r0 = "GN"
            java.lang.String r1 = "KN"
            java.lang.String r2 = "PN"
            java.lang.String r3 = "WR"
            java.lang.String r4 = "PS"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4}
            org.apache.commons.codec1.language.DoubleMetaphone.SILENT_START = r0
            java.lang.String r1 = "L"
            java.lang.String r2 = "R"
            java.lang.String r3 = "N"
            java.lang.String r4 = "M"
            java.lang.String r5 = "B"
            java.lang.String r6 = "H"
            java.lang.String r7 = "F"
            java.lang.String r8 = "V"
            java.lang.String r9 = "W"
            java.lang.String r10 = " "
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10}
            org.apache.commons.codec1.language.DoubleMetaphone.L_R_N_M_B_H_F_V_W_SPACE = r0
            java.lang.String r1 = "ES"
            java.lang.String r2 = "EP"
            java.lang.String r3 = "EB"
            java.lang.String r4 = "EL"
            java.lang.String r5 = "EY"
            java.lang.String r6 = "IB"
            java.lang.String r7 = "IL"
            java.lang.String r8 = "IN"
            java.lang.String r9 = "IE"
            java.lang.String r10 = "EI"
            java.lang.String r11 = "ER"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11}
            org.apache.commons.codec1.language.DoubleMetaphone.ES_EP_EB_EL_EY_IB_IL_IN_IE_EI_ER = r0
            java.lang.String r1 = "L"
            java.lang.String r2 = "T"
            java.lang.String r3 = "K"
            java.lang.String r4 = "S"
            java.lang.String r5 = "N"
            java.lang.String r6 = "M"
            java.lang.String r7 = "B"
            java.lang.String r8 = "Z"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8}
            org.apache.commons.codec1.language.DoubleMetaphone.L_T_K_S_N_M_B_Z = r0
            return
    }

    public DoubleMetaphone() {
            r1 = this;
            r1.<init>()
            r0 = 4
            r1.maxCodeLen = r0
            return
    }

    private java.lang.String cleanInput(java.lang.String r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r3 = r3.trim()
            int r1 = r3.length()
            if (r1 != 0) goto Lf
            return r0
        Lf:
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r3 = r3.toUpperCase(r0)
            return r3
    }

    private boolean conditionC0(java.lang.String r7, int r8) {
            r6 = this;
            java.lang.String r0 = "CHIA"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            r1 = 4
            boolean r0 = contains(r7, r8, r1, r0)
            r1 = 1
            if (r0 == 0) goto Lf
            return r1
        Lf:
            r0 = 0
            if (r8 > r1) goto L13
            return r0
        L13:
            int r2 = r8 + (-2)
            char r3 = r6.charAt(r7, r2)
            boolean r3 = r6.isVowel(r3)
            if (r3 == 0) goto L20
            return r0
        L20:
            int r3 = r8 + (-1)
            r4 = 3
            java.lang.String r5 = "ACH"
            java.lang.String[] r5 = new java.lang.String[]{r5}
            boolean r3 = contains(r7, r3, r4, r5)
            if (r3 != 0) goto L30
            return r0
        L30:
            int r8 = r8 + 2
            char r8 = r6.charAt(r7, r8)
            r3 = 73
            if (r8 == r3) goto L3e
            r3 = 69
            if (r8 != r3) goto L4e
        L3e:
            r8 = 6
            java.lang.String r3 = "BACHER"
            java.lang.String r4 = "MACHER"
            java.lang.String[] r3 = new java.lang.String[]{r3, r4}
            boolean r7 = contains(r7, r2, r8, r3)
            if (r7 != 0) goto L4e
            return r0
        L4e:
            return r1
    }

    private boolean conditionCH0(java.lang.String r9, int r10) {
            r8 = this;
            r0 = 0
            if (r10 == 0) goto L4
            return r0
        L4:
            r1 = 1
            int r10 = r10 + r1
            java.lang.String r2 = "HARAC"
            java.lang.String r3 = "HARIS"
            java.lang.String[] r2 = new java.lang.String[]{r2, r3}
            r3 = 5
            boolean r2 = contains(r9, r10, r3, r2)
            if (r2 != 0) goto L29
            r2 = 3
            java.lang.String r4 = "HOR"
            java.lang.String r5 = "HYM"
            java.lang.String r6 = "HIA"
            java.lang.String r7 = "HEM"
            java.lang.String[] r4 = new java.lang.String[]{r4, r5, r6, r7}
            boolean r10 = contains(r9, r10, r2, r4)
            if (r10 != 0) goto L29
            return r0
        L29:
            java.lang.String r10 = "CHORE"
            java.lang.String[] r10 = new java.lang.String[]{r10}
            boolean r9 = contains(r9, r0, r3, r10)
            if (r9 == 0) goto L36
            return r0
        L36:
            return r1
    }

    private boolean conditionCH1(java.lang.String r9, int r10) {
            r8 = this;
            java.lang.String r0 = "VAN "
            java.lang.String r1 = "VON "
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            r1 = 0
            r2 = 4
            boolean r0 = contains(r9, r1, r2, r0)
            r2 = 1
            if (r0 != 0) goto L68
            r0 = 3
            java.lang.String r3 = "SCH"
            java.lang.String[] r3 = new java.lang.String[]{r3}
            boolean r0 = contains(r9, r1, r0, r3)
            if (r0 != 0) goto L68
            int r0 = r10 + (-2)
            r3 = 6
            java.lang.String r4 = "ORCHES"
            java.lang.String r5 = "ARCHIT"
            java.lang.String r6 = "ORCHID"
            java.lang.String[] r4 = new java.lang.String[]{r4, r5, r6}
            boolean r0 = contains(r9, r0, r3, r4)
            if (r0 != 0) goto L68
            int r0 = r10 + 2
            java.lang.String r3 = "T"
            java.lang.String r4 = "S"
            java.lang.String[] r3 = new java.lang.String[]{r3, r4}
            boolean r3 = contains(r9, r0, r2, r3)
            if (r3 != 0) goto L68
            int r3 = r10 + (-1)
            java.lang.String r4 = "A"
            java.lang.String r5 = "O"
            java.lang.String r6 = "U"
            java.lang.String r7 = "E"
            java.lang.String[] r4 = new java.lang.String[]{r4, r5, r6, r7}
            boolean r3 = contains(r9, r3, r2, r4)
            if (r3 != 0) goto L57
            if (r10 != 0) goto L67
        L57:
            java.lang.String[] r3 = org.apache.commons.codec1.language.DoubleMetaphone.L_R_N_M_B_H_F_V_W_SPACE
            boolean r0 = contains(r9, r0, r2, r3)
            if (r0 != 0) goto L68
            int r10 = r10 + r2
            int r9 = r9.length()
            int r9 = r9 - r2
            if (r10 == r9) goto L68
        L67:
            return r1
        L68:
            return r2
    }

    private boolean conditionL0(java.lang.String r8, int r9) {
            r7 = this;
            int r0 = r8.length()
            int r0 = r0 + (-3)
            java.lang.String r1 = "ALLE"
            r2 = 4
            r3 = 1
            if (r9 != r0) goto L1d
            int r0 = r9 + (-1)
            java.lang.String r4 = "ILLO"
            java.lang.String r5 = "ILLA"
            java.lang.String[] r4 = new java.lang.String[]{r4, r5, r1}
            boolean r0 = contains(r8, r0, r2, r4)
            if (r0 == 0) goto L1d
            return r3
        L1d:
            int r0 = r8.length()
            r4 = 2
            int r0 = r0 - r4
            java.lang.String r5 = "AS"
            java.lang.String r6 = "OS"
            java.lang.String[] r5 = new java.lang.String[]{r5, r6}
            boolean r0 = contains(r8, r0, r4, r5)
            if (r0 != 0) goto L44
            int r0 = r8.length()
            int r0 = r0 - r3
            java.lang.String r4 = "A"
            java.lang.String r5 = "O"
            java.lang.String[] r4 = new java.lang.String[]{r4, r5}
            boolean r0 = contains(r8, r0, r3, r4)
            if (r0 == 0) goto L50
        L44:
            int r9 = r9 - r3
            java.lang.String[] r0 = new java.lang.String[]{r1}
            boolean r8 = contains(r8, r9, r2, r0)
            if (r8 == 0) goto L50
            return r3
        L50:
            r8 = 0
            return r8
    }

    private boolean conditionM0(java.lang.String r6, int r7) {
            r5 = this;
            int r0 = r7 + 1
            char r1 = r5.charAt(r6, r0)
            r2 = 1
            r3 = 77
            if (r1 != r3) goto Lc
            return r2
        Lc:
            int r1 = r7 + (-1)
            r3 = 3
            java.lang.String r4 = "UMB"
            java.lang.String[] r4 = new java.lang.String[]{r4}
            boolean r1 = contains(r6, r1, r3, r4)
            if (r1 == 0) goto L31
            int r1 = r6.length()
            int r1 = r1 - r2
            if (r0 == r1) goto L30
            r0 = 2
            int r7 = r7 + r0
            java.lang.String r1 = "ER"
            java.lang.String[] r1 = new java.lang.String[]{r1}
            boolean r6 = contains(r6, r7, r0, r1)
            if (r6 == 0) goto L31
        L30:
            return r2
        L31:
            r6 = 0
            return r6
    }

    protected static boolean contains(java.lang.String r2, int r3, int r4, java.lang.String... r5) {
            r0 = 0
            if (r3 < 0) goto L20
            int r4 = r4 + r3
            int r1 = r2.length()
            if (r4 > r1) goto L20
            java.lang.String r2 = r2.substring(r3, r4)
            int r3 = r5.length
            r4 = r0
        L10:
            if (r4 < r3) goto L13
            goto L20
        L13:
            r1 = r5[r4]
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L1d
            r0 = 1
            goto L20
        L1d:
            int r4 = r4 + 1
            goto L10
        L20:
            return r0
    }

    private int handleAEIOUY(org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r2, int r3) {
            r1 = this;
            if (r3 != 0) goto L7
            r0 = 65
            r2.append(r0)
        L7:
            int r3 = r3 + 1
            return r3
    }

    private int handleC(java.lang.String r12, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r13, int r14) {
            r11 = this;
            boolean r0 = r11.conditionC0(r12, r14)
            r1 = 75
            r2 = 2
            if (r0 == 0) goto Lf
            r13.append(r1)
        Lc:
            int r14 = r14 + r2
            goto Lf7
        Lf:
            r0 = 83
            if (r14 != 0) goto L24
            r3 = 6
            java.lang.String r4 = "CAESAR"
            java.lang.String[] r4 = new java.lang.String[]{r4}
            boolean r3 = contains(r12, r14, r3, r4)
            if (r3 == 0) goto L24
            r13.append(r0)
            goto Lc
        L24:
            java.lang.String r3 = "CH"
            java.lang.String[] r3 = new java.lang.String[]{r3}
            boolean r3 = contains(r12, r14, r2, r3)
            if (r3 == 0) goto L36
            int r14 = r11.handleCH(r12, r13, r14)
            goto Lf7
        L36:
            java.lang.String r3 = "CZ"
            java.lang.String[] r3 = new java.lang.String[]{r3}
            boolean r3 = contains(r12, r14, r2, r3)
            r4 = 88
            if (r3 == 0) goto L57
            int r3 = r14 + (-2)
            r5 = 4
            java.lang.String r6 = "WICZ"
            java.lang.String[] r6 = new java.lang.String[]{r6}
            boolean r3 = contains(r12, r3, r5, r6)
            if (r3 != 0) goto L57
            r13.append(r0, r4)
            goto Lc
        L57:
            int r3 = r14 + 1
            java.lang.String r5 = "CIA"
            java.lang.String[] r6 = new java.lang.String[]{r5}
            r7 = 3
            boolean r6 = contains(r12, r3, r7, r6)
            if (r6 == 0) goto L6c
            r13.append(r4)
        L69:
            int r14 = r14 + r7
            goto Lf7
        L6c:
            java.lang.String r6 = "CC"
            java.lang.String[] r6 = new java.lang.String[]{r6}
            boolean r6 = contains(r12, r14, r2, r6)
            r8 = 1
            if (r6 == 0) goto L89
            if (r14 != r8) goto L84
            r6 = 0
            char r6 = r11.charAt(r12, r6)
            r9 = 77
            if (r6 == r9) goto L89
        L84:
            int r12 = r11.handleCC(r12, r13, r14)
            return r12
        L89:
            java.lang.String r6 = "CK"
            java.lang.String r9 = "CG"
            java.lang.String r10 = "CQ"
            java.lang.String[] r6 = new java.lang.String[]{r6, r9, r10}
            boolean r6 = contains(r12, r14, r2, r6)
            if (r6 == 0) goto L9e
            r13.append(r1)
            goto Lc
        L9e:
            java.lang.String r6 = "CE"
            java.lang.String r9 = "CI"
            java.lang.String r10 = "CY"
            java.lang.String[] r10 = new java.lang.String[]{r9, r6, r10}
            boolean r10 = contains(r12, r14, r2, r10)
            if (r10 == 0) goto Lc6
            java.lang.String r1 = "CIO"
            java.lang.String r3 = "CIE"
            java.lang.String[] r1 = new java.lang.String[]{r1, r3, r5}
            boolean r12 = contains(r12, r14, r7, r1)
            if (r12 == 0) goto Lc1
            r13.append(r0, r4)
            goto Lc
        Lc1:
            r13.append(r0)
            goto Lc
        Lc6:
            r13.append(r1)
            java.lang.String r13 = " C"
            java.lang.String r0 = " Q"
            java.lang.String r1 = " G"
            java.lang.String[] r13 = new java.lang.String[]{r13, r0, r1}
            boolean r13 = contains(r12, r3, r2, r13)
            if (r13 == 0) goto Lda
            goto L69
        Lda:
            java.lang.String r13 = "C"
            java.lang.String r0 = "K"
            java.lang.String r1 = "Q"
            java.lang.String[] r13 = new java.lang.String[]{r13, r0, r1}
            boolean r13 = contains(r12, r3, r8, r13)
            if (r13 == 0) goto Lf6
            java.lang.String[] r13 = new java.lang.String[]{r6, r9}
            boolean r12 = contains(r12, r3, r2, r13)
            if (r12 != 0) goto Lf6
            goto Lc
        Lf6:
            r14 = r3
        Lf7:
            return r14
    }

    private int handleCC(java.lang.String r5, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r6, int r7) {
            r4 = this;
            int r0 = r7 + 2
            java.lang.String r1 = "I"
            java.lang.String r2 = "E"
            java.lang.String r3 = "H"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3}
            r2 = 1
            boolean r1 = contains(r5, r0, r2, r1)
            if (r1 == 0) goto L4b
            java.lang.String r1 = "HU"
            java.lang.String[] r1 = new java.lang.String[]{r1}
            r3 = 2
            boolean r1 = contains(r5, r0, r3, r1)
            if (r1 != 0) goto L4b
            if (r7 != r2) goto L2c
            int r0 = r7 + (-1)
            char r0 = r4.charAt(r5, r0)
            r1 = 65
            if (r0 == r1) goto L3d
        L2c:
            int r0 = r7 + (-1)
            r1 = 5
            java.lang.String r2 = "UCCEE"
            java.lang.String r3 = "UCCES"
            java.lang.String[] r2 = new java.lang.String[]{r2, r3}
            boolean r5 = contains(r5, r0, r1, r2)
            if (r5 == 0) goto L43
        L3d:
            java.lang.String r5 = "KS"
            r6.append(r5)
            goto L48
        L43:
            r5 = 88
            r6.append(r5)
        L48:
            int r0 = r7 + 3
            goto L50
        L4b:
            r5 = 75
            r6.append(r5)
        L50:
            return r0
    }

    private int handleCH(java.lang.String r6, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r7, int r8) {
            r5 = this;
            r0 = 88
            r1 = 2
            r2 = 75
            if (r8 <= 0) goto L19
            r3 = 4
            java.lang.String r4 = "CHAE"
            java.lang.String[] r4 = new java.lang.String[]{r4}
            boolean r3 = contains(r6, r8, r3, r4)
            if (r3 == 0) goto L19
            r7.append(r2, r0)
        L17:
            int r8 = r8 + r1
            return r8
        L19:
            boolean r3 = r5.conditionCH0(r6, r8)
            if (r3 == 0) goto L23
            r7.append(r2)
            goto L17
        L23:
            boolean r3 = r5.conditionCH1(r6, r8)
            if (r3 == 0) goto L2d
            r7.append(r2)
            goto L17
        L2d:
            if (r8 <= 0) goto L44
            r3 = 0
            java.lang.String r4 = "MC"
            java.lang.String[] r4 = new java.lang.String[]{r4}
            boolean r6 = contains(r6, r3, r1, r4)
            if (r6 == 0) goto L40
            r7.append(r2)
            goto L47
        L40:
            r7.append(r0, r2)
            goto L47
        L44:
            r7.append(r0)
        L47:
            int r8 = r8 + r1
            return r8
    }

    private int handleD(java.lang.String r6, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r7, int r8) {
            r5 = this;
            java.lang.String r0 = "DG"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            r1 = 2
            boolean r0 = contains(r6, r8, r1, r0)
            r2 = 1
            if (r0 == 0) goto L2e
            int r0 = r8 + 2
            java.lang.String r1 = "I"
            java.lang.String r3 = "E"
            java.lang.String r4 = "Y"
            java.lang.String[] r1 = new java.lang.String[]{r1, r3, r4}
            boolean r6 = contains(r6, r0, r2, r1)
            if (r6 == 0) goto L28
            r6 = 74
            r7.append(r6)
            int r0 = r8 + 3
            goto L49
        L28:
            java.lang.String r6 = "TK"
            r7.append(r6)
            goto L49
        L2e:
            java.lang.String r0 = "DT"
            java.lang.String r3 = "DD"
            java.lang.String[] r0 = new java.lang.String[]{r0, r3}
            boolean r6 = contains(r6, r8, r1, r0)
            r0 = 84
            if (r6 == 0) goto L44
            r7.append(r0)
            int r0 = r8 + 2
            goto L49
        L44:
            r7.append(r0)
            int r0 = r8 + 1
        L49:
            return r0
    }

    private int handleG(java.lang.String r17, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r18, int r19, boolean r20) {
            r16 = this;
            r0 = r16
            r1 = r17
            r2 = r18
            r3 = r19
            int r4 = r3 + 1
            char r5 = r0.charAt(r1, r4)
            r6 = 72
            if (r5 != r6) goto L18
            int r4 = r16.handleGH(r17, r18, r19)
            goto L145
        L18:
            char r5 = r0.charAt(r1, r4)
            r6 = 78
            r7 = 89
            r8 = 0
            r9 = 1
            r10 = 2
            if (r5 != r6) goto L59
            java.lang.String r5 = "N"
            java.lang.String r6 = "KN"
            if (r3 != r9) goto L3b
            char r8 = r0.charAt(r1, r8)
            boolean r8 = r0.isVowel(r8)
            if (r8 == 0) goto L3b
            if (r20 != 0) goto L3b
            r2.append(r6, r5)
            goto L6e
        L3b:
            int r8 = r3 + 2
            java.lang.String r9 = "EY"
            java.lang.String[] r9 = new java.lang.String[]{r9}
            boolean r8 = contains(r1, r8, r10, r9)
            if (r8 != 0) goto L55
            char r1 = r0.charAt(r1, r4)
            if (r1 == r7) goto L55
            if (r20 != 0) goto L55
            r2.append(r5, r6)
            goto L6e
        L55:
            r2.append(r6)
            goto L6e
        L59:
            java.lang.String r5 = "LI"
            java.lang.String[] r5 = new java.lang.String[]{r5}
            boolean r5 = contains(r1, r4, r10, r5)
            if (r5 == 0) goto L72
            if (r20 != 0) goto L72
            java.lang.String r1 = "KL"
            java.lang.String r4 = "L"
            r2.append(r1, r4)
        L6e:
            int r4 = r3 + 2
            goto L145
        L72:
            r5 = 74
            r6 = 75
            if (r3 != 0) goto L8a
            char r11 = r0.charAt(r1, r4)
            if (r11 == r7) goto L86
            java.lang.String[] r11 = org.apache.commons.codec1.language.DoubleMetaphone.ES_EP_EB_EL_EY_IB_IL_IN_IE_EI_ER
            boolean r11 = contains(r1, r4, r10, r11)
            if (r11 == 0) goto L8a
        L86:
            r2.append(r6, r5)
            goto L6e
        L8a:
            java.lang.String r11 = "ER"
            java.lang.String[] r11 = new java.lang.String[]{r11}
            boolean r11 = contains(r1, r4, r10, r11)
            java.lang.String r12 = "I"
            java.lang.String r13 = "E"
            r14 = 3
            if (r11 != 0) goto La1
            char r11 = r0.charAt(r1, r4)
            if (r11 != r7) goto Ld4
        La1:
            r7 = 6
            java.lang.String r11 = "DANGER"
            java.lang.String r15 = "RANGER"
            java.lang.String r10 = "MANGER"
            java.lang.String[] r10 = new java.lang.String[]{r11, r15, r10}
            boolean r7 = contains(r1, r8, r7, r10)
            if (r7 != 0) goto Ld4
            int r7 = r3 + (-1)
            java.lang.String[] r10 = new java.lang.String[]{r13, r12}
            boolean r10 = contains(r1, r7, r9, r10)
            if (r10 != 0) goto Ld4
            java.lang.String r10 = "RGY"
            java.lang.String r11 = "OGY"
            java.lang.String[] r10 = new java.lang.String[]{r10, r11}
            boolean r7 = contains(r1, r7, r14, r10)
            if (r7 != 0) goto Ld4
            r2.append(r6, r5)
        Lcf:
            r1 = 2
            int r4 = r3 + 2
            goto L145
        Ld4:
            java.lang.String r7 = "Y"
            java.lang.String[] r7 = new java.lang.String[]{r13, r12, r7}
            boolean r7 = contains(r1, r4, r9, r7)
            r9 = 4
            if (r7 != 0) goto L105
            int r7 = r3 + (-1)
            java.lang.String r10 = "AGGI"
            java.lang.String r11 = "OGGI"
            java.lang.String[] r10 = new java.lang.String[]{r10, r11}
            boolean r7 = contains(r1, r7, r9, r10)
            if (r7 == 0) goto Lf2
            goto L105
        Lf2:
            char r1 = r0.charAt(r1, r4)
            r5 = 71
            if (r1 != r5) goto L101
            r1 = 2
            int r4 = r3 + 2
            r2.append(r6)
            goto L145
        L101:
            r2.append(r6)
            goto L145
        L105:
            java.lang.String r7 = "VAN "
            java.lang.String r10 = "VON "
            java.lang.String[] r7 = new java.lang.String[]{r7, r10}
            boolean r7 = contains(r1, r8, r9, r7)
            if (r7 != 0) goto L141
            java.lang.String r7 = "SCH"
            java.lang.String[] r7 = new java.lang.String[]{r7}
            boolean r7 = contains(r1, r8, r14, r7)
            if (r7 != 0) goto L141
            java.lang.String r7 = "ET"
            java.lang.String[] r7 = new java.lang.String[]{r7}
            r8 = 2
            boolean r7 = contains(r1, r4, r8, r7)
            if (r7 == 0) goto L12d
            goto L141
        L12d:
            java.lang.String r7 = "IER"
            java.lang.String[] r7 = new java.lang.String[]{r7}
            boolean r1 = contains(r1, r4, r14, r7)
            if (r1 == 0) goto L13d
            r2.append(r5)
            goto Lcf
        L13d:
            r2.append(r5, r6)
            goto Lcf
        L141:
            r2.append(r6)
            goto Lcf
        L145:
            return r4
    }

    private int handleGH(java.lang.String r11, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r12, int r13) {
            r10 = this;
            r0 = 75
            r1 = 2
            if (r13 <= 0) goto L17
            int r2 = r13 + (-1)
            char r2 = r10.charAt(r11, r2)
            boolean r2 = r10.isVowel(r2)
            if (r2 != 0) goto L17
            r12.append(r0)
        L14:
            int r13 = r13 + r1
            goto L97
        L17:
            r2 = 73
            if (r13 != 0) goto L2d
            int r13 = r13 + r1
            char r11 = r10.charAt(r11, r13)
            if (r11 != r2) goto L29
            r11 = 74
            r12.append(r11)
            goto L97
        L29:
            r12.append(r0)
            goto L97
        L2d:
            java.lang.String r3 = "D"
            java.lang.String r4 = "H"
            java.lang.String r5 = "B"
            r6 = 1
            if (r13 <= r6) goto L42
            int r7 = r13 + (-2)
            java.lang.String[] r8 = new java.lang.String[]{r5, r4, r3}
            boolean r7 = contains(r11, r7, r6, r8)
            if (r7 != 0) goto L14
        L42:
            if (r13 <= r1) goto L50
            int r7 = r13 + (-3)
            java.lang.String[] r3 = new java.lang.String[]{r5, r4, r3}
            boolean r3 = contains(r11, r7, r6, r3)
            if (r3 != 0) goto L14
        L50:
            r3 = 3
            if (r13 <= r3) goto L60
            int r3 = r13 + (-4)
            java.lang.String[] r4 = new java.lang.String[]{r5, r4}
            boolean r3 = contains(r11, r3, r6, r4)
            if (r3 == 0) goto L60
            goto L14
        L60:
            if (r13 <= r1) goto L88
            int r3 = r13 + (-1)
            char r3 = r10.charAt(r11, r3)
            r4 = 85
            if (r3 != r4) goto L88
            int r3 = r13 + (-3)
            java.lang.String r4 = "C"
            java.lang.String r5 = "G"
            java.lang.String r7 = "L"
            java.lang.String r8 = "R"
            java.lang.String r9 = "T"
            java.lang.String[] r4 = new java.lang.String[]{r4, r5, r7, r8, r9}
            boolean r3 = contains(r11, r3, r6, r4)
            if (r3 == 0) goto L88
            r11 = 70
            r12.append(r11)
            goto L14
        L88:
            if (r13 <= 0) goto L14
            int r3 = r13 + (-1)
            char r11 = r10.charAt(r11, r3)
            if (r11 == r2) goto L14
            r12.append(r0)
            goto L14
        L97:
            return r13
    }

    private int handleH(java.lang.String r2, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r3, int r4) {
            r1 = this;
            if (r4 == 0) goto Le
            int r0 = r4 + (-1)
            char r0 = r1.charAt(r2, r0)
            boolean r0 = r1.isVowel(r0)
            if (r0 == 0) goto L22
        Le:
            int r0 = r4 + 1
            char r2 = r1.charAt(r2, r0)
            boolean r2 = r1.isVowel(r2)
            if (r2 == 0) goto L22
            r2 = 72
            r3.append(r2)
            int r4 = r4 + 2
            goto L24
        L22:
            int r4 = r4 + 1
        L24:
            return r4
    }

    private int handleJ(java.lang.String r10, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r11, int r12, boolean r13) {
            r9 = this;
            java.lang.String r0 = "JOSE"
            java.lang.String[] r1 = new java.lang.String[]{r0}
            r2 = 4
            boolean r1 = contains(r10, r12, r2, r1)
            r3 = 32
            java.lang.String r4 = "SAN "
            r5 = 0
            r6 = 72
            r7 = 74
            r8 = 1
            if (r1 != 0) goto L89
            java.lang.String[] r1 = new java.lang.String[]{r4}
            boolean r1 = contains(r10, r5, r2, r1)
            if (r1 == 0) goto L22
            goto L89
        L22:
            r1 = 65
            if (r12 != 0) goto L34
            java.lang.String[] r0 = new java.lang.String[]{r0}
            boolean r0 = contains(r10, r12, r2, r0)
            if (r0 != 0) goto L34
            r11.append(r7, r1)
            goto L7e
        L34:
            int r0 = r12 + (-1)
            char r2 = r9.charAt(r10, r0)
            boolean r2 = r9.isVowel(r2)
            if (r2 == 0) goto L56
            if (r13 != 0) goto L56
            int r13 = r12 + 1
            char r2 = r9.charAt(r10, r13)
            if (r2 == r1) goto L52
            char r13 = r9.charAt(r10, r13)
            r1 = 79
            if (r13 != r1) goto L56
        L52:
            r11.append(r7, r6)
            goto L7e
        L56:
            int r13 = r10.length()
            int r13 = r13 - r8
            if (r12 != r13) goto L61
            r11.append(r7, r3)
            goto L7e
        L61:
            int r13 = r12 + 1
            java.lang.String[] r1 = org.apache.commons.codec1.language.DoubleMetaphone.L_T_K_S_N_M_B_Z
            boolean r13 = contains(r10, r13, r8, r1)
            if (r13 != 0) goto L7e
            java.lang.String r13 = "S"
            java.lang.String r1 = "K"
            java.lang.String r2 = "L"
            java.lang.String[] r13 = new java.lang.String[]{r13, r1, r2}
            boolean r13 = contains(r10, r0, r8, r13)
            if (r13 != 0) goto L7e
            r11.append(r7)
        L7e:
            int r11 = r12 + 1
            char r10 = r9.charAt(r10, r11)
            if (r10 != r7) goto Lad
            int r11 = r12 + 2
            goto Lad
        L89:
            if (r12 != 0) goto L93
            int r13 = r12 + 4
            char r13 = r9.charAt(r10, r13)
            if (r13 == r3) goto La8
        L93:
            int r13 = r10.length()
            if (r13 == r2) goto La8
            java.lang.String[] r13 = new java.lang.String[]{r4}
            boolean r10 = contains(r10, r5, r2, r13)
            if (r10 == 0) goto La4
            goto La8
        La4:
            r11.append(r7, r6)
            goto Lab
        La8:
            r11.append(r6)
        Lab:
            int r11 = r12 + 1
        Lad:
            return r11
    }

    private int handleL(java.lang.String r4, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r5, int r6) {
            r3 = this;
            int r0 = r6 + 1
            char r1 = r3.charAt(r4, r0)
            r2 = 76
            if (r1 != r2) goto L1a
            boolean r4 = r3.conditionL0(r4, r6)
            if (r4 == 0) goto L14
            r5.appendPrimary(r2)
            goto L17
        L14:
            r5.append(r2)
        L17:
            int r0 = r6 + 2
            goto L1d
        L1a:
            r5.append(r2)
        L1d:
            return r0
    }

    private int handleP(java.lang.String r4, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r5, int r6) {
            r3 = this;
            int r0 = r6 + 1
            char r1 = r3.charAt(r4, r0)
            r2 = 72
            if (r1 != r2) goto L12
            r4 = 70
            r5.append(r4)
            int r6 = r6 + 2
            goto L29
        L12:
            r1 = 80
            r5.append(r1)
            java.lang.String r5 = "P"
            java.lang.String r1 = "B"
            java.lang.String[] r5 = new java.lang.String[]{r5, r1}
            r1 = 1
            boolean r4 = contains(r4, r0, r1, r5)
            if (r4 == 0) goto L28
            int r0 = r6 + 2
        L28:
            r6 = r0
        L29:
            return r6
    }

    private int handleR(java.lang.String r5, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r6, int r7, boolean r8) {
            r4 = this;
            int r0 = r5.length()
            int r0 = r0 + (-1)
            r1 = 82
            r2 = 2
            if (r7 != r0) goto L2f
            if (r8 != 0) goto L2f
            int r8 = r7 + (-2)
            java.lang.String r0 = "IE"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            boolean r8 = contains(r5, r8, r2, r0)
            if (r8 == 0) goto L2f
            int r8 = r7 + (-4)
            java.lang.String r0 = "ME"
            java.lang.String r3 = "MA"
            java.lang.String[] r0 = new java.lang.String[]{r0, r3}
            boolean r8 = contains(r5, r8, r2, r0)
            if (r8 != 0) goto L2f
            r6.appendAlternate(r1)
            goto L32
        L2f:
            r6.append(r1)
        L32:
            int r6 = r7 + 1
            char r5 = r4.charAt(r5, r6)
            if (r5 != r1) goto L3c
            int r6 = r7 + 2
        L3c:
            return r6
    }

    private int handleS(java.lang.String r10, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r11, int r12, boolean r13) {
            r9 = this;
            int r0 = r12 + (-1)
            java.lang.String r1 = "ISL"
            java.lang.String r2 = "YSL"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2}
            r2 = 3
            boolean r0 = contains(r10, r0, r2, r1)
            r1 = 1
            if (r0 == 0) goto L15
        L12:
            int r12 = r12 + r1
            goto Lf3
        L15:
            r0 = 88
            r3 = 83
            if (r12 != 0) goto L2c
            r4 = 5
            java.lang.String r5 = "SUGAR"
            java.lang.String[] r5 = new java.lang.String[]{r5}
            boolean r4 = contains(r10, r12, r4, r5)
            if (r4 == 0) goto L2c
            r11.append(r0, r3)
            goto L12
        L2c:
            java.lang.String r4 = "SH"
            java.lang.String[] r4 = new java.lang.String[]{r4}
            r5 = 2
            boolean r4 = contains(r10, r12, r5, r4)
            r6 = 4
            if (r4 == 0) goto L58
            int r13 = r12 + 1
            java.lang.String r1 = "HEIM"
            java.lang.String r2 = "HOEK"
            java.lang.String r4 = "HOLM"
            java.lang.String r7 = "HOLZ"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r4, r7}
            boolean r10 = contains(r10, r13, r6, r1)
            if (r10 == 0) goto L52
            r11.append(r3)
            goto L55
        L52:
            r11.append(r0)
        L55:
            int r12 = r12 + r5
            goto Lf3
        L58:
            java.lang.String r4 = "SIO"
            java.lang.String r7 = "SIA"
            java.lang.String[] r4 = new java.lang.String[]{r4, r7}
            boolean r4 = contains(r10, r12, r2, r4)
            if (r4 != 0) goto Le9
            java.lang.String r4 = "SIAN"
            java.lang.String[] r4 = new java.lang.String[]{r4}
            boolean r4 = contains(r10, r12, r6, r4)
            if (r4 == 0) goto L74
            goto Le9
        L74:
            java.lang.String r13 = "Z"
            if (r12 != 0) goto L8c
            int r2 = r12 + 1
            java.lang.String r4 = "M"
            java.lang.String r6 = "N"
            java.lang.String r7 = "L"
            java.lang.String r8 = "W"
            java.lang.String[] r4 = new java.lang.String[]{r4, r6, r7, r8}
            boolean r2 = contains(r10, r2, r1, r4)
            if (r2 != 0) goto L98
        L8c:
            int r2 = r12 + 1
            java.lang.String[] r4 = new java.lang.String[]{r13}
            boolean r4 = contains(r10, r2, r1, r4)
            if (r4 == 0) goto Laa
        L98:
            r11.append(r3, r0)
            int r11 = r12 + 1
            java.lang.String[] r13 = new java.lang.String[]{r13}
            boolean r10 = contains(r10, r11, r1, r13)
            if (r10 == 0) goto La8
            goto L55
        La8:
            r12 = r11
            goto Lf3
        Laa:
            java.lang.String r0 = "SC"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            boolean r0 = contains(r10, r12, r5, r0)
            if (r0 == 0) goto Lbb
            int r12 = r9.handleSC(r10, r11, r12)
            goto Lf3
        Lbb:
            int r0 = r10.length()
            int r0 = r0 - r1
            if (r12 != r0) goto Ld6
            int r0 = r12 + (-2)
            java.lang.String r4 = "AI"
            java.lang.String r6 = "OI"
            java.lang.String[] r4 = new java.lang.String[]{r4, r6}
            boolean r0 = contains(r10, r0, r5, r4)
            if (r0 == 0) goto Ld6
            r11.appendAlternate(r3)
            goto Ld9
        Ld6:
            r11.append(r3)
        Ld9:
            java.lang.String r11 = "S"
            java.lang.String[] r11 = new java.lang.String[]{r11, r13}
            boolean r10 = contains(r10, r2, r1, r11)
            if (r10 == 0) goto Le7
            goto L55
        Le7:
            r12 = r2
            goto Lf3
        Le9:
            if (r13 == 0) goto Lef
            r11.append(r3)
            goto Lf2
        Lef:
            r11.append(r3, r0)
        Lf2:
            int r12 = r12 + r2
        Lf3:
            return r12
    }

    private int handleSC(java.lang.String r12, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r13, int r14) {
            r11 = this;
            int r0 = r14 + 2
            char r1 = r11.charAt(r12, r0)
            r2 = 83
            java.lang.String r3 = "SK"
            r4 = 3
            r5 = 72
            if (r1 != r5) goto L5e
            int r0 = r14 + 3
            java.lang.String r5 = "OO"
            java.lang.String r6 = "ER"
            java.lang.String r7 = "EN"
            java.lang.String r8 = "UY"
            java.lang.String r9 = "ED"
            java.lang.String r10 = "EM"
            java.lang.String[] r1 = new java.lang.String[]{r5, r6, r7, r8, r9, r10}
            r5 = 2
            boolean r1 = contains(r12, r0, r5, r1)
            if (r1 == 0) goto L40
            java.lang.String r1 = "ER"
            java.lang.String r2 = "EN"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2}
            boolean r12 = contains(r12, r0, r5, r1)
            if (r12 == 0) goto L3c
            java.lang.String r12 = "X"
            r13.append(r12, r3)
            goto L76
        L3c:
            r13.append(r3)
            goto L76
        L40:
            r0 = 88
            if (r14 != 0) goto L5a
            char r1 = r11.charAt(r12, r4)
            boolean r1 = r11.isVowel(r1)
            if (r1 != 0) goto L5a
            char r12 = r11.charAt(r12, r4)
            r1 = 87
            if (r12 == r1) goto L5a
            r13.append(r0, r2)
            goto L76
        L5a:
            r13.append(r0)
            goto L76
        L5e:
            r1 = 1
            java.lang.String r5 = "I"
            java.lang.String r6 = "E"
            java.lang.String r7 = "Y"
            java.lang.String[] r5 = new java.lang.String[]{r5, r6, r7}
            boolean r12 = contains(r12, r0, r1, r5)
            if (r12 == 0) goto L73
            r13.append(r2)
            goto L76
        L73:
            r13.append(r3)
        L76:
            int r14 = r14 + r4
            return r14
    }

    private int handleT(java.lang.String r7, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r8, int r9) {
            r6 = this;
            java.lang.String r0 = "TION"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            r1 = 4
            boolean r0 = contains(r7, r9, r1, r0)
            r2 = 88
            r3 = 3
            if (r0 == 0) goto L16
            r8.append(r2)
        L13:
            int r9 = r9 + r3
            goto L90
        L16:
            java.lang.String r0 = "TIA"
            java.lang.String r4 = "TCH"
            java.lang.String[] r0 = new java.lang.String[]{r0, r4}
            boolean r0 = contains(r7, r9, r3, r0)
            if (r0 == 0) goto L28
            r8.append(r2)
            goto L13
        L28:
            java.lang.String r0 = "TH"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            r2 = 2
            boolean r0 = contains(r7, r9, r2, r0)
            r4 = 84
            if (r0 != 0) goto L5c
            java.lang.String r0 = "TTH"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            boolean r0 = contains(r7, r9, r3, r0)
            if (r0 == 0) goto L44
            goto L5c
        L44:
            r8.append(r4)
            int r8 = r9 + 1
            java.lang.String r0 = "T"
            java.lang.String r1 = "D"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            r1 = 1
            boolean r7 = contains(r7, r8, r1, r0)
            if (r7 == 0) goto L5a
            int r9 = r9 + r2
            goto L90
        L5a:
            r9 = r8
            goto L90
        L5c:
            int r9 = r9 + r2
            java.lang.String r0 = "OM"
            java.lang.String r5 = "AM"
            java.lang.String[] r0 = new java.lang.String[]{r0, r5}
            boolean r0 = contains(r7, r9, r2, r0)
            if (r0 != 0) goto L8d
            java.lang.String r0 = "VAN "
            java.lang.String r2 = "VON "
            java.lang.String[] r0 = new java.lang.String[]{r0, r2}
            r2 = 0
            boolean r0 = contains(r7, r2, r1, r0)
            if (r0 != 0) goto L8d
            java.lang.String r0 = "SCH"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            boolean r7 = contains(r7, r2, r3, r0)
            if (r7 == 0) goto L87
            goto L8d
        L87:
            r7 = 48
            r8.append(r7, r4)
            goto L90
        L8d:
            r8.append(r4)
        L90:
            return r9
    }

    private int handleW(java.lang.String r8, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r9, int r10) {
            r7 = this;
            java.lang.String r0 = "WR"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            r1 = 2
            boolean r0 = contains(r8, r10, r1, r0)
            if (r0 == 0) goto L15
            r8 = 82
            r9.append(r8)
        L12:
            int r10 = r10 + r1
            goto L9b
        L15:
            r0 = 70
            if (r10 != 0) goto L46
            int r2 = r10 + 1
            char r3 = r7.charAt(r8, r2)
            boolean r3 = r7.isVowel(r3)
            if (r3 != 0) goto L31
            java.lang.String r3 = "WH"
            java.lang.String[] r3 = new java.lang.String[]{r3}
            boolean r1 = contains(r8, r10, r1, r3)
            if (r1 == 0) goto L46
        L31:
            char r8 = r7.charAt(r8, r2)
            boolean r8 = r7.isVowel(r8)
            r10 = 65
            if (r8 == 0) goto L41
            r9.append(r10, r0)
            goto L44
        L41:
            r9.append(r10)
        L44:
            r10 = r2
            goto L9b
        L46:
            int r1 = r8.length()
            int r1 = r1 + (-1)
            if (r10 != r1) goto L5a
            int r1 = r10 + (-1)
            char r1 = r7.charAt(r8, r1)
            boolean r1 = r7.isVowel(r1)
            if (r1 != 0) goto L96
        L5a:
            int r1 = r10 + (-1)
            r2 = 5
            java.lang.String r3 = "EWSKI"
            java.lang.String r4 = "EWSKY"
            java.lang.String r5 = "OWSKI"
            java.lang.String r6 = "OWSKY"
            java.lang.String[] r3 = new java.lang.String[]{r3, r4, r5, r6}
            boolean r1 = contains(r8, r1, r2, r3)
            if (r1 != 0) goto L96
            r1 = 0
            r2 = 3
            java.lang.String r3 = "SCH"
            java.lang.String[] r3 = new java.lang.String[]{r3}
            boolean r1 = contains(r8, r1, r2, r3)
            if (r1 == 0) goto L7e
            goto L96
        L7e:
            java.lang.String r0 = "WICZ"
            java.lang.String r1 = "WITZ"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            r1 = 4
            boolean r8 = contains(r8, r10, r1, r0)
            if (r8 == 0) goto L99
            java.lang.String r8 = "TS"
            java.lang.String r0 = "FX"
            r9.append(r8, r0)
            goto L12
        L96:
            r9.appendAlternate(r0)
        L99:
            int r10 = r10 + 1
        L9b:
            return r10
    }

    private int handleX(java.lang.String r6, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r7, int r8) {
            r5 = this;
            r0 = 1
            if (r8 != 0) goto La
            r6 = 83
            r7.append(r6)
            int r8 = r8 + r0
            goto L4b
        La:
            int r1 = r6.length()
            int r1 = r1 - r0
            r2 = 2
            if (r8 != r1) goto L33
            int r1 = r8 + (-3)
            java.lang.String r3 = "IAU"
            java.lang.String r4 = "EAU"
            java.lang.String[] r3 = new java.lang.String[]{r3, r4}
            r4 = 3
            boolean r1 = contains(r6, r1, r4, r3)
            if (r1 != 0) goto L38
            int r1 = r8 + (-2)
            java.lang.String r3 = "AU"
            java.lang.String r4 = "OU"
            java.lang.String[] r3 = new java.lang.String[]{r3, r4}
            boolean r1 = contains(r6, r1, r2, r3)
            if (r1 != 0) goto L38
        L33:
            java.lang.String r1 = "KS"
            r7.append(r1)
        L38:
            int r7 = r8 + 1
            java.lang.String r1 = "C"
            java.lang.String r3 = "X"
            java.lang.String[] r1 = new java.lang.String[]{r1, r3}
            boolean r6 = contains(r6, r7, r0, r1)
            if (r6 == 0) goto L4a
            int r8 = r8 + r2
            goto L4b
        L4a:
            r8 = r7
        L4b:
            return r8
    }

    private int handleZ(java.lang.String r6, org.apache.commons.codec1.language.DoubleMetaphone.DoubleMetaphoneResult r7, int r8, boolean r9) {
            r5 = this;
            int r0 = r8 + 1
            char r1 = r5.charAt(r6, r0)
            r2 = 2
            r3 = 72
            if (r1 != r3) goto L12
            r6 = 74
            r7.append(r6)
            int r8 = r8 + r2
            goto L49
        L12:
            java.lang.String r1 = "ZO"
            java.lang.String r3 = "ZI"
            java.lang.String r4 = "ZA"
            java.lang.String[] r1 = new java.lang.String[]{r1, r3, r4}
            boolean r1 = contains(r6, r0, r2, r1)
            if (r1 != 0) goto L37
            if (r9 == 0) goto L31
            if (r8 <= 0) goto L31
            int r9 = r8 + (-1)
            char r9 = r5.charAt(r6, r9)
            r1 = 84
            if (r9 == r1) goto L31
            goto L37
        L31:
            r9 = 83
            r7.append(r9)
            goto L3e
        L37:
            java.lang.String r9 = "S"
            java.lang.String r1 = "TS"
            r7.append(r9, r1)
        L3e:
            char r6 = r5.charAt(r6, r0)
            r7 = 90
            if (r6 != r7) goto L48
            int r0 = r8 + 2
        L48:
            r8 = r0
        L49:
            return r8
    }

    private boolean isSilentStart(java.lang.String r6) {
            r5 = this;
            java.lang.String[] r0 = org.apache.commons.codec1.language.DoubleMetaphone.SILENT_START
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 < r1) goto L8
            goto L11
        L8:
            r4 = r0[r3]
            boolean r4 = r6.startsWith(r4)
            if (r4 == 0) goto L12
            r2 = 1
        L11:
            return r2
        L12:
            int r3 = r3 + 1
            goto L5
    }

    private boolean isSlavoGermanic(java.lang.String r3) {
            r2 = this;
            r0 = 87
            int r0 = r3.indexOf(r0)
            r1 = -1
            if (r0 > r1) goto L23
            r0 = 75
            int r0 = r3.indexOf(r0)
            if (r0 > r1) goto L23
            java.lang.String r0 = "CZ"
            int r0 = r3.indexOf(r0)
            if (r0 > r1) goto L23
            java.lang.String r0 = "WITZ"
            int r3 = r3.indexOf(r0)
            if (r3 > r1) goto L23
            r3 = 0
            return r3
        L23:
            r3 = 1
            return r3
    }

    private boolean isVowel(char r2) {
            r1 = this;
            java.lang.String r0 = "AEIOUY"
            int r2 = r0.indexOf(r2)
            r0 = -1
            if (r2 == r0) goto Lb
            r2 = 1
            return r2
        Lb:
            r2 = 0
            return r2
    }

    protected char charAt(java.lang.String r2, int r3) {
            r1 = this;
            if (r3 < 0) goto Le
            int r0 = r2.length()
            if (r3 < r0) goto L9
            goto Le
        L9:
            char r2 = r2.charAt(r3)
            return r2
        Le:
            r2 = 0
            return r2
    }

    public java.lang.String doubleMetaphone(java.lang.String r2) {
            r1 = this;
            r0 = 0
            java.lang.String r2 = r1.doubleMetaphone(r2, r0)
            return r2
    }

    public java.lang.String doubleMetaphone(java.lang.String r8, boolean r9) {
            r7 = this;
            java.lang.String r8 = r7.cleanInput(r8)
            if (r8 != 0) goto L8
            r8 = 0
            return r8
        L8:
            boolean r0 = r7.isSlavoGermanic(r8)
            boolean r1 = r7.isSilentStart(r8)
            org.apache.commons.codec1.language.DoubleMetaphone$DoubleMetaphoneResult r2 = new org.apache.commons.codec1.language.DoubleMetaphone$DoubleMetaphoneResult
            int r3 = r7.getMaxCodeLen()
            r2.<init>(r7, r3)
        L19:
            boolean r3 = r2.isComplete()
            if (r3 != 0) goto Lfb
            int r3 = r8.length()
            int r3 = r3 + (-1)
            if (r1 <= r3) goto L29
            goto Lfb
        L29:
            char r3 = r8.charAt(r1)
            r4 = 199(0xc7, float:2.79E-43)
            if (r3 == r4) goto Lf2
            r4 = 209(0xd1, float:2.93E-43)
            r5 = 78
            if (r3 == r4) goto Lee
            r4 = 75
            r6 = 70
            switch(r3) {
                case 65: goto Le8;
                case 66: goto Ld7;
                case 67: goto Ld1;
                case 68: goto Lcb;
                case 69: goto Le8;
                case 70: goto Lbf;
                case 71: goto Lb9;
                case 72: goto Lb3;
                case 73: goto Le8;
                case 74: goto Lad;
                case 75: goto La1;
                case 76: goto L9b;
                case 77: goto L8f;
                case 78: goto L83;
                case 79: goto Le8;
                case 80: goto L7e;
                case 81: goto L70;
                case 82: goto L6b;
                case 83: goto L66;
                case 84: goto L61;
                case 85: goto Le8;
                case 86: goto L4f;
                case 87: goto L4a;
                case 88: goto L45;
                case 89: goto Le8;
                case 90: goto L40;
                default: goto L3e;
            }
        L3e:
            goto Lf7
        L40:
            int r1 = r7.handleZ(r8, r2, r1, r0)
            goto L19
        L45:
            int r1 = r7.handleX(r8, r2, r1)
            goto L19
        L4a:
            int r1 = r7.handleW(r8, r2, r1)
            goto L19
        L4f:
            r2.append(r6)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            r5 = 86
            if (r4 != r5) goto L5f
        L5c:
            int r1 = r1 + 2
            goto L19
        L5f:
            r1 = r3
            goto L19
        L61:
            int r1 = r7.handleT(r8, r2, r1)
            goto L19
        L66:
            int r1 = r7.handleS(r8, r2, r1, r0)
            goto L19
        L6b:
            int r1 = r7.handleR(r8, r2, r1, r0)
            goto L19
        L70:
            r2.append(r4)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            r5 = 81
            if (r4 != r5) goto L5f
            goto L5c
        L7e:
            int r1 = r7.handleP(r8, r2, r1)
            goto L19
        L83:
            r2.append(r5)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            if (r4 != r5) goto L5f
            goto L5c
        L8f:
            r3 = 77
            r2.append(r3)
            boolean r3 = r7.conditionM0(r8, r1)
            if (r3 == 0) goto Lf7
            goto L5c
        L9b:
            int r1 = r7.handleL(r8, r2, r1)
            goto L19
        La1:
            r2.append(r4)
            int r3 = r1 + 1
            char r5 = r7.charAt(r8, r3)
            if (r5 != r4) goto L5f
            goto L5c
        Lad:
            int r1 = r7.handleJ(r8, r2, r1, r0)
            goto L19
        Lb3:
            int r1 = r7.handleH(r8, r2, r1)
            goto L19
        Lb9:
            int r1 = r7.handleG(r8, r2, r1, r0)
            goto L19
        Lbf:
            r2.append(r6)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            if (r4 != r6) goto L5f
            goto L5c
        Lcb:
            int r1 = r7.handleD(r8, r2, r1)
            goto L19
        Ld1:
            int r1 = r7.handleC(r8, r2, r1)
            goto L19
        Ld7:
            r3 = 80
            r2.append(r3)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            r5 = 66
            if (r4 != r5) goto L5f
            goto L5c
        Le8:
            int r1 = r7.handleAEIOUY(r2, r1)
            goto L19
        Lee:
            r2.append(r5)
            goto Lf7
        Lf2:
            r3 = 83
            r2.append(r3)
        Lf7:
            int r1 = r1 + 1
            goto L19
        Lfb:
            if (r9 == 0) goto L102
            java.lang.String r8 = r2.getAlternate()
            goto L106
        L102:
            java.lang.String r8 = r2.getPrimary()
        L106:
            return r8
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.doubleMetaphone(r2)
            return r2
        Lb:
            org.apache.commons.codec1.EncoderException r2 = new org.apache.commons.codec1.EncoderException
            java.lang.String r0 = "DoubleMetaphone encode parameter is not of type String"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String encode(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.doubleMetaphone(r1)
            return r1
    }

    public int getMaxCodeLen() {
            r1 = this;
            int r0 = r1.maxCodeLen
            return r0
    }

    public boolean isDoubleMetaphoneEqual(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.isDoubleMetaphoneEqual(r2, r3, r0)
            return r2
    }

    public boolean isDoubleMetaphoneEqual(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = this;
            java.lang.String r1 = r0.doubleMetaphone(r1, r3)
            java.lang.String r2 = r0.doubleMetaphone(r2, r3)
            boolean r1 = org.apache.commons.codec1.binary.StringUtils.equals(r1, r2)
            return r1
    }

    public void setMaxCodeLen(int r1) {
            r0 = this;
            r0.maxCodeLen = r1
            return
    }
}
