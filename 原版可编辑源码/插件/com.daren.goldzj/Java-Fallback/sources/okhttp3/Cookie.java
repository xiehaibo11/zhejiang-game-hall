package okhttp3;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.List;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import javax.annotation.Nullable;
import okhttp3.internal.Util;
import okhttp3.internal.http.HttpDate;
import okhttp3.internal.publicsuffix.PublicSuffixDatabase;

public final class Cookie {
    private static final Pattern DAY_OF_MONTH_PATTERN = null;
    private static final Pattern MONTH_PATTERN = null;
    private static final Pattern TIME_PATTERN = null;
    private static final Pattern YEAR_PATTERN = null;
    private final String domain;
    private final long expiresAt;
    private final boolean hostOnly;
    private final boolean httpOnly;
    private final String name;
    private final String path;
    private final boolean persistent;
    private final boolean secure;
    private final String value;

    public static final class Builder {

        @Nullable
        String domain;
        long expiresAt;
        boolean hostOnly;
        boolean httpOnly;

        @Nullable
        String name;
        String path;
        boolean persistent;
        boolean secure;

        @Nullable
        String value;

        public Builder() {
            this.expiresAt = 253402300799999L;
            this.path = "/";
        }

        public Builder name(String r2) {
            if (r2 == null) goto L10;
            if (r2.trim().equals(r2) == false) goto L8;
            this.name = r2;
            return this;
        L8:
            throw new IllegalArgumentException("name is not trimmed");
        L10:
            throw new NullPointerException("name == null");
        }

        public Builder value(String r2) {
            if (r2 == null) goto L10;
            if (r2.trim().equals(r2) == false) goto L8;
            this.value = r2;
            return this;
        L8:
            throw new IllegalArgumentException("value is not trimmed");
        L10:
            throw new NullPointerException("value == null");
        }

        public Builder expiresAt(long r4) {
            if (r4 > 0) goto L6;
            r4 = Long.MIN_VALUE;
        L6:
            if (r4 <= 253402300799999L) goto L8;
            r4 = 253402300799999L;
        L8:
            this.expiresAt = r4;
            this.persistent = true;
            return this;
        }

        public Builder domain(String r2) {
            return domain(r2, false);
        }

        public Builder hostOnlyDomain(String r2) {
            return domain(r2, true);
        }

        private Builder domain(String r3, boolean r4) {
            if (r3 == null) goto L10;
            String r0 = Util.canonicalizeHost(r3);
            if (r0 == null) goto L8;
            this.domain = r0;
            this.hostOnly = r4;
            return this;
        L8:
            throw new IllegalArgumentException("unexpected domain: " + r3);
        L10:
            throw new NullPointerException("domain == null");
        }

        public Builder path(String r2) {
            if (r2.startsWith("/") == false) goto L7;
            this.path = r2;
            return this;
        L7:
            throw new IllegalArgumentException("path must start with '/'");
        }

        public Builder secure() {
            this.secure = true;
            return this;
        }

        public Builder httpOnly() {
            this.httpOnly = true;
            return this;
        }

        public Cookie build() {
            return new Cookie(this);
        }
    }

    static {
        YEAR_PATTERN = Pattern.compile("(\\d{2,4})[^\\d]*");
        MONTH_PATTERN = Pattern.compile("(?i)(jan|feb|mar|apr|may|jun|jul|aug|sep|oct|nov|dec).*");
        DAY_OF_MONTH_PATTERN = Pattern.compile("(\\d{1,2})[^\\d]*");
        TIME_PATTERN = Pattern.compile("(\\d{1,2}):(\\d{1,2}):(\\d{1,2})[^\\d]*");
    }

    private Cookie(String r1, String r2, long r3, String r5, String r6, boolean r7, boolean r8, boolean r9, boolean r10) {
        this.name = r1;
        this.value = r2;
        this.expiresAt = r3;
        this.domain = r5;
        this.path = r6;
        this.secure = r7;
        this.httpOnly = r8;
        this.hostOnly = r9;
        this.persistent = r10;
    }

    Cookie(Builder r3) {
        if (r3.name == null) goto L15;
        if (r3.value == null) goto L13;
        if (r3.domain == null) goto L11;
        this.name = r3.name;
        this.value = r3.value;
        this.expiresAt = r3.expiresAt;
        this.domain = r3.domain;
        this.path = r3.path;
        this.secure = r3.secure;
        this.httpOnly = r3.httpOnly;
        this.persistent = r3.persistent;
        this.hostOnly = r3.hostOnly;
        return;
    L11:
        throw new NullPointerException("builder.domain == null");
    L13:
        throw new NullPointerException("builder.value == null");
    L15:
        throw new NullPointerException("builder.name == null");
    }

    public String name() {
        return this.name;
    }

    public String value() {
        return this.value;
    }

    public boolean persistent() {
        return this.persistent;
    }

    public long expiresAt() {
        return this.expiresAt;
    }

    public boolean hostOnly() {
        return this.hostOnly;
    }

    public String domain() {
        return this.domain;
    }

    public String path() {
        return this.path;
    }

    public boolean httpOnly() {
        return this.httpOnly;
    }

    public boolean secure() {
        return this.secure;
    }

    public boolean matches(HttpUrl r3) {
        if (this.hostOnly == false) goto L5;
        boolean r0 = r3.host().equals(this.domain);
    L7:
        if (r0 == true) goto L10;
        return false;
    L10:
        if (pathMatch(r3, this.path) == true) goto L13;
        return false;
    L13:
        if (this.secure == true) goto L15;
        return true;
    L15:
        if (r3.isHttps() == true) goto L19;
        return false;
    L19:
        return true;
    L5:
        r0 = domainMatch(r3.host(), this.domain);
        goto L7
    }

    private static boolean domainMatch(String r2, String r3) {
        if (r2.equals(r3) == false) goto L6;
        return true;
    L6:
        if (r2.endsWith(r3) == true) goto L8;
        return false;
    L8:
        if (r2.charAt((r2.length() - r3.length()) - 1) == '.') goto L10;
        return false;
    L10:
        if (Util.verifyAsIpAddress(r2) == true) goto L15;
        return true;
    L15:
        return false;
    }

    private static boolean pathMatch(HttpUrl r2, String r3) {
        String r22 = r2.encodedPath();
        if (r22.equals(r3) == false) goto L6;
        return true;
    L6:
        if (r22.startsWith(r3) == true) goto L8;
        return false;
    L8:
        if (r3.endsWith("/") == false) goto L11;
        return true;
    L11:
        if (r22.charAt(r3.length()) != '/') goto L15;
        return true;
    L15:
        return false;
    }

    @Nullable
    public static Cookie parse(HttpUrl r2, String r3) {
        return parse(System.currentTimeMillis(), r2, r3);
    }

    @Nullable
    static Cookie parse(long r24, HttpUrl r26, String r27) {
        int r1 = r27.length();
        char r2 = ';';
        int r4 = Util.delimiterOffset(r27, 0, r1, ';');
        char r5 = '=';
        int r6 = Util.delimiterOffset(r27, 0, r4, '=');
        if (r6 != r4) goto L5;
        return null;
    L5:
        String r9 = Util.trimSubstring(r27, 0, r6);
        if (r9.isEmpty() == true) goto L82;
        if (Util.indexOfControlOrNonAscii(r9) != (-1)) goto L82;
        String r62 = Util.trimSubstring(r27, r6 + 1, r4);
        if (Util.indexOfControlOrNonAscii(r62) == (-1)) goto L13;
        return null;
    L13:
        int r42 = r4 + 1;
        String r8 = null;
        String r19 = null;
        long r14 = -1;
        long r21 = 253402300799999L;
        boolean r17 = false;
        boolean r18 = false;
        boolean r20 = true;
        boolean r23 = false;
    L14:
        if (r42 >= r1) goto L41;
        int r7 = Util.delimiterOffset(r27, r42, r1, r2);
        int r22 = Util.delimiterOffset(r27, r42, r7, r5);
        String r43 = Util.trimSubstring(r27, r42, r22);
        if (r22 >= r7) goto L18;
        String r25 = Util.trimSubstring(r27, r22 + 1, r7);
    L20:
        if (r43.equalsIgnoreCase("expires") == false) goto L24;
        r21 = parseExpires(r25, 0, r25.length());     // Catch: Throwable -> L83
    L26:
        r23 = true;
    L40:
        r42 = r7 + 1;
        r2 = ';';
        r5 = '=';
        goto L14
    L24:
        if (r43.equalsIgnoreCase("max-age") == false) goto L28;
        r14 = parseMaxAge(r25);
        goto L26
    L28:
        if (r43.equalsIgnoreCase("domain") == false) goto L32;
        r8 = parseDomain(r25);     // Catch: Throwable -> L83
        r20 = false;
        goto L40
    L32:
        if (r43.equalsIgnoreCase("path") == false) goto L35;
        r19 = r25;
        goto L40
    L35:
        if (r43.equalsIgnoreCase("secure") == false) goto L38;
        r17 = true;
        goto L40
    L38:
        if (r43.equalsIgnoreCase("httponly") == false) goto L40;
        r18 = true;
        goto L40
    L18:
        r25 = "";
        goto L20
    L41:
        long r0 = Long.MIN_VALUE;
        if (r14 != Long.MIN_VALUE) goto L45;
    L43:
        long r11 = r0;
    L56:
        String r02 = r26.host();
        if (r8 != null) goto L60;
        String r13 = r02;
        Cookie r12 = null;
    L65:
        if (r02.length() != r13.length()) goto L67;
    L69:
        String r03 = "/";
        String r72 = r19;
        if (r72 != null) goto L72;
    L75:
        String r15 = r26.encodedPath();
        int r28 = r15.lastIndexOf(47);
        if (r28 == 0) goto L78;
        r03 = r15.substring(0, r28);
    L78:
        String r142 = r03;
    L80:
        return new Cookie(r9, r62, r11, r13, r142, r17, r18, r20, r23);
    L72:
        if (r72.startsWith("/") == false) goto L75;
        r142 = r72;
        goto L80
    L67:
        if (PublicSuffixDatabase.get().getEffectiveTldPlusOne(r13) != null) goto L69;
        return r12;
    L60:
        if (domainMatch(r02, r8) == true) goto L63;
        return null;
    L63:
        r12 = null;
        r13 = r8;
        goto L65
    L45:
        if (r14 != (-1)) goto L47;
        r11 = r21;
        goto L56
    L47:
        if (r14 > 9223372036854775L) goto L49;
        long r143 = r14 * 1000;
    L50:
        r0 = r24 + r143;
        if (r0 >= r24) goto L53;
    L54:
        r11 = 253402300799999L;
        goto L56
    L53:
        if (r0 <= 253402300799999L) goto L43;
    L49:
        r143 = Long.MAX_VALUE;
    L82:
        return null;
    }

    private static long parseExpires(String r12, int r13, int r14) {
        int r132 = dateCharacterOffset(r12, r13, r14, false);
        Matcher r1 = TIME_PATTERN.matcher(r12);
        int r3 = -1;
        int r4 = -1;
        int r5 = -1;
        int r6 = -1;
        int r7 = -1;
        int r8 = -1;
    L4:
        if (r132 >= r14) goto L24;
        int r11 = dateCharacterOffset(r12, r132 + 1, r14, true);
        r1.region(r132, r11);
        if (r4 == (-1)) goto L8;
    L10:
        if (r5 == (-1)) goto L12;
    L14:
        if (r6 == (-1)) goto L16;
    L18:
        if (r3 != (-1)) goto L22;
        if (r1.usePattern(YEAR_PATTERN).matches() == false) goto L22;
        r3 = Integer.parseInt(r1.group(1));
    L22:
        r132 = dateCharacterOffset(r12, r11 + 1, r14, false);
        goto L4
    L16:
        if (r1.usePattern(MONTH_PATTERN).matches() == false) goto L18;
        String r133 = r1.group(1).toLowerCase(Locale.US);
        r6 = MONTH_PATTERN.pattern().indexOf(r133) / 4;
        goto L22
    L12:
        if (r1.usePattern(DAY_OF_MONTH_PATTERN).matches() == false) goto L14;
        r5 = Integer.parseInt(r1.group(1));
        goto L22
    L8:
        if (r1.usePattern(TIME_PATTERN).matches() == false) goto L10;
        int r134 = Integer.parseInt(r1.group(1));
        int r42 = Integer.parseInt(r1.group(2));
        r8 = Integer.parseInt(r1.group(3));
        r7 = r42;
        r4 = r134;
        goto L22
    L24:
        if (r3 >= 70) goto L26;
    L28:
        if (r3 < 0) goto L33;
        if (r3 > 69) goto L33;
        r3 = r3 + 2000;
    L33:
        if (r3 < 1601) goto L59;
        if (r6 == (-1)) goto L57;
        if (r5 < 1) goto L55;
        if (r5 > 31) goto L55;
        if (r4 < 0) goto L53;
        if (r4 > 23) goto L53;
        if (r7 < 0) goto L51;
        if (r7 > 59) goto L51;
        if (r8 < 0) goto L49;
        if (r8 > 59) goto L49;
        GregorianCalendar r122 = new GregorianCalendar(Util.UTC);
        r122.setLenient(false);
        r122.set(1, r3);
        r122.set(2, r6 - 1);
        r122.set(5, r5);
        r122.set(11, r4);
        r122.set(12, r7);
        r122.set(13, r8);
        r122.set(14, 0);
        return r122.getTimeInMillis();
    L49:
        throw new IllegalArgumentException();
    L51:
        throw new IllegalArgumentException();
    L53:
        throw new IllegalArgumentException();
    L55:
        throw new IllegalArgumentException();
    L57:
        throw new IllegalArgumentException();
    L59:
        throw new IllegalArgumentException();
    L26:
        if (r3 > 99) goto L28;
        r3 = r3 + 1900;
        goto L28
    }

    private static int dateCharacterOffset(String r3, int r4, int r5, boolean r6) {
    L2:
        if (r4 >= r5) goto L30;
        char r0 = r3.charAt(r4);
        if (r0 >= ' ') goto L8;
        if (r0 == '\t') goto L8;
    L25:
        boolean r02 = true;
    L27:
        if (r02 == (!r6)) goto L28;
        r4 = r4 + 1;
        goto L2
    L28:
        return r4;
    L8:
        if (r0 >= 127) goto L25;
        if (r0 < '0') goto L14;
        if (r0 <= '9') goto L25;
    L14:
        if (r0 < 'a') goto L18;
        if (r0 <= 'z') goto L25;
    L18:
        if (r0 < 'A') goto L22;
        if (r0 <= 'Z') goto L25;
    L22:
        if (r0 == ':') goto L25;
        r02 = false;
        goto L27
    L30:
        return r5;
    }

    private static long parseMaxAge(String r6) {
        long r2 = Long.parseLong(r6);     // Catch: NumberFormatException -> L9
        if (r2 > 0) goto L8;
        return Long.MIN_VALUE;
    L8:
        return r2;
    L9:
        e = move-exception;
        if (r6.matches("-?\\d+") == true) goto L13;
        throw e;
    L13:
        if (r6.startsWith("-") == true) goto L21;
        return Long.MAX_VALUE;
    L21:
        return Long.MIN_VALUE;
    }

    private static String parseDomain(String r2) {
        if (r2.endsWith(".") == true) goto L13;
        if (r2.startsWith(".") == false) goto L7;
        r2 = r2.substring(1);
    L7:
        String r22 = Util.canonicalizeHost(r2);
        if (r22 == null) goto L11;
        return r22;
    L11:
        throw new IllegalArgumentException();
    L13:
        throw new IllegalArgumentException();
    }

    public static List<Cookie> parseAll(HttpUrl r4, Headers r5) {
        List<String> r52 = r5.values("Set-Cookie");
        int r0 = r52.size();
        ArrayList r1 = null;
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L11;
        Cookie r3 = parse(r4, r52.get(r2));
        if (r3 == null) goto L10;
        if (r1 != null) goto L9;
        r1 = new ArrayList();
    L9:
        r1.add(r3);
    L10:
        r2 = r2 + 1;
        goto L3
    L11:
        if (r1 == null) goto L14;
        return Collections.unmodifiableList(r1);
    L14:
        return Collections.emptyList();
    }

    public String toString() {
        return toString(false);
    }

    String toString(boolean r7) {
        StringBuilder r0 = new StringBuilder();
        r0.append(this.name);
        r0.append('=');
        r0.append(this.value);
        if (this.persistent == false) goto L9;
        if (this.expiresAt != Long.MIN_VALUE) goto L7;
        r0.append("; max-age=0");
        goto L9
    L7:
        r0.append("; expires=");
        r0.append(HttpDate.format(new Date(this.expiresAt)));
    L9:
        if (this.hostOnly == true) goto L14;
        r0.append("; domain=");
        if (r7 == false) goto L13;
        r0.append(".");
    L13:
        r0.append(this.domain);
    L14:
        r0.append("; path=");
        r0.append(this.path);
        if (this.secure == false) goto L18;
        r0.append("; secure");
    L18:
        if (this.httpOnly == false) goto L21;
        r0.append("; httponly");
    L21:
        return r0.toString();
    }

    public boolean equals(@Nullable Object r7) {
        if ((r7 instanceof Cookie) == true) goto L5;
        return false;
    L5:
        Cookie r72 = (Cookie) r7;
        if (r72.name.equals(this.name) == true) goto L8;
        return false;
    L8:
        if (r72.value.equals(this.value) == true) goto L10;
        return false;
    L10:
        if (r72.domain.equals(this.domain) == true) goto L12;
        return false;
    L12:
        if (r72.path.equals(this.path) == true) goto L14;
        return false;
    L14:
        if (r72.expiresAt == this.expiresAt) goto L16;
        return false;
    L16:
        if (r72.secure == this.secure) goto L18;
        return false;
    L18:
        if (r72.httpOnly == this.httpOnly) goto L20;
        return false;
    L20:
        if (r72.persistent == this.persistent) goto L22;
        return false;
    L22:
        if (r72.hostOnly != this.hostOnly) goto L33;
        return true;
    L33:
        return false;
    }

    public int hashCode() {
        int r1 = (((((((527 + this.name.hashCode()) * 31) + this.value.hashCode()) * 31) + this.domain.hashCode()) * 31) + this.path.hashCode()) * 31;
        long r2 = this.expiresAt;
        return ((((((((r1 + ((int) (r2 ^ (r2 >>> 32)))) * 31) + (!this.secure ? 1 : 0)) * 31) + (!this.httpOnly ? 1 : 0)) * 31) + (!this.persistent ? 1 : 0)) * 31) + (!this.hostOnly ? 1 : 0);
    }
}
