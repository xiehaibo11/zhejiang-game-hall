package okio.internal;

@kotlin.Metadata(d1 = {"\u0000R\n\u0000\n\u0002\u0010\u0019\n\u0002\b\u0005\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\f\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\b\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0005\n\u0002\b\u0017\n\u0002\u0018\u0002\n\u0000\u001a\u0018\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u0007H\u0002\u001a\u0011\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\tH\u0080\b\u001a\u0010\u0010\u000e\u001a\u00020\u00072\u0006\u0010\u000f\u001a\u00020\u0010H\u0002\u001a\r\u0010\u0011\u001a\u00020\u0012*\u00020\fH\u0080\b\u001a\r\u0010\u0013\u001a\u00020\u0012*\u00020\fH\u0080\b\u001a\u0015\u0010\u0014\u001a\u00020\u0007*\u00020\f2\u0006\u0010\u0015\u001a\u00020\fH\u0080\b\u001a-\u0010\u0016\u001a\u00020\u0017*\u00020\f2\u0006\u0010\u0018\u001a\u00020\u00072\u0006\u0010\u0019\u001a\u00020\t2\u0006\u0010\u001a\u001a\u00020\u00072\u0006\u0010\u001b\u001a\u00020\u0007H\u0080\b\u001a\u000f\u0010\u001c\u001a\u0004\u0018\u00010\f*\u00020\u0012H\u0080\b\u001a\r\u0010\u001d\u001a\u00020\f*\u00020\u0012H\u0080\b\u001a\r\u0010\u001e\u001a\u00020\f*\u00020\u0012H\u0080\b\u001a\u0015\u0010\u001f\u001a\u00020 *\u00020\f2\u0006\u0010!\u001a\u00020\tH\u0080\b\u001a\u0015\u0010\u001f\u001a\u00020 *\u00020\f2\u0006\u0010!\u001a\u00020\fH\u0080\b\u001a\u0017\u0010\"\u001a\u00020 *\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010#H\u0080\b\u001a\u0015\u0010$\u001a\u00020%*\u00020\f2\u0006\u0010&\u001a\u00020\u0007H\u0080\b\u001a\r\u0010'\u001a\u00020\u0007*\u00020\fH\u0080\b\u001a\r\u0010(\u001a\u00020\u0007*\u00020\fH\u0080\b\u001a\r\u0010)\u001a\u00020\u0012*\u00020\fH\u0080\b\u001a\u001d\u0010*\u001a\u00020\u0007*\u00020\f2\u0006\u0010\u0015\u001a\u00020\t2\u0006\u0010+\u001a\u00020\u0007H\u0080\b\u001a\r\u0010,\u001a\u00020\t*\u00020\fH\u0080\b\u001a\u001d\u0010-\u001a\u00020\u0007*\u00020\f2\u0006\u0010\u0015\u001a\u00020\t2\u0006\u0010+\u001a\u00020\u0007H\u0080\b\u001a\u001d\u0010-\u001a\u00020\u0007*\u00020\f2\u0006\u0010\u0015\u001a\u00020\f2\u0006\u0010+\u001a\u00020\u0007H\u0080\b\u001a-\u0010.\u001a\u00020 *\u00020\f2\u0006\u0010\u0018\u001a\u00020\u00072\u0006\u0010\u0015\u001a\u00020\t2\u0006\u0010/\u001a\u00020\u00072\u0006\u0010\u001b\u001a\u00020\u0007H\u0080\b\u001a-\u0010.\u001a\u00020 *\u00020\f2\u0006\u0010\u0018\u001a\u00020\u00072\u0006\u0010\u0015\u001a\u00020\f2\u0006\u0010/\u001a\u00020\u00072\u0006\u0010\u001b\u001a\u00020\u0007H\u0080\b\u001a\u0015\u00100\u001a\u00020 *\u00020\f2\u0006\u00101\u001a\u00020\tH\u0080\b\u001a\u0015\u00100\u001a\u00020 *\u00020\f2\u0006\u00101\u001a\u00020\fH\u0080\b\u001a\u001d\u00102\u001a\u00020\f*\u00020\f2\u0006\u00103\u001a\u00020\u00072\u0006\u00104\u001a\u00020\u0007H\u0080\b\u001a\r\u00105\u001a\u00020\f*\u00020\fH\u0080\b\u001a\r\u00106\u001a\u00020\f*\u00020\fH\u0080\b\u001a\r\u00107\u001a\u00020\t*\u00020\fH\u0080\b\u001a\u001d\u00108\u001a\u00020\f*\u00020\t2\u0006\u0010\u0018\u001a\u00020\u00072\u0006\u0010\u001b\u001a\u00020\u0007H\u0080\b\u001a\r\u00109\u001a\u00020\u0012*\u00020\fH\u0080\b\u001a\r\u0010:\u001a\u00020\u0012*\u00020\fH\u0080\b\u001a$\u0010;\u001a\u00020\u0017*\u00020\f2\u0006\u0010<\u001a\u00020=2\u0006\u0010\u0018\u001a\u00020\u00072\u0006\u0010\u001b\u001a\u00020\u0007H\u0000\"\u001c\u0010\u0000\u001a\u00020\u00018\u0000X\u0081\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0002\u0010\u0003\u001a\u0004\b\u0004\u0010\u0005¨\u0006>"}, d2 = {"HEX_DIGIT_CHARS", "", "getHEX_DIGIT_CHARS$annotations", "()V", "getHEX_DIGIT_CHARS", "()[C", "codePointIndexToCharIndex", "", "s", "", "codePointCount", "commonOf", "Lokio/ByteString;", "data", "decodeHexDigit", "c", "", "commonBase64", "", "commonBase64Url", "commonCompareTo", "other", "commonCopyInto", "", "offset", "target", "targetOffset", "byteCount", "commonDecodeBase64", "commonDecodeHex", "commonEncodeUtf8", "commonEndsWith", "", "suffix", "commonEquals", "", "commonGetByte", "", "pos", "commonGetSize", "commonHashCode", "commonHex", "commonIndexOf", "fromIndex", "commonInternalArray", "commonLastIndexOf", "commonRangeEquals", "otherOffset", "commonStartsWith", "prefix", "commonSubstring", "beginIndex", "endIndex", "commonToAsciiLowercase", "commonToAsciiUppercase", "commonToByteArray", "commonToByteString", "commonToString", "commonUtf8", "commonWrite", "buffer", "Lokio/Buffer;", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _ByteStringKt {
    private static final char[] HEX_DIGIT_CHARS = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            okio.internal._ByteStringKt.HEX_DIGIT_CHARS = r0
            return
    }

    public static final int access$codePointIndexToCharIndex(byte[] r0, int r1) {
            int r0 = codePointIndexToCharIndex(r0, r1)
            return r0
    }

    public static final int access$decodeHexDigit(char r0) {
            int r0 = decodeHexDigit(r0)
            return r0
    }

    private static final int codePointIndexToCharIndex(byte[] r19, int r20) {
            r0 = r19
            r1 = r20
            int r2 = r0.length
            r4 = 0
            r5 = 0
            r6 = 0
        L8:
            if (r4 >= r2) goto L234
            r7 = r0[r4]
            r8 = 159(0x9f, float:2.23E-43)
            r9 = 127(0x7f, float:1.78E-43)
            r10 = 31
            r11 = 13
            r12 = 65533(0xfffd, float:9.1831E-41)
            r13 = 10
            r14 = 65536(0x10000, float:9.1835E-41)
            r16 = -1
            r17 = 1
            if (r7 < 0) goto L8d
            int r18 = r6 + 1
            if (r6 != r1) goto L26
            return r5
        L26:
            if (r7 == r13) goto L45
            if (r7 == r11) goto L45
            if (r7 < 0) goto L31
            if (r7 > r10) goto L31
            r6 = r17
            goto L32
        L31:
            r6 = 0
        L32:
            if (r6 != 0) goto L41
            if (r9 > r7) goto L3b
            if (r7 > r8) goto L3b
            r6 = r17
            goto L3c
        L3b:
            r6 = 0
        L3c:
            if (r6 == 0) goto L3f
            goto L41
        L3f:
            r6 = 0
            goto L43
        L41:
            r6 = r17
        L43:
            if (r6 != 0) goto L47
        L45:
            if (r7 != r12) goto L48
        L47:
            return r16
        L48:
            if (r7 >= r14) goto L4d
            r6 = r17
            goto L4e
        L4d:
            r6 = 2
        L4e:
            int r5 = r5 + r6
            int r4 = r4 + 1
        L51:
            r6 = r18
            if (r4 >= r2) goto L8
            r7 = r0[r4]
            if (r7 < 0) goto L8
            int r7 = r4 + 1
            r4 = r0[r4]
            int r18 = r6 + 1
            if (r6 != r1) goto L62
            return r5
        L62:
            if (r4 == r13) goto L81
            if (r4 == r11) goto L81
            if (r4 < 0) goto L6d
            if (r4 > r10) goto L6d
            r6 = r17
            goto L6e
        L6d:
            r6 = 0
        L6e:
            if (r6 != 0) goto L7d
            if (r9 > r4) goto L77
            if (r4 > r8) goto L77
            r6 = r17
            goto L78
        L77:
            r6 = 0
        L78:
            if (r6 == 0) goto L7b
            goto L7d
        L7b:
            r6 = 0
            goto L7f
        L7d:
            r6 = r17
        L7f:
            if (r6 != 0) goto L83
        L81:
            if (r4 != r12) goto L84
        L83:
            return r16
        L84:
            if (r4 >= r14) goto L89
            r4 = r17
            goto L8a
        L89:
            r4 = 2
        L8a:
            int r5 = r5 + r4
            r4 = r7
            goto L51
        L8d:
            int r3 = r7 >> 5
            r15 = -2
            r14 = 128(0x80, float:1.8E-43)
            if (r3 != r15) goto Lf0
            int r3 = r4 + 1
            if (r2 > r3) goto L9c
            if (r6 != r1) goto L9b
            return r5
        L9b:
            return r16
        L9c:
            r7 = r0[r4]
            r3 = r0[r3]
            r15 = r3 & 192(0xc0, float:2.69E-43)
            if (r15 != r14) goto La7
            r15 = r17
            goto La8
        La7:
            r15 = 0
        La8:
            if (r15 != 0) goto Lae
            if (r6 != r1) goto Lad
            return r5
        Lad:
            return r16
        Lae:
            r3 = r3 ^ 3968(0xf80, float:5.56E-42)
            int r7 = r7 << 6
            r3 = r3 ^ r7
            if (r3 >= r14) goto Lb9
            if (r6 != r1) goto Lb8
            return r5
        Lb8:
            return r16
        Lb9:
            int r7 = r6 + 1
            if (r6 != r1) goto Lbe
            return r5
        Lbe:
            if (r3 == r13) goto Ldd
            if (r3 == r11) goto Ldd
            if (r3 < 0) goto Lc9
            if (r3 > r10) goto Lc9
            r6 = r17
            goto Lca
        Lc9:
            r6 = 0
        Lca:
            if (r6 != 0) goto Ld9
            if (r9 > r3) goto Ld3
            if (r3 > r8) goto Ld3
            r6 = r17
            goto Ld4
        Ld3:
            r6 = 0
        Ld4:
            if (r6 == 0) goto Ld7
            goto Ld9
        Ld7:
            r6 = 0
            goto Ldb
        Ld9:
            r6 = r17
        Ldb:
            if (r6 != 0) goto Ldf
        Ldd:
            if (r3 != r12) goto Le0
        Ldf:
            return r16
        Le0:
            r6 = 65536(0x10000, float:9.1835E-41)
            if (r3 >= r6) goto Le7
            r15 = r17
            goto Le8
        Le7:
            r15 = 2
        Le8:
            int r5 = r5 + r15
            kotlin.Unit r3 = kotlin.Unit.INSTANCE
            int r4 = r4 + 2
        Led:
            r6 = r7
            goto L8
        Lf0:
            int r3 = r7 >> 4
            r12 = 57343(0xdfff, float:8.0355E-41)
            r8 = 55296(0xd800, float:7.7486E-41)
            if (r3 != r15) goto L183
            int r3 = r4 + 2
            if (r2 > r3) goto L102
            if (r6 != r1) goto L101
            return r5
        L101:
            return r16
        L102:
            r7 = r0[r4]
            int r15 = r4 + 1
            r15 = r0[r15]
            r9 = r15 & 192(0xc0, float:2.69E-43)
            if (r9 != r14) goto L10f
            r9 = r17
            goto L110
        L10f:
            r9 = 0
        L110:
            if (r9 != 0) goto L116
            if (r6 != r1) goto L115
            return r5
        L115:
            return r16
        L116:
            r3 = r0[r3]
            r9 = r3 & 192(0xc0, float:2.69E-43)
            if (r9 != r14) goto L11f
            r9 = r17
            goto L120
        L11f:
            r9 = 0
        L120:
            if (r9 != 0) goto L126
            if (r6 != r1) goto L125
            return r5
        L125:
            return r16
        L126:
            r9 = -123008(0xfffffffffffe1f80, float:NaN)
            r3 = r3 ^ r9
            int r9 = r15 << 6
            r3 = r3 ^ r9
            int r7 = r7 << 12
            r3 = r3 ^ r7
            r7 = 2048(0x800, float:2.87E-42)
            if (r3 >= r7) goto L138
            if (r6 != r1) goto L137
            return r5
        L137:
            return r16
        L138:
            if (r8 > r3) goto L13f
            if (r3 > r12) goto L13f
            r7 = r17
            goto L140
        L13f:
            r7 = 0
        L140:
            if (r7 == 0) goto L146
            if (r6 != r1) goto L145
            return r5
        L145:
            return r16
        L146:
            int r7 = r6 + 1
            if (r6 != r1) goto L14b
            return r5
        L14b:
            if (r3 == r13) goto L16e
            if (r3 == r11) goto L16e
            if (r3 < 0) goto L156
            if (r3 > r10) goto L156
            r6 = r17
            goto L157
        L156:
            r6 = 0
        L157:
            if (r6 != 0) goto L16a
            r6 = 127(0x7f, float:1.78E-43)
            if (r6 > r3) goto L164
            r6 = 159(0x9f, float:2.23E-43)
            if (r3 > r6) goto L164
            r6 = r17
            goto L165
        L164:
            r6 = 0
        L165:
            if (r6 == 0) goto L168
            goto L16a
        L168:
            r6 = 0
            goto L16c
        L16a:
            r6 = r17
        L16c:
            if (r6 != 0) goto L173
        L16e:
            r6 = 65533(0xfffd, float:9.1831E-41)
            if (r3 != r6) goto L174
        L173:
            return r16
        L174:
            r6 = 65536(0x10000, float:9.1835E-41)
            if (r3 >= r6) goto L17b
            r15 = r17
            goto L17c
        L17b:
            r15 = 2
        L17c:
            int r5 = r5 + r15
            kotlin.Unit r3 = kotlin.Unit.INSTANCE
            int r4 = r4 + 3
            goto Led
        L183:
            int r3 = r7 >> 3
            if (r3 != r15) goto L230
            int r3 = r4 + 3
            if (r2 > r3) goto L18f
            if (r6 != r1) goto L18e
            return r5
        L18e:
            return r16
        L18f:
            r7 = r0[r4]
            int r9 = r4 + 1
            r9 = r0[r9]
            r15 = r9 & 192(0xc0, float:2.69E-43)
            if (r15 != r14) goto L19c
            r15 = r17
            goto L19d
        L19c:
            r15 = 0
        L19d:
            if (r15 != 0) goto L1a3
            if (r6 != r1) goto L1a2
            return r5
        L1a2:
            return r16
        L1a3:
            int r15 = r4 + 2
            r15 = r0[r15]
            r10 = r15 & 192(0xc0, float:2.69E-43)
            if (r10 != r14) goto L1ae
            r10 = r17
            goto L1af
        L1ae:
            r10 = 0
        L1af:
            if (r10 != 0) goto L1b5
            if (r6 != r1) goto L1b4
            return r5
        L1b4:
            return r16
        L1b5:
            r3 = r0[r3]
            r10 = r3 & 192(0xc0, float:2.69E-43)
            if (r10 != r14) goto L1be
            r10 = r17
            goto L1bf
        L1be:
            r10 = 0
        L1bf:
            if (r10 != 0) goto L1c5
            if (r6 != r1) goto L1c4
            return r5
        L1c4:
            return r16
        L1c5:
            r10 = 3678080(0x381f80, float:5.154088E-39)
            r3 = r3 ^ r10
            int r10 = r15 << 6
            r3 = r3 ^ r10
            int r9 = r9 << 12
            r3 = r3 ^ r9
            int r7 = r7 << 18
            r3 = r3 ^ r7
            r7 = 1114111(0x10ffff, float:1.561202E-39)
            if (r3 <= r7) goto L1db
            if (r6 != r1) goto L1da
            return r5
        L1da:
            return r16
        L1db:
            if (r8 > r3) goto L1e2
            if (r3 > r12) goto L1e2
            r7 = r17
            goto L1e3
        L1e2:
            r7 = 0
        L1e3:
            if (r7 == 0) goto L1e9
            if (r6 != r1) goto L1e8
            return r5
        L1e8:
            return r16
        L1e9:
            r7 = 65536(0x10000, float:9.1835E-41)
            if (r3 >= r7) goto L1f1
            if (r6 != r1) goto L1f0
            return r5
        L1f0:
            return r16
        L1f1:
            int r7 = r6 + 1
            if (r6 != r1) goto L1f6
            return r5
        L1f6:
            if (r3 == r13) goto L21b
            if (r3 == r11) goto L21b
            if (r3 < 0) goto L203
            r6 = 31
            if (r3 > r6) goto L203
            r6 = r17
            goto L204
        L203:
            r6 = 0
        L204:
            if (r6 != 0) goto L217
            r6 = 127(0x7f, float:1.78E-43)
            if (r6 > r3) goto L211
            r6 = 159(0x9f, float:2.23E-43)
            if (r3 > r6) goto L211
            r6 = r17
            goto L212
        L211:
            r6 = 0
        L212:
            if (r6 == 0) goto L215
            goto L217
        L215:
            r6 = 0
            goto L219
        L217:
            r6 = r17
        L219:
            if (r6 != 0) goto L220
        L21b:
            r6 = 65533(0xfffd, float:9.1831E-41)
            if (r3 != r6) goto L221
        L220:
            return r16
        L221:
            r6 = 65536(0x10000, float:9.1835E-41)
            if (r3 >= r6) goto L228
            r15 = r17
            goto L229
        L228:
            r15 = 2
        L229:
            int r5 = r5 + r15
            kotlin.Unit r3 = kotlin.Unit.INSTANCE
            int r4 = r4 + 4
            goto Led
        L230:
            if (r6 != r1) goto L233
            return r5
        L233:
            return r16
        L234:
            return r5
    }

    public static final java.lang.String commonBase64(okio.ByteString r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            byte[] r2 = r2.getData$okio()
            r0 = 0
            r1 = 1
            java.lang.String r2 = okio._Base64Kt.encodeBase64$default(r2, r0, r1, r0)
            return r2
    }

    public static final java.lang.String commonBase64Url(okio.ByteString r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            byte[] r1 = r1.getData$okio()
            byte[] r0 = okio._Base64Kt.getBASE64_URL_SAFE()
            java.lang.String r1 = okio._Base64Kt.encodeBase64(r1, r0)
            return r1
    }

    public static final int commonCompareTo(okio.ByteString r9, okio.ByteString r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            int r0 = r9.size()
            int r1 = r10.size()
            int r2 = java.lang.Math.min(r0, r1)
            r3 = 0
            r4 = r3
        L18:
            r5 = -1
            r6 = 1
            if (r4 >= r2) goto L32
            byte r7 = r9.getByte(r4)
            r7 = r7 & 255(0xff, float:3.57E-43)
            byte r8 = r10.getByte(r4)
            r8 = r8 & 255(0xff, float:3.57E-43)
            if (r7 != r8) goto L2d
            int r4 = r4 + 1
            goto L18
        L2d:
            if (r7 >= r8) goto L30
            goto L31
        L30:
            r5 = r6
        L31:
            return r5
        L32:
            if (r0 != r1) goto L35
            return r3
        L35:
            if (r0 >= r1) goto L38
            goto L39
        L38:
            r5 = r6
        L39:
            return r5
    }

    public static final void commonCopyInto(okio.ByteString r1, int r2, byte[] r3, int r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            byte[] r1 = r1.getData$okio()
            int r5 = r5 + r2
            kotlin.collections.ArraysKt.copyInto(r1, r3, r4, r2, r5)
            return
    }

    public static final okio.ByteString commonDecodeBase64(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            byte[] r1 = okio._Base64Kt.decodeBase64ToArray(r1)
            if (r1 == 0) goto L11
            okio.ByteString r0 = new okio.ByteString
            r0.<init>(r1)
            goto L12
        L11:
            r0 = 0
        L12:
            return r0
    }

    public static final okio.ByteString commonDecodeHex(java.lang.String r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            int r0 = r7.length()
            int r0 = r0 % 2
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L11
            r0 = r2
            goto L12
        L11:
            r0 = r1
        L12:
            if (r0 == 0) goto L46
            int r0 = r7.length()
            int r0 = r0 / 2
            byte[] r3 = new byte[r0]
            int r0 = r0 + (-1)
            if (r0 < 0) goto L40
        L20:
            int r4 = r1 + 1
            int r5 = r1 * 2
            char r6 = r7.charAt(r5)
            int r6 = access$decodeHexDigit(r6)
            int r6 = r6 << 4
            int r5 = r5 + r2
            char r5 = r7.charAt(r5)
            int r5 = access$decodeHexDigit(r5)
            int r6 = r6 + r5
            byte r5 = (byte) r6
            r3[r1] = r5
            if (r4 <= r0) goto L3e
            goto L40
        L3e:
            r1 = r4
            goto L20
        L40:
            okio.ByteString r7 = new okio.ByteString
            r7.<init>(r3)
            return r7
        L46:
            java.lang.String r0 = "Unexpected hex string: "
            java.lang.String r7 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r7)
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r7 = r7.toString()
            r0.<init>(r7)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
    }

    public static final okio.ByteString commonEncodeUtf8(java.lang.String r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.ByteString r0 = new okio.ByteString
            byte[] r1 = okio._JvmPlatformKt.asUtf8ToByteArray(r2)
            r0.<init>(r1)
            r0.setUtf8$okio(r2)
            return r0
    }

    public static final boolean commonEndsWith(okio.ByteString r3, okio.ByteString r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "suffix"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r3.size()
            int r1 = r4.size()
            int r0 = r0 - r1
            int r1 = r4.size()
            r2 = 0
            boolean r3 = r3.rangeEquals(r0, r4, r2, r1)
            return r3
    }

    public static final boolean commonEndsWith(okio.ByteString r3, byte[] r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "suffix"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r3.size()
            int r1 = r4.length
            int r0 = r0 - r1
            int r1 = r4.length
            r2 = 0
            boolean r3 = r3.rangeEquals(r0, r4, r2, r1)
            return r3
    }

    public static final boolean commonEquals(okio.ByteString r4, java.lang.Object r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 1
            r1 = 0
            if (r5 != r4) goto La
            goto L2c
        La:
            boolean r2 = r5 instanceof okio.ByteString
            if (r2 == 0) goto L2b
            okio.ByteString r5 = (okio.ByteString) r5
            int r2 = r5.size()
            byte[] r3 = r4.getData$okio()
            int r3 = r3.length
            if (r2 != r3) goto L2b
            byte[] r2 = r4.getData$okio()
            byte[] r4 = r4.getData$okio()
            int r4 = r4.length
            boolean r4 = r5.rangeEquals(r1, r2, r1, r4)
            if (r4 == 0) goto L2b
            goto L2c
        L2b:
            r0 = r1
        L2c:
            return r0
    }

    public static final byte commonGetByte(okio.ByteString r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            byte[] r1 = r1.getData$okio()
            r1 = r1[r2]
            return r1
    }

    public static final int commonGetSize(okio.ByteString r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            byte[] r1 = r1.getData$okio()
            int r1 = r1.length
            return r1
    }

    public static final int commonHashCode(okio.ByteString r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r0 = r1.getHashCode$okio()
            if (r0 == 0) goto Lc
            return r0
        Lc:
            byte[] r0 = r1.getData$okio()
            int r0 = java.util.Arrays.hashCode(r0)
            r1.setHashCode$okio(r0)
            return r0
    }

    public static final java.lang.String commonHex(okio.ByteString r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            byte[] r0 = r8.getData$okio()
            int r0 = r0.length
            int r0 = r0 * 2
            char[] r0 = new char[r0]
            byte[] r8 = r8.getData$okio()
            int r1 = r8.length
            r2 = 0
            r3 = r2
        L15:
            if (r2 >= r1) goto L36
            r4 = r8[r2]
            int r2 = r2 + 1
            int r5 = r3 + 1
            char[] r6 = getHEX_DIGIT_CHARS()
            int r7 = r4 >> 4
            r7 = r7 & 15
            char r6 = r6[r7]
            r0[r3] = r6
            int r3 = r5 + 1
            char[] r6 = getHEX_DIGIT_CHARS()
            r4 = r4 & 15
            char r4 = r6[r4]
            r0[r5] = r4
            goto L15
        L36:
            java.lang.String r8 = kotlin.text.StringsKt.concatToString(r0)
            return r8
    }

    public static final int commonIndexOf(okio.ByteString r5, byte[] r6, int r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            byte[] r0 = r5.getData$okio()
            int r0 = r0.length
            int r1 = r6.length
            int r0 = r0 - r1
            r1 = 0
            int r7 = java.lang.Math.max(r7, r1)
            if (r7 > r0) goto L2b
        L18:
            int r2 = r7 + 1
            byte[] r3 = r5.getData$okio()
            int r4 = r6.length
            boolean r3 = okio._UtilKt.arrayRangeEquals(r3, r7, r6, r1, r4)
            if (r3 == 0) goto L26
            return r7
        L26:
            if (r7 != r0) goto L29
            goto L2b
        L29:
            r7 = r2
            goto L18
        L2b:
            r5 = -1
            return r5
    }

    public static final byte[] commonInternalArray(okio.ByteString r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            byte[] r1 = r1.getData$okio()
            return r1
    }

    public static final int commonLastIndexOf(okio.ByteString r1, okio.ByteString r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            byte[] r2 = r2.internalArray$okio()
            int r1 = r1.lastIndexOf(r2, r3)
            return r1
    }

    public static final int commonLastIndexOf(okio.ByteString r4, byte[] r5, int r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            int r6 = okio._UtilKt.resolveDefaultParameter(r4, r6)
            byte[] r0 = r4.getData$okio()
            int r0 = r0.length
            int r1 = r5.length
            int r0 = r0 - r1
            int r6 = java.lang.Math.min(r6, r0)
            if (r6 < 0) goto L2f
        L1b:
            int r0 = r6 + (-1)
            byte[] r1 = r4.getData$okio()
            r2 = 0
            int r3 = r5.length
            boolean r1 = okio._UtilKt.arrayRangeEquals(r1, r6, r5, r2, r3)
            if (r1 == 0) goto L2a
            return r6
        L2a:
            if (r0 >= 0) goto L2d
            goto L2f
        L2d:
            r6 = r0
            goto L1b
        L2f:
            r4 = -1
            return r4
    }

    public static final okio.ByteString commonOf(byte[] r2) {
            java.lang.String r0 = "data"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.ByteString r0 = new okio.ByteString
            int r1 = r2.length
            byte[] r2 = java.util.Arrays.copyOf(r2, r1)
            java.lang.String r1 = "java.util.Arrays.copyOf(this, size)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r1)
            r0.<init>(r2)
            return r0
    }

    public static final boolean commonRangeEquals(okio.ByteString r1, int r2, okio.ByteString r3, int r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            byte[] r1 = r1.getData$okio()
            boolean r1 = r3.rangeEquals(r4, r1, r2, r5)
            return r1
    }

    public static final boolean commonRangeEquals(okio.ByteString r1, int r2, byte[] r3, int r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            if (r2 < 0) goto L26
            byte[] r0 = r1.getData$okio()
            int r0 = r0.length
            int r0 = r0 - r5
            if (r2 > r0) goto L26
            if (r4 < 0) goto L26
            int r0 = r3.length
            int r0 = r0 - r5
            if (r4 > r0) goto L26
            byte[] r1 = r1.getData$okio()
            boolean r1 = okio._UtilKt.arrayRangeEquals(r1, r2, r3, r4, r5)
            if (r1 == 0) goto L26
            r1 = 1
            goto L27
        L26:
            r1 = 0
        L27:
            return r1
    }

    public static final boolean commonStartsWith(okio.ByteString r2, okio.ByteString r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "prefix"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r0 = r3.size()
            r1 = 0
            boolean r2 = r2.rangeEquals(r1, r3, r1, r0)
            return r2
    }

    public static final boolean commonStartsWith(okio.ByteString r2, byte[] r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "prefix"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r0 = r3.length
            r1 = 0
            boolean r2 = r2.rangeEquals(r1, r3, r1, r0)
            return r2
    }

    public static final okio.ByteString commonSubstring(okio.ByteString r3, int r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r5 = okio._UtilKt.resolveDefaultParameter(r3, r5)
            r0 = 1
            r1 = 0
            if (r4 < 0) goto Lf
            r2 = r0
            goto L10
        Lf:
            r2 = r1
        L10:
            if (r2 == 0) goto L73
            byte[] r2 = r3.getData$okio()
            int r2 = r2.length
            if (r5 > r2) goto L1b
            r2 = r0
            goto L1c
        L1b:
            r2 = r1
        L1c:
            if (r2 == 0) goto L4c
            int r2 = r5 - r4
            if (r2 < 0) goto L23
            goto L24
        L23:
            r0 = r1
        L24:
            if (r0 == 0) goto L3e
            if (r4 != 0) goto L30
            byte[] r0 = r3.getData$okio()
            int r0 = r0.length
            if (r5 != r0) goto L30
            return r3
        L30:
            okio.ByteString r0 = new okio.ByteString
            byte[] r3 = r3.getData$okio()
            byte[] r3 = kotlin.collections.ArraysKt.copyOfRange(r3, r4, r5)
            r0.<init>(r3)
            return r0
        L3e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "endIndex < beginIndex"
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            throw r3
        L4c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "endIndex > length("
            r4.append(r5)
            byte[] r3 = r3.getData$okio()
            int r3 = r3.length
            r4.append(r3)
            r3 = 41
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r3 = r3.toString()
            r4.<init>(r3)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
        L73:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "beginIndex < 0"
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            throw r3
    }

    public static final okio.ByteString commonToAsciiLowercase(okio.ByteString r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
        L6:
            byte[] r1 = r5.getData$okio()
            int r1 = r1.length
            if (r0 >= r1) goto L4e
            byte[] r1 = r5.getData$okio()
            r1 = r1[r0]
            r2 = 65
            byte r2 = (byte) r2
            if (r1 < r2) goto L4b
            r3 = 90
            byte r3 = (byte) r3
            if (r1 <= r3) goto L1e
            goto L4b
        L1e:
            byte[] r5 = r5.getData$okio()
            int r4 = r5.length
            byte[] r5 = java.util.Arrays.copyOf(r5, r4)
            java.lang.String r4 = "java.util.Arrays.copyOf(this, size)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r4)
            int r4 = r0 + 1
            int r1 = r1 + 32
            byte r1 = (byte) r1
            r5[r0] = r1
        L33:
            int r0 = r5.length
            if (r4 >= r0) goto L45
            r0 = r5[r4]
            if (r0 < r2) goto L42
            if (r0 <= r3) goto L3d
            goto L42
        L3d:
            int r0 = r0 + 32
            byte r0 = (byte) r0
            r5[r4] = r0
        L42:
            int r4 = r4 + 1
            goto L33
        L45:
            okio.ByteString r0 = new okio.ByteString
            r0.<init>(r5)
            return r0
        L4b:
            int r0 = r0 + 1
            goto L6
        L4e:
            return r5
    }

    public static final okio.ByteString commonToAsciiUppercase(okio.ByteString r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
        L6:
            byte[] r1 = r5.getData$okio()
            int r1 = r1.length
            if (r0 >= r1) goto L4e
            byte[] r1 = r5.getData$okio()
            r1 = r1[r0]
            r2 = 97
            byte r2 = (byte) r2
            if (r1 < r2) goto L4b
            r3 = 122(0x7a, float:1.71E-43)
            byte r3 = (byte) r3
            if (r1 <= r3) goto L1e
            goto L4b
        L1e:
            byte[] r5 = r5.getData$okio()
            int r4 = r5.length
            byte[] r5 = java.util.Arrays.copyOf(r5, r4)
            java.lang.String r4 = "java.util.Arrays.copyOf(this, size)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r4)
            int r4 = r0 + 1
            int r1 = r1 + (-32)
            byte r1 = (byte) r1
            r5[r0] = r1
        L33:
            int r0 = r5.length
            if (r4 >= r0) goto L45
            r0 = r5[r4]
            if (r0 < r2) goto L42
            if (r0 <= r3) goto L3d
            goto L42
        L3d:
            int r0 = r0 + (-32)
            byte r0 = (byte) r0
            r5[r4] = r0
        L42:
            int r4 = r4 + 1
            goto L33
        L45:
            okio.ByteString r0 = new okio.ByteString
            r0.<init>(r5)
            return r0
        L4b:
            int r0 = r0 + 1
            goto L6
        L4e:
            return r5
    }

    public static final byte[] commonToByteArray(okio.ByteString r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            byte[] r1 = r1.getData$okio()
            int r0 = r1.length
            byte[] r1 = java.util.Arrays.copyOf(r1, r0)
            java.lang.String r0 = "java.util.Arrays.copyOf(this, size)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    public static final okio.ByteString commonToByteString(byte[] r7, int r8, int r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            int r0 = r7.length
            long r1 = (long) r0
            long r3 = (long) r8
            long r5 = (long) r9
            okio._UtilKt.checkOffsetAndCount(r1, r3, r5)
            okio.ByteString r0 = new okio.ByteString
            int r9 = r9 + r8
            byte[] r7 = kotlin.collections.ArraysKt.copyOfRange(r7, r8, r9)
            r0.<init>(r7)
            return r0
    }

    public static final java.lang.String commonToString(okio.ByteString r21) {
            r0 = r21
            java.lang.String r1 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r1)
            byte[] r1 = r21.getData$okio()
            int r1 = r1.length
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L12
            r1 = r2
            goto L13
        L12:
            r1 = r3
        L13:
            if (r1 == 0) goto L18
            java.lang.String r0 = "[size=0]"
            return r0
        L18:
            byte[] r1 = r21.getData$okio()
            r4 = 64
            int r1 = access$codePointIndexToCharIndex(r1, r4)
            r5 = -1
            java.lang.String r6 = "…]"
            r7 = 93
            java.lang.String r8 = "[size="
            if (r1 != r5) goto Ld2
            byte[] r1 = r21.getData$okio()
            int r1 = r1.length
            if (r1 > r4) goto L4b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[hex="
            r1.append(r2)
            java.lang.String r0 = r21.hex()
            r1.append(r0)
            r1.append(r7)
            java.lang.String r0 = r1.toString()
            goto L9c
        L4b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r8)
            byte[] r5 = r21.getData$okio()
            int r5 = r5.length
            r1.append(r5)
            java.lang.String r5 = " hex="
            r1.append(r5)
            int r4 = okio._UtilKt.resolveDefaultParameter(r0, r4)
            byte[] r5 = r21.getData$okio()
            int r5 = r5.length
            if (r4 > r5) goto L6d
            r5 = r2
            goto L6e
        L6d:
            r5 = r3
        L6e:
            if (r5 == 0) goto Lab
            int r5 = r4 + 0
            if (r5 < 0) goto L75
            goto L76
        L75:
            r2 = r3
        L76:
            if (r2 == 0) goto L9d
            byte[] r2 = r21.getData$okio()
            int r2 = r2.length
            if (r4 != r2) goto L80
            goto L8e
        L80:
            okio.ByteString r2 = new okio.ByteString
            byte[] r0 = r21.getData$okio()
            byte[] r0 = kotlin.collections.ArraysKt.copyOfRange(r0, r3, r4)
            r2.<init>(r0)
            r0 = r2
        L8e:
            java.lang.String r0 = r0.hex()
            r1.append(r0)
            r1.append(r6)
            java.lang.String r0 = r1.toString()
        L9c:
            return r0
        L9d:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "endIndex < beginIndex"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
        Lab:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "endIndex > length("
            r1.append(r2)
            byte[] r0 = r21.getData$okio()
            int r0 = r0.length
            r1.append(r0)
            r0 = 41
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
        Ld2:
            java.lang.String r2 = r21.utf8()
            if (r2 == 0) goto L13d
            java.lang.String r9 = r2.substring(r3, r1)
            java.lang.String r3 = "(this as java.lang.Strin…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r9, r3)
            r12 = 0
            r13 = 4
            r14 = 0
            java.lang.String r10 = "\\"
            java.lang.String r11 = "\\\\"
            java.lang.String r15 = kotlin.text.StringsKt.replace$default(r9, r10, r11, r12, r13, r14)
            r18 = 0
            r19 = 4
            r20 = 0
            java.lang.String r16 = "\n"
            java.lang.String r17 = "\\n"
            java.lang.String r9 = kotlin.text.StringsKt.replace$default(r15, r16, r17, r18, r19, r20)
            java.lang.String r10 = "\r"
            java.lang.String r11 = "\\r"
            java.lang.String r3 = kotlin.text.StringsKt.replace$default(r9, r10, r11, r12, r13, r14)
            int r2 = r2.length()
            if (r1 >= r2) goto L128
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r8)
            byte[] r0 = r21.getData$okio()
            int r0 = r0.length
            r1.append(r0)
            java.lang.String r0 = " text="
            r1.append(r0)
            r1.append(r3)
            r1.append(r6)
            java.lang.String r0 = r1.toString()
            goto L13c
        L128:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[text="
            r0.append(r1)
            r0.append(r3)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
        L13c:
            return r0
        L13d:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "null cannot be cast to non-null type java.lang.String"
            r0.<init>(r1)
            throw r0
    }

    public static final java.lang.String commonUtf8(okio.ByteString r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = r1.getUtf8$okio()
            if (r0 != 0) goto L16
            byte[] r0 = r1.internalArray$okio()
            java.lang.String r0 = okio._JvmPlatformKt.toUtf8String(r0)
            r1.setUtf8$okio(r0)
        L16:
            return r0
    }

    public static final void commonWrite(okio.ByteString r1, okio.Buffer r2, int r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "buffer"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            byte[] r1 = r1.getData$okio()
            r2.write(r1, r3, r4)
            return
    }

    private static final int decodeHexDigit(char r4) {
            r0 = 48
            r1 = 1
            r2 = 0
            if (r0 > r4) goto Lc
            r3 = 57
            if (r4 > r3) goto Lc
            r3 = r1
            goto Ld
        Lc:
            r3 = r2
        Ld:
            if (r3 == 0) goto L11
            int r4 = r4 - r0
            goto L2f
        L11:
            r0 = 97
            if (r0 > r4) goto L1b
            r3 = 102(0x66, float:1.43E-43)
            if (r4 > r3) goto L1b
            r3 = r1
            goto L1c
        L1b:
            r3 = r2
        L1c:
            if (r3 == 0) goto L22
        L1e:
            int r4 = r4 - r0
            int r4 = r4 + 10
            goto L2f
        L22:
            r0 = 65
            if (r0 > r4) goto L2b
            r3 = 70
            if (r4 > r3) goto L2b
            goto L2c
        L2b:
            r1 = r2
        L2c:
            if (r1 == 0) goto L30
            goto L1e
        L2f:
            return r4
        L30:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            java.lang.String r1 = "Unexpected hex digit: "
            java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r4)
            r0.<init>(r4)
            throw r0
    }

    public static final char[] getHEX_DIGIT_CHARS() {
            char[] r0 = okio.internal._ByteStringKt.HEX_DIGIT_CHARS
            return r0
    }

    public static void getHEX_DIGIT_CHARS$annotations() {
            return
    }
}
