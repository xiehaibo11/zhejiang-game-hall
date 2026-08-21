package okhttp3.internal.platform.android;

@kotlin.Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J(\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u00072\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\tH&J\u0012\u0010\u000b\u001a\u0004\u0018\u00010\u00072\u0006\u0010\u0004\u001a\u00020\u0005H&J\b\u0010\f\u001a\u00020\rH&J\u0010\u0010\u000e\u001a\u00020\r2\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u000f\u001a\u00020\r2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016J\u0012\u0010\u0012\u001a\u0004\u0018\u00010\u00132\u0006\u0010\u0010\u001a\u00020\u0011H\u0016¨\u0006\u0014"}, d2 = {"Lokhttp3/internal/platform/android/SocketAdapter;", "", "configureTlsExtensions", "", "sslSocket", "Ljavax/net/ssl/SSLSocket;", "hostname", "", "protocols", "", "Lokhttp3/Protocol;", "getSelectedProtocol", "isSupported", "", "matchesSocket", "matchesSocketFactory", "sslSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", "trustManager", "Ljavax/net/ssl/X509TrustManager;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public interface SocketAdapter {

    @kotlin.Metadata(k = 3, mv = {1, 6, 0}, xi = 48)
    public static final class DefaultImpls {
        public static boolean matchesSocketFactory(okhttp3.internal.platform.android.SocketAdapter r1, javax.net.ssl.SSLSocketFactory r2) {
                java.lang.String r0 = "this"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
                java.lang.String r1 = "sslSocketFactory"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
                r1 = 0
                return r1
        }

        public static javax.net.ssl.X509TrustManager trustManager(okhttp3.internal.platform.android.SocketAdapter r1, javax.net.ssl.SSLSocketFactory r2) {
                java.lang.String r0 = "this"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
                java.lang.String r1 = "sslSocketFactory"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
                r1 = 0
                return r1
        }
    }

    void configureTlsExtensions(javax.net.ssl.SSLSocket r1, java.lang.String r2, java.util.List<? extends okhttp3.Protocol> r3);

    java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r1);

    boolean isSupported();

    boolean matchesSocket(javax.net.ssl.SSLSocket r1);

    boolean matchesSocketFactory(javax.net.ssl.SSLSocketFactory r1);

    javax.net.ssl.X509TrustManager trustManager(javax.net.ssl.SSLSocketFactory r1);
}
