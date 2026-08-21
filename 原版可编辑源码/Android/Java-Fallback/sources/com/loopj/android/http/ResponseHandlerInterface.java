package com.loopj.android.http;

public interface ResponseHandlerInterface {
    cz.msebera.android.httpclient.Header[] getRequestHeaders();

    java.net.URI getRequestURI();

    java.lang.Object getTag();

    boolean getUsePoolThread();

    boolean getUseSynchronousMode();

    void onPostProcessResponse(com.loopj.android.http.ResponseHandlerInterface r1, cz.msebera.android.httpclient.HttpResponse r2);

    void onPreProcessResponse(com.loopj.android.http.ResponseHandlerInterface r1, cz.msebera.android.httpclient.HttpResponse r2);

    void sendCancelMessage();

    void sendFailureMessage(int r1, cz.msebera.android.httpclient.Header[] r2, byte[] r3, java.lang.Throwable r4);

    void sendFinishMessage();

    void sendProgressMessage(long r1, long r3);

    void sendResponseMessage(cz.msebera.android.httpclient.HttpResponse r1) throws java.io.IOException;

    void sendRetryMessage(int r1);

    void sendStartMessage();

    void sendSuccessMessage(int r1, cz.msebera.android.httpclient.Header[] r2, byte[] r3);

    void setRequestHeaders(cz.msebera.android.httpclient.Header[] r1);

    void setRequestURI(java.net.URI r1);

    void setTag(java.lang.Object r1);

    void setUsePoolThread(boolean r1);

    void setUseSynchronousMode(boolean r1);
}
