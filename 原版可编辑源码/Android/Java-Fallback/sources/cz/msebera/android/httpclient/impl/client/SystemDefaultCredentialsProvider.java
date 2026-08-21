package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class SystemDefaultCredentialsProvider implements cz.msebera.android.httpclient.client.CredentialsProvider {
    private static final java.util.Map<java.lang.String, java.lang.String> SCHEME_MAP = null;
    private final cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider internal;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.SystemDefaultCredentialsProvider.SCHEME_MAP = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = cz.msebera.android.httpclient.impl.client.SystemDefaultCredentialsProvider.SCHEME_MAP
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r2 = "Basic"
            java.lang.String r1 = r2.toUpperCase(r1)
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = cz.msebera.android.httpclient.impl.client.SystemDefaultCredentialsProvider.SCHEME_MAP
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r2 = "Digest"
            java.lang.String r1 = r2.toUpperCase(r1)
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = cz.msebera.android.httpclient.impl.client.SystemDefaultCredentialsProvider.SCHEME_MAP
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r2 = "NTLM"
            java.lang.String r1 = r2.toUpperCase(r1)
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = cz.msebera.android.httpclient.impl.client.SystemDefaultCredentialsProvider.SCHEME_MAP
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r2 = "Negotiate"
            java.lang.String r1 = r2.toUpperCase(r1)
            java.lang.String r2 = "SPNEGO"
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = cz.msebera.android.httpclient.impl.client.SystemDefaultCredentialsProvider.SCHEME_MAP
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r2 = "Kerberos"
            java.lang.String r1 = r2.toUpperCase(r1)
            r0.put(r1, r2)
            return
    }

    public SystemDefaultCredentialsProvider() {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider r0 = new cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider
            r0.<init>()
            r1.internal = r0
            return
    }

    private static java.net.PasswordAuthentication getSystemCreds(cz.msebera.android.httpclient.auth.AuthScope r8, java.net.Authenticator.RequestorType r9) {
            java.lang.String r0 = r8.getHost()
            int r2 = r8.getPort()
            cz.msebera.android.httpclient.HttpHost r1 = r8.getOrigin()
            if (r1 == 0) goto L14
            java.lang.String r1 = r1.getSchemeName()
        L12:
            r3 = r1
            goto L1e
        L14:
            r1 = 443(0x1bb, float:6.21E-43)
            if (r2 != r1) goto L1b
            java.lang.String r1 = "https"
            goto L12
        L1b:
            java.lang.String r1 = "http"
            goto L12
        L1e:
            r1 = 0
            r4 = 0
            java.lang.String r8 = r8.getScheme()
            java.lang.String r5 = translateScheme(r8)
            r6 = 0
            r7 = r9
            java.net.PasswordAuthentication r8 = java.net.Authenticator.requestPasswordAuthentication(r0, r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    private static java.lang.String translateScheme(java.lang.String r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.util.Map<java.lang.String, java.lang.String> r0 = cz.msebera.android.httpclient.impl.client.SystemDefaultCredentialsProvider.SCHEME_MAP
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto Lf
            r1 = r0
        Lf:
            return r1
    }

    @Override
    public void clear() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider r0 = r1.internal
            r0.clear()
            return
    }

    @Override
    public cz.msebera.android.httpclient.auth.Credentials getCredentials(cz.msebera.android.httpclient.auth.AuthScope r6) {
            r5 = this;
            java.lang.String r0 = "Auth scope"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider r0 = r5.internal
            cz.msebera.android.httpclient.auth.Credentials r0 = r0.getCredentials(r6)
            if (r0 == 0) goto Le
            return r0
        Le:
            java.lang.String r0 = r6.getHost()
            r1 = 0
            if (r0 == 0) goto L72
            java.net.Authenticator$RequestorType r0 = java.net.Authenticator.RequestorType.SERVER
            java.net.PasswordAuthentication r0 = getSystemCreds(r6, r0)
            if (r0 != 0) goto L23
            java.net.Authenticator$RequestorType r0 = java.net.Authenticator.RequestorType.PROXY
            java.net.PasswordAuthentication r0 = getSystemCreds(r6, r0)
        L23:
            if (r0 == 0) goto L72
            java.lang.String r2 = "http.auth.ntlm.domain"
            java.lang.String r2 = java.lang.System.getProperty(r2)
            if (r2 == 0) goto L40
            cz.msebera.android.httpclient.auth.NTCredentials r6 = new cz.msebera.android.httpclient.auth.NTCredentials
            java.lang.String r3 = r0.getUserName()
            java.lang.String r4 = new java.lang.String
            char[] r0 = r0.getPassword()
            r4.<init>(r0)
            r6.<init>(r3, r4, r1, r2)
            return r6
        L40:
            java.lang.String r6 = r6.getScheme()
            java.lang.String r2 = "NTLM"
            boolean r6 = r2.equalsIgnoreCase(r6)
            if (r6 == 0) goto L5f
            cz.msebera.android.httpclient.auth.NTCredentials r6 = new cz.msebera.android.httpclient.auth.NTCredentials
            java.lang.String r2 = r0.getUserName()
            java.lang.String r3 = new java.lang.String
            char[] r0 = r0.getPassword()
            r3.<init>(r0)
            r6.<init>(r2, r3, r1, r1)
            return r6
        L5f:
            cz.msebera.android.httpclient.auth.UsernamePasswordCredentials r6 = new cz.msebera.android.httpclient.auth.UsernamePasswordCredentials
            java.lang.String r1 = r0.getUserName()
            java.lang.String r2 = new java.lang.String
            char[] r0 = r0.getPassword()
            r2.<init>(r0)
            r6.<init>(r1, r2)
            return r6
        L72:
            return r1
    }

    @Override
    public void setCredentials(cz.msebera.android.httpclient.auth.AuthScope r2, cz.msebera.android.httpclient.auth.Credentials r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider r0 = r1.internal
            r0.setCredentials(r2, r3)
            return
    }
}
