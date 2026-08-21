package org.json;

public class JSONTokener {
    private long character;
    private boolean eof;
    private long index;
    private long line;
    private char previous;
    private java.io.Reader reader;
    private boolean usePrevious;

    public JSONTokener(java.io.InputStream r2) throws org.json.JSONException {
            r1 = this;
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public JSONTokener(java.io.Reader r3) {
            r2 = this;
            r2.<init>()
            boolean r0 = r3.markSupported()
            if (r0 == 0) goto La
            goto L10
        La:
            java.io.BufferedReader r0 = new java.io.BufferedReader
            r0.<init>(r3)
            r3 = r0
        L10:
            r2.reader = r3
            r3 = 0
            r2.eof = r3
            r2.usePrevious = r3
            r2.previous = r3
            r0 = 0
            r2.index = r0
            r0 = 1
            r2.character = r0
            r2.line = r0
            return
    }

    public JSONTokener(java.lang.String r2) {
            r1 = this;
            java.io.StringReader r0 = new java.io.StringReader
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public static int dehexchar(char r2) {
            r0 = 48
            if (r2 < r0) goto La
            r1 = 57
            if (r2 > r1) goto La
            int r2 = r2 - r0
            return r2
        La:
            r0 = 65
            if (r2 < r0) goto L15
            r0 = 70
            if (r2 > r0) goto L15
            int r2 = r2 + (-55)
            return r2
        L15:
            r0 = 97
            if (r2 < r0) goto L20
            r0 = 102(0x66, float:1.43E-43)
            if (r2 > r0) goto L20
            int r2 = r2 + (-87)
            return r2
        L20:
            r2 = -1
            return r2
    }

    public void back() throws org.json.JSONException {
            r5 = this;
            boolean r0 = r5.usePrevious
            if (r0 != 0) goto L1d
            long r0 = r5.index
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L1d
            r2 = 1
            long r0 = r0 - r2
            r5.index = r0
            long r0 = r5.character
            long r0 = r0 - r2
            r5.character = r0
            r0 = 1
            r5.usePrevious = r0
            r0 = 0
            r5.eof = r0
            return
        L1d:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Stepping back two steps is not supported"
            r0.<init>(r1)
            throw r0
    }

    public boolean end() {
            r1 = this;
            boolean r0 = r1.eof
            if (r0 == 0) goto La
            boolean r0 = r1.usePrevious
            if (r0 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public boolean more() throws org.json.JSONException {
            r1 = this;
            r1.next()
            boolean r0 = r1.end()
            if (r0 == 0) goto Lb
            r0 = 0
            return r0
        Lb:
            r1.back()
            r0 = 1
            return r0
    }

    public char next() throws org.json.JSONException {
            r10 = this;
            boolean r0 = r10.usePrevious
            r1 = 0
            if (r0 == 0) goto La
            r10.usePrevious = r1
            char r1 = r10.previous
            goto L17
        La:
            java.io.Reader r0 = r10.reader     // Catch: java.io.IOException -> L48
            int r0 = r0.read()     // Catch: java.io.IOException -> L48
            if (r0 > 0) goto L16
            r0 = 1
            r10.eof = r0
            goto L17
        L16:
            r1 = r0
        L17:
            long r2 = r10.index
            r4 = 1
            long r2 = r2 + r4
            r10.index = r2
            char r0 = r10.previous
            r2 = 13
            r6 = 0
            r3 = 10
            if (r0 != r2) goto L33
            long r8 = r10.line
            long r8 = r8 + r4
            r10.line = r8
            if (r1 != r3) goto L30
            r4 = r6
        L30:
            r10.character = r4
            goto L42
        L33:
            if (r1 != r3) goto L3d
            long r2 = r10.line
            long r2 = r2 + r4
            r10.line = r2
            r10.character = r6
            goto L42
        L3d:
            long r2 = r10.character
            long r2 = r2 + r4
            r10.character = r2
        L42:
            char r0 = (char) r1
            r10.previous = r0
            char r0 = r10.previous
            return r0
        L48:
            r0 = move-exception
            org.json.JSONException r1 = new org.json.JSONException
            r1.<init>(r0)
            throw r1
    }

    public char next(char r4) throws org.json.JSONException {
            r3 = this;
            char r0 = r3.next()
            if (r0 != r4) goto L7
            return r0
        L7:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected '"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "' and instead saw '"
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = "'"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            org.json.JSONException r4 = r3.syntaxError(r4)
            throw r4
    }

    public java.lang.String next(int r4) throws org.json.JSONException {
            r3 = this;
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            char[] r0 = new char[r4]
            r1 = 0
        L8:
            if (r1 >= r4) goto L20
            char r2 = r3.next()
            r0[r1] = r2
            boolean r2 = r3.end()
            if (r2 != 0) goto L19
            int r1 = r1 + 1
            goto L8
        L19:
            java.lang.String r4 = "Substring bounds error"
            org.json.JSONException r4 = r3.syntaxError(r4)
            throw r4
        L20:
            java.lang.String r4 = new java.lang.String
            r4.<init>(r0)
            return r4
    }

    public char nextClean() throws org.json.JSONException {
            r2 = this;
        L0:
            char r0 = r2.next()
            if (r0 == 0) goto La
            r1 = 32
            if (r0 <= r1) goto L0
        La:
            return r0
    }

    public java.lang.String nextString(char r7) throws org.json.JSONException {
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
            java.lang.String r7 = r0.toString()
            return r7
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
            r1 = 4
            java.lang.String r1 = r6.next(r1)
            r2 = 16
            int r1 = java.lang.Integer.parseInt(r1, r2)
            char r1 = (char) r1
            r0.append(r1)
            goto L5
        L5c:
            java.lang.String r7 = "Illegal escape."
            org.json.JSONException r7 = r6.syntaxError(r7)
            throw r7
        L63:
            r1 = 9
            r0.append(r1)
            goto L5
        L69:
            r0.append(r3)
            goto L5
        L6d:
            r0.append(r2)
            goto L5
        L71:
            r1 = 12
            r0.append(r1)
            goto L5
        L77:
            r1 = 8
            r0.append(r1)
            goto L5
        L7d:
            r0.append(r1)
            goto L5
        L81:
            java.lang.String r7 = "Unterminated string"
            org.json.JSONException r7 = r6.syntaxError(r7)
            throw r7
    }

    public java.lang.String nextTo(char r4) throws org.json.JSONException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            char r1 = r3.next()
            if (r1 == r4) goto L1a
            if (r1 == 0) goto L1a
            r2 = 10
            if (r1 == r2) goto L1a
            r2 = 13
            if (r1 != r2) goto L16
            goto L1a
        L16:
            r0.append(r1)
            goto L5
        L1a:
            if (r1 == 0) goto L1f
            r3.back()
        L1f:
            java.lang.String r4 = r0.toString()
            java.lang.String r4 = r4.trim()
            return r4
    }

    public java.lang.String nextTo(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            char r1 = r3.next()
            int r2 = r4.indexOf(r1)
            if (r2 >= 0) goto L1e
            if (r1 == 0) goto L1e
            r2 = 10
            if (r1 == r2) goto L1e
            r2 = 13
            if (r1 != r2) goto L1a
            goto L1e
        L1a:
            r0.append(r1)
            goto L5
        L1e:
            if (r1 == 0) goto L23
            r3.back()
        L23:
            java.lang.String r4 = r0.toString()
            java.lang.String r4 = r4.trim()
            return r4
    }

    public java.lang.Object nextValue() throws org.json.JSONException {
            r3 = this;
            char r0 = r3.nextClean()
            r1 = 34
            if (r0 == r1) goto L5e
            r1 = 39
            if (r0 == r1) goto L5e
            r1 = 91
            if (r0 == r1) goto L55
            r1 = 123(0x7b, float:1.72E-43)
            if (r0 == r1) goto L4c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
        L19:
            r2 = 32
            if (r0 < r2) goto L2d
            java.lang.String r2 = ",:]}/\\\"[{;=#"
            int r2 = r2.indexOf(r0)
            if (r2 >= 0) goto L2d
            r1.append(r0)
            char r0 = r3.next()
            goto L19
        L2d:
            r3.back()
            java.lang.String r0 = r1.toString()
            java.lang.String r0 = r0.trim()
            java.lang.String r1 = ""
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L45
            java.lang.Object r0 = org.json.JSONObject.stringToValue(r0)
            return r0
        L45:
            java.lang.String r0 = "Missing value"
            org.json.JSONException r0 = r3.syntaxError(r0)
            throw r0
        L4c:
            r3.back()
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r3)
            return r0
        L55:
            r3.back()
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r3)
            return r0
        L5e:
            java.lang.String r0 = r3.nextString(r0)
            return r0
    }

    public char skipTo(char r9) throws org.json.JSONException {
            r8 = this;
            long r0 = r8.index     // Catch: java.io.IOException -> L26
            long r2 = r8.character     // Catch: java.io.IOException -> L26
            long r4 = r8.line     // Catch: java.io.IOException -> L26
            java.io.Reader r6 = r8.reader     // Catch: java.io.IOException -> L26
            r7 = 1000000(0xf4240, float:1.401298E-39)
            r6.mark(r7)     // Catch: java.io.IOException -> L26
        Le:
            char r6 = r8.next()     // Catch: java.io.IOException -> L26
            if (r6 != 0) goto L20
            java.io.Reader r9 = r8.reader     // Catch: java.io.IOException -> L26
            r9.reset()     // Catch: java.io.IOException -> L26
            r8.index = r0     // Catch: java.io.IOException -> L26
            r8.character = r2     // Catch: java.io.IOException -> L26
            r8.line = r4     // Catch: java.io.IOException -> L26
            return r6
        L20:
            if (r6 != r9) goto Le
            r8.back()
            return r6
        L26:
            r9 = move-exception
            org.json.JSONException r0 = new org.json.JSONException
            r0.<init>(r9)
            throw r0
    }

    public org.json.JSONException syntaxError(java.lang.String r3) {
            r2 = this;
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = r2.toString()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " at "
            r0.append(r1)
            long r1 = r3.index
            r0.append(r1)
            java.lang.String r1 = " [character "
            r0.append(r1)
            long r1 = r3.character
            r0.append(r1)
            java.lang.String r1 = " line "
            r0.append(r1)
            long r1 = r3.line
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
