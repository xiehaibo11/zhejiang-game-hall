package cz.msebera.android.httpclient.message;

public interface LineFormatter {
    cz.msebera.android.httpclient.util.CharArrayBuffer appendProtocolVersion(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.ProtocolVersion r2);

    cz.msebera.android.httpclient.util.CharArrayBuffer formatHeader(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.Header r2);

    cz.msebera.android.httpclient.util.CharArrayBuffer formatRequestLine(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.RequestLine r2);

    cz.msebera.android.httpclient.util.CharArrayBuffer formatStatusLine(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.StatusLine r2);
}
