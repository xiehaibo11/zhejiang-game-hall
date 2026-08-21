package cz.msebera.android.httpclient.params;

@java.lang.Deprecated
public interface HttpParams {
    cz.msebera.android.httpclient.params.HttpParams copy();

    boolean getBooleanParameter(java.lang.String r1, boolean r2);

    double getDoubleParameter(java.lang.String r1, double r2);

    int getIntParameter(java.lang.String r1, int r2);

    long getLongParameter(java.lang.String r1, long r2);

    java.lang.Object getParameter(java.lang.String r1);

    boolean isParameterFalse(java.lang.String r1);

    boolean isParameterTrue(java.lang.String r1);

    boolean removeParameter(java.lang.String r1);

    cz.msebera.android.httpclient.params.HttpParams setBooleanParameter(java.lang.String r1, boolean r2);

    cz.msebera.android.httpclient.params.HttpParams setDoubleParameter(java.lang.String r1, double r2);

    cz.msebera.android.httpclient.params.HttpParams setIntParameter(java.lang.String r1, int r2);

    cz.msebera.android.httpclient.params.HttpParams setLongParameter(java.lang.String r1, long r2);

    cz.msebera.android.httpclient.params.HttpParams setParameter(java.lang.String r1, java.lang.Object r2);
}
