package org.json;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.Reader;
import java.io.StringReader;
import kotlin.time.DurationKt;

/* JADX INFO: loaded from: classes4.dex */
public class JSONTokener {
    private long character;
    private boolean eof;
    private long index;
    private long line;
    private char previous;
    private Reader reader;
    private boolean usePrevious;

    public JSONTokener(Reader reader) {
        this.reader = reader.markSupported() ? reader : new BufferedReader(reader);
        this.eof = false;
        this.usePrevious = false;
        this.previous = (char) 0;
        this.index = 0L;
        this.character = 1L;
        this.line = 1L;
    }

    public JSONTokener(InputStream inputStream) throws JSONException {
        this(new InputStreamReader(inputStream));
    }

    public JSONTokener(String s) {
        this(new StringReader(s));
    }

    public void back() throws JSONException {
        if (!this.usePrevious) {
            long j = this.index;
            if (j > 0) {
                this.index = j - 1;
                this.character--;
                this.usePrevious = true;
                this.eof = false;
                return;
            }
        }
        throw new JSONException("Stepping back two steps is not supported");
    }

    public static int dehexchar(char c) {
        if (c >= '0' && c <= '9') {
            return c - '0';
        }
        if (c >= 'A' && c <= 'F') {
            return c - '7';
        }
        if (c >= 'a' && c <= 'f') {
            return c - 'W';
        }
        return -1;
    }

    public boolean end() {
        return this.eof && !this.usePrevious;
    }

    public boolean more() throws JSONException {
        next();
        if (end()) {
            return false;
        }
        back();
        return true;
    }

    public char next() throws JSONException {
        int c;
        if (this.usePrevious) {
            this.usePrevious = false;
            c = this.previous;
        } else {
            try {
                c = this.reader.read();
                if (c <= 0) {
                    this.eof = true;
                    c = 0;
                }
            } catch (IOException exception) {
                throw new JSONException(exception);
            }
        }
        this.index++;
        if (this.previous == '\r') {
            this.line++;
            this.character = c == 10 ? 0L : 1L;
        } else if (c == 10) {
            this.line++;
            this.character = 0L;
        } else {
            this.character++;
        }
        this.previous = (char) c;
        return this.previous;
    }

    public char next(char c) throws JSONException {
        char n = next();
        if (n != c) {
            throw syntaxError("Expected '" + c + "' and instead saw '" + n + "'");
        }
        return n;
    }

    public String next(int n) throws JSONException {
        if (n == 0) {
            return "";
        }
        char[] chars = new char[n];
        for (int pos = 0; pos < n; pos++) {
            chars[pos] = next();
            if (end()) {
                throw syntaxError("Substring bounds error");
            }
        }
        return new String(chars);
    }

    public char nextClean() throws JSONException {
        char c;
        do {
            c = next();
            if (c == 0) {
                break;
            }
        } while (c <= ' ');
        return c;
    }

    /* JADX WARN: Code restructure failed: missing block: B:44:0x0087, code lost:
    
        throw syntaxError("Unterminated string");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.String nextString(char r7) throws org.json.JSONException {
        /*
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            char r1 = r6.next()
            if (r1 == 0) goto L81
            r2 = 10
            if (r1 == r2) goto L81
            r3 = 13
            if (r1 == r3) goto L81
            r4 = 92
            if (r1 == r4) goto L22
            if (r1 != r7) goto L1e
            java.lang.String r2 = r0.toString()
            return r2
        L1e:
            r0.append(r1)
            goto L5
        L22:
            char r1 = r6.next()
            r5 = 34
            if (r1 == r5) goto L7d
            r5 = 39
            if (r1 == r5) goto L7d
            r5 = 47
            if (r1 == r5) goto L7d
            if (r1 == r4) goto L7d
            r4 = 98
            if (r1 == r4) goto L77
            r4 = 102(0x66, float:1.43E-43)
            if (r1 == r4) goto L71
            r4 = 110(0x6e, float:1.54E-43)
            if (r1 == r4) goto L6d
            r2 = 114(0x72, float:1.6E-43)
            if (r1 == r2) goto L69
            r2 = 116(0x74, float:1.63E-43)
            if (r1 == r2) goto L63
            r2 = 117(0x75, float:1.64E-43)
            if (r1 != r2) goto L5c
            r2 = 4
            java.lang.String r2 = r6.next(r2)
            r3 = 16
            int r2 = java.lang.Integer.parseInt(r2, r3)
            char r2 = (char) r2
            r0.append(r2)
            goto L5
        L5c:
            java.lang.String r2 = "Illegal escape."
            org.json.JSONException r2 = r6.syntaxError(r2)
            throw r2
        L63:
            r2 = 9
            r0.append(r2)
            goto L5
        L69:
            r0.append(r3)
            goto L5
        L6d:
            r0.append(r2)
            goto L5
        L71:
            r2 = 12
            r0.append(r2)
            goto L5
        L77:
            r2 = 8
            r0.append(r2)
            goto L5
        L7d:
            r0.append(r1)
            goto L5
        L81:
            java.lang.String r2 = "Unterminated string"
            org.json.JSONException r2 = r6.syntaxError(r2)
            throw r2
        */
        throw new UnsupportedOperationException("Method not decompiled: org.json.JSONTokener.nextString(char):java.lang.String");
    }

    public String nextTo(char delimiter) throws JSONException {
        char c;
        StringBuilder sb = new StringBuilder();
        while (true) {
            c = next();
            if (c == delimiter || c == 0 || c == '\n' || c == '\r') {
                break;
            }
            sb.append(c);
        }
        if (c != 0) {
            back();
        }
        return sb.toString().trim();
    }

    public String nextTo(String delimiters) throws JSONException {
        char c;
        StringBuilder sb = new StringBuilder();
        while (true) {
            c = next();
            if (delimiters.indexOf(c) >= 0 || c == 0 || c == '\n' || c == '\r') {
                break;
            }
            sb.append(c);
        }
        if (c != 0) {
            back();
        }
        return sb.toString().trim();
    }

    public Object nextValue() throws JSONException {
        char c = nextClean();
        if (c == '\"' || c == '\'') {
            return nextString(c);
        }
        if (c == '[') {
            back();
            return new JSONArray(this);
        }
        if (c == '{') {
            back();
            return new JSONObject(this);
        }
        StringBuilder sb = new StringBuilder();
        while (c >= ' ' && ",:]}/\\\"[{;=#".indexOf(c) < 0) {
            sb.append(c);
            c = next();
        }
        back();
        String string = sb.toString().trim();
        if ("".equals(string)) {
            throw syntaxError("Missing value");
        }
        return JSONObject.stringToValue(string);
    }

    public char skipTo(char to) throws JSONException {
        char c;
        try {
            long startIndex = this.index;
            long startCharacter = this.character;
            long startLine = this.line;
            this.reader.mark(DurationKt.NANOS_IN_MILLIS);
            do {
                c = next();
                if (c == 0) {
                    this.reader.reset();
                    this.index = startIndex;
                    this.character = startCharacter;
                    this.line = startLine;
                    return c;
                }
            } while (c != to);
            back();
            return c;
        } catch (IOException exception) {
            throw new JSONException(exception);
        }
    }

    public JSONException syntaxError(String message) {
        return new JSONException(message + toString());
    }

    public String toString() {
        return " at " + this.index + " [character " + this.character + " line " + this.line + "]";
    }
}
