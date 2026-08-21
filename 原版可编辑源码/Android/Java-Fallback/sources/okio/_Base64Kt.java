package okio;

@kotlin.Metadata(d1 = {"\u0000\u0012\n\u0000\n\u0002\u0010\u0012\n\u0002\b\b\n\u0002\u0010\u000e\n\u0002\b\u0003\u001a\u000e\u0010\t\u001a\u0004\u0018\u00010\u0001*\u00020\nH\u0000\u001a\u0016\u0010\u000b\u001a\u00020\n*\u00020\u00012\b\b\u0002\u0010\f\u001a\u00020\u0001H\u0000\"\u001c\u0010\u0000\u001a\u00020\u00018\u0000X\u0081\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0002\u0010\u0003\u001a\u0004\b\u0004\u0010\u0005\"\u001c\u0010\u0006\u001a\u00020\u00018\u0000X\u0081\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0007\u0010\u0003\u001a\u0004\b\b\u0010\u0005¨\u0006\r"}, d2 = {"BASE64", "", "getBASE64$annotations", "()V", "getBASE64", "()[B", "BASE64_URL_SAFE", "getBASE64_URL_SAFE$annotations", "getBASE64_URL_SAFE", "decodeBase64ToArray", "", "encodeBase64", "map", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _Base64Kt {
    private static final byte[] BASE64 = null;
    private static final byte[] BASE64_URL_SAFE = null;

    static {
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
            okio.ByteString r0 = r0.encodeUtf8(r1)
            byte[] r0 = r0.getData$okio()
            okio._Base64Kt.BASE64 = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_"
            okio.ByteString r0 = r0.encodeUtf8(r1)
            byte[] r0 = r0.getData$okio()
            okio._Base64Kt.BASE64_URL_SAFE = r0
            return
    }

    public static final byte[] decodeBase64ToArray(java.lang.String r17) {
            r0 = r17
            java.lang.String r1 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r1)
            int r1 = r17.length()
        Lb:
            r2 = 9
            r3 = 32
            r4 = 13
            r5 = 10
            if (r1 <= 0) goto L2b
            int r6 = r1 + (-1)
            char r6 = r0.charAt(r6)
            r7 = 61
            if (r6 == r7) goto L28
            if (r6 == r5) goto L28
            if (r6 == r4) goto L28
            if (r6 == r3) goto L28
            if (r6 == r2) goto L28
            goto L2b
        L28:
            int r1 = r1 + (-1)
            goto Lb
        L2b:
            long r6 = (long) r1
            r8 = 6
            long r6 = r6 * r8
            r8 = 8
            long r6 = r6 / r8
            int r6 = (int) r6
            byte[] r7 = new byte[r6]
            r8 = 0
            r10 = 1
            if (r1 <= 0) goto Lb9
            r11 = 0
            r12 = 0
            r13 = 0
            r14 = 0
        L3d:
            int r15 = r11 + 1
            char r11 = r0.charAt(r11)
            r9 = 65
            if (r9 > r11) goto L4d
            r9 = 90
            if (r11 > r9) goto L4d
            r9 = r10
            goto L4e
        L4d:
            r9 = 0
        L4e:
            if (r9 == 0) goto L53
            int r11 = r11 + (-65)
            goto L94
        L53:
            r9 = 97
            if (r9 > r11) goto L5d
            r9 = 122(0x7a, float:1.71E-43)
            if (r11 > r9) goto L5d
            r9 = r10
            goto L5e
        L5d:
            r9 = 0
        L5e:
            if (r9 == 0) goto L63
            int r11 = r11 + (-71)
            goto L94
        L63:
            r9 = 48
            if (r9 > r11) goto L6d
            r9 = 57
            if (r11 > r9) goto L6d
            r9 = r10
            goto L6e
        L6d:
            r9 = 0
        L6e:
            if (r9 == 0) goto L73
            int r11 = r11 + 4
            goto L94
        L73:
            r9 = 43
            if (r11 == r9) goto L92
            r9 = 45
            if (r11 != r9) goto L7c
            goto L92
        L7c:
            r9 = 47
            if (r11 == r9) goto L8f
            r9 = 95
            if (r11 != r9) goto L85
            goto L8f
        L85:
            if (r11 == r5) goto Lb1
            if (r11 == r4) goto Lb1
            if (r11 == r3) goto Lb1
            if (r11 != r2) goto L8e
            goto Lb1
        L8e:
            return r8
        L8f:
            r11 = 63
            goto L94
        L92:
            r11 = 62
        L94:
            int r9 = r14 << 6
            r14 = r9 | r11
            int r13 = r13 + 1
            int r9 = r13 % 4
            if (r9 != 0) goto Lb1
            int r9 = r12 + 1
            int r11 = r14 >> 16
            byte r11 = (byte) r11
            r7[r12] = r11
            int r11 = r9 + 1
            int r12 = r14 >> 8
            byte r12 = (byte) r12
            r7[r9] = r12
            int r12 = r11 + 1
            byte r9 = (byte) r14
            r7[r11] = r9
        Lb1:
            if (r15 < r1) goto Lb7
            r9 = r13
            r16 = r14
            goto Lbd
        Lb7:
            r11 = r15
            goto L3d
        Lb9:
            r9 = 0
            r12 = 0
            r16 = 0
        Lbd:
            int r9 = r9 % 4
            if (r9 == r10) goto Lf0
            r0 = 2
            if (r9 == r0) goto Ld9
            r0 = 3
            if (r9 == r0) goto Lc8
            goto Le3
        Lc8:
            int r0 = r16 << 6
            int r1 = r12 + 1
            int r2 = r0 >> 16
            byte r2 = (byte) r2
            r7[r12] = r2
            int r12 = r1 + 1
            int r0 = r0 >> 8
            byte r0 = (byte) r0
            r7[r1] = r0
            goto Le3
        Ld9:
            int r0 = r16 << 12
            int r1 = r12 + 1
            int r0 = r0 >> 16
            byte r0 = (byte) r0
            r7[r12] = r0
            r12 = r1
        Le3:
            if (r12 != r6) goto Le6
            return r7
        Le6:
            byte[] r0 = java.util.Arrays.copyOf(r7, r12)
            java.lang.String r1 = "java.util.Arrays.copyOf(this, newSize)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
        Lf0:
            return r8
    }

    public static final java.lang.String encodeBase64(byte[] r10, byte[] r11) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            java.lang.String r0 = "map"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            int r0 = r10.length
            r1 = 2
            int r0 = r0 + r1
            int r0 = r0 / 3
            int r0 = r0 * 4
            byte[] r0 = new byte[r0]
            int r2 = r10.length
            int r3 = r10.length
            int r3 = r3 % 3
            int r2 = r2 - r3
            r3 = 0
            r4 = r3
        L1a:
            if (r3 >= r2) goto L58
            int r5 = r3 + 1
            r3 = r10[r3]
            int r6 = r5 + 1
            r5 = r10[r5]
            int r7 = r6 + 1
            r6 = r10[r6]
            int r8 = r4 + 1
            r9 = r3 & 255(0xff, float:3.57E-43)
            int r9 = r9 >> r1
            r9 = r11[r9]
            r0[r4] = r9
            int r4 = r8 + 1
            r3 = r3 & 3
            int r3 = r3 << 4
            r9 = r5 & 255(0xff, float:3.57E-43)
            int r9 = r9 >> 4
            r3 = r3 | r9
            r3 = r11[r3]
            r0[r8] = r3
            int r3 = r4 + 1
            r5 = r5 & 15
            int r5 = r5 << r1
            r8 = r6 & 255(0xff, float:3.57E-43)
            int r8 = r8 >> 6
            r5 = r5 | r8
            r5 = r11[r5]
            r0[r4] = r5
            int r4 = r3 + 1
            r5 = r6 & 63
            r5 = r11[r5]
            r0[r3] = r5
            r3 = r7
            goto L1a
        L58:
            int r5 = r10.length
            int r5 = r5 - r2
            r2 = 61
            r6 = 1
            if (r5 == r6) goto L8d
            if (r5 == r1) goto L62
            goto Laa
        L62:
            int r5 = r3 + 1
            r3 = r10[r3]
            r10 = r10[r5]
            int r5 = r4 + 1
            r6 = r3 & 255(0xff, float:3.57E-43)
            int r6 = r6 >> r1
            r6 = r11[r6]
            r0[r4] = r6
            int r4 = r5 + 1
            r3 = r3 & 3
            int r3 = r3 << 4
            r6 = r10 & 255(0xff, float:3.57E-43)
            int r6 = r6 >> 4
            r3 = r3 | r6
            r3 = r11[r3]
            r0[r5] = r3
            int r3 = r4 + 1
            r10 = r10 & 15
            int r10 = r10 << r1
            r10 = r11[r10]
            r0[r4] = r10
            byte r10 = (byte) r2
            r0[r3] = r10
            goto Laa
        L8d:
            r10 = r10[r3]
            int r3 = r4 + 1
            r5 = r10 & 255(0xff, float:3.57E-43)
            int r1 = r5 >> 2
            r1 = r11[r1]
            r0[r4] = r1
            int r1 = r3 + 1
            r10 = r10 & 3
            int r10 = r10 << 4
            r10 = r11[r10]
            r0[r3] = r10
            int r10 = r1 + 1
            byte r11 = (byte) r2
            r0[r1] = r11
            r0[r10] = r11
        Laa:
            java.lang.String r10 = okio._JvmPlatformKt.toUtf8String(r0)
            return r10
    }

    public static java.lang.String encodeBase64$default(byte[] r0, byte[] r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            byte[] r1 = okio._Base64Kt.BASE64
        L6:
            java.lang.String r0 = encodeBase64(r0, r1)
            return r0
    }

    public static final byte[] getBASE64() {
            byte[] r0 = okio._Base64Kt.BASE64
            return r0
    }

    public static void getBASE64$annotations() {
            return
    }

    public static final byte[] getBASE64_URL_SAFE() {
            byte[] r0 = okio._Base64Kt.BASE64_URL_SAFE
            return r0
    }

    public static void getBASE64_URL_SAFE$annotations() {
            return
    }
}
