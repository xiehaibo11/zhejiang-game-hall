package com.mbridge.msdk.thrid.okhttp.internal.http;

public interface HttpCodec {
    public static final int DISCARD_STREAM_TIMEOUT_MILLIS = 100;

    void cancel();

    com.mbridge.msdk.thrid.okio.Sink createRequestBody(com.mbridge.msdk.thrid.okhttp.Request r1, long r2);

    void finishRequest() throws java.io.IOException;

    void flushRequest() throws java.io.IOException;

    com.mbridge.msdk.thrid.okhttp.ResponseBody openResponseBody(com.mbridge.msdk.thrid.okhttp.Response r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okhttp.Response.Builder readResponseHeaders(boolean r1) throws java.io.IOException;

    void writeRequestHeaders(com.mbridge.msdk.thrid.okhttp.Request r1) throws java.io.IOException;
}
