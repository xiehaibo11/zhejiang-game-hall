package cz.msebera.android.httpclient.entity;

public interface ContentLengthStrategy {
    public static final int CHUNKED = -2;
    public static final int IDENTITY = -1;

    long determineLength(cz.msebera.android.httpclient.HttpMessage r1) throws cz.msebera.android.httpclient.HttpException;
}
