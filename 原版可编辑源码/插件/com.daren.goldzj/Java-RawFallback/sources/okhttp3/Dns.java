package okhttp3;

public interface Dns {
    public static final okhttp3.Dns SYSTEM = null;


    static {
            okhttp3.Dns$1 r0 = new okhttp3.Dns$1
            r0.<init>()
            okhttp3.Dns.SYSTEM = r0
            return
    }

    java.util.List<java.net.InetAddress> lookup(java.lang.String r1) throws java.net.UnknownHostException;
}
