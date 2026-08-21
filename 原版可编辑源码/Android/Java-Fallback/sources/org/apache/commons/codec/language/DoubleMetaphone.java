package org.apache.commons.codec.language;

public class DoubleMetaphone implements org.apache.commons.codec.StringEncoder {
    private static final java.lang.String[] ES_EP_EB_EL_EY_IB_IL_IN_IE_EI_ER = null;
    private static final java.lang.String[] L_R_N_M_B_H_F_V_W_SPACE = null;
    private static final java.lang.String[] L_T_K_S_N_M_B_Z = null;
    private static final java.lang.String[] SILENT_START = null;
    private static final java.lang.String VOWELS = "AEIOUY";
    private int maxCodeLen;

    public class DoubleMetaphoneResult {
        private final java.lang.StringBuffer alternate;
        private final int maxLength;
        private final java.lang.StringBuffer primary;
        final org.apache.commons.codec.language.DoubleMetaphone this$0;

        public DoubleMetaphoneResult(org.apache.commons.codec.language.DoubleMetaphone r2, int r3) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                java.lang.StringBuffer r2 = new java.lang.StringBuffer
                org.apache.commons.codec.language.DoubleMetaphone r0 = r1.this$0
                int r0 = r0.getMaxCodeLen()
                r2.<init>(r0)
                r1.primary = r2
                java.lang.StringBuffer r2 = new java.lang.StringBuffer
                org.apache.commons.codec.language.DoubleMetaphone r0 = r1.this$0
                int r0 = r0.getMaxCodeLen()
                r2.<init>(r0)
                r1.alternate = r2
                r1.maxLength = r3
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
                java.lang.StringBuffer r0 = r2.alternate
                int r0 = r0.length()
                int r1 = r2.maxLength
                if (r0 >= r1) goto Lf
                java.lang.StringBuffer r0 = r2.alternate
                r0.append(r3)
            Lf:
                return
        }

        public void appendAlternate(java.lang.String r4) {
                r3 = this;
                int r0 = r3.maxLength
                java.lang.StringBuffer r1 = r3.alternate
                int r1 = r1.length()
                int r0 = r0 - r1
                int r1 = r4.length()
                if (r1 > r0) goto L15
                java.lang.StringBuffer r0 = r3.alternate
                r0.append(r4)
                goto L1f
            L15:
                java.lang.StringBuffer r1 = r3.alternate
                r2 = 0
                java.lang.String r4 = r4.substring(r2, r0)
                r1.append(r4)
            L1f:
                return
        }

        public void appendPrimary(char r3) {
                r2 = this;
                java.lang.StringBuffer r0 = r2.primary
                int r0 = r0.length()
                int r1 = r2.maxLength
                if (r0 >= r1) goto Lf
                java.lang.StringBuffer r0 = r2.primary
                r0.append(r3)
            Lf:
                return
        }

        public void appendPrimary(java.lang.String r4) {
                r3 = this;
                int r0 = r3.maxLength
                java.lang.StringBuffer r1 = r3.primary
                int r1 = r1.length()
                int r0 = r0 - r1
                int r1 = r4.length()
                if (r1 > r0) goto L15
                java.lang.StringBuffer r0 = r3.primary
                r0.append(r4)
                goto L1f
            L15:
                java.lang.StringBuffer r1 = r3.primary
                r2 = 0
                java.lang.String r4 = r4.substring(r2, r0)
                r1.append(r4)
            L1f:
                return
        }

        public java.lang.String getAlternate() {
                r1 = this;
                java.lang.StringBuffer r0 = r1.alternate
                java.lang.String r0 = r0.toString()
                return r0
        }

        public java.lang.String getPrimary() {
                r1 = this;
                java.lang.StringBuffer r0 = r1.primary
                java.lang.String r0 = r0.toString()
                return r0
        }

        public boolean isComplete() {
                r2 = this;
                java.lang.StringBuffer r0 = r2.primary
                int r0 = r0.length()
                int r1 = r2.maxLength
                if (r0 < r1) goto L16
                java.lang.StringBuffer r0 = r2.alternate
                int r0 = r0.length()
                int r1 = r2.maxLength
                if (r0 < r1) goto L16
                r0 = 1
                goto L17
            L16:
                r0 = 0
            L17:
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
            org.apache.commons.codec.language.DoubleMetaphone.SILENT_START = r0
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
            org.apache.commons.codec.language.DoubleMetaphone.L_R_N_M_B_H_F_V_W_SPACE = r0
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
            org.apache.commons.codec.language.DoubleMetaphone.ES_EP_EB_EL_EY_IB_IL_IN_IE_EI_ER = r0
            java.lang.String r1 = "L"
            java.lang.String r2 = "T"
            java.lang.String r3 = "K"
            java.lang.String r4 = "S"
            java.lang.String r5 = "N"
            java.lang.String r6 = "M"
            java.lang.String r7 = "B"
            java.lang.String r8 = "Z"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8}
            org.apache.commons.codec.language.DoubleMetaphone.L_T_K_S_N_M_B_Z = r0
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
            r0 = 4
            java.lang.String r1 = "CHIA"
            boolean r0 = contains(r7, r8, r0, r1)
            r1 = 1
            if (r0 == 0) goto Lb
            return r1
        Lb:
            r0 = 0
            if (r8 > r1) goto Lf
            return r0
        Lf:
            int r2 = r8 + (-2)
            char r3 = r6.charAt(r7, r2)
            boolean r3 = r6.isVowel(r3)
            if (r3 == 0) goto L1c
            return r0
        L1c:
            int r3 = r8 + (-1)
            r4 = 3
            java.lang.String r5 = "ACH"
            boolean r3 = contains(r7, r3, r4, r5)
            if (r3 != 0) goto L28
            return r0
        L28:
            int r8 = r8 + 2
            char r8 = r6.charAt(r7, r8)
            r3 = 73
            if (r8 == r3) goto L36
            r3 = 69
            if (r8 != r3) goto L43
        L36:
            r8 = 6
            java.lang.String r3 = "BACHER"
            java.lang.String r4 = "MACHER"
            boolean r7 = contains(r7, r2, r8, r3, r4)
            if (r7 == 0) goto L42
            goto L43
        L42:
            r1 = r0
        L43:
            return r1
    }

    private boolean conditionCH0(java.lang.String r10, int r11) {
            r9 = this;
            r0 = 0
            if (r11 == 0) goto L4
            return r0
        L4:
            r1 = 1
            int r3 = r11 + 1
            r11 = 5
            java.lang.String r2 = "HARAC"
            java.lang.String r4 = "HARIS"
            boolean r2 = contains(r10, r3, r11, r2, r4)
            if (r2 != 0) goto L23
            r4 = 3
            java.lang.String r5 = "HOR"
            java.lang.String r6 = "HYM"
            java.lang.String r7 = "HIA"
            java.lang.String r8 = "HEM"
            r2 = r10
            boolean r2 = contains(r2, r3, r4, r5, r6, r7, r8)
            if (r2 != 0) goto L23
            return r0
        L23:
            java.lang.String r2 = "CHORE"
            boolean r10 = contains(r10, r0, r11, r2)
            if (r10 == 0) goto L2c
            return r0
        L2c:
            return r1
    }

    private boolean conditionCH1(java.lang.String r12, int r13) {
            r11 = this;
            r0 = 0
            r1 = 4
            java.lang.String r2 = "VAN "
            java.lang.String r3 = "VON "
            boolean r1 = contains(r12, r0, r1, r2, r3)
            r2 = 1
            if (r1 != 0) goto L56
            r1 = 3
            java.lang.String r3 = "SCH"
            boolean r1 = contains(r12, r0, r1, r3)
            if (r1 != 0) goto L56
            int r4 = r13 + (-2)
            r5 = 6
            java.lang.String r6 = "ORCHES"
            java.lang.String r7 = "ARCHIT"
            java.lang.String r8 = "ORCHID"
            r3 = r12
            boolean r1 = contains(r3, r4, r5, r6, r7, r8)
            if (r1 != 0) goto L56
            int r1 = r13 + 2
            java.lang.String r3 = "T"
            java.lang.String r4 = "S"
            boolean r3 = contains(r12, r1, r2, r3, r4)
            if (r3 != 0) goto L56
            int r5 = r13 + (-1)
            r6 = 1
            java.lang.String r7 = "A"
            java.lang.String r8 = "O"
            java.lang.String r9 = "U"
            java.lang.String r10 = "E"
            r4 = r12
            boolean r3 = contains(r4, r5, r6, r7, r8, r9, r10)
            if (r3 != 0) goto L46
            if (r13 != 0) goto L57
        L46:
            java.lang.String[] r3 = org.apache.commons.codec.language.DoubleMetaphone.L_R_N_M_B_H_F_V_W_SPACE
            boolean r1 = contains(r12, r1, r2, r3)
            if (r1 != 0) goto L56
            int r13 = r13 + r2
            int r12 = r12.length()
            int r12 = r12 - r2
            if (r13 != r12) goto L57
        L56:
            r0 = r2
        L57:
            return r0
    }

    private boolean conditionL0(java.lang.String r9, int r10) {
            r8 = this;
            int r0 = r9.length()
            int r0 = r0 + (-3)
            r1 = 1
            if (r10 != r0) goto L1a
            int r3 = r10 + (-1)
            r4 = 4
            java.lang.String r5 = "ILLO"
            java.lang.String r6 = "ILLA"
            java.lang.String r7 = "ALLE"
            r2 = r9
            boolean r0 = contains(r2, r3, r4, r5, r6, r7)
            if (r0 == 0) goto L1a
            return r1
        L1a:
            int r0 = r9.length()
            r2 = 2
            int r0 = r0 - r2
            java.lang.String r3 = "AS"
            java.lang.String r4 = "OS"
            boolean r0 = contains(r9, r0, r2, r3, r4)
            if (r0 != 0) goto L39
            int r0 = r9.length()
            int r0 = r0 - r1
            java.lang.String r2 = "A"
            java.lang.String r3 = "O"
            boolean r0 = contains(r9, r0, r1, r2, r3)
            if (r0 == 0) goto L44
        L39:
            int r10 = r10 - r1
            r0 = 4
            java.lang.String r2 = "ALLE"
            boolean r9 = contains(r9, r10, r0, r2)
            if (r9 == 0) goto L44
            return r1
        L44:
            r9 = 0
            return r9
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
            boolean r1 = contains(r6, r1, r3, r4)
            if (r1 == 0) goto L29
            int r1 = r6.length()
            int r1 = r1 - r2
            if (r0 == r1) goto L2a
            r0 = 2
            int r7 = r7 + r0
            java.lang.String r1 = "ER"
            boolean r6 = contains(r6, r7, r0, r1)
            if (r6 == 0) goto L29
            goto L2a
        L29:
            r2 = 0
        L2a:
            return r2
    }

    private static boolean contains(java.lang.String r2, int r3, int r4, java.lang.String r5) {
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r5
            boolean r2 = contains(r2, r3, r4, r0)
            return r2
    }

    private static boolean contains(java.lang.String r2, int r3, int r4, java.lang.String r5, java.lang.String r6) {
            r0 = 2
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r5
            r5 = 1
            r0[r5] = r6
            boolean r2 = contains(r2, r3, r4, r0)
            return r2
    }

    private static boolean contains(java.lang.String r2, int r3, int r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r0 = 3
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r5
            r5 = 1
            r0[r5] = r6
            r5 = 2
            r0[r5] = r7
            boolean r2 = contains(r2, r3, r4, r0)
            return r2
    }

    private static boolean contains(java.lang.String r2, int r3, int r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            r0 = 4
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r5
            r5 = 1
            r0[r5] = r6
            r5 = 2
            r0[r5] = r7
            r5 = 3
            r0[r5] = r8
            boolean r2 = contains(r2, r3, r4, r0)
            return r2
    }

    private static boolean contains(java.lang.String r2, int r3, int r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            r0 = 5
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r5
            r5 = 1
            r0[r5] = r6
            r5 = 2
            r0[r5] = r7
            r5 = 3
            r0[r5] = r8
            r5 = 4
            r0[r5] = r9
            boolean r2 = contains(r2, r3, r4, r0)
            return r2
    }

    private static boolean contains(java.lang.String r2, int r3, int r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r0 = 6
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r5
            r5 = 1
            r0[r5] = r6
            r5 = 2
            r0[r5] = r7
            r5 = 3
            r0[r5] = r8
            r5 = 4
            r0[r5] = r9
            r5 = 5
            r0[r5] = r10
            boolean r2 = contains(r2, r3, r4, r0)
            return r2
    }

    protected static boolean contains(java.lang.String r2, int r3, int r4, java.lang.String[] r5) {
            r0 = 0
            if (r3 < 0) goto L1f
            int r4 = r4 + r3
            int r1 = r2.length()
            if (r4 > r1) goto L1f
            java.lang.String r2 = r2.substring(r3, r4)
            int r3 = r5.length
            r4 = r0
        L10:
            if (r4 >= r3) goto L1f
            r1 = r5[r4]
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L1c
            r0 = 1
            goto L1f
        L1c:
            int r4 = r4 + 1
            goto L10
        L1f:
            return r0
    }

    private int handleAEIOUY(org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r2, int r3) {
            r1 = this;
            if (r3 != 0) goto L7
            r0 = 65
            r2.append(r0)
        L7:
            int r3 = r3 + 1
            return r3
    }

    private int handleC(java.lang.String r17, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r18, int r19) {
            r16 = this;
            r0 = r16
            r7 = r17
            r8 = r18
            r9 = r19
            boolean r1 = r0.conditionC0(r7, r9)
            r10 = 75
            r11 = 2
            if (r1 == 0) goto L18
            r8.append(r10)
        L14:
            int r1 = r9 + 2
            goto Led
        L18:
            r12 = 83
            if (r9 != 0) goto L29
            r1 = 6
            java.lang.String r2 = "CAESAR"
            boolean r1 = contains(r7, r9, r1, r2)
            if (r1 == 0) goto L29
            r8.append(r12)
            goto L14
        L29:
            java.lang.String r1 = "CH"
            boolean r1 = contains(r7, r9, r11, r1)
            if (r1 == 0) goto L37
            int r1 = r16.handleCH(r17, r18, r19)
            goto Led
        L37:
            java.lang.String r1 = "CZ"
            boolean r1 = contains(r7, r9, r11, r1)
            r13 = 88
            if (r1 == 0) goto L50
            int r1 = r9 + (-2)
            r2 = 4
            java.lang.String r3 = "WICZ"
            boolean r1 = contains(r7, r1, r2, r3)
            if (r1 != 0) goto L50
            r8.append(r12, r13)
            goto L14
        L50:
            int r14 = r9 + 1
            r15 = 3
            java.lang.String r1 = "CIA"
            boolean r1 = contains(r7, r14, r15, r1)
            if (r1 == 0) goto L62
            r8.append(r13)
        L5e:
            int r1 = r9 + 3
            goto Led
        L62:
            java.lang.String r1 = "CC"
            boolean r1 = contains(r7, r9, r11, r1)
            if (r1 == 0) goto L7b
            r1 = 1
            if (r9 != r1) goto L76
            r1 = 0
            char r1 = r0.charAt(r7, r1)
            r2 = 77
            if (r1 == r2) goto L7b
        L76:
            int r1 = r16.handleCC(r17, r18, r19)
            return r1
        L7b:
            r3 = 2
            java.lang.String r4 = "CK"
            java.lang.String r5 = "CG"
            java.lang.String r6 = "CQ"
            r1 = r17
            r2 = r19
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 == 0) goto L90
            r8.append(r10)
            goto L14
        L90:
            r3 = 2
            java.lang.String r4 = "CI"
            java.lang.String r5 = "CE"
            java.lang.String r6 = "CY"
            r1 = r17
            r2 = r19
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 == 0) goto Lbc
            r3 = 3
            java.lang.String r4 = "CIO"
            java.lang.String r5 = "CIE"
            java.lang.String r6 = "CIA"
            r1 = r17
            r2 = r19
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 == 0) goto Lb7
            r8.append(r12, r13)
            goto L14
        Lb7:
            r8.append(r12)
            goto L14
        Lbc:
            r8.append(r10)
            r3 = 2
            java.lang.String r4 = " C"
            java.lang.String r5 = " Q"
            java.lang.String r6 = " G"
            r1 = r17
            r2 = r14
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 == 0) goto Ld0
            goto L5e
        Ld0:
            r3 = 1
            java.lang.String r4 = "C"
            java.lang.String r5 = "K"
            java.lang.String r6 = "Q"
            r1 = r17
            r2 = r14
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 == 0) goto Lec
            java.lang.String r1 = "CE"
            java.lang.String r2 = "CI"
            boolean r1 = contains(r7, r14, r11, r1, r2)
            if (r1 != 0) goto Lec
            goto L14
        Lec:
            r1 = r14
        Led:
            return r1
    }

    private int handleCC(java.lang.String r8, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r9, int r10) {
            r7 = this;
            int r6 = r10 + 2
            r2 = 1
            java.lang.String r3 = "I"
            java.lang.String r4 = "E"
            java.lang.String r5 = "H"
            r0 = r8
            r1 = r6
            boolean r0 = contains(r0, r1, r2, r3, r4, r5)
            if (r0 == 0) goto L42
            r0 = 2
            java.lang.String r1 = "HU"
            boolean r0 = contains(r8, r6, r0, r1)
            if (r0 != 0) goto L42
            r0 = 1
            if (r10 != r0) goto L27
            int r0 = r10 + (-1)
            char r0 = r7.charAt(r8, r0)
            r1 = 65
            if (r0 == r1) goto L34
        L27:
            int r0 = r10 + (-1)
            r1 = 5
            java.lang.String r2 = "UCCEE"
            java.lang.String r3 = "UCCES"
            boolean r8 = contains(r8, r0, r1, r2, r3)
            if (r8 == 0) goto L3a
        L34:
            java.lang.String r8 = "KS"
            r9.append(r8)
            goto L3f
        L3a:
            r8 = 88
            r9.append(r8)
        L3f:
            int r6 = r10 + 3
            goto L47
        L42:
            r8 = 75
            r9.append(r8)
        L47:
            return r6
    }

    private int handleCH(java.lang.String r6, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r7, int r8) {
            r5 = this;
            r0 = 88
            r1 = 2
            r2 = 75
            if (r8 <= 0) goto L15
            r3 = 4
            java.lang.String r4 = "CHAE"
            boolean r3 = contains(r6, r8, r3, r4)
            if (r3 == 0) goto L15
            r7.append(r2, r0)
        L13:
            int r8 = r8 + r1
            return r8
        L15:
            boolean r3 = r5.conditionCH0(r6, r8)
            if (r3 == 0) goto L1f
            r7.append(r2)
            goto L13
        L1f:
            boolean r3 = r5.conditionCH1(r6, r8)
            if (r3 == 0) goto L29
            r7.append(r2)
            goto L13
        L29:
            if (r8 <= 0) goto L3c
            r3 = 0
            java.lang.String r4 = "MC"
            boolean r6 = contains(r6, r3, r1, r4)
            if (r6 == 0) goto L38
            r7.append(r2)
            goto L3f
        L38:
            r7.append(r0, r2)
            goto L3f
        L3c:
            r7.append(r0)
        L3f:
            int r8 = r8 + r1
            return r8
    }

    private int handleD(java.lang.String r9, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r10, int r11) {
            r8 = this;
            r0 = 2
            java.lang.String r1 = "DG"
            boolean r1 = contains(r9, r11, r0, r1)
            if (r1 == 0) goto L28
            int r0 = r11 + 2
            r4 = 1
            java.lang.String r5 = "I"
            java.lang.String r6 = "E"
            java.lang.String r7 = "Y"
            r2 = r9
            r3 = r0
            boolean r9 = contains(r2, r3, r4, r5, r6, r7)
            if (r9 == 0) goto L22
            r9 = 74
            r10.append(r9)
            int r0 = r11 + 3
            goto L3e
        L22:
            java.lang.String r9 = "TK"
            r10.append(r9)
            goto L3e
        L28:
            java.lang.String r1 = "DT"
            java.lang.String r2 = "DD"
            boolean r9 = contains(r9, r11, r0, r1, r2)
            r1 = 84
            if (r9 == 0) goto L39
            r10.append(r1)
            int r0 = r0 + r11
            goto L3e
        L39:
            r10.append(r1)
            int r0 = r11 + 1
        L3e:
            return r0
    }

    private int handleG(java.lang.String r18, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r19, int r20, boolean r21) {
            r17 = this;
            r0 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            int r10 = r9 + 1
            char r1 = r0.charAt(r7, r10)
            r2 = 72
            if (r1 != r2) goto L18
            int r10 = r17.handleGH(r18, r19, r20)
            goto L124
        L18:
            char r1 = r0.charAt(r7, r10)
            r2 = 78
            r3 = 89
            r11 = 0
            r12 = 1
            r13 = 2
            if (r1 != r2) goto L55
            java.lang.String r1 = "N"
            java.lang.String r2 = "KN"
            if (r9 != r12) goto L3b
            char r4 = r0.charAt(r7, r11)
            boolean r4 = r0.isVowel(r4)
            if (r4 == 0) goto L3b
            if (r21 != 0) goto L3b
            r8.append(r2, r1)
            goto L66
        L3b:
            int r4 = r9 + 2
            java.lang.String r5 = "EY"
            boolean r4 = contains(r7, r4, r13, r5)
            if (r4 != 0) goto L51
            char r4 = r0.charAt(r7, r10)
            if (r4 == r3) goto L51
            if (r21 != 0) goto L51
            r8.append(r1, r2)
            goto L66
        L51:
            r8.append(r2)
            goto L66
        L55:
            java.lang.String r1 = "LI"
            boolean r1 = contains(r7, r10, r13, r1)
            if (r1 == 0) goto L6a
            if (r21 != 0) goto L6a
            java.lang.String r1 = "KL"
            java.lang.String r2 = "L"
            r8.append(r1, r2)
        L66:
            int r10 = r9 + 2
            goto L124
        L6a:
            r14 = 74
            r15 = 75
            if (r9 != 0) goto L82
            char r1 = r0.charAt(r7, r10)
            if (r1 == r3) goto L7e
            java.lang.String[] r1 = org.apache.commons.codec.language.DoubleMetaphone.ES_EP_EB_EL_EY_IB_IL_IN_IE_EI_ER
            boolean r1 = contains(r7, r10, r13, r1)
            if (r1 == 0) goto L82
        L7e:
            r8.append(r15, r14)
            goto L66
        L82:
            java.lang.String r1 = "ER"
            boolean r1 = contains(r7, r10, r13, r1)
            r6 = 3
            if (r1 != 0) goto L94
            char r1 = r0.charAt(r7, r10)
            if (r1 != r3) goto L92
            goto L94
        L92:
            r11 = r6
            goto Lc1
        L94:
            r2 = 0
            r3 = 6
            java.lang.String r4 = "DANGER"
            java.lang.String r5 = "RANGER"
            java.lang.String r16 = "MANGER"
            r1 = r18
            r11 = r6
            r6 = r16
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 != 0) goto Lc1
            int r1 = r9 + (-1)
            java.lang.String r2 = "E"
            java.lang.String r3 = "I"
            boolean r2 = contains(r7, r1, r12, r2, r3)
            if (r2 != 0) goto Lc1
            java.lang.String r2 = "RGY"
            java.lang.String r3 = "OGY"
            boolean r1 = contains(r7, r1, r11, r2, r3)
            if (r1 != 0) goto Lc1
            r8.append(r15, r14)
            goto L66
        Lc1:
            r3 = 1
            java.lang.String r4 = "E"
            java.lang.String r5 = "I"
            java.lang.String r6 = "Y"
            r1 = r18
            r2 = r10
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            r2 = 4
            if (r1 != 0) goto Lf1
            int r1 = r9 + (-1)
            java.lang.String r3 = "AGGI"
            java.lang.String r4 = "OGGI"
            boolean r1 = contains(r7, r1, r2, r3, r4)
            if (r1 == 0) goto Ldf
            goto Lf1
        Ldf:
            char r1 = r0.charAt(r7, r10)
            r2 = 71
            if (r1 != r2) goto Led
            int r10 = r9 + 2
            r8.append(r15)
            goto L124
        Led:
            r8.append(r15)
            goto L124
        Lf1:
            java.lang.String r1 = "VAN "
            java.lang.String r3 = "VON "
            r4 = 0
            boolean r1 = contains(r7, r4, r2, r1, r3)
            if (r1 != 0) goto L11f
            java.lang.String r1 = "SCH"
            boolean r1 = contains(r7, r4, r11, r1)
            if (r1 != 0) goto L11f
            java.lang.String r1 = "ET"
            boolean r1 = contains(r7, r10, r13, r1)
            if (r1 == 0) goto L10d
            goto L11f
        L10d:
            java.lang.String r1 = "IER"
            boolean r1 = contains(r7, r10, r11, r1)
            if (r1 == 0) goto L11a
            r8.append(r14)
            goto L66
        L11a:
            r8.append(r14, r15)
            goto L66
        L11f:
            r8.append(r15)
            goto L66
        L124:
            return r10
    }

    private int handleGH(java.lang.String r16, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r17, int r18) {
            r15 = this;
            r0 = r15
            r9 = r16
            r10 = r17
            r11 = r18
            r12 = 75
            r13 = 2
            if (r11 <= 0) goto L1f
            int r1 = r11 + (-1)
            char r1 = r15.charAt(r9, r1)
            boolean r1 = r15.isVowel(r1)
            if (r1 != 0) goto L1f
            r10.append(r12)
        L1b:
            int r1 = r11 + 2
            goto La4
        L1f:
            r14 = 73
            if (r11 != 0) goto L37
            int r1 = r11 + 2
            char r2 = r15.charAt(r9, r1)
            if (r2 != r14) goto L32
            r2 = 74
            r10.append(r2)
            goto La4
        L32:
            r10.append(r12)
            goto La4
        L37:
            r7 = 1
            if (r11 <= r7) goto L4b
            int r2 = r11 + (-2)
            r3 = 1
            java.lang.String r4 = "B"
            java.lang.String r5 = "H"
            java.lang.String r6 = "D"
            r1 = r16
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 != 0) goto L1b
        L4b:
            if (r11 <= r13) goto L5e
            int r2 = r11 + (-3)
            r3 = 1
            java.lang.String r4 = "B"
            java.lang.String r5 = "H"
            java.lang.String r6 = "D"
            r1 = r16
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 != 0) goto L1b
        L5e:
            r1 = 3
            if (r11 <= r1) goto L6e
            int r1 = r11 + (-4)
            java.lang.String r2 = "B"
            java.lang.String r3 = "H"
            boolean r1 = contains(r9, r1, r7, r2, r3)
            if (r1 == 0) goto L6e
            goto L1b
        L6e:
            if (r11 <= r13) goto L95
            int r1 = r11 + (-1)
            char r1 = r15.charAt(r9, r1)
            r2 = 85
            if (r1 != r2) goto L95
            int r2 = r11 + (-3)
            r3 = 1
            java.lang.String r4 = "C"
            java.lang.String r5 = "G"
            java.lang.String r6 = "L"
            java.lang.String r7 = "R"
            java.lang.String r8 = "T"
            r1 = r16
            boolean r1 = contains(r1, r2, r3, r4, r5, r6, r7, r8)
            if (r1 == 0) goto L95
            r1 = 70
            r10.append(r1)
            goto L1b
        L95:
            if (r11 <= 0) goto L1b
            int r1 = r11 + (-1)
            char r1 = r15.charAt(r9, r1)
            if (r1 == r14) goto L1b
            r10.append(r12)
            goto L1b
        La4:
            return r1
    }

    private int handleH(java.lang.String r2, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r3, int r4) {
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

    private int handleJ(java.lang.String r14, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r15, int r16, boolean r17) {
            r13 = this;
            r0 = r13
            r7 = r14
            r8 = r15
            r9 = r16
            java.lang.String r1 = "JOSE"
            r2 = 4
            boolean r3 = contains(r14, r9, r2, r1)
            r4 = 32
            java.lang.String r5 = "SAN "
            r6 = 0
            r10 = 72
            r11 = 74
            r12 = 1
            if (r3 != 0) goto L80
            boolean r3 = contains(r14, r6, r2, r5)
            if (r3 == 0) goto L1f
            goto L80
        L1f:
            r3 = 65
            if (r9 != 0) goto L2d
            boolean r1 = contains(r14, r9, r2, r1)
            if (r1 != 0) goto L2d
            r15.append(r11, r3)
            goto L75
        L2d:
            int r2 = r9 + (-1)
            char r1 = r13.charAt(r14, r2)
            boolean r1 = r13.isVowel(r1)
            if (r1 == 0) goto L4f
            if (r17 != 0) goto L4f
            int r1 = r9 + 1
            char r5 = r13.charAt(r14, r1)
            if (r5 == r3) goto L4b
            char r1 = r13.charAt(r14, r1)
            r3 = 79
            if (r1 != r3) goto L4f
        L4b:
            r15.append(r11, r10)
            goto L75
        L4f:
            int r1 = r14.length()
            int r1 = r1 - r12
            if (r9 != r1) goto L5a
            r15.append(r11, r4)
            goto L75
        L5a:
            int r1 = r9 + 1
            java.lang.String[] r3 = org.apache.commons.codec.language.DoubleMetaphone.L_T_K_S_N_M_B_Z
            boolean r1 = contains(r14, r1, r12, r3)
            if (r1 != 0) goto L75
            r3 = 1
            java.lang.String r4 = "S"
            java.lang.String r5 = "K"
            java.lang.String r6 = "L"
            r1 = r14
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 != 0) goto L75
            r15.append(r11)
        L75:
            int r1 = r9 + 1
            char r2 = r13.charAt(r14, r1)
            if (r2 != r11) goto La0
            int r1 = r9 + 2
            goto La0
        L80:
            if (r9 != 0) goto L8a
            int r1 = r9 + 4
            char r1 = r13.charAt(r14, r1)
            if (r1 == r4) goto L9b
        L8a:
            int r1 = r14.length()
            if (r1 == r2) goto L9b
            boolean r1 = contains(r14, r6, r2, r5)
            if (r1 == 0) goto L97
            goto L9b
        L97:
            r15.append(r11, r10)
            goto L9e
        L9b:
            r15.append(r10)
        L9e:
            int r1 = r9 + 1
        La0:
            return r1
    }

    private int handleL(java.lang.String r4, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r5, int r6) {
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

    private int handleP(java.lang.String r4, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r5, int r6) {
            r3 = this;
            int r0 = r6 + 1
            char r1 = r3.charAt(r4, r0)
            r2 = 72
            if (r1 != r2) goto L12
            r4 = 70
            r5.append(r4)
            int r6 = r6 + 2
            goto L25
        L12:
            r1 = 80
            r5.append(r1)
            r5 = 1
            java.lang.String r1 = "P"
            java.lang.String r2 = "B"
            boolean r4 = contains(r4, r0, r5, r1, r2)
            if (r4 == 0) goto L24
            int r0 = r6 + 2
        L24:
            r6 = r0
        L25:
            return r6
    }

    private int handleR(java.lang.String r5, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r6, int r7, boolean r8) {
            r4 = this;
            int r0 = r5.length()
            int r0 = r0 + (-1)
            r1 = 82
            r2 = 2
            if (r7 != r0) goto L27
            if (r8 != 0) goto L27
            int r8 = r7 + (-2)
            java.lang.String r0 = "IE"
            boolean r8 = contains(r5, r8, r2, r0)
            if (r8 == 0) goto L27
            int r8 = r7 + (-4)
            java.lang.String r0 = "ME"
            java.lang.String r3 = "MA"
            boolean r8 = contains(r5, r8, r2, r0, r3)
            if (r8 != 0) goto L27
            r6.appendAlternate(r1)
            goto L2a
        L27:
            r6.append(r1)
        L2a:
            int r6 = r7 + 1
            char r5 = r4.charAt(r5, r6)
            if (r5 != r1) goto L34
            int r6 = r7 + 2
        L34:
            return r6
    }

    private int handleS(java.lang.String r16, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r17, int r18, boolean r19) {
            r15 = this;
            r7 = r16
            r8 = r17
            r9 = r18
            int r0 = r9 + (-1)
            r1 = 3
            java.lang.String r2 = "ISL"
            java.lang.String r3 = "YSL"
            boolean r0 = contains(r7, r0, r1, r2, r3)
            r10 = 1
            if (r0 == 0) goto L18
        L14:
            int r0 = r9 + 1
            goto Lcc
        L18:
            r11 = 88
            r12 = 83
            if (r9 != 0) goto L2b
            r0 = 5
            java.lang.String r2 = "SUGAR"
            boolean r0 = contains(r7, r9, r0, r2)
            if (r0 == 0) goto L2b
            r8.append(r11, r12)
            goto L14
        L2b:
            r13 = 2
            java.lang.String r0 = "SH"
            boolean r0 = contains(r7, r9, r13, r0)
            if (r0 == 0) goto L52
            int r1 = r9 + 1
            r2 = 4
            java.lang.String r3 = "HEIM"
            java.lang.String r4 = "HOEK"
            java.lang.String r5 = "HOLM"
            java.lang.String r6 = "HOLZ"
            r0 = r16
            boolean r0 = contains(r0, r1, r2, r3, r4, r5, r6)
            if (r0 == 0) goto L4b
            r8.append(r12)
            goto L4e
        L4b:
            r8.append(r11)
        L4e:
            int r0 = r9 + 2
            goto Lcc
        L52:
            java.lang.String r0 = "SIO"
            java.lang.String r2 = "SIA"
            boolean r0 = contains(r7, r9, r1, r0, r2)
            if (r0 != 0) goto Lc1
            r0 = 4
            java.lang.String r2 = "SIAN"
            boolean r0 = contains(r7, r9, r0, r2)
            if (r0 == 0) goto L66
            goto Lc1
        L66:
            java.lang.String r14 = "Z"
            if (r9 != 0) goto L7d
            int r1 = r9 + 1
            r2 = 1
            java.lang.String r3 = "M"
            java.lang.String r4 = "N"
            java.lang.String r5 = "L"
            java.lang.String r6 = "W"
            r0 = r16
            boolean r0 = contains(r0, r1, r2, r3, r4, r5, r6)
            if (r0 != 0) goto L85
        L7d:
            int r0 = r9 + 1
            boolean r1 = contains(r7, r0, r10, r14)
            if (r1 == 0) goto L91
        L85:
            r8.append(r12, r11)
            int r0 = r9 + 1
            boolean r1 = contains(r7, r0, r10, r14)
            if (r1 == 0) goto Lcc
            goto L4e
        L91:
            java.lang.String r1 = "SC"
            boolean r1 = contains(r7, r9, r13, r1)
            if (r1 == 0) goto L9e
            int r0 = r15.handleSC(r16, r17, r18)
            goto Lcc
        L9e:
            int r1 = r16.length()
            int r1 = r1 - r10
            if (r9 != r1) goto Lb5
            int r1 = r9 + (-2)
            java.lang.String r2 = "AI"
            java.lang.String r3 = "OI"
            boolean r1 = contains(r7, r1, r13, r2, r3)
            if (r1 == 0) goto Lb5
            r8.appendAlternate(r12)
            goto Lb8
        Lb5:
            r8.append(r12)
        Lb8:
            java.lang.String r1 = "S"
            boolean r1 = contains(r7, r0, r10, r1, r14)
            if (r1 == 0) goto Lcc
            goto L4e
        Lc1:
            if (r19 == 0) goto Lc7
            r8.append(r12)
            goto Lca
        Lc7:
            r8.append(r12, r11)
        Lca:
            int r0 = r9 + 3
        Lcc:
            return r0
    }

    private int handleSC(java.lang.String r17, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r18, int r19) {
            r16 = this;
            r0 = r16
            r10 = r17
            r11 = r18
            int r2 = r19 + 2
            char r1 = r0.charAt(r10, r2)
            r12 = 83
            java.lang.String r13 = "SK"
            r14 = 3
            r3 = 72
            if (r1 != r3) goto L60
            int r15 = r19 + 3
            r3 = 2
            java.lang.String r4 = "OO"
            java.lang.String r5 = "ER"
            java.lang.String r6 = "EN"
            java.lang.String r7 = "UY"
            java.lang.String r8 = "ED"
            java.lang.String r9 = "EM"
            r1 = r17
            r2 = r15
            boolean r1 = contains(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            if (r1 == 0) goto L42
            r1 = 2
            java.lang.String r2 = "ER"
            java.lang.String r3 = "EN"
            boolean r1 = contains(r10, r15, r1, r2, r3)
            if (r1 == 0) goto L3e
            java.lang.String r1 = "X"
            r11.append(r1, r13)
            goto L76
        L3e:
            r11.append(r13)
            goto L76
        L42:
            r1 = 88
            if (r19 != 0) goto L5c
            char r2 = r0.charAt(r10, r14)
            boolean r2 = r0.isVowel(r2)
            if (r2 != 0) goto L5c
            char r2 = r0.charAt(r10, r14)
            r3 = 87
            if (r2 == r3) goto L5c
            r11.append(r1, r12)
            goto L76
        L5c:
            r11.append(r1)
            goto L76
        L60:
            r3 = 1
            java.lang.String r4 = "I"
            java.lang.String r5 = "E"
            java.lang.String r6 = "Y"
            r1 = r17
            boolean r1 = contains(r1, r2, r3, r4, r5, r6)
            if (r1 == 0) goto L73
            r11.append(r12)
            goto L76
        L73:
            r11.append(r13)
        L76:
            int r1 = r19 + 3
            return r1
    }

    private int handleT(java.lang.String r7, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r8, int r9) {
            r6 = this;
            r0 = 4
            java.lang.String r1 = "TION"
            boolean r1 = contains(r7, r9, r0, r1)
            r2 = 88
            r3 = 3
            if (r1 == 0) goto L11
            r8.append(r2)
        Lf:
            int r9 = r9 + r3
            goto L6f
        L11:
            java.lang.String r1 = "TIA"
            java.lang.String r4 = "TCH"
            boolean r1 = contains(r7, r9, r3, r1, r4)
            if (r1 == 0) goto L1f
            r8.append(r2)
            goto Lf
        L1f:
            r1 = 2
            java.lang.String r2 = "TH"
            boolean r2 = contains(r7, r9, r1, r2)
            r4 = 84
            if (r2 != 0) goto L47
            java.lang.String r2 = "TTH"
            boolean r2 = contains(r7, r9, r3, r2)
            if (r2 == 0) goto L33
            goto L47
        L33:
            r8.append(r4)
            int r8 = r9 + 1
            r0 = 1
            java.lang.String r2 = "T"
            java.lang.String r3 = "D"
            boolean r7 = contains(r7, r8, r0, r2, r3)
            if (r7 == 0) goto L45
            int r9 = r9 + r1
            goto L6f
        L45:
            r9 = r8
            goto L6f
        L47:
            int r9 = r9 + r1
            java.lang.String r2 = "OM"
            java.lang.String r5 = "AM"
            boolean r1 = contains(r7, r9, r1, r2, r5)
            if (r1 != 0) goto L6c
            r1 = 0
            java.lang.String r2 = "VAN "
            java.lang.String r5 = "VON "
            boolean r0 = contains(r7, r1, r0, r2, r5)
            if (r0 != 0) goto L6c
            java.lang.String r0 = "SCH"
            boolean r7 = contains(r7, r1, r3, r0)
            if (r7 == 0) goto L66
            goto L6c
        L66:
            r7 = 48
            r8.append(r7, r4)
            goto L6f
        L6c:
            r8.append(r4)
        L6f:
            return r9
    }

    private int handleW(java.lang.String r10, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r11, int r12) {
            r9 = this;
            r0 = 2
            java.lang.String r1 = "WR"
            boolean r1 = contains(r10, r12, r0, r1)
            if (r1 == 0) goto L11
            r10 = 82
            r11.append(r10)
        Le:
            int r12 = r12 + r0
            goto L87
        L11:
            r1 = 70
            if (r12 != 0) goto L3e
            int r2 = r12 + 1
            char r3 = r9.charAt(r10, r2)
            boolean r3 = r9.isVowel(r3)
            if (r3 != 0) goto L29
            java.lang.String r3 = "WH"
            boolean r0 = contains(r10, r12, r0, r3)
            if (r0 == 0) goto L3e
        L29:
            char r10 = r9.charAt(r10, r2)
            boolean r10 = r9.isVowel(r10)
            r12 = 65
            if (r10 == 0) goto L39
            r11.append(r12, r1)
            goto L3c
        L39:
            r11.append(r12)
        L3c:
            r12 = r2
            goto L87
        L3e:
            int r0 = r10.length()
            int r0 = r0 + (-1)
            if (r12 != r0) goto L52
            int r0 = r12 + (-1)
            char r0 = r9.charAt(r10, r0)
            boolean r0 = r9.isVowel(r0)
            if (r0 != 0) goto L82
        L52:
            int r3 = r12 + (-1)
            r4 = 5
            java.lang.String r5 = "EWSKI"
            java.lang.String r6 = "EWSKY"
            java.lang.String r7 = "OWSKI"
            java.lang.String r8 = "OWSKY"
            r2 = r10
            boolean r0 = contains(r2, r3, r4, r5, r6, r7, r8)
            if (r0 != 0) goto L82
            r0 = 0
            r2 = 3
            java.lang.String r3 = "SCH"
            boolean r0 = contains(r10, r0, r2, r3)
            if (r0 == 0) goto L6f
            goto L82
        L6f:
            r0 = 4
            java.lang.String r1 = "WICZ"
            java.lang.String r2 = "WITZ"
            boolean r10 = contains(r10, r12, r0, r1, r2)
            if (r10 == 0) goto L85
            java.lang.String r10 = "TS"
            java.lang.String r1 = "FX"
            r11.append(r10, r1)
            goto Le
        L82:
            r11.appendAlternate(r1)
        L85:
            int r12 = r12 + 1
        L87:
            return r12
    }

    private int handleX(java.lang.String r7, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r8, int r9) {
            r6 = this;
            r0 = 1
            if (r9 != 0) goto La
            r7 = 83
            r8.append(r7)
            int r9 = r9 + r0
            goto L3f
        La:
            int r1 = r7.length()
            int r1 = r1 - r0
            r2 = 2
            if (r9 != r1) goto L2b
            int r1 = r9 + (-3)
            r3 = 3
            java.lang.String r4 = "IAU"
            java.lang.String r5 = "EAU"
            boolean r1 = contains(r7, r1, r3, r4, r5)
            if (r1 != 0) goto L30
            int r1 = r9 + (-2)
            java.lang.String r3 = "AU"
            java.lang.String r4 = "OU"
            boolean r1 = contains(r7, r1, r2, r3, r4)
            if (r1 != 0) goto L30
        L2b:
            java.lang.String r1 = "KS"
            r8.append(r1)
        L30:
            int r8 = r9 + 1
            java.lang.String r1 = "C"
            java.lang.String r3 = "X"
            boolean r7 = contains(r7, r8, r0, r1, r3)
            if (r7 == 0) goto L3e
            int r9 = r9 + r2
            goto L3f
        L3e:
            r9 = r8
        L3f:
            return r9
    }

    private int handleZ(java.lang.String r8, org.apache.commons.codec.language.DoubleMetaphone.DoubleMetaphoneResult r9, int r10, boolean r11) {
            r7 = this;
            int r6 = r10 + 1
            char r0 = r7.charAt(r8, r6)
            r1 = 72
            if (r0 != r1) goto L12
            r8 = 74
            r9.append(r8)
            int r10 = r10 + 2
            goto L48
        L12:
            r2 = 2
            java.lang.String r3 = "ZO"
            java.lang.String r4 = "ZI"
            java.lang.String r5 = "ZA"
            r0 = r8
            r1 = r6
            boolean r0 = contains(r0, r1, r2, r3, r4, r5)
            if (r0 != 0) goto L36
            if (r11 == 0) goto L30
            if (r10 <= 0) goto L30
            int r11 = r10 + (-1)
            char r11 = r7.charAt(r8, r11)
            r0 = 84
            if (r11 == r0) goto L30
            goto L36
        L30:
            r11 = 83
            r9.append(r11)
            goto L3d
        L36:
            java.lang.String r11 = "S"
            java.lang.String r0 = "TS"
            r9.append(r11, r0)
        L3d:
            char r8 = r7.charAt(r8, r6)
            r9 = 90
            if (r8 != r9) goto L47
            int r6 = r10 + 2
        L47:
            r10 = r6
        L48:
            return r10
    }

    private boolean isSilentStart(java.lang.String r6) {
            r5 = this;
            java.lang.String[] r0 = org.apache.commons.codec.language.DoubleMetaphone.SILENT_START
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L14
            r4 = r0[r3]
            boolean r4 = r6.startsWith(r4)
            if (r4 == 0) goto L11
            r2 = 1
            goto L14
        L11:
            int r3 = r3 + 1
            goto L5
        L14:
            return r2
    }

    private boolean isSlavoGermanic(java.lang.String r3) {
            r2 = this;
            r0 = 87
            int r0 = r3.indexOf(r0)
            r1 = -1
            if (r0 > r1) goto L24
            r0 = 75
            int r0 = r3.indexOf(r0)
            if (r0 > r1) goto L24
            java.lang.String r0 = "CZ"
            int r0 = r3.indexOf(r0)
            if (r0 > r1) goto L24
            java.lang.String r0 = "WITZ"
            int r3 = r3.indexOf(r0)
            if (r3 <= r1) goto L22
            goto L24
        L22:
            r3 = 0
            goto L25
        L24:
            r3 = 1
        L25:
            return r3
    }

    private boolean isVowel(char r2) {
            r1 = this;
            java.lang.String r0 = "AEIOUY"
            int r2 = r0.indexOf(r2)
            r0 = -1
            if (r2 == r0) goto Lb
            r2 = 1
            goto Lc
        Lb:
            r2 = 0
        Lc:
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
            org.apache.commons.codec.language.DoubleMetaphone$DoubleMetaphoneResult r2 = new org.apache.commons.codec.language.DoubleMetaphone$DoubleMetaphoneResult
            int r3 = r7.getMaxCodeLen()
            r2.<init>(r7, r3)
        L19:
            boolean r3 = r2.isComplete()
            if (r3 != 0) goto Lf9
            int r3 = r8.length()
            int r3 = r3 + (-1)
            if (r1 > r3) goto Lf9
            char r3 = r8.charAt(r1)
            r4 = 199(0xc7, float:2.79E-43)
            if (r3 == r4) goto Lf0
            r4 = 209(0xd1, float:2.93E-43)
            r5 = 78
            if (r3 == r4) goto Lec
            r4 = 75
            r6 = 70
            switch(r3) {
                case 65: goto Le6;
                case 66: goto Ld5;
                case 67: goto Lcf;
                case 68: goto Lc9;
                case 69: goto Le6;
                case 70: goto Lbd;
                case 71: goto Lb7;
                case 72: goto Lb1;
                case 73: goto Le6;
                case 74: goto Lab;
                case 75: goto L9f;
                case 76: goto L99;
                case 77: goto L8d;
                case 78: goto L81;
                case 79: goto Le6;
                case 80: goto L7c;
                case 81: goto L6e;
                case 82: goto L69;
                case 83: goto L64;
                case 84: goto L5f;
                case 85: goto Le6;
                case 86: goto L4d;
                case 87: goto L48;
                case 88: goto L43;
                case 89: goto Le6;
                case 90: goto L3e;
                default: goto L3c;
            }
        L3c:
            goto Lf5
        L3e:
            int r1 = r7.handleZ(r8, r2, r1, r0)
            goto L19
        L43:
            int r1 = r7.handleX(r8, r2, r1)
            goto L19
        L48:
            int r1 = r7.handleW(r8, r2, r1)
            goto L19
        L4d:
            r2.append(r6)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            r5 = 86
            if (r4 != r5) goto L5d
        L5a:
            int r1 = r1 + 2
            goto L19
        L5d:
            r1 = r3
            goto L19
        L5f:
            int r1 = r7.handleT(r8, r2, r1)
            goto L19
        L64:
            int r1 = r7.handleS(r8, r2, r1, r0)
            goto L19
        L69:
            int r1 = r7.handleR(r8, r2, r1, r0)
            goto L19
        L6e:
            r2.append(r4)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            r5 = 81
            if (r4 != r5) goto L5d
            goto L5a
        L7c:
            int r1 = r7.handleP(r8, r2, r1)
            goto L19
        L81:
            r2.append(r5)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            if (r4 != r5) goto L5d
            goto L5a
        L8d:
            r3 = 77
            r2.append(r3)
            boolean r3 = r7.conditionM0(r8, r1)
            if (r3 == 0) goto Lf5
            goto L5a
        L99:
            int r1 = r7.handleL(r8, r2, r1)
            goto L19
        L9f:
            r2.append(r4)
            int r3 = r1 + 1
            char r5 = r7.charAt(r8, r3)
            if (r5 != r4) goto L5d
            goto L5a
        Lab:
            int r1 = r7.handleJ(r8, r2, r1, r0)
            goto L19
        Lb1:
            int r1 = r7.handleH(r8, r2, r1)
            goto L19
        Lb7:
            int r1 = r7.handleG(r8, r2, r1, r0)
            goto L19
        Lbd:
            r2.append(r6)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            if (r4 != r6) goto L5d
            goto L5a
        Lc9:
            int r1 = r7.handleD(r8, r2, r1)
            goto L19
        Lcf:
            int r1 = r7.handleC(r8, r2, r1)
            goto L19
        Ld5:
            r3 = 80
            r2.append(r3)
            int r3 = r1 + 1
            char r4 = r7.charAt(r8, r3)
            r5 = 66
            if (r4 != r5) goto L5d
            goto L5a
        Le6:
            int r1 = r7.handleAEIOUY(r2, r1)
            goto L19
        Lec:
            r2.append(r5)
            goto Lf5
        Lf0:
            r3 = 83
            r2.append(r3)
        Lf5:
            int r1 = r1 + 1
            goto L19
        Lf9:
            if (r9 == 0) goto L100
            java.lang.String r8 = r2.getAlternate()
            goto L104
        L100:
            java.lang.String r8 = r2.getPrimary()
        L104:
            return r8
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.doubleMetaphone(r2)
            return r2
        Lb:
            org.apache.commons.codec.EncoderException r2 = new org.apache.commons.codec.EncoderException
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
            boolean r1 = r1.equals(r2)
            return r1
    }

    public void setMaxCodeLen(int r1) {
            r0 = this;
            r0.maxCodeLen = r1
            return
    }
}
