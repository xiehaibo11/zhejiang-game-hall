package okio.internal;

@kotlin.Metadata(d1 = {"\u0000\u0016\n\u0000\n\u0002\u0010\u0012\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\u001a\n\u0010\u0000\u001a\u00020\u0001*\u00020\u0002\u001a\u001e\u0010\u0003\u001a\u00020\u0002*\u00020\u00012\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0005¨\u0006\u0007"}, d2 = {"commonAsUtf8ToByteArray", "", "", "commonToUtf8String", "beginIndex", "", "endIndex", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _Utf8Kt {
    public static final byte[] commonAsUtf8ToByteArray(java.lang.String r14) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
            int r0 = r14.length()
            int r0 = r0 * 4
            byte[] r0 = new byte[r0]
            int r1 = r14.length()
            java.lang.String r2 = "java.util.Arrays.copyOf(this, newSize)"
            if (r1 <= 0) goto L106
            r3 = 0
            r4 = r3
        L17:
            int r5 = r4 + 1
            char r6 = r14.charAt(r4)
            r7 = 128(0x80, float:1.8E-43)
            int r8 = kotlin.jvm.internal.Intrinsics.compare(r6, r7)
            if (r8 < 0) goto Lfd
            int r1 = r14.length()
            r5 = r4
        L2a:
            if (r4 >= r1) goto Lf5
            char r6 = r14.charAt(r4)
            int r8 = kotlin.jvm.internal.Intrinsics.compare(r6, r7)
            if (r8 >= 0) goto L57
            byte r6 = (byte) r6
            int r8 = r5 + 1
            r0[r5] = r6
            int r4 = r4 + 1
        L3d:
            r5 = r8
            if (r4 >= r1) goto L2a
            char r6 = r14.charAt(r4)
            int r6 = kotlin.jvm.internal.Intrinsics.compare(r6, r7)
            if (r6 >= 0) goto L2a
            int r6 = r4 + 1
            char r4 = r14.charAt(r4)
            byte r4 = (byte) r4
            int r8 = r5 + 1
            r0[r5] = r4
            r4 = r6
            goto L3d
        L57:
            r8 = 2048(0x800, float:2.87E-42)
            int r8 = kotlin.jvm.internal.Intrinsics.compare(r6, r8)
            if (r8 >= 0) goto L74
            int r8 = r6 >> 6
            r8 = r8 | 192(0xc0, float:2.69E-43)
            byte r8 = (byte) r8
            int r9 = r5 + 1
            r0[r5] = r8
            r5 = r6 & 63
            r5 = r5 | r7
            byte r5 = (byte) r5
            int r6 = r9 + 1
            r0[r9] = r5
        L70:
            int r4 = r4 + 1
        L72:
            r5 = r6
            goto L2a
        L74:
            r8 = 55296(0xd800, float:7.7486E-41)
            r9 = 57343(0xdfff, float:8.0355E-41)
            r10 = 1
            if (r8 > r6) goto L81
            if (r6 > r9) goto L81
            r8 = r10
            goto L82
        L81:
            r8 = r3
        L82:
            r11 = 63
            if (r8 != 0) goto La1
            int r8 = r6 >> 12
            r8 = r8 | 224(0xe0, float:3.14E-43)
            byte r8 = (byte) r8
            int r9 = r5 + 1
            r0[r5] = r8
            int r5 = r6 >> 6
            r5 = r5 & r11
            r5 = r5 | r7
            byte r5 = (byte) r5
            int r8 = r9 + 1
            r0[r9] = r5
            r5 = r6 & 63
            r5 = r5 | r7
            byte r5 = (byte) r5
            int r6 = r8 + 1
            r0[r8] = r5
            goto L70
        La1:
            r8 = 56319(0xdbff, float:7.892E-41)
            int r8 = kotlin.jvm.internal.Intrinsics.compare(r6, r8)
            if (r8 > 0) goto Lef
            int r8 = r4 + 1
            if (r1 <= r8) goto Lef
            char r12 = r14.charAt(r8)
            r13 = 56320(0xdc00, float:7.8921E-41)
            if (r13 > r12) goto Lba
            if (r12 > r9) goto Lba
            goto Lbb
        Lba:
            r10 = r3
        Lbb:
            if (r10 != 0) goto Lbe
            goto Lef
        Lbe:
            int r6 = r6 << 10
            char r8 = r14.charAt(r8)
            int r6 = r6 + r8
            r8 = -56613888(0xfffffffffca02400, float:-6.651981E36)
            int r6 = r6 + r8
            int r8 = r6 >> 18
            r8 = r8 | 240(0xf0, float:3.36E-43)
            byte r8 = (byte) r8
            int r9 = r5 + 1
            r0[r5] = r8
            int r5 = r6 >> 12
            r5 = r5 & r11
            r5 = r5 | r7
            byte r5 = (byte) r5
            int r8 = r9 + 1
            r0[r9] = r5
            int r5 = r6 >> 6
            r5 = r5 & r11
            r5 = r5 | r7
            byte r5 = (byte) r5
            int r9 = r8 + 1
            r0[r8] = r5
            r5 = r6 & 63
            r5 = r5 | r7
            byte r5 = (byte) r5
            int r6 = r9 + 1
            r0[r9] = r5
            int r4 = r4 + 2
            goto L72
        Lef:
            int r6 = r5 + 1
            r0[r5] = r11
            goto L70
        Lf5:
            byte[] r14 = java.util.Arrays.copyOf(r0, r5)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r14, r2)
            return r14
        Lfd:
            byte r6 = (byte) r6
            r0[r4] = r6
            if (r5 < r1) goto L103
            goto L106
        L103:
            r4 = r5
            goto L17
        L106:
            int r14 = r14.length()
            byte[] r14 = java.util.Arrays.copyOf(r0, r14)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r14, r2)
            return r14
    }

    public static final java.lang.String commonToUtf8String(byte[] r16, int r17, int r18) {
            r0 = r16
            r1 = r17
            r2 = r18
            java.lang.String r3 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r3)
            if (r1 < 0) goto L1ca
            int r3 = r0.length
            if (r2 > r3) goto L1ca
            if (r1 > r2) goto L1ca
            int r3 = r2 - r1
            char[] r3 = new char[r3]
            r4 = 0
            r5 = r4
        L18:
            if (r1 >= r2) goto L1c5
            r6 = r0[r1]
            if (r6 < 0) goto L37
            char r6 = (char) r6
            int r7 = r5 + 1
            r3[r5] = r6
            int r1 = r1 + 1
        L25:
            r5 = r7
            if (r1 >= r2) goto L18
            r6 = r0[r1]
            if (r6 < 0) goto L18
            int r6 = r1 + 1
            r1 = r0[r1]
            char r1 = (char) r1
            int r7 = r5 + 1
            r3[r5] = r1
            r1 = r6
            goto L25
        L37:
            int r7 = r6 >> 5
            r8 = -2
            r10 = 128(0x80, float:1.8E-43)
            r11 = 65533(0xfffd, float:9.1831E-41)
            if (r7 != r8) goto L7a
            int r6 = r1 + 1
            if (r2 > r6) goto L4f
            char r6 = (char) r11
            int r7 = r5 + 1
            r3[r5] = r6
        L4a:
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
        L4c:
            r5 = r7
        L4d:
            r9 = 1
            goto L78
        L4f:
            r7 = r0[r1]
            r6 = r0[r6]
            r8 = r6 & 192(0xc0, float:2.69E-43)
            if (r8 != r10) goto L59
            r8 = 1
            goto L5a
        L59:
            r8 = r4
        L5a:
            if (r8 != 0) goto L62
            char r6 = (char) r11
            int r7 = r5 + 1
            r3[r5] = r6
            goto L4a
        L62:
            r6 = r6 ^ 3968(0xf80, float:5.56E-42)
            int r7 = r7 << 6
            r6 = r6 ^ r7
            if (r6 >= r10) goto L6f
            char r6 = (char) r11
            int r7 = r5 + 1
            r3[r5] = r6
            goto L74
        L6f:
            char r6 = (char) r6
            int r7 = r5 + 1
            r3[r5] = r6
        L74:
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
        L76:
            r5 = r7
        L77:
            r9 = 2
        L78:
            int r1 = r1 + r9
            goto L18
        L7a:
            int r7 = r6 >> 4
            r13 = 57343(0xdfff, float:8.0355E-41)
            r14 = 55296(0xd800, float:7.7486E-41)
            r15 = 3
            if (r7 != r8) goto Lf8
            int r6 = r1 + 2
            if (r2 > r6) goto La0
            char r6 = (char) r11
            int r7 = r5 + 1
            r3[r5] = r6
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            int r5 = r1 + 1
            if (r2 <= r5) goto L4c
            r5 = r0[r5]
            r5 = r5 & 192(0xc0, float:2.69E-43)
            if (r5 != r10) goto L9c
            r5 = 1
            goto L9d
        L9c:
            r5 = r4
        L9d:
            if (r5 != 0) goto L76
            goto L4c
        La0:
            r7 = r0[r1]
            int r8 = r1 + 1
            r8 = r0[r8]
            r9 = r8 & 192(0xc0, float:2.69E-43)
            if (r9 != r10) goto Lac
            r9 = 1
            goto Lad
        Lac:
            r9 = r4
        Lad:
            if (r9 != 0) goto Lb7
            char r6 = (char) r11
            int r7 = r5 + 1
            r3[r5] = r6
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            goto L4c
        Lb7:
            r6 = r0[r6]
            r9 = r6 & 192(0xc0, float:2.69E-43)
            if (r9 != r10) goto Lbf
            r9 = 1
            goto Lc0
        Lbf:
            r9 = r4
        Lc0:
            if (r9 != 0) goto Lca
            char r6 = (char) r11
            int r7 = r5 + 1
            r3[r5] = r6
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            goto L76
        Lca:
            r9 = -123008(0xfffffffffffe1f80, float:NaN)
            r6 = r6 ^ r9
            int r8 = r8 << 6
            r6 = r6 ^ r8
            int r7 = r7 << 12
            r6 = r6 ^ r7
            r7 = 2048(0x800, float:2.87E-42)
            if (r6 >= r7) goto Le0
            char r6 = (char) r11
            int r7 = r5 + 1
            r3[r5] = r6
        Ldd:
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            goto Lf5
        Le0:
            if (r14 > r6) goto Le6
            if (r6 > r13) goto Le6
            r12 = 1
            goto Le7
        Le6:
            r12 = r4
        Le7:
            if (r12 == 0) goto Lef
            char r6 = (char) r11
            int r7 = r5 + 1
            r3[r5] = r6
            goto Ldd
        Lef:
            char r6 = (char) r6
            int r7 = r5 + 1
            r3[r5] = r6
            goto Ldd
        Lf5:
            r5 = r7
        Lf6:
            r9 = r15
            goto L78
        Lf8:
            int r6 = r6 >> 3
            if (r6 != r8) goto L1bc
            int r6 = r1 + 3
            if (r2 > r6) goto L12e
            int r6 = r5 + 1
            r3[r5] = r11
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            int r5 = r1 + 1
            if (r2 <= r5) goto L12b
            r5 = r0[r5]
            r5 = r5 & 192(0xc0, float:2.69E-43)
            if (r5 != r10) goto L112
            r5 = 1
            goto L113
        L112:
            r5 = r4
        L113:
            if (r5 != 0) goto L116
            goto L12b
        L116:
            int r5 = r1 + 2
            if (r2 <= r5) goto L128
            r5 = r0[r5]
            r5 = r5 & 192(0xc0, float:2.69E-43)
            if (r5 != r10) goto L122
            r12 = 1
            goto L123
        L122:
            r12 = r4
        L123:
            if (r12 != 0) goto L126
            goto L128
        L126:
            r5 = r6
            goto Lf6
        L128:
            r5 = r6
            goto L77
        L12b:
            r5 = r6
            goto L4d
        L12e:
            r7 = r0[r1]
            int r8 = r1 + 1
            r8 = r0[r8]
            r9 = r8 & 192(0xc0, float:2.69E-43)
            if (r9 != r10) goto L13a
            r9 = 1
            goto L13b
        L13a:
            r9 = r4
        L13b:
            if (r9 != 0) goto L144
            int r6 = r5 + 1
            r3[r5] = r11
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            goto L12b
        L144:
            int r9 = r1 + 2
            r9 = r0[r9]
            r12 = r9 & 192(0xc0, float:2.69E-43)
            if (r12 != r10) goto L14e
            r12 = 1
            goto L14f
        L14e:
            r12 = r4
        L14f:
            if (r12 != 0) goto L158
            int r6 = r5 + 1
            r3[r5] = r11
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            goto L128
        L158:
            r6 = r0[r6]
            r12 = r6 & 192(0xc0, float:2.69E-43)
            if (r12 != r10) goto L160
            r10 = 1
            goto L161
        L160:
            r10 = r4
        L161:
            if (r10 != 0) goto L16a
            int r6 = r5 + 1
            r3[r5] = r11
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            goto L126
        L16a:
            r10 = 3678080(0x381f80, float:5.154088E-39)
            r6 = r6 ^ r10
            int r9 = r9 << 6
            r6 = r6 ^ r9
            int r8 = r8 << 12
            r6 = r6 ^ r8
            int r7 = r7 << 18
            r6 = r6 ^ r7
            r7 = 1114111(0x10ffff, float:1.561202E-39)
            if (r6 <= r7) goto L183
            int r6 = r5 + 1
            r3[r5] = r11
        L180:
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            goto L1b8
        L183:
            if (r14 > r6) goto L189
            if (r6 > r13) goto L189
            r12 = 1
            goto L18a
        L189:
            r12 = r4
        L18a:
            if (r12 == 0) goto L191
            int r6 = r5 + 1
            r3[r5] = r11
            goto L180
        L191:
            r7 = 65536(0x10000, float:9.1835E-41)
            if (r6 >= r7) goto L19a
            int r6 = r5 + 1
            r3[r5] = r11
            goto L180
        L19a:
            if (r6 == r11) goto L1b3
            int r7 = r6 >>> 10
            r8 = 55232(0xd7c0, float:7.7397E-41)
            int r7 = r7 + r8
            char r7 = (char) r7
            int r8 = r5 + 1
            r3[r5] = r7
            r5 = r6 & 1023(0x3ff, float:1.434E-42)
            r6 = 56320(0xdc00, float:7.8921E-41)
            int r5 = r5 + r6
            char r5 = (char) r5
            int r6 = r8 + 1
            r3[r8] = r5
            goto L180
        L1b3:
            int r6 = r5 + 1
            r3[r5] = r11
            goto L180
        L1b8:
            r9 = 4
            r5 = r6
            goto L78
        L1bc:
            int r6 = r5 + 1
            r3[r5] = r11
            int r1 = r1 + 1
            r5 = r6
            goto L18
        L1c5:
            java.lang.String r0 = kotlin.text.StringsKt.concatToString(r3, r4, r5)
            return r0
        L1ca:
            java.lang.ArrayIndexOutOfBoundsException r3 = new java.lang.ArrayIndexOutOfBoundsException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "size="
            r4.append(r5)
            int r0 = r0.length
            r4.append(r0)
            java.lang.String r0 = " beginIndex="
            r4.append(r0)
            r4.append(r1)
            java.lang.String r0 = " endIndex="
            r4.append(r0)
            r4.append(r2)
            java.lang.String r0 = r4.toString()
            r3.<init>(r0)
            throw r3
    }

    public static java.lang.String commonToUtf8String$default(byte[] r0, int r1, int r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L5
            r1 = 0
        L5:
            r3 = r3 & 2
            if (r3 == 0) goto La
            int r2 = r0.length
        La:
            java.lang.String r0 = commonToUtf8String(r0, r1, r2)
            return r0
    }
}
