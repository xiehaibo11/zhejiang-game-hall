package org.json;

import java.util.HashMap;

public class XMLTokener extends JSONTokener {
    public static final HashMap<String, Character> entity = new HashMap<>(8);

    static {
        entity.put("amp", XML.AMP);
        entity.put("apos", XML.APOS);
        entity.put("gt", XML.GT);
        entity.put("lt", XML.LT);
        entity.put("quot", XML.QUOT);
    }

    public XMLTokener(String s) {
        super(s);
    }

    public String nextCDATA() throws JSONException {
        StringBuilder sb = new StringBuilder();
        while (true) {
            char c = next();
            if (end()) {
                throw syntaxError("Unclosed CDATA");
            }
            sb.append(c);
            int i = sb.length() - 3;
            if (i >= 0 && sb.charAt(i) == ']' && sb.charAt(i + 1) == ']' && sb.charAt(i + 2) == '>') {
                sb.setLength(i);
                return sb.toString();
            }
        }
    }

    public Object nextContent() throws JSONException {
        char c;
        do {
            c = next();
        } while (Character.isWhitespace(c));
        if (c == 0) {
            return null;
        }
        if (c == '<') {
            return XML.LT;
        }
        StringBuilder sb = new StringBuilder();
        while (c != '<' && c != 0) {
            if (c == '&') {
                sb.append(nextEntity(c));
            } else {
                sb.append(c);
            }
            c = next();
        }
        back();
        return sb.toString().trim();
    }

    public Object nextEntity(char ampersand) throws JSONException {
        char c;
        StringBuilder sb = new StringBuilder();
        while (true) {
            c = next();
            if (!Character.isLetterOrDigit(c) && c != '#') {
                break;
            }
            sb.append(Character.toLowerCase(c));
        }
        if (c != ';') {
            throw syntaxError("Missing ';' in XML entity: &" + ((Object) sb));
        }
        String string = sb.toString();
        Object object = entity.get(string);
        if (object != null) {
            return object;
        }
        return ampersand + string + ";";
    }

    /* JADX WARN: Code restructure failed: missing block: B:25:0x003a, code lost:
    
        back();
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x003f, code lost:
    
        return java.lang.Boolean.TRUE;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public Object nextMeta() throws JSONException {
        char c;
        char c2;
        do {
            c = next();
        } while (Character.isWhitespace(c));
        if (c == 0) {
            throw syntaxError("Misshaped meta tag");
        }
        if (c != '\'') {
            if (c == '/') {
                return XML.SLASH;
            }
            if (c == '!') {
                return XML.BANG;
            }
            if (c != '\"') {
                switch (c) {
                    case '<':
                        return XML.LT;
                    case '=':
                        return XML.EQ;
                    case '>':
                        return XML.GT;
                    case '?':
                        return XML.QUEST;
                }
                while (true) {
                    char c3 = next();
                    if (Character.isWhitespace(c3)) {
                        return Boolean.TRUE;
                    }
                    if (c3 != 0 && c3 != '\'' && c3 != '/' && c3 != '!' && c3 != '\"') {
                        switch (c3) {
                        }
                    }
                }
            }
        }
        do {
            c2 = next();
            if (c2 == 0) {
                throw syntaxError("Unterminated string");
            }
        } while (c2 != c);
        return Boolean.TRUE;
    }

    /*  JADX ERROR: UnsupportedOperationException in pass: RegionMakerVisitor
        java.lang.UnsupportedOperationException
        	at java.base/java.util.Collections$UnmodifiableCollection.add(Unknown Source)
        	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker$1.leaveRegion(SwitchRegionMaker.java:390)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:70)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverse(DepthRegionTraversal.java:23)
        	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker.insertBreaksForCase(SwitchRegionMaker.java:370)
        	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker.insertBreaks(SwitchRegionMaker.java:85)
        	at jadx.core.dex.visitors.regions.PostProcessRegions.leaveRegion(PostProcessRegions.java:33)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:70)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverse(DepthRegionTraversal.java:19)
        	at jadx.core.dex.visitors.regions.PostProcessRegions.process(PostProcessRegions.java:23)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:31)
        */
    public java.lang.Object nextToken() throws org.json.JSONException {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: org.json.XMLTokener.nextToken():java.lang.Object");
    }

    public boolean skipPast(String to) throws JSONException {
        int offset = 0;
        int length = to.length();
        char[] circle = new char[length];
        for (int i = 0; i < length; i++) {
            char c = next();
            if (c == 0) {
                return false;
            }
            circle[i] = c;
        }
        while (true) {
            int j = offset;
            boolean b = true;
            int i2 = 0;
            while (true) {
                if (i2 >= length) {
                    break;
                }
                if (circle[j] != to.charAt(i2)) {
                    b = false;
                    break;
                }
                j++;
                if (j >= length) {
                    j -= length;
                }
                i2++;
            }
            if (b) {
                return true;
            }
            char c2 = next();
            if (c2 == 0) {
                return false;
            }
            circle[offset] = c2;
            offset++;
            if (offset >= length) {
                offset -= length;
            }
        }
    }
}
