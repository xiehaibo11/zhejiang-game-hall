package cz.msebera.android.httpclient.io;

import cz.msebera.android.httpclient.HttpMessage;

public interface HttpMessageWriterFactory<T extends cz.msebera.android.httpclient.HttpMessage> {
    cz.msebera.android.httpclient.io.HttpMessageWriter<T> create(cz.msebera.android.httpclient.io.SessionOutputBuffer r1);
}
