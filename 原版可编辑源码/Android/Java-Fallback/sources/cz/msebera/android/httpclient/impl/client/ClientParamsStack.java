package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class ClientParamsStack extends cz.msebera.android.httpclient.params.AbstractHttpParams {
    protected final cz.msebera.android.httpclient.params.HttpParams applicationParams;
    protected final cz.msebera.android.httpclient.params.HttpParams clientParams;
    protected final cz.msebera.android.httpclient.params.HttpParams overrideParams;
    protected final cz.msebera.android.httpclient.params.HttpParams requestParams;

    public ClientParamsStack(cz.msebera.android.httpclient.impl.client.ClientParamsStack r4) {
            r3 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r4.getApplicationParams()
            cz.msebera.android.httpclient.params.HttpParams r1 = r4.getClientParams()
            cz.msebera.android.httpclient.params.HttpParams r2 = r4.getRequestParams()
            cz.msebera.android.httpclient.params.HttpParams r4 = r4.getOverrideParams()
            r3.<init>(r0, r1, r2, r4)
            return
    }

    public ClientParamsStack(cz.msebera.android.httpclient.impl.client.ClientParamsStack r1, cz.msebera.android.httpclient.params.HttpParams r2, cz.msebera.android.httpclient.params.HttpParams r3, cz.msebera.android.httpclient.params.HttpParams r4, cz.msebera.android.httpclient.params.HttpParams r5) {
            r0 = this;
            if (r2 == 0) goto L3
            goto L7
        L3:
            cz.msebera.android.httpclient.params.HttpParams r2 = r1.getApplicationParams()
        L7:
            if (r3 == 0) goto La
            goto Le
        La:
            cz.msebera.android.httpclient.params.HttpParams r3 = r1.getClientParams()
        Le:
            if (r4 == 0) goto L11
            goto L15
        L11:
            cz.msebera.android.httpclient.params.HttpParams r4 = r1.getRequestParams()
        L15:
            if (r5 == 0) goto L18
            goto L1c
        L18:
            cz.msebera.android.httpclient.params.HttpParams r5 = r1.getOverrideParams()
        L1c:
            r0.<init>(r2, r3, r4, r5)
            return
    }

    public ClientParamsStack(cz.msebera.android.httpclient.params.HttpParams r1, cz.msebera.android.httpclient.params.HttpParams r2, cz.msebera.android.httpclient.params.HttpParams r3, cz.msebera.android.httpclient.params.HttpParams r4) {
            r0 = this;
            r0.<init>()
            r0.applicationParams = r1
            r0.clientParams = r2
            r0.requestParams = r3
            r0.overrideParams = r4
            return
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams copy() {
            r0 = this;
            return r0
    }

    public final cz.msebera.android.httpclient.params.HttpParams getApplicationParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.applicationParams
            return r0
    }

    public final cz.msebera.android.httpclient.params.HttpParams getClientParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.clientParams
            return r0
    }

    public final cz.msebera.android.httpclient.params.HttpParams getOverrideParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.overrideParams
            return r0
    }

    @Override
    public java.lang.Object getParameter(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "Parameter name"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.overrideParams
            if (r0 == 0) goto Le
            java.lang.Object r0 = r0.getParameter(r3)
            goto Lf
        Le:
            r0 = 0
        Lf:
            if (r0 != 0) goto L19
            cz.msebera.android.httpclient.params.HttpParams r1 = r2.requestParams
            if (r1 == 0) goto L19
            java.lang.Object r0 = r1.getParameter(r3)
        L19:
            if (r0 != 0) goto L23
            cz.msebera.android.httpclient.params.HttpParams r1 = r2.clientParams
            if (r1 == 0) goto L23
            java.lang.Object r0 = r1.getParameter(r3)
        L23:
            if (r0 != 0) goto L2d
            cz.msebera.android.httpclient.params.HttpParams r1 = r2.applicationParams
            if (r1 == 0) goto L2d
            java.lang.Object r0 = r1.getParameter(r3)
        L2d:
            return r0
    }

    public final cz.msebera.android.httpclient.params.HttpParams getRequestParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.requestParams
            return r0
    }

    @Override
    public boolean removeParameter(java.lang.String r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Removing parameters in a stack is not supported."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams setParameter(java.lang.String r1, java.lang.Object r2) throws java.lang.UnsupportedOperationException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Setting parameters in a stack is not supported."
            r1.<init>(r2)
            throw r1
    }
}
