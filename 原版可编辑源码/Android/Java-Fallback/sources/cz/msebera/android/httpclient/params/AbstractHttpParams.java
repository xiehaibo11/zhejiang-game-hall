package cz.msebera.android.httpclient.params;

@java.lang.Deprecated
public abstract class AbstractHttpParams implements cz.msebera.android.httpclient.params.HttpParams, cz.msebera.android.httpclient.params.HttpParamsNames {
    protected AbstractHttpParams() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean getBooleanParameter(java.lang.String r1, boolean r2) {
            r0 = this;
            java.lang.Object r1 = r0.getParameter(r1)
            if (r1 != 0) goto L7
            return r2
        L7:
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            return r1
    }

    @Override
    public double getDoubleParameter(java.lang.String r1, double r2) {
            r0 = this;
            java.lang.Object r1 = r0.getParameter(r1)
            if (r1 != 0) goto L7
            return r2
        L7:
            java.lang.Double r1 = (java.lang.Double) r1
            double r1 = r1.doubleValue()
            return r1
    }

    @Override
    public int getIntParameter(java.lang.String r1, int r2) {
            r0 = this;
            java.lang.Object r1 = r0.getParameter(r1)
            if (r1 != 0) goto L7
            return r2
        L7:
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            return r1
    }

    @Override
    public long getLongParameter(java.lang.String r1, long r2) {
            r0 = this;
            java.lang.Object r1 = r0.getParameter(r1)
            if (r1 != 0) goto L7
            return r2
        L7:
            java.lang.Long r1 = (java.lang.Long) r1
            long r1 = r1.longValue()
            return r1
    }

    @Override
    public java.util.Set<java.lang.String> getNames() {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isParameterFalse(java.lang.String r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.getBooleanParameter(r2, r0)
            r2 = r2 ^ 1
            return r2
    }

    @Override
    public boolean isParameterTrue(java.lang.String r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.getBooleanParameter(r2, r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams setBooleanParameter(java.lang.String r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto L5
            java.lang.Boolean r2 = java.lang.Boolean.TRUE
            goto L7
        L5:
            java.lang.Boolean r2 = java.lang.Boolean.FALSE
        L7:
            r0.setParameter(r1, r2)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams setDoubleParameter(java.lang.String r1, double r2) {
            r0 = this;
            java.lang.Double r2 = java.lang.Double.valueOf(r2)
            r0.setParameter(r1, r2)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams setIntParameter(java.lang.String r1, int r2) {
            r0 = this;
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.setParameter(r1, r2)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams setLongParameter(java.lang.String r1, long r2) {
            r0 = this;
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r0.setParameter(r1, r2)
            return r0
    }
}
