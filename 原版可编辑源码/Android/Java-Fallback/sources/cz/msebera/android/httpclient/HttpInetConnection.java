package cz.msebera.android.httpclient;

public interface HttpInetConnection extends cz.msebera.android.httpclient.HttpConnection {
    java.net.InetAddress getLocalAddress();

    int getLocalPort();

    java.net.InetAddress getRemoteAddress();

    int getRemotePort();
}
