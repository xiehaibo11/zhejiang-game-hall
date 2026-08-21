package cz.msebera.android.httpclient.auth;

@cz.msebera.android.httpclient.annotation.Immutable
public final class BasicUserPrincipal implements java.security.Principal, java.io.Serializable {
    private static final long serialVersionUID = -2266305184969850467L;
    private final java.lang.String username;

    public BasicUserPrincipal(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "User name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.username = r2
            return
    }

    @Override
    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 1
            if (r2 != r3) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof cz.msebera.android.httpclient.auth.BasicUserPrincipal
            if (r1 == 0) goto L15
            cz.msebera.android.httpclient.auth.BasicUserPrincipal r3 = (cz.msebera.android.httpclient.auth.BasicUserPrincipal) r3
            java.lang.String r1 = r2.username
            java.lang.String r3 = r3.username
            boolean r3 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r3)
            if (r3 == 0) goto L15
            return r0
        L15:
            r3 = 0
            return r3
    }

    @Override
    public java.lang.String getName() {
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
            return r0
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[principal: "
            r0.append(r1)
            java.lang.String r1 = r2.username
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
