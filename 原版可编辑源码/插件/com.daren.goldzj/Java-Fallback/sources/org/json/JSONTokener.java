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

    public JSONTokener(Reader r3) {
        if (r3.markSupported() == true) goto L6;
        r3 = new BufferedReader(r3);
    L6:
        this.reader = r3;
        this.eof = false;
        this.usePrevious = false;
        this.previous = 0;
        this.index = 0;
        this.character = 1;
        this.line = 1;
    }

    public static int dehexchar(char r2) {
        if (r2 < '0') goto L9;
        if (r2 > '9') goto L9;
        return r2 - '0';
    L9:
        if (r2 < 'A') goto L15;
        if (r2 > 'F') goto L15;
        return r2 - '7';
    L15:
        if (r2 >= 'a') goto L17;
        return -1;
    L17:
        if (r2 <= 'f') goto L19;
        return -1;
    L19:
        return r2 - 'W';
    }

    public void back() throws JSONException {
        if (this.usePrevious == true) goto L9;
        long r0 = this.index;
        if (r0 <= 0) goto L9;
        this.index = r0 - 1;
        this.character--;
        this.usePrevious = true;
        this.eof = false;
        return;
    L9:
        throw new JSONException("Stepping back two steps is not supported");
    }

    public boolean end() {
        if (this.eof == true) goto L5;
    L7:
        return false;
    L5:
        if (this.usePrevious == true) goto L7;
        return true;
    }

    public boolean more() throws JSONException {
        next();
        if (end() == false) goto L6;
        return false;
    L6:
        back();
        return true;
    }

    public char next() throws JSONException {
        int r1 = 0;
        if (this.usePrevious == false) goto L23;
        this.usePrevious = false;
        r1 = this.previous;
    L9:
        long r4 = 1;
        this.index++;
        if (this.previous != '\r') goto L15;
        this.line++;
        if (r1 != 10) goto L14;
        r4 = 0;
    L14:
        this.character = r4;
    L18:
        this.previous = (char) r1;
        return this.previous;
    L15:
        if (r1 != 10) goto L17;
        this.line++;
        this.character = 0;
        goto L18
    L17:
        this.character++;
        goto L18
    L23:
        int r0 = this.reader.read();     // Catch: IOException -> L20
        if (r0 > 0) goto L8;
        this.eof = true;
        goto L9
    L8:
        r1 = r0;
    L20:
        e = move-exception;
        throw new JSONException(e);
    }

    public char nextClean() throws JSONException {
    L2:
        char r0 = next();
        if (r0 == 0) goto L6;
        if (r0 <= ' ') goto L2;
    L6:
        return r0;
    }

    public String nextString(char r7) throws JSONException {
        StringBuilder r0 = new StringBuilder();
    L3:
        char r1 = next();
        if (r1 == 0) goto L44;
        if (r1 == '\n') goto L44;
        if (r1 == '\r') goto L44;
        if (r1 != '\\') goto L11;
        char r12 = next();
        if (r12 == '\"') goto L42;
        if (r12 == '\'') goto L42;
        if (r12 == '/') goto L42;
        if (r12 == '\\') goto L42;
        if (r12 != 'b') goto L25;
        r0.append('\b');
        goto L3
    L25:
        if (r12 != 'f') goto L27;
        r0.append('\f');
        goto L3
    L27:
        if (r12 != 'n') goto L29;
        r0.append('\n');
        goto L3
    L29:
        if (r12 != 'r') goto L31;
        r0.append('\r');
        goto L3
    L31:
        if (r12 != 't') goto L33;
        r0.append('\t');
        goto L3
    L33:
        if (r12 != 'u') goto L36;
        r0.append((char) Integer.parseInt(next(4), 16));
        goto L3
    L36:
        throw syntaxError("Illegal escape.");
    L42:
        r0.append(r12);
        goto L3
    L11:
        if (r1 == r7) goto L13;
        r0.append(r1);
        goto L3
    L13:
        return r0.toString();
    L44:
        throw syntaxError("Unterminated string");
    }

    public String nextTo(char r4) throws JSONException {
        StringBuilder r0 = new StringBuilder();
    L3:
        char r1 = next();
        if (r1 == r4) goto L12;
        if (r1 == 0) goto L12;
        if (r1 == '\n') goto L12;
        if (r1 == '\r') goto L12;
        r0.append(r1);
    L12:
        if (r1 == 0) goto L15;
        back();
    L15:
        return r0.toString().trim();
    }

    public Object nextValue() throws JSONException {
        char r0 = nextClean();
        if (r0 == '\"') goto L27;
        if (r0 == '\'') goto L27;
        if (r0 != '[') goto L9;
        back();
        return new JSONArray(this);
    L9:
        if (r0 == '{') goto L22;
        StringBuilder r1 = new StringBuilder();
    L12:
        if (r0 < ' ') goto L16;
        if (",:]}/\\\"[{;=#".indexOf(r0) >= 0) goto L16;
        r1.append(r0);
        r0 = next();
    L16:
        back();
        String r02 = r1.toString().trim();
        if ("".equals(r02) == true) goto L21;
        return JSONObject.stringToValue(r02);
    L21:
        throw syntaxError("Missing value");
    L22:
        back();
        return new JSONObject(this);
    L27:
        return nextString(r0);
    }

    public char skipTo(char r9) throws JSONException {
        long r0 = this.index;     // Catch: IOException -> L10
        long r2 = this.character;     // Catch: IOException -> L10
        long r4 = this.line;     // Catch: IOException -> L10
        this.reader.mark(1000000);     // Catch: IOException -> L10
    L3:
        char r6 = next();     // Catch: IOException -> L10
        if (r6 == 0) goto L5;
        if (r6 != r9) goto L3;
        back();
        return r6;
    L5:
        this.reader.reset();     // Catch: IOException -> L10
        this.index = r0;     // Catch: IOException -> L10
        this.character = r2;     // Catch: IOException -> L10
        this.line = r4;     // Catch: IOException -> L10
        return r6;
    L10:
        e = move-exception;
        throw new JSONException(e);
    }

    public JSONException syntaxError(String r3) {
        return new JSONException(r3 + toString());
    }

    public String toString() {
        return " at " + this.index + " [character " + this.character + " line " + this.line + "]";
    }

    public JSONTokener(InputStream r2) throws JSONException {
        this(new InputStreamReader(r2));
    }

    public JSONTokener(String r2) {
        this(new StringReader(r2));
    }

    public String nextTo(String r4) throws JSONException {
        StringBuilder r0 = new StringBuilder();
    L3:
        char r1 = next();
        if (r4.indexOf(r1) >= 0) goto L12;
        if (r1 == 0) goto L12;
        if (r1 == '\n') goto L12;
        if (r1 == '\r') goto L12;
        r0.append(r1);
    L12:
        if (r1 == 0) goto L15;
        back();
    L15:
        return r0.toString().trim();
    }

    public char next(char r4) throws JSONException {
        char r0 = next();
        if (r0 != r4) goto L6;
        return r0;
    L6:
        throw syntaxError("Expected '" + r4 + "' and instead saw '" + r0 + "'");
    }

    public String next(int r4) throws JSONException {
        if (r4 != 0) goto L5;
        return "";
    L5:
        char[] r0 = new char[r4];
        int r1 = 0;
    L6:
        if (r1 >= r4) goto L13;
        r0[r1] = next();
        if (end() == true) goto L11;
        r1 = r1 + 1;
        goto L6
    L11:
        throw syntaxError("Substring bounds error");
    L13:
        return new String(r0);
    }
}
