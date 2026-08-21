package cz.msebera.android.httpclient.conn;

public interface SchemePortResolver {
    int resolve(cz.msebera.android.httpclient.HttpHost r1) throws cz.msebera.android.httpclient.conn.UnsupportedSchemeException;
}
