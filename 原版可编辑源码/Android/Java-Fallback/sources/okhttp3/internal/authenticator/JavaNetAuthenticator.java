package okhttp3.internal.authenticator;

@kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u001c\u0010\u0005\u001a\u0004\u0018\u00010\u00062\b\u0010\u0007\u001a\u0004\u0018\u00010\b2\u0006\u0010\t\u001a\u00020\nH\u0016J\u001c\u0010\u000b\u001a\u00020\f*\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0003H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lokhttp3/internal/authenticator/JavaNetAuthenticator;", "Lokhttp3/Authenticator;", "defaultDns", "Lokhttp3/Dns;", "(Lokhttp3/Dns;)V", "authenticate", "Lokhttp3/Request;", "route", "Lokhttp3/Route;", "response", "Lokhttp3/Response;", "connectToInetAddress", "Ljava/net/InetAddress;", "Ljava/net/Proxy;", "url", "Lokhttp3/HttpUrl;", "dns", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class JavaNetAuthenticator implements okhttp3.Authenticator {
    private final okhttp3.Dns defaultDns;

    @kotlin.Metadata(k = 3, mv = {1, 6, 0}, xi = 48)
    public class WhenMappings {
        public static final int[] $EnumSwitchMapping$0 = null;

        static {
                java.net.Proxy$Type[] r0 = java.net.Proxy.Type.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                java.net.Proxy$Type r1 = java.net.Proxy.Type.DIRECT
                int r1 = r1.ordinal()
                r2 = 1
                r0[r1] = r2
                okhttp3.internal.authenticator.JavaNetAuthenticator.WhenMappings.$EnumSwitchMapping$0 = r0
                return
        }
    }

    public JavaNetAuthenticator() {
            r2 = this;
            r0 = 0
            r1 = 1
            r2.<init>(r0, r1, r0)
            return
    }

    public JavaNetAuthenticator(okhttp3.Dns r2) {
            r1 = this;
            java.lang.String r0 = "defaultDns"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.defaultDns = r2
            return
    }

    public JavaNetAuthenticator(okhttp3.Dns r1, int r2, kotlin.jvm.internal.DefaultConstructorMarker r3) {
            r0 = this;
            r2 = r2 & 1
            if (r2 == 0) goto L6
            okhttp3.Dns r1 = okhttp3.Dns.SYSTEM
        L6:
            r0.<init>(r1)
            return
    }

    private final java.net.InetAddress connectToInetAddress(java.net.Proxy r3, okhttp3.HttpUrl r4, okhttp3.Dns r5) throws java.io.IOException {
            r2 = this;
            java.net.Proxy$Type r0 = r3.type()
            if (r0 != 0) goto L8
            r0 = -1
            goto L10
        L8:
            int[] r1 = okhttp3.internal.authenticator.JavaNetAuthenticator.WhenMappings.$EnumSwitchMapping$0
            int r0 = r0.ordinal()
            r0 = r1[r0]
        L10:
            r1 = 1
            if (r0 != r1) goto L22
            java.lang.String r3 = r4.host()
            java.util.List r3 = r5.lookup(r3)
            java.lang.Object r3 = kotlin.collections.CollectionsKt.first(r3)
            java.net.InetAddress r3 = (java.net.InetAddress) r3
            goto L33
        L22:
            java.net.SocketAddress r3 = r3.address()
            if (r3 == 0) goto L34
            java.net.InetSocketAddress r3 = (java.net.InetSocketAddress) r3
            java.net.InetAddress r3 = r3.getAddress()
            java.lang.String r4 = "address() as InetSocketAddress).address"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
        L33:
            return r3
        L34:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "null cannot be cast to non-null type java.net.InetSocketAddress"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public okhttp3.Request authenticate(okhttp3.Route r21, okhttp3.Response r22) throws java.io.IOException {
            r20 = this;
            r0 = r20
            java.lang.String r1 = "response"
            r2 = r22
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            java.util.List r1 = r22.challenges()
            okhttp3.Request r3 = r22.request()
            okhttp3.HttpUrl r4 = r3.url()
            int r2 = r22.code()
            r5 = 1
            r6 = 407(0x197, float:5.7E-43)
            if (r2 != r6) goto L20
            r2 = r5
            goto L21
        L20:
            r2 = 0
        L21:
            r6 = 0
            if (r21 != 0) goto L26
            r7 = r6
            goto L2a
        L26:
            java.net.Proxy r7 = r21.proxy()
        L2a:
            if (r7 != 0) goto L2e
            java.net.Proxy r7 = java.net.Proxy.NO_PROXY
        L2e:
            java.util.Iterator r1 = r1.iterator()
        L32:
            boolean r8 = r1.hasNext()
            if (r8 == 0) goto Lfb
            java.lang.Object r8 = r1.next()
            okhttp3.Challenge r8 = (okhttp3.Challenge) r8
            java.lang.String r9 = r8.scheme()
            java.lang.String r10 = "Basic"
            boolean r9 = kotlin.text.StringsKt.equals(r10, r9, r5)
            if (r9 != 0) goto L4b
            goto L32
        L4b:
            if (r21 != 0) goto L4f
        L4d:
            r9 = r6
            goto L5a
        L4f:
            okhttp3.Address r9 = r21.address()
            if (r9 != 0) goto L56
            goto L4d
        L56:
            okhttp3.Dns r9 = r9.dns()
        L5a:
            if (r9 != 0) goto L5e
            okhttp3.Dns r9 = r0.defaultDns
        L5e:
            java.lang.String r10 = "proxy"
            if (r2 == 0) goto L98
            java.net.SocketAddress r11 = r7.address()
            if (r11 == 0) goto L90
            java.net.InetSocketAddress r11 = (java.net.InetSocketAddress) r11
            java.lang.String r12 = r11.getHostName()
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r10)
            java.net.InetAddress r13 = r0.connectToInetAddress(r7, r4, r9)
            int r14 = r11.getPort()
            java.lang.String r15 = r4.scheme()
            java.lang.String r16 = r8.realm()
            java.lang.String r17 = r8.scheme()
            java.net.URL r18 = r4.url()
            java.net.Authenticator$RequestorType r19 = java.net.Authenticator.RequestorType.PROXY
            java.net.PasswordAuthentication r9 = java.net.Authenticator.requestPasswordAuthentication(r12, r13, r14, r15, r16, r17, r18, r19)
            goto Lc6
        L90:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "null cannot be cast to non-null type java.net.InetSocketAddress"
            r1.<init>(r2)
            throw r1
        L98:
            java.lang.String r11 = r4.host()
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r10)
            java.net.InetAddress r10 = r0.connectToInetAddress(r7, r4, r9)
            int r12 = r4.port()
            java.lang.String r13 = r4.scheme()
            java.lang.String r14 = r8.realm()
            java.lang.String r15 = r8.scheme()
            java.net.URL r16 = r4.url()
            java.net.Authenticator$RequestorType r17 = java.net.Authenticator.RequestorType.SERVER
            r9 = r11
            r11 = r12
            r12 = r13
            r13 = r14
            r14 = r15
            r15 = r16
            r16 = r17
            java.net.PasswordAuthentication r9 = java.net.Authenticator.requestPasswordAuthentication(r9, r10, r11, r12, r13, r14, r15, r16)
        Lc6:
            if (r9 == 0) goto L32
            if (r2 == 0) goto Lcd
            java.lang.String r1 = "Proxy-Authorization"
            goto Lcf
        Lcd:
            java.lang.String r1 = "Authorization"
        Lcf:
            java.lang.String r2 = r9.getUserName()
            java.lang.String r4 = "auth.userName"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r4)
            java.lang.String r4 = new java.lang.String
            char[] r5 = r9.getPassword()
            java.lang.String r6 = "auth.password"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r6)
            r4.<init>(r5)
            java.nio.charset.Charset r5 = r8.charset()
            java.lang.String r2 = okhttp3.Credentials.basic(r2, r4, r5)
            okhttp3.Request$Builder r3 = r3.newBuilder()
            okhttp3.Request$Builder r1 = r3.header(r1, r2)
            okhttp3.Request r1 = r1.build()
            return r1
        Lfb:
            return r6
    }
}
