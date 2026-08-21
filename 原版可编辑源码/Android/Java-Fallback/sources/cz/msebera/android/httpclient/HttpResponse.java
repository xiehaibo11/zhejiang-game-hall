package cz.msebera.android.httpclient;

public interface HttpResponse extends cz.msebera.android.httpclient.HttpMessage {
    cz.msebera.android.httpclient.HttpEntity getEntity();

    java.util.Locale getLocale();

    cz.msebera.android.httpclient.StatusLine getStatusLine();

    void setEntity(cz.msebera.android.httpclient.HttpEntity r1);

    void setLocale(java.util.Locale r1);

    void setReasonPhrase(java.lang.String r1) throws java.lang.IllegalStateException;

    void setStatusCode(int r1) throws java.lang.IllegalStateException;

    void setStatusLine(cz.msebera.android.httpclient.ProtocolVersion r1, int r2);

    void setStatusLine(cz.msebera.android.httpclient.ProtocolVersion r1, int r2, java.lang.String r3);

    void setStatusLine(cz.msebera.android.httpclient.StatusLine r1);
}
