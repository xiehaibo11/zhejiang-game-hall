package cz.msebera.android.httpclient.impl.cookie;

import cz.msebera.android.httpclient.annotation.Immutable;
import cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher;
import cz.msebera.android.httpclient.cookie.Cookie;
import cz.msebera.android.httpclient.cookie.CookieOrigin;
import cz.msebera.android.httpclient.cookie.CookieSpec;
import cz.msebera.android.httpclient.cookie.CookieSpecProvider;
import cz.msebera.android.httpclient.cookie.MalformedCookieException;
import cz.msebera.android.httpclient.protocol.HttpContext;

@Immutable
public class RFC6265CookieSpecProvider implements CookieSpecProvider {
    private final CompatibilityLevel compatibilityLevel;
    private volatile CookieSpec cookieSpec;
    private final PublicSuffixMatcher publicSuffixMatcher;

    public enum CompatibilityLevel {
        STRICT,
        RELAXED,
        IE_MEDIUM_SECURITY
    }

    public RFC6265CookieSpecProvider(CompatibilityLevel compatibilityLevel, PublicSuffixMatcher publicSuffixMatcher) {
        this.compatibilityLevel = compatibilityLevel == null ? CompatibilityLevel.RELAXED : compatibilityLevel;
        this.publicSuffixMatcher = publicSuffixMatcher;
    }

    public RFC6265CookieSpecProvider(PublicSuffixMatcher publicSuffixMatcher) {
        this(CompatibilityLevel.RELAXED, publicSuffixMatcher);
    }

    public RFC6265CookieSpecProvider() {
        this(CompatibilityLevel.RELAXED, null);
    }

    @Override
    public CookieSpec create(HttpContext httpContext) {
        if (this.cookieSpec == null) {
            synchronized (this) {
                if (this.cookieSpec == null) {
                    int i = 2.$SwitchMap$cz$msebera$android$httpclient$impl$cookie$RFC6265CookieSpecProvider$CompatibilityLevel[this.compatibilityLevel.ordinal()];
                    if (i == 1) {
                        this.cookieSpec = new RFC6265StrictSpec(new BasicPathHandler(), PublicSuffixDomainFilter.decorate(new BasicDomainHandler(), this.publicSuffixMatcher), new BasicMaxAgeHandler(), new BasicSecureHandler(), new BasicExpiresHandler(RFC6265StrictSpec.DATE_PATTERNS));
                    } else if (i == 2) {
                        this.cookieSpec = new RFC6265LaxSpec(new BasicPathHandler() {
                            @Override
                            public void validate(Cookie cookie, CookieOrigin cookieOrigin) throws MalformedCookieException {
                            }
                        }, PublicSuffixDomainFilter.decorate(new BasicDomainHandler(), this.publicSuffixMatcher), new BasicMaxAgeHandler(), new BasicSecureHandler(), new BasicExpiresHandler(RFC6265StrictSpec.DATE_PATTERNS));
                    } else {
                        this.cookieSpec = new RFC6265LaxSpec(new BasicPathHandler(), PublicSuffixDomainFilter.decorate(new BasicDomainHandler(), this.publicSuffixMatcher), new LaxMaxAgeHandler(), new BasicSecureHandler(), new LaxExpiresHandler());
                    }
                }
            }
        }
        return this.cookieSpec;
    }

    static class 2 {
        static final int[] $SwitchMap$cz$msebera$android$httpclient$impl$cookie$RFC6265CookieSpecProvider$CompatibilityLevel = new int[CompatibilityLevel.values().length];

        static {
            try {
                $SwitchMap$cz$msebera$android$httpclient$impl$cookie$RFC6265CookieSpecProvider$CompatibilityLevel[CompatibilityLevel.STRICT.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$cz$msebera$android$httpclient$impl$cookie$RFC6265CookieSpecProvider$CompatibilityLevel[CompatibilityLevel.IE_MEDIUM_SECURITY.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }
}
