package okhttp3.internal;

@kotlin.Metadata(d1 = {"\u0000&\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a0\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u0005H\u0002\u001a\"\u0010\n\u001a\u0004\u0018\u00010\u000b2\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0005H\u0002\u001a\u0010\u0010\f\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\bH\u0002\u001a\f\u0010\r\u001a\u00020\u0001*\u00020\u0003H\u0002\u001a\f\u0010\u000e\u001a\u0004\u0018\u00010\u0003*\u00020\u0003¨\u0006\u000f"}, d2 = {"decodeIpv4Suffix", "", "input", "", "pos", "", "limit", "address", "", "addressOffset", "decodeIpv6", "Ljava/net/InetAddress;", "inet6AddressToAscii", "containsInvalidHostnameAsciiCodes", "toCanonicalHost", "okhttp"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class HostnamesKt {
    private static final boolean containsInvalidHostnameAsciiCodes(java.lang.String r11) {
            int r0 = r11.length()
            r1 = 0
            r2 = r1
        L6:
            if (r2 >= r0) goto L34
            int r3 = r2 + 1
            char r5 = r11.charAt(r2)
            r2 = 31
            int r2 = kotlin.jvm.internal.Intrinsics.compare(r5, r2)
            r10 = 1
            if (r2 <= 0) goto L33
            r2 = 127(0x7f, float:1.78E-43)
            int r2 = kotlin.jvm.internal.Intrinsics.compare(r5, r2)
            if (r2 < 0) goto L20
            goto L33
        L20:
            java.lang.String r2 = " #%/:?@[\\]"
            r4 = r2
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            r6 = 0
            r7 = 0
            r8 = 6
            r9 = 0
            int r2 = kotlin.text.StringsKt.indexOf$default(r4, r5, r6, r7, r8, r9)
            r4 = -1
            if (r2 == r4) goto L31
            return r10
        L31:
            r2 = r3
            goto L6
        L33:
            return r10
        L34:
            return r1
    }

    private static final boolean decodeIpv4Suffix(java.lang.String r7, int r8, int r9, byte[] r10, int r11) {
            r0 = r11
        L1:
            r1 = 0
            if (r8 >= r9) goto L4c
            int r2 = r10.length
            if (r0 != r2) goto L8
            return r1
        L8:
            if (r0 == r11) goto L15
            char r2 = r7.charAt(r8)
            r3 = 46
            if (r2 == r3) goto L13
            return r1
        L13:
            int r8 = r8 + 1
        L15:
            r2 = r8
            r3 = r1
        L17:
            if (r2 >= r9) goto L3f
            char r4 = r7.charAt(r2)
            r5 = 48
            int r6 = kotlin.jvm.internal.Intrinsics.compare(r4, r5)
            if (r6 < 0) goto L3f
            r6 = 57
            int r6 = kotlin.jvm.internal.Intrinsics.compare(r4, r6)
            if (r6 <= 0) goto L2e
            goto L3f
        L2e:
            if (r3 != 0) goto L33
            if (r8 == r2) goto L33
            return r1
        L33:
            int r3 = r3 * 10
            int r3 = r3 + r4
            int r3 = r3 - r5
            r4 = 255(0xff, float:3.57E-43)
            if (r3 <= r4) goto L3c
            return r1
        L3c:
            int r2 = r2 + 1
            goto L17
        L3f:
            int r8 = r2 - r8
            if (r8 != 0) goto L44
            return r1
        L44:
            int r8 = r0 + 1
            byte r1 = (byte) r3
            r10[r0] = r1
            r0 = r8
            r8 = r2
            goto L1
        L4c:
            int r11 = r11 + 4
            if (r0 != r11) goto L51
            r1 = 1
        L51:
            return r1
    }

    private static final java.net.InetAddress decodeIpv6(java.lang.String r18, int r19, int r20) {
            r6 = r18
            r7 = r20
            r8 = 16
            byte[] r9 = new byte[r8]
            r11 = -1
            r12 = r19
            r14 = r11
            r15 = r14
            r13 = 0
        Le:
            r16 = 0
            if (r12 >= r7) goto L97
            if (r13 != r8) goto L15
            return r16
        L15:
            int r5 = r12 + 2
            if (r5 > r7) goto L38
            r3 = 0
            r4 = 4
            r17 = 0
            java.lang.String r1 = "::"
            r0 = r18
            r2 = r12
            r10 = r5
            r5 = r17
            boolean r0 = kotlin.text.StringsKt.startsWith$default(r0, r1, r2, r3, r4, r5)
            if (r0 == 0) goto L38
            if (r14 == r11) goto L2e
            return r16
        L2e:
            int r13 = r13 + 2
            if (r10 != r7) goto L35
            r14 = r13
            goto L97
        L35:
            r15 = r10
            r14 = r13
            goto L67
        L38:
            if (r13 == 0) goto L66
            r3 = 0
            r4 = 4
            r5 = 0
            java.lang.String r1 = ":"
            r0 = r18
            r2 = r12
            boolean r0 = kotlin.text.StringsKt.startsWith$default(r0, r1, r2, r3, r4, r5)
            if (r0 == 0) goto L4b
            int r12 = r12 + 1
            goto L66
        L4b:
            r3 = 0
            r4 = 4
            r5 = 0
            java.lang.String r1 = "."
            r0 = r18
            r2 = r12
            boolean r0 = kotlin.text.StringsKt.startsWith$default(r0, r1, r2, r3, r4, r5)
            if (r0 == 0) goto L65
            int r0 = r13 + (-2)
            boolean r0 = decodeIpv4Suffix(r6, r15, r7, r9, r0)
            if (r0 != 0) goto L62
            return r16
        L62:
            int r13 = r13 + 2
            goto L97
        L65:
            return r16
        L66:
            r15 = r12
        L67:
            r12 = r15
            r0 = 0
        L69:
            if (r12 >= r7) goto L7c
            char r1 = r6.charAt(r12)
            int r1 = okhttp3.internal.Util.parseHexDigit(r1)
            if (r1 != r11) goto L76
            goto L7c
        L76:
            int r0 = r0 << 4
            int r0 = r0 + r1
            int r12 = r12 + 1
            goto L69
        L7c:
            int r1 = r12 - r15
            if (r1 == 0) goto L96
            r2 = 4
            if (r1 <= r2) goto L84
            goto L96
        L84:
            int r1 = r13 + 1
            int r2 = r0 >>> 8
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r9[r13] = r2
            int r13 = r1 + 1
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r9[r1] = r0
            goto Le
        L96:
            return r16
        L97:
            if (r13 == r8) goto La9
            if (r14 != r11) goto L9c
            return r16
        L9c:
            int r0 = r13 - r14
            int r1 = 16 - r0
            java.lang.System.arraycopy(r9, r14, r9, r1, r0)
            int r8 = r8 - r13
            int r8 = r8 + r14
            r0 = 0
            java.util.Arrays.fill(r9, r14, r8, r0)
        La9:
            java.net.InetAddress r0 = java.net.InetAddress.getByAddress(r9)
            return r0
    }

    private static final java.lang.String inet6AddressToAscii(byte[] r8) {
            r0 = 0
            r1 = -1
            r2 = r0
            r3 = r2
        L4:
            int r4 = r8.length
            r5 = 16
            if (r2 >= r4) goto L25
            r4 = r2
        La:
            if (r4 >= r5) goto L19
            r6 = r8[r4]
            if (r6 != 0) goto L19
            int r6 = r4 + 1
            r6 = r8[r6]
            if (r6 != 0) goto L19
            int r4 = r4 + 2
            goto La
        L19:
            int r5 = r4 - r2
            if (r5 <= r3) goto L22
            r6 = 4
            if (r5 < r6) goto L22
            r1 = r2
            r3 = r5
        L22:
            int r2 = r4 + 2
            goto L4
        L25:
            okio.Buffer r2 = new okio.Buffer
            r2.<init>()
        L2a:
            int r4 = r8.length
            if (r0 >= r4) goto L5a
            r4 = 58
            if (r0 != r1) goto L3b
            r2.writeByte(r4)
            int r0 = r0 + r3
            if (r0 != r5) goto L2a
            r2.writeByte(r4)
            goto L2a
        L3b:
            if (r0 <= 0) goto L40
            r2.writeByte(r4)
        L40:
            r4 = r8[r0]
            r6 = 255(0xff, float:3.57E-43)
            int r4 = okhttp3.internal.Util.and(r4, r6)
            int r4 = r4 << 8
            int r7 = r0 + 1
            r7 = r8[r7]
            int r6 = okhttp3.internal.Util.and(r7, r6)
            r4 = r4 | r6
            long r6 = (long) r4
            r2.writeHexadecimalUnsignedLong(r6)
            int r0 = r0 + 2
            goto L2a
        L5a:
            java.lang.String r8 = r2.readUtf8()
            return r8
    }

    public static final java.lang.String toCanonicalHost(java.lang.String r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = r5
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            java.lang.String r1 = ":"
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            r2 = 2
            r3 = 0
            r4 = 0
            boolean r0 = kotlin.text.StringsKt.contains$default(r0, r1, r3, r2, r4)
            r1 = 1
            if (r0 == 0) goto L73
            java.lang.String r0 = "["
            boolean r0 = kotlin.text.StringsKt.startsWith$default(r5, r0, r3, r2, r4)
            if (r0 == 0) goto L30
            java.lang.String r0 = "]"
            boolean r0 = kotlin.text.StringsKt.endsWith$default(r5, r0, r3, r2, r4)
            if (r0 == 0) goto L30
            int r0 = r5.length()
            int r0 = r0 - r1
            java.net.InetAddress r0 = decodeIpv6(r5, r1, r0)
            goto L38
        L30:
            int r0 = r5.length()
            java.net.InetAddress r0 = decodeIpv6(r5, r3, r0)
        L38:
            if (r0 != 0) goto L3b
            return r4
        L3b:
            byte[] r1 = r0.getAddress()
            int r2 = r1.length
            r3 = 16
            if (r2 != r3) goto L4e
            java.lang.String r5 = "address"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r5)
            java.lang.String r5 = inet6AddressToAscii(r1)
            return r5
        L4e:
            int r1 = r1.length
            r2 = 4
            if (r1 != r2) goto L57
            java.lang.String r5 = r0.getHostAddress()
            return r5
        L57:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid IPv6 address: '"
            r1.append(r2)
            r1.append(r5)
            r5 = 39
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L73:
            java.lang.String r5 = java.net.IDN.toASCII(r5)     // Catch: java.lang.IllegalArgumentException -> La3
            java.lang.String r0 = "toASCII(host)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r0)     // Catch: java.lang.IllegalArgumentException -> La3
            java.util.Locale r0 = java.util.Locale.US     // Catch: java.lang.IllegalArgumentException -> La3
            java.lang.String r2 = "US"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r2)     // Catch: java.lang.IllegalArgumentException -> La3
            java.lang.String r5 = r5.toLowerCase(r0)     // Catch: java.lang.IllegalArgumentException -> La3
            java.lang.String r0 = "this as java.lang.String).toLowerCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r0)     // Catch: java.lang.IllegalArgumentException -> La3
            r0 = r5
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0     // Catch: java.lang.IllegalArgumentException -> La3
            int r0 = r0.length()     // Catch: java.lang.IllegalArgumentException -> La3
            if (r0 != 0) goto L96
            r3 = r1
        L96:
            if (r3 == 0) goto L99
            return r4
        L99:
            boolean r0 = containsInvalidHostnameAsciiCodes(r5)     // Catch: java.lang.IllegalArgumentException -> La3
            if (r0 == 0) goto La2
            r5 = r4
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.IllegalArgumentException -> La3
        La2:
            return r5
        La3:
            return r4
    }
}
