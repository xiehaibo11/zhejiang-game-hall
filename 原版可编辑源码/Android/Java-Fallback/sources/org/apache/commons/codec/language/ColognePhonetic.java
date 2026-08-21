package org.apache.commons.codec.language;

public class ColognePhonetic implements org.apache.commons.codec.StringEncoder {
    private static final char[][] PREPROCESS_MAP = null;

    private abstract class CologneBuffer {
        protected final char[] data;
        protected int length;
        final org.apache.commons.codec.language.ColognePhonetic this$0;

        public CologneBuffer(org.apache.commons.codec.language.ColognePhonetic r1, int r2) {
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

        public CologneBuffer(org.apache.commons.codec.language.ColognePhonetic r1, char[] r2) {
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

    private class CologneInputBuffer extends org.apache.commons.codec.language.ColognePhonetic.CologneBuffer {
        final org.apache.commons.codec.language.ColognePhonetic this$0;

        public CologneInputBuffer(org.apache.commons.codec.language.ColognePhonetic r1, char[] r2) {
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

    private class CologneOutputBuffer extends org.apache.commons.codec.language.ColognePhonetic.CologneBuffer {
        final org.apache.commons.codec.language.ColognePhonetic this$0;

        public CologneOutputBuffer(org.apache.commons.codec.language.ColognePhonetic r1, int r2) {
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
            r0 = 4
            char[][] r0 = new char[r0][]
            r1 = 2
            char[] r2 = new char[r1]
            r2 = {x0026: FILL_ARRAY_DATA , data: [196, 65} // fill-array
            r3 = 0
            r0[r3] = r2
            char[] r2 = new char[r1]
            r2 = {x002c: FILL_ARRAY_DATA , data: [220, 85} // fill-array
            r3 = 1
            r0[r3] = r2
            char[] r2 = new char[r1]
            r2 = {x0032: FILL_ARRAY_DATA , data: [214, 79} // fill-array
            r0[r1] = r2
            char[] r1 = new char[r1]
            r1 = {x0038: FILL_ARRAY_DATA , data: [223, 83} // fill-array
            r2 = 3
            r0[r2] = r1
            org.apache.commons.codec.language.ColognePhonetic.PREPROCESS_MAP = r0
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
            if (r2 >= r0) goto Le
            char r3 = r4[r2]
            if (r3 != r5) goto Lb
            r4 = 1
            return r4
        Lb:
            int r2 = r2 + 1
            goto L3
        Le:
            return r1
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
            if (r1 >= r2) goto L2f
            char r2 = r9[r1]
            r3 = 90
            if (r2 <= r3) goto L2c
            char[][] r2 = org.apache.commons.codec.language.ColognePhonetic.PREPROCESS_MAP
            int r3 = r2.length
            r4 = r0
        L19:
            if (r4 >= r3) goto L2c
            r5 = r2[r4]
            char r6 = r9[r1]
            char r7 = r5[r0]
            if (r6 != r7) goto L29
            r2 = 1
            char r2 = r5[r2]
            r9[r1] = r2
            goto L2c
        L29:
            int r4 = r4 + 1
            goto L19
        L2c:
            int r1 = r1 + 1
            goto Lc
        L2f:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r9)
            return r0
    }

    public java.lang.String colognePhonetic(java.lang.String r17) {
            r16 = this;
            r0 = r16
            if (r17 != 0) goto L6
            r1 = 0
            return r1
        L6:
            java.lang.String r1 = r16.preprocess(r17)
            org.apache.commons.codec.language.ColognePhonetic$CologneOutputBuffer r2 = new org.apache.commons.codec.language.ColognePhonetic$CologneOutputBuffer
            int r3 = r1.length()
            r4 = 2
            int r3 = r3 * r4
            r2.<init>(r0, r3)
            org.apache.commons.codec.language.ColognePhonetic$CologneInputBuffer r3 = new org.apache.commons.codec.language.ColognePhonetic$CologneInputBuffer
            char[] r1 = r1.toCharArray()
            r3.<init>(r0, r1)
            int r1 = r3.length()
            r5 = 47
            r6 = 45
            r7 = r5
            r8 = r6
        L28:
            if (r1 <= 0) goto L12e
            char r1 = r3.removeNext()
            int r9 = r3.length()
            if (r9 <= 0) goto L39
            char r10 = r3.getNextChar()
            goto L3a
        L39:
            r10 = r6
        L3a:
            r11 = 7
            char[] r12 = new char[r11]
            r12 = {x0134: FILL_ARRAY_DATA , data: [65, 69, 73, 74, 79, 85, 89} // fill-array
            boolean r12 = arrayContains(r12, r1)
            if (r12 == 0) goto L4a
            r14 = 48
            goto L116
        L4a:
            r12 = 72
            if (r1 == r12) goto L110
            r14 = 65
            if (r1 < r14) goto L110
            r14 = 90
            if (r1 <= r14) goto L58
            goto L110
        L58:
            r15 = 66
            if (r1 == r15) goto L10d
            r15 = 80
            if (r1 != r15) goto L64
            if (r10 == r12) goto L64
            goto L10d
        L64:
            r12 = 68
            r15 = 3
            if (r1 == r12) goto L6d
            r12 = 84
            if (r1 != r12) goto L7c
        L6d:
            char[] r12 = new char[r15]
            r12 = {x0140: FILL_ARRAY_DATA , data: [83, 67, 90} // fill-array
            boolean r12 = arrayContains(r12, r10)
            if (r12 != 0) goto L7c
            r14 = 50
            goto L116
        L7c:
            r12 = 4
            char[] r12 = new char[r12]
            r12 = {x0148: FILL_ARRAY_DATA , data: [87, 70, 80, 86} // fill-array
            boolean r12 = arrayContains(r12, r1)
            if (r12 == 0) goto L8c
            r14 = 51
            goto L116
        L8c:
            char[] r12 = new char[r15]
            r12 = {x0150: FILL_ARRAY_DATA , data: [71, 75, 81} // fill-array
            boolean r12 = arrayContains(r12, r1)
            if (r12 == 0) goto L9b
        L97:
            r14 = 52
            goto L116
        L9b:
            r12 = 88
            r13 = 83
            if (r1 != r12) goto Lb2
            char[] r12 = new char[r15]
            r12 = {x0158: FILL_ARRAY_DATA , data: [67, 75, 81} // fill-array
            boolean r12 = arrayContains(r12, r8)
            if (r12 != 0) goto Lb2
            r3.addLeft(r13)
            int r9 = r9 + 1
            goto L97
        Lb2:
            if (r1 == r13) goto L10a
            if (r1 != r14) goto Lb7
            goto L10a
        Lb7:
            r12 = 67
            if (r1 != r12) goto Le2
            if (r7 != r5) goto Lcb
            r8 = 9
            char[] r8 = new char[r8]
            r8 = {x0160: FILL_ARRAY_DATA , data: [65, 72, 75, 76, 79, 81, 82, 85, 88} // fill-array
            boolean r8 = arrayContains(r8, r10)
            if (r8 == 0) goto L10a
            goto L97
        Lcb:
            char[] r12 = new char[r4]
            r12 = {x016e: FILL_ARRAY_DATA , data: [83, 90} // fill-array
            boolean r8 = arrayContains(r12, r8)
            if (r8 != 0) goto L10a
            char[] r8 = new char[r11]
            r8 = {x0174: FILL_ARRAY_DATA , data: [65, 72, 79, 85, 75, 81, 88} // fill-array
            boolean r8 = arrayContains(r8, r10)
            if (r8 != 0) goto L97
            goto L10a
        Le2:
            char[] r8 = new char[r15]
            r8 = {x0180: FILL_ARRAY_DATA , data: [84, 68, 88} // fill-array
            boolean r8 = arrayContains(r8, r1)
            if (r8 == 0) goto Lee
            goto L10a
        Lee:
            r8 = 82
            if (r1 != r8) goto Lf5
            r14 = 55
            goto L116
        Lf5:
            r8 = 76
            if (r1 != r8) goto Lfc
            r14 = 53
            goto L116
        Lfc:
            r8 = 77
            if (r1 == r8) goto L107
            r8 = 78
            if (r1 != r8) goto L105
            goto L107
        L105:
            r14 = r1
            goto L116
        L107:
            r14 = 54
            goto L116
        L10a:
            r14 = 56
            goto L116
        L10d:
            r14 = 49
            goto L116
        L110:
            if (r7 != r5) goto L115
            r1 = r9
            goto L28
        L115:
            r14 = r6
        L116:
            if (r14 == r6) goto L129
            r8 = 48
            if (r7 == r14) goto L120
            if (r14 != r8) goto L126
            if (r7 == r5) goto L126
        L120:
            if (r14 < r8) goto L126
            r7 = 56
            if (r14 <= r7) goto L129
        L126:
            r2.addRight(r14)
        L129:
            r8 = r1
            r1 = r9
            r7 = r14
            goto L28
        L12e:
            java.lang.String r1 = r2.toString()
            return r1
    }

    @Override
    public java.lang.Object encode(java.lang.Object r4) throws org.apache.commons.codec.EncoderException {
            r3 = this;
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.encode(r4)
            return r4
        Lb:
            org.apache.commons.codec.EncoderException r0 = new org.apache.commons.codec.EncoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "This method's parameter was expected to be of the type "
            r1.append(r2)
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
