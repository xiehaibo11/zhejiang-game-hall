package okhttp3.internal.http;

public interface HttpCodec {
    public static final int DISCARD_STREAM_TIMEOUT_MILLIS = 100;

    void cancel();

    okio.Sink createRequestBody(okhttp3.Request r1, long r2);

    void finishRequest() throws java.io.IOException;

    void flushRequest() throws java.io.IOException;

    okhttp3.ResponseBody openResponseBody(okhttp3.Response r1) throws java.io.IOException;

    okhttp3.Response.Builder readResponseHeaders(boolean r1) throws java.io.IOException;

    void writeRequestHeaders(okhttp3.Request r1) throws java.io.IOException;
}
