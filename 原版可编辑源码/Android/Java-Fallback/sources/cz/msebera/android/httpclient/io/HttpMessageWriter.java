package cz.msebera.android.httpclient.io;

import cz.msebera.android.httpclient.HttpMessage;

public interface HttpMessageWriter<T extends cz.msebera.android.httpclient.HttpMessage> {
    void write(T r1) throws java.io.IOException, cz.msebera.android.httpclient.HttpException;
}
