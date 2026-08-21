package org.cocos2dx.okhttp3.internal;

import java.io.Closeable;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.lang.reflect.Method;
import java.net.IDN;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.nio.charset.Charset;
import java.security.GeneralSecurityException;
import java.security.KeyStore;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.TimeUnit;
import java.util.regex.Pattern;
import javax.annotation.Nullable;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509TrustManager;
import org.cocos2dx.okhttp3.Headers;
import org.cocos2dx.okhttp3.HttpUrl;
import org.cocos2dx.okhttp3.RequestBody;
import org.cocos2dx.okhttp3.ResponseBody;
import org.cocos2dx.okhttp3.internal.http2.Header;
import org.cocos2dx.okio.Buffer;
import org.cocos2dx.okio.BufferedSource;
import org.cocos2dx.okio.ByteString;
import org.cocos2dx.okio.Source;

public final class Util {
    public static final byte[] EMPTY_BYTE_ARRAY = null;
    public static final RequestBody EMPTY_REQUEST = null;
    public static final ResponseBody EMPTY_RESPONSE = null;
    public static final String[] EMPTY_STRING_ARRAY = null;
    public static final Charset ISO_8859_1 = null;
    public static final Comparator<String> NATURAL_ORDER = null;
    public static final TimeZone UTC = null;
    private static final Charset UTF_16_BE = null;
    private static final ByteString UTF_16_BE_BOM = null;
    private static final Charset UTF_16_LE = null;
    private static final ByteString UTF_16_LE_BOM = null;
    private static final Charset UTF_32_BE = null;
    private static final ByteString UTF_32_BE_BOM = null;
    private static final Charset UTF_32_LE = null;
    private static final ByteString UTF_32_LE_BOM = null;
    public static final Charset UTF_8 = null;
    private static final ByteString UTF_8_BOM = null;
    private static final Pattern VERIFY_AS_IP_ADDRESS = null;
    private static final Method addSuppressedExceptionMethod = null;

    public static int decodeHexDigit(char r2) {
        if (r2 >= '0') goto L5;
    L8:
        char r0 = 'a';
        if (r2 >= 'a') goto L11;
    L14:
        r0 = 'A';
        if (r2 >= 'A') goto L17;
        return -1;
    L17:
        if (r2 <= 'F') goto L13;
        return -1;
    L13:
        return (r2 - r0) + 10;
    L11:
        if (r2 > 'f') goto L14;
    L5:
        if (r2 > '9') goto L8;
        return r2 - '0';
    }

    static {
        EMPTY_BYTE_ARRAY = new byte[0];
        EMPTY_STRING_ARRAY = new String[0];
        Method r2 = null;
        EMPTY_RESPONSE = ResponseBody.create(null, EMPTY_BYTE_ARRAY);
        EMPTY_REQUEST = RequestBody.create(null, EMPTY_BYTE_ARRAY);
        UTF_8_BOM = ByteString.decodeHex("efbbbf");
        UTF_16_BE_BOM = ByteString.decodeHex("feff");
        UTF_16_LE_BOM = ByteString.decodeHex("fffe");
        UTF_32_BE_BOM = ByteString.decodeHex("0000ffff");
        UTF_32_LE_BOM = ByteString.decodeHex("ffff0000");
        UTF_8 = Charset.forName("UTF-8");
        ISO_8859_1 = Charset.forName("ISO-8859-1");
        UTF_16_BE = Charset.forName("UTF-16BE");
        UTF_16_LE = Charset.forName("UTF-16LE");
        UTF_32_BE = Charset.forName("UTF-32BE");
        UTF_32_LE = Charset.forName("UTF-32LE");
        UTC = TimeZone.getTimeZone("GMT");
        NATURAL_ORDER = new 1();
        r2 = Throwable.class.getDeclaredMethod("addSuppressed", new Class[]{Throwable.class});     // Catch: Exception -> L6
    L4:
        addSuppressedExceptionMethod = r2;
        VERIFY_AS_IP_ADDRESS = Pattern.compile("([0-9a-fA-F]*:[0-9a-fA-F:.]*)|([\\d.]+)");
    }

    public static void addSuppressedIfPossible(Throwable r3, Throwable r4) {
        Method r0 = addSuppressedExceptionMethod;
        if (r0 != null) goto L8;
        return;
    L8:
        r0.invoke(r3, new Object[]{r4});     // Catch: Throwable -> L7
        return;
    }

    private Util() {
    }

    public static void checkOffsetAndCount(long r5, long r7, long r9) {
        if ((r7 | r9) < 0) goto L10;
        if (r7 > r5) goto L10;
        if ((r5 - r7) < r9) goto L10;
        return;
    L10:
        throw new ArrayIndexOutOfBoundsException();
    }

    public static boolean equal(Object r0, Object r1) {
        if (r0 == r1) goto L8;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.equals(r1) == false) goto L7;
    L8:
        return true;
    }

    public static void closeQuietly(Closeable r0) {
        if (r0 != null) goto L9;
        return;
    L9:
        r0.close();     // Catch: RuntimeException -> L5 Exception -> L8
        goto L12
    L11:
        return;
    L5:
        e = move-exception;
        throw e;
    }

    public static void closeQuietly(Socket r1) {
        if (r1 != null) goto L14;
        return;
    L14:
        r1.close();     // Catch: RuntimeException -> L5 AssertionError -> L7 Exception -> L13
        goto L18
    L16:
        return;
    L7:
        e = move-exception;
        if (isAndroidGetsocknameError(e) == true) goto L17;
        throw e;
    L17:
        return;
    L5:
        e = move-exception;
        throw e;
    }

    public static void closeQuietly(ServerSocket r0) {
        if (r0 != null) goto L9;
        return;
    L9:
        r0.close();     // Catch: RuntimeException -> L5 Exception -> L8
        goto L12
    L11:
        return;
    L5:
        e = move-exception;
        throw e;
    }

    public static boolean discard(Source r0, int r1, TimeUnit r2) {
        return skipAll(r0, r1, r2);
    L4:
        return false;
    }

    public static boolean skipAll(Source r11, int r12, TimeUnit r13) throws IOException {
        long r0 = System.nanoTime();
        if (r11.timeout().hasDeadline() == false) goto L5;
        long r5 = r11.timeout().deadlineNanoTime() - r0;
    L6:
        r11.timeout().deadlineNanoTime(Math.min(r5, r13.toNanos(r12)) + r0);
        Buffer r122 = new Buffer();     // Catch: Throwable -> L17 InterruptedIOException -> L23
    L8:
        if (r11.read(r122, 8192) == (-1)) goto L13;
        r122.clear();     // Catch: Throwable -> L17 InterruptedIOException -> L23
        goto L8
    L13:
        if (r5 != Long.MAX_VALUE) goto L15;
        r11.timeout().clearDeadline();
    L16:
        return true;
    L15:
        r11.timeout().deadlineNanoTime(r0 + r5);
        goto L16
    L17:
        th = move-exception;
        if (r5 != Long.MAX_VALUE) goto L21;
        r11.timeout().clearDeadline();
    L22:
        throw th;
    L21:
        r11.timeout().deadlineNanoTime(r0 + r5);
    L24:
        if (r5 != Long.MAX_VALUE) goto L26;
        r11.timeout().clearDeadline();
    L27:
        return false;
    L26:
        r11.timeout().deadlineNanoTime(r0 + r5);
        goto L27
    L5:
        r5 = Long.MAX_VALUE;
        goto L6
    }

    public static <T> List<T> immutableList(List<T> r1) {
        return Collections.unmodifiableList(new ArrayList(r1));
    }

    public static <K, V> Map<K, V> immutableMap(Map<K, V> r1) {
        if (r1.isEmpty() == false) goto L6;
        return Collections.emptyMap();
    L6:
        return Collections.unmodifiableMap(new LinkedHashMap(r1));
    }

    public static <T> List<T> immutableList(T... r0) {
        return Collections.unmodifiableList(Arrays.asList((Object[]) r0.clone()));
    }

    public static ThreadFactory threadFactory(final String r1, final boolean r2) {
        return new 2(r1, r2);
    }

    public static String[] intersect(Comparator<? super String> r8, String[] r9, String[] r10) {
        ArrayList r0 = new ArrayList();
        int r1 = r9.length;
        int r3 = 0;
    L3:
        if (r3 >= r1) goto L12;
        String r4 = r9[r3];
        int r5 = r10.length;
        int r6 = 0;
    L5:
        if (r6 >= r5) goto L10;
        if (r8.compare(r4, r10[r6]) == 0) goto L8;
        r6 = r6 + 1;
        goto L5
    L8:
        r0.add(r4);
    L10:
        r3 = r3 + 1;
        goto L3
    L12:
        return (String[]) r0.toArray(new String[r0.size()]);
    }

    public static boolean nonEmptyIntersection(Comparator<String> r7, String[] r8, String[] r9) {
        if (r8 == null) goto L20;
        if (r9 == null) goto L20;
        if (r8.length == 0) goto L20;
        if (r9.length == 0) goto L20;
        int r1 = r8.length;
        int r2 = 0;
    L11:
        if (r2 >= r1) goto L20;
        String r3 = r8[r2];
        int r4 = r9.length;
        int r5 = 0;
    L13:
        if (r5 >= r4) goto L19;
        if (r7.compare(r3, r9[r5]) == 0) goto L16;
        r5 = r5 + 1;
        goto L13
    L16:
        return true;
    L19:
        r2 = r2 + 1;
    L20:
        return false;
    }

    public static String hostHeader(HttpUrl r3, boolean r4) {
        if (r3.host().contains(":") == false) goto L5;
        String r0 = "[" + r3.host() + "]";
    L6:
        if (r4 == true) goto L10;
        if (r3.port() != HttpUrl.defaultPort(r3.scheme())) goto L10;
        return r0;
    L10:
        return r0 + ":" + r3.port();
    L5:
        r0 = r3.host();
        goto L6
    }

    public static boolean isAndroidGetsocknameError(AssertionError r1) {
        if (r1.getCause() != null) goto L5;
    L9:
        return false;
    L5:
        if (r1.getMessage() == null) goto L9;
        if (r1.getMessage().contains("getsockname failed") == false) goto L9;
        return true;
    }

    public static int indexOf(Comparator<String> r3, String[] r4, String r5) {
        int r0 = r4.length;
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L8;
        if (r3.compare(r4[r1], r5) == 0) goto L6;
        r1 = r1 + 1;
        goto L3
    L6:
        return r1;
    L8:
        return -1;
    }

    public static String[] concat(String[] r3, String r4) {
        String[] r0 = new String[r3.length + 1];
        System.arraycopy(r3, 0, r0, 0, r3.length);
        r0[r0.length - 1] = r4;
        return r0;
    }

    public static int skipLeadingAsciiWhitespace(String r2, int r3, int r4) {
    L2:
        if (r3 >= r4) goto L15;
        char r0 = r2.charAt(r3);
        if (r0 == '\t') goto L14;
        if (r0 == '\n') goto L14;
        if (r0 == '\f') goto L14;
        if (r0 == '\r') goto L14;
        if (r0 == ' ') goto L14;
        return r3;
    L14:
        r3 = r3 + 1;
        goto L2
    L15:
        return r4;
    }

    public static int skipTrailingAsciiWhitespace(String r2, int r3, int r4) {
        int r42 = r4 - 1;
    L3:
        if (r42 < r3) goto L17;
        char r0 = r2.charAt(r42);
        if (r0 == '\t') goto L16;
        if (r0 == '\n') goto L16;
        if (r0 == '\f') goto L16;
        if (r0 == '\r') goto L16;
        if (r0 == ' ') goto L16;
        return r42 + 1;
    L16:
        r42 = r42 - 1;
        goto L3
    L17:
        return r3;
    }

    public static String trimSubstring(String r0, int r1, int r2) {
        int r12 = skipLeadingAsciiWhitespace(r0, r1, r2);
        return r0.substring(r12, skipTrailingAsciiWhitespace(r0, r12, r2));
    }

    public static int delimiterOffset(String r2, int r3, int r4, String r5) {
    L2:
        if (r3 >= r4) goto L7;
        if (r5.indexOf(r2.charAt(r3)) != (-1)) goto L5;
        r3 = r3 + 1;
        goto L2
    L5:
        return r3;
    L7:
        return r4;
    }

    public static int delimiterOffset(String r1, int r2, int r3, char r4) {
    L2:
        if (r2 >= r3) goto L7;
        if (r1.charAt(r2) == r4) goto L5;
        r2 = r2 + 1;
        goto L2
    L5:
        return r2;
    L7:
        return r3;
    }

    public static String canonicalizeHost(String r3) {
        if (r3.contains(":") == true) goto L5;
        String r32 = IDN.toASCII(r3).toLowerCase(Locale.US);     // Catch: IllegalArgumentException -> L25
        if (r32.isEmpty() == false) goto L21;
        return null;
    L21:
        if (containsInvalidHostnameAsciiCodes(r32) == false) goto L24;
        return null;
    L24:
        return r32;
    L25:
        return null;
    L5:
        if (r3.startsWith("[") == true) goto L7;
    L9:
        InetAddress r0 = decodeIpv6(r3, 0, r3.length());
    L10:
        if (r0 != null) goto L12;
        return null;
    L12:
        byte[] r02 = r0.getAddress();
        if (r02.length != 16) goto L17;
        return inet6AddressToAscii(r02);
    L17:
        throw new AssertionError("Invalid IPv6 address: '" + r3 + "'");
    L7:
        if (r3.endsWith("]") == false) goto L9;
        r0 = decodeIpv6(r3, 1, r3.length() - 1);
        goto L10
    }

    private static boolean containsInvalidHostnameAsciiCodes(String r5) {
        int r1 = 0;
    L4:
        if (r1 >= r5.length()) goto L15;
        char r2 = r5.charAt(r1);
        if (r2 <= 31) goto L14;
        if (r2 >= 127) goto L14;
        if (" #%/:?@[\\]".indexOf(r2) != (-1)) goto L12;
        r1 = r1 + 1;
        goto L4
    L12:
        return true;
    L14:
        return true;
    L15:
        return false;
    }

    public static int indexOfControlOrNonAscii(String r4) {
        int r0 = r4.length();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L11;
        char r2 = r4.charAt(r1);
        if (r2 <= 31) goto L10;
        if (r2 >= 127) goto L10;
        r1 = r1 + 1;
    L10:
        return r1;
    L11:
        return -1;
    }

    public static boolean verifyAsIpAddress(String r1) {
        return VERIFY_AS_IP_ADDRESS.matcher(r1).matches();
    }

    public static String format(String r1, Object... r2) {
        return String.format(Locale.US, r1, r2);
    }

    public static Charset bomAwareCharset(BufferedSource r3, Charset r4) throws IOException {
        if (r3.rangeEquals(0, UTF_8_BOM) == false) goto L7;
        r3.skip(UTF_8_BOM.size());
        return UTF_8;
    L7:
        if (r3.rangeEquals(0, UTF_16_BE_BOM) == false) goto L11;
        r3.skip(UTF_16_BE_BOM.size());
        return UTF_16_BE;
    L11:
        if (r3.rangeEquals(0, UTF_16_LE_BOM) == false) goto L15;
        r3.skip(UTF_16_LE_BOM.size());
        return UTF_16_LE;
    L15:
        if (r3.rangeEquals(0, UTF_32_BE_BOM) == false) goto L19;
        r3.skip(UTF_32_BE_BOM.size());
        return UTF_32_BE;
    L19:
        if (r3.rangeEquals(0, UTF_32_LE_BOM) == false) goto L22;
        r3.skip(UTF_32_LE_BOM.size());
        return UTF_32_LE;
    L22:
        return r4;
    }

    public static int checkDuration(String r5, long r6, TimeUnit r8) {
        if (r6 < 0) goto L20;
        if (r8 == null) goto L18;
        long r62 = r8.toMillis(r6);
        if (r62 > 2147483647L) goto L16;
        if (r62 != 0) goto L14;
        if (r6 <= 0) goto L14;
        throw new IllegalArgumentException(r5 + " too small.");
    L14:
        return (int) r62;
    L16:
        throw new IllegalArgumentException(r5 + " too large.");
    L18:
        throw new NullPointerException("unit == null");
    L20:
        throw new IllegalArgumentException(r5 + " < 0");
    }

    public static AssertionError assertionError(String r1, Exception r2) {
        AssertionError r0 = new AssertionError(r1);
        r0.initCause(r2);     // Catch: IllegalStateException -> L5
    L4:
        return r0;
    }

    @Nullable
    private static InetAddress decodeIpv6(String r10, int r11, int r12) {
        byte[] r0 = new byte[16];
        int r3 = 0;
        int r4 = -1;
        int r5 = -1;
    L4:
        if (r11 >= r12) goto L44;
        if (r3 == r0.length) goto L7;
        int r7 = r11 + 2;
        if (r7 <= r12) goto L11;
    L18:
        if (r3 != 0) goto L20;
    L29:
        r5 = r11;
    L30:
        r11 = r5;
        int r72 = 0;
    L31:
        if (r11 >= r12) goto L36;
        int r8 = decodeHexDigit(r10.charAt(r11));
        if (r8 == (-1)) goto L36;
        r72 = (r72 << 4) + r8;
        r11 = r11 + 1;
    L36:
        int r82 = r11 - r5;
        if (r82 == 0) goto L42;
        if (r82 > 4) goto L42;
        int r6 = r3 + 1;
        r0[r3] = (byte) ((r72 >>> 8) & 255);
        r3 = r6 + 1;
        r0[r6] = (byte) (r72 & 255);
    L42:
        return null;
    L20:
        if (r10.regionMatches(r11, ":", 0, 1) == false) goto L23;
        r11 = r11 + 1;
        goto L29
    L23:
        if (r10.regionMatches(r11, ".", 0, 1) == true) goto L25;
        return null;
    L25:
        if (decodeIpv4Suffix(r10, r5, r12, r0, r3 - 2) == true) goto L27;
        return null;
    L27:
        r3 = r3 + 2;
        goto L44
    L11:
        if (r10.regionMatches(r11, "::", 0, 2) == false) goto L18;
        if (r4 != (-1)) goto L13;
        r3 = r3 + 2;
        if (r7 == r12) goto L16;
        r4 = r3;
        r5 = r7;
        goto L30
    L16:
        r4 = r3;
        goto L44
    L13:
        return null;
    L7:
        return null;
    L44:
        if (r3 == r0.length) goto L52;
        if (r4 != (-1)) goto L47;
        return null;
    L47:
        int r112 = r3 - r4;
        System.arraycopy(r0, r4, r0, r0.length - r112, r112);
        Arrays.fill(r0, r4, (r0.length - r3) + r4, (byte) 0);
    L52:
        return InetAddress.getByAddress(r0);
    L51:
        throw new AssertionError();
    }

    private static boolean decodeIpv4Suffix(String r7, int r8, int r9, byte[] r10, int r11) {
        int r0 = r11;
    L4:
        if (r8 >= r9) goto L32;
        if (r0 == r10.length) goto L7;
        if (r0 != r11) goto L10;
    L13:
        int r2 = r8;
        int r3 = 0;
    L14:
        if (r2 >= r9) goto L28;
        char r4 = r7.charAt(r2);
        if (r4 < '0') goto L28;
        if (r4 > '9') goto L28;
        if (r3 != 0) goto L23;
        if (r8 == r2) goto L23;
        return false;
    L23:
        r3 = ((r3 * 10) + r4) - 48;
        if (r3 > 255) goto L25;
        r2 = r2 + 1;
        goto L14
    L25:
        return false;
    L28:
        if ((r2 - r8) == 0) goto L29;
        r10[r0] = (byte) r3;
        r0 = r0 + 1;
        r8 = r2;
        goto L4
    L29:
        return false;
    L10:
        if (r7.charAt(r8) != '.') goto L11;
        r8 = r8 + 1;
        goto L13
    L11:
        return false;
    L7:
        return false;
    L32:
        if (r0 == (r11 + 4)) goto L34;
        return false;
    L34:
        return true;
    }

    private static String inet6AddressToAscii(byte[] r8) {
        int r0 = 0;
        int r1 = 0;
        int r2 = -1;
        int r3 = 0;
    L4:
        if (r1 >= r8.length) goto L18;
        int r4 = r1;
    L6:
        if (r4 >= 16) goto L12;
        if (r8[r4] != 0) goto L12;
        if (r8[r4 + 1] != 0) goto L12;
        r4 = r4 + 2;
    L12:
        int r5 = r4 - r1;
        if (r5 <= r3) goto L17;
        if (r5 < 4) goto L17;
        r2 = r1;
        r3 = r5;
    L17:
        r1 = r4 + 2;
        goto L4
    L18:
        Buffer r12 = new Buffer();
    L20:
        if (r0 >= r8.length) goto L30;
        if (r0 == r2) goto L23;
        if (r0 <= 0) goto L28;
        r12.writeByte(58);
    L28:
        r12.writeHexadecimalUnsignedLong(((r8[r0] & 255) << 8) | (r8[r0 + 1] & 255));
        r0 = r0 + 2;
        goto L20
    L23:
        r12.writeByte(58);
        r0 = r0 + r3;
        if (r0 != 16) goto L20;
        r12.writeByte(58);
        goto L20
    L30:
        return r12.readUtf8();
    }

    public static X509TrustManager platformTrustManager() {
        TrustManagerFactory r0 = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());     // Catch: GeneralSecurityException -> L10
        r0.init((KeyStore) null);     // Catch: GeneralSecurityException -> L10
        TrustManager[] r02 = r0.getTrustManagers();     // Catch: GeneralSecurityException -> L10
        if (r02.length != 1) goto L9;
        if ((r02[0] instanceof X509TrustManager) == false) goto L9;
        return (X509TrustManager) r02[0];
    L9:
        throw new IllegalStateException("Unexpected default trust managers:" + Arrays.toString(r02));     // Catch: GeneralSecurityException -> L10
    L10:
        e = move-exception;
        throw assertionError("No System TLS", e);
    }

    public static Headers toHeaders(List<Header> r4) {
        Headers.Builder r0 = new Headers.Builder();
        Iterator<Header> r42 = r4.iterator();
    L4:
        if (r42.hasNext() == false) goto L7;
        Header r1 = r42.next();
        Internal.instance.addLenient(r0, r1.name.utf8(), r1.value.utf8());
        goto L4
    L7:
        return r0.build();
    }
}
