package cz.msebera.android.httpclient.client;

public interface BackoffManager {
    void backOff(cz.msebera.android.httpclient.conn.routing.HttpRoute r1);

    void probe(cz.msebera.android.httpclient.conn.routing.HttpRoute r1);
}
