package com.meizu.cloud.pushsdk.c.c;

import com.xiaomi.mipush.sdk.Constants;
import java.net.InetAddress;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import kotlin.UByte;
import kotlin.text.Typography;
import okhttp3.HttpUrl;

public class f {
    private static final char[] a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    private final String b;
    private final String c;
    private final String d;
    private final String e;
    private final int f;
    private final List<String> g;
    private final List<String> h;
    private final String i;
    private final String j;

    class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[a.a.values().length];
            a = iArr;
            try {
                iArr[a.a.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[a.a.e.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[a.a.c.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[a.a.b.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[a.a.d.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    public final class a {
        String a;
        String d;
        final List<String> f;
        List<String> g;
        String h;
        String b = "";
        String c = "";
        int e = -1;

        enum a {
            a,
            b,
            c,
            d,
            e
        }

        public a() {
            ArrayList arrayList = new ArrayList();
            this.f = arrayList;
            arrayList.add("");
        }

        private static String a(byte[] bArr) {
            int i = 0;
            int i2 = -1;
            int i3 = 0;
            int i4 = 0;
            while (i3 < bArr.length) {
                int i5 = i3;
                while (i5 < 16 && bArr[i5] == 0 && bArr[i5 + 1] == 0) {
                    i5 += 2;
                }
                int i6 = i5 - i3;
                if (i6 > i4) {
                    i2 = i3;
                    i4 = i6;
                }
                i3 = i5 + 2;
            }
            com.meizu.cloud.pushsdk.c.g.b bVar = new com.meizu.cloud.pushsdk.c.g.b();
            while (i < bArr.length) {
                if (i == i2) {
                    bVar.b(58);
                    i += i4;
                    if (i == 16) {
                        bVar.b(58);
                    }
                } else {
                    if (i > 0) {
                        bVar.b(58);
                    }
                    bVar.d(((bArr[i] & UByte.MAX_VALUE) << 8) | (bArr[i + 1] & UByte.MAX_VALUE));
                    i += 2;
                }
            }
            return bVar.h();
        }

        private void a(String str, int i, int i2) {
            if (i == i2) {
                return;
            }
            char cCharAt = str.charAt(i);
            if (cCharAt == '/' || cCharAt == '\\') {
                this.f.clear();
                this.f.add("");
                i++;
            } else {
                List<String> list = this.f;
                list.set(list.size() - 1, "");
            }
            while (true) {
                int i3 = i;
                if (i3 >= i2) {
                    return;
                }
                i = m.a(str, i3, i2, "/\\");
                boolean z = i < i2;
                a(str, i3, i, z, true);
                if (z) {
                    i++;
                }
            }
        }

        private void a(String str, int i, int i2, boolean z, boolean z2) {
            String strB = f.b(str, i, i2, HttpUrl.PATH_SEGMENT_ENCODE_SET, z2, false, false, true);
            if (b(strB)) {
                return;
            }
            if (c(strB)) {
                c();
                return;
            }
            if (this.f.get(r10.size() - 1).isEmpty()) {
                this.f.set(r10.size() - 1, strB);
            } else {
                this.f.add(strB);
            }
            if (z) {
                this.f.add("");
            }
        }

        private static boolean a(String str, int i, int i2, byte[] bArr, int i3) {
            int i4 = i3;
            while (i < i2) {
                if (i4 == bArr.length) {
                    return false;
                }
                if (i4 != i3) {
                    if (str.charAt(i) != '.') {
                        return false;
                    }
                    i++;
                }
                int i5 = i;
                int i6 = 0;
                while (i5 < i2) {
                    char cCharAt = str.charAt(i5);
                    if (cCharAt < '0' || cCharAt > '9') {
                        break;
                    }
                    if ((i6 == 0 && i != i5) || (i6 = ((i6 * 10) + cCharAt) - 48) > 255) {
                        return false;
                    }
                    i5++;
                }
                if (i5 - i == 0) {
                    return false;
                }
                bArr[i4] = (byte) i6;
                i4++;
                i = i5;
            }
            return i4 == i3 + 4;
        }

        private static int b(String str, int i, int i2) {
            if (i2 - i < 2) {
                return -1;
            }
            char cCharAt = str.charAt(i);
            boolean z = cCharAt < 'a' || cCharAt > 'z';
            boolean z2 = cCharAt < 'A' || cCharAt > 'Z';
            if (z && z2) {
                return -1;
            }
            for (int i3 = i + 1; i3 < i2; i3++) {
                char cCharAt2 = str.charAt(i3);
                if ((cCharAt2 < 'a' || cCharAt2 > 'z') && ((cCharAt2 < 'A' || cCharAt2 > 'Z') && !((cCharAt2 >= '0' && cCharAt2 <= '9') || cCharAt2 == '+' || cCharAt2 == '-' || cCharAt2 == '.'))) {
                    if (cCharAt2 == ':') {
                        return i3;
                    }
                    return -1;
                }
            }
            return -1;
        }

        private boolean b(String str) {
            return ".".equals(str) || "%2e".equalsIgnoreCase(str);
        }

        private static int c(String str, int i, int i2) {
            int i3 = 0;
            while (i < i2) {
                char cCharAt = str.charAt(i);
                if (cCharAt != '\\' && cCharAt != '/') {
                    break;
                }
                i3++;
                i++;
            }
            return i3;
        }

        private void c() {
            if (!this.f.remove(r0.size() - 1).isEmpty() || this.f.isEmpty()) {
                this.f.add("");
            } else {
                this.f.set(r0.size() - 1, "");
            }
        }

        private boolean c(String str) {
            return "..".equals(str) || "%2e.".equalsIgnoreCase(str) || ".%2e".equalsIgnoreCase(str) || "%2e%2e".equalsIgnoreCase(str);
        }

        private static int d(String str, int i, int i2) {
            while (i < i2) {
                char cCharAt = str.charAt(i);
                if (cCharAt == ':') {
                    return i;
                }
                if (cCharAt == '[') {
                    do {
                        i++;
                        if (i < i2) {
                        }
                    } while (str.charAt(i) != ']');
                }
                i++;
            }
            return i2;
        }

        private static String e(String str, int i, int i2) {
            String strB = f.b(str, i, i2, false);
            if (!strB.contains(Constants.COLON_SEPARATOR)) {
                return m.a(strB);
            }
            InetAddress inetAddressF = (strB.startsWith("[") && strB.endsWith("]")) ? f(strB, 1, strB.length() - 1) : f(strB, 0, strB.length());
            if (inetAddressF == null) {
                return null;
            }
            byte[] address = inetAddressF.getAddress();
            if (address.length == 16) {
                return a(address);
            }
            throw new AssertionError();
        }

        /* JADX WARN: Code restructure failed: missing block: B:42:0x007a, code lost:
        
            if (r4 == 16) goto L50;
         */
        /* JADX WARN: Code restructure failed: missing block: B:43:0x007c, code lost:
        
            if (r5 != (-1)) goto L45;
         */
        /* JADX WARN: Code restructure failed: missing block: B:44:0x007e, code lost:
        
            return null;
         */
        /* JADX WARN: Code restructure failed: missing block: B:45:0x007f, code lost:
        
            r11 = r4 - r5;
            java.lang.System.arraycopy(r1, r5, r1, 16 - r11, r11);
            java.util.Arrays.fill(r1, r5, (16 - r4) + r5, (byte) 0);
         */
        /* JADX WARN: Code restructure failed: missing block: B:47:0x008f, code lost:
        
            return java.net.InetAddress.getByAddress(r1);
         */
        /* JADX WARN: Code restructure failed: missing block: B:49:0x0095, code lost:
        
            throw new java.lang.AssertionError();
         */
        /* JADX WARN: Removed duplicated region for block: B:31:0x004f  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        private static InetAddress f(String str, int i, int i2) {
            int i3;
            byte[] bArr = new byte[16];
            int i4 = -1;
            int i5 = -1;
            int i6 = 0;
            while (true) {
                if (i < i2) {
                    if (i6 != 16) {
                        int i7 = i + 2;
                        if (i7 <= i2 && str.regionMatches(i, "::", 0, 2)) {
                            if (i4 == -1) {
                                i6 += 2;
                                i4 = i6;
                                if (i7 != i2) {
                                    i5 = i7;
                                    int i8 = 0;
                                    i = i5;
                                    while (i < i2) {
                                    }
                                    i3 = i - i5;
                                    if (i3 == 0) {
                                        break;
                                    }
                                    break;
                                    break;
                                }
                                break;
                            }
                            return null;
                        }
                        if (i6 != 0) {
                            if (str.regionMatches(i, Constants.COLON_SEPARATOR, 0, 1)) {
                                i++;
                            } else {
                                if (!str.regionMatches(i, ".", 0, 1) || !a(str, i5, i2, bArr, i6 - 2)) {
                                    return null;
                                }
                                i6 += 2;
                            }
                        }
                        i5 = i;
                        int i82 = 0;
                        i = i5;
                        while (i < i2) {
                            int iB = f.b(str.charAt(i));
                            if (iB == -1) {
                                break;
                            }
                            i82 = (i82 << 4) + iB;
                            i++;
                        }
                        i3 = i - i5;
                        if (i3 == 0 || i3 > 4) {
                            break;
                        }
                        int i9 = i6 + 1;
                        bArr[i6] = (byte) ((i82 >>> 8) & 255);
                        i6 = i9 + 1;
                        bArr[i9] = (byte) (i82 & 255);
                    } else {
                        return null;
                    }
                } else {
                    break;
                }
            }
            return null;
        }

        private static int g(String str, int i, int i2) {
            int i3;
            try {
                i3 = Integer.parseInt(f.b(str, i, i2, "", false, false, false, true));
            } catch (NumberFormatException unused) {
            }
            if (i3 <= 0 || i3 > 65535) {
                return -1;
            }
            return i3;
        }

        int a() {
            int i = this.e;
            return i != -1 ? i : f.a(this.a);
        }

        a a(f fVar, String str) {
            int iA;
            int i;
            int iA2 = m.a(str, 0, str.length());
            int iB = m.b(str, iA2, str.length());
            if (b(str, iA2, iB) != -1) {
                if (str.regionMatches(true, iA2, "https:", 0, 6)) {
                    this.a = "https";
                    iA2 += 6;
                } else {
                    if (!str.regionMatches(true, iA2, "http:", 0, 5)) {
                        return a.c;
                    }
                    this.a = "http";
                    iA2 += 5;
                }
            } else {
                if (fVar == null) {
                    return a.b;
                }
                this.a = fVar.b;
            }
            int iC = c(str, iA2, iB);
            char c = '?';
            char c2 = '#';
            if (iC >= 2 || fVar == null || !fVar.b.equals(this.a)) {
                boolean z = false;
                boolean z2 = false;
                int i2 = iA2 + iC;
                while (true) {
                    iA = m.a(str, i2, iB, "@/\\?#");
                    byte bCharAt = iA != iB ? str.charAt(iA) : (byte) -1;
                    if (bCharAt == -1 || bCharAt == c2 || bCharAt == 47 || bCharAt == 92 || bCharAt == c) {
                        break;
                    }
                    if (bCharAt == 64) {
                        if (z) {
                            i = iA;
                            this.c += "%40" + f.b(str, i2, i, " \"':;<=>@[]^`{}|/\\?#", true, false, false, true);
                        } else {
                            int iA3 = m.a(str, i2, iA, ':');
                            i = iA;
                            String strB = f.b(str, i2, iA3, " \"':;<=>@[]^`{}|/\\?#", true, false, false, true);
                            if (z2) {
                                strB = this.b + "%40" + strB;
                            }
                            this.b = strB;
                            if (iA3 != i) {
                                this.c = f.b(str, iA3 + 1, i, " \"':;<=>@[]^`{}|/\\?#", true, false, false, true);
                                z = true;
                            }
                            z2 = true;
                        }
                        i2 = i + 1;
                    }
                    c = '?';
                    c2 = '#';
                }
                int iD = d(str, i2, iA);
                int i3 = iD + 1;
                this.d = e(str, i2, iD);
                if (i3 < iA) {
                    int iG = g(str, i3, iA);
                    this.e = iG;
                    if (iG == -1) {
                        return a.d;
                    }
                } else {
                    this.e = f.a(this.a);
                }
                if (this.d == null) {
                    return a.e;
                }
                iA2 = iA;
            } else {
                this.b = fVar.a();
                this.c = fVar.b();
                this.d = fVar.e;
                this.e = fVar.f;
                this.f.clear();
                this.f.addAll(fVar.c());
                if (iA2 == iB || str.charAt(iA2) == '#') {
                    a(fVar.d());
                }
            }
            int iA4 = m.a(str, iA2, iB, "?#");
            a(str, iA2, iA4);
            if (iA4 < iB && str.charAt(iA4) == '?') {
                int iA5 = m.a(str, iA4, iB, '#');
                this.g = f.b(f.b(str, iA4 + 1, iA5, HttpUrl.QUERY_ENCODE_SET, true, false, true, true));
                iA4 = iA5;
            }
            if (iA4 < iB && str.charAt(iA4) == '#') {
                this.h = f.b(str, 1 + iA4, iB, "", true, false, false, false);
            }
            return a.a;
        }

        public a a(String str) {
            this.g = str != null ? f.b(f.a(str, HttpUrl.QUERY_ENCODE_SET, true, false, true, true)) : null;
            return this;
        }

        public a a(String str, String str2) {
            if (str == null) {
                throw new IllegalArgumentException("name == null");
            }
            if (this.g == null) {
                this.g = new ArrayList();
            }
            this.g.add(f.a(str, HttpUrl.QUERY_COMPONENT_REENCODE_SET, false, false, true, true));
            this.g.add(str2 != null ? f.a(str2, HttpUrl.QUERY_COMPONENT_REENCODE_SET, false, false, true, true) : null);
            return this;
        }

        public f b() {
            if (this.a == null) {
                throw new IllegalStateException("scheme == null");
            }
            if (this.d != null) {
                return new f(this, null);
            }
            throw new IllegalStateException("host == null");
        }

        public String toString() {
            StringBuilder sb = new StringBuilder();
            sb.append(this.a);
            sb.append("://");
            if (!this.b.isEmpty() || !this.c.isEmpty()) {
                sb.append(this.b);
                if (!this.c.isEmpty()) {
                    sb.append(':');
                    sb.append(this.c);
                }
                sb.append('@');
            }
            if (this.d.indexOf(58) != -1) {
                sb.append('[');
                sb.append(this.d);
                sb.append(']');
            } else {
                sb.append(this.d);
            }
            int iA = a();
            if (iA != f.a(this.a)) {
                sb.append(':');
                sb.append(iA);
            }
            f.a(sb, this.f);
            if (this.g != null) {
                sb.append('?');
                f.b(sb, this.g);
            }
            if (this.h != null) {
                sb.append('#');
                sb.append(this.h);
            }
            return sb.toString();
        }
    }

    private f(a aVar) {
        this.b = aVar.a;
        this.c = a(aVar.b, false);
        this.d = a(aVar.c, false);
        this.e = aVar.d;
        this.f = aVar.a();
        this.g = a(aVar.f, false);
        this.h = aVar.g != null ? a(aVar.g, true) : null;
        this.i = aVar.h != null ? a(aVar.h, false) : null;
        this.j = aVar.toString();
    }

    f(a aVar, 1 r2) {
        this(aVar);
    }

    public static int a(String str) {
        if ("http".equals(str)) {
            return 80;
        }
        return "https".equals(str) ? 443 : -1;
    }

    static String a(String str, String str2, boolean z, boolean z2, boolean z3, boolean z4) {
        return b(str, 0, str.length(), str2, z, z2, z3, z4);
    }

    static String a(String str, boolean z) {
        return b(str, 0, str.length(), z);
    }

    private List<String> a(List<String> list, boolean z) {
        ArrayList arrayList = new ArrayList(list.size());
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            String next = it.next();
            arrayList.add(next != null ? a(next, z) : null);
        }
        return Collections.unmodifiableList(arrayList);
    }

    private static void a(com.meizu.cloud.pushsdk.c.g.b bVar, String str, int i, int i2, String str2, boolean z, boolean z2, boolean z3, boolean z4) {
        com.meizu.cloud.pushsdk.c.g.b bVar2 = null;
        int iCharCount = i;
        while (iCharCount < i2) {
            int iCodePointAt = str.codePointAt(iCharCount);
            if (iCodePointAt == 43 && z3) {
                bVar.b(z ? "+" : "%2B");
            } else if (a(iCodePointAt, iCharCount, str, i2, str2, z, z2, z3, z4)) {
                if (bVar2 == null) {
                    bVar2 = new com.meizu.cloud.pushsdk.c.g.b();
                }
                bVar2.a(iCodePointAt);
                while (!bVar2.c()) {
                    int iF = bVar2.f() & UByte.MAX_VALUE;
                    bVar.b(37);
                    bVar.b((int) a[(iF >> 4) & 15]);
                    bVar.b((int) a[iF & 15]);
                }
            } else {
                bVar.a(iCodePointAt);
            }
            iCharCount += Character.charCount(iCodePointAt);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0039  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void a(com.meizu.cloud.pushsdk.c.g.b bVar, String str, int i, int i2, boolean z) {
        int i3;
        while (i < i2) {
            int iCodePointAt = str.codePointAt(i);
            if (iCodePointAt == 37 && (i3 = i + 2) < i2) {
                int iB = b(str.charAt(i + 1));
                int iB2 = b(str.charAt(i3));
                if (iB != -1 && iB2 != -1) {
                    bVar.b((iB << 4) + iB2);
                    i = i3;
                }
            } else if (iCodePointAt == 43 && z) {
                bVar.b(32);
            } else {
                bVar.a(iCodePointAt);
            }
            i += Character.charCount(iCodePointAt);
        }
    }

    static void a(StringBuilder sb, List<String> list) {
        int size = list.size();
        for (int i = 0; i < size; i++) {
            sb.append('/');
            sb.append(list.get(i));
        }
    }

    private static boolean a(int i, int i2, String str, int i3, String str2, boolean z, boolean z2, boolean z3, boolean z4) {
        if (i < 32 || i == 127) {
            return true;
        }
        if ((i >= 128 && z4) || str2.indexOf(i) != -1) {
            return true;
        }
        boolean z5 = !z || (z2 && !a(str, i2, i3));
        if (i == 37 && z5) {
            return true;
        }
        return i == 43 && z3;
    }

    private static boolean a(String str, int i, int i2) {
        int i3 = i + 2;
        return i3 < i2 && str.charAt(i) == '%' && b(str.charAt(i + 1)) != -1 && b(str.charAt(i3)) != -1;
    }

    private static int b(char c) {
        if (c >= '0' && c <= '9') {
            return c - '0';
        }
        char c2 = 'a';
        if (c < 'a' || c > 'f') {
            c2 = 'A';
            if (c < 'A' || c > 'F') {
                return -1;
            }
        }
        return (c - c2) + 10;
    }

    private static String b(String str, int i, int i2, String str2, boolean z, boolean z2, boolean z3, boolean z4) {
        int iCharCount = i;
        while (iCharCount < i2) {
            int iCodePointAt = str.codePointAt(iCharCount);
            if (a(iCodePointAt, iCharCount, str, i2, str2, z, z2, z3, z4)) {
                com.meizu.cloud.pushsdk.c.g.b bVar = new com.meizu.cloud.pushsdk.c.g.b();
                bVar.a(str, i, iCharCount);
                a(bVar, str, iCharCount, i2, str2, z, z2, z3, z4);
                return bVar.h();
            }
            iCharCount += Character.charCount(iCodePointAt);
        }
        return str.substring(i, i2);
    }

    private static String b(String str, int i, int i2, boolean z) {
        for (int i3 = i; i3 < i2; i3++) {
            char cCharAt = str.charAt(i3);
            boolean z2 = false;
            boolean z3 = cCharAt == '%';
            if (cCharAt == '+' && z) {
                z2 = true;
            }
            if (z3 || z2) {
                com.meizu.cloud.pushsdk.c.g.b bVar = new com.meizu.cloud.pushsdk.c.g.b();
                bVar.a(str, i, i3);
                a(bVar, str, i3, i2, z);
                return bVar.h();
            }
        }
        return str.substring(i, i2);
    }

    static List<String> b(String str) {
        String strSubstring;
        ArrayList arrayList = new ArrayList();
        int i = 0;
        while (i <= str.length()) {
            int iIndexOf = str.indexOf(38, i);
            if (iIndexOf == -1) {
                iIndexOf = str.length();
            }
            int iIndexOf2 = str.indexOf(61, i);
            if (iIndexOf2 == -1 || iIndexOf2 > iIndexOf) {
                arrayList.add(str.substring(i, iIndexOf));
                strSubstring = null;
            } else {
                arrayList.add(str.substring(i, iIndexOf2));
                strSubstring = str.substring(iIndexOf2 + 1, iIndexOf);
            }
            arrayList.add(strSubstring);
            i = iIndexOf + 1;
        }
        return arrayList;
    }

    static void b(StringBuilder sb, List<String> list) {
        int size = list.size();
        for (int i = 0; i < size; i += 2) {
            String str = list.get(i);
            String str2 = list.get(i + 1);
            if (i > 0) {
                sb.append(Typography.amp);
            }
            sb.append(str);
            if (str2 != null) {
                sb.append(com.alipay.sdk.m.n.a.h);
                sb.append(str2);
            }
        }
    }

    public static f c(String str) {
        a aVar = new a();
        if (aVar.a((f) null, str) == a.a.a) {
            return aVar.b();
        }
        return null;
    }

    public String a() {
        if (this.c.isEmpty()) {
            return "";
        }
        int length = this.b.length() + 3;
        String str = this.j;
        return this.j.substring(length, m.a(str, length, str.length(), ":@"));
    }

    public String b() {
        if (this.d.isEmpty()) {
            return "";
        }
        return this.j.substring(this.j.indexOf(58, this.b.length() + 3) + 1, this.j.indexOf(64));
    }

    public List<String> c() {
        int iIndexOf = this.j.indexOf(47, this.b.length() + 3);
        String str = this.j;
        int iA = m.a(str, iIndexOf, str.length(), "?#");
        ArrayList arrayList = new ArrayList();
        while (iIndexOf < iA) {
            int i = iIndexOf + 1;
            int iA2 = m.a(this.j, i, iA, '/');
            arrayList.add(this.j.substring(i, iA2));
            iIndexOf = iA2;
        }
        return arrayList;
    }

    public String d() {
        if (this.h == null) {
            return null;
        }
        int iIndexOf = this.j.indexOf(63) + 1;
        String str = this.j;
        return this.j.substring(iIndexOf, m.a(str, iIndexOf + 1, str.length(), '#'));
    }

    public String e() {
        if (this.i == null) {
            return null;
        }
        return this.j.substring(this.j.indexOf(35) + 1);
    }

    public boolean equals(Object obj) {
        return (obj instanceof f) && ((f) obj).j.equals(this.j);
    }

    public a f() {
        a aVar = new a();
        aVar.a = this.b;
        aVar.b = a();
        aVar.c = b();
        aVar.d = this.e;
        aVar.e = this.f != a(this.b) ? this.f : -1;
        aVar.f.clear();
        aVar.f.addAll(c());
        aVar.a(d());
        aVar.h = e();
        return aVar;
    }

    public int hashCode() {
        return this.j.hashCode();
    }

    public String toString() {
        return this.j;
    }
}
