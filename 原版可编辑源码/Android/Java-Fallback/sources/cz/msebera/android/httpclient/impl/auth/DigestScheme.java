package cz.msebera.android.httpclient.impl.auth;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class DigestScheme extends cz.msebera.android.httpclient.impl.auth.RFC2617Scheme {
    private static final char[] HEXADECIMAL = null;
    private static final int QOP_AUTH = 2;
    private static final int QOP_AUTH_INT = 1;
    private static final int QOP_MISSING = 0;
    private static final int QOP_UNKNOWN = -1;
    private static final long serialVersionUID = 3883908186234566916L;
    private java.lang.String a1;
    private java.lang.String a2;
    private java.lang.String cnonce;
    private boolean complete;
    private java.lang.String lastNonce;
    private long nounceCount;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            cz.msebera.android.httpclient.impl.auth.DigestScheme.HEXADECIMAL = r0
            return
    }

    public DigestScheme() {
            r1 = this;
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
            r1.<init>(r0)
            return
    }

    @java.lang.Deprecated
    public DigestScheme(cz.msebera.android.httpclient.auth.ChallengeState r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public DigestScheme(java.nio.charset.Charset r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.complete = r1
            return
    }

    public static java.lang.String createCnonce() {
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            r1 = 8
            byte[] r1 = new byte[r1]
            r0.nextBytes(r1)
            java.lang.String r0 = encode(r1)
            return r0
    }

    private cz.msebera.android.httpclient.Header createDigestHeader(cz.msebera.android.httpclient.auth.Credentials r28, cz.msebera.android.httpclient.HttpRequest r29) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r27 = this;
            r1 = r27
            r0 = r29
            java.lang.String r2 = "uri"
            java.lang.String r3 = r1.getParameter(r2)
            java.lang.String r4 = "realm"
            java.lang.String r5 = r1.getParameter(r4)
            java.lang.String r6 = "nonce"
            java.lang.String r7 = r1.getParameter(r6)
            java.lang.String r8 = "opaque"
            java.lang.String r9 = r1.getParameter(r8)
            java.lang.String r10 = "methodname"
            java.lang.String r10 = r1.getParameter(r10)
            java.lang.String r11 = "algorithm"
            java.lang.String r12 = r1.getParameter(r11)
            java.lang.String r13 = "MD5"
            if (r12 != 0) goto L2d
            r12 = r13
        L2d:
            java.util.HashSet r14 = new java.util.HashSet
            r15 = 8
            r14.<init>(r15)
            java.lang.String r15 = "qop"
            r16 = r13
            java.lang.String r13 = r1.getParameter(r15)
            r17 = r8
            java.lang.String r8 = "auth-int"
            r19 = r9
            java.lang.String r9 = "auth"
            r20 = r11
            if (r13 == 0) goto L83
            java.util.StringTokenizer r11 = new java.util.StringTokenizer
            r21 = r15
            java.lang.String r15 = ","
            r11.<init>(r13, r15)
        L51:
            boolean r15 = r11.hasMoreTokens()
            if (r15 == 0) goto L6d
            java.lang.String r15 = r11.nextToken()
            java.lang.String r15 = r15.trim()
            r22 = r11
            java.util.Locale r11 = java.util.Locale.ROOT
            java.lang.String r11 = r15.toLowerCase(r11)
            r14.add(r11)
            r11 = r22
            goto L51
        L6d:
            boolean r11 = r0 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r11 == 0) goto L79
            boolean r11 = r14.contains(r8)
            if (r11 == 0) goto L79
            r11 = 1
            goto L86
        L79:
            boolean r11 = r14.contains(r9)
            if (r11 == 0) goto L81
            r11 = 2
            goto L86
        L81:
            r11 = -1
            goto L86
        L83:
            r21 = r15
            r11 = 0
        L86:
            r15 = -1
            if (r11 == r15) goto L38b
            java.lang.String r13 = "charset"
            java.lang.String r13 = r1.getParameter(r13)
            if (r13 != 0) goto L93
            java.lang.String r13 = "ISO-8859-1"
        L93:
            java.lang.String r15 = "MD5-sess"
            boolean r15 = r12.equalsIgnoreCase(r15)
            if (r15 == 0) goto L9e
            r15 = r16
            goto L9f
        L9e:
            r15 = r12
        L9f:
            java.security.MessageDigest r15 = createMessageDigest(r15)     // Catch: cz.msebera.android.httpclient.impl.auth.UnsupportedDigestAlgorithmException -> L374
            java.security.Principal r16 = r28.getUserPrincipal()
            r18 = r8
            java.lang.String r8 = r16.getName()
            r16 = r2
            java.lang.String r2 = r28.getPassword()
            r22 = r6
            java.lang.String r6 = r1.lastNonce
            boolean r6 = r7.equals(r6)
            r23 = r4
            if (r6 == 0) goto Lc9
            r6 = r5
            long r4 = r1.nounceCount
            r24 = 1
            long r4 = r4 + r24
            r1.nounceCount = r4
            goto Ld3
        Lc9:
            r6 = r5
            r4 = 1
            r1.nounceCount = r4
            r4 = 0
            r1.cnonce = r4
            r1.lastNonce = r7
        Ld3:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r5 = 256(0x100, float:3.59E-43)
            r4.<init>(r5)
            java.util.Formatter r5 = new java.util.Formatter
            r24 = r9
            java.util.Locale r9 = java.util.Locale.US
            r5.<init>(r4, r9)
            r25 = r14
            r9 = 1
            java.lang.Object[] r14 = new java.lang.Object[r9]
            r26 = r10
            long r9 = r1.nounceCount
            java.lang.Long r9 = java.lang.Long.valueOf(r9)
            r10 = 0
            r14[r10] = r9
            java.lang.String r9 = "%08x"
            r5.format(r9, r14)
            r5.close()
            java.lang.String r5 = r4.toString()
            java.lang.String r9 = r1.cnonce
            if (r9 != 0) goto L109
            java.lang.String r9 = createCnonce()
            r1.cnonce = r9
        L109:
            r9 = 0
            r1.a1 = r9
            r1.a2 = r9
            java.lang.String r10 = "MD5-sess"
            boolean r10 = r12.equalsIgnoreCase(r10)
            r14 = 58
            if (r10 == 0) goto L156
            r10 = 0
            r4.setLength(r10)
            r4.append(r8)
            r4.append(r14)
            r4.append(r6)
            r4.append(r14)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            byte[] r2 = cz.msebera.android.httpclient.util.EncodingUtils.getBytes(r2, r13)
            byte[] r2 = r15.digest(r2)
            java.lang.String r2 = encode(r2)
            r4.setLength(r10)
            r4.append(r2)
            r4.append(r14)
            r4.append(r7)
            r4.append(r14)
            java.lang.String r2 = r1.cnonce
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r1.a1 = r2
            goto L16f
        L156:
            r10 = 0
            r4.setLength(r10)
            r4.append(r8)
            r4.append(r14)
            r4.append(r6)
            r4.append(r14)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r1.a1 = r2
        L16f:
            java.lang.String r2 = r1.a1
            byte[] r2 = cz.msebera.android.httpclient.util.EncodingUtils.getBytes(r2, r13)
            byte[] r2 = r15.digest(r2)
            java.lang.String r2 = encode(r2)
            r10 = 2
            if (r11 != r10) goto L19a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r9 = r26
            r0.append(r9)
            r0.append(r14)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.a2 = r0
            r14 = r24
            goto L232
        L19a:
            r9 = r26
            r10 = 1
            if (r11 != r10) goto L21a
            boolean r10 = r0 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r10 == 0) goto L1aa
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r0 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r0
            cz.msebera.android.httpclient.HttpEntity r0 = r0.getEntity()
            goto L1ab
        L1aa:
            r0 = 0
        L1ab:
            if (r0 == 0) goto L1dd
            boolean r10 = r0.isRepeatable()
            if (r10 != 0) goto L1dd
            r14 = r24
            r10 = r25
            boolean r0 = r10.contains(r14)
            if (r0 == 0) goto L1d5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            r9 = 58
            r0.append(r9)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.a2 = r0
            r11 = 2
            goto L232
        L1d5:
            cz.msebera.android.httpclient.auth.AuthenticationException r0 = new cz.msebera.android.httpclient.auth.AuthenticationException
            java.lang.String r2 = "Qop auth-int cannot be used with a non-repeatable entity"
            r0.<init>(r2)
            throw r0
        L1dd:
            r14 = r24
            cz.msebera.android.httpclient.impl.auth.HttpEntityDigester r10 = new cz.msebera.android.httpclient.impl.auth.HttpEntityDigester
            r10.<init>(r15)
            if (r0 == 0) goto L1e9
            r0.writeTo(r10)     // Catch: java.io.IOException -> L211
        L1e9:
            r10.close()     // Catch: java.io.IOException -> L211
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            r9 = 58
            r0.append(r9)
            r0.append(r3)
            r0.append(r9)
            byte[] r9 = r10.getDigest()
            java.lang.String r9 = encode(r9)
            r0.append(r9)
            java.lang.String r0 = r0.toString()
            r1.a2 = r0
            goto L232
        L211:
            r0 = move-exception
            cz.msebera.android.httpclient.auth.AuthenticationException r2 = new cz.msebera.android.httpclient.auth.AuthenticationException
            java.lang.String r3 = "I/O error reading entity content"
            r2.<init>(r3, r0)
            throw r2
        L21a:
            r14 = r24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            r9 = 58
            r0.append(r9)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.a2 = r0
        L232:
            java.lang.String r0 = r1.a2
            byte[] r0 = cz.msebera.android.httpclient.util.EncodingUtils.getBytes(r0, r13)
            byte[] r0 = r15.digest(r0)
            java.lang.String r0 = encode(r0)
            if (r11 != 0) goto L25c
            r9 = 0
            r4.setLength(r9)
            r4.append(r2)
            r10 = 58
            r4.append(r10)
            r4.append(r7)
            r4.append(r10)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            goto L290
        L25c:
            r9 = 0
            r10 = 58
            r4.setLength(r9)
            r4.append(r2)
            r4.append(r10)
            r4.append(r7)
            r4.append(r10)
            r4.append(r5)
            r4.append(r10)
            java.lang.String r2 = r1.cnonce
            r4.append(r2)
            r4.append(r10)
            r2 = 1
            if (r11 != r2) goto L282
            r2 = r18
            goto L283
        L282:
            r2 = r14
        L283:
            r4.append(r2)
            r4.append(r10)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
        L290:
            byte[] r0 = cz.msebera.android.httpclient.util.EncodingUtils.getAsciiBytes(r0)
            byte[] r0 = r15.digest(r0)
            java.lang.String r0 = encode(r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r4 = 128(0x80, float:1.8E-43)
            r2.<init>(r4)
            boolean r4 = r27.isProxy()
            if (r4 == 0) goto L2af
            java.lang.String r4 = "Proxy-Authorization"
            r2.append(r4)
            goto L2b4
        L2af:
            java.lang.String r4 = "Authorization"
            r2.append(r4)
        L2b4:
            java.lang.String r4 = ": Digest "
            r2.append(r4)
            java.util.ArrayList r4 = new java.util.ArrayList
            r10 = 20
            r4.<init>(r10)
            cz.msebera.android.httpclient.message.BasicNameValuePair r10 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.lang.String r13 = "username"
            r10.<init>(r13, r8)
            r4.add(r10)
            cz.msebera.android.httpclient.message.BasicNameValuePair r8 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r10 = r23
            r8.<init>(r10, r6)
            r4.add(r8)
            cz.msebera.android.httpclient.message.BasicNameValuePair r6 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r8 = r22
            r6.<init>(r8, r7)
            r4.add(r6)
            cz.msebera.android.httpclient.message.BasicNameValuePair r6 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r7 = r16
            r6.<init>(r7, r3)
            r4.add(r6)
            cz.msebera.android.httpclient.message.BasicNameValuePair r3 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.lang.String r6 = "response"
            r3.<init>(r6, r0)
            r4.add(r3)
            if (r11 == 0) goto L31a
            cz.msebera.android.httpclient.message.BasicNameValuePair r0 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r3 = 1
            if (r11 != r3) goto L2fb
            r14 = r18
        L2fb:
            r3 = r21
            r0.<init>(r3, r14)
            r4.add(r0)
            cz.msebera.android.httpclient.message.BasicNameValuePair r0 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.lang.String r6 = "nc"
            r0.<init>(r6, r5)
            r4.add(r0)
            cz.msebera.android.httpclient.message.BasicNameValuePair r0 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.lang.String r5 = r1.cnonce
            java.lang.String r6 = "cnonce"
            r0.<init>(r6, r5)
            r4.add(r0)
            goto L31c
        L31a:
            r3 = r21
        L31c:
            cz.msebera.android.httpclient.message.BasicNameValuePair r0 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r5 = r20
            r0.<init>(r5, r12)
            r4.add(r0)
            if (r19 == 0) goto L334
            cz.msebera.android.httpclient.message.BasicNameValuePair r0 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r7 = r17
            r6 = r19
            r0.<init>(r7, r6)
            r4.add(r0)
        L334:
            r0 = 0
        L335:
            int r6 = r4.size()
            if (r0 >= r6) goto L36e
            java.lang.Object r6 = r4.get(r0)
            cz.msebera.android.httpclient.message.BasicNameValuePair r6 = (cz.msebera.android.httpclient.message.BasicNameValuePair) r6
            if (r0 <= 0) goto L348
            java.lang.String r7 = ", "
            r2.append(r7)
        L348:
            java.lang.String r7 = r6.getName()
            java.lang.String r8 = "nc"
            boolean r8 = r8.equals(r7)
            if (r8 != 0) goto L363
            boolean r8 = r3.equals(r7)
            if (r8 != 0) goto L363
            boolean r7 = r5.equals(r7)
            if (r7 == 0) goto L361
            goto L363
        L361:
            r7 = 0
            goto L364
        L363:
            r7 = 1
        L364:
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter r8 = cz.msebera.android.httpclient.message.BasicHeaderValueFormatter.INSTANCE
            r10 = 1
            r7 = r7 ^ r10
            r8.formatNameValuePair(r2, r6, r7)
            int r0 = r0 + 1
            goto L335
        L36e:
            cz.msebera.android.httpclient.message.BufferedHeader r0 = new cz.msebera.android.httpclient.message.BufferedHeader
            r0.<init>(r2)
            return r0
        L374:
            cz.msebera.android.httpclient.auth.AuthenticationException r0 = new cz.msebera.android.httpclient.auth.AuthenticationException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unsuppported digest algorithm: "
            r2.append(r3)
            r2.append(r15)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            throw r0
        L38b:
            cz.msebera.android.httpclient.auth.AuthenticationException r0 = new cz.msebera.android.httpclient.auth.AuthenticationException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "None of the qop methods is supported: "
            r2.append(r3)
            r2.append(r13)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            throw r0
    }

    private static java.security.MessageDigest createMessageDigest(java.lang.String r3) throws cz.msebera.android.httpclient.impl.auth.UnsupportedDigestAlgorithmException {
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.lang.Exception -> L5
            return r3
        L5:
            cz.msebera.android.httpclient.impl.auth.UnsupportedDigestAlgorithmException r0 = new cz.msebera.android.httpclient.impl.auth.UnsupportedDigestAlgorithmException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unsupported algorithm in HTTP Digest authentication: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    static java.lang.String encode(byte[] r7) {
            int r0 = r7.length
            int r1 = r0 * 2
            char[] r1 = new char[r1]
            r2 = 0
        L6:
            if (r2 >= r0) goto L23
            r3 = r7[r2]
            r3 = r3 & 15
            r4 = r7[r2]
            r4 = r4 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >> 4
            int r5 = r2 * 2
            char[] r6 = cz.msebera.android.httpclient.impl.auth.DigestScheme.HEXADECIMAL
            char r4 = r6[r4]
            r1[r5] = r4
            int r5 = r5 + 1
            char r3 = r6[r3]
            r1[r5] = r3
            int r2 = r2 + 1
            goto L6
        L23:
            java.lang.String r7 = new java.lang.String
            r7.<init>(r1)
            return r7
    }

    @Override
    @java.lang.Deprecated
    public cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.Credentials r2, cz.msebera.android.httpclient.HttpRequest r3) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r1 = this;
            cz.msebera.android.httpclient.protocol.BasicHttpContext r0 = new cz.msebera.android.httpclient.protocol.BasicHttpContext
            r0.<init>()
            cz.msebera.android.httpclient.Header r2 = r1.authenticate(r2, r3, r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.Credentials r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r2 = this;
            java.lang.String r5 = "Credentials"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r5)
            java.lang.String r5 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r5)
            java.lang.String r5 = "realm"
            java.lang.String r5 = r2.getParameter(r5)
            if (r5 == 0) goto L5c
            java.lang.String r5 = "nonce"
            java.lang.String r5 = r2.getParameter(r5)
            if (r5 == 0) goto L54
            java.util.Map r5 = r2.getParameters()
            cz.msebera.android.httpclient.RequestLine r0 = r4.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "methodname"
            r5.put(r1, r0)
            java.util.Map r5 = r2.getParameters()
            cz.msebera.android.httpclient.RequestLine r0 = r4.getRequestLine()
            java.lang.String r0 = r0.getUri()
            java.lang.String r1 = "uri"
            r5.put(r1, r0)
            java.lang.String r5 = "charset"
            java.lang.String r0 = r2.getParameter(r5)
            if (r0 != 0) goto L4f
            java.util.Map r0 = r2.getParameters()
            java.lang.String r1 = r2.getCredentialsCharset(r4)
            r0.put(r5, r1)
        L4f:
            cz.msebera.android.httpclient.Header r3 = r2.createDigestHeader(r3, r4)
            return r3
        L54:
            cz.msebera.android.httpclient.auth.AuthenticationException r3 = new cz.msebera.android.httpclient.auth.AuthenticationException
            java.lang.String r4 = "missing nonce in challenge"
            r3.<init>(r4)
            throw r3
        L5c:
            cz.msebera.android.httpclient.auth.AuthenticationException r3 = new cz.msebera.android.httpclient.auth.AuthenticationException
            java.lang.String r4 = "missing realm in challenge"
            r3.<init>(r4)
            throw r3
    }

    java.lang.String getA1() {
            r1 = this;
            java.lang.String r0 = r1.a1
            return r0
    }

    java.lang.String getA2() {
            r1 = this;
            java.lang.String r0 = r1.a2
            return r0
    }

    java.lang.String getCnonce() {
            r1 = this;
            java.lang.String r0 = r1.cnonce
            return r0
    }

    @Override
    public java.lang.String getSchemeName() {
            r1 = this;
            java.lang.String r0 = "digest"
            return r0
    }

    @Override
    public boolean isComplete() {
            r2 = this;
            java.lang.String r0 = "stale"
            java.lang.String r0 = r2.getParameter(r0)
            java.lang.String r1 = "true"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L10
            r0 = 0
            return r0
        L10:
            boolean r0 = r2.complete
            return r0
    }

    @Override
    public boolean isConnectionBased() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void overrideParamter(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map r0 = r1.getParameters()
            r0.put(r2, r3)
            return
    }

    @Override
    public void processChallenge(cz.msebera.android.httpclient.Header r2) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r1 = this;
            super.processChallenge(r2)
            r2 = 1
            r1.complete = r2
            java.util.Map r2 = r1.getParameters()
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L11
            return
        L11:
            cz.msebera.android.httpclient.auth.MalformedChallengeException r2 = new cz.msebera.android.httpclient.auth.MalformedChallengeException
            java.lang.String r0 = "Authentication challenge is empty"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DIGEST [complete="
            r0.append(r1)
            boolean r1 = r3.complete
            r0.append(r1)
            java.lang.String r1 = ", nonce="
            r0.append(r1)
            java.lang.String r1 = r3.lastNonce
            r0.append(r1)
            java.lang.String r1 = ", nc="
            r0.append(r1)
            long r1 = r3.nounceCount
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
