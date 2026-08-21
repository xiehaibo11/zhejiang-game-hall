package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class BasicCredentialsProvider implements cz.msebera.android.httpclient.client.CredentialsProvider {
    private final java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.auth.AuthScope, cz.msebera.android.httpclient.auth.Credentials> credMap;

    public BasicCredentialsProvider() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.credMap = r0
            return
    }

    private static cz.msebera.android.httpclient.auth.Credentials matchCredentials(java.util.Map<cz.msebera.android.httpclient.auth.AuthScope, cz.msebera.android.httpclient.auth.Credentials> r6, cz.msebera.android.httpclient.auth.AuthScope r7) {
            java.lang.Object r0 = r6.get(r7)
            cz.msebera.android.httpclient.auth.Credentials r0 = (cz.msebera.android.httpclient.auth.Credentials) r0
            if (r0 != 0) goto L30
            r1 = -1
            r2 = 0
            java.util.Set r3 = r6.keySet()
            java.util.Iterator r3 = r3.iterator()
        L12:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L27
            java.lang.Object r4 = r3.next()
            cz.msebera.android.httpclient.auth.AuthScope r4 = (cz.msebera.android.httpclient.auth.AuthScope) r4
            int r5 = r7.match(r4)
            if (r5 <= r1) goto L12
            r2 = r4
            r1 = r5
            goto L12
        L27:
            if (r2 == 0) goto L30
            java.lang.Object r6 = r6.get(r2)
            r0 = r6
            cz.msebera.android.httpclient.auth.Credentials r0 = (cz.msebera.android.httpclient.auth.Credentials) r0
        L30:
            return r0
    }

    @Override
    public void clear() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.auth.AuthScope, cz.msebera.android.httpclient.auth.Credentials> r0 = r1.credMap
            r0.clear()
            return
    }

    @Override
    public cz.msebera.android.httpclient.auth.Credentials getCredentials(cz.msebera.android.httpclient.auth.AuthScope r2) {
            r1 = this;
            java.lang.String r0 = "Authentication scope"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.auth.AuthScope, cz.msebera.android.httpclient.auth.Credentials> r0 = r1.credMap
            cz.msebera.android.httpclient.auth.Credentials r2 = matchCredentials(r0, r2)
            return r2
    }

    @Override
    public void setCredentials(cz.msebera.android.httpclient.auth.AuthScope r2, cz.msebera.android.httpclient.auth.Credentials r3) {
            r1 = this;
            java.lang.String r0 = "Authentication scope"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.auth.AuthScope, cz.msebera.android.httpclient.auth.Credentials> r0 = r1.credMap
            r0.put(r2, r3)
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.auth.AuthScope, cz.msebera.android.httpclient.auth.Credentials> r0 = r1.credMap
            java.lang.String r0 = r0.toString()
            return r0
    }
}
