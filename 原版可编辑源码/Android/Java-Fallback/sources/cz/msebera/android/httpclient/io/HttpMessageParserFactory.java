package cz.msebera.android.httpclient.io;

import cz.msebera.android.httpclient.HttpMessage;

public interface HttpMessageParserFactory<T extends cz.msebera.android.httpclient.HttpMessage> {
    cz.msebera.android.httpclient.io.HttpMessageParser<T> create(cz.msebera.android.httpclient.io.SessionInputBuffer r1, cz.msebera.android.httpclient.config.MessageConstraints r2);
}
