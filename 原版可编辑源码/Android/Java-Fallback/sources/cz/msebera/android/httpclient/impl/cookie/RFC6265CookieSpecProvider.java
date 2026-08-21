package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class RFC6265CookieSpecProvider implements cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    private final cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel compatibilityLevel;
    private volatile cz.msebera.android.httpclient.cookie.CookieSpec cookieSpec;
    private final cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher publicSuffixMatcher;


    static class 2 {
        static final int[] $SwitchMap$cz$msebera$android$httpclient$impl$cookie$RFC6265CookieSpecProvider$CompatibilityLevel = null;

        static {
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel[] r0 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.2.$SwitchMap$cz$msebera$android$httpclient$impl$cookie$RFC6265CookieSpecProvider$CompatibilityLevel = r0
                int[] r0 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.2.$SwitchMap$cz$msebera$android$httpclient$impl$cookie$RFC6265CookieSpecProvider$CompatibilityLevel     // Catch: java.lang.NoSuchFieldError -> L14
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r1 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.STRICT     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.2.$SwitchMap$cz$msebera$android$httpclient$impl$cookie$RFC6265CookieSpecProvider$CompatibilityLevel     // Catch: java.lang.NoSuchFieldError -> L1f
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r1 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.IE_MEDIUM_SECURITY     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                return
        }
    }

    public enum CompatibilityLevel extends java.lang.Enum<cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel> {
        private static final cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel[] $VALUES = null;
        public static final cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel IE_MEDIUM_SECURITY = null;
        public static final cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel RELAXED = null;
        public static final cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel STRICT = null;

        static {
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r0 = new cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel
                r1 = 0
                java.lang.String r2 = "STRICT"
                r0.<init>(r2, r1)
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.STRICT = r0
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r0 = new cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel
                r2 = 1
                java.lang.String r3 = "RELAXED"
                r0.<init>(r3, r2)
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.RELAXED = r0
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r0 = new cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel
                r3 = 2
                java.lang.String r4 = "IE_MEDIUM_SECURITY"
                r0.<init>(r4, r3)
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.IE_MEDIUM_SECURITY = r0
                r0 = 3
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel[] r0 = new cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel[r0]
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r4 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.STRICT
                r0[r1] = r4
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r1 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.RELAXED
                r0[r2] = r1
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r1 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.IE_MEDIUM_SECURITY
                r0[r3] = r1
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.$VALUES = r0
                return
        }

        CompatibilityLevel(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel valueOf(java.lang.String r1) {
                java.lang.Class<cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel> r0 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r1 = (cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel) r1
                return r1
        }

        public static cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel[] values() {
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel[] r0 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.$VALUES
                java.lang.Object r0 = r0.clone()
                cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel[] r0 = (cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel[]) r0
                return r0
        }
    }

    public RFC6265CookieSpecProvider() {
            r2 = this;
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r0 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.RELAXED
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    public RFC6265CookieSpecProvider(cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r0 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.RELAXED
            r1.<init>(r0, r2)
            return
    }

    public RFC6265CookieSpecProvider(cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel r1, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r1 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.RELAXED
        L8:
            r0.compatibilityLevel = r1
            r0.publicSuffixMatcher = r2
            return
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec create(cz.msebera.android.httpclient.protocol.HttpContext r8) {
            r7 = this;
            cz.msebera.android.httpclient.cookie.CookieSpec r8 = r7.cookieSpec
            if (r8 != 0) goto Lbe
            monitor-enter(r7)
            cz.msebera.android.httpclient.cookie.CookieSpec r8 = r7.cookieSpec     // Catch: java.lang.Throwable -> Lbb
            if (r8 != 0) goto Lb9
            int[] r8 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.2.$SwitchMap$cz$msebera$android$httpclient$impl$cookie$RFC6265CookieSpecProvider$CompatibilityLevel     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r0 = r7.compatibilityLevel     // Catch: java.lang.Throwable -> Lbb
            int r0 = r0.ordinal()     // Catch: java.lang.Throwable -> Lbb
            r8 = r8[r0]     // Catch: java.lang.Throwable -> Lbb
            r0 = 4
            r1 = 3
            r2 = 0
            r3 = 5
            r4 = 2
            r5 = 1
            if (r8 == r5) goto L85
            if (r8 == r4) goto L50
            cz.msebera.android.httpclient.impl.cookie.RFC6265LaxSpec r8 = new cz.msebera.android.httpclient.impl.cookie.RFC6265LaxSpec     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r3 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r3]     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r6 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler     // Catch: java.lang.Throwable -> Lbb
            r6.<init>()     // Catch: java.lang.Throwable -> Lbb
            r3[r2] = r6     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r6 = r7.publicSuffixMatcher     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r2 = cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter.decorate(r2, r6)     // Catch: java.lang.Throwable -> Lbb
            r3[r5] = r2     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.LaxMaxAgeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.LaxMaxAgeHandler     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            r3[r4] = r2     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            r3[r1] = r2     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler r1 = new cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler     // Catch: java.lang.Throwable -> Lbb
            r1.<init>()     // Catch: java.lang.Throwable -> Lbb
            r3[r0] = r1     // Catch: java.lang.Throwable -> Lbb
            r8.<init>(r3)     // Catch: java.lang.Throwable -> Lbb
            r7.cookieSpec = r8     // Catch: java.lang.Throwable -> Lbb
            goto Lb9
        L50:
            cz.msebera.android.httpclient.impl.cookie.RFC6265LaxSpec r8 = new cz.msebera.android.httpclient.impl.cookie.RFC6265LaxSpec     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r3 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r3]     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$1 r6 = new cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$1     // Catch: java.lang.Throwable -> Lbb
            r6.<init>(r7)     // Catch: java.lang.Throwable -> Lbb
            r3[r2] = r6     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r6 = r7.publicSuffixMatcher     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r2 = cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter.decorate(r2, r6)     // Catch: java.lang.Throwable -> Lbb
            r3[r5] = r2     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            r3[r4] = r2     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            r3[r1] = r2     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler     // Catch: java.lang.Throwable -> Lbb
            java.lang.String[] r2 = cz.msebera.android.httpclient.impl.cookie.RFC6265StrictSpec.DATE_PATTERNS     // Catch: java.lang.Throwable -> Lbb
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lbb
            r3[r0] = r1     // Catch: java.lang.Throwable -> Lbb
            r8.<init>(r3)     // Catch: java.lang.Throwable -> Lbb
            r7.cookieSpec = r8     // Catch: java.lang.Throwable -> Lbb
            goto Lb9
        L85:
            cz.msebera.android.httpclient.impl.cookie.RFC6265StrictSpec r8 = new cz.msebera.android.httpclient.impl.cookie.RFC6265StrictSpec     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r3 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r3]     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r6 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler     // Catch: java.lang.Throwable -> Lbb
            r6.<init>()     // Catch: java.lang.Throwable -> Lbb
            r3[r2] = r6     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r6 = r7.publicSuffixMatcher     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r2 = cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter.decorate(r2, r6)     // Catch: java.lang.Throwable -> Lbb
            r3[r5] = r2     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            r3[r4] = r2     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            r3[r1] = r2     // Catch: java.lang.Throwable -> Lbb
            cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler     // Catch: java.lang.Throwable -> Lbb
            java.lang.String[] r2 = cz.msebera.android.httpclient.impl.cookie.RFC6265StrictSpec.DATE_PATTERNS     // Catch: java.lang.Throwable -> Lbb
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lbb
            r3[r0] = r1     // Catch: java.lang.Throwable -> Lbb
            r8.<init>(r3)     // Catch: java.lang.Throwable -> Lbb
            r7.cookieSpec = r8     // Catch: java.lang.Throwable -> Lbb
        Lb9:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Lbb
            goto Lbe
        Lbb:
            r8 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Lbb
            throw r8
        Lbe:
            cz.msebera.android.httpclient.cookie.CookieSpec r8 = r7.cookieSpec
            return r8
    }
}
