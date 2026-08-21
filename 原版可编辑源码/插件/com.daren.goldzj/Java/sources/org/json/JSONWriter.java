package org.json;

import java.io.IOException;
import java.io.Writer;

public class JSONWriter {
    private static final int maxdepth = 200;
    private boolean comma = false;
    protected char mode = 'i';
    private final JSONObject[] stack = new JSONObject[200];
    private int top = 0;
    protected Writer writer;

    public JSONWriter(Writer writer) {
        this.writer = writer;
    }

    private JSONWriter append(String str) throws JSONException {
        if (str == null) {
            throw new JSONException("Null pointer");
        }
        char c = this.mode;
        if (c != 'o' && c != 'a') {
            throw new JSONException("Value out of sequence.");
        }
        try {
            if (this.comma && this.mode == 'a') {
                this.writer.write(44);
            }
            this.writer.write(str);
            if (this.mode == 'o') {
                this.mode = 'k';
            }
            this.comma = true;
            return this;
        } catch (IOException e) {
            throw new JSONException(e);
        }
    }

    private JSONWriter end(char c, char c2) throws JSONException {
        if (this.mode != c) {
            throw new JSONException(c == 'a' ? "Misplaced endArray." : "Misplaced endObject.");
        }
        pop(c);
        try {
            this.writer.write(c2);
            this.comma = true;
            return this;
        } catch (IOException e) {
            throw new JSONException(e);
        }
    }

    private void pop(char c) throws JSONException {
        int i = this.top;
        if (i <= 0) {
            throw new JSONException("Nesting error.");
        }
        char c2 = 'a';
        if ((this.stack[i + (-1)] == null ? 'a' : 'k') != c) {
            throw new JSONException("Nesting error.");
        }
        this.top--;
        int i2 = this.top;
        if (i2 == 0) {
            c2 = 'd';
        } else if (this.stack[i2 - 1] != null) {
            c2 = 'k';
        }
        this.mode = c2;
    }

    private void push(JSONObject jSONObject) throws JSONException {
        int i = this.top;
        if (i >= 200) {
            throw new JSONException("Nesting too deep.");
        }
        this.stack[i] = jSONObject;
        this.mode = jSONObject == null ? 'a' : 'k';
        this.top++;
    }

    public JSONWriter array() throws JSONException {
        char c = this.mode;
        if (c != 'i' && c != 'o' && c != 'a') {
            throw new JSONException("Misplaced array.");
        }
        push(null);
        append("[");
        this.comma = false;
        return this;
    }

    public JSONWriter endArray() throws JSONException {
        return end('a', ']');
    }

    public JSONWriter endObject() throws JSONException {
        return end('k', '}');
    }

    public JSONWriter key(String str) throws JSONException {
        if (str == null) {
            throw new JSONException("Null key.");
        }
        if (this.mode != 'k') {
            throw new JSONException("Misplaced key.");
        }
        try {
            this.stack[this.top - 1].putOnce(str, Boolean.TRUE);
            if (this.comma) {
                this.writer.write(44);
            }
            this.writer.write(JSONObject.quote(str));
            this.writer.write(58);
            this.comma = false;
            this.mode = 'o';
            return this;
        } catch (IOException e) {
            throw new JSONException(e);
        }
    }

    public JSONWriter object() throws JSONException {
        if (this.mode == 'i') {
            this.mode = 'o';
        }
        char c = this.mode;
        if (c != 'o' && c != 'a') {
            throw new JSONException("Misplaced object.");
        }
        append("{");
        push(new JSONObject());
        this.comma = false;
        return this;
    }

    public JSONWriter value(boolean z) throws JSONException {
        return append(z ? "true" : "false");
    }

    public JSONWriter value(double d) throws JSONException {
        return value(new Double(d));
    }

    public JSONWriter value(long j) throws JSONException {
        return append(Long.toString(j));
    }

    public JSONWriter value(Object obj) throws JSONException {
        return append(JSONObject.valueToString(obj));
    }
}
