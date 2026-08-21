package org.json;

import java.io.IOException;
import java.io.Writer;

public class JSONWriter {
    private static final int maxdepth = 200;
    private boolean comma;
    protected char mode;
    private final JSONObject[] stack;
    private int top;
    protected Writer writer;

    public JSONWriter(Writer r3) {
        this.comma = false;
        this.mode = 'i';
        this.stack = new JSONObject[200];
        this.top = 0;
        this.writer = r3;
    }

    private JSONWriter append(String r4) throws JSONException {
        if (r4 == null) goto L24;
        char r0 = this.mode;
        if (r0 == 'o') goto L25;
        if (r0 == 'a') goto L25;
        throw new JSONException("Value out of sequence.");
    L25:
    L20:
        e = move-exception;
        throw new JSONException(e);
    L10:
        if (this.comma == true) goto L12;
    L14:
        this.writer.write(r4);     // Catch: IOException -> L20
        if (this.mode != 'o') goto L18;
        this.mode = 'k';
    L18:
        this.comma = true;
        return this;
    L12:
        if (this.mode != 'a') goto L14;
        this.writer.write(44);     // Catch: IOException -> L20
        goto L14
    L24:
        throw new JSONException("Null pointer");
    }

    private JSONWriter end(char r2, char r3) throws JSONException {
        if (this.mode != r2) goto L5;
        pop(r2);
        this.writer.write(r3);     // Catch: IOException -> L14
        this.comma = true;
        return this;
    L14:
        e = move-exception;
        throw new JSONException(e);
    L5:
        if (r2 != 'a') goto L7;
        String r22 = "Misplaced endArray.";
    L9:
        throw new JSONException(r22);
    L7:
        r22 = "Misplaced endObject.";
        goto L9
    }

    private void pop(char r5) throws JSONException {
        int r0 = this.top;
        if (r0 <= 0) goto L21;
        char r2 = 'a';
        if (this.stack[r0 - 1] != null) goto L7;
        char r02 = 'a';
    L8:
        if (r02 != r5) goto L19;
        this.top--;
        int r52 = this.top;
        if (r52 != 0) goto L13;
        r2 = 'd';
    L16:
        this.mode = r2;
        return;
    L13:
        if (this.stack[r52 - 1] == null) goto L16;
        r2 = 'k';
        goto L16
    L19:
        throw new JSONException("Nesting error.");
    L7:
        r02 = 'k';
        goto L8
    L21:
        throw new JSONException("Nesting error.");
    }

    private void push(JSONObject r3) throws JSONException {
        int r0 = this.top;
        if (r0 >= 200) goto L11;
        this.stack[r0] = r3;
        if (r3 != null) goto L7;
        char r32 = 'a';
    L8:
        this.mode = r32;
        this.top++;
        return;
    L7:
        r32 = 'k';
        goto L8
    L11:
        throw new JSONException("Nesting too deep.");
    }

    public JSONWriter array() throws JSONException {
        char r0 = this.mode;
        if (r0 != 'i') goto L5;
    L11:
        push(null);
        append("[");
        this.comma = false;
        return this;
    L5:
        if (r0 == 'o') goto L11;
        if (r0 == 'a') goto L11;
        throw new JSONException("Misplaced array.");
    }

    public JSONWriter endArray() throws JSONException {
        return end('a', ']');
    }

    public JSONWriter endObject() throws JSONException {
        return end('k', '}');
    }

    public JSONWriter key(String r3) throws JSONException {
        if (r3 == null) goto L16;
        if (this.mode != 'k') goto L14;
        this.stack[this.top - 1].putOnce(r3, Boolean.TRUE);     // Catch: IOException -> L10
        if (this.comma == false) goto L8;
        this.writer.write(44);     // Catch: IOException -> L10
    L8:
        this.writer.write(JSONObject.quote(r3));     // Catch: IOException -> L10
        this.writer.write(58);     // Catch: IOException -> L10
        this.comma = false;     // Catch: IOException -> L10
        this.mode = 'o';     // Catch: IOException -> L10
        return this;
    L10:
        e = move-exception;
        throw new JSONException(e);
    L14:
        throw new JSONException("Misplaced key.");
    L16:
        throw new JSONException("Null key.");
    }

    public JSONWriter object() throws JSONException {
        if (this.mode != 'i') goto L5;
        this.mode = 'o';
    L5:
        char r0 = this.mode;
        if (r0 != 'o') goto L8;
    L12:
        append("{");
        push(new JSONObject());
        this.comma = false;
        return this;
    L8:
        if (r0 == 'a') goto L12;
        throw new JSONException("Misplaced object.");
    }

    public JSONWriter value(boolean r1) throws JSONException {
        if (r1 == false) goto L4;
        String r12 = "true";
    L6:
        return append(r12);
    L4:
        r12 = "false";
        goto L6
    }

    public JSONWriter value(double r2) throws JSONException {
        return value(new Double(r2));
    }

    public JSONWriter value(long r1) throws JSONException {
        return append(Long.toString(r1));
    }

    public JSONWriter value(Object r1) throws JSONException {
        return append(JSONObject.valueToString(r1));
    }
}
