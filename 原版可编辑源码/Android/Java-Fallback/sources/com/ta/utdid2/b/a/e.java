package com.ta.utdid2.b.a;

class e {
    public static final java.lang.Object a(org.xmlpull.v1.XmlPullParser r2, java.lang.String[] r3) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            int r0 = r2.getEventType()
        L4:
            r1 = 2
            if (r0 != r1) goto Lc
            java.lang.Object r2 = b(r2, r3)
            return r2
        Lc:
            r1 = 3
            if (r0 == r1) goto L58
            r1 = 4
            if (r0 == r1) goto L3d
            int r0 = r2.next()     // Catch: java.lang.Exception -> L22
            r1 = 1
            if (r0 == r1) goto L1a
            goto L4
        L1a:
            org.xmlpull.v1.XmlPullParserException r2 = new org.xmlpull.v1.XmlPullParserException
            java.lang.String r3 = "Unexpected end of document"
            r2.<init>(r3)
            throw r2
        L22:
            org.xmlpull.v1.XmlPullParserException r3 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected call next(): "
            r0.append(r1)
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L3d:
            org.xmlpull.v1.XmlPullParserException r3 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected text: "
            r0.append(r1)
            java.lang.String r2 = r2.getText()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L58:
            org.xmlpull.v1.XmlPullParserException r3 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected end tag at: "
            r0.append(r1)
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            goto L74
        L73:
            throw r3
        L74:
            goto L73
    }

    public static final java.util.ArrayList a(org.xmlpull.v1.XmlPullParser r3, java.lang.String r4, java.lang.String[] r5) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r3.getEventType()
        L9:
            r2 = 2
            if (r1 != r2) goto L14
            java.lang.Object r1 = b(r3, r5)
            r0.add(r1)
            goto L45
        L14:
            r2 = 3
            if (r1 != r2) goto L45
            java.lang.String r5 = r3.getName()
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L22
            return r0
        L22:
            org.xmlpull.v1.XmlPullParserException r5 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Expected "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " end tag at: "
            r0.append(r4)
            java.lang.String r3 = r3.getName()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r5.<init>(r3)
            throw r5
        L45:
            int r1 = r3.next()
            r2 = 1
            if (r1 == r2) goto L4d
            goto L9
        L4d:
            org.xmlpull.v1.XmlPullParserException r3 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Document ended before "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = " end tag"
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r3.<init>(r4)
            goto L6a
        L69:
            throw r3
        L6a:
            goto L69
    }

    public static final java.util.HashMap a(java.io.InputStream r2) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            r1 = 0
            r0.setInput(r2, r1)
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]
            java.lang.Object r2 = a(r0, r2)
            java.util.HashMap r2 = (java.util.HashMap) r2
            return r2
    }

    public static final java.util.HashMap a(org.xmlpull.v1.XmlPullParser r4, java.lang.String r5, java.lang.String[] r6) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            int r1 = r4.getEventType()
        L9:
            r2 = 2
            if (r1 != r2) goto L36
            java.lang.Object r1 = b(r4, r6)
            r2 = 0
            r3 = r6[r2]
            if (r3 == 0) goto L1b
            r2 = r6[r2]
            r0.put(r2, r1)
            goto L67
        L1b:
            org.xmlpull.v1.XmlPullParserException r5 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "Map value without name attribute: "
            r6.append(r0)
            java.lang.String r4 = r4.getName()
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
        L36:
            r2 = 3
            if (r1 != r2) goto L67
            java.lang.String r6 = r4.getName()
            boolean r6 = r6.equals(r5)
            if (r6 == 0) goto L44
            return r0
        L44:
            org.xmlpull.v1.XmlPullParserException r6 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Expected "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = " end tag at: "
            r0.append(r5)
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r6.<init>(r4)
            throw r6
        L67:
            int r1 = r4.next()
            r2 = 1
            if (r1 == r2) goto L6f
            goto L9
        L6f:
            org.xmlpull.v1.XmlPullParserException r4 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "Document ended before "
            r6.append(r0)
            r6.append(r5)
            java.lang.String r5 = " end tag"
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r4.<init>(r5)
            goto L8c
        L8b:
            throw r4
        L8c:
            goto L8b
    }

    public static final void a(java.lang.Object r4, java.lang.String r5, org.xmlpull.v1.XmlSerializer r6) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            java.lang.String r0 = "name"
            r1 = 0
            if (r4 != 0) goto L13
            java.lang.String r4 = "null"
            r6.startTag(r1, r4)
            if (r5 == 0) goto Lf
            r6.attribute(r1, r0, r5)
        Lf:
            r6.endTag(r1, r4)
            return
        L13:
            boolean r2 = r4 instanceof java.lang.String
            java.lang.String r3 = "string"
            if (r2 == 0) goto L2c
            r6.startTag(r1, r3)
            if (r5 == 0) goto L21
            r6.attribute(r1, r0, r5)
        L21:
            java.lang.String r4 = r4.toString()
            r6.text(r4)
            r6.endTag(r1, r3)
            return
        L2c:
            boolean r2 = r4 instanceof java.lang.Integer
            if (r2 == 0) goto L33
            java.lang.String r2 = "int"
            goto L4e
        L33:
            boolean r2 = r4 instanceof java.lang.Long
            if (r2 == 0) goto L3a
            java.lang.String r2 = "long"
            goto L4e
        L3a:
            boolean r2 = r4 instanceof java.lang.Float
            if (r2 == 0) goto L41
            java.lang.String r2 = "float"
            goto L4e
        L41:
            boolean r2 = r4 instanceof java.lang.Double
            if (r2 == 0) goto L48
            java.lang.String r2 = "double"
            goto L4e
        L48:
            boolean r2 = r4 instanceof java.lang.Boolean
            if (r2 == 0) goto L63
            java.lang.String r2 = "boolean"
        L4e:
            r6.startTag(r1, r2)
            if (r5 == 0) goto L56
            r6.attribute(r1, r0, r5)
        L56:
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "value"
            r6.attribute(r1, r5, r4)
            r6.endTag(r1, r2)
            return
        L63:
            boolean r2 = r4 instanceof byte[]
            if (r2 == 0) goto L6f
            byte[] r4 = (byte[]) r4
            byte[] r4 = (byte[]) r4
            a(r4, r5, r6)
            return
        L6f:
            boolean r2 = r4 instanceof int[]
            if (r2 == 0) goto L7b
            int[] r4 = (int[]) r4
            int[] r4 = (int[]) r4
            a(r4, r5, r6)
            return
        L7b:
            boolean r2 = r4 instanceof java.util.Map
            if (r2 == 0) goto L85
            java.util.Map r4 = (java.util.Map) r4
            a(r4, r5, r6)
            return
        L85:
            boolean r2 = r4 instanceof java.util.List
            if (r2 == 0) goto L8f
            java.util.List r4 = (java.util.List) r4
            a(r4, r5, r6)
            return
        L8f:
            boolean r2 = r4 instanceof java.lang.CharSequence
            if (r2 == 0) goto La6
            r6.startTag(r1, r3)
            if (r5 == 0) goto L9b
            r6.attribute(r1, r0, r5)
        L9b:
            java.lang.String r4 = r4.toString()
            r6.text(r4)
            r6.endTag(r1, r3)
            return
        La6:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "writeValueXml: unable to write value "
            r6.append(r0)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
    }

    public static final void a(java.util.List r4, java.lang.String r5, org.xmlpull.v1.XmlSerializer r6) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r0 = 0
            if (r4 != 0) goto Lc
            java.lang.String r4 = "null"
            r6.startTag(r0, r4)
            r6.endTag(r0, r4)
            return
        Lc:
            java.lang.String r1 = "list"
            r6.startTag(r0, r1)
            if (r5 == 0) goto L18
            java.lang.String r2 = "name"
            r6.attribute(r0, r2, r5)
        L18:
            int r5 = r4.size()
            r2 = 0
        L1d:
            if (r2 >= r5) goto L29
            java.lang.Object r3 = r4.get(r2)
            a(r3, r0, r6)
            int r2 = r2 + 1
            goto L1d
        L29:
            r6.endTag(r0, r1)
            return
    }

    public static final void a(java.util.Map r3, java.io.OutputStream r4) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            com.ta.utdid2.b.a.a r0 = new com.ta.utdid2.b.a.a
            r0.<init>()
            java.lang.String r1 = "utf-8"
            r0.setOutput(r4, r1)
            r4 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r4)
            r2 = 0
            r0.startDocument(r2, r1)
            java.lang.String r1 = "http://xmlpull.org/v1/doc/features.html#indent-output"
            r0.setFeature(r1, r4)
            a(r3, r2, r0)
            r0.endDocument()
            return
    }

    public static final void a(java.util.Map r3, java.lang.String r4, org.xmlpull.v1.XmlSerializer r5) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r0 = 0
            if (r3 != 0) goto Lc
            java.lang.String r3 = "null"
            r5.startTag(r0, r3)
            r5.endTag(r0, r3)
            return
        Lc:
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
            java.lang.String r1 = "map"
            r5.startTag(r0, r1)
            if (r4 == 0) goto L20
            java.lang.String r2 = "name"
            r5.attribute(r0, r2, r4)
        L20:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L3a
            java.lang.Object r4 = r3.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r2 = r4.getValue()
            java.lang.Object r4 = r4.getKey()
            java.lang.String r4 = (java.lang.String) r4
            a(r2, r4, r5)
            goto L20
        L3a:
            r5.endTag(r0, r1)
            return
    }

    public static final void a(byte[] r7, java.lang.String r8, org.xmlpull.v1.XmlSerializer r9) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r0 = 0
            if (r7 != 0) goto Lc
            java.lang.String r7 = "null"
            r9.startTag(r0, r7)
            r9.endTag(r0, r7)
            return
        Lc:
            java.lang.String r1 = "byte-array"
            r9.startTag(r0, r1)
            if (r8 == 0) goto L18
            java.lang.String r2 = "name"
            r9.attribute(r0, r2, r8)
        L18:
            int r8 = r7.length
            java.lang.String r2 = java.lang.Integer.toString(r8)
            java.lang.String r3 = "num"
            r9.attribute(r0, r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            int r3 = r7.length
            int r3 = r3 * 2
            r2.<init>(r3)
            r3 = 0
        L2b:
            if (r3 >= r8) goto L4e
            r4 = r7[r3]
            int r5 = r4 >> 4
            r6 = 10
            if (r5 < r6) goto L39
            int r5 = r5 + 97
            int r5 = r5 - r6
            goto L3b
        L39:
            int r5 = r5 + 48
        L3b:
            r2.append(r5)
            r4 = r4 & 255(0xff, float:3.57E-43)
            if (r4 < r6) goto L46
            int r4 = r4 + 97
            int r4 = r4 - r6
            goto L48
        L46:
            int r4 = r4 + 48
        L48:
            r2.append(r4)
            int r3 = r3 + 1
            goto L2b
        L4e:
            java.lang.String r7 = r2.toString()
            r9.text(r7)
            r9.endTag(r0, r1)
            return
    }

    public static final void a(int[] r6, java.lang.String r7, org.xmlpull.v1.XmlSerializer r8) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r0 = 0
            if (r6 != 0) goto Lc
            java.lang.String r6 = "null"
            r8.startTag(r0, r6)
            r8.endTag(r0, r6)
            return
        Lc:
            java.lang.String r1 = "int-array"
            r8.startTag(r0, r1)
            if (r7 == 0) goto L18
            java.lang.String r2 = "name"
            r8.attribute(r0, r2, r7)
        L18:
            int r7 = r6.length
            java.lang.String r2 = java.lang.Integer.toString(r7)
            java.lang.String r3 = "num"
            r8.attribute(r0, r3, r2)
            r2 = 0
        L23:
            if (r2 >= r7) goto L3b
            java.lang.String r3 = "item"
            r8.startTag(r0, r3)
            r4 = r6[r2]
            java.lang.String r4 = java.lang.Integer.toString(r4)
            java.lang.String r5 = "value"
            r8.attribute(r0, r5, r4)
            r8.endTag(r0, r3)
            int r2 = r2 + 1
            goto L23
        L3b:
            r8.endTag(r0, r1)
            return
    }

    public static final int[] a(org.xmlpull.v1.XmlPullParser r5, java.lang.String r6, java.lang.String[] r7) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            java.lang.String r7 = "num"
            r0 = 0
            java.lang.String r7 = r5.getAttributeValue(r0, r7)     // Catch: java.lang.NumberFormatException -> Lbc java.lang.NullPointerException -> Lc4
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.NumberFormatException -> Lbc java.lang.NullPointerException -> Lc4
            int[] r7 = new int[r7]
            r1 = 0
            int r2 = r5.getEventType()
        L12:
            r3 = 2
            java.lang.String r4 = "item"
            if (r2 != r3) goto L59
            java.lang.String r2 = r5.getName()
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L3e
            java.lang.String r2 = "value"
            java.lang.String r2 = r5.getAttributeValue(r0, r2)     // Catch: java.lang.NumberFormatException -> L2e java.lang.NullPointerException -> L36
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> L2e java.lang.NullPointerException -> L36
            r7[r1] = r2     // Catch: java.lang.NumberFormatException -> L2e java.lang.NullPointerException -> L36
            goto L97
        L2e:
            org.xmlpull.v1.XmlPullParserException r5 = new org.xmlpull.v1.XmlPullParserException
            java.lang.String r6 = "Not a number in value attribute in item"
            r5.<init>(r6)
            throw r5
        L36:
            org.xmlpull.v1.XmlPullParserException r5 = new org.xmlpull.v1.XmlPullParserException
            java.lang.String r6 = "Need value attribute in item"
            r5.<init>(r6)
            throw r5
        L3e:
            org.xmlpull.v1.XmlPullParserException r6 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Expected item tag at: "
            r7.append(r0)
            java.lang.String r5 = r5.getName()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L59:
            r3 = 3
            if (r2 != r3) goto L97
            java.lang.String r2 = r5.getName()
            boolean r2 = r2.equals(r6)
            if (r2 == 0) goto L67
            return r7
        L67:
            java.lang.String r2 = r5.getName()
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L74
            int r1 = r1 + 1
            goto L97
        L74:
            org.xmlpull.v1.XmlPullParserException r7 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Expected "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = " end tag at: "
            r0.append(r6)
            java.lang.String r5 = r5.getName()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r7.<init>(r5)
            throw r7
        L97:
            int r2 = r5.next()
            r3 = 1
            if (r2 == r3) goto La0
            goto L12
        La0:
            org.xmlpull.v1.XmlPullParserException r5 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Document ended before "
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = " end tag"
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            r5.<init>(r6)
            throw r5
        Lbc:
            org.xmlpull.v1.XmlPullParserException r5 = new org.xmlpull.v1.XmlPullParserException
            java.lang.String r6 = "Not a number in num attribute in byte-array"
            r5.<init>(r6)
            throw r5
        Lc4:
            org.xmlpull.v1.XmlPullParserException r5 = new org.xmlpull.v1.XmlPullParserException
            java.lang.String r6 = "Need num attribute in byte-array"
            r5.<init>(r6)
            goto Lcd
        Lcc:
            throw r5
        Lcd:
            goto Lcc
    }

    private static java.lang.Object b(org.xmlpull.v1.XmlPullParser r10, java.lang.String[] r11) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r0 = 0
            java.lang.String r1 = "name"
            java.lang.String r1 = r10.getAttributeValue(r0, r1)
            java.lang.String r2 = r10.getName()
            java.lang.String r3 = "null"
            boolean r3 = r2.equals(r3)
            r4 = 2
            r5 = 4
            r6 = 3
            r7 = 1
            r8 = 0
            if (r3 == 0) goto L1a
            goto Lea
        L1a:
            java.lang.String r3 = "string"
            boolean r9 = r2.equals(r3)
            if (r9 == 0) goto L90
            java.lang.String r0 = ""
        L24:
            int r2 = r10.next()
            if (r2 == r7) goto L88
            if (r2 != r6) goto L54
            java.lang.String r2 = r10.getName()
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L39
            r11[r8] = r1
            return r0
        L39:
            org.xmlpull.v1.XmlPullParserException r11 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected end tag in <string>: "
            r0.append(r1)
            java.lang.String r10 = r10.getName()
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            r11.<init>(r10)
            throw r11
        L54:
            if (r2 != r5) goto L6a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = r10.getText()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto L24
        L6a:
            if (r2 == r4) goto L6d
            goto L24
        L6d:
            org.xmlpull.v1.XmlPullParserException r11 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected start tag in <string>: "
            r0.append(r1)
            java.lang.String r10 = r10.getName()
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            r11.<init>(r10)
            throw r11
        L88:
            org.xmlpull.v1.XmlPullParserException r10 = new org.xmlpull.v1.XmlPullParserException
            java.lang.String r11 = "Unexpected end of document in <string>"
            r10.<init>(r11)
            throw r10
        L90:
            java.lang.String r3 = "int"
            boolean r3 = r2.equals(r3)
            java.lang.String r9 = "value"
            if (r3 == 0) goto La7
            java.lang.String r0 = r10.getAttributeValue(r0, r9)
            int r0 = java.lang.Integer.parseInt(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            goto Lea
        La7:
            java.lang.String r3 = "long"
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto Lb8
            java.lang.String r0 = r10.getAttributeValue(r0, r9)
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            goto Lea
        Lb8:
            java.lang.String r3 = "float"
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto Lc9
            java.lang.String r0 = r10.getAttributeValue(r0, r9)
            java.lang.Float r0 = java.lang.Float.valueOf(r0)
            goto Lea
        Lc9:
            java.lang.String r3 = "double"
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto Lda
            java.lang.String r0 = r10.getAttributeValue(r0, r9)
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            goto Lea
        Lda:
            java.lang.String r3 = "boolean"
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L185
            java.lang.String r0 = r10.getAttributeValue(r0, r9)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
        Lea:
            int r3 = r10.next()
            if (r3 == r7) goto L169
            java.lang.String r9 = ">: "
            if (r3 != r6) goto L122
            java.lang.String r3 = r10.getName()
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto L101
            r11[r8] = r1
            return r0
        L101:
            org.xmlpull.v1.XmlPullParserException r11 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected end tag in <"
            r0.append(r1)
            r0.append(r2)
            r0.append(r9)
            java.lang.String r10 = r10.getName()
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            r11.<init>(r10)
            throw r11
        L122:
            if (r3 == r5) goto L148
            if (r3 == r4) goto L127
            goto Lea
        L127:
            org.xmlpull.v1.XmlPullParserException r11 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected start tag in <"
            r0.append(r1)
            r0.append(r2)
            r0.append(r9)
            java.lang.String r10 = r10.getName()
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            r11.<init>(r10)
            throw r11
        L148:
            org.xmlpull.v1.XmlPullParserException r11 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected text in <"
            r0.append(r1)
            r0.append(r2)
            r0.append(r9)
            java.lang.String r10 = r10.getName()
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            r11.<init>(r10)
            throw r11
        L169:
            org.xmlpull.v1.XmlPullParserException r10 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "Unexpected end of document in <"
            r11.append(r0)
            r11.append(r2)
            java.lang.String r0 = ">"
            r11.append(r0)
            java.lang.String r11 = r11.toString()
            r10.<init>(r11)
            throw r10
        L185:
            java.lang.String r0 = "int-array"
            boolean r3 = r2.equals(r0)
            if (r3 == 0) goto L197
            r10.next()
            int[] r10 = a(r10, r0, r11)
            r11[r8] = r1
            return r10
        L197:
            java.lang.String r0 = "map"
            boolean r3 = r2.equals(r0)
            if (r3 == 0) goto L1a9
            r10.next()
            java.util.HashMap r10 = a(r10, r0, r11)
            r11[r8] = r1
            return r10
        L1a9:
            java.lang.String r0 = "list"
            boolean r3 = r2.equals(r0)
            if (r3 == 0) goto L1bb
            r10.next()
            java.util.ArrayList r10 = a(r10, r0, r11)
            r11[r8] = r1
            return r10
        L1bb:
            org.xmlpull.v1.XmlPullParserException r10 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "Unknown tag: "
            r11.append(r0)
            r11.append(r2)
            java.lang.String r11 = r11.toString()
            r10.<init>(r11)
            goto L1d3
        L1d2:
            throw r10
        L1d3:
            goto L1d2
    }
}
