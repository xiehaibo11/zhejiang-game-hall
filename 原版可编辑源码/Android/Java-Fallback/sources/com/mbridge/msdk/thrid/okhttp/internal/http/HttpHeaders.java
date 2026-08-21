package com.mbridge.msdk.thrid.okhttp.internal.http;

public final class HttpHeaders {
    private static final com.mbridge.msdk.thrid.okio.ByteString QUOTED_STRING_DELIMITERS = null;
    private static final com.mbridge.msdk.thrid.okio.ByteString TOKEN_DELIMITERS = null;

    static {
            java.lang.String r0 = "\"\\"
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.QUOTED_STRING_DELIMITERS = r0
            java.lang.String r0 = "\t ,="
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.TOKEN_DELIMITERS = r0
            return
    }

    private HttpHeaders() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long contentLength(com.mbridge.msdk.thrid.okhttp.Headers r2) {
            java.lang.String r0 = "Content-Length"
            java.lang.String r2 = r2.get(r0)
            long r0 = stringToLong(r2)
            return r0
    }

    public static long contentLength(com.mbridge.msdk.thrid.okhttp.Response r2) {
            com.mbridge.msdk.thrid.okhttp.Headers r2 = r2.headers()
            long r0 = contentLength(r2)
            return r0
    }

    public static boolean hasBody(com.mbridge.msdk.thrid.okhttp.Response r8) {
            com.mbridge.msdk.thrid.okhttp.Request r0 = r8.request()
            java.lang.String r0 = r0.method()
            java.lang.String r1 = "HEAD"
            boolean r0 = r0.equals(r1)
            r1 = 0
            if (r0 == 0) goto L12
            return r1
        L12:
            int r0 = r8.code()
            r2 = 100
            r3 = 1
            if (r0 < r2) goto L1f
            r2 = 200(0xc8, float:2.8E-43)
            if (r0 < r2) goto L28
        L1f:
            r2 = 204(0xcc, float:2.86E-43)
            if (r0 == r2) goto L28
            r2 = 304(0x130, float:4.26E-43)
            if (r0 == r2) goto L28
            return r3
        L28:
            long r4 = contentLength(r8)
            r6 = -1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L42
            java.lang.String r0 = "Transfer-Encoding"
            java.lang.String r8 = r8.header(r0)
            java.lang.String r0 = "chunked"
            boolean r8 = r0.equalsIgnoreCase(r8)
            if (r8 == 0) goto L41
            goto L42
        L41:
            return r1
        L42:
            return r3
    }

    public static boolean hasVaryAll(com.mbridge.msdk.thrid.okhttp.Headers r1) {
            java.util.Set r1 = varyFields(r1)
            java.lang.String r0 = "*"
            boolean r1 = r1.contains(r0)
            return r1
    }

    public static boolean hasVaryAll(com.mbridge.msdk.thrid.okhttp.Response r0) {
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r0.headers()
            boolean r0 = hasVaryAll(r0)
            return r0
    }

    private static void parseChallengeHeader(java.util.List<com.mbridge.msdk.thrid.okhttp.Challenge> r8, com.mbridge.msdk.thrid.okio.Buffer r9) {
            r0 = 0
        L1:
            r1 = r0
        L2:
            if (r1 != 0) goto Le
            skipWhitespaceAndCommas(r9)
            java.lang.String r1 = readToken(r9)
            if (r1 != 0) goto Le
            return
        Le:
            boolean r2 = skipWhitespaceAndCommas(r9)
            java.lang.String r3 = readToken(r9)
            if (r3 != 0) goto L2c
            boolean r9 = r9.exhausted()
            if (r9 != 0) goto L1f
            return
        L1f:
            com.mbridge.msdk.thrid.okhttp.Challenge r9 = new com.mbridge.msdk.thrid.okhttp.Challenge
            java.util.Map r0 = java.util.Collections.emptyMap()
            r9.<init>(r1, r0)
            r8.add(r9)
            return
        L2c:
            r4 = 61
            int r5 = skipAll(r9, r4)
            boolean r6 = skipWhitespaceAndCommas(r9)
            if (r2 != 0) goto L63
            if (r6 != 0) goto L40
            boolean r2 = r9.exhausted()
            if (r2 == 0) goto L63
        L40:
            com.mbridge.msdk.thrid.okhttp.Challenge r2 = new com.mbridge.msdk.thrid.okhttp.Challenge
            r6 = r0
            java.lang.String r6 = (java.lang.String) r6
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r3)
            java.lang.String r3 = repeat(r4, r5)
            r7.append(r3)
            java.lang.String r3 = r7.toString()
            java.util.Map r3 = java.util.Collections.singletonMap(r6, r3)
            r2.<init>(r1, r3)
            r8.add(r2)
            goto L1
        L63:
            java.util.LinkedHashMap r2 = new java.util.LinkedHashMap
            r2.<init>()
            int r6 = skipAll(r9, r4)
            int r5 = r5 + r6
        L6d:
            if (r3 != 0) goto L7e
            java.lang.String r3 = readToken(r9)
            boolean r5 = skipWhitespaceAndCommas(r9)
            if (r5 == 0) goto L7a
            goto L80
        L7a:
            int r5 = skipAll(r9, r4)
        L7e:
            if (r5 != 0) goto L8b
        L80:
            com.mbridge.msdk.thrid.okhttp.Challenge r4 = new com.mbridge.msdk.thrid.okhttp.Challenge
            r4.<init>(r1, r2)
            r8.add(r4)
            r1 = r3
            goto L2
        L8b:
            r6 = 1
            if (r5 <= r6) goto L8f
            return
        L8f:
            boolean r6 = skipWhitespaceAndCommas(r9)
            if (r6 == 0) goto L96
            return
        L96:
            boolean r6 = r9.exhausted()
            if (r6 != 0) goto Lab
            r6 = 0
            byte r6 = r9.getByte(r6)
            r7 = 34
            if (r6 != r7) goto Lab
            java.lang.String r6 = readQuotedString(r9)
            goto Laf
        Lab:
            java.lang.String r6 = readToken(r9)
        Laf:
            if (r6 != 0) goto Lb2
            return
        Lb2:
            java.lang.Object r3 = r2.put(r3, r6)
            java.lang.String r3 = (java.lang.String) r3
            if (r3 == 0) goto Lbb
            return
        Lbb:
            boolean r3 = skipWhitespaceAndCommas(r9)
            if (r3 != 0) goto Lc8
            boolean r3 = r9.exhausted()
            if (r3 != 0) goto Lc8
            return
        Lc8:
            r3 = r0
            goto L6d
    }

    public static java.util.List<com.mbridge.msdk.thrid.okhttp.Challenge> parseChallenges(com.mbridge.msdk.thrid.okhttp.Headers r4, java.lang.String r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r4.size()
            if (r1 >= r2) goto L29
            java.lang.String r2 = r4.name(r1)
            boolean r2 = r5.equalsIgnoreCase(r2)
            if (r2 == 0) goto L26
            com.mbridge.msdk.thrid.okio.Buffer r2 = new com.mbridge.msdk.thrid.okio.Buffer
            r2.<init>()
            java.lang.String r3 = r4.value(r1)
            com.mbridge.msdk.thrid.okio.Buffer r2 = r2.writeUtf8(r3)
            parseChallengeHeader(r0, r2)
        L26:
            int r1 = r1 + 1
            goto L6
        L29:
            return r0
    }

    public static int parseSeconds(java.lang.String r2, int r3) {
            long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L19
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r2 = 2147483647(0x7fffffff, float:NaN)
            return r2
        Lf:
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L17
            r2 = 0
            return r2
        L17:
            int r2 = (int) r2
            return r2
        L19:
            return r3
    }

    private static java.lang.String readQuotedString(com.mbridge.msdk.thrid.okio.Buffer r12) {
            byte r0 = r12.readByte()
            r1 = 34
            if (r0 != r1) goto L43
            com.mbridge.msdk.thrid.okio.Buffer r0 = new com.mbridge.msdk.thrid.okio.Buffer
            r0.<init>()
        Ld:
            com.mbridge.msdk.thrid.okio.ByteString r2 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.QUOTED_STRING_DELIMITERS
            long r2 = r12.indexOfElement(r2)
            r4 = -1
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r5 = 0
            if (r4 != 0) goto L1b
            return r5
        L1b:
            byte r4 = r12.getByte(r2)
            if (r4 != r1) goto L2c
            r0.write(r12, r2)
            r12.readByte()
            java.lang.String r12 = r0.readUtf8()
            return r12
        L2c:
            long r6 = r12.size()
            r8 = 1
            long r10 = r2 + r8
            int r4 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r4 != 0) goto L39
            return r5
        L39:
            r0.write(r12, r2)
            r12.readByte()
            r0.write(r12, r8)
            goto Ld
        L43:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            r12.<init>()
            throw r12
    }

    private static java.lang.String readToken(com.mbridge.msdk.thrid.okio.Buffer r4) {
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.TOKEN_DELIMITERS     // Catch: java.io.EOFException -> L1d
            long r0 = r4.indexOfElement(r0)     // Catch: java.io.EOFException -> L1d
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L10
            long r0 = r4.size()     // Catch: java.io.EOFException -> L1d
        L10:
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L1b
            java.lang.String r4 = r4.readUtf8(r0)     // Catch: java.io.EOFException -> L1d
            goto L1c
        L1b:
            r4 = 0
        L1c:
            return r4
        L1d:
            java.lang.AssertionError r4 = new java.lang.AssertionError
            r4.<init>()
            throw r4
    }

    public static void receiveHeaders(com.mbridge.msdk.thrid.okhttp.CookieJar r1, com.mbridge.msdk.thrid.okhttp.HttpUrl r2, com.mbridge.msdk.thrid.okhttp.Headers r3) {
            com.mbridge.msdk.thrid.okhttp.CookieJar r0 = com.mbridge.msdk.thrid.okhttp.CookieJar.NO_COOKIES
            if (r1 != r0) goto L5
            return
        L5:
            java.util.List r3 = com.mbridge.msdk.thrid.okhttp.Cookie.parseAll(r2, r3)
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto L10
            return
        L10:
            r1.saveFromResponse(r2, r3)
            return
    }

    private static java.lang.String repeat(char r0, int r1) {
            char[] r1 = new char[r1]
            java.util.Arrays.fill(r1, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            return r0
    }

    private static int skipAll(com.mbridge.msdk.thrid.okio.Buffer r3, byte r4) {
            r0 = 0
        L1:
            boolean r1 = r3.exhausted()
            if (r1 != 0) goto L15
            r1 = 0
            byte r1 = r3.getByte(r1)
            if (r1 != r4) goto L15
            int r0 = r0 + 1
            r3.readByte()
            goto L1
        L15:
            return r0
    }

    public static int skipUntil(java.lang.String r2, int r3, java.lang.String r4) {
        L0:
            int r0 = r2.length()
            if (r3 >= r0) goto L15
            char r0 = r2.charAt(r3)
            int r0 = r4.indexOf(r0)
            r1 = -1
            if (r0 == r1) goto L12
            goto L15
        L12:
            int r3 = r3 + 1
            goto L0
        L15:
            return r3
    }

    public static int skipWhitespace(java.lang.String r2, int r3) {
        L0:
            int r0 = r2.length()
            if (r3 >= r0) goto L16
            char r0 = r2.charAt(r3)
            r1 = 32
            if (r0 == r1) goto L13
            r1 = 9
            if (r0 == r1) goto L13
            goto L16
        L13:
            int r3 = r3 + 1
            goto L0
        L16:
            return r3
    }

    private static boolean skipWhitespaceAndCommas(com.mbridge.msdk.thrid.okio.Buffer r3) {
            r0 = 0
        L1:
            boolean r1 = r3.exhausted()
            if (r1 != 0) goto L22
            r1 = 0
            byte r1 = r3.getByte(r1)
            r2 = 44
            if (r1 != r2) goto L16
            r3.readByte()
            r0 = 1
            goto L1
        L16:
            r2 = 32
            if (r1 == r2) goto L1e
            r2 = 9
            if (r1 != r2) goto L22
        L1e:
            r3.readByte()
            goto L1
        L22:
            return r0
    }

    private static long stringToLong(java.lang.String r2) {
            r0 = -1
            if (r2 != 0) goto L5
            return r0
        L5:
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L9
        L9:
            return r0
    }

    public static java.util.Set<java.lang.String> varyFields(com.mbridge.msdk.thrid.okhttp.Headers r8) {
            java.util.Set r0 = java.util.Collections.emptySet()
            int r1 = r8.size()
            r2 = 0
            r3 = r2
        La:
            if (r3 >= r1) goto L43
            java.lang.String r4 = r8.name(r3)
            java.lang.String r5 = "Vary"
            boolean r4 = r5.equalsIgnoreCase(r4)
            if (r4 != 0) goto L19
            goto L40
        L19:
            java.lang.String r4 = r8.value(r3)
            boolean r5 = r0.isEmpty()
            if (r5 == 0) goto L2a
            java.util.TreeSet r0 = new java.util.TreeSet
            java.util.Comparator r5 = java.lang.String.CASE_INSENSITIVE_ORDER
            r0.<init>(r5)
        L2a:
            java.lang.String r5 = ","
            java.lang.String[] r4 = r4.split(r5)
            int r5 = r4.length
            r6 = r2
        L32:
            if (r6 >= r5) goto L40
            r7 = r4[r6]
            java.lang.String r7 = r7.trim()
            r0.add(r7)
            int r6 = r6 + 1
            goto L32
        L40:
            int r3 = r3 + 1
            goto La
        L43:
            return r0
    }

    private static java.util.Set<java.lang.String> varyFields(com.mbridge.msdk.thrid.okhttp.Response r0) {
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r0.headers()
            java.util.Set r0 = varyFields(r0)
            return r0
    }

    public static com.mbridge.msdk.thrid.okhttp.Headers varyHeaders(com.mbridge.msdk.thrid.okhttp.Headers r5, com.mbridge.msdk.thrid.okhttp.Headers r6) {
            java.util.Set r6 = varyFields(r6)
            boolean r0 = r6.isEmpty()
            if (r0 == 0) goto L14
            com.mbridge.msdk.thrid.okhttp.Headers$Builder r5 = new com.mbridge.msdk.thrid.okhttp.Headers$Builder
            r5.<init>()
            com.mbridge.msdk.thrid.okhttp.Headers r5 = r5.build()
            return r5
        L14:
            com.mbridge.msdk.thrid.okhttp.Headers$Builder r0 = new com.mbridge.msdk.thrid.okhttp.Headers$Builder
            r0.<init>()
            r1 = 0
            int r2 = r5.size()
        L1e:
            if (r1 >= r2) goto L34
            java.lang.String r3 = r5.name(r1)
            boolean r4 = r6.contains(r3)
            if (r4 == 0) goto L31
            java.lang.String r4 = r5.value(r1)
            r0.add(r3, r4)
        L31:
            int r1 = r1 + 1
            goto L1e
        L34:
            com.mbridge.msdk.thrid.okhttp.Headers r5 = r0.build()
            return r5
    }

    public static com.mbridge.msdk.thrid.okhttp.Headers varyHeaders(com.mbridge.msdk.thrid.okhttp.Response r1) {
            com.mbridge.msdk.thrid.okhttp.Response r0 = r1.networkResponse()
            com.mbridge.msdk.thrid.okhttp.Request r0 = r0.request()
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r0.headers()
            com.mbridge.msdk.thrid.okhttp.Headers r1 = r1.headers()
            com.mbridge.msdk.thrid.okhttp.Headers r1 = varyHeaders(r0, r1)
            return r1
    }

    public static boolean varyMatches(com.mbridge.msdk.thrid.okhttp.Response r2, com.mbridge.msdk.thrid.okhttp.Headers r3, com.mbridge.msdk.thrid.okhttp.Request r4) {
            java.util.Set r2 = varyFields(r2)
            java.util.Iterator r2 = r2.iterator()
        L8:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L24
            java.lang.Object r0 = r2.next()
            java.lang.String r0 = (java.lang.String) r0
            java.util.List r1 = r3.values(r0)
            java.util.List r0 = r4.headers(r0)
            boolean r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.equal(r1, r0)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L24:
            r2 = 1
            return r2
    }
}
