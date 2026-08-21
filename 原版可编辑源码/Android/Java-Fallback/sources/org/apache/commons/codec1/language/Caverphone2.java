package org.apache.commons.codec1.language;

public class Caverphone2 extends org.apache.commons.codec1.language.AbstractCaverphone {
    private static final java.lang.String TEN_1 = "1111111111";

    public Caverphone2() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String encode(java.lang.String r9) {
            r8 = this;
            java.lang.String r0 = "1111111111"
            if (r9 == 0) goto L1cc
            int r1 = r9.length()
            if (r1 != 0) goto Lc
            goto L1cc
        Lc:
            java.util.Locale r1 = java.util.Locale.ENGLISH
            java.lang.String r9 = r9.toLowerCase(r1)
            java.lang.String r1 = ""
            java.lang.String r2 = "[^a-z]"
            java.lang.String r9 = r9.replaceAll(r2, r1)
            java.lang.String r2 = "e$"
            java.lang.String r9 = r9.replaceAll(r2, r1)
            java.lang.String r2 = "^cough"
            java.lang.String r3 = "cou2f"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "^rough"
            java.lang.String r3 = "rou2f"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "^tough"
            java.lang.String r3 = "tou2f"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "^enough"
            java.lang.String r3 = "enou2f"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "^trough"
            java.lang.String r3 = "trou2f"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "^gn"
            java.lang.String r3 = "2n"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "mb$"
            java.lang.String r3 = "m2"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "cq"
            java.lang.String r3 = "2q"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "ci"
            java.lang.String r3 = "si"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "ce"
            java.lang.String r3 = "se"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "cy"
            java.lang.String r3 = "sy"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "tch"
            java.lang.String r3 = "2ch"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r2 = "k"
            java.lang.String r3 = "c"
            java.lang.String r9 = r9.replaceAll(r3, r2)
            java.lang.String r3 = "q"
            java.lang.String r9 = r9.replaceAll(r3, r2)
            java.lang.String r3 = "x"
            java.lang.String r9 = r9.replaceAll(r3, r2)
            java.lang.String r3 = "v"
            java.lang.String r4 = "f"
            java.lang.String r9 = r9.replaceAll(r3, r4)
            java.lang.String r3 = "dg"
            java.lang.String r4 = "2g"
            java.lang.String r9 = r9.replaceAll(r3, r4)
            java.lang.String r3 = "tio"
            java.lang.String r4 = "sio"
            java.lang.String r9 = r9.replaceAll(r3, r4)
            java.lang.String r3 = "tia"
            java.lang.String r4 = "sia"
            java.lang.String r9 = r9.replaceAll(r3, r4)
            java.lang.String r3 = "d"
            java.lang.String r4 = "t"
            java.lang.String r9 = r9.replaceAll(r3, r4)
            java.lang.String r3 = "ph"
            java.lang.String r4 = "fh"
            java.lang.String r9 = r9.replaceAll(r3, r4)
            java.lang.String r3 = "b"
            java.lang.String r4 = "p"
            java.lang.String r9 = r9.replaceAll(r3, r4)
            java.lang.String r3 = "sh"
            java.lang.String r4 = "s2"
            java.lang.String r9 = r9.replaceAll(r3, r4)
            java.lang.String r3 = "z"
            java.lang.String r4 = "s"
            java.lang.String r9 = r9.replaceAll(r3, r4)
            java.lang.String r3 = "A"
            java.lang.String r4 = "^[aeiou]"
            java.lang.String r9 = r9.replaceAll(r4, r3)
            java.lang.String r4 = "3"
            java.lang.String r5 = "[aeiou]"
            java.lang.String r9 = r9.replaceAll(r5, r4)
            java.lang.String r5 = "y"
            java.lang.String r6 = "j"
            java.lang.String r9 = r9.replaceAll(r6, r5)
            java.lang.String r6 = "^y3"
            java.lang.String r7 = "Y3"
            java.lang.String r9 = r9.replaceAll(r6, r7)
            java.lang.String r6 = "^y"
            java.lang.String r9 = r9.replaceAll(r6, r3)
            java.lang.String r9 = r9.replaceAll(r5, r4)
            java.lang.String r5 = "3gh3"
            java.lang.String r6 = "3kh3"
            java.lang.String r9 = r9.replaceAll(r5, r6)
            java.lang.String r5 = "gh"
            java.lang.String r6 = "22"
            java.lang.String r9 = r9.replaceAll(r5, r6)
            java.lang.String r5 = "g"
            java.lang.String r9 = r9.replaceAll(r5, r2)
            java.lang.String r2 = "s+"
            java.lang.String r5 = "S"
            java.lang.String r9 = r9.replaceAll(r2, r5)
            java.lang.String r2 = "t+"
            java.lang.String r5 = "T"
            java.lang.String r9 = r9.replaceAll(r2, r5)
            java.lang.String r2 = "p+"
            java.lang.String r5 = "P"
            java.lang.String r9 = r9.replaceAll(r2, r5)
            java.lang.String r2 = "k+"
            java.lang.String r5 = "K"
            java.lang.String r9 = r9.replaceAll(r2, r5)
            java.lang.String r2 = "f+"
            java.lang.String r5 = "F"
            java.lang.String r9 = r9.replaceAll(r2, r5)
            java.lang.String r2 = "m+"
            java.lang.String r5 = "M"
            java.lang.String r9 = r9.replaceAll(r2, r5)
            java.lang.String r2 = "n+"
            java.lang.String r5 = "N"
            java.lang.String r9 = r9.replaceAll(r2, r5)
            java.lang.String r2 = "w3"
            java.lang.String r5 = "W3"
            java.lang.String r9 = r9.replaceAll(r2, r5)
            java.lang.String r2 = "wh3"
            java.lang.String r5 = "Wh3"
            java.lang.String r9 = r9.replaceAll(r2, r5)
            java.lang.String r2 = "w$"
            java.lang.String r9 = r9.replaceAll(r2, r4)
            java.lang.String r2 = "2"
            java.lang.String r5 = "w"
            java.lang.String r9 = r9.replaceAll(r5, r2)
            java.lang.String r5 = "^h"
            java.lang.String r9 = r9.replaceAll(r5, r3)
            java.lang.String r5 = "h"
            java.lang.String r9 = r9.replaceAll(r5, r2)
            java.lang.String r5 = "r3"
            java.lang.String r6 = "R3"
            java.lang.String r9 = r9.replaceAll(r5, r6)
            java.lang.String r5 = "r$"
            java.lang.String r9 = r9.replaceAll(r5, r4)
            java.lang.String r5 = "r"
            java.lang.String r9 = r9.replaceAll(r5, r2)
            java.lang.String r5 = "l3"
            java.lang.String r6 = "L3"
            java.lang.String r9 = r9.replaceAll(r5, r6)
            java.lang.String r5 = "l$"
            java.lang.String r9 = r9.replaceAll(r5, r4)
            java.lang.String r5 = "l"
            java.lang.String r9 = r9.replaceAll(r5, r2)
            java.lang.String r9 = r9.replaceAll(r2, r1)
            java.lang.String r2 = "3$"
            java.lang.String r9 = r9.replaceAll(r2, r3)
            java.lang.String r9 = r9.replaceAll(r4, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r9 = java.lang.String.valueOf(r9)
            r1.<init>(r9)
            r1.append(r0)
            java.lang.String r9 = r1.toString()
            r0 = 0
            r1 = 10
            java.lang.String r9 = r9.substring(r0, r1)
            return r9
        L1cc:
            return r0
    }
}
