package okhttp3;

import java.net.InetAddress;
import java.net.UnknownHostException;
import java.util.List;

public interface Dns {
    public static final Dns SYSTEM = null;

    List<InetAddress> lookup(String r1) throws UnknownHostException;

    static {
        SYSTEM = new 1();
    }
}
