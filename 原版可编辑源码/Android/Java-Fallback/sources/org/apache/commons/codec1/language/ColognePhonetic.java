package org.apache.commons.codec1.language;

public class ColognePhonetic implements org.apache.commons.codec1.StringEncoder {
    private static final char[] AEIJOUY = null;
    private static final char[] AHKLOQRUX = null;
    private static final char[] AHOUKQX = null;
    private static final char[] CKQ = null;
    private static final char[] GKQ = null;
    private static final char[][] PREPROCESS_MAP = null;
    private static final char[] SCZ = null;
    private static final char[] SZ = null;
    private static final char[] TDX = null;
    private static final char[] WFPV = null;

    private abstract class CologneBuffer {
        protected final char[] data;
        protected int length;
        final org.apache.commons.codec1.language.ColognePhonetic this$0;

        public CologneBuffer(org.apache.commons.codec1.language.ColognePhonetic r1, int r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 0
                r0.length = r1
                char[] r2 = new char[r2]
                r0.data = r2
                r0.length = r1
                return
        }

        public CologneBuffer(org.apache.commons.codec1.language.ColognePhonetic r1, char[] r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 0
                r0.length = r1
                r0.data = r2
                int r1 = r2.length
                r0.length = r1
                return
        }

        protected abstract char[] copyData(int r1, int r2);

        public int length() {
                r1 = this;
                int r0 = r1.length
                return r0
        }

        public java.lang.String toString() {
                r3 = this;
                java.lang.String r0 = new java.lang.String
                int r1 = r3.length
                r2 = 0
                char[] r1 = r3.copyData(r2, r1)
                r0.<init>(r1)
                return r0
        }
    }

    private class CologneInputBuffer extends org.apache.commons.codec1.language.ColognePhonetic.CologneBuffer {
        final org.apache.commons.codec1.language.ColognePhonetic this$0;

        public CologneInputBuffer(org.apache.commons.codec1.language.ColognePhonetic r1, char[] r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r1, r2)
                return
        }

        public void addLeft(char r3) {
                r2 = this;
                int r0 = r2.length
                int r0 = r0 + 1
                r2.length = r0
                char[] r0 = r2.data
                int r1 = r2.getNextPos()
                r0[r1] = r3
                return
        }

        @Override
        protected char[] copyData(int r5, int r6) {
                r4 = this;
                char[] r0 = new char[r6]
                char[] r1 = r4.data
                char[] r2 = r4.data
                int r2 = r2.length
                int r3 = r4.length
                int r2 = r2 - r3
                int r2 = r2 + r5
                r5 = 0
                java.lang.System.arraycopy(r1, r2, r0, r5, r6)
                return r0
        }

        public char getNextChar() {
                r2 = this;
                char[] r0 = r2.data
                int r1 = r2.getNextPos()
                char r0 = r0[r1]
                return r0
        }

        protected int getNextPos() {
                r2 = this;
                char[] r0 = r2.data
                int r0 = r0.length
                int r1 = r2.length
                int r0 = r0 - r1
                return r0
        }

        public char removeNext() {
                r2 = this;
                char r0 = r2.getNextChar()
                int r1 = r2.length
                int r1 = r1 + (-1)
                r2.length = r1
                return r0
        }
    }

    private class CologneOutputBuffer extends org.apache.commons.codec1.language.ColognePhonetic.CologneBuffer {
        final org.apache.commons.codec1.language.ColognePhonetic this$0;

        public CologneOutputBuffer(org.apache.commons.codec1.language.ColognePhonetic r1, int r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r1, r2)
                return
        }

        public void addRight(char r3) {
                r2 = this;
                char[] r0 = r2.data
                int r1 = r2.length
                r0[r1] = r3
                int r3 = r2.length
                int r3 = r3 + 1
                r2.length = r3
                return
        }

        @Override
        protected char[] copyData(int r4, int r5) {
                r3 = this;
                char[] r0 = new char[r5]
                char[] r1 = r3.data
                r2 = 0
                java.lang.System.arraycopy(r1, r4, r0, r2, r5)
                return r0
        }
    }

    static {
            r0 = 7
            char[] r1 = new char[r0]
            r1 = {x0068: FILL_ARRAY_DATA , data: [65, 69, 73, 74, 79, 85, 89} // fill-array
            org.apache.commons.codec1.language.ColognePhonetic.AEIJOUY = r1
            r1 = 3
            char[] r2 = new char[r1]
            r2 = {x0074: FILL_ARRAY_DATA , data: [83, 67, 90} // fill-array
            org.apache.commons.codec1.language.ColognePhonetic.SCZ = r2
            r2 = 4
            char[] r3 = new char[r2]
            r3 = {x007c: FILL_ARRAY_DATA , data: [87, 70, 80, 86} // fill-array
            org.apache.commons.codec1.language.ColognePhonetic.WFPV = r3
            char[] r3 = new char[r1]
            r3 = {x0084: FILL_ARRAY_DATA , data: [71, 75, 81} // fill-array
            org.apache.commons.codec1.language.ColognePhonetic.GKQ = r3
            char[] r3 = new char[r1]
            r3 = {x008c: FILL_ARRAY_DATA , data: [67, 75, 81} // fill-array
            org.apache.commons.codec1.language.ColognePhonetic.CKQ = r3
            r3 = 9
            char[] r3 = new char[r3]
            r3 = {x0094: FILL_ARRAY_DATA , data: [65, 72, 75, 76, 79, 81, 82, 85, 88} // fill-array
            org.apache.commons.codec1.language.ColognePhonetic.AHKLOQRUX = r3
            r3 = 2
            char[] r4 = new char[r3]
            r4 = {x00a2: FILL_ARRAY_DATA , data: [83, 90} // fill-array
            org.apache.commons.codec1.language.ColognePhonetic.SZ = r4
            char[] r0 = new char[r0]
            r0 = {x00a8: FILL_ARRAY_DATA , data: [65, 72, 79, 85, 75, 81, 88} // fill-array
            org.apache.commons.codec1.language.ColognePhonetic.AHOUKQX = r0
            char[] r0 = new char[r1]
            r0 = {x00b4: FILL_ARRAY_DATA , data: [84, 68, 88} // fill-array
            org.apache.commons.codec1.language.ColognePhonetic.TDX = r0
            char[][] r0 = new char[r2][]
            char[] r2 = new char[r3]
            r2 = {x00bc: FILL_ARRAY_DATA , data: [196, 65} // fill-array
            r4 = 0
            r0[r4] = r2
            char[] r2 = new char[r3]
            r2 = {x00c2: FILL_ARRAY_DATA , data: [220, 85} // fill-array
            r4 = 1
            r0[r4] = r2
            char[] r2 = new char[r3]
            r2 = {x00c8: FILL_ARRAY_DATA , data: [214, 79} // fill-array
            r0[r3] = r2
            char[] r2 = new char[r3]
            r2 = {x00ce: FILL_ARRAY_DATA , data: [223, 83} // fill-array
            r0[r1] = r2
            org.apache.commons.codec1.language.ColognePhonetic.PREPROCESS_MAP = r0
            return
    }

    public ColognePhonetic() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean arrayContains(char[] r4, char r5) {
            int r0 = r4.length
            r1 = 0
            r2 = r1
        L3:
            if (r2 < r0) goto L6
            return r1
        L6:
            char r3 = r4[r2]
            if (r3 != r5) goto Lc
            r4 = 1
            return r4
        Lc:
            int r2 = r2 + 1
            goto L3
    }

    private java.lang.String preprocess(java.lang.String r9) {
            r8 = this;
            java.util.Locale r0 = java.util.Locale.GERMAN
            java.lang.String r9 = r9.toUpperCase(r0)
            char[] r9 = r9.toCharArray()
            r0 = 0
            r1 = r0
        Lc:
            int r2 = r9.length
            if (r1 < r2) goto L15
            java.lang.String r0 = new java.lang.String
            r0.<init>(r9)
            return r0
        L15:
            char r2 = r9[r1]
            r3 = 90
            if (r2 <= r3) goto L33
            char[][] r2 = org.apache.commons.codec1.language.ColognePhonetic.PREPROCESS_MAP
            int r3 = r2.length
            r4 = r0
        L1f:
            if (r4 < r3) goto L22
            goto L33
        L22:
            r5 = r2[r4]
            char r6 = r9[r1]
            char r7 = r5[r0]
            if (r6 != r7) goto L30
            r2 = 1
            char r2 = r5[r2]
            r9[r1] = r2
            goto L33
        L30:
            int r4 = r4 + 1
            goto L1f
        L33:
            int r1 = r1 + 1
            goto Lc
    }

    public java.lang.String colognePhonetic(java.lang.String r15) {
            r14 = this;
            if (r15 != 0) goto L4
            r15 = 0
            return r15
        L4:
            java.lang.String r15 = r14.preprocess(r15)
            org.apache.commons.codec1.language.ColognePhonetic$CologneOutputBuffer r0 = new org.apache.commons.codec1.language.ColognePhonetic$CologneOutputBuffer
            int r1 = r15.length()
            int r1 = r1 * 2
            r0.<init>(r14, r1)
            org.apache.commons.codec1.language.ColognePhonetic$CologneInputBuffer r1 = new org.apache.commons.codec1.language.ColognePhonetic$CologneInputBuffer
            char[] r15 = r15.toCharArray()
            r1.<init>(r14, r15)
            int r15 = r1.length()
            r2 = 47
            r3 = 45
            r4 = r2
            r5 = r3
        L26:
            if (r15 > 0) goto L2d
            java.lang.String r15 = r0.toString()
            return r15
        L2d:
            char r15 = r1.removeNext()
            int r6 = r1.length()
            if (r6 <= 0) goto L3c
            char r7 = r1.getNextChar()
            goto L3d
        L3c:
            r7 = r3
        L3d:
            char[] r8 = org.apache.commons.codec1.language.ColognePhonetic.AEIJOUY
            boolean r8 = arrayContains(r8, r15)
            r9 = 48
            r10 = 52
            r11 = 56
            if (r8 == 0) goto L4e
            r10 = r9
            goto Lfc
        L4e:
            r8 = 72
            if (r15 == r8) goto Lf6
            r12 = 65
            if (r15 < r12) goto Lf6
            r12 = 90
            if (r15 <= r12) goto L5c
            goto Lf6
        L5c:
            r13 = 66
            if (r15 == r13) goto Lf3
            r13 = 80
            if (r15 != r13) goto L68
            if (r7 == r8) goto L68
            goto Lf3
        L68:
            r8 = 68
            if (r15 == r8) goto L70
            r8 = 84
            if (r15 != r8) goto L7c
        L70:
            char[] r8 = org.apache.commons.codec1.language.ColognePhonetic.SCZ
            boolean r8 = arrayContains(r8, r7)
            if (r8 != 0) goto L7c
            r10 = 50
            goto Lfc
        L7c:
            char[] r8 = org.apache.commons.codec1.language.ColognePhonetic.WFPV
            boolean r8 = arrayContains(r8, r15)
            if (r8 == 0) goto L88
            r10 = 51
            goto Lfc
        L88:
            char[] r8 = org.apache.commons.codec1.language.ColognePhonetic.GKQ
            boolean r8 = arrayContains(r8, r15)
            if (r8 == 0) goto L92
            goto Lfc
        L92:
            r8 = 88
            r13 = 83
            if (r15 != r8) goto La7
            char[] r8 = org.apache.commons.codec1.language.ColognePhonetic.CKQ
            boolean r8 = arrayContains(r8, r5)
            if (r8 != 0) goto La7
            r1.addLeft(r13)
            int r6 = r6 + 1
            goto Lfc
        La7:
            if (r15 == r13) goto Lf1
            if (r15 != r12) goto Lac
            goto Lf1
        Lac:
            r8 = 67
            if (r15 != r8) goto Lcc
            if (r4 != r2) goto Lbb
            char[] r5 = org.apache.commons.codec1.language.ColognePhonetic.AHKLOQRUX
            boolean r5 = arrayContains(r5, r7)
            if (r5 == 0) goto Lf1
            goto Lfc
        Lbb:
            char[] r8 = org.apache.commons.codec1.language.ColognePhonetic.SZ
            boolean r5 = arrayContains(r8, r5)
            if (r5 != 0) goto Lf1
            char[] r5 = org.apache.commons.codec1.language.ColognePhonetic.AHOUKQX
            boolean r5 = arrayContains(r5, r7)
            if (r5 != 0) goto Lfc
            goto Lf1
        Lcc:
            char[] r5 = org.apache.commons.codec1.language.ColognePhonetic.TDX
            boolean r5 = arrayContains(r5, r15)
            if (r5 == 0) goto Ld5
            goto Lf1
        Ld5:
            r5 = 82
            if (r15 != r5) goto Ldc
            r10 = 55
            goto Lfc
        Ldc:
            r5 = 76
            if (r15 != r5) goto Le3
            r10 = 53
            goto Lfc
        Le3:
            r5 = 77
            if (r15 == r5) goto Lee
            r5 = 78
            if (r15 != r5) goto Lec
            goto Lee
        Lec:
            r10 = r15
            goto Lfc
        Lee:
            r10 = 54
            goto Lfc
        Lf1:
            r10 = r11
            goto Lfc
        Lf3:
            r10 = 49
            goto Lfc
        Lf6:
            if (r4 != r2) goto Lfb
            r15 = r6
            goto L26
        Lfb:
            r10 = r3
        Lfc:
            if (r10 == r3) goto L10b
            if (r4 == r10) goto L104
            if (r10 != r9) goto L108
            if (r4 == r2) goto L108
        L104:
            if (r10 < r9) goto L108
            if (r10 <= r11) goto L10b
        L108:
            r0.addRight(r10)
        L10b:
            r5 = r15
            r15 = r6
            r4 = r10
            goto L26
    }

    @Override
    public java.lang.Object encode(java.lang.Object r4) throws org.apache.commons.codec1.EncoderException {
            r3 = this;
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.encode(r4)
            return r4
        Lb:
            org.apache.commons.codec1.EncoderException r0 = new org.apache.commons.codec1.EncoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "This method's parameter was expected to be of the type "
            r1.<init>(r2)
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = ". But actually it was of the type "
            r1.append(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = "."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.lang.String encode(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.colognePhonetic(r1)
            return r1
    }

    public boolean isEncodeEqual(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = r0.colognePhonetic(r1)
            java.lang.String r2 = r0.colognePhonetic(r2)
            boolean r1 = r1.equals(r2)
            return r1
    }
}
