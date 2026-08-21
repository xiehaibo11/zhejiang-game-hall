package cz.msebera.android.httpclient;

public interface Header {
    cz.msebera.android.httpclient.HeaderElement[] getElements() throws cz.msebera.android.httpclient.ParseException;

    java.lang.String getName();

    java.lang.String getValue();
}
