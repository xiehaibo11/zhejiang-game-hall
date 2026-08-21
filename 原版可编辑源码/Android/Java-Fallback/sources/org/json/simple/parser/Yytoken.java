package org.json.simple.parser;

public class Yytoken {
    public static final int TYPE_COLON = 6;
    public static final int TYPE_COMMA = 5;
    public static final int TYPE_EOF = -1;
    public static final int TYPE_LEFT_BRACE = 1;
    public static final int TYPE_LEFT_SQUARE = 3;
    public static final int TYPE_RIGHT_BRACE = 2;
    public static final int TYPE_RIGHT_SQUARE = 4;
    public static final int TYPE_VALUE = 0;
    public int type;
    public java.lang.Object value;

    public Yytoken(int r2, java.lang.Object r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.type = r0
            r0 = 0
            r1.value = r0
            r1.type = r2
            r1.value = r3
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            int r1 = r2.type
            switch(r1) {
                case -1: goto L2a;
                case 0: goto L1d;
                case 1: goto L1a;
                case 2: goto L17;
                case 3: goto L14;
                case 4: goto L11;
                case 5: goto Le;
                case 6: goto Lb;
                default: goto La;
            }
        La:
            goto L2f
        Lb:
            java.lang.String r1 = "COLON(:)"
            goto L2c
        Le:
            java.lang.String r1 = "COMMA(,)"
            goto L2c
        L11:
            java.lang.String r1 = "RIGHT SQUARE(])"
            goto L2c
        L14:
            java.lang.String r1 = "LEFT SQUARE([)"
            goto L2c
        L17:
            java.lang.String r1 = "RIGHT BRACE(})"
            goto L2c
        L1a:
            java.lang.String r1 = "LEFT BRACE({)"
            goto L2c
        L1d:
            java.lang.String r1 = "VALUE("
            r0.append(r1)
            java.lang.Object r1 = r2.value
            r0.append(r1)
            java.lang.String r1 = ")"
            goto L2c
        L2a:
            java.lang.String r1 = "END OF FILE"
        L2c:
            r0.append(r1)
        L2f:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
