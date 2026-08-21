package com.google.gson.stream;

public class JsonReader implements java.io.Closeable {
    private static final long MIN_INCOMPLETE_INTEGER = -922337203685477580L;
    private static final char[] NON_EXECUTE_PREFIX = null;
    private static final int NUMBER_CHAR_DECIMAL = 3;
    private static final int NUMBER_CHAR_DIGIT = 2;
    private static final int NUMBER_CHAR_EXP_DIGIT = 7;
    private static final int NUMBER_CHAR_EXP_E = 5;
    private static final int NUMBER_CHAR_EXP_SIGN = 6;
    private static final int NUMBER_CHAR_FRACTION_DIGIT = 4;
    private static final int NUMBER_CHAR_NONE = 0;
    private static final int NUMBER_CHAR_SIGN = 1;
    private static final int PEEKED_BEGIN_ARRAY = 3;
    private static final int PEEKED_BEGIN_OBJECT = 1;
    private static final int PEEKED_BUFFERED = 11;
    private static final int PEEKED_DOUBLE_QUOTED = 9;
    private static final int PEEKED_DOUBLE_QUOTED_NAME = 13;
    private static final int PEEKED_END_ARRAY = 4;
    private static final int PEEKED_END_OBJECT = 2;
    private static final int PEEKED_EOF = 17;
    private static final int PEEKED_FALSE = 6;
    private static final int PEEKED_LONG = 15;
    private static final int PEEKED_NONE = 0;
    private static final int PEEKED_NULL = 7;
    private static final int PEEKED_NUMBER = 16;
    private static final int PEEKED_SINGLE_QUOTED = 8;
    private static final int PEEKED_SINGLE_QUOTED_NAME = 12;
    private static final int PEEKED_TRUE = 5;
    private static final int PEEKED_UNQUOTED = 10;
    private static final int PEEKED_UNQUOTED_NAME = 14;
    private final char[] buffer;
    private final java.io.Reader in;
    private boolean lenient;
    private int limit;
    private int lineNumber;
    private int lineStart;
    private int[] pathIndices;
    private java.lang.String[] pathNames;
    int peeked;
    private long peekedLong;
    private int peekedNumberLength;
    private java.lang.String peekedString;
    private int pos;
    private int[] stack;
    private int stackSize;


    static {
            java.lang.String r0 = ")]}'\n"
            char[] r0 = r0.toCharArray()
            com.google.gson.stream.JsonReader.NON_EXECUTE_PREFIX = r0
            com.google.gson.stream.JsonReader$1 r0 = new com.google.gson.stream.JsonReader$1
            r0.<init>()
            com.google.gson.internal.JsonReaderInternalAccess.INSTANCE = r0
            return
    }

    public JsonReader(java.io.Reader r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.lenient = r0
            r1 = 1024(0x400, float:1.435E-42)
            char[] r1 = new char[r1]
            r4.buffer = r1
            r4.pos = r0
            r4.limit = r0
            r4.lineNumber = r0
            r4.lineStart = r0
            r4.peeked = r0
            r1 = 32
            int[] r2 = new int[r1]
            r4.stack = r2
            r4.stackSize = r0
            int[] r0 = r4.stack
            int r2 = r4.stackSize
            int r3 = r2 + 1
            r4.stackSize = r3
            r3 = 6
            r0[r2] = r3
            java.lang.String[] r0 = new java.lang.String[r1]
            r4.pathNames = r0
            int[] r0 = new int[r1]
            r4.pathIndices = r0
            if (r5 == 0) goto L36
            r4.in = r5
            return
        L36:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "in == null"
            r0.<init>(r1)
            throw r0
    }

    private void checkLenient() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.lenient
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.String r0 = "Use JsonReader.setLenient(true) to accept malformed JSON"
            java.io.IOException r0 = r1.syntaxError(r0)
            throw r0
    }

    private void consumeNonExecutePrefix() throws java.io.IOException {
            r4 = this;
            r0 = 1
            r4.nextNonWhitespace(r0)
            int r1 = r4.pos
            int r1 = r1 - r0
            r4.pos = r1
            int r0 = r4.pos
            char[] r1 = com.google.gson.stream.JsonReader.NON_EXECUTE_PREFIX
            int r2 = r1.length
            int r0 = r0 + r2
            int r2 = r4.limit
            if (r0 <= r2) goto L1b
            int r0 = r1.length
            boolean r0 = r4.fillBuffer(r0)
            if (r0 != 0) goto L1b
            return
        L1b:
            r0 = 0
        L1c:
            char[] r1 = com.google.gson.stream.JsonReader.NON_EXECUTE_PREFIX
            int r2 = r1.length
            if (r0 >= r2) goto L30
            char[] r2 = r4.buffer
            int r3 = r4.pos
            int r3 = r3 + r0
            char r2 = r2[r3]
            char r1 = r1[r0]
            if (r2 == r1) goto L2d
            return
        L2d:
            int r0 = r0 + 1
            goto L1c
        L30:
            int r0 = r4.pos
            int r1 = r1.length
            int r0 = r0 + r1
            r4.pos = r0
            return
    }

    private boolean fillBuffer(int r8) throws java.io.IOException {
            r7 = this;
            char[] r0 = r7.buffer
            int r1 = r7.lineStart
            int r2 = r7.pos
            int r1 = r1 - r2
            r7.lineStart = r1
            int r1 = r7.limit
            r3 = 0
            if (r1 == r2) goto L17
            int r1 = r1 - r2
            r7.limit = r1
            int r1 = r7.limit
            java.lang.System.arraycopy(r0, r2, r0, r3, r1)
            goto L19
        L17:
            r7.limit = r3
        L19:
            r7.pos = r3
        L1b:
            java.io.Reader r1 = r7.in
            int r2 = r7.limit
            int r4 = r0.length
            int r4 = r4 - r2
            int r1 = r1.read(r0, r2, r4)
            r2 = r1
            r4 = -1
            if (r1 == r4) goto L52
            int r1 = r7.limit
            int r1 = r1 + r2
            r7.limit = r1
            int r1 = r7.lineNumber
            r4 = 1
            if (r1 != 0) goto L4d
            int r1 = r7.lineStart
            if (r1 != 0) goto L4d
            int r5 = r7.limit
            if (r5 <= 0) goto L4d
            char r5 = r0[r3]
            r6 = 65279(0xfeff, float:9.1475E-41)
            if (r5 != r6) goto L4d
            int r5 = r7.pos
            int r5 = r5 + r4
            r7.pos = r5
            int r1 = r1 + 1
            r7.lineStart = r1
            int r8 = r8 + 1
        L4d:
            int r1 = r7.limit
            if (r1 < r8) goto L1b
            return r4
        L52:
            return r3
    }

    private boolean isLiteral(char r2) throws java.io.IOException {
            r1 = this;
            r0 = 9
            if (r2 == r0) goto L3c
            r0 = 10
            if (r2 == r0) goto L3c
            r0 = 12
            if (r2 == r0) goto L3c
            r0 = 13
            if (r2 == r0) goto L3c
            r0 = 32
            if (r2 == r0) goto L3c
            r0 = 35
            if (r2 == r0) goto L39
            r0 = 44
            if (r2 == r0) goto L3c
            r0 = 47
            if (r2 == r0) goto L39
            r0 = 61
            if (r2 == r0) goto L39
            r0 = 123(0x7b, float:1.72E-43)
            if (r2 == r0) goto L3c
            r0 = 125(0x7d, float:1.75E-43)
            if (r2 == r0) goto L3c
            r0 = 58
            if (r2 == r0) goto L3c
            r0 = 59
            if (r2 == r0) goto L39
            switch(r2) {
                case 91: goto L3c;
                case 92: goto L39;
                case 93: goto L3c;
                default: goto L37;
            }
        L37:
            r0 = 1
            return r0
        L39:
            r1.checkLenient()
        L3c:
            r0 = 0
            return r0
    }

    private int nextNonWhitespace(boolean r10) throws java.io.IOException {
            r9 = this;
            char[] r0 = r9.buffer
            int r1 = r9.pos
            int r2 = r9.limit
        L6:
            r3 = 1
            if (r1 != r2) goto L35
            r9.pos = r1
            boolean r4 = r9.fillBuffer(r3)
            if (r4 != 0) goto L31
        L12:
            if (r10 != 0) goto L16
            r3 = -1
            return r3
        L16:
            java.io.EOFException r3 = new java.io.EOFException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "End of input"
            r4.append(r5)
            java.lang.String r5 = r9.locationString()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L31:
            int r1 = r9.pos
            int r2 = r9.limit
        L35:
            int r4 = r1 + 1
            char r1 = r0[r1]
            r5 = 10
            if (r1 != r5) goto L46
            int r5 = r9.lineNumber
            int r5 = r5 + r3
            r9.lineNumber = r5
            r9.lineStart = r4
            goto Lba
        L46:
            r5 = 32
            if (r1 == r5) goto Lba
            r5 = 13
            if (r1 == r5) goto Lba
            r5 = 9
            if (r1 != r5) goto L53
            goto Lba
        L53:
            r5 = 47
            if (r1 != r5) goto La4
            r9.pos = r4
            r6 = 2
            if (r4 != r2) goto L6d
            int r7 = r9.pos
            int r7 = r7 - r3
            r9.pos = r7
            boolean r7 = r9.fillBuffer(r6)
            int r8 = r9.pos
            int r8 = r8 + r3
            r9.pos = r8
            if (r7 != 0) goto L6d
            return r1
        L6d:
            r9.checkLenient()
            int r3 = r9.pos
            char r7 = r0[r3]
            r8 = 42
            if (r7 == r8) goto L89
            if (r7 == r5) goto L7b
            return r1
        L7b:
            int r3 = r3 + 1
            r9.pos = r3
            r9.skipToEndOfLine()
            int r3 = r9.pos
            int r2 = r9.limit
            r1 = r3
            goto L6
        L89:
            int r3 = r3 + 1
            r9.pos = r3
            java.lang.String r3 = "*/"
            boolean r3 = r9.skipTo(r3)
            if (r3 == 0) goto L9d
            int r3 = r9.pos
            int r3 = r3 + r6
            int r2 = r9.limit
            r1 = r3
            goto L6
        L9d:
            java.lang.String r3 = "Unterminated comment"
            java.io.IOException r3 = r9.syntaxError(r3)
            throw r3
        La4:
            r3 = 35
            if (r1 != r3) goto Lb7
            r9.pos = r4
            r9.checkLenient()
            r9.skipToEndOfLine()
            int r3 = r9.pos
            int r2 = r9.limit
            r1 = r3
            goto L6
        Lb7:
            r9.pos = r4
            return r1
        Lba:
            r1 = r4
            goto L6
    }

    private java.lang.String nextQuotedValue(char r11) throws java.io.IOException {
            r10 = this;
            char[] r0 = r10.buffer
            r1 = 0
        L3:
            int r2 = r10.pos
            int r3 = r10.limit
            r4 = r2
        L8:
            r5 = 16
            r6 = 1
            if (r2 >= r3) goto L5f
            int r7 = r2 + 1
            char r2 = r0[r2]
            if (r2 != r11) goto L28
            r10.pos = r7
            int r5 = r7 - r4
            int r5 = r5 - r6
            if (r1 != 0) goto L20
            java.lang.String r6 = new java.lang.String
            r6.<init>(r0, r4, r5)
            return r6
        L20:
            r1.append(r0, r4, r5)
            java.lang.String r6 = r1.toString()
            return r6
        L28:
            r8 = 92
            if (r2 != r8) goto L52
            r10.pos = r7
            int r8 = r7 - r4
            int r8 = r8 - r6
            if (r1 != 0) goto L41
            int r6 = r8 + 1
            int r6 = r6 * 2
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            int r5 = java.lang.Math.max(r6, r5)
            r9.<init>(r5)
            r1 = r9
        L41:
            r1.append(r0, r4, r8)
            char r5 = r10.readEscapeCharacter()
            r1.append(r5)
            int r5 = r10.pos
            int r3 = r10.limit
            r4 = r5
            r2 = r5
            goto L5e
        L52:
            r5 = 10
            if (r2 != r5) goto L5d
            int r5 = r10.lineNumber
            int r5 = r5 + r6
            r10.lineNumber = r5
            r10.lineStart = r7
        L5d:
            r2 = r7
        L5e:
            goto L8
        L5f:
            if (r1 != 0) goto L6f
            int r7 = r2 - r4
            int r7 = r7 * 2
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            int r5 = java.lang.Math.max(r7, r5)
            r8.<init>(r5)
            r1 = r8
        L6f:
            int r5 = r2 - r4
            r1.append(r0, r4, r5)
            r10.pos = r2
            boolean r5 = r10.fillBuffer(r6)
            if (r5 == 0) goto L7d
            goto L3
        L7d:
            java.lang.String r5 = "Unterminated string"
            java.io.IOException r5 = r10.syntaxError(r5)
            throw r5
    }

    private java.lang.String nextUnquotedValue() throws java.io.IOException {
            r5 = this;
            r0 = 0
            r1 = 0
        L2:
            int r2 = r5.pos
            int r3 = r2 + r1
            int r4 = r5.limit
            if (r3 >= r4) goto L4d
            char[] r3 = r5.buffer
            int r2 = r2 + r1
            char r2 = r3[r2]
            r3 = 9
            if (r2 == r3) goto L4c
            r3 = 10
            if (r2 == r3) goto L4c
            r3 = 12
            if (r2 == r3) goto L4c
            r3 = 13
            if (r2 == r3) goto L4c
            r3 = 32
            if (r2 == r3) goto L4c
            r3 = 35
            if (r2 == r3) goto L49
            r3 = 44
            if (r2 == r3) goto L4c
            r3 = 47
            if (r2 == r3) goto L49
            r3 = 61
            if (r2 == r3) goto L49
            r3 = 123(0x7b, float:1.72E-43)
            if (r2 == r3) goto L4c
            r3 = 125(0x7d, float:1.75E-43)
            if (r2 == r3) goto L4c
            r3 = 58
            if (r2 == r3) goto L4c
            r3 = 59
            if (r2 == r3) goto L49
            switch(r2) {
                case 91: goto L4c;
                case 92: goto L49;
                case 93: goto L4c;
                default: goto L46;
            }
        L46:
            int r1 = r1 + 1
            goto L2
        L49:
            r5.checkLenient()
        L4c:
            goto L7e
        L4d:
            char[] r2 = r5.buffer
            int r2 = r2.length
            if (r1 >= r2) goto L5b
            int r2 = r1 + 1
            boolean r2 = r5.fillBuffer(r2)
            if (r2 == 0) goto L7e
            goto L2
        L5b:
            if (r0 != 0) goto L69
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r3 = 16
            int r3 = java.lang.Math.max(r1, r3)
            r2.<init>(r3)
            r0 = r2
        L69:
            char[] r2 = r5.buffer
            int r3 = r5.pos
            r0.append(r2, r3, r1)
            int r2 = r5.pos
            int r2 = r2 + r1
            r5.pos = r2
            r1 = 0
            r2 = 1
            boolean r2 = r5.fillBuffer(r2)
            if (r2 != 0) goto L9b
        L7e:
            if (r0 != 0) goto L8a
            java.lang.String r2 = new java.lang.String
            char[] r3 = r5.buffer
            int r4 = r5.pos
            r2.<init>(r3, r4, r1)
            goto L95
        L8a:
            char[] r2 = r5.buffer
            int r3 = r5.pos
            r0.append(r2, r3, r1)
            java.lang.String r2 = r0.toString()
        L95:
            int r3 = r5.pos
            int r3 = r3 + r1
            r5.pos = r3
            return r2
        L9b:
            goto L2
    }

    private int peekKeyword() throws java.io.IOException {
            r9 = this;
            char[] r0 = r9.buffer
            int r1 = r9.pos
            char r0 = r0[r1]
            r1 = 0
            r2 = 116(0x74, float:1.63E-43)
            if (r0 == r2) goto L2f
            r2 = 84
            if (r0 != r2) goto L10
            goto L2f
        L10:
            r2 = 102(0x66, float:1.43E-43)
            if (r0 == r2) goto L29
            r2 = 70
            if (r0 != r2) goto L19
            goto L29
        L19:
            r2 = 110(0x6e, float:1.54E-43)
            if (r0 == r2) goto L23
            r2 = 78
            if (r0 != r2) goto L22
            goto L23
        L22:
            return r1
        L23:
            java.lang.String r2 = "null"
            java.lang.String r3 = "NULL"
            r4 = 7
            goto L34
        L29:
            java.lang.String r2 = "false"
            java.lang.String r3 = "FALSE"
            r4 = 6
            goto L34
        L2f:
            java.lang.String r2 = "true"
            java.lang.String r3 = "TRUE"
            r4 = 5
        L34:
            int r5 = r2.length()
            r6 = 1
        L39:
            if (r6 >= r5) goto L62
            int r7 = r9.pos
            int r7 = r7 + r6
            int r8 = r9.limit
            if (r7 < r8) goto L4b
            int r7 = r6 + 1
            boolean r7 = r9.fillBuffer(r7)
            if (r7 != 0) goto L4b
            return r1
        L4b:
            char[] r7 = r9.buffer
            int r8 = r9.pos
            int r8 = r8 + r6
            char r0 = r7[r8]
            char r7 = r2.charAt(r6)
            if (r0 == r7) goto L5f
            char r7 = r3.charAt(r6)
            if (r0 == r7) goto L5f
            return r1
        L5f:
            int r6 = r6 + 1
            goto L39
        L62:
            int r6 = r9.pos
            int r6 = r6 + r5
            int r7 = r9.limit
            if (r6 < r7) goto L71
            int r6 = r5 + 1
            boolean r6 = r9.fillBuffer(r6)
            if (r6 == 0) goto L7f
        L71:
            char[] r6 = r9.buffer
            int r7 = r9.pos
            int r7 = r7 + r5
            char r6 = r6[r7]
            boolean r6 = r9.isLiteral(r6)
            if (r6 == 0) goto L7f
            return r1
        L7f:
            int r1 = r9.pos
            int r1 = r1 + r5
            r9.pos = r1
            r9.peeked = r4
            return r4
    }

    private int peekNumber() throws java.io.IOException {
            r20 = this;
            r0 = r20
            char[] r1 = r0.buffer
            int r2 = r0.pos
            int r3 = r0.limit
            r4 = 0
            r6 = 0
            r7 = 1
            r8 = 0
            r9 = 0
        Le:
            int r10 = r2 + r9
            r11 = 0
            r14 = 2
            r15 = 0
            if (r10 != r3) goto L28
            int r10 = r1.length
            if (r9 != r10) goto L1a
            return r15
        L1a:
            int r10 = r9 + 1
            boolean r10 = r0.fillBuffer(r10)
            if (r10 != 0) goto L24
            goto L98
        L24:
            int r2 = r0.pos
            int r3 = r0.limit
        L28:
            int r10 = r2 + r9
            char r10 = r1[r10]
            r13 = 43
            r15 = 5
            if (r10 == r13) goto Lea
            r13 = 69
            if (r10 == r13) goto Le0
            r13 = 101(0x65, float:1.42E-43)
            if (r10 == r13) goto Le0
            r13 = 45
            if (r10 == r13) goto Ld5
            r13 = 46
            if (r10 == r13) goto Lcf
            r13 = 48
            if (r10 < r13) goto L91
            r13 = 57
            if (r10 <= r13) goto L4a
            goto L91
        L4a:
            r13 = 1
            if (r8 == r13) goto L8a
            if (r8 != 0) goto L50
            goto L8a
        L50:
            if (r8 != r14) goto L7c
            int r14 = (r4 > r11 ? 1 : (r4 == r11 ? 0 : -1))
            if (r14 != 0) goto L58
            r11 = 0
            return r11
        L58:
            r11 = 10
            long r11 = r11 * r4
            int r14 = r10 + (-48)
            long r14 = (long) r14
            long r11 = r11 - r14
            r14 = -922337203685477580(0xf333333333333334, double:-8.390303882365713E246)
            int r16 = (r4 > r14 ? 1 : (r4 == r14 ? 0 : -1))
            if (r16 > 0) goto L75
            int r16 = (r4 > r14 ? 1 : (r4 == r14 ? 0 : -1))
            if (r16 != 0) goto L72
            int r14 = (r11 > r4 ? 1 : (r11 == r4 ? 0 : -1))
            if (r14 >= 0) goto L72
            goto L75
        L72:
            r17 = 0
            goto L77
        L75:
            r17 = 1
        L77:
            r7 = r7 & r17
            r4 = r11
            goto Lee
        L7c:
            r11 = 3
            if (r8 != r11) goto L82
            r8 = 4
            goto Lee
        L82:
            if (r8 == r15) goto L87
            r11 = 6
            if (r8 != r11) goto Lee
        L87:
            r8 = 7
            goto Lee
        L8a:
            int r11 = r10 + (-48)
            int r11 = -r11
            long r4 = (long) r11
            r8 = 2
            goto Lee
        L91:
            boolean r13 = r0.isLiteral(r10)
            if (r13 != 0) goto Lcd
        L98:
            if (r8 != r14) goto Lbb
            if (r7 == 0) goto Lbb
            r18 = -9223372036854775808
            int r10 = (r4 > r18 ? 1 : (r4 == r18 ? 0 : -1))
            if (r10 != 0) goto La4
            if (r6 == 0) goto Lbb
        La4:
            int r10 = (r4 > r11 ? 1 : (r4 == r11 ? 0 : -1))
            if (r10 != 0) goto Laa
            if (r6 != 0) goto Lbb
        Laa:
            if (r6 == 0) goto Lae
            r10 = r4
            goto Laf
        Lae:
            long r10 = -r4
        Laf:
            r0.peekedLong = r10
            int r10 = r0.pos
            int r10 = r10 + r9
            r0.pos = r10
            r10 = 15
            r0.peeked = r10
            return r10
        Lbb:
            if (r8 == r14) goto Lc6
            r10 = 4
            if (r8 == r10) goto Lc6
            r10 = 7
            if (r8 != r10) goto Lc4
            goto Lc6
        Lc4:
            r10 = 0
            return r10
        Lc6:
            r0.peekedNumberLength = r9
            r10 = 16
            r0.peeked = r10
            return r10
        Lcd:
            r11 = 0
            return r11
        Lcf:
            r11 = 0
            if (r8 != r14) goto Ld4
            r8 = 3
            goto Lee
        Ld4:
            return r11
        Ld5:
            if (r8 != 0) goto Lda
            r6 = 1
            r8 = 1
            goto Lee
        Lda:
            if (r8 != r15) goto Lde
            r8 = 6
            goto Lee
        Lde:
            r11 = 0
            return r11
        Le0:
            r11 = 0
            if (r8 == r14) goto Le8
            r12 = 4
            if (r8 != r12) goto Le7
            goto Le8
        Le7:
            return r11
        Le8:
            r8 = 5
            goto Lee
        Lea:
            if (r8 != r15) goto Lf2
            r8 = 6
        Lee:
            int r9 = r9 + 1
            goto Le
        Lf2:
            r11 = 0
            return r11
    }

    private void push(int r7) {
            r6 = this;
            int r0 = r6.stackSize
            int[] r1 = r6.stack
            int r2 = r1.length
            if (r0 != r2) goto L2b
            int r2 = r0 * 2
            int[] r2 = new int[r2]
            int r3 = r0 * 2
            int[] r3 = new int[r3]
            int r4 = r0 * 2
            java.lang.String[] r4 = new java.lang.String[r4]
            r5 = 0
            java.lang.System.arraycopy(r1, r5, r2, r5, r0)
            int[] r0 = r6.pathIndices
            int r1 = r6.stackSize
            java.lang.System.arraycopy(r0, r5, r3, r5, r1)
            java.lang.String[] r0 = r6.pathNames
            int r1 = r6.stackSize
            java.lang.System.arraycopy(r0, r5, r4, r5, r1)
            r6.stack = r2
            r6.pathIndices = r3
            r6.pathNames = r4
        L2b:
            int[] r0 = r6.stack
            int r1 = r6.stackSize
            int r2 = r1 + 1
            r6.stackSize = r2
            r0[r1] = r7
            return
    }

    private char readEscapeCharacter() throws java.io.IOException {
            r11 = this;
            int r0 = r11.pos
            int r1 = r11.limit
            java.lang.String r2 = "Unterminated escape sequence"
            r3 = 1
            if (r0 != r1) goto L15
            boolean r0 = r11.fillBuffer(r3)
            if (r0 == 0) goto L10
            goto L15
        L10:
            java.io.IOException r0 = r11.syntaxError(r2)
            throw r0
        L15:
            char[] r0 = r11.buffer
            int r1 = r11.pos
            int r4 = r1 + 1
            r11.pos = r4
            char r0 = r0[r1]
            r1 = 10
            if (r0 == r1) goto Ld0
            r3 = 34
            if (r0 == r3) goto Ld9
            r3 = 39
            if (r0 == r3) goto Ld9
            r3 = 47
            if (r0 == r3) goto Ld9
            r3 = 92
            if (r0 == r3) goto Ld9
            r3 = 98
            if (r0 == r3) goto Lcd
            r3 = 102(0x66, float:1.43E-43)
            if (r0 == r3) goto Lca
            r4 = 110(0x6e, float:1.54E-43)
            if (r0 == r4) goto Lc9
            r4 = 114(0x72, float:1.6E-43)
            if (r0 == r4) goto Lc6
            r4 = 116(0x74, float:1.63E-43)
            if (r0 == r4) goto Lc3
            r4 = 117(0x75, float:1.64E-43)
            if (r0 != r4) goto Lbc
            int r4 = r11.pos
            r5 = 4
            int r4 = r4 + r5
            int r6 = r11.limit
            if (r4 <= r6) goto L5f
            boolean r4 = r11.fillBuffer(r5)
            if (r4 == 0) goto L5a
            goto L5f
        L5a:
            java.io.IOException r1 = r11.syntaxError(r2)
            throw r1
        L5f:
            r2 = 0
            int r4 = r11.pos
            int r6 = r4 + 4
        L64:
            if (r4 >= r6) goto Lb6
            char[] r7 = r11.buffer
            char r7 = r7[r4]
            int r8 = r2 << 4
            char r2 = (char) r8
            r8 = 48
            if (r7 < r8) goto L7a
            r8 = 57
            if (r7 > r8) goto L7a
            int r8 = r7 + (-48)
            int r8 = r8 + r2
            char r2 = (char) r8
            goto L93
        L7a:
            r8 = 97
            if (r7 < r8) goto L86
            if (r7 > r3) goto L86
            int r8 = r7 + (-97)
            int r8 = r8 + r1
            int r8 = r8 + r2
            char r2 = (char) r8
            goto L93
        L86:
            r8 = 65
            if (r7 < r8) goto L96
            r8 = 70
            if (r7 > r8) goto L96
            int r8 = r7 + (-65)
            int r8 = r8 + r1
            int r8 = r8 + r2
            char r2 = (char) r8
        L93:
            int r4 = r4 + 1
            goto L64
        L96:
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r8 = "\\u"
            r3.append(r8)
            java.lang.String r8 = new java.lang.String
            char[] r9 = r11.buffer
            int r10 = r11.pos
            r8.<init>(r9, r10, r5)
            r3.append(r8)
            java.lang.String r3 = r3.toString()
            r1.<init>(r3)
            throw r1
        Lb6:
            int r1 = r11.pos
            int r1 = r1 + r5
            r11.pos = r1
            return r2
        Lbc:
            java.lang.String r1 = "Invalid escape sequence"
            java.io.IOException r1 = r11.syntaxError(r1)
            throw r1
        Lc3:
            r1 = 9
            return r1
        Lc6:
            r1 = 13
            return r1
        Lc9:
            return r1
        Lca:
            r1 = 12
            return r1
        Lcd:
            r1 = 8
            return r1
        Ld0:
            int r1 = r11.lineNumber
            int r1 = r1 + r3
            r11.lineNumber = r1
            int r1 = r11.pos
            r11.lineStart = r1
        Ld9:
            return r0
    }

    private void skipQuotedValue(char r7) throws java.io.IOException {
            r6 = this;
            char[] r0 = r6.buffer
        L2:
            int r1 = r6.pos
            int r2 = r6.limit
        L6:
            r3 = 1
            if (r1 >= r2) goto L2e
            int r4 = r1 + 1
            char r1 = r0[r1]
            if (r1 != r7) goto L12
            r6.pos = r4
            return
        L12:
            r5 = 92
            if (r1 != r5) goto L21
            r6.pos = r4
            r6.readEscapeCharacter()
            int r3 = r6.pos
            int r2 = r6.limit
            r1 = r3
            goto L2d
        L21:
            r5 = 10
            if (r1 != r5) goto L2c
            int r5 = r6.lineNumber
            int r5 = r5 + r3
            r6.lineNumber = r5
            r6.lineStart = r4
        L2c:
            r1 = r4
        L2d:
            goto L6
        L2e:
            r6.pos = r1
            boolean r1 = r6.fillBuffer(r3)
            if (r1 == 0) goto L37
            goto L2
        L37:
            java.lang.String r1 = "Unterminated string"
            java.io.IOException r1 = r6.syntaxError(r1)
            throw r1
    }

    private boolean skipTo(java.lang.String r6) throws java.io.IOException {
            r5 = this;
            int r0 = r6.length()
        L4:
            int r1 = r5.pos
            int r1 = r1 + r0
            int r2 = r5.limit
            if (r1 <= r2) goto L14
            boolean r1 = r5.fillBuffer(r0)
            if (r1 == 0) goto L12
            goto L14
        L12:
            r1 = 0
            return r1
        L14:
            char[] r1 = r5.buffer
            int r2 = r5.pos
            char r1 = r1[r2]
            r3 = 10
            r4 = 1
            if (r1 != r3) goto L29
            int r1 = r5.lineNumber
            int r1 = r1 + r4
            r5.lineNumber = r1
            int r2 = r2 + 1
            r5.lineStart = r2
            goto L3a
        L29:
            r1 = 0
        L2a:
            if (r1 >= r0) goto L43
            char[] r2 = r5.buffer
            int r3 = r5.pos
            int r3 = r3 + r1
            char r2 = r2[r3]
            char r3 = r6.charAt(r1)
            if (r2 == r3) goto L40
        L3a:
            int r1 = r5.pos
            int r1 = r1 + r4
            r5.pos = r1
            goto L4
        L40:
            int r1 = r1 + 1
            goto L2a
        L43:
            return r4
    }

    private void skipToEndOfLine() throws java.io.IOException {
            r4 = this;
        L0:
            int r0 = r4.pos
            int r1 = r4.limit
            r2 = 1
            if (r0 < r1) goto Ld
            boolean r0 = r4.fillBuffer(r2)
            if (r0 == 0) goto L2a
        Ld:
            char[] r0 = r4.buffer
            int r1 = r4.pos
            int r3 = r1 + 1
            r4.pos = r3
            char r0 = r0[r1]
            r1 = 10
            if (r0 != r1) goto L25
            int r1 = r4.lineNumber
            int r1 = r1 + r2
            r4.lineNumber = r1
            int r1 = r4.pos
            r4.lineStart = r1
            goto L2a
        L25:
            r1 = 13
            if (r0 != r1) goto L2b
        L2a:
            return
        L2b:
            goto L0
    }

    private void skipUnquotedValue() throws java.io.IOException {
            r4 = this;
        L0:
            r0 = 0
        L1:
            int r1 = r4.pos
            int r2 = r1 + r0
            int r3 = r4.limit
            if (r2 >= r3) goto L51
            char[] r2 = r4.buffer
            int r1 = r1 + r0
            char r1 = r2[r1]
            r2 = 9
            if (r1 == r2) goto L4b
            r2 = 10
            if (r1 == r2) goto L4b
            r2 = 12
            if (r1 == r2) goto L4b
            r2 = 13
            if (r1 == r2) goto L4b
            r2 = 32
            if (r1 == r2) goto L4b
            r2 = 35
            if (r1 == r2) goto L48
            r2 = 44
            if (r1 == r2) goto L4b
            r2 = 47
            if (r1 == r2) goto L48
            r2 = 61
            if (r1 == r2) goto L48
            r2 = 123(0x7b, float:1.72E-43)
            if (r1 == r2) goto L4b
            r2 = 125(0x7d, float:1.75E-43)
            if (r1 == r2) goto L4b
            r2 = 58
            if (r1 == r2) goto L4b
            r2 = 59
            if (r1 == r2) goto L48
            switch(r1) {
                case 91: goto L4b;
                case 92: goto L48;
                case 93: goto L4b;
                default: goto L45;
            }
        L45:
            int r0 = r0 + 1
            goto L1
        L48:
            r4.checkLenient()
        L4b:
            int r1 = r4.pos
            int r1 = r1 + r0
            r4.pos = r1
            return
        L51:
            int r1 = r1 + r0
            r4.pos = r1
            r0 = 1
            boolean r0 = r4.fillBuffer(r0)
            if (r0 != 0) goto L5c
            return
        L5c:
            goto L0
    }

    private java.io.IOException syntaxError(java.lang.String r4) throws java.io.IOException {
            r3 = this;
            com.google.gson.stream.MalformedJsonException r0 = new com.google.gson.stream.MalformedJsonException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r2 = r3.locationString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public void beginArray() throws java.io.IOException {
            r4 = this;
            int r0 = r4.peeked
            if (r0 != 0) goto L8
            int r0 = r4.doPeek()
        L8:
            r1 = 3
            if (r0 != r1) goto L1a
            r1 = 1
            r4.push(r1)
            int[] r2 = r4.pathIndices
            int r3 = r4.stackSize
            int r3 = r3 - r1
            r1 = 0
            r2[r3] = r1
            r4.peeked = r1
            return
        L1a:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected BEGIN_ARRAY but was "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r4.peek()
            r2.append(r3)
            java.lang.String r3 = r4.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public void beginObject() throws java.io.IOException {
            r4 = this;
            int r0 = r4.peeked
            if (r0 != 0) goto L8
            int r0 = r4.doPeek()
        L8:
            r1 = 1
            if (r0 != r1) goto L13
            r1 = 3
            r4.push(r1)
            r1 = 0
            r4.peeked = r1
            return
        L13:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected BEGIN_OBJECT but was "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r4.peek()
            r2.append(r3)
            java.lang.String r3 = r4.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void close() throws java.io.IOException {
            r3 = this;
            r0 = 0
            r3.peeked = r0
            int[] r1 = r3.stack
            r2 = 8
            r1[r0] = r2
            r0 = 1
            r3.stackSize = r0
            java.io.Reader r0 = r3.in
            r0.close()
            return
    }

    int doPeek() throws java.io.IOException {
            r16 = this;
            r0 = r16
            int[] r1 = r0.stack
            int r2 = r0.stackSize
            int r3 = r2 + (-1)
            r3 = r1[r3]
            r4 = 8
            r5 = 39
            r6 = 34
            r7 = 93
            r8 = 3
            r9 = 7
            r10 = 59
            r11 = 44
            r12 = 4
            r13 = 2
            r14 = 1
            if (r3 != r14) goto L22
            int r2 = r2 - r14
            r1[r2] = r13
            goto La9
        L22:
            if (r3 != r13) goto L3e
            int r1 = r0.nextNonWhitespace(r14)
            if (r1 == r11) goto L3b
            if (r1 == r10) goto L38
            if (r1 != r7) goto L31
            r0.peeked = r12
            return r12
        L31:
            java.lang.String r2 = "Unterminated array"
            java.io.IOException r2 = r0.syntaxError(r2)
            throw r2
        L38:
            r16.checkLenient()
        L3b:
            goto La9
        L3e:
            r15 = 5
            if (r3 == r8) goto L123
            if (r3 != r15) goto L45
            goto L123
        L45:
            if (r3 != r12) goto L7c
            int r2 = r2 - r14
            r1[r2] = r15
            int r1 = r0.nextNonWhitespace(r14)
            r2 = 58
            if (r1 == r2) goto L7a
            r2 = 61
            if (r1 != r2) goto L73
            r16.checkLenient()
            int r2 = r0.pos
            int r15 = r0.limit
            if (r2 < r15) goto L65
            boolean r2 = r0.fillBuffer(r14)
            if (r2 == 0) goto L7b
        L65:
            char[] r2 = r0.buffer
            int r15 = r0.pos
            char r2 = r2[r15]
            r13 = 62
            if (r2 != r13) goto L7b
            int r15 = r15 + r14
            r0.pos = r15
            goto L7b
        L73:
            java.lang.String r2 = "Expected ':'"
            java.io.IOException r2 = r0.syntaxError(r2)
            throw r2
        L7a:
        L7b:
            goto La9
        L7c:
            r1 = 6
            if (r3 != r1) goto L8e
            boolean r1 = r0.lenient
            if (r1 == 0) goto L86
            r16.consumeNonExecutePrefix()
        L86:
            int[] r1 = r0.stack
            int r2 = r0.stackSize
            int r2 = r2 - r14
            r1[r2] = r9
            goto La9
        L8e:
            if (r3 != r9) goto La6
            r1 = 0
            int r1 = r0.nextNonWhitespace(r1)
            r2 = -1
            if (r1 != r2) goto L9d
            r2 = 17
            r0.peeked = r2
            return r2
        L9d:
            r16.checkLenient()
            int r2 = r0.pos
            int r2 = r2 - r14
            r0.pos = r2
            goto La8
        La6:
            if (r3 == r4) goto L11b
        La8:
        La9:
            int r1 = r0.nextNonWhitespace(r14)
            if (r1 == r6) goto L116
            if (r1 == r5) goto L110
            if (r1 == r11) goto Lf8
            if (r1 == r10) goto Lf8
            r2 = 91
            if (r1 == r2) goto Lf5
            if (r1 == r7) goto Lf0
            r2 = 123(0x7b, float:1.72E-43)
            if (r1 == r2) goto Led
            int r2 = r0.pos
            int r2 = r2 - r14
            r0.pos = r2
            int r2 = r16.peekKeyword()
            if (r2 == 0) goto Lcb
            return r2
        Lcb:
            int r2 = r16.peekNumber()
            if (r2 == 0) goto Ld2
            return r2
        Ld2:
            char[] r4 = r0.buffer
            int r5 = r0.pos
            char r4 = r4[r5]
            boolean r4 = r0.isLiteral(r4)
            if (r4 == 0) goto Le6
            r16.checkLenient()
            r4 = 10
            r0.peeked = r4
            return r4
        Le6:
            java.lang.String r4 = "Expected value"
            java.io.IOException r4 = r0.syntaxError(r4)
            throw r4
        Led:
            r0.peeked = r14
            return r14
        Lf0:
            if (r3 != r14) goto Lf8
            r0.peeked = r12
            return r12
        Lf5:
            r0.peeked = r8
            return r8
        Lf8:
            if (r3 == r14) goto L105
            r2 = 2
            if (r3 != r2) goto Lfe
            goto L105
        Lfe:
            java.lang.String r2 = "Unexpected value"
            java.io.IOException r2 = r0.syntaxError(r2)
            throw r2
        L105:
            r16.checkLenient()
            int r2 = r0.pos
            int r2 = r2 - r14
            r0.pos = r2
            r0.peeked = r9
            return r9
        L110:
            r16.checkLenient()
            r0.peeked = r4
            return r4
        L116:
            r2 = 9
            r0.peeked = r2
            return r2
        L11b:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "JsonReader is closed"
            r1.<init>(r2)
            throw r1
        L123:
            int[] r1 = r0.stack
            int r2 = r0.stackSize
            int r2 = r2 - r14
            r1[r2] = r12
            r1 = 125(0x7d, float:1.75E-43)
            if (r3 != r15) goto L146
            int r2 = r0.nextNonWhitespace(r14)
            if (r2 == r11) goto L146
            if (r2 == r10) goto L143
            if (r2 != r1) goto L13c
            r1 = 2
            r0.peeked = r1
            return r1
        L13c:
            java.lang.String r1 = "Unterminated object"
            java.io.IOException r1 = r0.syntaxError(r1)
            throw r1
        L143:
            r16.checkLenient()
        L146:
            int r2 = r0.nextNonWhitespace(r14)
            if (r2 == r6) goto L17e
            if (r2 == r5) goto L176
            java.lang.String r4 = "Expected name"
            if (r2 == r1) goto L16b
            r16.checkLenient()
            int r1 = r0.pos
            int r1 = r1 - r14
            r0.pos = r1
            char r1 = (char) r2
            boolean r1 = r0.isLiteral(r1)
            if (r1 == 0) goto L166
            r1 = 14
            r0.peeked = r1
            return r1
        L166:
            java.io.IOException r1 = r0.syntaxError(r4)
            throw r1
        L16b:
            if (r3 == r15) goto L171
            r1 = 2
            r0.peeked = r1
            return r1
        L171:
            java.io.IOException r1 = r0.syntaxError(r4)
            throw r1
        L176:
            r16.checkLenient()
            r1 = 12
            r0.peeked = r1
            return r1
        L17e:
            r1 = 13
            r0.peeked = r1
            return r1
    }

    public void endArray() throws java.io.IOException {
            r4 = this;
            int r0 = r4.peeked
            if (r0 != 0) goto L8
            int r0 = r4.doPeek()
        L8:
            r1 = 4
            if (r0 != r1) goto L21
            int r1 = r4.stackSize
            int r1 = r1 + (-1)
            r4.stackSize = r1
            int[] r1 = r4.pathIndices
            int r2 = r4.stackSize
            int r2 = r2 + (-1)
            r3 = r1[r2]
            int r3 = r3 + 1
            r1[r2] = r3
            r1 = 0
            r4.peeked = r1
            return
        L21:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected END_ARRAY but was "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r4.peek()
            r2.append(r3)
            java.lang.String r3 = r4.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public void endObject() throws java.io.IOException {
            r4 = this;
            int r0 = r4.peeked
            if (r0 != 0) goto L8
            int r0 = r4.doPeek()
        L8:
            r1 = 2
            if (r0 != r1) goto L26
            int r1 = r4.stackSize
            int r1 = r1 + (-1)
            r4.stackSize = r1
            java.lang.String[] r1 = r4.pathNames
            int r2 = r4.stackSize
            r3 = 0
            r1[r2] = r3
            int[] r1 = r4.pathIndices
            int r2 = r2 + (-1)
            r3 = r1[r2]
            int r3 = r3 + 1
            r1[r2] = r3
            r1 = 0
            r4.peeked = r1
            return
        L26:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected END_OBJECT but was "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r4.peek()
            r2.append(r3)
            java.lang.String r3 = r4.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public java.lang.String getPath() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 36
            java.lang.StringBuilder r0 = r0.append(r1)
            r1 = 0
            int r2 = r5.stackSize
        Le:
            if (r1 >= r2) goto L4a
            int[] r3 = r5.stack
            r3 = r3[r1]
            r4 = 1
            if (r3 == r4) goto L35
            r4 = 2
            if (r3 == r4) goto L35
            r4 = 3
            if (r3 == r4) goto L24
            r4 = 4
            if (r3 == r4) goto L24
            r4 = 5
            if (r3 == r4) goto L24
            goto L47
        L24:
            r3 = 46
            r0.append(r3)
            java.lang.String[] r3 = r5.pathNames
            r4 = r3[r1]
            if (r4 == 0) goto L47
            r3 = r3[r1]
            r0.append(r3)
            goto L47
        L35:
            r3 = 91
            r0.append(r3)
            int[] r3 = r5.pathIndices
            r3 = r3[r1]
            r0.append(r3)
            r3 = 93
            r0.append(r3)
        L47:
            int r1 = r1 + 1
            goto Le
        L4a:
            java.lang.String r1 = r0.toString()
            return r1
    }

    public boolean hasNext() throws java.io.IOException {
            r2 = this;
            int r0 = r2.peeked
            if (r0 != 0) goto L8
            int r0 = r2.doPeek()
        L8:
            r1 = 2
            if (r0 == r1) goto L10
            r1 = 4
            if (r0 == r1) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }

    public final boolean isLenient() {
            r1 = this;
            boolean r0 = r1.lenient
            return r0
    }

    java.lang.String locationString() {
            r4 = this;
            int r0 = r4.lineNumber
            int r0 = r0 + 1
            int r1 = r4.pos
            int r2 = r4.lineStart
            int r1 = r1 - r2
            int r1 = r1 + 1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = " at line "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = " column "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = " path "
            r2.append(r3)
            java.lang.String r3 = r4.getPath()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            return r2
    }

    public boolean nextBoolean() throws java.io.IOException {
            r6 = this;
            int r0 = r6.peeked
            if (r0 != 0) goto L8
            int r0 = r6.doPeek()
        L8:
            r1 = 5
            r2 = 0
            r3 = 1
            if (r0 != r1) goto L1a
            r6.peeked = r2
            int[] r1 = r6.pathIndices
            int r2 = r6.stackSize
            int r2 = r2 - r3
            r4 = r1[r2]
            int r4 = r4 + r3
            r1[r2] = r4
            return r3
        L1a:
            r1 = 6
            if (r0 != r1) goto L2a
            r6.peeked = r2
            int[] r1 = r6.pathIndices
            int r4 = r6.stackSize
            int r4 = r4 - r3
            r5 = r1[r4]
            int r5 = r5 + r3
            r1[r4] = r5
            return r2
        L2a:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected a boolean but was "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r6.peek()
            r2.append(r3)
            java.lang.String r3 = r6.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public double nextDouble() throws java.io.IOException {
            r7 = this;
            int r0 = r7.peeked
            if (r0 != 0) goto L8
            int r0 = r7.doPeek()
        L8:
            r1 = 15
            r2 = 0
            if (r0 != r1) goto L1f
            r7.peeked = r2
            int[] r1 = r7.pathIndices
            int r2 = r7.stackSize
            int r2 = r2 + (-1)
            r3 = r1[r2]
            int r3 = r3 + 1
            r1[r2] = r3
            long r1 = r7.peekedLong
            double r1 = (double) r1
            return r1
        L1f:
            r1 = 16
            r3 = 11
            if (r0 != r1) goto L3a
            java.lang.String r1 = new java.lang.String
            char[] r4 = r7.buffer
            int r5 = r7.pos
            int r6 = r7.peekedNumberLength
            r1.<init>(r4, r5, r6)
            r7.peekedString = r1
            int r1 = r7.pos
            int r4 = r7.peekedNumberLength
            int r1 = r1 + r4
            r7.pos = r1
            goto L80
        L3a:
            r1 = 8
            if (r0 == r1) goto L73
            r4 = 9
            if (r0 != r4) goto L43
            goto L73
        L43:
            r1 = 10
            if (r0 != r1) goto L4e
            java.lang.String r1 = r7.nextUnquotedValue()
            r7.peekedString = r1
            goto L80
        L4e:
            if (r0 != r3) goto L51
            goto L80
        L51:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected a double but was "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r7.peek()
            r2.append(r3)
            java.lang.String r3 = r7.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L73:
            if (r0 != r1) goto L78
            r1 = 39
            goto L7a
        L78:
            r1 = 34
        L7a:
            java.lang.String r1 = r7.nextQuotedValue(r1)
            r7.peekedString = r1
        L80:
            r7.peeked = r3
            java.lang.String r1 = r7.peekedString
            double r3 = java.lang.Double.parseDouble(r1)
            boolean r1 = r7.lenient
            if (r1 != 0) goto Lb7
            boolean r1 = java.lang.Double.isNaN(r3)
            if (r1 != 0) goto L99
            boolean r1 = java.lang.Double.isInfinite(r3)
            if (r1 != 0) goto L99
            goto Lb7
        L99:
            com.google.gson.stream.MalformedJsonException r1 = new com.google.gson.stream.MalformedJsonException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "JSON forbids NaN and infinities: "
            r2.append(r5)
            r2.append(r3)
            java.lang.String r5 = r7.locationString()
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        Lb7:
            r1 = 0
            r7.peekedString = r1
            r7.peeked = r2
            int[] r1 = r7.pathIndices
            int r2 = r7.stackSize
            int r2 = r2 + (-1)
            r5 = r1[r2]
            int r5 = r5 + 1
            r1[r2] = r5
            return r3
    }

    public int nextInt() throws java.io.IOException {
            r9 = this;
            int r0 = r9.peeked
            if (r0 != 0) goto L8
            int r0 = r9.doPeek()
        L8:
            r1 = 15
            java.lang.String r2 = "Expected an int but was "
            r3 = 0
            if (r0 != r1) goto L44
            long r4 = r9.peekedLong
            int r1 = (int) r4
            long r6 = (long) r1
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 != 0) goto L26
            r9.peeked = r3
            int[] r2 = r9.pathIndices
            int r3 = r9.stackSize
            int r3 = r3 + (-1)
            r4 = r2[r3]
            int r4 = r4 + 1
            r2[r3] = r4
            return r1
        L26:
            java.lang.NumberFormatException r3 = new java.lang.NumberFormatException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            long r5 = r9.peekedLong
            r4.append(r5)
            java.lang.String r2 = r9.locationString()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
        L44:
            r1 = 16
            if (r0 != r1) goto L5d
            java.lang.String r1 = new java.lang.String
            char[] r4 = r9.buffer
            int r5 = r9.pos
            int r6 = r9.peekedNumberLength
            r1.<init>(r4, r5, r6)
            r9.peekedString = r1
            int r1 = r9.pos
            int r4 = r9.peekedNumberLength
            int r1 = r1 + r4
            r9.pos = r1
            goto Lb7
        L5d:
            r1 = 10
            r4 = 8
            if (r0 == r4) goto L8a
            r5 = 9
            if (r0 == r5) goto L8a
            if (r0 != r1) goto L6a
            goto L8a
        L6a:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            com.google.gson.stream.JsonToken r2 = r9.peek()
            r3.append(r2)
            java.lang.String r2 = r9.locationString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.<init>(r2)
            throw r1
        L8a:
            if (r0 != r1) goto L93
            java.lang.String r1 = r9.nextUnquotedValue()
            r9.peekedString = r1
            goto La0
        L93:
            if (r0 != r4) goto L98
            r1 = 39
            goto L9a
        L98:
            r1 = 34
        L9a:
            java.lang.String r1 = r9.nextQuotedValue(r1)
            r9.peekedString = r1
        La0:
            java.lang.String r1 = r9.peekedString     // Catch: java.lang.NumberFormatException -> Lb5
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.NumberFormatException -> Lb5
            r9.peeked = r3     // Catch: java.lang.NumberFormatException -> Lb5
            int[] r4 = r9.pathIndices     // Catch: java.lang.NumberFormatException -> Lb5
            int r5 = r9.stackSize     // Catch: java.lang.NumberFormatException -> Lb5
            int r5 = r5 + (-1)
            r6 = r4[r5]     // Catch: java.lang.NumberFormatException -> Lb5
            int r6 = r6 + 1
            r4[r5] = r6     // Catch: java.lang.NumberFormatException -> Lb5
            return r1
        Lb5:
            r1 = move-exception
        Lb7:
            r1 = 11
            r9.peeked = r1
            java.lang.String r1 = r9.peekedString
            double r4 = java.lang.Double.parseDouble(r1)
            int r1 = (int) r4
            double r6 = (double) r1
            int r8 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r8 != 0) goto Ld9
            r2 = 0
            r9.peekedString = r2
            r9.peeked = r3
            int[] r2 = r9.pathIndices
            int r3 = r9.stackSize
            int r3 = r3 + (-1)
            r6 = r2[r3]
            int r6 = r6 + 1
            r2[r3] = r6
            return r1
        Ld9:
            java.lang.NumberFormatException r3 = new java.lang.NumberFormatException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r2)
            java.lang.String r2 = r9.peekedString
            r6.append(r2)
            java.lang.String r2 = r9.locationString()
            r6.append(r2)
            java.lang.String r2 = r6.toString()
            r3.<init>(r2)
            throw r3
    }

    public long nextLong() throws java.io.IOException {
            r10 = this;
            int r0 = r10.peeked
            if (r0 != 0) goto L8
            int r0 = r10.doPeek()
        L8:
            r1 = 15
            r2 = 0
            if (r0 != r1) goto L1e
            r10.peeked = r2
            int[] r1 = r10.pathIndices
            int r2 = r10.stackSize
            int r2 = r2 + (-1)
            r3 = r1[r2]
            int r3 = r3 + 1
            r1[r2] = r3
            long r1 = r10.peekedLong
            return r1
        L1e:
            r1 = 16
            java.lang.String r3 = "Expected a long but was "
            if (r0 != r1) goto L39
            java.lang.String r1 = new java.lang.String
            char[] r4 = r10.buffer
            int r5 = r10.pos
            int r6 = r10.peekedNumberLength
            r1.<init>(r4, r5, r6)
            r10.peekedString = r1
            int r1 = r10.pos
            int r4 = r10.peekedNumberLength
            int r1 = r1 + r4
            r10.pos = r1
            goto L93
        L39:
            r1 = 10
            r4 = 8
            if (r0 == r4) goto L66
            r5 = 9
            if (r0 == r5) goto L66
            if (r0 != r1) goto L46
            goto L66
        L46:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r10.peek()
            r2.append(r3)
            java.lang.String r3 = r10.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L66:
            if (r0 != r1) goto L6f
            java.lang.String r1 = r10.nextUnquotedValue()
            r10.peekedString = r1
            goto L7c
        L6f:
            if (r0 != r4) goto L74
            r1 = 39
            goto L76
        L74:
            r1 = 34
        L76:
            java.lang.String r1 = r10.nextQuotedValue(r1)
            r10.peekedString = r1
        L7c:
            java.lang.String r1 = r10.peekedString     // Catch: java.lang.NumberFormatException -> L91
            long r4 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L91
            r10.peeked = r2     // Catch: java.lang.NumberFormatException -> L91
            int[] r1 = r10.pathIndices     // Catch: java.lang.NumberFormatException -> L91
            int r6 = r10.stackSize     // Catch: java.lang.NumberFormatException -> L91
            int r6 = r6 + (-1)
            r7 = r1[r6]     // Catch: java.lang.NumberFormatException -> L91
            int r7 = r7 + 1
            r1[r6] = r7     // Catch: java.lang.NumberFormatException -> L91
            return r4
        L91:
            r1 = move-exception
        L93:
            r1 = 11
            r10.peeked = r1
            java.lang.String r1 = r10.peekedString
            double r4 = java.lang.Double.parseDouble(r1)
            long r6 = (long) r4
            double r8 = (double) r6
            int r1 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r1 != 0) goto Lb5
            r1 = 0
            r10.peekedString = r1
            r10.peeked = r2
            int[] r1 = r10.pathIndices
            int r2 = r10.stackSize
            int r2 = r2 + (-1)
            r3 = r1[r2]
            int r3 = r3 + 1
            r1[r2] = r3
            return r6
        Lb5:
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r3 = r10.peekedString
            r2.append(r3)
            java.lang.String r3 = r10.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public java.lang.String nextName() throws java.io.IOException {
            r4 = this;
            int r0 = r4.peeked
            if (r0 != 0) goto L8
            int r0 = r4.doPeek()
        L8:
            r1 = 14
            if (r0 != r1) goto L11
            java.lang.String r1 = r4.nextUnquotedValue()
            goto L26
        L11:
            r1 = 12
            if (r0 != r1) goto L1c
            r1 = 39
            java.lang.String r1 = r4.nextQuotedValue(r1)
            goto L26
        L1c:
            r1 = 13
            if (r0 != r1) goto L32
            r1 = 34
            java.lang.String r1 = r4.nextQuotedValue(r1)
        L26:
            r2 = 0
            r4.peeked = r2
            java.lang.String[] r2 = r4.pathNames
            int r3 = r4.stackSize
            int r3 = r3 + (-1)
            r2[r3] = r1
            return r1
        L32:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected a name but was "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r4.peek()
            r2.append(r3)
            java.lang.String r3 = r4.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public void nextNull() throws java.io.IOException {
            r4 = this;
            int r0 = r4.peeked
            if (r0 != 0) goto L8
            int r0 = r4.doPeek()
        L8:
            r1 = 7
            if (r0 != r1) goto L1b
            r1 = 0
            r4.peeked = r1
            int[] r1 = r4.pathIndices
            int r2 = r4.stackSize
            int r2 = r2 + (-1)
            r3 = r1[r2]
            int r3 = r3 + 1
            r1[r2] = r3
            return
        L1b:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected null but was "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r4.peek()
            r2.append(r3)
            java.lang.String r3 = r4.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public java.lang.String nextString() throws java.io.IOException {
            r5 = this;
            int r0 = r5.peeked
            if (r0 != 0) goto L8
            int r0 = r5.doPeek()
        L8:
            r1 = 10
            if (r0 != r1) goto L11
            java.lang.String r1 = r5.nextUnquotedValue()
            goto L52
        L11:
            r1 = 8
            if (r0 != r1) goto L1c
            r1 = 39
            java.lang.String r1 = r5.nextQuotedValue(r1)
            goto L52
        L1c:
            r1 = 9
            if (r0 != r1) goto L27
            r1 = 34
            java.lang.String r1 = r5.nextQuotedValue(r1)
            goto L52
        L27:
            r1 = 11
            if (r0 != r1) goto L31
            java.lang.String r1 = r5.peekedString
            r2 = 0
            r5.peekedString = r2
            goto L52
        L31:
            r1 = 15
            if (r0 != r1) goto L3c
            long r1 = r5.peekedLong
            java.lang.String r1 = java.lang.Long.toString(r1)
            goto L52
        L3c:
            r1 = 16
            if (r0 != r1) goto L62
            java.lang.String r1 = new java.lang.String
            char[] r2 = r5.buffer
            int r3 = r5.pos
            int r4 = r5.peekedNumberLength
            r1.<init>(r2, r3, r4)
            int r2 = r5.pos
            int r3 = r5.peekedNumberLength
            int r2 = r2 + r3
            r5.pos = r2
        L52:
            r2 = 0
            r5.peeked = r2
            int[] r2 = r5.pathIndices
            int r3 = r5.stackSize
            int r3 = r3 + (-1)
            r4 = r2[r3]
            int r4 = r4 + 1
            r2[r3] = r4
            return r1
        L62:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected a string but was "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = r5.peek()
            r2.append(r3)
            java.lang.String r3 = r5.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public com.google.gson.stream.JsonToken peek() throws java.io.IOException {
            r2 = this;
            int r0 = r2.peeked
            if (r0 != 0) goto L8
            int r0 = r2.doPeek()
        L8:
            switch(r0) {
                case 1: goto L2c;
                case 2: goto L29;
                case 3: goto L26;
                case 4: goto L23;
                case 5: goto L20;
                case 6: goto L20;
                case 7: goto L1d;
                case 8: goto L1a;
                case 9: goto L1a;
                case 10: goto L1a;
                case 11: goto L1a;
                case 12: goto L17;
                case 13: goto L17;
                case 14: goto L17;
                case 15: goto L14;
                case 16: goto L14;
                case 17: goto L11;
                default: goto Lb;
            }
        Lb:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>()
            throw r1
        L11:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_DOCUMENT
            return r1
        L14:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NUMBER
            return r1
        L17:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NAME
            return r1
        L1a:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.STRING
            return r1
        L1d:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL
            return r1
        L20:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BOOLEAN
            return r1
        L23:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_ARRAY
            return r1
        L26:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BEGIN_ARRAY
            return r1
        L29:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_OBJECT
            return r1
        L2c:
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BEGIN_OBJECT
            return r1
    }

    public final void setLenient(boolean r1) {
            r0 = this;
            r0.lenient = r1
            return
    }

    public void skipValue() throws java.io.IOException {
            r6 = this;
            r0 = 0
        L1:
            int r1 = r6.peeked
            if (r1 != 0) goto L9
            int r1 = r6.doPeek()
        L9:
            r2 = 3
            r3 = 1
            if (r1 != r2) goto L13
            r6.push(r3)
            int r0 = r0 + 1
            goto L67
        L13:
            if (r1 != r3) goto L1b
            r6.push(r2)
            int r0 = r0 + 1
            goto L67
        L1b:
            r2 = 4
            if (r1 != r2) goto L26
            int r2 = r6.stackSize
            int r2 = r2 - r3
            r6.stackSize = r2
            int r0 = r0 + (-1)
            goto L67
        L26:
            r2 = 2
            if (r1 != r2) goto L31
            int r2 = r6.stackSize
            int r2 = r2 - r3
            r6.stackSize = r2
            int r0 = r0 + (-1)
            goto L67
        L31:
            r2 = 14
            if (r1 == r2) goto L64
            r2 = 10
            if (r1 != r2) goto L3a
            goto L64
        L3a:
            r2 = 8
            if (r1 == r2) goto L5e
            r2 = 12
            if (r1 != r2) goto L43
            goto L5e
        L43:
            r2 = 9
            if (r1 == r2) goto L58
            r2 = 13
            if (r1 != r2) goto L4c
            goto L58
        L4c:
            r2 = 16
            if (r1 != r2) goto L67
            int r2 = r6.pos
            int r4 = r6.peekedNumberLength
            int r2 = r2 + r4
            r6.pos = r2
            goto L67
        L58:
            r2 = 34
            r6.skipQuotedValue(r2)
            goto L67
        L5e:
            r2 = 39
            r6.skipQuotedValue(r2)
            goto L67
        L64:
            r6.skipUnquotedValue()
        L67:
            r2 = 0
            r6.peeked = r2
            if (r0 != 0) goto L7f
            int[] r1 = r6.pathIndices
            int r2 = r6.stackSize
            int r4 = r2 + (-1)
            r5 = r1[r4]
            int r5 = r5 + r3
            r1[r4] = r5
            java.lang.String[] r1 = r6.pathNames
            int r2 = r2 - r3
            java.lang.String r3 = "null"
            r1[r2] = r3
            return
        L7f:
            goto L1
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = r2.locationString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
