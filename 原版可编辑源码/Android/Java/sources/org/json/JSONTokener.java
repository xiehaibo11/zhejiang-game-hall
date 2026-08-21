package org.json;

import cz.msebera.android.httpclient.message.TokenParser;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.Reader;
import java.io.StringReader;
import kotlin.time.DurationKt;

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
    */
    public String nextString(char quote) throws JSONException {
        StringBuilder sb = new StringBuilder();
        while (true) {
            char c = next();
            if (c == 0 || c == '\n' || c == '\r') {
                break;
            }
            if (c == '\\') {
                char c2 = next();
                if (c2 == '\"' || c2 == '\'' || c2 == '/' || c2 == '\\') {
                    sb.append(c2);
                } else if (c2 == 'b') {
                    sb.append('\b');
                } else if (c2 == 'f') {
                    sb.append('\f');
                } else if (c2 == 'n') {
                    sb.append('\n');
                } else if (c2 == 'r') {
                    sb.append(TokenParser.CR);
                } else if (c2 == 't') {
                    sb.append('\t');
                } else if (c2 == 'u') {
                    sb.append((char) Integer.parseInt(next(4), 16));
                } else {
                    throw syntaxError("Illegal escape.");
                }
            } else {
                if (c == quote) {
                    return sb.toString();
                }
                sb.append(c);
            }
        }
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
