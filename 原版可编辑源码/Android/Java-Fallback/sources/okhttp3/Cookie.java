package okhttp3;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\f\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u000b\u0018\u0000 &2\u00020\u0001:\u0002%&BO\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0003\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\n\u0012\u0006\u0010\f\u001a\u00020\n\u0012\u0006\u0010\r\u001a\u00020\n¢\u0006\u0002\u0010\u000eJ\r\u0010\u0007\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u0012J\u0013\u0010\u0013\u001a\u00020\n2\b\u0010\u0014\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\r\u0010\u0005\u001a\u00020\u0006H\u0007¢\u0006\u0002\b\u0015J\b\u0010\u0016\u001a\u00020\u0017H\u0017J\r\u0010\r\u001a\u00020\nH\u0007¢\u0006\u0002\b\u0018J\r\u0010\u000b\u001a\u00020\nH\u0007¢\u0006\u0002\b\u0019J\u000e\u0010\u001a\u001a\u00020\n2\u0006\u0010\u001b\u001a\u00020\u001cJ\r\u0010\u0002\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u001dJ\r\u0010\b\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u001eJ\r\u0010\f\u001a\u00020\nH\u0007¢\u0006\u0002\b\u001fJ\r\u0010\t\u001a\u00020\nH\u0007¢\u0006\u0002\b J\b\u0010!\u001a\u00020\u0003H\u0016J\u0015\u0010!\u001a\u00020\u00032\u0006\u0010\"\u001a\u00020\nH\u0000¢\u0006\u0002\b#J\r\u0010\u0004\u001a\u00020\u0003H\u0007¢\u0006\u0002\b$R\u0013\u0010\u0007\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\u000fR\u0013\u0010\u0005\u001a\u00020\u00068\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0010R\u0013\u0010\r\u001a\u00020\n8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u0011R\u0013\u0010\u000b\u001a\u00020\n8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\u0011R\u0013\u0010\u0002\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u000fR\u0013\u0010\b\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\u000fR\u0013\u0010\f\u001a\u00020\n8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u0011R\u0013\u0010\t\u001a\u00020\n8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\u0011R\u0013\u0010\u0004\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u000f¨\u0006'"}, d2 = {"Lokhttp3/Cookie;", "", "name", "", "value", "expiresAt", "", "domain", "path", "secure", "", "httpOnly", "persistent", "hostOnly", "(Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;ZZZZ)V", "()Ljava/lang/String;", "()J", "()Z", "-deprecated_domain", "equals", "other", "-deprecated_expiresAt", "hashCode", "", "-deprecated_hostOnly", "-deprecated_httpOnly", "matches", "url", "Lokhttp3/HttpUrl;", "-deprecated_name", "-deprecated_path", "-deprecated_persistent", "-deprecated_secure", "toString", "forObsoleteRfc2965", "toString$okhttp", "-deprecated_value", "Builder", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class Cookie {
    public static final okhttp3.Cookie.Companion Companion = null;
    private static final java.util.regex.Pattern DAY_OF_MONTH_PATTERN = null;
    private static final java.util.regex.Pattern MONTH_PATTERN = null;
    private static final java.util.regex.Pattern TIME_PATTERN = null;
    private static final java.util.regex.Pattern YEAR_PATTERN = null;
    private final java.lang.String domain;
    private final long expiresAt;
    private final boolean hostOnly;
    private final boolean httpOnly;
    private final java.lang.String name;
    private final java.lang.String path;
    private final boolean persistent;
    private final boolean secure;
    private final java.lang.String value;

    @kotlin.Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0006\u0010\u000f\u001a\u00020\u0010J\u000e\u0010\u0003\u001a\u00020\u00002\u0006\u0010\u0003\u001a\u00020\u0004J\u0018\u0010\u0003\u001a\u00020\u00002\u0006\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\bH\u0002J\u000e\u0010\u0005\u001a\u00020\u00002\u0006\u0010\u0005\u001a\u00020\u0006J\u000e\u0010\u0011\u001a\u00020\u00002\u0006\u0010\u0003\u001a\u00020\u0004J\u0006\u0010\t\u001a\u00020\u0000J\u000e\u0010\n\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u0004J\u000e\u0010\u000b\u001a\u00020\u00002\u0006\u0010\u000b\u001a\u00020\u0004J\u0006\u0010\r\u001a\u00020\u0000J\u000e\u0010\u000e\u001a\u00020\u00002\u0006\u0010\u000e\u001a\u00020\u0004R\u0010\u0010\u0003\u001a\u0004\u0018\u00010\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u0004\u0018\u00010\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u000e\u001a\u0004\u0018\u00010\u0004X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lokhttp3/Cookie$Builder;", "", "()V", "domain", "", "expiresAt", "", "hostOnly", "", "httpOnly", "name", "path", "persistent", "secure", "value", "build", "Lokhttp3/Cookie;", "hostOnlyDomain", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Builder {
        private java.lang.String domain;
        private long expiresAt;
        private boolean hostOnly;
        private boolean httpOnly;
        private java.lang.String name;
        private java.lang.String path;
        private boolean persistent;
        private boolean secure;
        private java.lang.String value;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 253402300799999(0xe677d21fdbff, double:1.251973714024093E-309)
                r2.expiresAt = r0
                java.lang.String r0 = "/"
                r2.path = r0
                return
        }

        private final okhttp3.Cookie.Builder domain(java.lang.String r3, boolean r4) {
                r2 = this;
                r0 = r2
                okhttp3.Cookie$Builder r0 = (okhttp3.Cookie.Builder) r0
                java.lang.String r1 = okhttp3.internal.HostnamesKt.toCanonicalHost(r3)
                if (r1 == 0) goto Le
                r0.domain = r1
                r0.hostOnly = r4
                return r0
            Le:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "unexpected domain: "
                java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r3)
                r4.<init>(r3)
                throw r4
        }

        public final okhttp3.Cookie build() {
                r13 = this;
                okhttp3.Cookie r12 = new okhttp3.Cookie
                java.lang.String r1 = r13.name
                if (r1 == 0) goto L30
                java.lang.String r2 = r13.value
                if (r2 == 0) goto L28
                long r3 = r13.expiresAt
                java.lang.String r5 = r13.domain
                if (r5 == 0) goto L20
                java.lang.String r6 = r13.path
                boolean r7 = r13.secure
                boolean r8 = r13.httpOnly
                boolean r9 = r13.persistent
                boolean r10 = r13.hostOnly
                r11 = 0
                r0 = r12
                r0.<init>(r1, r2, r3, r5, r6, r7, r8, r9, r10, r11)
                return r12
            L20:
                java.lang.NullPointerException r0 = new java.lang.NullPointerException
                java.lang.String r1 = "builder.domain == null"
                r0.<init>(r1)
                throw r0
            L28:
                java.lang.NullPointerException r0 = new java.lang.NullPointerException
                java.lang.String r1 = "builder.value == null"
                r0.<init>(r1)
                throw r0
            L30:
                java.lang.NullPointerException r0 = new java.lang.NullPointerException
                java.lang.String r1 = "builder.name == null"
                r0.<init>(r1)
                throw r0
        }

        public final okhttp3.Cookie.Builder domain(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "domain"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = 0
                okhttp3.Cookie$Builder r2 = r1.domain(r2, r0)
                return r2
        }

        public final okhttp3.Cookie.Builder expiresAt(long r5) {
                r4 = this;
                r0 = r4
                okhttp3.Cookie$Builder r0 = (okhttp3.Cookie.Builder) r0
                r1 = 0
                int r1 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
                if (r1 > 0) goto Lb
                r5 = -9223372036854775808
            Lb:
                r1 = 253402300799999(0xe677d21fdbff, double:1.251973714024093E-309)
                int r3 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
                if (r3 <= 0) goto L15
                r5 = r1
            L15:
                r0.expiresAt = r5
                r5 = 1
                r0.persistent = r5
                return r0
        }

        public final okhttp3.Cookie.Builder hostOnlyDomain(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "domain"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = 1
                okhttp3.Cookie$Builder r2 = r1.domain(r2, r0)
                return r2
        }

        public final okhttp3.Cookie.Builder httpOnly() {
                r2 = this;
                r0 = r2
                okhttp3.Cookie$Builder r0 = (okhttp3.Cookie.Builder) r0
                r1 = 1
                r0.httpOnly = r1
                return r0
        }

        public final okhttp3.Cookie.Builder name(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.Cookie$Builder r0 = (okhttp3.Cookie.Builder) r0
                r1 = r3
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                java.lang.CharSequence r1 = kotlin.text.StringsKt.trim(r1)
                java.lang.String r1 = r1.toString()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)
                if (r1 == 0) goto L1c
                r0.name = r3
                return r0
            L1c:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "name is not trimmed"
                java.lang.String r0 = r0.toString()
                r3.<init>(r0)
                throw r3
        }

        public final okhttp3.Cookie.Builder path(java.lang.String r6) {
                r5 = this;
                java.lang.String r0 = "path"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                r0 = r5
                okhttp3.Cookie$Builder r0 = (okhttp3.Cookie.Builder) r0
                java.lang.String r1 = "/"
                r2 = 0
                r3 = 2
                r4 = 0
                boolean r1 = kotlin.text.StringsKt.startsWith$default(r6, r1, r2, r3, r4)
                if (r1 == 0) goto L16
                r0.path = r6
                return r0
            L16:
                java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "path must start with '/'"
                java.lang.String r0 = r0.toString()
                r6.<init>(r0)
                throw r6
        }

        public final okhttp3.Cookie.Builder secure() {
                r2 = this;
                r0 = r2
                okhttp3.Cookie$Builder r0 = (okhttp3.Cookie.Builder) r0
                r1 = 1
                r0.secure = r1
                return r0
        }

        public final okhttp3.Cookie.Builder value(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.Cookie$Builder r0 = (okhttp3.Cookie.Builder) r0
                r1 = r3
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                java.lang.CharSequence r1 = kotlin.text.StringsKt.trim(r1)
                java.lang.String r1 = r1.toString()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)
                if (r1 == 0) goto L1c
                r0.value = r3
                return r0
            L1c:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "value is not trimmed"
                java.lang.String r0 = r0.toString()
                r3.<init>(r0)
                throw r3
        }
    }

    @kotlin.Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J(\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J\u0018\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\f2\u0006\u0010\u0013\u001a\u00020\fH\u0002J'\u0010\u0014\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\fH\u0000¢\u0006\u0002\b\u001bJ\u001a\u0010\u0014\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\fH\u0007J\u001e\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00150\u001d2\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001e\u001a\u00020\u001fH\u0007J\u0010\u0010 \u001a\u00020\f2\u0006\u0010!\u001a\u00020\fH\u0002J \u0010\"\u001a\u00020\u00172\u0006\u0010!\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\nH\u0002J\u0010\u0010#\u001a\u00020\u00172\u0006\u0010!\u001a\u00020\fH\u0002J\u0018\u0010$\u001a\u00020\u00102\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010%\u001a\u00020\fH\u0002R\u0016\u0010\u0003\u001a\n \u0005*\u0004\u0018\u00010\u00040\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0006\u001a\n \u0005*\u0004\u0018\u00010\u00040\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0007\u001a\n \u0005*\u0004\u0018\u00010\u00040\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\b\u001a\n \u0005*\u0004\u0018\u00010\u00040\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006&"}, d2 = {"Lokhttp3/Cookie$Companion;", "", "()V", "DAY_OF_MONTH_PATTERN", "Ljava/util/regex/Pattern;", "kotlin.jvm.PlatformType", "MONTH_PATTERN", "TIME_PATTERN", "YEAR_PATTERN", "dateCharacterOffset", "", "input", "", "pos", "limit", "invert", "", "domainMatch", "urlHost", "domain", "parse", "Lokhttp3/Cookie;", "currentTimeMillis", "", "url", "Lokhttp3/HttpUrl;", "setCookie", "parse$okhttp", "parseAll", "", "headers", "Lokhttp3/Headers;", "parseDomain", "s", "parseExpires", "parseMaxAge", "pathMatch", "path", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public static final boolean access$domainMatch(okhttp3.Cookie.Companion r0, java.lang.String r1, java.lang.String r2) {
                boolean r0 = r0.domainMatch(r1, r2)
                return r0
        }

        public static final boolean access$pathMatch(okhttp3.Cookie.Companion r0, okhttp3.HttpUrl r1, java.lang.String r2) {
                boolean r0 = r0.pathMatch(r1, r2)
                return r0
        }

        private final int dateCharacterOffset(java.lang.String r6, int r7, int r8, boolean r9) {
                r5 = this;
            L0:
                if (r7 >= r8) goto L49
                int r0 = r7 + 1
                char r1 = r6.charAt(r7)
                r2 = 32
                r3 = 1
                r4 = 0
                if (r1 >= r2) goto L12
                r2 = 9
                if (r1 != r2) goto L41
            L12:
                r2 = 127(0x7f, float:1.78E-43)
                if (r1 >= r2) goto L41
                r2 = 57
                if (r1 > r2) goto L20
                r2 = 48
                if (r2 > r1) goto L20
                r2 = r3
                goto L21
            L20:
                r2 = r4
            L21:
                if (r2 != 0) goto L41
                r2 = 122(0x7a, float:1.71E-43)
                if (r1 > r2) goto L2d
                r2 = 97
                if (r2 > r1) goto L2d
                r2 = r3
                goto L2e
            L2d:
                r2 = r4
            L2e:
                if (r2 != 0) goto L41
                r2 = 90
                if (r1 > r2) goto L3a
                r2 = 65
                if (r2 > r1) goto L3a
                r2 = r3
                goto L3b
            L3a:
                r2 = r4
            L3b:
                if (r2 != 0) goto L41
                r2 = 58
                if (r1 != r2) goto L42
            L41:
                r4 = r3
            L42:
                r1 = r9 ^ 1
                if (r4 != r1) goto L47
                return r7
            L47:
                r7 = r0
                goto L0
            L49:
                return r8
        }

        private final boolean domainMatch(java.lang.String r5, java.lang.String r6) {
                r4 = this;
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r5, r6)
                r1 = 1
                if (r0 == 0) goto L8
                return r1
            L8:
                r0 = 2
                r2 = 0
                r3 = 0
                boolean r0 = kotlin.text.StringsKt.endsWith$default(r5, r6, r3, r0, r2)
                if (r0 == 0) goto L2a
                int r0 = r5.length()
                int r6 = r6.length()
                int r0 = r0 - r6
                int r0 = r0 - r1
                char r6 = r5.charAt(r0)
                r0 = 46
                if (r6 != r0) goto L2a
                boolean r5 = okhttp3.internal.Util.canParseAsIpAddress(r5)
                if (r5 != 0) goto L2a
                goto L2b
            L2a:
                r1 = r3
            L2b:
                return r1
        }

        private final java.lang.String parseDomain(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "."
                r1 = 0
                r2 = 2
                r3 = 0
                boolean r1 = kotlin.text.StringsKt.endsWith$default(r5, r0, r1, r2, r3)
                r1 = r1 ^ 1
                if (r1 == 0) goto L20
                java.lang.CharSequence r0 = (java.lang.CharSequence) r0
                java.lang.String r5 = kotlin.text.StringsKt.removePrefix(r5, r0)
                java.lang.String r5 = okhttp3.internal.HostnamesKt.toCanonicalHost(r5)
                if (r5 == 0) goto L1a
                return r5
            L1a:
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                r5.<init>()
                throw r5
            L20:
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Failed requirement."
                java.lang.String r0 = r0.toString()
                r5.<init>(r0)
                throw r5
        }

        private final long parseExpires(java.lang.String r23, int r24, int r25) {
                r22 = this;
                r0 = r22
                r1 = r23
                r2 = r25
                r3 = 0
                r4 = r24
                int r4 = r0.dateCharacterOffset(r1, r4, r2, r3)
                java.util.regex.Pattern r5 = okhttp3.Cookie.access$getTIME_PATTERN$cp()
                r6 = r1
                java.lang.CharSequence r6 = (java.lang.CharSequence) r6
                java.util.regex.Matcher r5 = r5.matcher(r6)
                r6 = -1
                r7 = r6
                r8 = r7
                r9 = r8
                r10 = r9
                r11 = r10
                r12 = r11
            L1f:
                r13 = 2
                r14 = 1
                if (r4 >= r2) goto Lef
                int r15 = r4 + 1
                int r15 = r0.dateCharacterOffset(r1, r15, r2, r14)
                r5.region(r4, r15)
                java.lang.String r4 = "matcher.group(1)"
                if (r8 != r6) goto L66
                java.util.regex.Pattern r3 = okhttp3.Cookie.access$getTIME_PATTERN$cp()
                java.util.regex.Matcher r3 = r5.usePattern(r3)
                boolean r3 = r3.matches()
                if (r3 == 0) goto L66
                java.lang.String r3 = r5.group(r14)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                int r8 = java.lang.Integer.parseInt(r3)
                java.lang.String r3 = r5.group(r13)
                java.lang.String r4 = "matcher.group(2)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                int r11 = java.lang.Integer.parseInt(r3)
                r3 = 3
                java.lang.String r3 = r5.group(r3)
                java.lang.String r4 = "matcher.group(3)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                int r12 = java.lang.Integer.parseInt(r3)
                goto Le6
            L66:
                if (r9 != r6) goto L82
                java.util.regex.Pattern r3 = okhttp3.Cookie.access$getDAY_OF_MONTH_PATTERN$cp()
                java.util.regex.Matcher r3 = r5.usePattern(r3)
                boolean r3 = r3.matches()
                if (r3 == 0) goto L82
                java.lang.String r3 = r5.group(r14)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                int r9 = java.lang.Integer.parseInt(r3)
                goto Le6
            L82:
                if (r10 != r6) goto Lcb
                java.util.regex.Pattern r3 = okhttp3.Cookie.access$getMONTH_PATTERN$cp()
                java.util.regex.Matcher r3 = r5.usePattern(r3)
                boolean r3 = r3.matches()
                if (r3 == 0) goto Lcb
                java.lang.String r3 = r5.group(r14)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                java.util.Locale r4 = java.util.Locale.US
                java.lang.String r10 = "US"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r10)
                java.lang.String r3 = r3.toLowerCase(r4)
                java.lang.String r4 = "this as java.lang.String).toLowerCase(locale)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                java.util.regex.Pattern r4 = okhttp3.Cookie.access$getMONTH_PATTERN$cp()
                java.lang.String r4 = r4.pattern()
                java.lang.String r10 = "MONTH_PATTERN.pattern()"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r10)
                r16 = r4
                java.lang.CharSequence r16 = (java.lang.CharSequence) r16
                r18 = 0
                r19 = 0
                r20 = 6
                r21 = 0
                r17 = r3
                int r3 = kotlin.text.StringsKt.indexOf$default(r16, r17, r18, r19, r20, r21)
                int r10 = r3 / 4
                goto Le6
            Lcb:
                if (r7 != r6) goto Le6
                java.util.regex.Pattern r3 = okhttp3.Cookie.access$getYEAR_PATTERN$cp()
                java.util.regex.Matcher r3 = r5.usePattern(r3)
                boolean r3 = r3.matches()
                if (r3 == 0) goto Le6
                java.lang.String r3 = r5.group(r14)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                int r7 = java.lang.Integer.parseInt(r3)
            Le6:
                int r15 = r15 + 1
                r3 = 0
                int r4 = r0.dateCharacterOffset(r1, r15, r2, r3)
                goto L1f
            Lef:
                r1 = 70
                if (r1 > r7) goto Lf9
                r2 = 100
                if (r7 >= r2) goto Lf9
                r2 = r14
                goto Lfa
            Lf9:
                r2 = 0
            Lfa:
                if (r2 == 0) goto Lfe
                int r7 = r7 + 1900
            Lfe:
                if (r7 < 0) goto L104
                if (r7 >= r1) goto L104
                r1 = r14
                goto L105
            L104:
                r1 = 0
            L105:
                if (r1 == 0) goto L109
                int r7 = r7 + 2000
            L109:
                r1 = 1601(0x641, float:2.243E-42)
                if (r7 < r1) goto L10f
                r1 = r14
                goto L110
            L10f:
                r1 = 0
            L110:
                java.lang.String r2 = "Failed requirement."
                if (r1 == 0) goto L1a7
                if (r10 == r6) goto L118
                r1 = r14
                goto L119
            L118:
                r1 = 0
            L119:
                if (r1 == 0) goto L19d
                if (r14 > r9) goto L123
                r1 = 32
                if (r9 >= r1) goto L123
                r1 = r14
                goto L124
            L123:
                r1 = 0
            L124:
                if (r1 == 0) goto L193
                if (r8 < 0) goto L12e
                r1 = 24
                if (r8 >= r1) goto L12e
                r1 = r14
                goto L12f
            L12e:
                r1 = 0
            L12f:
                if (r1 == 0) goto L189
                r1 = 60
                if (r11 < 0) goto L139
                if (r11 >= r1) goto L139
                r3 = r14
                goto L13a
            L139:
                r3 = 0
            L13a:
                if (r3 == 0) goto L17f
                if (r12 < 0) goto L142
                if (r12 >= r1) goto L142
                r1 = r14
                goto L143
            L142:
                r1 = 0
            L143:
                if (r1 == 0) goto L175
                java.util.GregorianCalendar r1 = new java.util.GregorianCalendar
                java.util.TimeZone r2 = okhttp3.internal.Util.UTC
                r1.<init>(r2)
                r2 = 0
                r1.setLenient(r2)
                r1.set(r14, r7)
                int r10 = r10 - r14
                r1.set(r13, r10)
                r2 = 5
                r1.set(r2, r9)
                r2 = 11
                r1.set(r2, r8)
                r2 = 12
                r1.set(r2, r11)
                r2 = 13
                r1.set(r2, r12)
                r2 = 14
                r3 = 0
                r1.set(r2, r3)
                long r1 = r1.getTimeInMillis()
                return r1
            L175:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = r2.toString()
                r1.<init>(r2)
                throw r1
            L17f:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = r2.toString()
                r1.<init>(r2)
                throw r1
            L189:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = r2.toString()
                r1.<init>(r2)
                throw r1
            L193:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = r2.toString()
                r1.<init>(r2)
                throw r1
            L19d:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = r2.toString()
                r1.<init>(r2)
                throw r1
            L1a7:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = r2.toString()
                r1.<init>(r2)
                throw r1
        }

        private final long parseMaxAge(java.lang.String r7) {
                r6 = this;
                r0 = -9223372036854775808
                long r2 = java.lang.Long.parseLong(r7)     // Catch: java.lang.NumberFormatException -> Lf
                r4 = 0
                int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r7 > 0) goto Ld
                goto Le
            Ld:
                r0 = r2
            Le:
                return r0
            Lf:
                r2 = move-exception
                r3 = r7
                java.lang.CharSequence r3 = (java.lang.CharSequence) r3
                kotlin.text.Regex r4 = new kotlin.text.Regex
                java.lang.String r5 = "-?\\d+"
                r4.<init>(r5)
                boolean r3 = r4.matches(r3)
                if (r3 == 0) goto L32
                r2 = 0
                r3 = 2
                r4 = 0
                java.lang.String r5 = "-"
                boolean r7 = kotlin.text.StringsKt.startsWith$default(r7, r5, r2, r3, r4)
                if (r7 == 0) goto L2c
                goto L31
            L2c:
                r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            L31:
                return r0
            L32:
                throw r2
        }

        private final boolean pathMatch(okhttp3.HttpUrl r6, java.lang.String r7) {
                r5 = this;
                java.lang.String r6 = r6.encodedPath()
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r7)
                r1 = 1
                if (r0 == 0) goto Lc
                return r1
            Lc:
                r0 = 0
                r2 = 2
                r3 = 0
                boolean r4 = kotlin.text.StringsKt.startsWith$default(r6, r7, r3, r2, r0)
                if (r4 == 0) goto L2b
                java.lang.String r4 = "/"
                boolean r0 = kotlin.text.StringsKt.endsWith$default(r7, r4, r3, r2, r0)
                if (r0 == 0) goto L1e
                return r1
            L1e:
                int r7 = r7.length()
                char r6 = r6.charAt(r7)
                r7 = 47
                if (r6 != r7) goto L2b
                return r1
            L2b:
                return r3
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.Cookie parse(okhttp3.HttpUrl r3, java.lang.String r4) {
                r2 = this;
                java.lang.String r0 = "url"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "setCookie"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                long r0 = java.lang.System.currentTimeMillis()
                okhttp3.Cookie r3 = r2.parse$okhttp(r0, r3, r4)
                return r3
        }

        public final okhttp3.Cookie parse$okhttp(long r26, okhttp3.HttpUrl r28, java.lang.String r29) {
                r25 = this;
                r0 = r25
                r7 = r29
                java.lang.String r1 = "url"
                r8 = r28
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r1)
                java.lang.String r1 = "setCookie"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r1)
                r2 = 59
                r3 = 0
                r4 = 0
                r5 = 6
                r6 = 0
                r1 = r29
                int r9 = okhttp3.internal.Util.delimiterOffset$default(r1, r2, r3, r4, r5, r6)
                r2 = 61
                r5 = 2
                r4 = r9
                int r1 = okhttp3.internal.Util.delimiterOffset$default(r1, r2, r3, r4, r5, r6)
                r2 = 0
                if (r1 != r9) goto L28
                return r2
            L28:
                r3 = 0
                r4 = 1
                java.lang.String r11 = okhttp3.internal.Util.trimSubstring$default(r7, r3, r1, r4, r2)
                r5 = r11
                java.lang.CharSequence r5 = (java.lang.CharSequence) r5
                int r5 = r5.length()
                if (r5 != 0) goto L39
                r5 = r4
                goto L3a
            L39:
                r5 = r3
            L3a:
                if (r5 != 0) goto L173
                int r5 = okhttp3.internal.Util.indexOfControlOrNonAscii(r11)
                r6 = -1
                if (r5 == r6) goto L45
                goto L173
            L45:
                int r1 = r1 + r4
                java.lang.String r12 = okhttp3.internal.Util.trimSubstring(r7, r1, r9)
                int r1 = okhttp3.internal.Util.indexOfControlOrNonAscii(r12)
                if (r1 == r6) goto L51
                return r2
            L51:
                int r9 = r9 + r4
                int r1 = r29.length()
                r5 = -1
                r10 = r2
                r22 = r10
                r17 = r3
                r18 = r17
                r19 = r18
                r20 = r4
                r15 = r5
                r23 = 253402300799999(0xe677d21fdbff, double:1.251973714024093E-309)
            L69:
                if (r9 >= r1) goto Ld9
                r2 = 59
                int r2 = okhttp3.internal.Util.delimiterOffset(r7, r2, r9, r1)
                r13 = 61
                int r13 = okhttp3.internal.Util.delimiterOffset(r7, r13, r9, r2)
                java.lang.String r9 = okhttp3.internal.Util.trimSubstring(r7, r9, r13)
                if (r13 >= r2) goto L84
                int r13 = r13 + 1
                java.lang.String r13 = okhttp3.internal.Util.trimSubstring(r7, r13, r2)
                goto L86
            L84:
                java.lang.String r13 = ""
            L86:
                java.lang.String r14 = "expires"
                boolean r14 = kotlin.text.StringsKt.equals(r9, r14, r4)
                if (r14 == 0) goto L97
                int r9 = r13.length()     // Catch: java.lang.Throwable -> Ld5
                long r23 = r0.parseExpires(r13, r3, r9)     // Catch: java.lang.Throwable -> Ld5
                goto La3
            L97:
                java.lang.String r14 = "max-age"
                boolean r14 = kotlin.text.StringsKt.equals(r9, r14, r4)
                if (r14 == 0) goto La6
                long r15 = r0.parseMaxAge(r13)
            La3:
                r19 = r4
                goto Ld5
            La6:
                java.lang.String r14 = "domain"
                boolean r14 = kotlin.text.StringsKt.equals(r9, r14, r4)
                if (r14 == 0) goto Lb5
                java.lang.String r10 = r0.parseDomain(r13)     // Catch: java.lang.Throwable -> Ld5
                r20 = r3
                goto Ld5
            Lb5:
                java.lang.String r14 = "path"
                boolean r14 = kotlin.text.StringsKt.equals(r9, r14, r4)
                if (r14 == 0) goto Lc0
                r22 = r13
                goto Ld5
            Lc0:
                java.lang.String r13 = "secure"
                boolean r13 = kotlin.text.StringsKt.equals(r9, r13, r4)
                if (r13 == 0) goto Lcb
                r17 = r4
                goto Ld5
            Lcb:
                java.lang.String r13 = "httponly"
                boolean r9 = kotlin.text.StringsKt.equals(r9, r13, r4)
                if (r9 == 0) goto Ld5
                r18 = r4
            Ld5:
                int r9 = r2 + 1
                r2 = 0
                goto L69
            Ld9:
                r1 = -9223372036854775808
                int r4 = (r15 > r1 ? 1 : (r15 == r1 ? 0 : -1))
                if (r4 != 0) goto Le1
            Ldf:
                r13 = r1
                goto L111
            Le1:
                int r1 = (r15 > r5 ? 1 : (r15 == r5 ? 0 : -1))
                if (r1 == 0) goto L10f
                r1 = 9223372036854775(0x20c49ba5e353f7, double:4.663754807431093E-308)
                int r1 = (r15 > r1 ? 1 : (r15 == r1 ? 0 : -1))
                if (r1 > 0) goto Lf3
                r1 = 1000(0x3e8, float:1.401E-42)
                long r1 = (long) r1
                long r15 = r15 * r1
                goto Lf8
            Lf3:
                r15 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            Lf8:
                long r1 = r26 + r15
                int r4 = (r1 > r26 ? 1 : (r1 == r26 ? 0 : -1))
                if (r4 < 0) goto L108
                r4 = 253402300799999(0xe677d21fdbff, double:1.251973714024093E-309)
                int r6 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
                if (r6 <= 0) goto Ldf
                goto L10d
            L108:
                r4 = 253402300799999(0xe677d21fdbff, double:1.251973714024093E-309)
            L10d:
                r13 = r4
                goto L111
            L10f:
                r13 = r23
            L111:
                java.lang.String r1 = r28.host()
                if (r10 != 0) goto L11a
                r15 = r1
                r2 = 0
                goto L124
            L11a:
                boolean r2 = r0.domainMatch(r1, r10)
                if (r2 != 0) goto L122
                r2 = 0
                return r2
            L122:
                r2 = 0
                r15 = r10
            L124:
                int r1 = r1.length()
                int r4 = r15.length()
                if (r1 == r4) goto L13b
                okhttp3.internal.publicsuffix.PublicSuffixDatabase$Companion r1 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion
                okhttp3.internal.publicsuffix.PublicSuffixDatabase r1 = r1.get()
                java.lang.String r1 = r1.getEffectiveTldPlusOne(r15)
                if (r1 != 0) goto L13b
                return r2
            L13b:
                java.lang.String r1 = "/"
                r4 = r22
                if (r4 == 0) goto L14c
                r5 = 2
                boolean r2 = kotlin.text.StringsKt.startsWith$default(r4, r1, r3, r5, r2)
                if (r2 != 0) goto L149
                goto L14c
            L149:
                r16 = r4
                goto L16a
            L14c:
                java.lang.String r2 = r28.encodedPath()
                r4 = r2
                java.lang.CharSequence r4 = (java.lang.CharSequence) r4
                r5 = 47
                r6 = 0
                r7 = 0
                r8 = 6
                r9 = 0
                int r4 = kotlin.text.StringsKt.lastIndexOf$default(r4, r5, r6, r7, r8, r9)
                if (r4 == 0) goto L168
                java.lang.String r1 = r2.substring(r3, r4)
                java.lang.String r2 = "this as java.lang.String…ing(startIndex, endIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            L168:
                r16 = r1
            L16a:
                okhttp3.Cookie r1 = new okhttp3.Cookie
                r21 = 0
                r10 = r1
                r10.<init>(r11, r12, r13, r15, r16, r17, r18, r19, r20, r21)
                return r1
            L173:
                r1 = r2
                return r1
        }

        @kotlin.jvm.JvmStatic
        public final java.util.List<okhttp3.Cookie> parseAll(okhttp3.HttpUrl r5, okhttp3.Headers r6) {
                r4 = this;
                java.lang.String r0 = "url"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                java.lang.String r0 = "headers"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                java.lang.String r0 = "Set-Cookie"
                java.util.List r6 = r6.values(r0)
                int r0 = r6.size()
                r1 = 0
                r2 = 0
            L16:
                if (r2 >= r0) goto L35
                int r3 = r2 + 1
                java.lang.Object r2 = r6.get(r2)
                java.lang.String r2 = (java.lang.String) r2
                okhttp3.Cookie r2 = r4.parse(r5, r2)
                if (r2 != 0) goto L28
            L26:
                r2 = r3
                goto L16
            L28:
                if (r1 != 0) goto L31
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                java.util.List r1 = (java.util.List) r1
            L31:
                r1.add(r2)
                goto L26
            L35:
                if (r1 == 0) goto L41
                java.util.List r5 = java.util.Collections.unmodifiableList(r1)
                java.lang.String r6 = "{\n        Collections.un…ableList(cookies)\n      }"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r6)
                goto L45
            L41:
                java.util.List r5 = kotlin.collections.CollectionsKt.emptyList()
            L45:
                return r5
        }
    }

    static {
            okhttp3.Cookie$Companion r0 = new okhttp3.Cookie$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.Cookie.Companion = r0
            java.lang.String r0 = "(\\d{2,4})[^\\d]*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            okhttp3.Cookie.YEAR_PATTERN = r0
            java.lang.String r0 = "(?i)(jan|feb|mar|apr|may|jun|jul|aug|sep|oct|nov|dec).*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            okhttp3.Cookie.MONTH_PATTERN = r0
            java.lang.String r0 = "(\\d{1,2})[^\\d]*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            okhttp3.Cookie.DAY_OF_MONTH_PATTERN = r0
            java.lang.String r0 = "(\\d{1,2}):(\\d{1,2}):(\\d{1,2})[^\\d]*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            okhttp3.Cookie.TIME_PATTERN = r0
            return
    }

    private Cookie(java.lang.String r1, java.lang.String r2, long r3, java.lang.String r5, java.lang.String r6, boolean r7, boolean r8, boolean r9, boolean r10) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            r0.value = r2
            r0.expiresAt = r3
            r0.domain = r5
            r0.path = r6
            r0.secure = r7
            r0.httpOnly = r8
            r0.persistent = r9
            r0.hostOnly = r10
            return
    }

    public Cookie(java.lang.String r1, java.lang.String r2, long r3, java.lang.String r5, java.lang.String r6, boolean r7, boolean r8, boolean r9, boolean r10, kotlin.jvm.internal.DefaultConstructorMarker r11) {
            r0 = this;
            r0.<init>(r1, r2, r3, r5, r6, r7, r8, r9, r10)
            return
    }

    public static final java.util.regex.Pattern access$getDAY_OF_MONTH_PATTERN$cp() {
            java.util.regex.Pattern r0 = okhttp3.Cookie.DAY_OF_MONTH_PATTERN
            return r0
    }

    public static final java.util.regex.Pattern access$getMONTH_PATTERN$cp() {
            java.util.regex.Pattern r0 = okhttp3.Cookie.MONTH_PATTERN
            return r0
    }

    public static final java.util.regex.Pattern access$getTIME_PATTERN$cp() {
            java.util.regex.Pattern r0 = okhttp3.Cookie.TIME_PATTERN
            return r0
    }

    public static final java.util.regex.Pattern access$getYEAR_PATTERN$cp() {
            java.util.regex.Pattern r0 = okhttp3.Cookie.YEAR_PATTERN
            return r0
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.Cookie parse(okhttp3.HttpUrl r1, java.lang.String r2) {
            okhttp3.Cookie$Companion r0 = okhttp3.Cookie.Companion
            okhttp3.Cookie r1 = r0.parse(r1, r2)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final java.util.List<okhttp3.Cookie> parseAll(okhttp3.HttpUrl r1, okhttp3.Headers r2) {
            okhttp3.Cookie$Companion r0 = okhttp3.Cookie.Companion
            java.util.List r1 = r0.parseAll(r1, r2)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "domain", imports = {}))
    public final java.lang.String -deprecated_domain() {
            r1 = this;
            java.lang.String r0 = r1.domain
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "expiresAt", imports = {}))
    public final long -deprecated_expiresAt() {
            r2 = this;
            long r0 = r2.expiresAt
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "hostOnly", imports = {}))
    public final boolean -deprecated_hostOnly() {
            r1 = this;
            boolean r0 = r1.hostOnly
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "httpOnly", imports = {}))
    public final boolean -deprecated_httpOnly() {
            r1 = this;
            boolean r0 = r1.httpOnly
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "name", imports = {}))
    public final java.lang.String -deprecated_name() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "path", imports = {}))
    public final java.lang.String -deprecated_path() {
            r1 = this;
            java.lang.String r0 = r1.path
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "persistent", imports = {}))
    public final boolean -deprecated_persistent() {
            r1 = this;
            boolean r0 = r1.persistent
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "secure", imports = {}))
    public final boolean -deprecated_secure() {
            r1 = this;
            boolean r0 = r1.secure
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "value", imports = {}))
    public final java.lang.String -deprecated_value() {
            r1 = this;
            java.lang.String r0 = r1.value
            return r0
    }

    public final java.lang.String domain() {
            r1 = this;
            java.lang.String r0 = r1.domain
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            boolean r0 = r5 instanceof okhttp3.Cookie
            if (r0 == 0) goto L50
            okhttp3.Cookie r5 = (okhttp3.Cookie) r5
            java.lang.String r0 = r5.name
            java.lang.String r1 = r4.name
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L50
            java.lang.String r0 = r5.value
            java.lang.String r1 = r4.value
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L50
            long r0 = r5.expiresAt
            long r2 = r4.expiresAt
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L50
            java.lang.String r0 = r5.domain
            java.lang.String r1 = r4.domain
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L50
            java.lang.String r0 = r5.path
            java.lang.String r1 = r4.path
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L50
            boolean r0 = r5.secure
            boolean r1 = r4.secure
            if (r0 != r1) goto L50
            boolean r0 = r5.httpOnly
            boolean r1 = r4.httpOnly
            if (r0 != r1) goto L50
            boolean r0 = r5.persistent
            boolean r1 = r4.persistent
            if (r0 != r1) goto L50
            boolean r5 = r5.hostOnly
            boolean r0 = r4.hostOnly
            if (r5 != r0) goto L50
            r5 = 1
            goto L51
        L50:
            r5 = 0
        L51:
            return r5
    }

    public final long expiresAt() {
            r2 = this;
            long r0 = r2.expiresAt
            return r0
    }

    public int hashCode() {
            r4 = this;
            java.lang.String r0 = r4.name
            int r0 = r0.hashCode()
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.lang.String r0 = r4.value
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            long r2 = r4.expiresAt
            int r0 = java.lang.Long.hashCode(r2)
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.lang.String r0 = r4.domain
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.lang.String r0 = r4.path
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            boolean r0 = r4.secure
            int r0 = java.lang.Boolean.hashCode(r0)
            int r1 = r1 + r0
            int r1 = r1 * 31
            boolean r0 = r4.httpOnly
            int r0 = java.lang.Boolean.hashCode(r0)
            int r1 = r1 + r0
            int r1 = r1 * 31
            boolean r0 = r4.persistent
            int r0 = java.lang.Boolean.hashCode(r0)
            int r1 = r1 + r0
            int r1 = r1 * 31
            boolean r0 = r4.hostOnly
            int r0 = java.lang.Boolean.hashCode(r0)
            int r1 = r1 + r0
            return r1
    }

    public final boolean hostOnly() {
            r1 = this;
            boolean r0 = r1.hostOnly
            return r0
    }

    public final boolean httpOnly() {
            r1 = this;
            boolean r0 = r1.httpOnly
            return r0
    }

    public final boolean matches(okhttp3.HttpUrl r4) {
            r3 = this;
            java.lang.String r0 = "url"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r3.hostOnly
            if (r0 == 0) goto L14
            java.lang.String r0 = r4.host()
            java.lang.String r1 = r3.domain
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            goto L20
        L14:
            okhttp3.Cookie$Companion r0 = okhttp3.Cookie.Companion
            java.lang.String r1 = r4.host()
            java.lang.String r2 = r3.domain
            boolean r0 = okhttp3.Cookie.Companion.access$domainMatch(r0, r1, r2)
        L20:
            r1 = 0
            if (r0 != 0) goto L24
            return r1
        L24:
            okhttp3.Cookie$Companion r0 = okhttp3.Cookie.Companion
            java.lang.String r2 = r3.path
            boolean r0 = okhttp3.Cookie.Companion.access$pathMatch(r0, r4, r2)
            if (r0 != 0) goto L2f
            return r1
        L2f:
            boolean r0 = r3.secure
            if (r0 == 0) goto L39
            boolean r4 = r4.isHttps()
            if (r4 == 0) goto L3a
        L39:
            r1 = 1
        L3a:
            return r1
    }

    public final java.lang.String name() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public final java.lang.String path() {
            r1 = this;
            java.lang.String r0 = r1.path
            return r0
    }

    public final boolean persistent() {
            r1 = this;
            boolean r0 = r1.persistent
            return r0
    }

    public final boolean secure() {
            r1 = this;
            boolean r0 = r1.secure
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            r0 = 0
            java.lang.String r0 = r1.toString$okhttp(r0)
            return r0
    }

    public final java.lang.String toString$okhttp(boolean r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r5.name()
            r0.append(r1)
            r1 = 61
            r0.append(r1)
            java.lang.String r1 = r5.value()
            r0.append(r1)
            boolean r1 = r5.persistent()
            if (r1 == 0) goto L43
            long r1 = r5.expiresAt()
            r3 = -9223372036854775808
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L2e
            java.lang.String r1 = "; max-age=0"
            r0.append(r1)
            goto L43
        L2e:
            java.lang.String r1 = "; expires="
            r0.append(r1)
            java.util.Date r1 = new java.util.Date
            long r2 = r5.expiresAt()
            r1.<init>(r2)
            java.lang.String r1 = okhttp3.internal.http.DatesKt.toHttpDateString(r1)
            r0.append(r1)
        L43:
            boolean r1 = r5.hostOnly()
            if (r1 != 0) goto L5c
            java.lang.String r1 = "; domain="
            r0.append(r1)
            if (r6 == 0) goto L55
            java.lang.String r6 = "."
            r0.append(r6)
        L55:
            java.lang.String r6 = r5.domain()
            r0.append(r6)
        L5c:
            java.lang.String r6 = "; path="
            r0.append(r6)
            java.lang.String r6 = r5.path()
            r0.append(r6)
            boolean r6 = r5.secure()
            if (r6 == 0) goto L73
            java.lang.String r6 = "; secure"
            r0.append(r6)
        L73:
            boolean r6 = r5.httpOnly()
            if (r6 == 0) goto L7e
            java.lang.String r6 = "; httponly"
            r0.append(r6)
        L7e:
            java.lang.String r6 = r0.toString()
            java.lang.String r0 = "toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r6, r0)
            return r6
    }

    public final java.lang.String value() {
            r1 = this;
            java.lang.String r0 = r1.value
            return r0
    }
}
