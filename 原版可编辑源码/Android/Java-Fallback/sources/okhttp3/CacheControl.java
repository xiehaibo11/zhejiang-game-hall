package okhttp3;

@kotlin.Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\n\n\u0002\u0010\u000e\n\u0002\b\u0011\u0018\u0000 !2\u00020\u0001:\u0002 !Bq\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\n\u001a\u00020\u0003\u0012\u0006\u0010\u000b\u001a\u00020\u0006\u0012\u0006\u0010\f\u001a\u00020\u0006\u0012\u0006\u0010\r\u001a\u00020\u0003\u0012\u0006\u0010\u000e\u001a\u00020\u0003\u0012\u0006\u0010\u000f\u001a\u00020\u0003\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011¢\u0006\u0002\u0010\u0012J\r\u0010\u000f\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u0015J\r\u0010\u0005\u001a\u00020\u0006H\u0007¢\u0006\u0002\b\u0016J\r\u0010\u000b\u001a\u00020\u0006H\u0007¢\u0006\u0002\b\u0017J\r\u0010\f\u001a\u00020\u0006H\u0007¢\u0006\u0002\b\u0018J\r\u0010\n\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u0019J\r\u0010\u0002\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u001aJ\r\u0010\u0004\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u001bJ\r\u0010\u000e\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u001cJ\r\u0010\r\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\u001dJ\r\u0010\u0007\u001a\u00020\u0006H\u0007¢\u0006\u0002\b\u001eJ\b\u0010\u001f\u001a\u00020\u0011H\u0016R\u0010\u0010\u0010\u001a\u0004\u0018\u00010\u0011X\u0082\u000e¢\u0006\u0002\n\u0000R\u0013\u0010\u000f\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0013R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\u0013R\u0011\u0010\t\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\u0013R\u0013\u0010\u0005\u001a\u00020\u00068\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0014R\u0013\u0010\u000b\u001a\u00020\u00068\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\u0014R\u0013\u0010\f\u001a\u00020\u00068\u0007¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u0014R\u0013\u0010\n\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u0013R\u0013\u0010\u0002\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0013R\u0013\u0010\u0004\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u0013R\u0013\u0010\u000e\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u0013R\u0013\u0010\r\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u0013R\u0013\u0010\u0007\u001a\u00020\u00068\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\u0014¨\u0006\""}, d2 = {"Lokhttp3/CacheControl;", "", "noCache", "", "noStore", "maxAgeSeconds", "", "sMaxAgeSeconds", "isPrivate", "isPublic", "mustRevalidate", "maxStaleSeconds", "minFreshSeconds", "onlyIfCached", "noTransform", "immutable", "headerValue", "", "(ZZIIZZZIIZZZLjava/lang/String;)V", "()Z", "()I", "-deprecated_immutable", "-deprecated_maxAgeSeconds", "-deprecated_maxStaleSeconds", "-deprecated_minFreshSeconds", "-deprecated_mustRevalidate", "-deprecated_noCache", "-deprecated_noStore", "-deprecated_noTransform", "-deprecated_onlyIfCached", "-deprecated_sMaxAgeSeconds", "toString", "Builder", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class CacheControl {
    public static final okhttp3.CacheControl.Companion Companion = null;
    public static final okhttp3.CacheControl FORCE_CACHE = null;
    public static final okhttp3.CacheControl FORCE_NETWORK = null;
    private java.lang.String headerValue;
    private final boolean immutable;
    private final boolean isPrivate;
    private final boolean isPublic;
    private final int maxAgeSeconds;
    private final int maxStaleSeconds;
    private final int minFreshSeconds;
    private final boolean mustRevalidate;
    private final boolean noCache;
    private final boolean noStore;
    private final boolean noTransform;
    private final boolean onlyIfCached;
    private final int sMaxAgeSeconds;

    @kotlin.Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0006\u0010\r\u001a\u00020\u000eJ\u0006\u0010\u0003\u001a\u00020\u0000J\u0016\u0010\u000f\u001a\u00020\u00002\u0006\u0010\u000f\u001a\u00020\u00062\u0006\u0010\u0010\u001a\u00020\u0011J\u0016\u0010\u0012\u001a\u00020\u00002\u0006\u0010\u0012\u001a\u00020\u00062\u0006\u0010\u0010\u001a\u00020\u0011J\u0016\u0010\u0013\u001a\u00020\u00002\u0006\u0010\u0013\u001a\u00020\u00062\u0006\u0010\u0010\u001a\u00020\u0011J\u0006\u0010\t\u001a\u00020\u0000J\u0006\u0010\n\u001a\u00020\u0000J\u0006\u0010\u000b\u001a\u00020\u0000J\u0006\u0010\f\u001a\u00020\u0000J\f\u0010\u0014\u001a\u00020\u0006*\u00020\u0015H\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lokhttp3/CacheControl$Builder;", "", "()V", "immutable", "", "maxAgeSeconds", "", "maxStaleSeconds", "minFreshSeconds", "noCache", "noStore", "noTransform", "onlyIfCached", "build", "Lokhttp3/CacheControl;", "maxAge", "timeUnit", "Ljava/util/concurrent/TimeUnit;", "maxStale", "minFresh", "clampToInt", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Builder {
        private boolean immutable;
        private int maxAgeSeconds;
        private int maxStaleSeconds;
        private int minFreshSeconds;
        private boolean noCache;
        private boolean noStore;
        private boolean noTransform;
        private boolean onlyIfCached;

        public Builder() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.maxAgeSeconds = r0
                r1.maxStaleSeconds = r0
                r1.minFreshSeconds = r0
                return
        }

        private final int clampToInt(long r3) {
                r2 = this;
                r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
                int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r0 <= 0) goto Lb
                r3 = 2147483647(0x7fffffff, float:NaN)
                goto Lc
            Lb:
                int r3 = (int) r3
            Lc:
                return r3
        }

        public final okhttp3.CacheControl build() {
                r17 = this;
                r0 = r17
                okhttp3.CacheControl r16 = new okhttp3.CacheControl
                boolean r2 = r0.noCache
                boolean r3 = r0.noStore
                int r4 = r0.maxAgeSeconds
                int r9 = r0.maxStaleSeconds
                int r10 = r0.minFreshSeconds
                boolean r11 = r0.onlyIfCached
                boolean r12 = r0.noTransform
                boolean r13 = r0.immutable
                r5 = -1
                r6 = 0
                r7 = 0
                r8 = 0
                r14 = 0
                r15 = 0
                r1 = r16
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
                return r16
        }

        public final okhttp3.CacheControl.Builder immutable() {
                r2 = this;
                r0 = r2
                okhttp3.CacheControl$Builder r0 = (okhttp3.CacheControl.Builder) r0
                r1 = 1
                r0.immutable = r1
                return r0
        }

        public final okhttp3.CacheControl.Builder maxAge(int r4, java.util.concurrent.TimeUnit r5) {
                r3 = this;
                java.lang.String r0 = "timeUnit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r3
                okhttp3.CacheControl$Builder r0 = (okhttp3.CacheControl.Builder) r0
                if (r4 < 0) goto Lc
                r1 = 1
                goto Ld
            Lc:
                r1 = 0
            Ld:
                if (r1 == 0) goto L1b
                long r1 = (long) r4
                long r4 = r5.toSeconds(r1)
                int r4 = r0.clampToInt(r4)
                r0.maxAgeSeconds = r4
                return r0
            L1b:
                java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
                java.lang.String r5 = "maxAge < 0: "
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r4)
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                java.lang.String r4 = r4.toString()
                r5.<init>(r4)
                throw r5
        }

        public final okhttp3.CacheControl.Builder maxStale(int r4, java.util.concurrent.TimeUnit r5) {
                r3 = this;
                java.lang.String r0 = "timeUnit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r3
                okhttp3.CacheControl$Builder r0 = (okhttp3.CacheControl.Builder) r0
                if (r4 < 0) goto Lc
                r1 = 1
                goto Ld
            Lc:
                r1 = 0
            Ld:
                if (r1 == 0) goto L1b
                long r1 = (long) r4
                long r4 = r5.toSeconds(r1)
                int r4 = r0.clampToInt(r4)
                r0.maxStaleSeconds = r4
                return r0
            L1b:
                java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
                java.lang.String r5 = "maxStale < 0: "
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r4)
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                java.lang.String r4 = r4.toString()
                r5.<init>(r4)
                throw r5
        }

        public final okhttp3.CacheControl.Builder minFresh(int r4, java.util.concurrent.TimeUnit r5) {
                r3 = this;
                java.lang.String r0 = "timeUnit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r3
                okhttp3.CacheControl$Builder r0 = (okhttp3.CacheControl.Builder) r0
                if (r4 < 0) goto Lc
                r1 = 1
                goto Ld
            Lc:
                r1 = 0
            Ld:
                if (r1 == 0) goto L1b
                long r1 = (long) r4
                long r4 = r5.toSeconds(r1)
                int r4 = r0.clampToInt(r4)
                r0.minFreshSeconds = r4
                return r0
            L1b:
                java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
                java.lang.String r5 = "minFresh < 0: "
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r4)
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                java.lang.String r4 = r4.toString()
                r5.<init>(r4)
                throw r5
        }

        public final okhttp3.CacheControl.Builder noCache() {
                r2 = this;
                r0 = r2
                okhttp3.CacheControl$Builder r0 = (okhttp3.CacheControl.Builder) r0
                r1 = 1
                r0.noCache = r1
                return r0
        }

        public final okhttp3.CacheControl.Builder noStore() {
                r2 = this;
                r0 = r2
                okhttp3.CacheControl$Builder r0 = (okhttp3.CacheControl.Builder) r0
                r1 = 1
                r0.noStore = r1
                return r0
        }

        public final okhttp3.CacheControl.Builder noTransform() {
                r2 = this;
                r0 = r2
                okhttp3.CacheControl$Builder r0 = (okhttp3.CacheControl.Builder) r0
                r1 = 1
                r0.noTransform = r1
                return r0
        }

        public final okhttp3.CacheControl.Builder onlyIfCached() {
                r2 = this;
                r0 = r2
                okhttp3.CacheControl$Builder r0 = (okhttp3.CacheControl.Builder) r0
                r1 = 1
                r0.onlyIfCached = r1
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0006\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\bH\u0007J\u001e\u0010\t\u001a\u00020\n*\u00020\u000b2\u0006\u0010\f\u001a\u00020\u000b2\b\b\u0002\u0010\r\u001a\u00020\nH\u0002R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0005\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lokhttp3/CacheControl$Companion;", "", "()V", "FORCE_CACHE", "Lokhttp3/CacheControl;", "FORCE_NETWORK", "parse", "headers", "Lokhttp3/Headers;", "indexOfElement", "", "", "characters", "startIndex", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        private final int indexOfElement(java.lang.String r8, java.lang.String r9, int r10) {
                r7 = this;
                int r0 = r8.length()
            L4:
                if (r10 >= r0) goto L1b
                int r1 = r10 + 1
                r2 = r9
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                char r3 = r8.charAt(r10)
                r4 = 0
                r5 = 2
                r6 = 0
                boolean r2 = kotlin.text.StringsKt.contains$default(r2, r3, r4, r5, r6)
                if (r2 == 0) goto L19
                return r10
            L19:
                r10 = r1
                goto L4
            L1b:
                int r8 = r8.length()
                return r8
        }

        static int indexOfElement$default(okhttp3.CacheControl.Companion r0, java.lang.String r1, java.lang.String r2, int r3, int r4, java.lang.Object r5) {
                r4 = r4 & 2
                if (r4 == 0) goto L5
                r3 = 0
            L5:
                int r0 = r0.indexOfElement(r1, r2, r3)
                return r0
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.CacheControl parse(okhttp3.Headers r31) {
                r30 = this;
                r0 = r30
                r1 = r31
                java.lang.String r2 = "headers"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
                int r2 = r31.size()
                r6 = 1
                r8 = r6
                r7 = 0
                r9 = 0
                r10 = 0
                r11 = 0
                r12 = -1
                r13 = -1
                r14 = 0
                r15 = 0
                r16 = 0
                r17 = -1
                r18 = -1
                r19 = 0
                r20 = 0
                r21 = 0
            L23:
                if (r7 >= r2) goto L184
                int r22 = r7 + 1
                java.lang.String r3 = r1.name(r7)
                java.lang.String r7 = r1.value(r7)
                java.lang.String r5 = "Cache-Control"
                boolean r5 = kotlin.text.StringsKt.equals(r3, r5, r6)
                if (r5 == 0) goto L3c
                if (r9 == 0) goto L3a
                goto L44
            L3a:
                r9 = r7
                goto L45
            L3c:
                java.lang.String r5 = "Pragma"
                boolean r3 = kotlin.text.StringsKt.equals(r3, r5, r6)
                if (r3 == 0) goto L17d
            L44:
                r8 = 0
            L45:
                r3 = 0
            L46:
                int r5 = r7.length()
                if (r3 >= r5) goto L17d
                java.lang.String r5 = "=,;"
                int r5 = r0.indexOfElement(r7, r5, r3)
                java.lang.String r3 = r7.substring(r3, r5)
                java.lang.String r4 = "this as java.lang.String…ing(startIndex, endIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                java.lang.CharSequence r3 = (java.lang.CharSequence) r3
                java.lang.CharSequence r3 = kotlin.text.StringsKt.trim(r3)
                java.lang.String r3 = r3.toString()
                int r6 = r7.length()
                if (r5 == r6) goto Lc6
                char r6 = r7.charAt(r5)
                r1 = 44
                if (r6 == r1) goto Lc6
                char r1 = r7.charAt(r5)
                r6 = 59
                if (r1 != r6) goto L7c
                goto Lc6
            L7c:
                int r5 = r5 + 1
                int r1 = okhttp3.internal.Util.indexOfNonWhitespace(r7, r5)
                int r5 = r7.length()
                if (r1 >= r5) goto Lae
                char r5 = r7.charAt(r1)
                r6 = 34
                if (r5 != r6) goto Lae
                int r1 = r1 + 1
                r24 = r7
                java.lang.CharSequence r24 = (java.lang.CharSequence) r24
                r25 = 34
                r27 = 0
                r28 = 4
                r29 = 0
                r26 = r1
                int r5 = kotlin.text.StringsKt.indexOf$default(r24, r25, r26, r27, r28, r29)
                java.lang.String r1 = r7.substring(r1, r5)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r4)
                r4 = 1
                int r5 = r5 + r4
                goto Lc9
            Lae:
                java.lang.String r5 = ",;"
                int r5 = r0.indexOfElement(r7, r5, r1)
                java.lang.String r1 = r7.substring(r1, r5)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r4)
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                java.lang.CharSequence r1 = kotlin.text.StringsKt.trim(r1)
                java.lang.String r1 = r1.toString()
                goto Lc9
            Lc6:
                int r5 = r5 + 1
                r1 = 0
            Lc9:
                java.lang.String r4 = "no-cache"
                r6 = 1
                boolean r4 = kotlin.text.StringsKt.equals(r4, r3, r6)
                if (r4 == 0) goto Ld8
                r1 = r31
                r3 = r5
                r10 = r6
                goto L46
            Ld8:
                java.lang.String r4 = "no-store"
                boolean r4 = kotlin.text.StringsKt.equals(r4, r3, r6)
                if (r4 == 0) goto Le6
                r1 = r31
                r3 = r5
                r11 = r6
                goto L46
            Le6:
                java.lang.String r4 = "max-age"
                boolean r4 = kotlin.text.StringsKt.equals(r4, r3, r6)
                if (r4 == 0) goto Lf8
                r4 = -1
                int r12 = okhttp3.internal.Util.toNonNegativeInt(r1, r4)
            Lf3:
                r1 = r31
                r3 = r5
                goto L46
            Lf8:
                java.lang.String r4 = "s-maxage"
                boolean r4 = kotlin.text.StringsKt.equals(r4, r3, r6)
                if (r4 == 0) goto L106
                r4 = -1
                int r13 = okhttp3.internal.Util.toNonNegativeInt(r1, r4)
                goto Lf3
            L106:
                java.lang.String r4 = "private"
                boolean r4 = kotlin.text.StringsKt.equals(r4, r3, r6)
                if (r4 == 0) goto L114
                r1 = r31
                r3 = r5
                r14 = r6
                goto L46
            L114:
                java.lang.String r4 = "public"
                boolean r4 = kotlin.text.StringsKt.equals(r4, r3, r6)
                if (r4 == 0) goto L122
                r1 = r31
                r3 = r5
                r15 = r6
                goto L46
            L122:
                java.lang.String r4 = "must-revalidate"
                boolean r4 = kotlin.text.StringsKt.equals(r4, r3, r6)
                if (r4 == 0) goto L131
                r1 = r31
                r3 = r5
                r16 = r6
                goto L46
            L131:
                java.lang.String r4 = "max-stale"
                boolean r4 = kotlin.text.StringsKt.equals(r4, r3, r6)
                if (r4 == 0) goto L141
                r3 = 2147483647(0x7fffffff, float:NaN)
                int r17 = okhttp3.internal.Util.toNonNegativeInt(r1, r3)
                goto Lf3
            L141:
                java.lang.String r4 = "min-fresh"
                boolean r4 = kotlin.text.StringsKt.equals(r4, r3, r6)
                if (r4 == 0) goto L14f
                r4 = -1
                int r18 = okhttp3.internal.Util.toNonNegativeInt(r1, r4)
                goto Lf3
            L14f:
                r4 = -1
                java.lang.String r1 = "only-if-cached"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r6)
                if (r1 == 0) goto L15f
                r1 = r31
                r3 = r5
                r19 = r6
                goto L46
            L15f:
                java.lang.String r1 = "no-transform"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r6)
                if (r1 == 0) goto L16e
                r1 = r31
                r3 = r5
                r20 = r6
                goto L46
            L16e:
                java.lang.String r1 = "immutable"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r6)
                if (r1 == 0) goto Lf3
                r1 = r31
                r3 = r5
                r21 = r6
                goto L46
            L17d:
                r4 = -1
                r1 = r31
                r7 = r22
                goto L23
            L184:
                if (r8 != 0) goto L189
                r22 = 0
                goto L18b
            L189:
                r22 = r9
            L18b:
                okhttp3.CacheControl r1 = new okhttp3.CacheControl
                r23 = 0
                r9 = r1
                r9.<init>(r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23)
                return r1
        }
    }

    static {
            okhttp3.CacheControl$Companion r0 = new okhttp3.CacheControl$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.CacheControl.Companion = r0
            okhttp3.CacheControl$Builder r0 = new okhttp3.CacheControl$Builder
            r0.<init>()
            okhttp3.CacheControl$Builder r0 = r0.noCache()
            okhttp3.CacheControl r0 = r0.build()
            okhttp3.CacheControl.FORCE_NETWORK = r0
            okhttp3.CacheControl$Builder r0 = new okhttp3.CacheControl$Builder
            r0.<init>()
            okhttp3.CacheControl$Builder r0 = r0.onlyIfCached()
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.SECONDS
            r2 = 2147483647(0x7fffffff, float:NaN)
            okhttp3.CacheControl$Builder r0 = r0.maxStale(r2, r1)
            okhttp3.CacheControl r0 = r0.build()
            okhttp3.CacheControl.FORCE_CACHE = r0
            return
    }

    private CacheControl(boolean r1, boolean r2, int r3, int r4, boolean r5, boolean r6, boolean r7, int r8, int r9, boolean r10, boolean r11, boolean r12, java.lang.String r13) {
            r0 = this;
            r0.<init>()
            r0.noCache = r1
            r0.noStore = r2
            r0.maxAgeSeconds = r3
            r0.sMaxAgeSeconds = r4
            r0.isPrivate = r5
            r0.isPublic = r6
            r0.mustRevalidate = r7
            r0.maxStaleSeconds = r8
            r0.minFreshSeconds = r9
            r0.onlyIfCached = r10
            r0.noTransform = r11
            r0.immutable = r12
            r0.headerValue = r13
            return
    }

    public CacheControl(boolean r1, boolean r2, int r3, int r4, boolean r5, boolean r6, boolean r7, int r8, int r9, boolean r10, boolean r11, boolean r12, java.lang.String r13, kotlin.jvm.internal.DefaultConstructorMarker r14) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.CacheControl parse(okhttp3.Headers r1) {
            okhttp3.CacheControl$Companion r0 = okhttp3.CacheControl.Companion
            okhttp3.CacheControl r1 = r0.parse(r1)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "immutable", imports = {}))
    public final boolean -deprecated_immutable() {
            r1 = this;
            boolean r0 = r1.immutable
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "maxAgeSeconds", imports = {}))
    public final int -deprecated_maxAgeSeconds() {
            r1 = this;
            int r0 = r1.maxAgeSeconds
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "maxStaleSeconds", imports = {}))
    public final int -deprecated_maxStaleSeconds() {
            r1 = this;
            int r0 = r1.maxStaleSeconds
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "minFreshSeconds", imports = {}))
    public final int -deprecated_minFreshSeconds() {
            r1 = this;
            int r0 = r1.minFreshSeconds
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "mustRevalidate", imports = {}))
    public final boolean -deprecated_mustRevalidate() {
            r1 = this;
            boolean r0 = r1.mustRevalidate
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "noCache", imports = {}))
    public final boolean -deprecated_noCache() {
            r1 = this;
            boolean r0 = r1.noCache
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "noStore", imports = {}))
    public final boolean -deprecated_noStore() {
            r1 = this;
            boolean r0 = r1.noStore
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "noTransform", imports = {}))
    public final boolean -deprecated_noTransform() {
            r1 = this;
            boolean r0 = r1.noTransform
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "onlyIfCached", imports = {}))
    public final boolean -deprecated_onlyIfCached() {
            r1 = this;
            boolean r0 = r1.onlyIfCached
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "sMaxAgeSeconds", imports = {}))
    public final int -deprecated_sMaxAgeSeconds() {
            r1 = this;
            int r0 = r1.sMaxAgeSeconds
            return r0
    }

    public final boolean immutable() {
            r1 = this;
            boolean r0 = r1.immutable
            return r0
    }

    public final boolean isPrivate() {
            r1 = this;
            boolean r0 = r1.isPrivate
            return r0
    }

    public final boolean isPublic() {
            r1 = this;
            boolean r0 = r1.isPublic
            return r0
    }

    public final int maxAgeSeconds() {
            r1 = this;
            int r0 = r1.maxAgeSeconds
            return r0
    }

    public final int maxStaleSeconds() {
            r1 = this;
            int r0 = r1.maxStaleSeconds
            return r0
    }

    public final int minFreshSeconds() {
            r1 = this;
            int r0 = r1.minFreshSeconds
            return r0
    }

    public final boolean mustRevalidate() {
            r1 = this;
            boolean r0 = r1.mustRevalidate
            return r0
    }

    public final boolean noCache() {
            r1 = this;
            boolean r0 = r1.noCache
            return r0
    }

    public final boolean noStore() {
            r1 = this;
            boolean r0 = r1.noStore
            return r0
    }

    public final boolean noTransform() {
            r1 = this;
            boolean r0 = r1.noTransform
            return r0
    }

    public final boolean onlyIfCached() {
            r1 = this;
            boolean r0 = r1.onlyIfCached
            return r0
    }

    public final int sMaxAgeSeconds() {
            r1 = this;
            int r0 = r1.sMaxAgeSeconds
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.String r0 = r4.headerValue
            if (r0 != 0) goto Le1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = r4.noCache()
            if (r1 == 0) goto L14
            java.lang.String r1 = "no-cache, "
            r0.append(r1)
        L14:
            boolean r1 = r4.noStore()
            if (r1 == 0) goto L1f
            java.lang.String r1 = "no-store, "
            r0.append(r1)
        L1f:
            int r1 = r4.maxAgeSeconds()
            java.lang.String r2 = ", "
            r3 = -1
            if (r1 == r3) goto L37
            java.lang.String r1 = "max-age="
            r0.append(r1)
            int r1 = r4.maxAgeSeconds()
            r0.append(r1)
            r0.append(r2)
        L37:
            int r1 = r4.sMaxAgeSeconds()
            if (r1 == r3) goto L4c
            java.lang.String r1 = "s-maxage="
            r0.append(r1)
            int r1 = r4.sMaxAgeSeconds()
            r0.append(r1)
            r0.append(r2)
        L4c:
            boolean r1 = r4.isPrivate()
            if (r1 == 0) goto L57
            java.lang.String r1 = "private, "
            r0.append(r1)
        L57:
            boolean r1 = r4.isPublic()
            if (r1 == 0) goto L62
            java.lang.String r1 = "public, "
            r0.append(r1)
        L62:
            boolean r1 = r4.mustRevalidate()
            if (r1 == 0) goto L6d
            java.lang.String r1 = "must-revalidate, "
            r0.append(r1)
        L6d:
            int r1 = r4.maxStaleSeconds()
            if (r1 == r3) goto L82
            java.lang.String r1 = "max-stale="
            r0.append(r1)
            int r1 = r4.maxStaleSeconds()
            r0.append(r1)
            r0.append(r2)
        L82:
            int r1 = r4.minFreshSeconds()
            if (r1 == r3) goto L97
            java.lang.String r1 = "min-fresh="
            r0.append(r1)
            int r1 = r4.minFreshSeconds()
            r0.append(r1)
            r0.append(r2)
        L97:
            boolean r1 = r4.onlyIfCached()
            if (r1 == 0) goto La2
            java.lang.String r1 = "only-if-cached, "
            r0.append(r1)
        La2:
            boolean r1 = r4.noTransform()
            if (r1 == 0) goto Lad
            java.lang.String r1 = "no-transform, "
            r0.append(r1)
        Lad:
            boolean r1 = r4.immutable()
            if (r1 == 0) goto Lb8
            java.lang.String r1 = "immutable, "
            r0.append(r1)
        Lb8:
            r1 = r0
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            int r1 = r1.length()
            if (r1 != 0) goto Lc3
            r1 = 1
            goto Lc4
        Lc3:
            r1 = 0
        Lc4:
            if (r1 == 0) goto Lc9
            java.lang.String r0 = ""
            return r0
        Lc9:
            int r1 = r0.length()
            int r1 = r1 + (-2)
            int r2 = r0.length()
            r0.delete(r1, r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "StringBuilder().apply(builderAction).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            r4.headerValue = r0
        Le1:
            return r0
    }
}
