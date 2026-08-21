package com.ta.utdid2.b.a;

class a implements org.xmlpull.v1.XmlSerializer {
    private static final java.lang.String[] a = null;
    private java.io.OutputStream a;
    private java.io.Writer a;
    private java.nio.ByteBuffer a;
    private java.nio.charset.CharsetEncoder a;
    private final char[] a;
    private boolean b;
    private int mPos;

    static {
            r0 = 64
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r2 = 0
            r0[r2] = r1
            r2 = 1
            r0[r2] = r1
            r2 = 2
            r0[r2] = r1
            r2 = 3
            r0[r2] = r1
            r2 = 4
            r0[r2] = r1
            r2 = 5
            r0[r2] = r1
            r2 = 6
            r0[r2] = r1
            r2 = 7
            r0[r2] = r1
            r2 = 8
            r0[r2] = r1
            r2 = 9
            r0[r2] = r1
            r2 = 10
            r0[r2] = r1
            r2 = 11
            r0[r2] = r1
            r2 = 12
            r0[r2] = r1
            r2 = 13
            r0[r2] = r1
            r2 = 14
            r0[r2] = r1
            r2 = 15
            r0[r2] = r1
            r2 = 16
            r0[r2] = r1
            r2 = 17
            r0[r2] = r1
            r2 = 18
            r0[r2] = r1
            r2 = 19
            r0[r2] = r1
            r2 = 20
            r0[r2] = r1
            r2 = 21
            r0[r2] = r1
            r2 = 22
            r0[r2] = r1
            r2 = 23
            r0[r2] = r1
            r2 = 24
            r0[r2] = r1
            r2 = 25
            r0[r2] = r1
            r2 = 26
            r0[r2] = r1
            r2 = 27
            r0[r2] = r1
            r2 = 28
            r0[r2] = r1
            r2 = 29
            r0[r2] = r1
            r2 = 30
            r0[r2] = r1
            r2 = 31
            r0[r2] = r1
            r2 = 32
            r0[r2] = r1
            r2 = 33
            r0[r2] = r1
            r2 = 34
            java.lang.String r3 = "&quot;"
            r0[r2] = r3
            r2 = 35
            r0[r2] = r1
            r2 = 36
            r0[r2] = r1
            r2 = 37
            r0[r2] = r1
            r2 = 38
            java.lang.String r3 = "&amp;"
            r0[r2] = r3
            r2 = 39
            r0[r2] = r1
            r2 = 40
            r0[r2] = r1
            r2 = 41
            r0[r2] = r1
            r2 = 42
            r0[r2] = r1
            r2 = 43
            r0[r2] = r1
            r2 = 44
            r0[r2] = r1
            r2 = 45
            r0[r2] = r1
            r2 = 46
            r0[r2] = r1
            r2 = 47
            r0[r2] = r1
            r2 = 48
            r0[r2] = r1
            r2 = 49
            r0[r2] = r1
            r2 = 50
            r0[r2] = r1
            r2 = 51
            r0[r2] = r1
            r2 = 52
            r0[r2] = r1
            r2 = 53
            r0[r2] = r1
            r2 = 54
            r0[r2] = r1
            r2 = 55
            r0[r2] = r1
            r2 = 56
            r0[r2] = r1
            r2 = 57
            r0[r2] = r1
            r2 = 58
            r0[r2] = r1
            r2 = 59
            r0[r2] = r1
            r2 = 60
            java.lang.String r3 = "&lt;"
            r0[r2] = r3
            r2 = 61
            r0[r2] = r1
            r2 = 62
            java.lang.String r3 = "&gt;"
            r0[r2] = r3
            r2 = 63
            r0[r2] = r1
            com.ta.utdid2.b.a.a.a = r0
            return
    }

    a() {
            r2 = this;
            r2.<init>()
            r0 = 8192(0x2000, float:1.148E-41)
            char[] r1 = new char[r0]
            r2.a = r1
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r2.a = r0
            return
    }

    private void a() throws java.io.IOException {
            r4 = this;
            java.nio.ByteBuffer r0 = r4.a
            int r0 = r0.position()
            if (r0 <= 0) goto L1e
            java.nio.ByteBuffer r1 = r4.a
            r1.flip()
            java.io.OutputStream r1 = r4.a
            java.nio.ByteBuffer r2 = r4.a
            byte[] r2 = r2.array()
            r3 = 0
            r1.write(r2, r3, r0)
            java.nio.ByteBuffer r0 = r4.a
            r0.clear()
        L1e:
            return
    }

    private void a(java.lang.String r8) throws java.io.IOException {
            r7 = this;
            int r0 = r8.length()
            java.lang.String[] r1 = com.ta.utdid2.b.a.a.a
            int r2 = r1.length
            char r2 = (char) r2
            r3 = 0
            r4 = 0
        La:
            if (r3 >= r0) goto L27
            char r5 = r8.charAt(r3)
            if (r5 < r2) goto L13
            goto L24
        L13:
            r5 = r1[r5]
            if (r5 != 0) goto L18
            goto L24
        L18:
            if (r4 >= r3) goto L1f
            int r6 = r3 - r4
            r7.a(r8, r4, r6)
        L1f:
            int r4 = r3 + 1
            r7.append(r5)
        L24:
            int r3 = r3 + 1
            goto La
        L27:
            if (r4 >= r3) goto L2d
            int r3 = r3 - r4
            r7.a(r8, r4, r3)
        L2d:
            return
    }

    private void a(java.lang.String r4, int r5, int r6) throws java.io.IOException {
            r3 = this;
            r0 = 8192(0x2000, float:1.148E-41)
            if (r6 <= r0) goto L16
            int r6 = r6 + r5
        L5:
            if (r5 >= r6) goto L15
            int r1 = r5 + 8192
            if (r1 >= r6) goto Le
            r2 = 8192(0x2000, float:1.148E-41)
            goto L10
        Le:
            int r2 = r6 - r5
        L10:
            r3.a(r4, r5, r2)
            r5 = r1
            goto L5
        L15:
            return
        L16:
            int r1 = r3.mPos
            int r2 = r1 + r6
            if (r2 <= r0) goto L21
            r3.flush()
            int r1 = r3.mPos
        L21:
            int r0 = r5 + r6
            char[] r2 = r3.a
            r4.getChars(r5, r0, r2, r1)
            int r1 = r1 + r6
            r3.mPos = r1
            return
    }

    private void a(char[] r6, int r7, int r8) throws java.io.IOException {
            r5 = this;
            java.lang.String[] r0 = com.ta.utdid2.b.a.a.a
            int r1 = r0.length
            char r1 = (char) r1
            int r8 = r8 + r7
            r2 = r7
        L6:
            if (r7 >= r8) goto L21
            char r3 = r6[r7]
            if (r3 < r1) goto Ld
            goto L1e
        Ld:
            r3 = r0[r3]
            if (r3 != 0) goto L12
            goto L1e
        L12:
            if (r2 >= r7) goto L19
            int r4 = r7 - r2
            r5.append(r6, r2, r4)
        L19:
            int r2 = r7 + 1
            r5.append(r3)
        L1e:
            int r7 = r7 + 1
            goto L6
        L21:
            if (r2 >= r7) goto L27
            int r7 = r7 - r2
            r5.append(r6, r2, r7)
        L27:
            return
    }

    private void append(char r3) throws java.io.IOException {
            r2 = this;
            int r0 = r2.mPos
            r1 = 8191(0x1fff, float:1.1478E-41)
            if (r0 < r1) goto Lb
            r2.flush()
            int r0 = r2.mPos
        Lb:
            char[] r1 = r2.a
            r1[r0] = r3
            int r0 = r0 + 1
            r2.mPos = r0
            return
    }

    private void append(java.lang.String r3) throws java.io.IOException {
            r2 = this;
            int r0 = r3.length()
            r1 = 0
            r2.a(r3, r1, r0)
            return
    }

    private void append(char[] r4, int r5, int r6) throws java.io.IOException {
            r3 = this;
            r0 = 8192(0x2000, float:1.148E-41)
            if (r6 <= r0) goto L16
            int r6 = r6 + r5
        L5:
            if (r5 >= r6) goto L15
            int r1 = r5 + 8192
            if (r1 >= r6) goto Le
            r2 = 8192(0x2000, float:1.148E-41)
            goto L10
        Le:
            int r2 = r6 - r5
        L10:
            r3.append(r4, r5, r2)
            r5 = r1
            goto L5
        L15:
            return
        L16:
            int r1 = r3.mPos
            int r2 = r1 + r6
            if (r2 <= r0) goto L21
            r3.flush()
            int r1 = r3.mPos
        L21:
            char[] r0 = r3.a
            java.lang.System.arraycopy(r4, r5, r0, r1, r6)
            int r1 = r1 + r6
            r3.mPos = r1
            return
    }

    @Override
    public org.xmlpull.v1.XmlSerializer attribute(java.lang.String r2, java.lang.String r3, java.lang.String r4) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r1 = this;
            r0 = 32
            r1.append(r0)
            if (r2 == 0) goto Lf
            r1.append(r2)
            r2 = 58
            r1.append(r2)
        Lf:
            r1.append(r3)
            java.lang.String r2 = "=\""
            r1.append(r2)
            r1.a(r4)
            r2 = 34
            r1.append(r2)
            return r1
    }

    @Override
    public void cdsect(java.lang.String r1) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void comment(java.lang.String r1) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void docdecl(java.lang.String r1) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void endDocument() throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            r0.flush()
            return
    }

    @Override
    public org.xmlpull.v1.XmlSerializer endTag(java.lang.String r2, java.lang.String r3) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == 0) goto La
            java.lang.String r2 = " />\n"
            r1.append(r2)
            goto L21
        La:
            java.lang.String r0 = "</"
            r1.append(r0)
            if (r2 == 0) goto L19
            r1.append(r2)
            r2 = 58
            r1.append(r2)
        L19:
            r1.append(r3)
            java.lang.String r2 = ">\n"
            r1.append(r2)
        L21:
            r2 = 0
            r1.b = r2
            return r1
    }

    @Override
    public void entityRef(java.lang.String r1) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void flush() throws java.io.IOException {
            r5 = this;
            int r0 = r5.mPos
            if (r0 <= 0) goto L51
            java.io.OutputStream r1 = r5.a
            r2 = 0
            if (r1 == 0) goto L43
            char[] r1 = r5.a
            java.nio.CharBuffer r0 = java.nio.CharBuffer.wrap(r1, r2, r0)
            java.nio.charset.CharsetEncoder r1 = r5.a
            java.nio.ByteBuffer r3 = r5.a
            r4 = 1
            java.nio.charset.CoderResult r1 = r1.encode(r0, r3, r4)
        L18:
            boolean r3 = r1.isError()
            if (r3 != 0) goto L39
            boolean r1 = r1.isOverflow()
            if (r1 == 0) goto L30
            r5.a()
            java.nio.charset.CharsetEncoder r1 = r5.a
            java.nio.ByteBuffer r3 = r5.a
            java.nio.charset.CoderResult r1 = r1.encode(r0, r3, r4)
            goto L18
        L30:
            r5.a()
            java.io.OutputStream r0 = r5.a
            r0.flush()
            goto L4f
        L39:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L43:
            java.io.Writer r1 = r5.a
            char[] r3 = r5.a
            r1.write(r3, r2, r0)
            java.io.Writer r0 = r5.a
            r0.flush()
        L4f:
            r5.mPos = r2
        L51:
            return
    }

    @Override
    public int getDepth() {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean getFeature(java.lang.String r1) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public java.lang.String getName() {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    @Override
    public java.lang.String getNamespace() {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    @Override
    public java.lang.String getPrefix(java.lang.String r1, boolean r2) throws java.lang.IllegalArgumentException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public java.lang.Object getProperty(java.lang.String r1) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void ignorableWhitespace(java.lang.String r1) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void processingInstruction(java.lang.String r1) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void setFeature(java.lang.String r1, boolean r2) throws java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            java.lang.String r2 = "http://xmlpull.org/v1/doc/features.html#indent-output"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L9
            return
        L9:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void setOutput(java.io.OutputStream r2, java.lang.String r3) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r1 = this;
            if (r2 == 0) goto L2d
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r3)     // Catch: java.nio.charset.UnsupportedCharsetException -> Lf java.nio.charset.IllegalCharsetNameException -> L1e
            java.nio.charset.CharsetEncoder r0 = r0.newEncoder()     // Catch: java.nio.charset.UnsupportedCharsetException -> Lf java.nio.charset.IllegalCharsetNameException -> L1e
            r1.a = r0     // Catch: java.nio.charset.UnsupportedCharsetException -> Lf java.nio.charset.IllegalCharsetNameException -> L1e
            r1.a = r2
            return
        Lf:
            r2 = move-exception
            java.io.UnsupportedEncodingException r0 = new java.io.UnsupportedEncodingException
            r0.<init>(r3)
            java.lang.Throwable r2 = r0.initCause(r2)
            java.io.UnsupportedEncodingException r2 = (java.io.UnsupportedEncodingException) r2
            java.io.UnsupportedEncodingException r2 = (java.io.UnsupportedEncodingException) r2
            throw r2
        L1e:
            r2 = move-exception
            java.io.UnsupportedEncodingException r0 = new java.io.UnsupportedEncodingException
            r0.<init>(r3)
            java.lang.Throwable r2 = r0.initCause(r2)
            java.io.UnsupportedEncodingException r2 = (java.io.UnsupportedEncodingException) r2
            java.io.UnsupportedEncodingException r2 = (java.io.UnsupportedEncodingException) r2
            throw r2
        L2d:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }

    @Override
    public void setOutput(java.io.Writer r1) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public void setPrefix(java.lang.String r1, java.lang.String r2) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void setProperty(java.lang.String r1, java.lang.Object r2) throws java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void startDocument(java.lang.String r2, java.lang.Boolean r3) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "<?xml version='1.0' encoding='utf-8' standalone='"
            r2.append(r0)
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L13
            java.lang.String r3 = "yes"
            goto L15
        L13:
            java.lang.String r3 = "no"
        L15:
            r2.append(r3)
            java.lang.String r3 = "' ?>\n"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.append(r2)
            return
    }

    @Override
    public org.xmlpull.v1.XmlSerializer startTag(java.lang.String r2, java.lang.String r3) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == 0) goto L9
            java.lang.String r0 = ">\n"
            r1.append(r0)
        L9:
            r0 = 60
            r1.append(r0)
            if (r2 == 0) goto L18
            r1.append(r2)
            r2 = 58
            r1.append(r2)
        L18:
            r1.append(r3)
            r2 = 1
            r1.b = r2
            return r1
    }

    @Override
    public org.xmlpull.v1.XmlSerializer text(java.lang.String r2) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == 0) goto Lc
            java.lang.String r0 = ">"
            r1.append(r0)
            r0 = 0
            r1.b = r0
        Lc:
            r1.a(r2)
            return r1
    }

    @Override
    public org.xmlpull.v1.XmlSerializer text(char[] r2, int r3, int r4) throws java.io.IOException, java.lang.IllegalArgumentException, java.lang.IllegalStateException {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == 0) goto Lc
            java.lang.String r0 = ">"
            r1.append(r0)
            r0 = 0
            r1.b = r0
        Lc:
            r1.a(r2, r3, r4)
            return r1
    }
}
