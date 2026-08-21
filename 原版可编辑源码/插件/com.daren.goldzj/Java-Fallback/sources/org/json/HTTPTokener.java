package org.json;

public class HTTPTokener extends JSONTokener {
    public HTTPTokener(String r1) {
        super(r1);
    }

    public String nextToken() throws JSONException {
        StringBuilder r0 = new StringBuilder();
    L3:
        char r1 = next();
        if (Character.isWhitespace(r1) == true) goto L3;
        if (r1 == '\"') goto L17;
        if (r1 == '\'') goto L17;
    L10:
        if (r1 == 0) goto L16;
        if (Character.isWhitespace(r1) == true) goto L16;
        r0.append(r1);
        r1 = next();
    L16:
        return r0.toString();
    L17:
        char r2 = next();
        if (r2 < ' ') goto L24;
        if (r2 == r1) goto L21;
        r0.append(r2);
        goto L17
    L21:
        return r0.toString();
    L24:
        throw syntaxError("Unterminated string.");
    }
}
