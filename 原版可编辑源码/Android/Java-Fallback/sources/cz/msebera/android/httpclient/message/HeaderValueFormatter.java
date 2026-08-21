package cz.msebera.android.httpclient.message;

public interface HeaderValueFormatter {
    cz.msebera.android.httpclient.util.CharArrayBuffer formatElements(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.HeaderElement[] r2, boolean r3);

    cz.msebera.android.httpclient.util.CharArrayBuffer formatHeaderElement(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.HeaderElement r2, boolean r3);

    cz.msebera.android.httpclient.util.CharArrayBuffer formatNameValuePair(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.NameValuePair r2, boolean r3);

    cz.msebera.android.httpclient.util.CharArrayBuffer formatParameters(cz.msebera.android.httpclient.util.CharArrayBuffer r1, cz.msebera.android.httpclient.NameValuePair[] r2, boolean r3);
}
