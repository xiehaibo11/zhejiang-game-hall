package org.json;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.Reader;
import java.io.StringReader;

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

    public static int dehexchar(char c) {
        if (c >= '0' && c <= '9') {
            return c - '0';
        }
        if (c >= 'A' && c <= 'F') {
            return c - '7';
        }
        if (c < 'a' || c > 'f') {
            return -1;
        }
        return c - 'W';
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
        int i = 0;
        if (this.usePrevious) {
            this.usePrevious = false;
            i = this.previous;
        } else {
            try {
                int i2 = this.reader.read();
                if (i2 <= 0) {
                    this.eof = true;
                } else {
                    i = i2;
                }
            } catch (IOException e) {
                throw new JSONException(e);
            }
        }
        this.index++;
        if (this.previous == '\r') {
            this.line++;
            this.character = i == 10 ? 0L : 1L;
        } else if (i == 10) {
            this.line++;
            this.character = 0L;
        } else {
            this.character++;
        }
        this.previous = (char) i;
        return this.previous;
    }

    public char nextClean() throws JSONException {
        char next;
        do {
            next = next();
            if (next == 0) {
                break;
            }
        } while (next <= ' ');
        return next;
    }

    /* JADX WARN: Code restructure failed: missing block: B:44:0x0087, code lost:
    
        throw syntaxError("Unterminated string");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String nextString(char c) throws JSONException {
        StringBuilder sb = new StringBuilder();
        while (true) {
            char next = next();
            if (next == 0 || next == '\n' || next == '\r') {
                break;
            }
            if (next == '\\') {
                char next2 = next();
                if (next2 == '\"' || next2 == '\'' || next2 == '/' || next2 == '\\') {
                    sb.append(next2);
                } else if (next2 == 'b') {
                    sb.append('\b');
                } else if (next2 == 'f') {
                    sb.append('\f');
                } else if (next2 == 'n') {
                    sb.append('\n');
                } else if (next2 == 'r') {
                    sb.append('\r');
                } else if (next2 == 't') {
                    sb.append('\t');
                } else {
                    if (next2 != 'u') {
                        throw syntaxError("Illegal escape.");
                    }
                    sb.append((char) Integer.parseInt(next(4), 16));
                }
            } else {
                if (next == c) {
                    return sb.toString();
                }
                sb.append(next);
            }
        }
    }

    public String nextTo(char c) throws JSONException {
        char next;
        StringBuilder sb = new StringBuilder();
        while (true) {
            next = next();
            if (next == c || next == 0 || next == '\n' || next == '\r') {
                break;
            }
            sb.append(next);
        }
        if (next != 0) {
            back();
        }
        return sb.toString().trim();
    }

    public Object nextValue() throws JSONException {
        char cNextClean = nextClean();
        if (cNextClean == '\"' || cNextClean == '\'') {
            return nextString(cNextClean);
        }
        if (cNextClean == '[') {
            back();
            return new JSONArray(this);
        }
        if (cNextClean == '{') {
            back();
            return new JSONObject(this);
        }
        StringBuilder sb = new StringBuilder();
        while (cNextClean >= ' ' && ",:]}/\\\"[{;=#".indexOf(cNextClean) < 0) {
            sb.append(cNextClean);
            cNextClean = next();
        }
        back();
        String strTrim = sb.toString().trim();
        if ("".equals(strTrim)) {
            throw syntaxError("Missing value");
        }
        return JSONObject.stringToValue(strTrim);
    }

    public char skipTo(char c) throws JSONException {
        char next;
        try {
            long j = this.index;
            long j2 = this.character;
            long j3 = this.line;
            this.reader.mark(1000000);
            do {
                next = next();
                if (next == 0) {
                    this.reader.reset();
                    this.index = j;
                    this.character = j2;
                    this.line = j3;
                    return next;
                }
            } while (next != c);
            back();
            return next;
        } catch (IOException e) {
            throw new JSONException(e);
        }
    }

    public JSONException syntaxError(String str) {
        return new JSONException(str + toString());
    }

    public String toString() {
        return " at " + this.index + " [character " + this.character + " line " + this.line + "]";
    }

    public JSONTokener(InputStream inputStream) throws JSONException {
        this(new InputStreamReader(inputStream));
    }

    public JSONTokener(String str) {
        this(new StringReader(str));
    }

    public String nextTo(String str) throws JSONException {
        char next;
        StringBuilder sb = new StringBuilder();
        while (true) {
            next = next();
            if (str.indexOf(next) >= 0 || next == 0 || next == '\n' || next == '\r') {
                break;
            }
            sb.append(next);
        }
        if (next != 0) {
            back();
        }
        return sb.toString().trim();
    }

    public char next(char c) throws JSONException {
        char next = next();
        if (next == c) {
            return next;
        }
        throw syntaxError("Expected '" + c + "' and instead saw '" + next + "'");
    }

    public String next(int i) throws JSONException {
        if (i == 0) {
            return "";
        }
        char[] cArr = new char[i];
        for (int i2 = 0; i2 < i; i2++) {
            cArr[i2] = next();
            if (end()) {
                throw syntaxError("Substring bounds error");
            }
        }
        return new String(cArr);
    }
}
