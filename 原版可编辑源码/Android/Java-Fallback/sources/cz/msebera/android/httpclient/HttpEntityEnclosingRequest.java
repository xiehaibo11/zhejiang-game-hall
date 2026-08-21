package cz.msebera.android.httpclient;

public interface HttpEntityEnclosingRequest extends cz.msebera.android.httpclient.HttpRequest {
    boolean expectContinue();

    cz.msebera.android.httpclient.HttpEntity getEntity();

    void setEntity(cz.msebera.android.httpclient.HttpEntity r1);
}
