package cz.msebera.android.httpclient.auth;

@cz.msebera.android.httpclient.annotation.Immutable
public class UsernamePasswordCredentials implements cz.msebera.android.httpclient.auth.Credentials, java.io.Serializable {
    private static final long serialVersionUID = 243343858802739403L;
    private final java.lang.String password;
    private final cz.msebera.android.httpclient.auth.BasicUserPrincipal principal;

    public UsernamePasswordCredentials(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "Username:password string"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r0 = 58
            int r0 = r4.indexOf(r0)
            if (r0 < 0) goto L25
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r1 = new cz.msebera.android.httpclient.auth.BasicUserPrincipal
            r2 = 0
            java.lang.String r2 = r4.substring(r2, r0)
            r1.<init>(r2)
            r3.principal = r1
            int r0 = r0 + 1
            java.lang.String r4 = r4.substring(r0)
            r3.password = r4
            goto L2f
        L25:
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r0 = new cz.msebera.android.httpclient.auth.BasicUserPrincipal
            r0.<init>(r4)
            r3.principal = r0
            r4 = 0
            r3.password = r4
        L2f:
            return
    }

    public UsernamePasswordCredentials(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Username"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r0 = new cz.msebera.android.httpclient.auth.BasicUserPrincipal
            r0.<init>(r2)
            r1.principal = r0
            r1.password = r3
            return
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 1
            if (r2 != r3) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof cz.msebera.android.httpclient.auth.UsernamePasswordCredentials
            if (r1 == 0) goto L15
            cz.msebera.android.httpclient.auth.UsernamePasswordCredentials r3 = (cz.msebera.android.httpclient.auth.UsernamePasswordCredentials) r3
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r1 = r2.principal
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r3 = r3.principal
            boolean r3 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r3)
            if (r3 == 0) goto L15
            return r0
        L15:
            r3 = 0
            return r3
    }

    @Override
    public java.lang.String getPassword() {
            r1 = this;
            java.lang.String r0 = r1.password
            return r0
    }

    public java.lang.String getUserName() {
            r1 = this;
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r0 = r1.principal
            java.lang.String r0 = r0.getName()
            return r0
    }

    @Override
    public java.security.Principal getUserPrincipal() {
            r1 = this;
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r0 = r1.principal
            return r0
    }

    public int hashCode() {
            r1 = this;
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r0 = r1.principal
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r0 = r1.principal
            java.lang.String r0 = r0.toString()
            return r0
    }
}
