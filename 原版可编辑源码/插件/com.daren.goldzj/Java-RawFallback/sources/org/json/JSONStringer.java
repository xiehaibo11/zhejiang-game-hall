package org.json;

public class JSONStringer extends org.json.JSONWriter {
    public JSONStringer() {
            r1 = this;
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            r1.<init>(r0)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            char r0 = r2.mode
            r1 = 100
            if (r0 != r1) goto Ld
            java.io.Writer r0 = r2.writer
            java.lang.String r0 = r0.toString()
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }
}
