package org.cocos2dx.okhttp3.internal.http;

import java.io.IOException;
import org.cocos2dx.okhttp3.Request;
import org.cocos2dx.okhttp3.Response;
import org.cocos2dx.okhttp3.ResponseBody;
import org.cocos2dx.okio.Sink;

public interface HttpCodec {
    public static final int DISCARD_STREAM_TIMEOUT_MILLIS = 100;

    void cancel();

    Sink createRequestBody(Request r1, long r2);

    void finishRequest() throws IOException;

    void flushRequest() throws IOException;

    ResponseBody openResponseBody(Response r1) throws IOException;

    Response.Builder readResponseHeaders(boolean r1) throws IOException;

    void writeRequestHeaders(Request r1) throws IOException;
}
