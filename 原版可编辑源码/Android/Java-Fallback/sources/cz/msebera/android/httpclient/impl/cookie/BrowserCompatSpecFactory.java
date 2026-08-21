package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class BrowserCompatSpecFactory implements cz.msebera.android.httpclient.cookie.CookieSpecFactory, cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    private final cz.msebera.android.httpclient.cookie.CookieSpec cookieSpec;
    private final cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel securityLevel;

    public enum SecurityLevel extends java.lang.Enum<cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel> {
        private static final cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel[] $VALUES = null;
        public static final cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel SECURITYLEVEL_DEFAULT = null;
        public static final cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel SECURITYLEVEL_IE_MEDIUM = null;

        static {
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r0 = new cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel
                r1 = 0
                java.lang.String r2 = "SECURITYLEVEL_DEFAULT"
                r0.<init>(r2, r1)
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.SECURITYLEVEL_DEFAULT = r0
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r0 = new cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel
                r2 = 1
                java.lang.String r3 = "SECURITYLEVEL_IE_MEDIUM"
                r0.<init>(r3, r2)
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.SECURITYLEVEL_IE_MEDIUM = r0
                r0 = 2
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel[] r0 = new cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel[r0]
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r3 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.SECURITYLEVEL_DEFAULT
                r0[r1] = r3
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r1 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.SECURITYLEVEL_IE_MEDIUM
                r0[r2] = r1
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.$VALUES = r0
                return
        }

        SecurityLevel(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel valueOf(java.lang.String r1) {
                java.lang.Class<cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel> r0 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r1 = (cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel) r1
                return r1
        }

        public static cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel[] values() {
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel[] r0 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.$VALUES
                java.lang.Object r0 = r0.clone()
                cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel[] r0 = (cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel[]) r0
                return r0
        }
    }

    public BrowserCompatSpecFactory() {
            r2 = this;
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r0 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.SECURITYLEVEL_DEFAULT
            r1 = 0
            r2.<init>(r1, r0)
            return
    }

    public BrowserCompatSpecFactory(java.lang.String[] r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r2 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.SECURITYLEVEL_DEFAULT
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public BrowserCompatSpecFactory(java.lang.String[] r2, cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel r3) {
            r1 = this;
            r1.<init>()
            r1.securityLevel = r3
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec r0 = new cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec
            r0.<init>(r2, r3)
            r1.cookieSpec = r0
            return
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec create(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            cz.msebera.android.httpclient.cookie.CookieSpec r1 = r0.cookieSpec
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec newInstance(cz.msebera.android.httpclient.params.HttpParams r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L22
            java.lang.String r1 = "http.protocol.cookie-datepatterns"
            java.lang.Object r3 = r3.getParameter(r1)
            java.util.Collection r3 = (java.util.Collection) r3
            if (r3 == 0) goto L1a
            int r0 = r3.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r3 = r3.toArray(r0)
            r0 = r3
            java.lang.String[] r0 = (java.lang.String[]) r0
        L1a:
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec r3 = new cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r1 = r2.securityLevel
            r3.<init>(r0, r1)
            return r3
        L22:
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec r3 = new cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r1 = r2.securityLevel
            r3.<init>(r0, r1)
            return r3
    }
}
