package okhttp3;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0005\u0018\u00002\u00020\u0001B\u0017\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0002\u0010\u0005B#\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0014\u0010\u0006\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u0003\u0012\u0004\u0012\u00020\u00030\u0007¢\u0006\u0002\u0010\bJ\u001b\u0010\u0006\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u0003\u0012\u0004\u0012\u00020\u00030\u0007H\u0007¢\u0006\u0002\b\u000eJ\r\u0010\n\u001a\u00020\u000bH\u0007¢\u0006\u0002\b\u000fJ\u0013\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u0013\u001a\u00020\u0014H\u0016J\u000f\u0010\u0004\u001a\u0004\u0018\u00010\u0003H\u0007¢\u0006\u0002\b\u0015J\r\u0010\u0002\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u0016J\b\u0010\u0017\u001a\u00020\u0003H\u0016J\u000e\u0010\u0018\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u000bR!\u0010\u0006\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u0003\u0012\u0004\u0012\u00020\u00030\u00078G¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\tR\u0011\u0010\n\u001a\u00020\u000b8G¢\u0006\u0006\u001a\u0004\b\n\u0010\fR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u00038G¢\u0006\u0006\u001a\u0004\b\u0004\u0010\rR\u0013\u0010\u0002\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\r¨\u0006\u0019"}, d2 = {"Lokhttp3/Challenge;", "", "scheme", "", "realm", "(Ljava/lang/String;Ljava/lang/String;)V", "authParams", "", "(Ljava/lang/String;Ljava/util/Map;)V", "()Ljava/util/Map;", "charset", "Ljava/nio/charset/Charset;", "()Ljava/nio/charset/Charset;", "()Ljava/lang/String;", "-deprecated_authParams", "-deprecated_charset", "equals", "", "other", "hashCode", "", "-deprecated_realm", "-deprecated_scheme", "toString", "withCharset", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class Challenge {
    private final java.util.Map<java.lang.String, java.lang.String> authParams;
    private final java.lang.String scheme;

    public Challenge(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "scheme"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "realm"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.util.Map r3 = java.util.Collections.singletonMap(r0, r3)
            java.lang.String r0 = "singletonMap(\"realm\", realm)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r0)
            r1.<init>(r2, r3)
            return
    }

    public Challenge(java.lang.String r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            r4 = this;
            java.lang.String r0 = "scheme"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "authParams"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            r4.<init>()
            r4.scheme = r5
            java.util.LinkedHashMap r5 = new java.util.LinkedHashMap
            r5.<init>()
            java.util.Map r5 = (java.util.Map) r5
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L1e:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto L4e
            java.lang.Object r0 = r6.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            if (r1 != 0) goto L3a
            r1 = 0
            goto L4a
        L3a:
            java.util.Locale r2 = java.util.Locale.US
            java.lang.String r3 = "US"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            java.lang.String r1 = r1.toLowerCase(r2)
            java.lang.String r2 = "this as java.lang.String).toLowerCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
        L4a:
            r5.put(r1, r0)
            goto L1e
        L4e:
            java.util.Map r5 = java.util.Collections.unmodifiableMap(r5)
            java.lang.String r6 = "unmodifiableMap<String?, String>(newAuthParams)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r6)
            r4.authParams = r5
            return
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "authParams", imports = {}))
    public final java.util.Map<java.lang.String, java.lang.String> -deprecated_authParams() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.authParams
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "charset", imports = {}))
    public final java.nio.charset.Charset -deprecated_charset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "realm", imports = {}))
    public final java.lang.String -deprecated_realm() {
            r1 = this;
            java.lang.String r0 = r1.realm()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "scheme", imports = {}))
    public final java.lang.String -deprecated_scheme() {
            r1 = this;
            java.lang.String r0 = r1.scheme
            return r0
    }

    public final java.util.Map<java.lang.String, java.lang.String> authParams() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.authParams
            return r0
    }

    public final java.nio.charset.Charset charset() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.authParams
            java.lang.String r1 = "charset"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L16
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "forName(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)     // Catch: java.lang.Exception -> L16
            return r0
        L16:
            java.nio.charset.Charset r0 = java.nio.charset.StandardCharsets.ISO_8859_1
            java.lang.String r1 = "ISO_8859_1"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof okhttp3.Challenge
            if (r0 == 0) goto L1c
            okhttp3.Challenge r3 = (okhttp3.Challenge) r3
            java.lang.String r0 = r3.scheme
            java.lang.String r1 = r2.scheme
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L1c
            java.util.Map<java.lang.String, java.lang.String> r3 = r3.authParams
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.authParams
            boolean r3 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
            if (r3 == 0) goto L1c
            r3 = 1
            goto L1d
        L1c:
            r3 = 0
        L1d:
            return r3
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.scheme
            int r0 = r0.hashCode()
            r1 = 899(0x383, float:1.26E-42)
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.authParams
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            return r1
    }

    public final java.lang.String realm() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.authParams
            java.lang.String r1 = "realm"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public final java.lang.String scheme() {
            r1 = this;
            java.lang.String r0 = r1.scheme
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.scheme
            r0.append(r1)
            java.lang.String r1 = " authParams="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.authParams
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final okhttp3.Challenge withCharset(java.nio.charset.Charset r4) {
            r3 = this;
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.authParams
            java.util.Map r1 = kotlin.collections.MapsKt.toMutableMap(r1)
            java.lang.String r4 = r4.name()
            java.lang.String r2 = "charset.name()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r2)
            r1.put(r0, r4)
            okhttp3.Challenge r4 = new okhttp3.Challenge
            java.lang.String r0 = r3.scheme
            r4.<init>(r0, r1)
            return r4
    }
}
