package cz.msebera.android.httpclient.message;

public interface LineParser {
    boolean hasProtocolVersion(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.message.ParserCursor r2);

    cz.msebera.android.httpclient.Header parseHeader(cz.msebera.android.httpclient.util.CharArrayBuffer r1) throws cz.msebera.android.httpclient.ParseException;

    cz.msebera.android.httpclient.ProtocolVersion parseProtocolVersion(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.message.ParserCursor r2) throws cz.msebera.android.httpclient.ParseException;

    cz.msebera.android.httpclient.RequestLine parseRequestLine(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.message.ParserCursor r2) throws cz.msebera.android.httpclient.ParseException;

    cz.msebera.android.httpclient.StatusLine parseStatusLine(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.message.ParserCursor r2) throws cz.msebera.android.httpclient.ParseException;
}
