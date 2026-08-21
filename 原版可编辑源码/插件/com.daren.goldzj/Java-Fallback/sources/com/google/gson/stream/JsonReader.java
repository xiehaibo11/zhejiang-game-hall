package com.google.gson.stream;

import com.google.gson.internal.JsonReaderInternalAccess;
import java.io.Closeable;
import java.io.EOFException;
import java.io.IOException;
import java.io.Reader;
import java.util.Arrays;
import java.util.Objects;

public class JsonReader implements Closeable {
    static final int BUFFER_SIZE = 1024;
    private static final long MIN_INCOMPLETE_INTEGER = -922337203685477580L;
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
    private final Reader in;
    private boolean lenient;
    private int limit;
    private int lineNumber;
    private int lineStart;
    private int[] pathIndices;
    private String[] pathNames;
    int peeked;
    private long peekedLong;
    private int peekedNumberLength;
    private String peekedString;
    private int pos;
    private int[] stack;
    private int stackSize;

    public JsonReader(Reader r5) {
        this.lenient = false;
        this.buffer = new char[1024];
        this.pos = 0;
        this.limit = 0;
        this.lineNumber = 0;
        this.lineStart = 0;
        this.peeked = 0;
        this.stack = new int[32];
        this.stackSize = 0;
        int[] r0 = this.stack;
        int r2 = this.stackSize;
        this.stackSize = r2 + 1;
        r0[r2] = 6;
        this.pathNames = new String[32];
        this.pathIndices = new int[32];
        this.in = (Reader) Objects.requireNonNull(r5, "in == null");
    }

    public final void setLenient(boolean r1) {
        this.lenient = r1;
    }

    public final boolean isLenient() {
        return this.lenient;
    }

    public void beginArray() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 3) goto L10;
        push(1);
        this.pathIndices[this.stackSize - 1] = 0;
        this.peeked = 0;
        return;
    L10:
        throw new IllegalStateException("Expected BEGIN_ARRAY but was " + peek() + locationString());
    }

    public void endArray() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 4) goto L10;
        this.stackSize--;
        int[] r02 = this.pathIndices;
        int r1 = this.stackSize - 1;
        r02[r1] = r02[r1] + 1;
        this.peeked = 0;
        return;
    L10:
        throw new IllegalStateException("Expected END_ARRAY but was " + peek() + locationString());
    }

    public void beginObject() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 1) goto L10;
        push(3);
        this.peeked = 0;
        return;
    L10:
        throw new IllegalStateException("Expected BEGIN_OBJECT but was " + peek() + locationString());
    }

    public void endObject() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 2) goto L10;
        this.stackSize--;
        String[] r02 = this.pathNames;
        int r1 = this.stackSize;
        r02[r1] = null;
        int[] r03 = this.pathIndices;
        int r12 = r1 - 1;
        r03[r12] = r03[r12] + 1;
        this.peeked = 0;
        return;
    L10:
        throw new IllegalStateException("Expected END_OBJECT but was " + peek() + locationString());
    }

    public boolean hasNext() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 2) goto L8;
    L12:
        return false;
    L8:
        if (r0 == 4) goto L12;
        if (r0 == 17) goto L12;
        return true;
    }

    public JsonToken peek() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L5;
        r0 = doPeek();
    L5:
        switch(r0) {
            case 1: goto L27;
            case 2: goto L25;
            case 3: goto L23;
            case 4: goto L21;
            case 5: goto L19;
            case 6: goto L19;
            case 7: goto L17;
            case 8: goto L15;
            case 9: goto L15;
            case 10: goto L15;
            case 11: goto L15;
            case 12: goto L13;
            case 13: goto L13;
            case 14: goto L13;
            case 15: goto L11;
            case 16: goto L11;
            case 17: goto L9;
            default: goto L7;
        };
    L7:
        throw new AssertionError();
    L9:
        return JsonToken.END_DOCUMENT;
    L11:
        return JsonToken.NUMBER;
    L13:
        return JsonToken.NAME;
    L15:
        return JsonToken.STRING;
    L17:
        return JsonToken.NULL;
    L19:
        return JsonToken.BOOLEAN;
    L21:
        return JsonToken.END_ARRAY;
    L23:
        return JsonToken.BEGIN_ARRAY;
    L25:
        return JsonToken.END_OBJECT;
    L27:
        return JsonToken.BEGIN_OBJECT;
    }

    int doPeek() throws IOException {
        int[] r0 = this.stack;
        int r1 = this.stackSize;
        int r2 = r0[r1 - 1];
        if (r2 != 1) goto L5;
        r0[r1 - 1] = 2;
    L46:
        int r02 = nextNonWhitespace(true);
        if (r02 == 34) goto L84;
        if (r02 == 39) goto L82;
        if (r02 == 44) goto L75;
        if (r02 == 59) goto L75;
        if (r02 == 91) goto L73;
        if (r02 != 93) goto L55;
        if (r2 != 1) goto L75;
        this.peeked = 4;
        return 4;
    L55:
        if (r02 == 123) goto L68;
        this.pos--;
        int r03 = peekKeyword();
        if (r03 == 0) goto L59;
        return r03;
    L59:
        int r04 = peekNumber();
        if (r04 == 0) goto L63;
        return r04;
    L63:
        if (isLiteral(this.buffer[this.pos]) == false) goto L67;
        checkLenient();
        this.peeked = 10;
        return 10;
    L67:
        throw syntaxError("Expected value");
    L68:
        this.peeked = 1;
        return 1;
    L73:
        this.peeked = 3;
        return 3;
    L75:
        if (r2 == 1) goto L80;
        if (r2 == 2) goto L80;
        throw syntaxError("Unexpected value");
    L80:
        checkLenient();
        this.pos--;
        this.peeked = 7;
        return 7;
    L82:
        checkLenient();
        this.peeked = 8;
        return 8;
    L84:
        this.peeked = 9;
        return 9;
    L5:
        if (r2 != 2) goto L16;
        int r05 = nextNonWhitespace(true);
        if (r05 == 44) goto L46;
        if (r05 == 59) goto L14;
        if (r05 != 93) goto L13;
        this.peeked = 4;
        return 4;
    L13:
        throw syntaxError("Unterminated array");
    L14:
        checkLenient();
        goto L46
    L16:
        if (r2 == 3) goto L88;
        if (r2 == 5) goto L88;
        if (r2 != 4) goto L34;
        r0[r1 - 1] = 5;
        int r06 = nextNonWhitespace(true);
        if (r06 == 58) goto L46;
        if (r06 != 61) goto L32;
        checkLenient();
        if (this.pos >= this.limit) goto L27;
    L28:
        char[] r07 = this.buffer;
        int r12 = this.pos;
        if (r07[r12] != '>') goto L46;
        this.pos = r12 + 1;
        goto L46
    L27:
        if (fillBuffer(1) == false) goto L46;
    L32:
        throw syntaxError("Expected ':'");
    L34:
        if (r2 == 6) goto L36;
        if (r2 == 7) goto L41;
        if (r2 != 8) goto L46;
        throw new IllegalStateException("JsonReader is closed");
    L41:
        if (nextNonWhitespace(false) != (-1)) goto L44;
        this.peeked = 17;
        return 17;
    L44:
        checkLenient();
        this.pos--;
        goto L46
    L36:
        if (this.lenient == false) goto L38;
        consumeNonExecutePrefix();
    L38:
        this.stack[this.stackSize - 1] = 7;
    L88:
        this.stack[this.stackSize - 1] = 4;
        if (r2 != 5) goto L99;
        int r13 = nextNonWhitespace(true);
        if (r13 == 44) goto L99;
        if (r13 == 59) goto L98;
        if (r13 != 125) goto L97;
        this.peeked = 2;
        return 2;
    L97:
        throw syntaxError("Unterminated object");
    L98:
        checkLenient();
    L99:
        int r14 = nextNonWhitespace(true);
        if (r14 == 34) goto L117;
        if (r14 != 39) goto L103;
        checkLenient();
        this.peeked = 12;
        return 12;
    L103:
        if (r14 == 125) goto L110;
        checkLenient();
        this.pos--;
        if (isLiteral((char) r14) == false) goto L109;
        this.peeked = 14;
        return 14;
    L109:
        throw syntaxError("Expected name");
    L110:
        if (r2 == 5) goto L114;
        this.peeked = 2;
        return 2;
    L114:
        throw syntaxError("Expected name");
    L117:
        this.peeked = 13;
        return 13;
    }

    private int peekKeyword() throws IOException {
        char r0 = this.buffer[this.pos];
        if (r0 != 't') goto L5;
    L20:
        int r02 = 5;
        String r2 = "true";
        String r3 = "TRUE";
    L21:
        int r4 = r2.length();
        int r5 = 1;
    L22:
        if (r5 >= r4) goto L35;
        if ((this.pos + r5) >= this.limit) goto L26;
    L28:
        char r6 = this.buffer[this.pos + r5];
        if (r6 == r2.charAt(r5)) goto L33;
        if (r6 == r3.charAt(r5)) goto L33;
        return 0;
    L33:
        r5 = r5 + 1;
        goto L22
    L26:
        if (fillBuffer(r5 + 1) == true) goto L28;
        return 0;
    L35:
        if ((this.pos + r4) < this.limit) goto L39;
        if (fillBuffer(r4 + 1) == true) goto L39;
    L41:
        this.pos += r4;
        this.peeked = r02;
        return r02;
    L39:
        if (isLiteral(this.buffer[this.pos + r4]) == false) goto L41;
        return 0;
    L5:
        if (r0 == 'T') goto L20;
        if (r0 != 'f') goto L10;
    L19:
        r02 = 6;
        r2 = "false";
        r3 = "FALSE";
        goto L21
    L10:
        if (r0 == 'F') goto L19;
        if (r0 != 'n') goto L15;
    L18:
        r02 = 7;
        r2 = "null";
        r3 = "NULL";
        goto L21
    L15:
        if (r0 == 'N') goto L18;
        return 0;
    }

    private int peekNumber() throws IOException {
        char[] r1 = this.buffer;
        int r2 = this.pos;
        int r7 = 0;
        int r8 = this.limit;
        int r3 = 0;
        char r9 = 0;
        boolean r10 = true;
        long r11 = 0;
        boolean r13 = false;
    L4:
        if ((r2 + r3) == r8) goto L6;
    L12:
        char r14 = r1[r2 + r3];
        if (r14 != '+') goto L15;
        r7 = 0;
        if (r9 != 5) goto L102;
    L100:
        r9 = 6;
    L101:
        r3 = r3 + 1;
        goto L4
    L102:
        return 0;
    L15:
        if (r14 != 'E') goto L17;
    L91:
        r7 = 0;
        if (r9 != 2) goto L94;
    L97:
        r9 = 5;
        goto L101
    L94:
        if (r9 == 4) goto L97;
        return 0;
    L17:
        if (r14 == 'e') goto L91;
        if (r14 != '-') goto L21;
        r7 = 0;
        if (r9 != 0) goto L88;
        r9 = 1;
        r13 = true;
        goto L101
    L88:
        if (r9 == 5) goto L100;
        return 0;
    L21:
        if (r14 != '.') goto L23;
        r7 = 0;
        if (r9 != 2) goto L84;
        r9 = 3;
        goto L101
    L84:
        return 0;
    L23:
        if (r14 < '0') goto L55;
        if (r14 > '9') goto L55;
        if (r9 == 1) goto L52;
        if (r9 == 0) goto L52;
        if (r9 == 2) goto L32;
        if (r9 != 3) goto L46;
        r7 = 0;
        r9 = 4;
        goto L101
    L46:
        if (r9 != 5) goto L48;
    L51:
        r7 = 0;
        r9 = 7;
        goto L101
    L48:
        if (r9 == 6) goto L51;
    L50:
        r7 = 0;
        goto L101
    L32:
        if (r11 == 0) goto L33;
        long r4 = (10 * r11) - ((long) (r14 - '0'));
        if (r11 > MIN_INCOMPLETE_INTEGER) goto L42;
        if (r11 == MIN_INCOMPLETE_INTEGER) goto L39;
    L41:
        boolean r72 = false;
    L43:
        r11 = r4;
        r10 = r72 & r10;
        goto L50
    L39:
        if (r4 >= r11) goto L41;
    L42:
        r72 = true;
        goto L43
    L33:
        return 0;
    L52:
        r11 = -(r14 - '0');
        r7 = 0;
        r9 = 2;
    L55:
        if (isLiteral(r14) == true) goto L79;
    L56:
        if (r9 != 2) goto L69;
        if (r10 == false) goto L69;
        if (r11 != Long.MIN_VALUE) goto L62;
        if (r13 == false) goto L69;
    L62:
        if (r11 != 0) goto L64;
        if (r13 == true) goto L69;
    L64:
        if (r13 == true) goto L67;
        r11 = -r11;
    L67:
        this.peekedLong = r11;
        this.pos += r3;
        this.peeked = 15;
        return 15;
    L69:
        if (r9 != 2) goto L71;
    L77:
        this.peekedNumberLength = r3;
        this.peeked = 16;
        return 16;
    L71:
        if (r9 == 4) goto L77;
        if (r9 == 7) goto L77;
        return 0;
    L79:
        return 0;
    L6:
        if (r3 == r1.length) goto L7;
        if (fillBuffer(r3 + 1) == false) goto L56;
        r2 = this.pos;
        r8 = this.limit;
        goto L12
    L7:
        return r7;
    }

    private boolean isLiteral(char r2) throws IOException {
        if (r2 != '\t') goto L5;
        return false;
    L5:
        if (r2 != '\n') goto L7;
        return false;
    L7:
        if (r2 != '\f') goto L9;
        return false;
    L9:
        if (r2 != '\r') goto L11;
        return false;
    L11:
        if (r2 != ' ') goto L13;
        return false;
    L13:
        if (r2 != '#') goto L15;
    L31:
        checkLenient();
        return false;
    L15:
        if (r2 != ',') goto L17;
        return false;
    L17:
        if (r2 == '/') goto L31;
        if (r2 == '=') goto L31;
        if (r2 != '{') goto L23;
        return false;
    L23:
        if (r2 != '}') goto L25;
        return false;
    L25:
        if (r2 != ':') goto L27;
        return false;
    L27:
        if (r2 == ';') goto L31;
        switch(r2) {
            case 91: goto L43;
            case 92: goto L31;
            case 93: goto L43;
            default: goto L29;
        };
    L29:
        return true;
    L43:
        return false;
    }

    public String nextName() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 14) goto L9;
        String r02 = nextUnquotedValue();
    L14:
        this.peeked = 0;
        this.pathNames[this.stackSize - 1] = r02;
        return r02;
    L9:
        if (r0 != 12) goto L12;
        r02 = nextQuotedValue('\'');
        goto L14
    L12:
        if (r0 != 13) goto L17;
        r02 = nextQuotedValue('\"');
        goto L14
    L17:
        throw new IllegalStateException("Expected a name but was " + peek() + locationString());
    }

    public String nextString() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 10) goto L9;
        String r02 = nextUnquotedValue();
    L23:
        this.peeked = 0;
        int[] r1 = this.pathIndices;
        int r2 = this.stackSize - 1;
        r1[r2] = r1[r2] + 1;
        return r02;
    L9:
        if (r0 != 8) goto L12;
        r02 = nextQuotedValue('\'');
        goto L23
    L12:
        if (r0 != 9) goto L15;
        r02 = nextQuotedValue('\"');
        goto L23
    L15:
        if (r0 != 11) goto L18;
        r02 = this.peekedString;
        this.peekedString = null;
        goto L23
    L18:
        if (r0 != 15) goto L21;
        r02 = Long.toString(this.peekedLong);
        goto L23
    L21:
        if (r0 != 16) goto L26;
        r02 = new String(this.buffer, this.pos, this.peekedNumberLength);
        this.pos += this.peekedNumberLength;
        goto L23
    L26:
        throw new IllegalStateException("Expected a string but was " + peek() + locationString());
    }

    public boolean nextBoolean() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 5) goto L10;
        this.peeked = 0;
        int[] r02 = this.pathIndices;
        int r1 = this.stackSize - 1;
        r02[r1] = r02[r1] + 1;
        return true;
    L10:
        if (r0 != 6) goto L14;
        this.peeked = 0;
        int[] r03 = this.pathIndices;
        int r12 = this.stackSize - 1;
        r03[r12] = r03[r12] + 1;
        return false;
    L14:
        throw new IllegalStateException("Expected a boolean but was " + peek() + locationString());
    }

    public void nextNull() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 7) goto L10;
        this.peeked = 0;
        int[] r02 = this.pathIndices;
        int r1 = this.stackSize - 1;
        r02[r1] = r02[r1] + 1;
        return;
    L10:
        throw new IllegalStateException("Expected null but was " + peek() + locationString());
    }

    public double nextDouble() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 15) goto L10;
        this.peeked = 0;
        int[] r02 = this.pathIndices;
        int r1 = this.stackSize - 1;
        r02[r1] = r02[r1] + 1;
        return this.peekedLong;
    L10:
        if (r0 != 16) goto L13;
        this.peekedString = new String(this.buffer, this.pos, this.peekedNumberLength);
        this.pos += this.peekedNumberLength;
    L28:
        this.peeked = 11;
        double r03 = Double.parseDouble(this.peekedString);
        if (this.lenient == false) goto L31;
    L37:
        this.peekedString = null;
        this.peeked = 0;
        int[] r2 = this.pathIndices;
        int r3 = this.stackSize - 1;
        r2[r3] = r2[r3] + 1;
        return r03;
    L31:
        if (Double.isNaN(r03) == true) goto L36;
        if (Double.isInfinite(r03) == false) goto L37;
    L36:
        throw new MalformedJsonException("JSON forbids NaN and infinities: " + r03 + locationString());
    L13:
        if (r0 != 8) goto L15;
    L24:
        if (r0 != 8) goto L26;
        char r04 = '\'';
    L27:
        this.peekedString = nextQuotedValue(r04);
        goto L28
    L26:
        r04 = '\"';
        goto L27
    L15:
        if (r0 == 9) goto L24;
        if (r0 != 10) goto L20;
        this.peekedString = nextUnquotedValue();
        goto L28
    L20:
        if (r0 == 11) goto L28;
        throw new IllegalStateException("Expected a double but was " + peek() + locationString());
    }

    public long nextLong() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 15) goto L10;
        this.peeked = 0;
        int[] r02 = this.pathIndices;
        int r1 = this.stackSize - 1;
        r02[r1] = r02[r1] + 1;
        return this.peekedLong;
    L10:
        if (r0 != 16) goto L13;
        this.peekedString = new String(this.buffer, this.pos, this.peekedNumberLength);
        this.pos += this.peekedNumberLength;
    L28:
        this.peeked = 11;
        double r03 = Double.parseDouble(this.peekedString);
        long r4 = (long) r03;
        if (r4 != r03) goto L33;
        this.peekedString = null;
        this.peeked = 0;
        int[] r04 = this.pathIndices;
        int r12 = this.stackSize - 1;
        r04[r12] = r04[r12] + 1;
        return r4;
    L33:
        throw new NumberFormatException("Expected a long but was " + this.peekedString + locationString());
    L13:
        if (r0 != 8) goto L15;
    L20:
        if (r0 != 10) goto L22;
        this.peekedString = nextUnquotedValue();
    L35:
        long r05 = Long.parseLong(this.peekedString);     // Catch: NumberFormatException -> L34
        this.peeked = 0;     // Catch: NumberFormatException -> L34
        int[] r42 = this.pathIndices;     // Catch: NumberFormatException -> L34
        int r5 = this.stackSize - 1;
        r42[r5] = r42[r5] + 1;     // Catch: NumberFormatException -> L34
        return r05;
    L22:
        if (r0 != 8) goto L24;
        char r06 = '\'';
    L25:
        this.peekedString = nextQuotedValue(r06);
        goto L35
    L24:
        r06 = '\"';
        goto L25
    L15:
        if (r0 == 9) goto L20;
        if (r0 == 10) goto L20;
        throw new IllegalStateException("Expected a long but was " + peek() + locationString());
    }

    private String nextQuotedValue(char r10) throws IOException {
        char[] r0 = this.buffer;
        StringBuilder r1 = null;
    L3:
        int r2 = this.pos;
        int r3 = this.limit;
    L4:
        int r4 = r2;
    L6:
        if (r2 >= r3) goto L25;
        int r7 = r2 + 1;
        char r22 = r0[r2];
        if (r22 == r10) goto L9;
        if (r22 == '\\') goto L17;
        if (r22 != '\n') goto L24;
        this.lineNumber++;
        this.lineStart = r7;
    L24:
        r2 = r7;
        goto L6
    L17:
        this.pos = r7;
        int r72 = (r7 - r4) - 1;
        if (r1 != null) goto L20;
        r1 = new StringBuilder(Math.max((r72 + 1) * 2, 16));
    L20:
        r1.append(r0, r4, r72);
        r1.append(readEscapeCharacter());
        r2 = this.pos;
        r3 = this.limit;
        goto L4
    L9:
        this.pos = r7;
        int r73 = (r7 - r4) - 1;
        if (r1 == null) goto L12;
        r1.append(r0, r4, r73);
        return r1.toString();
    L12:
        return new String(r0, r4, r73);
    L25:
        if (r1 != null) goto L27;
        r1 = new StringBuilder(Math.max((r2 - r4) * 2, 16));
    L27:
        r1.append(r0, r4, r2 - r4);
        this.pos = r2;
        if (fillBuffer(1) == true) goto L3;
        throw syntaxError("Unterminated string");
    }

    private String nextUnquotedValue() throws IOException {
        int r0 = 0;
        StringBuilder r2 = null;
    L3:
        int r1 = 0;
    L4:
        int r3 = this.pos;
        if ((r3 + r1) < this.limit) goto L6;
        if (r1 >= this.buffer.length) goto L41;
        if (fillBuffer(r1 + 1) == true) goto L4;
    L40:
        r0 = r1;
    L45:
        if (r2 != null) goto L47;
        String r12 = new String(this.buffer, this.pos, r0);
    L48:
        this.pos += r0;
        return r12;
    L47:
        r2.append(this.buffer, this.pos, r0);
        r12 = r2.toString();
        goto L48
    L41:
        if (r2 != null) goto L43;
        r2 = new StringBuilder(Math.max(r1, 16));
    L43:
        r2.append(this.buffer, this.pos, r1);
        this.pos += r1;
        if (fillBuffer(1) == true) goto L3;
    L6:
        char r32 = this.buffer[r3 + r1];
        if (r32 == '\t') goto L40;
        if (r32 == '\n') goto L40;
        if (r32 == '\f') goto L40;
        if (r32 == '\r') goto L40;
        if (r32 == ' ') goto L40;
        if (r32 == '#') goto L34;
        if (r32 == ',') goto L40;
        if (r32 == '/') goto L34;
        if (r32 == '=') goto L34;
        if (r32 == '{') goto L40;
        if (r32 == '}') goto L40;
        if (r32 == ':') goto L40;
        if (r32 == ';') goto L34;
        switch(r32) {
            case 91: goto L40;
            case 92: goto L34;
            case 93: goto L40;
            default: goto L33;
        };
    L33:
        r1 = r1 + 1;
    L34:
        checkLenient();
        goto L40
    }

    private void skipQuotedValue(char r7) throws IOException {
        char[] r0 = this.buffer;
    L3:
        int r1 = this.pos;
        int r2 = this.limit;
    L5:
        if (r1 >= r2) goto L17;
        int r4 = r1 + 1;
        char r12 = r0[r1];
        if (r12 == r7) goto L8;
        if (r12 == '\\') goto L12;
        if (r12 != '\n') goto L16;
        this.lineNumber++;
        this.lineStart = r4;
    L16:
        r1 = r4;
        goto L5
    L12:
        this.pos = r4;
        readEscapeCharacter();
        r1 = this.pos;
        r2 = this.limit;
        goto L5
    L8:
        this.pos = r4;
        return;
    L17:
        this.pos = r1;
        if (fillBuffer(1) == true) goto L3;
        throw syntaxError("Unterminated string");
    }

    private void skipUnquotedValue() throws IOException {
    L2:
        int r0 = 0;
    L3:
        int r1 = this.pos;
        if ((r1 + r0) >= this.limit) goto L36;
        char r12 = this.buffer[r1 + r0];
        if (r12 == '\t') goto L34;
        if (r12 == '\n') goto L34;
        if (r12 == '\f') goto L34;
        if (r12 == '\r') goto L34;
        if (r12 == ' ') goto L34;
        if (r12 == '#') goto L33;
        if (r12 == ',') goto L34;
        if (r12 == '/') goto L33;
        if (r12 == '=') goto L33;
        if (r12 == '{') goto L34;
        if (r12 == '}') goto L34;
        if (r12 == ':') goto L34;
        if (r12 == ';') goto L33;
        switch(r12) {
            case 91: goto L34;
            case 92: goto L33;
            case 93: goto L34;
            default: goto L32;
        };
    L32:
        r0 = r0 + 1;
    L33:
        checkLenient();
    L34:
        this.pos += r0;
        return;
    L36:
        this.pos = r1 + r0;
        if (fillBuffer(1) == true) goto L2;
    }

    public int nextInt() throws IOException {
        int r0 = this.peeked;
        if (r0 != 0) goto L6;
        r0 = doPeek();
    L6:
        if (r0 != 15) goto L14;
        long r02 = this.peekedLong;
        int r4 = (int) r02;
        if (r02 != r4) goto L12;
        this.peeked = 0;
        int[] r03 = this.pathIndices;
        int r1 = this.stackSize - 1;
        r03[r1] = r03[r1] + 1;
        return r4;
    L12:
        throw new NumberFormatException("Expected an int but was " + this.peekedLong + locationString());
    L14:
        if (r0 != 16) goto L17;
        this.peekedString = new String(this.buffer, this.pos, this.peekedNumberLength);
        this.pos += this.peekedNumberLength;
    L32:
        this.peeked = 11;
        double r04 = Double.parseDouble(this.peekedString);
        int r42 = (int) r04;
        if (r42 != r04) goto L37;
        this.peekedString = null;
        this.peeked = 0;
        int[] r05 = this.pathIndices;
        int r12 = this.stackSize - 1;
        r05[r12] = r05[r12] + 1;
        return r42;
    L37:
        throw new NumberFormatException("Expected an int but was " + this.peekedString + locationString());
    L17:
        if (r0 != 8) goto L19;
    L24:
        if (r0 != 10) goto L26;
        this.peekedString = nextUnquotedValue();
    L39:
        int r06 = Integer.parseInt(this.peekedString);     // Catch: NumberFormatException -> L38
        this.peeked = 0;     // Catch: NumberFormatException -> L38
        int[] r13 = this.pathIndices;     // Catch: NumberFormatException -> L38
        int r43 = this.stackSize - 1;
        r13[r43] = r13[r43] + 1;     // Catch: NumberFormatException -> L38
        return r06;
    L26:
        if (r0 != 8) goto L28;
        char r07 = '\'';
    L29:
        this.peekedString = nextQuotedValue(r07);
        goto L39
    L28:
        r07 = '\"';
        goto L29
    L19:
        if (r0 == 9) goto L24;
        if (r0 == 10) goto L24;
        throw new IllegalStateException("Expected an int but was " + peek() + locationString());
    }

    @Override
    public void close() throws IOException {
        this.peeked = 0;
        this.stack[0] = 8;
        this.stackSize = 1;
        this.in.close();
    }

    public void skipValue() throws IOException {
        int r1 = 0;
    L3:
        int r2 = this.peeked;
        if (r2 != 0) goto L7;
        r2 = doPeek();
    L7:
        switch(r2) {
            case 1: goto L29;
            case 2: goto L26;
            case 3: goto L25;
            case 4: goto L23;
            case 5: goto L31;
            case 6: goto L31;
            case 7: goto L31;
            case 8: goto L22;
            case 9: goto L21;
            case 10: goto L20;
            case 11: goto L31;
            case 12: goto L17;
            case 13: goto L14;
            case 14: goto L11;
            case 15: goto L31;
            case 16: goto L10;
            case 17: goto L9;
            default: goto L31;
        };
    L10:
        this.pos += this.peekedNumberLength;
        goto L31
    L11:
        skipUnquotedValue();
        if (r1 != 0) goto L31;
        this.pathNames[this.stackSize - 1] = "<skipped>";
        goto L31
    L14:
        skipQuotedValue('\"');
        if (r1 != 0) goto L31;
        this.pathNames[this.stackSize - 1] = "<skipped>";
        goto L31
    L17:
        skipQuotedValue('\'');
        if (r1 != 0) goto L31;
        this.pathNames[this.stackSize - 1] = "<skipped>";
        goto L31
    L20:
        skipUnquotedValue();
        goto L31
    L21:
        skipQuotedValue('\"');
        goto L31
    L22:
        skipQuotedValue('\'');
        goto L31
    L23:
        this.stackSize--;
    L24:
        r1 = r1 - 1;
        goto L31
    L25:
        push(1);
    L30:
        r1 = r1 + 1;
        goto L31
    L26:
        if (r1 != 0) goto L28;
        this.pathNames[this.stackSize - 1] = null;
    L28:
        this.stackSize--;
        goto L24
    L29:
        push(3);
    L31:
        this.peeked = 0;
        if (r1 > 0) goto L3;
        int[] r0 = this.pathIndices;
        int r12 = this.stackSize - 1;
        r0[r12] = r0[r12] + 1;
        return;
    }

    private void push(int r4) {
        int r0 = this.stackSize;
        int[] r1 = this.stack;
        if (r0 != r1.length) goto L5;
        int r02 = r0 * 2;
        this.stack = Arrays.copyOf(r1, r02);
        this.pathIndices = Arrays.copyOf(this.pathIndices, r02);
        this.pathNames = (String[]) Arrays.copyOf(this.pathNames, r02);
    L5:
        int[] r03 = this.stack;
        int r12 = this.stackSize;
        this.stackSize = r12 + 1;
        r03[r12] = r4;
    }

    private boolean fillBuffer(int r7) throws IOException {
        char[] r0 = this.buffer;
        int r1 = this.lineStart;
        int r2 = this.pos;
        this.lineStart = r1 - r2;
        int r12 = this.limit;
        if (r12 == r2) goto L5;
        this.limit = r12 - r2;
        System.arraycopy(r0, r2, r0, 0, this.limit);
    L6:
        this.pos = 0;
    L7:
        Reader r13 = this.in;
        int r22 = this.limit;
        int r14 = r13.read(r0, r22, r0.length - r22);
        if (r14 == (-1)) goto L21;
        this.limit += r14;
        if (this.lineNumber != 0) goto L19;
        int r15 = this.lineStart;
        if (r15 != 0) goto L19;
        if (this.limit <= 0) goto L19;
        if (r0[0] != 65279) goto L19;
        this.pos++;
        this.lineStart = r15 + 1;
        r7 = r7 + 1;
    L19:
        if (this.limit < r7) goto L7;
        return true;
    L21:
        return false;
    L5:
        this.limit = 0;
        goto L6
    }

    private int nextNonWhitespace(boolean r8) throws IOException {
        char[] r0 = this.buffer;
        int r1 = this.pos;
        int r2 = this.limit;
    L4:
        if (r1 != r2) goto L13;
        this.pos = r1;
        if (fillBuffer(1) == false) goto L7;
        r1 = this.pos;
        r2 = this.limit;
        goto L13
    L7:
        if (r8 == true) goto L11;
        return -1;
    L11:
        throw new EOFException("End of input" + locationString());
    L13:
        int r4 = r1 + 1;
        char r12 = r0[r1];
        if (r12 == '\n') goto L15;
        if (r12 == ' ') goto L45;
        if (r12 == '\r') goto L45;
        if (r12 == '\t') goto L45;
        if (r12 == '/') goto L25;
        if (r12 != '#') goto L43;
        this.pos = r4;
        checkLenient();
        skipToEndOfLine();
        r1 = this.pos;
        r2 = this.limit;
        goto L4
    L43:
        this.pos = r4;
        return r12;
    L25:
        this.pos = r4;
        if (r4 != r2) goto L30;
        this.pos--;
        boolean r22 = fillBuffer(2);
        this.pos++;
        if (r22 == true) goto L30;
        return r12;
    L30:
        checkLenient();
        int r23 = this.pos;
        char r3 = r0[r23];
        if (r3 != '*') goto L32;
        this.pos = r23 + 1;
        if (skipTo("*/") == false) goto L39;
        r1 = this.pos + 2;
        r2 = this.limit;
        goto L4
    L39:
        throw syntaxError("Unterminated comment");
    L32:
        if (r3 != '/') goto L33;
        this.pos = r23 + 1;
        skipToEndOfLine();
        r1 = this.pos;
        r2 = this.limit;
        goto L4
    L33:
        return r12;
    L45:
        r1 = r4;
        goto L4
    L15:
        this.lineNumber++;
        this.lineStart = r4;
        goto L45
    }

    private void checkLenient() throws IOException {
        if (this.lenient == false) goto L6;
        return;
    L6:
        throw syntaxError("Use JsonReader.setLenient(true) to accept malformed JSON");
    }

    private void skipToEndOfLine() throws IOException {
    L3:
        if (this.pos >= this.limit) goto L5;
    L6:
        char[] r0 = this.buffer;
        int r1 = this.pos;
        this.pos = r1 + 1;
        char r02 = r0[r1];
        if (r02 == '\n') goto L8;
        if (r02 != '\r') goto L3;
        return;
    L8:
        this.lineNumber++;
        this.lineStart = this.pos;
        return;
    L5:
        if (fillBuffer(1) == true) goto L6;
    }

    private boolean skipTo(String r7) throws IOException {
        int r0 = r7.length();
    L3:
        int r3 = 0;
        if ((this.pos + r0) > this.limit) goto L6;
    L9:
        char[] r1 = this.buffer;
        int r2 = this.pos;
        if (r1[r2] != '\n') goto L12;
        this.lineNumber++;
        this.lineStart = r2 + 1;
    L15:
        this.pos++;
    L12:
        if (r3 >= r0) goto L17;
        if (this.buffer[this.pos + r3] != r7.charAt(r3)) goto L15;
        r3 = r3 + 1;
        goto L12
    L17:
        return true;
    L6:
        if (fillBuffer(r0) == true) goto L9;
        return false;
    }

    public String toString() {
        return getClass().getSimpleName() + locationString();
    }

    String locationString() {
        return " at line " + (this.lineNumber + 1) + " column " + ((this.pos - this.lineStart) + 1) + " path " + getPath();
    }

    private String getPath(boolean r6) {
        StringBuilder r0 = new StringBuilder();
        r0.append('$');
        int r1 = 0;
    L4:
        if (r1 >= this.stackSize) goto L28;
        int r2 = this.stack[r1];
        if (r2 != 1) goto L8;
    L19:
        int r22 = this.pathIndices[r1];
        if (r6 == false) goto L25;
        if (r22 <= 0) goto L25;
        if (r1 != (this.stackSize - 1)) goto L25;
        r22 = r22 - 1;
    L25:
        r0.append('[');
        r0.append(r22);
        r0.append(']');
    L26:
        r1 = r1 + 1;
        goto L4
    L8:
        if (r2 == 2) goto L19;
        if (r2 != 3) goto L12;
    L16:
        r0.append('.');
        String[] r23 = this.pathNames;
        if (r23[r1] == null) goto L26;
        r0.append(r23[r1]);
        goto L26
    L12:
        if (r2 == 4) goto L16;
        if (r2 == 5) goto L16;
    L28:
        return r0.toString();
    }

    public String getPreviousPath() {
        return getPath(true);
    }

    public String getPath() {
        return getPath(false);
    }

    private char readEscapeCharacter() throws IOException {
        if (this.pos == this.limit) goto L5;
    L9:
        char[] r0 = this.buffer;
        int r1 = this.pos;
        this.pos = r1 + 1;
        char r02 = r0[r1];
        if (r02 != '\n') goto L12;
        this.lineNumber++;
        this.lineStart = this.pos;
    L73:
        return r02;
    L12:
        if (r02 == '\"') goto L73;
        if (r02 == '\'') goto L73;
        if (r02 == '/') goto L73;
        if (r02 == '\\') goto L73;
        if (r02 != 'b') goto L22;
        return '\b';
    L22:
        if (r02 != 'f') goto L24;
        return '\f';
    L24:
        if (r02 != 'n') goto L26;
        return '\n';
    L26:
        if (r02 != 'r') goto L28;
        return '\r';
    L28:
        if (r02 != 't') goto L30;
        return '\t';
    L30:
        if (r02 != 'u') goto L62;
        if ((this.pos + 4) > this.limit) goto L34;
    L38:
        char r03 = 0;
        int r2 = this.pos;
        int r5 = r2 + 4;
    L39:
        if (r2 >= r5) goto L59;
        char r6 = this.buffer[r2];
        char r04 = (char) (r03 << 4);
        if (r6 < '0') goto L47;
        if (r6 > '9') goto L47;
        int r62 = r6 - '0';
    L45:
        r03 = (char) (r04 + r62);
        r2 = r2 + 1;
    L47:
        if (r6 < 'a') goto L52;
        if (r6 > 'f') goto L52;
        int r63 = r6 - 'a';
    L50:
        r62 = r63 + 10;
    L52:
        if (r6 < 'A') goto L58;
        if (r6 > 'F') goto L58;
        r63 = r6 - 'A';
    L58:
        throw new NumberFormatException("\\u" + new String(this.buffer, this.pos, 4));
    L59:
        this.pos += 4;
        return r03;
    L34:
        if (fillBuffer(4) == true) goto L38;
        throw syntaxError("Unterminated escape sequence");
    L62:
        throw syntaxError("Invalid escape sequence");
    L5:
        if (fillBuffer(1) == true) goto L9;
        throw syntaxError("Unterminated escape sequence");
    }

    private IOException syntaxError(String r3) throws IOException {
        throw new MalformedJsonException(r3 + locationString());
    }

    private void consumeNonExecutePrefix() throws IOException {
        nextNonWhitespace(true);
        this.pos--;
        if ((this.pos + 5) > this.limit) goto L5;
    L7:
        int r0 = this.pos;
        char[] r2 = this.buffer;
        if (r2[r0] == ')') goto L10;
        return;
    L10:
        if (r2[r0 + 1] == ']') goto L12;
        return;
    L12:
        if (r2[r0 + 2] == '}') goto L14;
        return;
    L14:
        if (r2[r0 + 3] == '\'') goto L16;
        return;
    L16:
        if (r2[r0 + 4] != '\n') goto L24;
        this.pos = r0 + 5;
        return;
    L24:
        return;
    L5:
        if (fillBuffer(5) == true) goto L7;
    }

    static {
        JsonReaderInternalAccess.INSTANCE = new 1();
    }
}
