package cz.msebera.android.httpclient.params;

@java.lang.Deprecated
public final class DefaultedHttpParams extends cz.msebera.android.httpclient.params.AbstractHttpParams {
    private final cz.msebera.android.httpclient.params.HttpParams defaults;
    private final cz.msebera.android.httpclient.params.HttpParams local;

    public DefaultedHttpParams(cz.msebera.android.httpclient.params.HttpParams r2, cz.msebera.android.httpclient.params.HttpParams r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Local HTTP parameters"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.params.HttpParams r2 = (cz.msebera.android.httpclient.params.HttpParams) r2
            r1.local = r2
            r1.defaults = r3
            return
    }

    private java.util.Set<java.lang.String> getNames(cz.msebera.android.httpclient.params.HttpParams r2) {
            r1 = this;
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.params.HttpParamsNames
            if (r0 == 0) goto Lb
            cz.msebera.android.httpclient.params.HttpParamsNames r2 = (cz.msebera.android.httpclient.params.HttpParamsNames) r2
            java.util.Set r2 = r2.getNames()
            return r2
        Lb:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "HttpParams instance does not implement HttpParamsNames"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams copy() {
            r3 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r3.local
            cz.msebera.android.httpclient.params.HttpParams r0 = r0.copy()
            cz.msebera.android.httpclient.params.DefaultedHttpParams r1 = new cz.msebera.android.httpclient.params.DefaultedHttpParams
            cz.msebera.android.httpclient.params.HttpParams r2 = r3.defaults
            r1.<init>(r0, r2)
            return r1
    }

    public java.util.Set<java.lang.String> getDefaultNames() {
            r2 = this;
            java.util.HashSet r0 = new java.util.HashSet
            cz.msebera.android.httpclient.params.HttpParams r1 = r2.defaults
            java.util.Set r1 = r2.getNames(r1)
            r0.<init>(r1)
            return r0
    }

    public cz.msebera.android.httpclient.params.HttpParams getDefaults() {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.defaults
            return r0
    }

    public java.util.Set<java.lang.String> getLocalNames() {
            r2 = this;
            java.util.HashSet r0 = new java.util.HashSet
            cz.msebera.android.httpclient.params.HttpParams r1 = r2.local
            java.util.Set r1 = r2.getNames(r1)
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.util.Set<java.lang.String> getNames() {
            r2 = this;
            java.util.HashSet r0 = new java.util.HashSet
            cz.msebera.android.httpclient.params.HttpParams r1 = r2.defaults
            java.util.Set r1 = r2.getNames(r1)
            r0.<init>(r1)
            cz.msebera.android.httpclient.params.HttpParams r1 = r2.local
            java.util.Set r1 = r2.getNames(r1)
            r0.addAll(r1)
            return r0
    }

    @Override
    public java.lang.Object getParameter(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.local
            java.lang.Object r0 = r0.getParameter(r3)
            if (r0 != 0) goto L10
            cz.msebera.android.httpclient.params.HttpParams r1 = r2.defaults
            if (r1 == 0) goto L10
            java.lang.Object r0 = r1.getParameter(r3)
        L10:
            return r0
    }

    @Override
    public boolean removeParameter(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.local
            boolean r2 = r0.removeParameter(r2)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams setParameter(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.local
            cz.msebera.android.httpclient.params.HttpParams r2 = r0.setParameter(r2, r3)
            return r2
    }
}
