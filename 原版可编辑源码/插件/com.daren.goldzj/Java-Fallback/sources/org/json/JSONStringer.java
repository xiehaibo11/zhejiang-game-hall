package org.json;

import java.io.StringWriter;

public class JSONStringer extends JSONWriter {
    public JSONStringer() {
        super(new StringWriter());
    }

    public String toString() {
        if (this.mode == 'd') goto L7;
        return null;
    L7:
        return this.writer.toString();
    }
}
