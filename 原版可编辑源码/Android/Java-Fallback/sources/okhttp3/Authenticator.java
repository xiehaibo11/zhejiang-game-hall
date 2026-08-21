package okhttp3;

@kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\bæ\u0080\u0001\u0018\u0000 \b2\u00020\u0001:\u0001\bJ\u001c\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&¨\u0006\t"}, d2 = {"Lokhttp3/Authenticator;", "", "authenticate", "Lokhttp3/Request;", "route", "Lokhttp3/Route;", "response", "Lokhttp3/Response;", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public interface Authenticator {
    public static final okhttp3.Authenticator.Companion Companion = null;
    public static final okhttp3.Authenticator JAVA_NET_AUTHENTICATOR = null;
    public static final okhttp3.Authenticator NONE = null;

    class 1 implements okhttp3.Authenticator {
        1() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public okhttp3.Request authenticate(okhttp3.Route r1, okhttp3.Response r2) {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001:\u0001\u0006B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0013\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u0001R\u0013\u0010\u0005\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u0001¨\u0006\u0007"}, d2 = {"Lokhttp3/Authenticator$Companion;", "", "()V", "JAVA_NET_AUTHENTICATOR", "Lokhttp3/Authenticator;", "NONE", "AuthenticatorNone", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        static final okhttp3.Authenticator.Companion $$INSTANCE = null;

        @kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0002\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u001c\u0010\u0003\u001a\u0004\u0018\u00010\u00042\b\u0010\u0005\u001a\u0004\u0018\u00010\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0016¨\u0006\t"}, d2 = {"Lokhttp3/Authenticator$Companion$AuthenticatorNone;", "Lokhttp3/Authenticator;", "()V", "authenticate", "Lokhttp3/Request;", "route", "Lokhttp3/Route;", "response", "Lokhttp3/Response;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
        private static final class AuthenticatorNone implements okhttp3.Authenticator {
            public AuthenticatorNone() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            @Override
            public okhttp3.Request authenticate(okhttp3.Route r1, okhttp3.Response r2) {
                    r0 = this;
                    java.lang.String r1 = "response"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
                    r1 = 0
                    return r1
            }
        }

        static {
                okhttp3.Authenticator$Companion r0 = new okhttp3.Authenticator$Companion
                r0.<init>()
                okhttp3.Authenticator.Companion.$$INSTANCE = r0
                return
        }

        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            okhttp3.Authenticator$Companion r0 = okhttp3.Authenticator.Companion.$$INSTANCE
            okhttp3.Authenticator.Companion = r0
            okhttp3.Authenticator$Companion$AuthenticatorNone r0 = new okhttp3.Authenticator$Companion$AuthenticatorNone
            r0.<init>()
            okhttp3.Authenticator r0 = (okhttp3.Authenticator) r0
            okhttp3.Authenticator.NONE = r0
            okhttp3.internal.authenticator.JavaNetAuthenticator r0 = new okhttp3.internal.authenticator.JavaNetAuthenticator
            r1 = 0
            r2 = 1
            r0.<init>(r1, r2, r1)
            okhttp3.Authenticator r0 = (okhttp3.Authenticator) r0
            okhttp3.Authenticator.JAVA_NET_AUTHENTICATOR = r0
            return
    }

    okhttp3.Request authenticate(okhttp3.Route r1, okhttp3.Response r2) throws java.io.IOException;
}
