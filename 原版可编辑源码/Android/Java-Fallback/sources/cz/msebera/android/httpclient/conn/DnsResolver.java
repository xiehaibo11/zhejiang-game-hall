package cz.msebera.android.httpclient.conn;

public interface DnsResolver {
    java.net.InetAddress[] resolve(java.lang.String r1) throws java.net.UnknownHostException;
}
