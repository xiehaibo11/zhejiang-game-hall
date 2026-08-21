package cz.msebera.android.httpclient.message;

public interface HeaderValueParser {
    cz.msebera.android.httpclient.HeaderElement[] parseElements(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.message.ParserCursor r2) throws cz.msebera.android.httpclient.ParseException;

    cz.msebera.android.httpclient.HeaderElement parseHeaderElement(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.message.ParserCursor r2) throws cz.msebera.android.httpclient.ParseException;

    cz.msebera.android.httpclient.NameValuePair parseNameValuePair(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.message.ParserCursor r2) throws cz.msebera.android.httpclient.ParseException;

    cz.msebera.android.httpclient.NameValuePair[] parseParameters(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.message.ParserCursor r2) throws cz.msebera.android.httpclient.ParseException;
}
