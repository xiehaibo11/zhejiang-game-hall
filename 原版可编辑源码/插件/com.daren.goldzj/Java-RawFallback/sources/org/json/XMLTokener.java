package org.json;

public class XMLTokener extends org.json.JSONTokener {
    public static final java.util.HashMap<java.lang.String, java.lang.Character> entity = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 8
            r0.<init>(r1)
            org.json.XMLTokener.entity = r0
            java.util.HashMap<java.lang.String, java.lang.Character> r0 = org.json.XMLTokener.entity
            java.lang.Character r1 = org.json.XML.AMP
            java.lang.String r2 = "amp"
            r0.put(r2, r1)
            java.util.HashMap<java.lang.String, java.lang.Character> r0 = org.json.XMLTokener.entity
            java.lang.Character r1 = org.json.XML.APOS
            java.lang.String r2 = "apos"
            r0.put(r2, r1)
            java.util.HashMap<java.lang.String, java.lang.Character> r0 = org.json.XMLTokener.entity
            java.lang.Character r1 = org.json.XML.GT
            java.lang.String r2 = "gt"
            r0.put(r2, r1)
            java.util.HashMap<java.lang.String, java.lang.Character> r0 = org.json.XMLTokener.entity
            java.lang.Character r1 = org.json.XML.LT
            java.lang.String r2 = "lt"
            r0.put(r2, r1)
            java.util.HashMap<java.lang.String, java.lang.Character> r0 = org.json.XMLTokener.entity
            java.lang.Character r1 = org.json.XML.QUOT
            java.lang.String r2 = "quot"
            r0.put(r2, r1)
            return
    }

    public XMLTokener(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public java.lang.String nextCDATA() throws org.json.JSONException {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            char r1 = r4.next()
            boolean r2 = r4.end()
            if (r2 != 0) goto L3c
            r0.append(r1)
            int r1 = r0.length()
            int r1 = r1 + (-3)
            if (r1 < 0) goto L5
            char r2 = r0.charAt(r1)
            r3 = 93
            if (r2 != r3) goto L5
            int r2 = r1 + 1
            char r2 = r0.charAt(r2)
            if (r2 != r3) goto L5
            int r2 = r1 + 2
            char r2 = r0.charAt(r2)
            r3 = 62
            if (r2 != r3) goto L5
            r0.setLength(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L3c:
            java.lang.String r0 = "Unclosed CDATA"
            org.json.JSONException r0 = r4.syntaxError(r0)
            throw r0
    }

    public java.lang.Object nextContent() throws org.json.JSONException {
            r4 = this;
        L0:
            char r0 = r4.next()
            boolean r1 = java.lang.Character.isWhitespace(r0)
            if (r1 != 0) goto L0
            if (r0 != 0) goto Le
            r0 = 0
            return r0
        Le:
            r1 = 60
            if (r0 != r1) goto L15
            java.lang.Character r0 = org.json.XML.LT
            return r0
        L15:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
        L1a:
            if (r0 == r1) goto L33
            if (r0 != 0) goto L1f
            goto L33
        L1f:
            r3 = 38
            if (r0 != r3) goto L2b
            java.lang.Object r0 = r4.nextEntity(r0)
            r2.append(r0)
            goto L2e
        L2b:
            r2.append(r0)
        L2e:
            char r0 = r4.next()
            goto L1a
        L33:
            r4.back()
            java.lang.String r0 = r2.toString()
            java.lang.String r0 = r0.trim()
            return r0
    }

    public java.lang.Object nextEntity(char r4) throws org.json.JSONException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            char r1 = r3.next()
            boolean r2 = java.lang.Character.isLetterOrDigit(r1)
            if (r2 != 0) goto L50
            r2 = 35
            if (r1 != r2) goto L14
            goto L50
        L14:
            r2 = 59
            if (r1 != r2) goto L3a
            java.lang.String r0 = r0.toString()
            java.util.HashMap<java.lang.String, java.lang.Character> r1 = org.json.XMLTokener.entity
            java.lang.Object r1 = r1.get(r0)
            if (r1 == 0) goto L25
            goto L39
        L25:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = ";"
            r1.append(r4)
            java.lang.String r1 = r1.toString()
        L39:
            return r1
        L3a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "Missing ';' in XML entity: &"
            r4.append(r1)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            org.json.JSONException r4 = r3.syntaxError(r4)
            throw r4
        L50:
            char r1 = java.lang.Character.toLowerCase(r1)
            r0.append(r1)
            goto L5
    }

    public java.lang.Object nextMeta() throws org.json.JSONException {
            r6 = this;
        L0:
            char r0 = r6.next()
            boolean r1 = java.lang.Character.isWhitespace(r0)
            if (r1 != 0) goto L0
            if (r0 == 0) goto L65
            r1 = 39
            if (r0 == r1) goto L53
            r2 = 47
            if (r0 == r2) goto L50
            r3 = 33
            if (r0 == r3) goto L4d
            r4 = 34
            if (r0 == r4) goto L53
            switch(r0) {
                case 60: goto L29;
                case 61: goto L26;
                case 62: goto L23;
                case 63: goto L20;
                default: goto L1f;
            }
        L1f:
            goto L2c
        L20:
            java.lang.Character r0 = org.json.XML.QUEST
            return r0
        L23:
            java.lang.Character r0 = org.json.XML.GT
            return r0
        L26:
            java.lang.Character r0 = org.json.XML.EQ
            return r0
        L29:
            java.lang.Character r0 = org.json.XML.LT
            return r0
        L2c:
            char r0 = r6.next()
            boolean r5 = java.lang.Character.isWhitespace(r0)
            if (r5 == 0) goto L39
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            return r0
        L39:
            if (r0 == 0) goto L47
            if (r0 == r1) goto L47
            if (r0 == r2) goto L47
            if (r0 == r3) goto L47
            if (r0 == r4) goto L47
            switch(r0) {
                case 60: goto L47;
                case 61: goto L47;
                case 62: goto L47;
                case 63: goto L47;
                default: goto L46;
            }
        L46:
            goto L2c
        L47:
            r6.back()
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            return r0
        L4d:
            java.lang.Character r0 = org.json.XML.BANG
            return r0
        L50:
            java.lang.Character r0 = org.json.XML.SLASH
            return r0
        L53:
            char r1 = r6.next()
            if (r1 == 0) goto L5e
            if (r1 != r0) goto L53
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            return r0
        L5e:
            java.lang.String r0 = "Unterminated string"
            org.json.JSONException r0 = r6.syntaxError(r0)
            throw r0
        L65:
            java.lang.String r0 = "Misshaped meta tag"
            org.json.JSONException r0 = r6.syntaxError(r0)
            throw r0
    }

    public java.lang.Object nextToken() throws org.json.JSONException {
            r7 = this;
        L0:
            char r0 = r7.next()
            boolean r1 = java.lang.Character.isWhitespace(r0)
            if (r1 != 0) goto L0
            if (r0 == 0) goto La0
            r1 = 39
            if (r0 == r1) goto L77
            r2 = 47
            if (r0 == r2) goto L74
            r3 = 33
            if (r0 == r3) goto L71
            r4 = 34
            if (r0 == r4) goto L77
            switch(r0) {
                case 60: goto L2e;
                case 61: goto L2b;
                case 62: goto L28;
                case 63: goto L25;
                default: goto L1f;
            }
        L1f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            goto L35
        L25:
            java.lang.Character r0 = org.json.XML.QUEST
            return r0
        L28:
            java.lang.Character r0 = org.json.XML.GT
            return r0
        L2b:
            java.lang.Character r0 = org.json.XML.EQ
            return r0
        L2e:
            java.lang.String r0 = "Misplaced '<'"
            org.json.JSONException r0 = r7.syntaxError(r0)
            throw r0
        L35:
            r5.append(r0)
            char r0 = r7.next()
            boolean r6 = java.lang.Character.isWhitespace(r0)
            if (r6 == 0) goto L47
            java.lang.String r0 = r5.toString()
            return r0
        L47:
            if (r0 == 0) goto L6c
            if (r0 == r1) goto L65
            if (r0 == r2) goto L5d
            r6 = 91
            if (r0 == r6) goto L5d
            r6 = 93
            if (r0 == r6) goto L5d
            if (r0 == r3) goto L5d
            if (r0 == r4) goto L65
            switch(r0) {
                case 60: goto L65;
                case 61: goto L5d;
                case 62: goto L5d;
                case 63: goto L5d;
                default: goto L5c;
            }
        L5c:
            goto L35
        L5d:
            r7.back()
            java.lang.String r0 = r5.toString()
            return r0
        L65:
            java.lang.String r0 = "Bad character in a name"
            org.json.JSONException r0 = r7.syntaxError(r0)
            throw r0
        L6c:
            java.lang.String r0 = r5.toString()
            return r0
        L71:
            java.lang.Character r0 = org.json.XML.BANG
            return r0
        L74:
            java.lang.Character r0 = org.json.XML.SLASH
            return r0
        L77:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
        L7c:
            char r2 = r7.next()
            if (r2 == 0) goto L99
            if (r2 != r0) goto L89
            java.lang.String r0 = r1.toString()
            return r0
        L89:
            r3 = 38
            if (r2 != r3) goto L95
            java.lang.Object r2 = r7.nextEntity(r2)
            r1.append(r2)
            goto L7c
        L95:
            r1.append(r2)
            goto L7c
        L99:
            java.lang.String r0 = "Unterminated string"
            org.json.JSONException r0 = r7.syntaxError(r0)
            throw r0
        La0:
            java.lang.String r0 = "Misshaped element"
            org.json.JSONException r0 = r7.syntaxError(r0)
            throw r0
    }

    public boolean skipPast(java.lang.String r10) throws org.json.JSONException {
            r9 = this;
            int r0 = r10.length()
            char[] r1 = new char[r0]
            r2 = 0
            r3 = 0
        L8:
            if (r3 >= r0) goto L16
            char r4 = r9.next()
            if (r4 != 0) goto L11
            return r2
        L11:
            r1[r3] = r4
            int r3 = r3 + 1
            goto L8
        L16:
            r3 = 0
        L17:
            r5 = r3
            r4 = 0
        L19:
            r6 = 1
            if (r4 >= r0) goto L2e
            char r7 = r1[r5]
            char r8 = r10.charAt(r4)
            if (r7 == r8) goto L26
            r4 = 0
            goto L2f
        L26:
            int r5 = r5 + 1
            if (r5 < r0) goto L2b
            int r5 = r5 - r0
        L2b:
            int r4 = r4 + 1
            goto L19
        L2e:
            r4 = 1
        L2f:
            if (r4 == 0) goto L32
            return r6
        L32:
            char r4 = r9.next()
            if (r4 != 0) goto L39
            return r2
        L39:
            r1[r3] = r4
            int r3 = r3 + 1
            if (r3 < r0) goto L17
            int r3 = r3 - r0
            goto L17
    }
}
