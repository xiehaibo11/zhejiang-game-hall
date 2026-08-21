package okhttp3.internal.http;

@kotlin.Metadata(d1 = {"\u0000R\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010!\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0005\n\u0000\u001a\u0010\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0007\u001a\u0018\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b*\u00020\n2\u0006\u0010\u000b\u001a\u00020\f\u001a\n\u0010\r\u001a\u00020\u0004*\u00020\u0006\u001a\u001a\u0010\u000e\u001a\u00020\u000f*\u00020\u00102\f\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\t0\u0012H\u0002\u001a\u000e\u0010\u0013\u001a\u0004\u0018\u00010\f*\u00020\u0010H\u0002\u001a\u000e\u0010\u0014\u001a\u0004\u0018\u00010\f*\u00020\u0010H\u0002\u001a\u001a\u0010\u0015\u001a\u00020\u000f*\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\n\u001a\f\u0010\u001a\u001a\u00020\u0004*\u00020\u0010H\u0002\u001a\u0014\u0010\u001b\u001a\u00020\u0004*\u00020\u00102\u0006\u0010\u001c\u001a\u00020\u001dH\u0002\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001e"}, d2 = {"QUOTED_STRING_DELIMITERS", "Lokio/ByteString;", "TOKEN_DELIMITERS", "hasBody", "", "response", "Lokhttp3/Response;", "parseChallenges", "", "Lokhttp3/Challenge;", "Lokhttp3/Headers;", "headerName", "", "promisesBody", "readChallengeHeader", "", "Lokio/Buffer;", "result", "", "readQuotedString", "readToken", "receiveHeaders", "Lokhttp3/CookieJar;", "url", "Lokhttp3/HttpUrl;", "headers", "skipCommasAndWhitespace", "startsWith", "prefix", "", "okhttp"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class HttpHeaders {
    private static final okio.ByteString QUOTED_STRING_DELIMITERS = null;
    private static final okio.ByteString TOKEN_DELIMITERS = null;

    static {
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "\"\\"
            okio.ByteString r0 = r0.encodeUtf8(r1)
            okhttp3.internal.http.HttpHeaders.QUOTED_STRING_DELIMITERS = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "\t ,="
            okio.ByteString r0 = r0.encodeUtf8(r1)
            okhttp3.internal.http.HttpHeaders.TOKEN_DELIMITERS = r0
            return
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "No longer supported", replaceWith = @kotlin.ReplaceWith(expression = "response.promisesBody()", imports = {}))
    public static final boolean hasBody(okhttp3.Response r1) {
            java.lang.String r0 = "response"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r1 = promisesBody(r1)
            return r1
    }

    public static final java.util.List<okhttp3.Challenge> parseChallenges(okhttp3.Headers r7, java.lang.String r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "headerName"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = (java.util.List) r0
            int r1 = r7.size()
            r2 = 0
        L16:
            if (r2 >= r1) goto L47
            int r3 = r2 + 1
            java.lang.String r4 = r7.name(r2)
            r5 = 1
            boolean r4 = kotlin.text.StringsKt.equals(r8, r4, r5)
            if (r4 == 0) goto L45
            okio.Buffer r4 = new okio.Buffer
            r4.<init>()
            java.lang.String r2 = r7.value(r2)
            okio.Buffer r2 = r4.writeUtf8(r2)
            readChallengeHeader(r2, r0)     // Catch: java.io.EOFException -> L36
            goto L45
        L36:
            r2 = move-exception
            okhttp3.internal.platform.Platform$Companion r4 = okhttp3.internal.platform.Platform.Companion
            okhttp3.internal.platform.Platform r4 = r4.get()
            r5 = 5
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            java.lang.String r6 = "Unable to parse challenge"
            r4.log(r6, r5, r2)
        L45:
            r2 = r3
            goto L16
        L47:
            return r0
    }

    public static final boolean promisesBody(okhttp3.Response r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            okhttp3.Request r0 = r8.request()
            java.lang.String r0 = r0.method()
            java.lang.String r1 = "HEAD"
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            r1 = 0
            if (r0 == 0) goto L17
            return r1
        L17:
            int r0 = r8.code()
            r2 = 100
            r3 = 1
            if (r0 < r2) goto L24
            r2 = 200(0xc8, float:2.8E-43)
            if (r0 < r2) goto L2d
        L24:
            r2 = 204(0xcc, float:2.86E-43)
            if (r0 == r2) goto L2d
            r2 = 304(0x130, float:4.26E-43)
            if (r0 == r2) goto L2d
            return r3
        L2d:
            long r4 = okhttp3.internal.Util.headersContentLength(r8)
            r6 = -1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L49
            r0 = 2
            r2 = 0
            java.lang.String r4 = "Transfer-Encoding"
            java.lang.String r8 = okhttp3.Response.header$default(r8, r4, r2, r0, r2)
            java.lang.String r0 = "chunked"
            boolean r8 = kotlin.text.StringsKt.equals(r0, r8, r3)
            if (r8 == 0) goto L48
            goto L49
        L48:
            return r1
        L49:
            return r3
    }

    private static final void readChallengeHeader(okio.Buffer r7, java.util.List<okhttp3.Challenge> r8) throws java.io.EOFException {
            r0 = 0
        L1:
            r1 = r0
        L2:
            if (r1 != 0) goto Le
            skipCommasAndWhitespace(r7)
            java.lang.String r1 = readToken(r7)
            if (r1 != 0) goto Le
            return
        Le:
            boolean r2 = skipCommasAndWhitespace(r7)
            java.lang.String r3 = readToken(r7)
            if (r3 != 0) goto L2c
            boolean r7 = r7.exhausted()
            if (r7 != 0) goto L1f
            return
        L1f:
            okhttp3.Challenge r7 = new okhttp3.Challenge
            java.util.Map r0 = kotlin.collections.MapsKt.emptyMap()
            r7.<init>(r1, r0)
            r8.add(r7)
            return
        L2c:
            r4 = 61
            int r5 = okhttp3.internal.Util.skipAll(r7, r4)
            boolean r6 = skipCommasAndWhitespace(r7)
            if (r2 != 0) goto L5e
            if (r6 != 0) goto L40
            boolean r2 = r7.exhausted()
            if (r2 == 0) goto L5e
        L40:
            okhttp3.Challenge r2 = new okhttp3.Challenge
            java.lang.String r4 = "="
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            java.lang.String r4 = kotlin.text.StringsKt.repeat(r4, r5)
            java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r4)
            java.util.Map r3 = java.util.Collections.singletonMap(r0, r3)
            java.lang.String r4 = "singletonMap<String, Str…ek + \"=\".repeat(eqCount))"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
            r2.<init>(r1, r3)
            r8.add(r2)
            goto L1
        L5e:
            java.util.LinkedHashMap r2 = new java.util.LinkedHashMap
            r2.<init>()
            java.util.Map r2 = (java.util.Map) r2
            int r6 = okhttp3.internal.Util.skipAll(r7, r4)
            int r5 = r5 + r6
        L6a:
            if (r3 != 0) goto L7b
            java.lang.String r3 = readToken(r7)
            boolean r5 = skipCommasAndWhitespace(r7)
            if (r5 == 0) goto L77
            goto L7d
        L77:
            int r5 = okhttp3.internal.Util.skipAll(r7, r4)
        L7b:
            if (r5 != 0) goto L88
        L7d:
            okhttp3.Challenge r4 = new okhttp3.Challenge
            r4.<init>(r1, r2)
            r8.add(r4)
            r1 = r3
            goto L2
        L88:
            r6 = 1
            if (r5 <= r6) goto L8c
            return
        L8c:
            boolean r6 = skipCommasAndWhitespace(r7)
            if (r6 == 0) goto L93
            return
        L93:
            r6 = 34
            boolean r6 = startsWith(r7, r6)
            if (r6 == 0) goto La0
            java.lang.String r6 = readQuotedString(r7)
            goto La4
        La0:
            java.lang.String r6 = readToken(r7)
        La4:
            if (r6 != 0) goto La7
            return
        La7:
            java.lang.Object r3 = r2.put(r3, r6)
            java.lang.String r3 = (java.lang.String) r3
            if (r3 == 0) goto Lb0
            return
        Lb0:
            boolean r3 = skipCommasAndWhitespace(r7)
            if (r3 != 0) goto Lbd
            boolean r3 = r7.exhausted()
            if (r3 != 0) goto Lbd
            return
        Lbd:
            r3 = r0
            goto L6a
    }

    private static final java.lang.String readQuotedString(okio.Buffer r12) throws java.io.EOFException {
            byte r0 = r12.readByte()
            r1 = 34
            if (r0 != r1) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            if (r0 == 0) goto L48
            okio.Buffer r0 = new okio.Buffer
            r0.<init>()
        L12:
            okio.ByteString r2 = okhttp3.internal.http.HttpHeaders.QUOTED_STRING_DELIMITERS
            long r2 = r12.indexOfElement(r2)
            r4 = -1
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r5 = 0
            if (r4 != 0) goto L20
            return r5
        L20:
            byte r4 = r12.getByte(r2)
            if (r4 != r1) goto L31
            r0.write(r12, r2)
            r12.readByte()
            java.lang.String r12 = r0.readUtf8()
            return r12
        L31:
            long r6 = r12.size()
            r8 = 1
            long r10 = r2 + r8
            int r4 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r4 != 0) goto L3e
            return r5
        L3e:
            r0.write(r12, r2)
            r12.readByte()
            r0.write(r12, r8)
            goto L12
        L48:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Failed requirement."
            java.lang.String r0 = r0.toString()
            r12.<init>(r0)
            throw r12
    }

    private static final java.lang.String readToken(okio.Buffer r4) {
            okio.ByteString r0 = okhttp3.internal.http.HttpHeaders.TOKEN_DELIMITERS
            long r0 = r4.indexOfElement(r0)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L10
            long r0 = r4.size()
        L10:
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L1b
            java.lang.String r4 = r4.readUtf8(r0)
            goto L1c
        L1b:
            r4 = 0
        L1c:
            return r4
    }

    public static final void receiveHeaders(okhttp3.CookieJar r1, okhttp3.HttpUrl r2, okhttp3.Headers r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "url"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "headers"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.CookieJar r0 = okhttp3.CookieJar.NO_COOKIES
            if (r1 != r0) goto L14
            return
        L14:
            okhttp3.Cookie$Companion r0 = okhttp3.Cookie.Companion
            java.util.List r3 = r0.parseAll(r2, r3)
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto L21
            return
        L21:
            r1.saveFromResponse(r2, r3)
            return
    }

    private static final boolean skipCommasAndWhitespace(okio.Buffer r5) {
            r0 = 0
            r1 = 1
            r2 = r0
        L3:
            boolean r3 = r5.exhausted()
            if (r3 != 0) goto L2a
            r3 = 0
            byte r3 = r5.getByte(r3)
            r4 = 44
            if (r3 != r4) goto L18
            r5.readByte()
            r2 = r1
            goto L3
        L18:
            r4 = 32
            if (r3 != r4) goto L1e
        L1c:
            r3 = r1
            goto L24
        L1e:
            r4 = 9
            if (r3 != r4) goto L23
            goto L1c
        L23:
            r3 = r0
        L24:
            if (r3 == 0) goto L2a
            r5.readByte()
            goto L3
        L2a:
            return r2
    }

    private static final boolean startsWith(okio.Buffer r2, byte r3) {
            boolean r0 = r2.exhausted()
            if (r0 != 0) goto L10
            r0 = 0
            byte r2 = r2.getByte(r0)
            if (r2 != r3) goto L10
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }
}
