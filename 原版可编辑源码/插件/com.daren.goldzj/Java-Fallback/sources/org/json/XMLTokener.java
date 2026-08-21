package org.json;

import java.util.HashMap;

public class XMLTokener extends JSONTokener {
    public static final HashMap<String, Character> entity = null;

    static {
        entity = new HashMap(8);
        entity.put("amp", XML.AMP);
        entity.put("apos", XML.APOS);
        entity.put("gt", XML.GT);
        entity.put("lt", XML.LT);
        entity.put("quot", XML.QUOT);
    }

    public XMLTokener(String r1) {
        super(r1);
    }

    public String nextCDATA() throws JSONException {
        StringBuilder r0 = new StringBuilder();
    L3:
        char r1 = next();
        if (end() == true) goto L16;
        r0.append(r1);
        int r12 = r0.length() - 3;
        if (r12 < 0) goto L3;
        if (r0.charAt(r12) != ']') goto L3;
        if (r0.charAt(r12 + 1) != ']') goto L3;
        if (r0.charAt(r12 + 2) != '>') goto L3;
        r0.setLength(r12);
        return r0.toString();
    L16:
        throw syntaxError("Unclosed CDATA");
    }

    public Object nextContent() throws JSONException {
    L2:
        char r0 = next();
        if (Character.isWhitespace(r0) == true) goto L2;
        if (r0 != 0) goto L8;
        return null;
    L8:
        if (r0 == '<') goto L10;
        StringBuilder r2 = new StringBuilder();
    L12:
        if (r0 == '<') goto L20;
        if (r0 == 0) goto L20;
        if (r0 != '&') goto L18;
        r2.append(nextEntity(r0));
    L19:
        r0 = next();
        goto L12
    L18:
        r2.append(r0);
    L20:
        back();
        return r2.toString().trim();
    L10:
        return XML.LT;
    }

    public Object nextEntity(char r4) throws JSONException {
        StringBuilder r0 = new StringBuilder();
    L3:
        char r1 = next();
        if (Character.isLetterOrDigit(r1) == true) goto L17;
        if (r1 == '#') goto L17;
        if (r1 != ';') goto L16;
        String r02 = r0.toString();
        Character r12 = entity.get(r02);
        if (r12 == null) goto L14;
        return r12;
    L14:
        return r4 + r02 + ";";
    L16:
        throw syntaxError("Missing ';' in XML entity: &" + r0);
    L17:
        r0.append(Character.toLowerCase(r1));
        goto L3
    }

    public Object nextMeta() throws JSONException {
    L2:
        char r0 = next();
        if (Character.isWhitespace(r0) == true) goto L2;
        if (r0 == 0) goto L48;
        if (r0 == '\'') goto L40;
        if (r0 == '/') goto L39;
        if (r0 == '!') goto L37;
        if (r0 == '\"') goto L40;
        switch(r0) {
            case 60: goto L22;
            case 61: goto L20;
            case 62: goto L18;
            case 63: goto L16;
            default: goto L23;
        };
    L23:
        char r02 = next();
        if (Character.isWhitespace(r02) == true) goto L26;
        if (r02 == 0) goto L34;
        if (r02 == '\'') goto L34;
        if (r02 == '/') goto L34;
        if (r02 == '!') goto L34;
        if (r02 == '\"') goto L34;
        switch(r02) {
            case 60: goto L34;
            case 61: goto L34;
            case 62: goto L34;
            case 63: goto L34;
            default: goto L23;
        };
    L34:
        back();
        return Boolean.TRUE;
    L26:
        return Boolean.TRUE;
    L16:
        return XML.QUEST;
    L18:
        return XML.GT;
    L20:
        return XML.EQ;
    L22:
        return XML.LT;
    L37:
        return XML.BANG;
    L39:
        return XML.SLASH;
    L40:
        char r1 = next();
        if (r1 == 0) goto L46;
        if (r1 != r0) goto L40;
        return Boolean.TRUE;
    L46:
        throw syntaxError("Unterminated string");
    L48:
        throw syntaxError("Misshaped meta tag");
    }

    public Object nextToken() throws JSONException {
    L2:
        char r0 = next();
        if (Character.isWhitespace(r0) == true) goto L2;
        if (r0 == 0) goto L61;
        if (r0 != '\'') goto L8;
    L48:
        StringBuilder r1 = new StringBuilder();
    L49:
        char r2 = next();
        if (r2 == 0) goto L59;
        if (r2 == r0) goto L53;
        if (r2 == '&') goto L56;
        r1.append(r2);
        goto L49
    L56:
        r1.append(nextEntity(r2));
        goto L49
    L53:
        return r1.toString();
    L59:
        throw syntaxError("Unterminated string");
    L8:
        if (r0 == '/') goto L47;
        if (r0 == '!') goto L45;
        if (r0 == '\"') goto L48;
        switch(r0) {
            case 60: goto L22;
            case 61: goto L20;
            case 62: goto L18;
            case 63: goto L16;
            default: goto L14;
        };
    L14:
        StringBuilder r5 = new StringBuilder();
    L23:
        r5.append(r0);
        r0 = next();
        if (Character.isWhitespace(r0) == true) goto L26;
        if (r0 == 0) goto L43;
        if (r0 == '\'') goto L41;
        if (r0 == '/') goto L38;
        if (r0 == '[') goto L38;
        if (r0 == ']') goto L38;
        if (r0 == '!') goto L38;
        if (r0 == '\"') goto L41;
        switch(r0) {
            case 60: goto L41;
            case 61: goto L38;
            case 62: goto L38;
            case 63: goto L38;
            default: goto L23;
        };
    L38:
        back();
        return r5.toString();
    L41:
        throw syntaxError("Bad character in a name");
    L43:
        return r5.toString();
    L26:
        return r5.toString();
    L16:
        return XML.QUEST;
    L18:
        return XML.GT;
    L20:
        return XML.EQ;
    L22:
        throw syntaxError("Misplaced '<'");
    L45:
        return XML.BANG;
    L47:
        return XML.SLASH;
    L61:
        throw syntaxError("Misshaped element");
    }

    public boolean skipPast(String r10) throws JSONException {
        int r0 = r10.length();
        char[] r1 = new char[r0];
        int r3 = 0;
    L3:
        if (r3 >= r0) goto L8;
        char r4 = next();
        if (r4 == 0) goto L6;
        r1[r3] = r4;
        r3 = r3 + 1;
        goto L3
    L6:
        return false;
    L8:
        int r32 = 0;
    L9:
        int r5 = r32;
        int r42 = 0;
    L11:
        if (r42 >= r0) goto L19;
        if (r1[r5] != r10.charAt(r42)) goto L14;
        r5 = r5 + 1;
        if (r5 < r0) goto L18;
        r5 = r5 - r0;
    L18:
        r42 = r42 + 1;
        goto L11
    L14:
        boolean r43 = false;
    L20:
        if (r43 == true) goto L21;
        char r44 = next();
        if (r44 == 0) goto L24;
        r1[r32] = r44;
        r32 = r32 + 1;
        if (r32 < r0) goto L9;
        r32 = r32 - r0;
        goto L9
    L24:
        return false;
    L21:
        return true;
    L19:
        r43 = true;
        goto L20
    }
}
