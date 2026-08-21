package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultCookieSpecProvider implements cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    private final cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel compatibilityLevel;
    private volatile cz.msebera.android.httpclient.cookie.CookieSpec cookieSpec;
    private final java.lang.String[] datepatterns;
    private final boolean oneHeader;
    private final cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher publicSuffixMatcher;


    public enum CompatibilityLevel extends java.lang.Enum<cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel> {
        private static final cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel[] $VALUES = null;
        public static final cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel DEFAULT = null;
        public static final cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel IE_MEDIUM_SECURITY = null;

        static {
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r0 = new cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel
                r1 = 0
                java.lang.String r2 = "DEFAULT"
                r0.<init>(r2, r1)
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.DEFAULT = r0
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r0 = new cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel
                r2 = 1
                java.lang.String r3 = "IE_MEDIUM_SECURITY"
                r0.<init>(r3, r2)
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.IE_MEDIUM_SECURITY = r0
                r0 = 2
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel[] r0 = new cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel[r0]
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r3 = cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.DEFAULT
                r0[r1] = r3
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r1 = cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.IE_MEDIUM_SECURITY
                r0[r2] = r1
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.$VALUES = r0
                return
        }

        CompatibilityLevel(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel valueOf(java.lang.String r1) {
                java.lang.Class<cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel> r0 = cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r1 = (cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel) r1
                return r1
        }

        public static cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel[] values() {
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel[] r0 = cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.$VALUES
                java.lang.Object r0 = r0.clone()
                cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel[] r0 = (cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel[]) r0
                return r0
        }
    }

    public DefaultCookieSpecProvider() {
            r3 = this;
            cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r0 = cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.DEFAULT
            r1 = 0
            r2 = 0
            r3.<init>(r0, r1, r1, r2)
            return
    }

    public DefaultCookieSpecProvider(cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r4) {
            r3 = this;
            cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r0 = cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.DEFAULT
            r1 = 0
            r2 = 0
            r3.<init>(r0, r4, r1, r2)
            return
    }

    public DefaultCookieSpecProvider(cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel r3, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r4) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public DefaultCookieSpecProvider(cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel r1, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r2, java.lang.String[] r3, boolean r4) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r1 = cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.DEFAULT
        L8:
            r0.compatibilityLevel = r1
            r0.publicSuffixMatcher = r2
            r0.datepatterns = r3
            r0.oneHeader = r4
            return
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec create(cz.msebera.android.httpclient.protocol.HttpContext r12) {
            r11 = this;
            cz.msebera.android.httpclient.cookie.CookieSpec r12 = r11.cookieSpec
            if (r12 != 0) goto Lf7
            monitor-enter(r11)
            cz.msebera.android.httpclient.cookie.CookieSpec r12 = r11.cookieSpec     // Catch: java.lang.Throwable -> Lf4
            if (r12 != 0) goto Lf2
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r12 = new cz.msebera.android.httpclient.impl.cookie.RFC2965Spec     // Catch: java.lang.Throwable -> Lf4
            boolean r0 = r11.oneHeader     // Catch: java.lang.Throwable -> Lf4
            r1 = 9
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r1 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r1]     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.RFC2965VersionAttributeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2965VersionAttributeHandler     // Catch: java.lang.Throwable -> Lf4
            r2.<init>()     // Catch: java.lang.Throwable -> Lf4
            r3 = 0
            r1[r3] = r2     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler     // Catch: java.lang.Throwable -> Lf4
            r2.<init>()     // Catch: java.lang.Throwable -> Lf4
            r4 = 1
            r1[r4] = r2     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.RFC2965DomainAttributeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2965DomainAttributeHandler     // Catch: java.lang.Throwable -> Lf4
            r2.<init>()     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r5 = r11.publicSuffixMatcher     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r2 = cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter.decorate(r2, r5)     // Catch: java.lang.Throwable -> Lf4
            r5 = 2
            r1[r5] = r2     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.RFC2965PortAttributeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2965PortAttributeHandler     // Catch: java.lang.Throwable -> Lf4
            r2.<init>()     // Catch: java.lang.Throwable -> Lf4
            r6 = 3
            r1[r6] = r2     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler     // Catch: java.lang.Throwable -> Lf4
            r2.<init>()     // Catch: java.lang.Throwable -> Lf4
            r7 = 4
            r1[r7] = r2     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler     // Catch: java.lang.Throwable -> Lf4
            r2.<init>()     // Catch: java.lang.Throwable -> Lf4
            r8 = 5
            r1[r8] = r2     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler     // Catch: java.lang.Throwable -> Lf4
            r2.<init>()     // Catch: java.lang.Throwable -> Lf4
            r9 = 6
            r1[r9] = r2     // Catch: java.lang.Throwable -> Lf4
            r2 = 7
            cz.msebera.android.httpclient.impl.cookie.RFC2965CommentUrlAttributeHandler r10 = new cz.msebera.android.httpclient.impl.cookie.RFC2965CommentUrlAttributeHandler     // Catch: java.lang.Throwable -> Lf4
            r10.<init>()     // Catch: java.lang.Throwable -> Lf4
            r1[r2] = r10     // Catch: java.lang.Throwable -> Lf4
            r2 = 8
            cz.msebera.android.httpclient.impl.cookie.RFC2965DiscardAttributeHandler r10 = new cz.msebera.android.httpclient.impl.cookie.RFC2965DiscardAttributeHandler     // Catch: java.lang.Throwable -> Lf4
            r10.<init>()     // Catch: java.lang.Throwable -> Lf4
            r1[r2] = r10     // Catch: java.lang.Throwable -> Lf4
            r12.<init>(r0, r1)     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.RFC2109Spec r0 = new cz.msebera.android.httpclient.impl.cookie.RFC2109Spec     // Catch: java.lang.Throwable -> Lf4
            boolean r1 = r11.oneHeader     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r2 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r9]     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.RFC2109VersionHandler r9 = new cz.msebera.android.httpclient.impl.cookie.RFC2109VersionHandler     // Catch: java.lang.Throwable -> Lf4
            r9.<init>()     // Catch: java.lang.Throwable -> Lf4
            r2[r3] = r9     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r9 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler     // Catch: java.lang.Throwable -> Lf4
            r9.<init>()     // Catch: java.lang.Throwable -> Lf4
            r2[r4] = r9     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.RFC2109DomainHandler r9 = new cz.msebera.android.httpclient.impl.cookie.RFC2109DomainHandler     // Catch: java.lang.Throwable -> Lf4
            r9.<init>()     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r10 = r11.publicSuffixMatcher     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r9 = cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter.decorate(r9, r10)     // Catch: java.lang.Throwable -> Lf4
            r2[r5] = r9     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r9 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler     // Catch: java.lang.Throwable -> Lf4
            r9.<init>()     // Catch: java.lang.Throwable -> Lf4
            r2[r6] = r9     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r9 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler     // Catch: java.lang.Throwable -> Lf4
            r9.<init>()     // Catch: java.lang.Throwable -> Lf4
            r2[r7] = r9     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r9 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler     // Catch: java.lang.Throwable -> Lf4
            r9.<init>()     // Catch: java.lang.Throwable -> Lf4
            r2[r8] = r9     // Catch: java.lang.Throwable -> Lf4
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r1 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r2 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r8]     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler r8 = new cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler     // Catch: java.lang.Throwable -> Lf4
            r8.<init>()     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r9 = r11.publicSuffixMatcher     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r8 = cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter.decorate(r8, r9)     // Catch: java.lang.Throwable -> Lf4
            r2[r3] = r8     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r3 = r11.compatibilityLevel     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$CompatibilityLevel r8 = cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider.CompatibilityLevel.IE_MEDIUM_SECURITY     // Catch: java.lang.Throwable -> Lf4
            if (r3 != r8) goto Lb9
            cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$1 r3 = new cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider$1     // Catch: java.lang.Throwable -> Lf4
            r3.<init>(r11)     // Catch: java.lang.Throwable -> Lf4
            goto Lbe
        Lb9:
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler     // Catch: java.lang.Throwable -> Lf4
            r3.<init>()     // Catch: java.lang.Throwable -> Lf4
        Lbe:
            r2[r4] = r3     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler     // Catch: java.lang.Throwable -> Lf4
            r3.<init>()     // Catch: java.lang.Throwable -> Lf4
            r2[r5] = r3     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler     // Catch: java.lang.Throwable -> Lf4
            r3.<init>()     // Catch: java.lang.Throwable -> Lf4
            r2[r6] = r3     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler     // Catch: java.lang.Throwable -> Lf4
            java.lang.String[] r4 = r11.datepatterns     // Catch: java.lang.Throwable -> Lf4
            if (r4 == 0) goto Ldd
            java.lang.String[] r4 = r11.datepatterns     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object r4 = r4.clone()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String[] r4 = (java.lang.String[]) r4     // Catch: java.lang.Throwable -> Lf4
            goto Le3
        Ldd:
            java.lang.String r4 = "EEE, dd-MMM-yy HH:mm:ss z"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> Lf4
        Le3:
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lf4
            r2[r7] = r3     // Catch: java.lang.Throwable -> Lf4
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lf4
            cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpec r2 = new cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpec     // Catch: java.lang.Throwable -> Lf4
            r2.<init>(r12, r0, r1)     // Catch: java.lang.Throwable -> Lf4
            r11.cookieSpec = r2     // Catch: java.lang.Throwable -> Lf4
        Lf2:
            monitor-exit(r11)     // Catch: java.lang.Throwable -> Lf4
            goto Lf7
        Lf4:
            r12 = move-exception
            monitor-exit(r11)     // Catch: java.lang.Throwable -> Lf4
            throw r12
        Lf7:
            cz.msebera.android.httpclient.cookie.CookieSpec r12 = r11.cookieSpec
            return r12
    }
}
