package org.apache.commons.codec1.binary;

public class CharSequenceUtils {
    public CharSequenceUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean regionMatches(java.lang.CharSequence r7, boolean r8, int r9, java.lang.CharSequence r10, int r11, int r12) {
            boolean r0 = r7 instanceof java.lang.String
            if (r0 == 0) goto L17
            boolean r0 = r10 instanceof java.lang.String
            if (r0 == 0) goto L17
            r1 = r7
            java.lang.String r1 = (java.lang.String) r1
            r4 = r10
            java.lang.String r4 = (java.lang.String) r4
            r2 = r8
            r3 = r9
            r5 = r11
            r6 = r12
            boolean r7 = r1.regionMatches(r2, r3, r4, r5, r6)
            return r7
        L17:
            int r0 = r12 + (-1)
            if (r12 > 0) goto L1d
            r7 = 1
            return r7
        L1d:
            int r12 = r9 + 1
            char r9 = r7.charAt(r9)
            int r1 = r11 + 1
            char r11 = r10.charAt(r11)
            if (r9 != r11) goto L2c
            goto L45
        L2c:
            r2 = 0
            if (r8 != 0) goto L30
            return r2
        L30:
            char r3 = java.lang.Character.toUpperCase(r9)
            char r4 = java.lang.Character.toUpperCase(r11)
            if (r3 == r4) goto L45
            char r9 = java.lang.Character.toLowerCase(r9)
            char r11 = java.lang.Character.toLowerCase(r11)
            if (r9 == r11) goto L45
            return r2
        L45:
            r9 = r12
            r12 = r0
            r11 = r1
            goto L17
    }
}
