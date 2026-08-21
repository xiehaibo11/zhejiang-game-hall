package cz.msebera.android.httpclient.conn.util;

@cz.msebera.android.httpclient.annotation.Immutable
public class InetAddressUtils {
    private static final char COLON_CHAR = ':';
    private static final java.lang.String IPV4_BASIC_PATTERN_STRING = "(([1-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){1}(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){2}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])";
    private static final java.util.regex.Pattern IPV4_MAPPED_IPV6_PATTERN = null;
    private static final java.util.regex.Pattern IPV4_PATTERN = null;
    private static final java.util.regex.Pattern IPV6_HEX_COMPRESSED_PATTERN = null;
    private static final java.util.regex.Pattern IPV6_STD_PATTERN = null;
    private static final int MAX_COLON_COUNT = 7;

    static {
            java.lang.String r0 = "^(([1-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){1}(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){2}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.conn.util.InetAddressUtils.IPV4_PATTERN = r0
            java.lang.String r0 = "^::[fF]{4}:(([1-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){1}(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){2}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.conn.util.InetAddressUtils.IPV4_MAPPED_IPV6_PATTERN = r0
            java.lang.String r0 = "^[0-9a-fA-F]{1,4}(:[0-9a-fA-F]{1,4}){7}$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.conn.util.InetAddressUtils.IPV6_STD_PATTERN = r0
            java.lang.String r0 = "^(([0-9A-Fa-f]{1,4}(:[0-9A-Fa-f]{1,4}){0,5})?)::(([0-9A-Fa-f]{1,4}(:[0-9A-Fa-f]{1,4}){0,5})?)$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.conn.util.InetAddressUtils.IPV6_HEX_COMPRESSED_PATTERN = r0
            return
    }

    private InetAddressUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isIPv4Address(java.lang.String r1) {
            java.util.regex.Pattern r0 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.IPV4_PATTERN
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }

    public static boolean isIPv4MappedIPv64Address(java.lang.String r1) {
            java.util.regex.Pattern r0 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.IPV4_MAPPED_IPV6_PATTERN
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }

    public static boolean isIPv6Address(java.lang.String r1) {
            boolean r0 = isIPv6StdAddress(r1)
            if (r0 != 0) goto Lf
            boolean r1 = isIPv6HexCompressedAddress(r1)
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r1 = 0
            goto L10
        Lf:
            r1 = 1
        L10:
            return r1
    }

    public static boolean isIPv6HexCompressedAddress(java.lang.String r5) {
            r0 = 0
            r1 = 0
            r2 = 0
        L3:
            int r3 = r5.length()
            if (r1 >= r3) goto L16
            char r3 = r5.charAt(r1)
            r4 = 58
            if (r3 != r4) goto L13
            int r2 = r2 + 1
        L13:
            int r1 = r1 + 1
            goto L3
        L16:
            r1 = 7
            if (r2 > r1) goto L26
            java.util.regex.Pattern r1 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.IPV6_HEX_COMPRESSED_PATTERN
            java.util.regex.Matcher r5 = r1.matcher(r5)
            boolean r5 = r5.matches()
            if (r5 == 0) goto L26
            r0 = 1
        L26:
            return r0
    }

    public static boolean isIPv6StdAddress(java.lang.String r1) {
            java.util.regex.Pattern r0 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.IPV6_STD_PATTERN
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }
}
