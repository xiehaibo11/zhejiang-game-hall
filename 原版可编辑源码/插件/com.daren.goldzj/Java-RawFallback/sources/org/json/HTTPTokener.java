package org.json;

public class HTTPTokener extends org.json.JSONTokener {
    public HTTPTokener(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public java.lang.String nextToken() throws org.json.JSONException {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            char r1 = r4.next()
            boolean r2 = java.lang.Character.isWhitespace(r1)
            if (r2 != 0) goto L5
            r2 = 34
            if (r1 == r2) goto L2e
            r2 = 39
            if (r1 != r2) goto L18
            goto L2e
        L18:
            if (r1 == 0) goto L29
            boolean r2 = java.lang.Character.isWhitespace(r1)
            if (r2 == 0) goto L21
            goto L29
        L21:
            r0.append(r1)
            char r1 = r4.next()
            goto L18
        L29:
            java.lang.String r0 = r0.toString()
            return r0
        L2e:
            char r2 = r4.next()
            r3 = 32
            if (r2 < r3) goto L41
            if (r2 != r1) goto L3d
            java.lang.String r0 = r0.toString()
            return r0
        L3d:
            r0.append(r2)
            goto L2e
        L41:
            java.lang.String r0 = "Unterminated string."
            org.json.JSONException r0 = r4.syntaxError(r0)
            throw r0
    }
}
