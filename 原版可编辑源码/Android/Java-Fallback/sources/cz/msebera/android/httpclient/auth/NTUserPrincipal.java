package cz.msebera.android.httpclient.auth;

@cz.msebera.android.httpclient.annotation.Immutable
public class NTUserPrincipal implements java.security.Principal, java.io.Serializable {
    private static final long serialVersionUID = -6870169797924406894L;
    private final java.lang.String domain;
    private final java.lang.String ntname;
    private final java.lang.String username;

    public NTUserPrincipal(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "User name"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r1.username = r3
            if (r2 == 0) goto L15
            java.util.Locale r3 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toUpperCase(r3)
            r1.domain = r2
            goto L18
        L15:
            r2 = 0
            r1.domain = r2
        L18:
            java.lang.String r2 = r1.domain
            if (r2 == 0) goto L3d
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L3d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r1.domain
            r2.append(r3)
            r3 = 92
            r2.append(r3)
            java.lang.String r3 = r1.username
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.ntname = r2
            goto L41
        L3d:
            java.lang.String r2 = r1.username
            r1.ntname = r2
        L41:
            return
    }

    @Override
    public boolean equals(java.lang.Object r4) {
            r3 = this;
            r0 = 1
            if (r3 != r4) goto L4
            return r0
        L4:
            boolean r1 = r4 instanceof cz.msebera.android.httpclient.auth.NTUserPrincipal
            if (r1 == 0) goto L1f
            cz.msebera.android.httpclient.auth.NTUserPrincipal r4 = (cz.msebera.android.httpclient.auth.NTUserPrincipal) r4
            java.lang.String r1 = r3.username
            java.lang.String r2 = r4.username
            boolean r1 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r2)
            if (r1 == 0) goto L1f
            java.lang.String r1 = r3.domain
            java.lang.String r4 = r4.domain
            boolean r4 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r4)
            if (r4 == 0) goto L1f
            return r0
        L1f:
            r4 = 0
            return r4
    }

    public java.lang.String getDomain() {
            r1 = this;
            java.lang.String r0 = r1.domain
            return r0
    }

    @Override
    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.ntname
            return r0
    }

    public java.lang.String getUsername() {
            r1 = this;
            java.lang.String r0 = r1.username
            return r0
    }

    @Override
    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.username
            r1 = 17
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r1, r0)
            java.lang.String r1 = r2.domain
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.ntname
            return r0
    }
}
