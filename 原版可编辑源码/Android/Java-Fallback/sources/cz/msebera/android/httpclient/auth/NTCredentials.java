package cz.msebera.android.httpclient.auth;

@cz.msebera.android.httpclient.annotation.Immutable
public class NTCredentials implements cz.msebera.android.httpclient.auth.Credentials, java.io.Serializable {
    private static final long serialVersionUID = -7385699315228907265L;
    private final java.lang.String password;
    private final cz.msebera.android.httpclient.auth.NTUserPrincipal principal;
    private final java.lang.String workstation;

    public NTCredentials(java.lang.String r6) {
            r5 = this;
            r5.<init>()
            java.lang.String r0 = "Username:password string"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            r0 = 58
            int r0 = r6.indexOf(r0)
            r1 = 0
            r2 = 0
            if (r0 < 0) goto L20
            java.lang.String r3 = r6.substring(r1, r0)
            int r0 = r0 + 1
            java.lang.String r6 = r6.substring(r0)
            r5.password = r6
            r6 = r3
            goto L22
        L20:
            r5.password = r2
        L22:
            r0 = 47
            int r0 = r6.indexOf(r0)
            if (r0 < 0) goto L42
            cz.msebera.android.httpclient.auth.NTUserPrincipal r3 = new cz.msebera.android.httpclient.auth.NTUserPrincipal
            java.lang.String r1 = r6.substring(r1, r0)
            java.util.Locale r4 = java.util.Locale.ROOT
            java.lang.String r1 = r1.toUpperCase(r4)
            int r0 = r0 + 1
            java.lang.String r6 = r6.substring(r0)
            r3.<init>(r1, r6)
            r5.principal = r3
            goto L4f
        L42:
            cz.msebera.android.httpclient.auth.NTUserPrincipal r1 = new cz.msebera.android.httpclient.auth.NTUserPrincipal
            int r0 = r0 + 1
            java.lang.String r6 = r6.substring(r0)
            r1.<init>(r2, r6)
            r5.principal = r1
        L4f:
            r5.workstation = r2
            return
    }

    public NTCredentials(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "User name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.auth.NTUserPrincipal r0 = new cz.msebera.android.httpclient.auth.NTUserPrincipal
            r0.<init>(r5, r2)
            r1.principal = r0
            r1.password = r3
            if (r4 == 0) goto L1c
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r2 = r4.toUpperCase(r2)
            r1.workstation = r2
            goto L1f
        L1c:
            r2 = 0
            r1.workstation = r2
        L1f:
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            r0 = 1
            if (r3 != r4) goto L4
            return r0
        L4:
            boolean r1 = r4 instanceof cz.msebera.android.httpclient.auth.NTCredentials
            if (r1 == 0) goto L1f
            cz.msebera.android.httpclient.auth.NTCredentials r4 = (cz.msebera.android.httpclient.auth.NTCredentials) r4
            cz.msebera.android.httpclient.auth.NTUserPrincipal r1 = r3.principal
            cz.msebera.android.httpclient.auth.NTUserPrincipal r2 = r4.principal
            boolean r1 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r2)
            if (r1 == 0) goto L1f
            java.lang.String r1 = r3.workstation
            java.lang.String r4 = r4.workstation
            boolean r4 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r4)
            if (r4 == 0) goto L1f
            return r0
        L1f:
            r4 = 0
            return r4
    }

    public java.lang.String getDomain() {
            r1 = this;
            cz.msebera.android.httpclient.auth.NTUserPrincipal r0 = r1.principal
            java.lang.String r0 = r0.getDomain()
            return r0
    }

    @Override
    public java.lang.String getPassword() {
            r1 = this;
            java.lang.String r0 = r1.password
            return r0
    }

    public java.lang.String getUserName() {
            r1 = this;
            cz.msebera.android.httpclient.auth.NTUserPrincipal r0 = r1.principal
            java.lang.String r0 = r0.getUsername()
            return r0
    }

    @Override
    public java.security.Principal getUserPrincipal() {
            r1 = this;
            cz.msebera.android.httpclient.auth.NTUserPrincipal r0 = r1.principal
            return r0
    }

    public java.lang.String getWorkstation() {
            r1 = this;
            java.lang.String r0 = r1.workstation
            return r0
    }

    public int hashCode() {
            r2 = this;
            cz.msebera.android.httpclient.auth.NTUserPrincipal r0 = r2.principal
            r1 = 17
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r1, r0)
            java.lang.String r1 = r2.workstation
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[principal: "
            r0.append(r1)
            cz.msebera.android.httpclient.auth.NTUserPrincipal r1 = r2.principal
            r0.append(r1)
            java.lang.String r1 = "][workstation: "
            r0.append(r1)
            java.lang.String r1 = r2.workstation
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
