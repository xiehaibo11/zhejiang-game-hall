package org.json;

public class JSONWriter {
    private static final int maxdepth = 200;
    private boolean comma;
    protected char mode;
    private final org.json.JSONObject[] stack;
    private int top;
    protected java.io.Writer writer;

    public JSONWriter(java.io.Writer r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.comma = r0
            r1 = 105(0x69, float:1.47E-43)
            r2.mode = r1
            r1 = 200(0xc8, float:2.8E-43)
            org.json.JSONObject[] r1 = new org.json.JSONObject[r1]
            r2.stack = r1
            r2.top = r0
            r2.writer = r3
            return
    }

    private org.json.JSONWriter append(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            if (r4 == 0) goto L3d
            char r0 = r3.mode
            r1 = 97
            r2 = 111(0x6f, float:1.56E-43)
            if (r0 == r2) goto L15
            if (r0 != r1) goto Ld
            goto L15
        Ld:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Value out of sequence."
            r0.<init>(r1)
            throw r0
        L15:
            boolean r0 = r3.comma     // Catch: java.io.IOException -> L36
            if (r0 == 0) goto L24
            char r0 = r3.mode     // Catch: java.io.IOException -> L36
            if (r0 != r1) goto L24
            java.io.Writer r0 = r3.writer     // Catch: java.io.IOException -> L36
            r1 = 44
            r0.write(r1)     // Catch: java.io.IOException -> L36
        L24:
            java.io.Writer r0 = r3.writer     // Catch: java.io.IOException -> L36
            r0.write(r4)     // Catch: java.io.IOException -> L36
            char r0 = r3.mode
            if (r0 != r2) goto L32
            r0 = 107(0x6b, float:1.5E-43)
            r3.mode = r0
        L32:
            r0 = 1
            r3.comma = r0
            return r3
        L36:
            r0 = move-exception
            org.json.JSONException r1 = new org.json.JSONException
            r1.<init>(r0)
            throw r1
        L3d:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Null pointer"
            r0.<init>(r1)
            throw r0
    }

    private org.json.JSONWriter end(char r3, char r4) throws org.json.JSONException {
            r2 = this;
            char r0 = r2.mode
            if (r0 == r3) goto L13
            org.json.JSONException r0 = new org.json.JSONException
            r1 = 97
            if (r3 != r1) goto Ld
            java.lang.String r1 = "Misplaced endArray."
            goto Lf
        Ld:
            java.lang.String r1 = "Misplaced endObject."
        Lf:
            r0.<init>(r1)
            throw r0
        L13:
            r2.pop(r3)
            java.io.Writer r0 = r2.writer     // Catch: java.io.IOException -> L20
            r0.write(r4)     // Catch: java.io.IOException -> L20
            r0 = 1
            r2.comma = r0
            return r2
        L20:
            r0 = move-exception
            org.json.JSONException r1 = new org.json.JSONException
            r1.<init>(r0)
            throw r1
    }

    private void pop(char r6) throws org.json.JSONException {
            r5 = this;
            int r0 = r5.top
            java.lang.String r1 = "Nesting error."
            if (r0 <= 0) goto L3a
            org.json.JSONObject[] r2 = r5.stack
            int r0 = r0 + (-1)
            r0 = r2[r0]
            r2 = 97
            r3 = 107(0x6b, float:1.5E-43)
            if (r0 != 0) goto L15
            r0 = 97
            goto L17
        L15:
            r0 = 107(0x6b, float:1.5E-43)
        L17:
            if (r0 != r6) goto L34
            int r1 = r5.top
            int r1 = r1 + (-1)
            r5.top = r1
            int r1 = r5.top
            if (r1 != 0) goto L26
            r2 = 100
            goto L31
        L26:
            org.json.JSONObject[] r4 = r5.stack
            int r1 = r1 + (-1)
            r1 = r4[r1]
            if (r1 != 0) goto L2f
            goto L31
        L2f:
            r2 = 107(0x6b, float:1.5E-43)
        L31:
            r5.mode = r2
            return
        L34:
            org.json.JSONException r2 = new org.json.JSONException
            r2.<init>(r1)
            throw r2
        L3a:
            org.json.JSONException r0 = new org.json.JSONException
            r0.<init>(r1)
            throw r0
    }

    private void push(org.json.JSONObject r3) throws org.json.JSONException {
            r2 = this;
            int r0 = r2.top
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 >= r1) goto L1a
            org.json.JSONObject[] r1 = r2.stack
            r1[r0] = r3
            if (r3 != 0) goto Lf
            r0 = 97
            goto L11
        Lf:
            r0 = 107(0x6b, float:1.5E-43)
        L11:
            r2.mode = r0
            int r0 = r2.top
            int r0 = r0 + 1
            r2.top = r0
            return
        L1a:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Nesting too deep."
            r0.<init>(r1)
            throw r0
    }

    public org.json.JSONWriter array() throws org.json.JSONException {
            r2 = this;
            char r0 = r2.mode
            r1 = 105(0x69, float:1.47E-43)
            if (r0 == r1) goto L17
            r1 = 111(0x6f, float:1.56E-43)
            if (r0 == r1) goto L17
            r1 = 97
            if (r0 != r1) goto Lf
            goto L17
        Lf:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Misplaced array."
            r0.<init>(r1)
            throw r0
        L17:
            r0 = 0
            r2.push(r0)
            java.lang.String r0 = "["
            r2.append(r0)
            r0 = 0
            r2.comma = r0
            return r2
    }

    public org.json.JSONWriter endArray() throws org.json.JSONException {
            r2 = this;
            r0 = 97
            r1 = 93
            org.json.JSONWriter r0 = r2.end(r0, r1)
            return r0
    }

    public org.json.JSONWriter endObject() throws org.json.JSONException {
            r2 = this;
            r0 = 107(0x6b, float:1.5E-43)
            r1 = 125(0x7d, float:1.75E-43)
            org.json.JSONWriter r0 = r2.end(r0, r1)
            return r0
    }

    public org.json.JSONWriter key(java.lang.String r3) throws org.json.JSONException {
            r2 = this;
            if (r3 == 0) goto L47
            char r0 = r2.mode
            r1 = 107(0x6b, float:1.5E-43)
            if (r0 != r1) goto L3f
            org.json.JSONObject[] r0 = r2.stack     // Catch: java.io.IOException -> L38
            int r1 = r2.top     // Catch: java.io.IOException -> L38
            int r1 = r1 + (-1)
            r0 = r0[r1]     // Catch: java.io.IOException -> L38
            java.lang.Boolean r1 = java.lang.Boolean.TRUE     // Catch: java.io.IOException -> L38
            r0.putOnce(r3, r1)     // Catch: java.io.IOException -> L38
            boolean r0 = r2.comma     // Catch: java.io.IOException -> L38
            if (r0 == 0) goto L20
            java.io.Writer r0 = r2.writer     // Catch: java.io.IOException -> L38
            r1 = 44
            r0.write(r1)     // Catch: java.io.IOException -> L38
        L20:
            java.io.Writer r0 = r2.writer     // Catch: java.io.IOException -> L38
            java.lang.String r1 = org.json.JSONObject.quote(r3)     // Catch: java.io.IOException -> L38
            r0.write(r1)     // Catch: java.io.IOException -> L38
            java.io.Writer r0 = r2.writer     // Catch: java.io.IOException -> L38
            r1 = 58
            r0.write(r1)     // Catch: java.io.IOException -> L38
            r0 = 0
            r2.comma = r0     // Catch: java.io.IOException -> L38
            r0 = 111(0x6f, float:1.56E-43)
            r2.mode = r0     // Catch: java.io.IOException -> L38
            return r2
        L38:
            r0 = move-exception
            org.json.JSONException r1 = new org.json.JSONException
            r1.<init>(r0)
            throw r1
        L3f:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Misplaced key."
            r0.<init>(r1)
            throw r0
        L47:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Null key."
            r0.<init>(r1)
            throw r0
    }

    public org.json.JSONWriter object() throws org.json.JSONException {
            r3 = this;
            char r0 = r3.mode
            r1 = 111(0x6f, float:1.56E-43)
            r2 = 105(0x69, float:1.47E-43)
            if (r0 != r2) goto La
            r3.mode = r1
        La:
            char r0 = r3.mode
            if (r0 == r1) goto L1b
            r1 = 97
            if (r0 != r1) goto L13
            goto L1b
        L13:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Misplaced object."
            r0.<init>(r1)
            throw r0
        L1b:
            java.lang.String r0 = "{"
            r3.append(r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r3.push(r0)
            r0 = 0
            r3.comma = r0
            return r3
    }

    public org.json.JSONWriter value(double r2) throws org.json.JSONException {
            r1 = this;
            java.lang.Double r0 = new java.lang.Double
            r0.<init>(r2)
            org.json.JSONWriter r0 = r1.value(r0)
            return r0
    }

    public org.json.JSONWriter value(long r2) throws org.json.JSONException {
            r1 = this;
            java.lang.String r0 = java.lang.Long.toString(r2)
            org.json.JSONWriter r0 = r1.append(r0)
            return r0
    }

    public org.json.JSONWriter value(java.lang.Object r2) throws org.json.JSONException {
            r1 = this;
            java.lang.String r0 = org.json.JSONObject.valueToString(r2)
            org.json.JSONWriter r0 = r1.append(r0)
            return r0
    }

    public org.json.JSONWriter value(boolean r2) throws org.json.JSONException {
            r1 = this;
            if (r2 == 0) goto L5
            java.lang.String r0 = "true"
            goto L7
        L5:
            java.lang.String r0 = "false"
        L7:
            org.json.JSONWriter r0 = r1.append(r0)
            return r0
    }
}
