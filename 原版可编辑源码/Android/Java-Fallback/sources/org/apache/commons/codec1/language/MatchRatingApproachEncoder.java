package org.apache.commons.codec1.language;

public class MatchRatingApproachEncoder implements org.apache.commons.codec1.StringEncoder {
    private static final java.lang.String[] DOUBLE_CONSONANT = null;
    private static final int EIGHT = 8;
    private static final int ELEVEN = 11;
    private static final java.lang.String EMPTY = "";
    private static final int FIVE = 5;
    private static final int FOUR = 4;
    private static final int ONE = 1;
    private static final java.lang.String PLAIN_ASCII = "AaEeIiOoUuAaEeIiOoUuYyAaEeIiOoUuYyAaOoNnAaEeIiOoUuYyAaCcOoUu";
    private static final int SEVEN = 7;
    private static final int SIX = 6;
    private static final java.lang.String SPACE = " ";
    private static final int THREE = 3;
    private static final int TWELVE = 12;
    private static final int TWO = 2;
    private static final java.lang.String UNICODE = "ÀàÈèÌìÒòÙùÁáÉéÍíÓóÚúÝýÂâÊêÎîÔôÛûŶŷÃãÕõÑñÄäËëÏïÖöÜüŸÿÅåÇçŐőŰű";

    static {
            java.lang.String r0 = "BB"
            java.lang.String r1 = "CC"
            java.lang.String r2 = "DD"
            java.lang.String r3 = "FF"
            java.lang.String r4 = "GG"
            java.lang.String r5 = "HH"
            java.lang.String r6 = "JJ"
            java.lang.String r7 = "KK"
            java.lang.String r8 = "LL"
            java.lang.String r9 = "MM"
            java.lang.String r10 = "NN"
            java.lang.String r11 = "PP"
            java.lang.String r12 = "QQ"
            java.lang.String r13 = "RR"
            java.lang.String r14 = "SS"
            java.lang.String r15 = "TT"
            java.lang.String r16 = "VV"
            java.lang.String r17 = "WW"
            java.lang.String r18 = "XX"
            java.lang.String r19 = "YY"
            java.lang.String r20 = "ZZ"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20}
            org.apache.commons.codec1.language.MatchRatingApproachEncoder.DOUBLE_CONSONANT = r0
            return
    }

    public MatchRatingApproachEncoder() {
            r0 = this;
            r0.<init>()
            return
    }

    java.lang.String cleanName(java.lang.String r6) {
            r5 = this;
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r6 = r6.toUpperCase(r0)
            java.lang.String r0 = "\\-"
            java.lang.String r1 = "[&]"
            java.lang.String r2 = "\\'"
            java.lang.String r3 = "\\."
            java.lang.String r4 = "[\\,]"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4}
            r1 = 0
        L15:
            java.lang.String r2 = ""
            r3 = 5
            if (r1 < r3) goto L25
            java.lang.String r6 = r5.removeAccents(r6)
            java.lang.String r0 = "\\s+"
            java.lang.String r6 = r6.replaceAll(r0, r2)
            return r6
        L25:
            r3 = r0[r1]
            java.lang.String r6 = r6.replaceAll(r3, r2)
            int r1 = r1 + 1
            goto L15
    }

    @Override
    public final java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.encode(r2)
            return r2
        Lb:
            org.apache.commons.codec1.EncoderException r2 = new org.apache.commons.codec1.EncoderException
            java.lang.String r0 = "Parameter supplied to Match Rating Approach encoder is not of type java.lang.String"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final java.lang.String encode(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = ""
            if (r4 == 0) goto L2b
            boolean r1 = r0.equalsIgnoreCase(r4)
            if (r1 != 0) goto L2b
            java.lang.String r1 = " "
            boolean r1 = r1.equalsIgnoreCase(r4)
            if (r1 != 0) goto L2b
            int r1 = r4.length()
            r2 = 1
            if (r1 != r2) goto L1a
            goto L2b
        L1a:
            java.lang.String r4 = r3.cleanName(r4)
            java.lang.String r4 = r3.removeVowels(r4)
            java.lang.String r4 = r3.removeDoubleConsonants(r4)
            java.lang.String r4 = r3.getFirst3Last3(r4)
            return r4
        L2b:
            return r0
    }

    java.lang.String getFirst3Last3(java.lang.String r4) {
            r3 = this;
            int r0 = r4.length()
            r1 = 6
            if (r0 <= r1) goto L23
            r1 = 0
            r2 = 3
            java.lang.String r1 = r4.substring(r1, r2)
            int r2 = r0 + (-3)
            java.lang.String r4 = r4.substring(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        L23:
            return r4
    }

    int getMinRating(int r3) {
            r2 = this;
            r0 = 5
            r1 = 4
            if (r3 > r1) goto L5
            goto L1d
        L5:
            if (r3 < r0) goto Lc
            r0 = 7
            if (r3 > r0) goto Lc
            r0 = r1
            goto L1d
        Lc:
            r0 = 8
            if (r3 < r0) goto L16
            r0 = 11
            if (r3 > r0) goto L16
            r0 = 3
            goto L1d
        L16:
            r0 = 12
            if (r3 != r0) goto L1c
            r0 = 2
            goto L1d
        L1c:
            r0 = 1
        L1d:
            return r0
    }

    public boolean isEncodeEquals(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L81
            java.lang.String r1 = ""
            boolean r2 = r1.equalsIgnoreCase(r5)
            if (r2 != 0) goto L81
            java.lang.String r2 = " "
            boolean r3 = r2.equalsIgnoreCase(r5)
            if (r3 == 0) goto L14
            goto L81
        L14:
            if (r6 == 0) goto L81
            boolean r1 = r1.equalsIgnoreCase(r6)
            if (r1 != 0) goto L81
            boolean r1 = r2.equalsIgnoreCase(r6)
            if (r1 == 0) goto L23
            goto L81
        L23:
            int r1 = r5.length()
            r2 = 1
            if (r1 == r2) goto L81
            int r1 = r6.length()
            if (r1 != r2) goto L31
            goto L81
        L31:
            boolean r1 = r5.equalsIgnoreCase(r6)
            if (r1 == 0) goto L38
            return r2
        L38:
            java.lang.String r5 = r4.cleanName(r5)
            java.lang.String r6 = r4.cleanName(r6)
            java.lang.String r5 = r4.removeVowels(r5)
            java.lang.String r6 = r4.removeVowels(r6)
            java.lang.String r5 = r4.removeDoubleConsonants(r5)
            java.lang.String r6 = r4.removeDoubleConsonants(r6)
            java.lang.String r5 = r4.getFirst3Last3(r5)
            java.lang.String r6 = r4.getFirst3Last3(r6)
            int r1 = r5.length()
            int r3 = r6.length()
            int r1 = r1 - r3
            int r1 = java.lang.Math.abs(r1)
            r3 = 3
            if (r1 < r3) goto L69
            return r0
        L69:
            int r1 = r5.length()
            int r3 = r6.length()
            int r1 = r1 + r3
            int r1 = java.lang.Math.abs(r1)
            int r1 = r4.getMinRating(r1)
            int r5 = r4.leftToRightThenRightToLeftProcessing(r5, r6)
            if (r5 < r1) goto L81
            return r2
        L81:
            return r0
    }

    boolean isVowel(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "E"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 != 0) goto L2a
            java.lang.String r0 = "A"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 != 0) goto L2a
            java.lang.String r0 = "O"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 != 0) goto L2a
            java.lang.String r0 = "I"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 != 0) goto L2a
            java.lang.String r0 = "U"
            boolean r2 = r2.equalsIgnoreCase(r0)
            if (r2 != 0) goto L2a
            r2 = 0
            return r2
        L2a:
            r2 = 1
            return r2
    }

    int leftToRightThenRightToLeftProcessing(java.lang.String r13, java.lang.String r14) {
            r12 = this;
            char[] r0 = r13.toCharArray()
            char[] r1 = r14.toCharArray()
            int r2 = r13.length()
            int r2 = r2 + (-1)
            int r3 = r14.length()
            int r3 = r3 + (-1)
            r4 = 0
        L15:
            int r5 = r0.length
            if (r4 < r5) goto L19
            goto L1b
        L19:
            if (r4 <= r3) goto L51
        L1b:
            java.lang.String r13 = new java.lang.String
            r13.<init>(r0)
            java.lang.String r14 = ""
            java.lang.String r0 = "\\s+"
            java.lang.String r13 = r13.replaceAll(r0, r14)
            java.lang.String r2 = new java.lang.String
            r2.<init>(r1)
            java.lang.String r14 = r2.replaceAll(r0, r14)
            int r0 = r13.length()
            int r1 = r14.length()
            if (r0 <= r1) goto L46
            int r13 = r13.length()
            int r13 = 6 - r13
            int r13 = java.lang.Math.abs(r13)
            return r13
        L46:
            int r13 = r14.length()
            int r13 = 6 - r13
            int r13 = java.lang.Math.abs(r13)
            return r13
        L51:
            int r5 = r4 + 1
            java.lang.String r6 = r13.substring(r4, r5)
            int r7 = r2 - r4
            int r8 = r7 + 1
            java.lang.String r8 = r13.substring(r7, r8)
            java.lang.String r9 = r14.substring(r4, r5)
            int r10 = r3 - r4
            int r11 = r10 + 1
            java.lang.String r11 = r14.substring(r10, r11)
            boolean r6 = r6.equals(r9)
            r9 = 32
            if (r6 == 0) goto L77
            r0[r4] = r9
            r1[r4] = r9
        L77:
            boolean r4 = r8.equals(r11)
            if (r4 == 0) goto L81
            r0[r7] = r9
            r1[r10] = r9
        L81:
            r4 = r5
            goto L15
    }

    java.lang.String removeAccents(java.lang.String r7) {
            r6 = this;
            if (r7 != 0) goto L4
            r7 = 0
            return r7
        L4:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.length()
            r2 = 0
        Le:
            if (r2 < r1) goto L15
            java.lang.String r7 = r0.toString()
            return r7
        L15:
            char r3 = r7.charAt(r2)
            java.lang.String r4 = "ÀàÈèÌìÒòÙùÁáÉéÍíÓóÚúÝýÂâÊêÎîÔôÛûŶŷÃãÕõÑñÄäËëÏïÖöÜüŸÿÅåÇçŐőŰű"
            int r4 = r4.indexOf(r3)
            r5 = -1
            if (r4 <= r5) goto L2c
            java.lang.String r3 = "AaEeIiOoUuAaEeIiOoUuYyAaEeIiOoUuYyAaOoNnAaEeIiOoUuYyAaCcOoUu"
            char r3 = r3.charAt(r4)
            r0.append(r3)
            goto L2f
        L2c:
            r0.append(r3)
        L2f:
            int r2 = r2 + 1
            goto Le
    }

    java.lang.String removeDoubleConsonants(java.lang.String r7) {
            r6 = this;
            java.lang.String r7 = r7.toUpperCase()
            java.lang.String[] r0 = org.apache.commons.codec1.language.MatchRatingApproachEncoder.DOUBLE_CONSONANT
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L9:
            if (r3 < r1) goto Lc
            return r7
        Lc:
            r4 = r0[r3]
            boolean r5 = r7.contains(r4)
            if (r5 == 0) goto L1d
            r5 = 1
            java.lang.String r5 = r4.substring(r2, r5)
            java.lang.String r7 = r7.replace(r4, r5)
        L1d:
            int r3 = r3 + 1
            goto L9
    }

    java.lang.String removeVowels(java.lang.String r4) {
            r3 = this;
            r0 = 0
            r1 = 1
            java.lang.String r0 = r4.substring(r0, r1)
            java.lang.String r1 = ""
            java.lang.String r2 = "A"
            java.lang.String r4 = r4.replaceAll(r2, r1)
            java.lang.String r2 = "E"
            java.lang.String r4 = r4.replaceAll(r2, r1)
            java.lang.String r2 = "I"
            java.lang.String r4 = r4.replaceAll(r2, r1)
            java.lang.String r2 = "O"
            java.lang.String r4 = r4.replaceAll(r2, r1)
            java.lang.String r2 = "U"
            java.lang.String r4 = r4.replaceAll(r2, r1)
            java.lang.String r1 = "\\s{2,}\\b"
            java.lang.String r2 = " "
            java.lang.String r4 = r4.replaceAll(r1, r2)
            boolean r1 = r3.isVowel(r0)
            if (r1 == 0) goto L44
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.<init>(r0)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
        L44:
            return r4
    }
}
