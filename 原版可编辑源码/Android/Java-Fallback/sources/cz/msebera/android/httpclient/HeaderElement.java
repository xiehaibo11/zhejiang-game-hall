package cz.msebera.android.httpclient;

public interface HeaderElement {
    java.lang.String getName();

    cz.msebera.android.httpclient.NameValuePair getParameter(int r1);

    cz.msebera.android.httpclient.NameValuePair getParameterByName(java.lang.String r1);

    int getParameterCount();

    cz.msebera.android.httpclient.NameValuePair[] getParameters();

    java.lang.String getValue();
}
