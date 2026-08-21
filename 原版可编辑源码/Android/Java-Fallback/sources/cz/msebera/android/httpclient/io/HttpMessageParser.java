package cz.msebera.android.httpclient.io;

import cz.msebera.android.httpclient.HttpMessage;

public interface HttpMessageParser<T extends cz.msebera.android.httpclient.HttpMessage> {
    T parse() throws java.io.IOException, cz.msebera.android.httpclient.HttpException;
}
