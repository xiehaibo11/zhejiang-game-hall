package okhttp3;

@kotlin.Metadata(d1 = {"\u0000z\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0004\b&\u0018\u0000 ?2\u00020\u0001:\u0002?@B\u0005¢\u0006\u0002\u0010\u0002J\u0018\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0016J\u0018\u0010\t\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\bH\u0016J\u0010\u0010\u000b\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0010\u0010\f\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0018\u0010\r\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0010\u0010\u0010\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0010\u0010\u0011\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J*\u0010\u0012\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00162\b\u0010\u0017\u001a\u0004\u0018\u00010\u0018H\u0016J2\u0010\u0019\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00162\b\u0010\u0017\u001a\u0004\u0018\u00010\u00182\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J \u0010\u001a\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0016H\u0016J\u0018\u0010\u001b\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u001c\u001a\u00020\u001dH\u0016J\u0018\u0010\u001e\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u001c\u001a\u00020\u001dH\u0016J+\u0010\u001f\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010 \u001a\u00020!2\u0011\u0010\"\u001a\r\u0012\t\u0012\u00070$¢\u0006\u0002\b%0#H\u0016J\u0018\u0010&\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010 \u001a\u00020!H\u0016J+\u0010'\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010(\u001a\u00020)2\u0011\u0010*\u001a\r\u0012\t\u0012\u00070\u0016¢\u0006\u0002\b%0#H\u0016J\u0018\u0010+\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010(\u001a\u00020)H\u0016J\u0018\u0010,\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010-\u001a\u00020.H\u0016J\u0010\u0010/\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0018\u00100\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0018\u00101\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u00102\u001a\u000203H\u0016J\u0010\u00104\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0018\u00105\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010-\u001a\u00020.H\u0016J\u0010\u00106\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0018\u00107\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0018\u00108\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\bH\u0016J\u0010\u00109\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\u0018\u0010:\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\bH\u0016J\u001a\u0010;\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\b\u0010<\u001a\u0004\u0018\u00010=H\u0016J\u0010\u0010>\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016¨\u0006A"}, d2 = {"Lokhttp3/EventListener;", "", "()V", "cacheConditionalHit", "", "call", "Lokhttp3/Call;", "cachedResponse", "Lokhttp3/Response;", "cacheHit", "response", "cacheMiss", "callEnd", "callFailed", "ioe", "Ljava/io/IOException;", "callStart", "canceled", "connectEnd", "inetSocketAddress", "Ljava/net/InetSocketAddress;", "proxy", "Ljava/net/Proxy;", "protocol", "Lokhttp3/Protocol;", "connectFailed", "connectStart", "connectionAcquired", "connection", "Lokhttp3/Connection;", "connectionReleased", "dnsEnd", "domainName", "", "inetAddressList", "", "Ljava/net/InetAddress;", "Lkotlin/jvm/JvmSuppressWildcards;", "dnsStart", "proxySelectEnd", "url", "Lokhttp3/HttpUrl;", "proxies", "proxySelectStart", "requestBodyEnd", "byteCount", "", "requestBodyStart", "requestFailed", "requestHeadersEnd", "request", "Lokhttp3/Request;", "requestHeadersStart", "responseBodyEnd", "responseBodyStart", "responseFailed", "responseHeadersEnd", "responseHeadersStart", "satisfactionFailure", "secureConnectEnd", "handshake", "Lokhttp3/Handshake;", "secureConnectStart", "Companion", "Factory", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class EventListener {
    public static final okhttp3.EventListener.Companion Companion = null;
    public static final okhttp3.EventListener NONE = null;

    class 1 extends okhttp3.EventListener {
        1() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    class 2 implements okhttp3.EventListener.Factory {
        final okhttp3.EventListener val$listener;

        2(okhttp3.EventListener r1) {
                r0 = this;
                r0.val$listener = r1
                r0.<init>()
                return
        }

        @Override
        public okhttp3.EventListener create(okhttp3.Call r1) {
                r0 = this;
                okhttp3.EventListener r1 = r0.val$listener
                return r1
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u0005"}, d2 = {"Lokhttp3/EventListener$Companion;", "", "()V", "NONE", "Lokhttp3/EventListener;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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
    }

    @kotlin.Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bæ\u0080\u0001\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&¨\u0006\u0006"}, d2 = {"Lokhttp3/EventListener$Factory;", "", "create", "Lokhttp3/EventListener;", "call", "Lokhttp3/Call;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public interface Factory {
        okhttp3.EventListener create(okhttp3.Call r1);
    }

    static {
            okhttp3.EventListener$Companion r0 = new okhttp3.EventListener$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.EventListener.Companion = r0
            okhttp3.EventListener$Companion$NONE$1 r0 = new okhttp3.EventListener$Companion$NONE$1
            r0.<init>()
            okhttp3.EventListener r0 = (okhttp3.EventListener) r0
            okhttp3.EventListener.NONE = r0
            return
    }

    public EventListener() {
            r0 = this;
            r0.<init>()
            return
    }

    public void cacheConditionalHit(okhttp3.Call r2, okhttp3.Response r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "cachedResponse"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void cacheHit(okhttp3.Call r2, okhttp3.Response r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "response"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void cacheMiss(okhttp3.Call r2) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return
    }

    public void callEnd(okhttp3.Call r2) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return
    }

    public void callFailed(okhttp3.Call r2, java.io.IOException r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "ioe"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void callStart(okhttp3.Call r2) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return
    }

    public void canceled(okhttp3.Call r2) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return
    }

    public void connectEnd(okhttp3.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3, okhttp3.Protocol r4) {
            r0 = this;
            java.lang.String r4 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r4)
            java.lang.String r1 = "inetSocketAddress"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            java.lang.String r1 = "proxy"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r1)
            return
    }

    public void connectFailed(okhttp3.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3, okhttp3.Protocol r4, java.io.IOException r5) {
            r0 = this;
            java.lang.String r4 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r4)
            java.lang.String r1 = "inetSocketAddress"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            java.lang.String r1 = "proxy"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r1)
            java.lang.String r1 = "ioe"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r1)
            return
    }

    public void connectStart(okhttp3.Call r2, java.net.InetSocketAddress r3, java.net.Proxy r4) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "inetSocketAddress"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            java.lang.String r2 = "proxy"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r2)
            return
    }

    public void connectionAcquired(okhttp3.Call r2, okhttp3.Connection r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "connection"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void connectionReleased(okhttp3.Call r2, okhttp3.Connection r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "connection"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void dnsEnd(okhttp3.Call r2, java.lang.String r3, java.util.List<java.net.InetAddress> r4) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "domainName"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            java.lang.String r2 = "inetAddressList"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r2)
            return
    }

    public void dnsStart(okhttp3.Call r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "domainName"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void proxySelectEnd(okhttp3.Call r2, okhttp3.HttpUrl r3, java.util.List<java.net.Proxy> r4) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "url"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            java.lang.String r2 = "proxies"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r2)
            return
    }

    public void proxySelectStart(okhttp3.Call r2, okhttp3.HttpUrl r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "url"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void requestBodyEnd(okhttp3.Call r1, long r2) {
            r0 = this;
            java.lang.String r2 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            return
    }

    public void requestBodyStart(okhttp3.Call r2) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return
    }

    public void requestFailed(okhttp3.Call r2, java.io.IOException r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "ioe"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void requestHeadersEnd(okhttp3.Call r2, okhttp3.Request r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "request"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void requestHeadersStart(okhttp3.Call r2) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return
    }

    public void responseBodyEnd(okhttp3.Call r1, long r2) {
            r0 = this;
            java.lang.String r2 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            return
    }

    public void responseBodyStart(okhttp3.Call r2) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return
    }

    public void responseFailed(okhttp3.Call r2, java.io.IOException r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "ioe"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void responseHeadersEnd(okhttp3.Call r2, okhttp3.Response r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "response"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void responseHeadersStart(okhttp3.Call r2) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return
    }

    public void satisfactionFailure(okhttp3.Call r2, okhttp3.Response r3) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = "response"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            return
    }

    public void secureConnectEnd(okhttp3.Call r1, okhttp3.Handshake r2) {
            r0 = this;
            java.lang.String r2 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            return
    }

    public void secureConnectStart(okhttp3.Call r2) {
            r1 = this;
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return
    }
}
