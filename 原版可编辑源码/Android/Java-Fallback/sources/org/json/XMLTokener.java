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
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            char r1 = r5.next()
            boolean r2 = r5.end()
            if (r2 != 0) goto L3c
            r0.append(r1)
            int r2 = r0.length()
            int r2 = r2 + (-3)
            if (r2 < 0) goto L5
            char r3 = r0.charAt(r2)
            r4 = 93
            if (r3 != r4) goto L5
            int r3 = r2 + 1
            char r3 = r0.charAt(r3)
            if (r3 != r4) goto L5
            int r3 = r2 + 2
            char r3 = r0.charAt(r3)
            r4 = 62
            if (r3 != r4) goto L5
            r0.setLength(r2)
            java.lang.String r3 = r0.toString()
            return r3
        L3c:
            java.lang.String r2 = "Unclosed CDATA"
            org.json.JSONException r2 = r5.syntaxError(r2)
            throw r2
    }

    public java.lang.Object nextContent() throws org.json.JSONException {
            r4 = this;
        L0:
            char r0 = r4.next()
            boolean r1 = java.lang.Character.isWhitespace(r0)
            if (r1 != 0) goto L3f
            if (r0 != 0) goto Le
            r1 = 0
            return r1
        Le:
            r1 = 60
            if (r0 != r1) goto L15
            java.lang.Character r1 = org.json.XML.LT
            return r1
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
            java.lang.Object r3 = r4.nextEntity(r0)
            r2.append(r3)
            goto L2e
        L2b:
            r2.append(r0)
        L2e:
            char r0 = r4.next()
            goto L1a
        L33:
            r4.back()
            java.lang.String r1 = r2.toString()
            java.lang.String r1 = r1.trim()
            return r1
        L3f:
            goto L0
    }

    public java.lang.Object nextEntity(char r6) throws org.json.JSONException {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            char r1 = r5.next()
            boolean r2 = java.lang.Character.isLetterOrDigit(r1)
            if (r2 != 0) goto L52
            r2 = 35
            if (r1 != r2) goto L14
            goto L52
        L14:
            r2 = 59
            if (r1 != r2) goto L3c
        L19:
            java.lang.String r1 = r0.toString()
            java.util.HashMap<java.lang.String, java.lang.Character> r2 = org.json.XMLTokener.entity
            java.lang.Object r2 = r2.get(r1)
            if (r2 == 0) goto L27
            r3 = r2
            goto L3b
        L27:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            r3.append(r1)
            java.lang.String r4 = ";"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
        L3b:
            return r3
        L3c:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Missing ';' in XML entity: &"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            org.json.JSONException r2 = r5.syntaxError(r2)
            throw r2
        L52:
            char r2 = java.lang.Character.toLowerCase(r1)
            r0.append(r2)
            goto L5
    }

    public java.lang.Object nextMeta() throws org.json.JSONException {
            r6 = this;
        L0:
            char r0 = r6.next()
            boolean r1 = java.lang.Character.isWhitespace(r0)
            if (r1 != 0) goto L6c
            if (r0 == 0) goto L65
            r1 = 39
            if (r0 == r1) goto L52
            r2 = 47
            if (r0 == r2) goto L4f
            r3 = 33
            if (r0 == r3) goto L4c
            r4 = 34
            if (r0 == r4) goto L52
            switch(r0) {
                case 60: goto L49;
                case 61: goto L46;
                case 62: goto L43;
                case 63: goto L40;
                default: goto L1f;
            }
        L1f:
            char r0 = r6.next()
            boolean r5 = java.lang.Character.isWhitespace(r0)
            if (r5 == 0) goto L2c
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            return r1
        L2c:
            if (r0 == 0) goto L3a
            if (r0 == r1) goto L3a
            if (r0 == r2) goto L3a
            if (r0 == r3) goto L3a
            if (r0 == r4) goto L3a
            switch(r0) {
                case 60: goto L3a;
                case 61: goto L3a;
                case 62: goto L3a;
                case 63: goto L3a;
                default: goto L39;
            }
        L39:
            goto L1f
        L3a:
            r6.back()
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            return r1
        L40:
            java.lang.Character r1 = org.json.XML.QUEST
            return r1
        L43:
            java.lang.Character r1 = org.json.XML.GT
            return r1
        L46:
            java.lang.Character r1 = org.json.XML.EQ
            return r1
        L49:
            java.lang.Character r1 = org.json.XML.LT
            return r1
        L4c:
            java.lang.Character r1 = org.json.XML.BANG
            return r1
        L4f:
            java.lang.Character r1 = org.json.XML.SLASH
            return r1
        L52:
            r1 = r0
        L53:
            char r0 = r6.next()
            if (r0 == 0) goto L5e
            if (r0 != r1) goto L53
            java.lang.Boolean r2 = java.lang.Boolean.TRUE
            return r2
        L5e:
            java.lang.String r2 = "Unterminated string"
            org.json.JSONException r2 = r6.syntaxError(r2)
            throw r2
        L65:
            java.lang.String r1 = "Misshaped meta tag"
            org.json.JSONException r1 = r6.syntaxError(r1)
            throw r1
        L6c:
            goto L0
    }

    public java.lang.Object nextToken() throws org.json.JSONException {
            r7 = this;
        L0:
            char r0 = r7.next()
            boolean r1 = java.lang.Character.isWhitespace(r0)
            if (r1 != 0) goto La7
            if (r0 == 0) goto La0
            r1 = 39
            if (r0 == r1) goto L76
            r2 = 47
            if (r0 == r2) goto L73
            r3 = 33
            if (r0 == r3) goto L70
            r4 = 34
            if (r0 == r4) goto L76
            switch(r0) {
                case 60: goto L69;
                case 61: goto L66;
                case 62: goto L63;
                case 63: goto L60;
                default: goto L1f;
            }
        L1f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
        L24:
            r5.append(r0)
            char r0 = r7.next()
            boolean r6 = java.lang.Character.isWhitespace(r0)
            if (r6 == 0) goto L36
            java.lang.String r1 = r5.toString()
            return r1
        L36:
            if (r0 == 0) goto L5b
            if (r0 == r1) goto L54
            if (r0 == r2) goto L4c
            r6 = 91
            if (r0 == r6) goto L4c
            r6 = 93
            if (r0 == r6) goto L4c
            if (r0 == r3) goto L4c
            if (r0 == r4) goto L54
            switch(r0) {
                case 60: goto L54;
                case 61: goto L4c;
                case 62: goto L4c;
                case 63: goto L4c;
                default: goto L4b;
            }
        L4b:
            goto L24
        L4c:
            r7.back()
            java.lang.String r1 = r5.toString()
            return r1
        L54:
            java.lang.String r1 = "Bad character in a name"
            org.json.JSONException r1 = r7.syntaxError(r1)
            throw r1
        L5b:
            java.lang.String r1 = r5.toString()
            return r1
        L60:
            java.lang.Character r1 = org.json.XML.QUEST
            return r1
        L63:
            java.lang.Character r1 = org.json.XML.GT
            return r1
        L66:
            java.lang.Character r1 = org.json.XML.EQ
            return r1
        L69:
            java.lang.String r1 = "Misplaced '<'"
            org.json.JSONException r1 = r7.syntaxError(r1)
            throw r1
        L70:
            java.lang.Character r1 = org.json.XML.BANG
            return r1
        L73:
            java.lang.Character r1 = org.json.XML.SLASH
            return r1
        L76:
            r1 = r0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
        L7c:
            char r0 = r7.next()
            if (r0 == 0) goto L99
            if (r0 != r1) goto L89
            java.lang.String r3 = r2.toString()
            return r3
        L89:
            r3 = 38
            if (r0 != r3) goto L95
            java.lang.Object r3 = r7.nextEntity(r0)
            r2.append(r3)
            goto L7c
        L95:
            r2.append(r0)
            goto L7c
        L99:
            java.lang.String r3 = "Unterminated string"
            org.json.JSONException r3 = r7.syntaxError(r3)
            throw r3
        La0:
            java.lang.String r1 = "Misshaped element"
            org.json.JSONException r1 = r7.syntaxError(r1)
            throw r1
        La7:
            goto L0
    }

    public boolean skipPast(java.lang.String r10) throws org.json.JSONException {
            r9 = this;
            r0 = 0
            int r1 = r10.length()
            char[] r2 = new char[r1]
            r3 = 0
        L8:
            r4 = 0
            if (r3 >= r1) goto L17
            char r5 = r9.next()
            if (r5 != 0) goto L12
            return r4
        L12:
            r2[r3] = r5
            int r3 = r3 + 1
            goto L8
        L17:
            r5 = r0
            r6 = 1
            r3 = 0
        L1a:
            if (r3 >= r1) goto L2e
            char r7 = r2[r5]
            char r8 = r10.charAt(r3)
            if (r7 == r8) goto L26
            r6 = 0
            goto L2e
        L26:
            int r5 = r5 + 1
            if (r5 < r1) goto L2b
            int r5 = r5 - r1
        L2b:
            int r3 = r3 + 1
            goto L1a
        L2e:
            if (r6 == 0) goto L32
            r4 = 1
            return r4
        L32:
            char r7 = r9.next()
            if (r7 != 0) goto L39
            return r4
        L39:
            r2[r0] = r7
            int r0 = r0 + 1
            if (r0 < r1) goto L41
            int r0 = r0 - r1
            goto L17
        L41:
            goto L17
    }
}
