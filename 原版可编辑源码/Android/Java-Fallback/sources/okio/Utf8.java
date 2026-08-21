package okio;

@kotlin.Metadata(d1 = {"\u0000D\n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0010\u0005\n\u0000\n\u0002\u0010\f\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0012\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0002\u001a\u0011\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0001H\u0080\b\u001a\u0011\u0010\u000e\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\u0007H\u0080\b\u001a4\u0010\u0010\u001a\u00020\u0001*\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00012\u0006\u0010\u0013\u001a\u00020\u00012\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00160\u0015H\u0080\bø\u0001\u0000\u001a4\u0010\u0017\u001a\u00020\u0001*\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00012\u0006\u0010\u0013\u001a\u00020\u00012\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00160\u0015H\u0080\bø\u0001\u0000\u001a4\u0010\u0018\u001a\u00020\u0001*\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00012\u0006\u0010\u0013\u001a\u00020\u00012\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00160\u0015H\u0080\bø\u0001\u0000\u001a4\u0010\u0019\u001a\u00020\u0016*\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00012\u0006\u0010\u0013\u001a\u00020\u00012\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u00160\u0015H\u0080\bø\u0001\u0000\u001a4\u0010\u001a\u001a\u00020\u0016*\u00020\u001b2\u0006\u0010\u0012\u001a\u00020\u00012\u0006\u0010\u0013\u001a\u00020\u00012\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00160\u0015H\u0080\bø\u0001\u0000\u001a4\u0010\u001c\u001a\u00020\u0016*\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00012\u0006\u0010\u0013\u001a\u00020\u00012\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00160\u0015H\u0080\bø\u0001\u0000\u001a%\u0010\u001d\u001a\u00020\u001e*\u00020\u001b2\b\b\u0002\u0010\u0012\u001a\u00020\u00012\b\b\u0002\u0010\u0013\u001a\u00020\u0001H\u0007¢\u0006\u0002\b\u001f\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0003\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0004\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0005\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0006\u001a\u00020\u0007X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\b\u001a\u00020\tX\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\n\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006 "}, d2 = {"HIGH_SURROGATE_HEADER", "", "LOG_SURROGATE_HEADER", "MASK_2BYTES", "MASK_3BYTES", "MASK_4BYTES", "REPLACEMENT_BYTE", "", "REPLACEMENT_CHARACTER", "", "REPLACEMENT_CODE_POINT", "isIsoControl", "", "codePoint", "isUtf8Continuation", "byte", "process2Utf8Bytes", "", "beginIndex", "endIndex", "yield", "Lkotlin/Function1;", "", "process3Utf8Bytes", "process4Utf8Bytes", "processUtf16Chars", "processUtf8Bytes", "", "processUtf8CodePoints", "utf8Size", "", "size", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class Utf8 {
    public static final int HIGH_SURROGATE_HEADER = 55232;
    public static final int LOG_SURROGATE_HEADER = 56320;
    public static final int MASK_2BYTES = 3968;
    public static final int MASK_3BYTES = -123008;
    public static final int MASK_4BYTES = 3678080;
    public static final byte REPLACEMENT_BYTE = 63;
    public static final char REPLACEMENT_CHARACTER = 65533;
    public static final int REPLACEMENT_CODE_POINT = 65533;

    public static final boolean isIsoControl(int r3) {
            r0 = 1
            r1 = 0
            if (r3 < 0) goto La
            r2 = 31
            if (r3 > r2) goto La
            r2 = r0
            goto Lb
        La:
            r2 = r1
        Lb:
            if (r2 != 0) goto L1c
            r2 = 127(0x7f, float:1.78E-43)
            if (r2 > r3) goto L17
            r2 = 159(0x9f, float:2.23E-43)
            if (r3 > r2) goto L17
            r3 = r0
            goto L18
        L17:
            r3 = r1
        L18:
            if (r3 == 0) goto L1b
            goto L1c
        L1b:
            r0 = r1
        L1c:
            return r0
    }

    public static final boolean isUtf8Continuation(byte r1) {
            r1 = r1 & 192(0xc0, float:2.69E-43)
            r0 = 128(0x80, float:1.8E-43)
            if (r1 != r0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    public static final int process2Utf8Bytes(byte[] r3, int r4, int r5, kotlin.jvm.functions.Function1<? super java.lang.Integer, kotlin.Unit> r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "yield"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            int r0 = r4 + 1
            r1 = 65533(0xfffd, float:9.1831E-41)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            if (r5 > r0) goto L1a
            r6.invoke(r1)
            return r2
        L1a:
            r4 = r3[r4]
            r3 = r3[r0]
            r5 = r3 & 192(0xc0, float:2.69E-43)
            r0 = 128(0x80, float:1.8E-43)
            if (r5 != r0) goto L26
            r5 = r2
            goto L27
        L26:
            r5 = 0
        L27:
            if (r5 != 0) goto L2d
            r6.invoke(r1)
            return r2
        L2d:
            r3 = r3 ^ 3968(0xf80, float:5.56E-42)
            int r4 = r4 << 6
            r3 = r3 ^ r4
            if (r3 >= r0) goto L38
            r6.invoke(r1)
            goto L3f
        L38:
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r6.invoke(r3)
        L3f:
            r3 = 2
            return r3
    }

    public static final int process3Utf8Bytes(byte[] r7, int r8, int r9, kotlin.jvm.functions.Function1<? super java.lang.Integer, kotlin.Unit> r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "yield"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            int r0 = r8 + 2
            r1 = 128(0x80, float:1.8E-43)
            r2 = 2
            r3 = 0
            r4 = 65533(0xfffd, float:9.1831E-41)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r5 = 1
            if (r9 > r0) goto L2c
            r10.invoke(r4)
            int r8 = r8 + r5
            if (r9 <= r8) goto L2b
            r7 = r7[r8]
            r7 = r7 & 192(0xc0, float:2.69E-43)
            if (r7 != r1) goto L27
            r3 = r5
        L27:
            if (r3 != 0) goto L2a
            goto L2b
        L2a:
            return r2
        L2b:
            return r5
        L2c:
            r9 = r7[r8]
            int r8 = r8 + r5
            r8 = r7[r8]
            r6 = r8 & 192(0xc0, float:2.69E-43)
            if (r6 != r1) goto L37
            r6 = r5
            goto L38
        L37:
            r6 = r3
        L38:
            if (r6 != 0) goto L3e
            r10.invoke(r4)
            return r5
        L3e:
            r7 = r7[r0]
            r0 = r7 & 192(0xc0, float:2.69E-43)
            if (r0 != r1) goto L46
            r0 = r5
            goto L47
        L46:
            r0 = r3
        L47:
            if (r0 != 0) goto L4d
            r10.invoke(r4)
            return r2
        L4d:
            r0 = -123008(0xfffffffffffe1f80, float:NaN)
            r7 = r7 ^ r0
            int r8 = r8 << 6
            r7 = r7 ^ r8
            int r8 = r9 << 12
            r7 = r7 ^ r8
            r8 = 2048(0x800, float:2.87E-42)
            if (r7 >= r8) goto L5f
            r10.invoke(r4)
            goto L77
        L5f:
            r8 = 55296(0xd800, float:7.7486E-41)
            if (r8 > r7) goto L6a
            r8 = 57343(0xdfff, float:8.0355E-41)
            if (r7 > r8) goto L6a
            r3 = r5
        L6a:
            if (r3 == 0) goto L70
            r10.invoke(r4)
            goto L77
        L70:
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r10.invoke(r7)
        L77:
            r7 = 3
            return r7
    }

    public static final int process4Utf8Bytes(byte[] r9, int r10, int r11, kotlin.jvm.functions.Function1<? super java.lang.Integer, kotlin.Unit> r12) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.lang.String r0 = "yield"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            int r0 = r10 + 3
            r1 = 3
            r2 = 2
            r3 = 128(0x80, float:1.8E-43)
            r4 = 0
            r5 = 65533(0xfffd, float:9.1831E-41)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r6 = 1
            if (r11 > r0) goto L3e
            r12.invoke(r5)
            int r12 = r10 + 1
            if (r11 <= r12) goto L3d
            r12 = r9[r12]
            r12 = r12 & 192(0xc0, float:2.69E-43)
            if (r12 != r3) goto L2a
            r12 = r6
            goto L2b
        L2a:
            r12 = r4
        L2b:
            if (r12 != 0) goto L2e
            goto L3d
        L2e:
            int r10 = r10 + r2
            if (r11 <= r10) goto L3c
            r9 = r9[r10]
            r9 = r9 & 192(0xc0, float:2.69E-43)
            if (r9 != r3) goto L38
            r4 = r6
        L38:
            if (r4 != 0) goto L3b
            goto L3c
        L3b:
            return r1
        L3c:
            return r2
        L3d:
            return r6
        L3e:
            r11 = r9[r10]
            int r7 = r10 + 1
            r7 = r9[r7]
            r8 = r7 & 192(0xc0, float:2.69E-43)
            if (r8 != r3) goto L4a
            r8 = r6
            goto L4b
        L4a:
            r8 = r4
        L4b:
            if (r8 != 0) goto L51
            r12.invoke(r5)
            return r6
        L51:
            int r10 = r10 + r2
            r10 = r9[r10]
            r8 = r10 & 192(0xc0, float:2.69E-43)
            if (r8 != r3) goto L5a
            r8 = r6
            goto L5b
        L5a:
            r8 = r4
        L5b:
            if (r8 != 0) goto L61
            r12.invoke(r5)
            return r2
        L61:
            r9 = r9[r0]
            r0 = r9 & 192(0xc0, float:2.69E-43)
            if (r0 != r3) goto L69
            r0 = r6
            goto L6a
        L69:
            r0 = r4
        L6a:
            if (r0 != 0) goto L70
            r12.invoke(r5)
            return r1
        L70:
            r0 = 3678080(0x381f80, float:5.154088E-39)
            r9 = r9 ^ r0
            int r10 = r10 << 6
            r9 = r9 ^ r10
            int r10 = r7 << 12
            r9 = r9 ^ r10
            int r10 = r11 << 18
            r9 = r9 ^ r10
            r10 = 1114111(0x10ffff, float:1.561202E-39)
            if (r9 <= r10) goto L86
            r12.invoke(r5)
            goto La6
        L86:
            r10 = 55296(0xd800, float:7.7486E-41)
            if (r10 > r9) goto L91
            r10 = 57343(0xdfff, float:8.0355E-41)
            if (r9 > r10) goto L91
            r4 = r6
        L91:
            if (r4 == 0) goto L97
            r12.invoke(r5)
            goto La6
        L97:
            r10 = 65536(0x10000, float:9.1835E-41)
            if (r9 >= r10) goto L9f
            r12.invoke(r5)
            goto La6
        L9f:
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            r12.invoke(r9)
        La6:
            r9 = 4
            return r9
    }

    public static final void processUtf16Chars(byte[] r16, int r17, int r18, kotlin.jvm.functions.Function1<? super java.lang.Character, kotlin.Unit> r19) {
            r0 = r16
            r1 = r18
            r2 = r19
            java.lang.String r3 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r3)
            java.lang.String r3 = "yield"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r3)
            r3 = r17
        L12:
            if (r3 >= r1) goto L1be
            r4 = r0[r3]
            if (r4 < 0) goto L36
            char r4 = (char) r4
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            r2.invoke(r4)
            int r3 = r3 + 1
        L22:
            if (r3 >= r1) goto L12
            r4 = r0[r3]
            if (r4 < 0) goto L12
            int r4 = r3 + 1
            r3 = r0[r3]
            char r3 = (char) r3
            java.lang.Character r3 = java.lang.Character.valueOf(r3)
            r2.invoke(r3)
            r3 = r4
            goto L22
        L36:
            int r5 = r4 >> 5
            r6 = -2
            r8 = 128(0x80, float:1.8E-43)
            r9 = 0
            r10 = 65533(0xfffd, float:9.1831E-41)
            r11 = 1
            if (r5 != r6) goto L74
            int r4 = r3 + 1
            if (r1 > r4) goto L52
        L46:
            char r4 = (char) r10
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
        L50:
            r7 = r11
            goto L72
        L52:
            r5 = r0[r3]
            r4 = r0[r4]
            r6 = r4 & 192(0xc0, float:2.69E-43)
            if (r6 != r8) goto L5b
            r9 = r11
        L5b:
            if (r9 != 0) goto L5e
            goto L46
        L5e:
            r4 = r4 ^ 3968(0xf80, float:5.56E-42)
            int r5 = r5 << 6
            r4 = r4 ^ r5
            if (r4 >= r8) goto L67
            char r4 = (char) r10
            goto L68
        L67:
            char r4 = (char) r4
        L68:
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
        L71:
            r7 = 2
        L72:
            int r3 = r3 + r7
            goto L12
        L74:
            int r5 = r4 >> 4
            r12 = 57343(0xdfff, float:8.0355E-41)
            r13 = 55296(0xd800, float:7.7486E-41)
            r14 = 3
            if (r5 != r6) goto Lf0
            int r4 = r3 + 2
            if (r1 > r4) goto L9b
            char r4 = (char) r10
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            int r4 = r3 + 1
            if (r1 <= r4) goto L50
            r4 = r0[r4]
            r4 = r4 & 192(0xc0, float:2.69E-43)
            if (r4 != r8) goto L98
            r9 = r11
        L98:
            if (r9 != 0) goto L71
            goto L50
        L9b:
            r5 = r0[r3]
            int r6 = r3 + 1
            r6 = r0[r6]
            r15 = r6 & 192(0xc0, float:2.69E-43)
            if (r15 != r8) goto La7
            r15 = r11
            goto La8
        La7:
            r15 = r9
        La8:
            if (r15 != 0) goto Lb5
            char r4 = (char) r10
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L50
        Lb5:
            r4 = r0[r4]
            r15 = r4 & 192(0xc0, float:2.69E-43)
            if (r15 != r8) goto Lbd
            r8 = r11
            goto Lbe
        Lbd:
            r8 = r9
        Lbe:
            if (r8 != 0) goto Lcb
            char r4 = (char) r10
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L71
        Lcb:
            r7 = -123008(0xfffffffffffe1f80, float:NaN)
            r4 = r4 ^ r7
            int r6 = r6 << 6
            r4 = r4 ^ r6
            int r5 = r5 << 12
            r4 = r4 ^ r5
            r5 = 2048(0x800, float:2.87E-42)
            if (r4 >= r5) goto Le4
        Ld9:
            char r4 = (char) r10
        Lda:
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto Lee
        Le4:
            if (r13 > r4) goto Le9
            if (r4 > r12) goto Le9
            r9 = r11
        Le9:
            if (r9 == 0) goto Lec
            goto Ld9
        Lec:
            char r4 = (char) r4
            goto Lda
        Lee:
            r7 = r14
            goto L72
        Lf0:
            int r4 = r4 >> 3
            if (r4 != r6) goto L1b3
            int r4 = r3 + 3
            if (r1 > r4) goto L121
            java.lang.Character r4 = java.lang.Character.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            int r4 = r3 + 1
            if (r1 <= r4) goto L50
            r4 = r0[r4]
            r4 = r4 & 192(0xc0, float:2.69E-43)
            if (r4 != r8) goto L10d
            r4 = r11
            goto L10e
        L10d:
            r4 = r9
        L10e:
            if (r4 != 0) goto L112
            goto L50
        L112:
            int r4 = r3 + 2
            if (r1 <= r4) goto L71
            r4 = r0[r4]
            r4 = r4 & 192(0xc0, float:2.69E-43)
            if (r4 != r8) goto L11d
            r9 = r11
        L11d:
            if (r9 != 0) goto Lee
            goto L71
        L121:
            r5 = r0[r3]
            int r6 = r3 + 1
            r6 = r0[r6]
            r15 = r6 & 192(0xc0, float:2.69E-43)
            if (r15 != r8) goto L12d
            r15 = r11
            goto L12e
        L12d:
            r15 = r9
        L12e:
            if (r15 != 0) goto L13b
            java.lang.Character r4 = java.lang.Character.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L50
        L13b:
            int r15 = r3 + 2
            r15 = r0[r15]
            r7 = r15 & 192(0xc0, float:2.69E-43)
            if (r7 != r8) goto L145
            r7 = r11
            goto L146
        L145:
            r7 = r9
        L146:
            if (r7 != 0) goto L153
            java.lang.Character r4 = java.lang.Character.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L71
        L153:
            r4 = r0[r4]
            r7 = r4 & 192(0xc0, float:2.69E-43)
            if (r7 != r8) goto L15b
            r7 = r11
            goto L15c
        L15b:
            r7 = r9
        L15c:
            if (r7 != 0) goto L168
            java.lang.Character r4 = java.lang.Character.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto Lee
        L168:
            r7 = 3678080(0x381f80, float:5.154088E-39)
            r4 = r4 ^ r7
            int r7 = r15 << 6
            r4 = r4 ^ r7
            int r6 = r6 << 12
            r4 = r4 ^ r6
            int r5 = r5 << 18
            r4 = r4 ^ r5
            r5 = 1114111(0x10ffff, float:1.561202E-39)
            if (r4 <= r5) goto L184
        L17a:
            java.lang.Character r4 = java.lang.Character.valueOf(r10)
            r2.invoke(r4)
        L181:
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L1b0
        L184:
            if (r13 > r4) goto L189
            if (r4 > r12) goto L189
            r9 = r11
        L189:
            if (r9 == 0) goto L18c
            goto L17a
        L18c:
            r5 = 65536(0x10000, float:9.1835E-41)
            if (r4 >= r5) goto L191
            goto L17a
        L191:
            if (r4 == r10) goto L17a
            int r5 = r4 >>> 10
            r6 = 55232(0xd7c0, float:7.7397E-41)
            int r5 = r5 + r6
            char r5 = (char) r5
            java.lang.Character r5 = java.lang.Character.valueOf(r5)
            r2.invoke(r5)
            r4 = r4 & 1023(0x3ff, float:1.434E-42)
            r5 = 56320(0xdc00, float:7.8921E-41)
            int r4 = r4 + r5
            char r4 = (char) r4
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            r2.invoke(r4)
            goto L181
        L1b0:
            r7 = 4
            goto L72
        L1b3:
            java.lang.Character r4 = java.lang.Character.valueOf(r10)
            r2.invoke(r4)
            int r3 = r3 + 1
            goto L12
        L1be:
            return
    }

    public static final void processUtf8Bytes(java.lang.String r9, int r10, int r11, kotlin.jvm.functions.Function1<? super java.lang.Byte, kotlin.Unit> r12) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.lang.String r0 = "yield"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
        La:
            if (r10 >= r11) goto Lf9
            char r0 = r9.charAt(r10)
            r1 = 128(0x80, float:1.8E-43)
            int r2 = kotlin.jvm.internal.Intrinsics.compare(r0, r1)
            if (r2 >= 0) goto L3e
            byte r0 = (byte) r0
            java.lang.Byte r0 = java.lang.Byte.valueOf(r0)
            r12.invoke(r0)
            int r10 = r10 + 1
        L22:
            if (r10 >= r11) goto La
            char r0 = r9.charAt(r10)
            int r0 = kotlin.jvm.internal.Intrinsics.compare(r0, r1)
            if (r0 >= 0) goto La
            int r0 = r10 + 1
            char r10 = r9.charAt(r10)
            byte r10 = (byte) r10
            java.lang.Byte r10 = java.lang.Byte.valueOf(r10)
            r12.invoke(r10)
            r10 = r0
            goto L22
        L3e:
            r2 = 2048(0x800, float:2.87E-42)
            int r2 = kotlin.jvm.internal.Intrinsics.compare(r0, r2)
            if (r2 >= 0) goto L60
            int r2 = r0 >> 6
            r2 = r2 | 192(0xc0, float:2.69E-43)
            byte r2 = (byte) r2
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r12.invoke(r2)
            r0 = r0 & 63
            r0 = r0 | r1
            byte r0 = (byte) r0
            java.lang.Byte r0 = java.lang.Byte.valueOf(r0)
            r12.invoke(r0)
        L5d:
            int r10 = r10 + 1
            goto La
        L60:
            r2 = 55296(0xd800, float:7.7486E-41)
            r3 = 57343(0xdfff, float:8.0355E-41)
            r4 = 0
            r5 = 1
            if (r2 > r0) goto L6e
            if (r0 > r3) goto L6e
            r2 = r5
            goto L6f
        L6e:
            r2 = r4
        L6f:
            r6 = 63
            if (r2 != 0) goto L97
            int r2 = r0 >> 12
            r2 = r2 | 224(0xe0, float:3.14E-43)
            byte r2 = (byte) r2
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r12.invoke(r2)
            int r2 = r0 >> 6
            r2 = r2 & r6
            r2 = r2 | r1
            byte r2 = (byte) r2
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r12.invoke(r2)
            r0 = r0 & 63
            r0 = r0 | r1
            byte r0 = (byte) r0
            java.lang.Byte r0 = java.lang.Byte.valueOf(r0)
            r12.invoke(r0)
            goto L5d
        L97:
            r2 = 56319(0xdbff, float:7.892E-41)
            int r2 = kotlin.jvm.internal.Intrinsics.compare(r0, r2)
            if (r2 > 0) goto Lf0
            int r2 = r10 + 1
            if (r11 <= r2) goto Lf0
            char r7 = r9.charAt(r2)
            r8 = 56320(0xdc00, float:7.8921E-41)
            if (r8 > r7) goto Lb0
            if (r7 > r3) goto Lb0
            r4 = r5
        Lb0:
            if (r4 != 0) goto Lb3
            goto Lf0
        Lb3:
            int r0 = r0 << 10
            char r2 = r9.charAt(r2)
            int r0 = r0 + r2
            r2 = -56613888(0xfffffffffca02400, float:-6.651981E36)
            int r0 = r0 + r2
            int r2 = r0 >> 18
            r2 = r2 | 240(0xf0, float:3.36E-43)
            byte r2 = (byte) r2
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r12.invoke(r2)
            int r2 = r0 >> 12
            r2 = r2 & r6
            r2 = r2 | r1
            byte r2 = (byte) r2
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r12.invoke(r2)
            int r2 = r0 >> 6
            r2 = r2 & r6
            r2 = r2 | r1
            byte r2 = (byte) r2
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r12.invoke(r2)
            r0 = r0 & r6
            r0 = r0 | r1
            byte r0 = (byte) r0
            java.lang.Byte r0 = java.lang.Byte.valueOf(r0)
            r12.invoke(r0)
            int r10 = r10 + 2
            goto La
        Lf0:
            java.lang.Byte r0 = java.lang.Byte.valueOf(r6)
            r12.invoke(r0)
            goto L5d
        Lf9:
            return
    }

    public static final void processUtf8CodePoints(byte[] r16, int r17, int r18, kotlin.jvm.functions.Function1<? super java.lang.Integer, kotlin.Unit> r19) {
            r0 = r16
            r1 = r18
            r2 = r19
            java.lang.String r3 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r3)
            java.lang.String r3 = "yield"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r3)
            r3 = r17
        L12:
            if (r3 >= r1) goto L1a2
            r4 = r0[r3]
            if (r4 < 0) goto L34
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r2.invoke(r4)
            int r3 = r3 + 1
        L21:
            if (r3 >= r1) goto L12
            r4 = r0[r3]
            if (r4 < 0) goto L12
            int r4 = r3 + 1
            r3 = r0[r3]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2.invoke(r3)
            r3 = r4
            goto L21
        L34:
            int r5 = r4 >> 5
            r6 = -2
            r8 = 128(0x80, float:1.8E-43)
            r9 = 0
            r10 = 65533(0xfffd, float:9.1831E-41)
            r11 = 1
            if (r5 != r6) goto L73
            int r4 = r3 + 1
            if (r1 > r4) goto L4f
        L44:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
        L4d:
            r7 = r11
            goto L71
        L4f:
            r5 = r0[r3]
            r4 = r0[r4]
            r6 = r4 & 192(0xc0, float:2.69E-43)
            if (r6 != r8) goto L58
            r9 = r11
        L58:
            if (r9 != 0) goto L5b
            goto L44
        L5b:
            r4 = r4 ^ 3968(0xf80, float:5.56E-42)
            int r5 = r5 << 6
            r4 = r4 ^ r5
            if (r4 >= r8) goto L67
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            goto L6b
        L67:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
        L6b:
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
        L70:
            r7 = 2
        L71:
            int r3 = r3 + r7
            goto L12
        L73:
            int r5 = r4 >> 4
            r12 = 57343(0xdfff, float:8.0355E-41)
            r13 = 55296(0xd800, float:7.7486E-41)
            r14 = 3
            if (r5 != r6) goto Lee
            int r4 = r3 + 2
            if (r1 > r4) goto L99
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            int r4 = r3 + 1
            if (r1 <= r4) goto L4d
            r4 = r0[r4]
            r4 = r4 & 192(0xc0, float:2.69E-43)
            if (r4 != r8) goto L96
            r9 = r11
        L96:
            if (r9 != 0) goto L70
            goto L4d
        L99:
            r5 = r0[r3]
            int r6 = r3 + 1
            r6 = r0[r6]
            r15 = r6 & 192(0xc0, float:2.69E-43)
            if (r15 != r8) goto La5
            r15 = r11
            goto La6
        La5:
            r15 = r9
        La6:
            if (r15 != 0) goto Lb2
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L4d
        Lb2:
            r4 = r0[r4]
            r15 = r4 & 192(0xc0, float:2.69E-43)
            if (r15 != r8) goto Lba
            r8 = r11
            goto Lbb
        Lba:
            r8 = r9
        Lbb:
            if (r8 != 0) goto Lc7
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L70
        Lc7:
            r7 = -123008(0xfffffffffffe1f80, float:NaN)
            r4 = r4 ^ r7
            int r6 = r6 << 6
            r4 = r4 ^ r6
            int r5 = r5 << 12
            r4 = r4 ^ r5
            r5 = 2048(0x800, float:2.87E-42)
            if (r4 >= r5) goto Ldf
        Ld5:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
        Ld9:
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto Lec
        Ldf:
            if (r13 > r4) goto Le4
            if (r4 > r12) goto Le4
            r9 = r11
        Le4:
            if (r9 == 0) goto Le7
            goto Ld5
        Le7:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            goto Ld9
        Lec:
            r7 = r14
            goto L71
        Lee:
            int r4 = r4 >> 3
            if (r4 != r6) goto L197
            int r4 = r3 + 3
            if (r1 > r4) goto L11f
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            int r4 = r3 + 1
            if (r1 <= r4) goto L4d
            r4 = r0[r4]
            r4 = r4 & 192(0xc0, float:2.69E-43)
            if (r4 != r8) goto L10b
            r4 = r11
            goto L10c
        L10b:
            r4 = r9
        L10c:
            if (r4 != 0) goto L110
            goto L4d
        L110:
            int r4 = r3 + 2
            if (r1 <= r4) goto L70
            r4 = r0[r4]
            r4 = r4 & 192(0xc0, float:2.69E-43)
            if (r4 != r8) goto L11b
            r9 = r11
        L11b:
            if (r9 != 0) goto Lec
            goto L70
        L11f:
            r5 = r0[r3]
            int r6 = r3 + 1
            r6 = r0[r6]
            r15 = r6 & 192(0xc0, float:2.69E-43)
            if (r15 != r8) goto L12b
            r15 = r11
            goto L12c
        L12b:
            r15 = r9
        L12c:
            if (r15 != 0) goto L139
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L4d
        L139:
            int r15 = r3 + 2
            r15 = r0[r15]
            r7 = r15 & 192(0xc0, float:2.69E-43)
            if (r7 != r8) goto L143
            r7 = r11
            goto L144
        L143:
            r7 = r9
        L144:
            if (r7 != 0) goto L151
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L70
        L151:
            r4 = r0[r4]
            r7 = r4 & 192(0xc0, float:2.69E-43)
            if (r7 != r8) goto L159
            r7 = r11
            goto L15a
        L159:
            r7 = r9
        L15a:
            if (r7 != 0) goto L166
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto Lec
        L166:
            r7 = 3678080(0x381f80, float:5.154088E-39)
            r4 = r4 ^ r7
            int r7 = r15 << 6
            r4 = r4 ^ r7
            int r6 = r6 << 12
            r4 = r4 ^ r6
            int r5 = r5 << 18
            r4 = r4 ^ r5
            r5 = 1114111(0x10ffff, float:1.561202E-39)
            if (r4 <= r5) goto L182
        L178:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
        L17c:
            r2.invoke(r4)
            kotlin.Unit r4 = kotlin.Unit.INSTANCE
            goto L194
        L182:
            if (r13 > r4) goto L187
            if (r4 > r12) goto L187
            r9 = r11
        L187:
            if (r9 == 0) goto L18a
            goto L178
        L18a:
            r5 = 65536(0x10000, float:9.1835E-41)
            if (r4 >= r5) goto L18f
            goto L178
        L18f:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            goto L17c
        L194:
            r7 = 4
            goto L71
        L197:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)
            r2.invoke(r4)
            int r3 = r3 + 1
            goto L12
        L1a2:
            return
    }

    public static final long size(java.lang.String r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            r1 = 3
            r2 = 0
            long r0 = size$default(r3, r0, r0, r1, r2)
            return r0
    }

    public static final long size(java.lang.String r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            r1 = 2
            r2 = 0
            long r3 = size$default(r3, r4, r0, r1, r2)
            return r3
    }

    public static final long size(java.lang.String r10, int r11, int r12) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            r0 = 0
            r1 = 1
            if (r11 < 0) goto Lb
            r2 = r1
            goto Lc
        Lb:
            r2 = r0
        Lc:
            if (r2 == 0) goto Lb5
            if (r12 < r11) goto L12
            r2 = r1
            goto L13
        L12:
            r2 = r0
        L13:
            if (r2 == 0) goto L90
            int r2 = r10.length()
            if (r12 > r2) goto L1c
            goto L1d
        L1c:
            r1 = r0
        L1d:
            if (r1 == 0) goto L67
            r1 = 0
        L21:
            if (r11 >= r12) goto L66
            char r3 = r10.charAt(r11)
            r4 = 128(0x80, float:1.8E-43)
            r5 = 1
            if (r3 >= r4) goto L31
            long r1 = r1 + r5
        L2e:
            int r11 = r11 + 1
            goto L21
        L31:
            r4 = 2048(0x800, float:2.87E-42)
            if (r3 >= r4) goto L39
            r3 = 2
        L36:
            long r3 = (long) r3
            long r1 = r1 + r3
            goto L2e
        L39:
            r4 = 55296(0xd800, float:7.7486E-41)
            if (r3 < r4) goto L64
            r4 = 57343(0xdfff, float:8.0355E-41)
            if (r3 <= r4) goto L44
            goto L64
        L44:
            int r7 = r11 + 1
            if (r7 >= r12) goto L4d
            char r8 = r10.charAt(r7)
            goto L4e
        L4d:
            r8 = r0
        L4e:
            r9 = 56319(0xdbff, float:7.892E-41)
            if (r3 > r9) goto L61
            r3 = 56320(0xdc00, float:7.8921E-41)
            if (r8 < r3) goto L61
            if (r8 <= r4) goto L5b
            goto L61
        L5b:
            r3 = 4
            long r3 = (long) r3
            long r1 = r1 + r3
            int r11 = r11 + 2
            goto L21
        L61:
            long r1 = r1 + r5
            r11 = r7
            goto L21
        L64:
            r3 = 3
            goto L36
        L66:
            return r1
        L67:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "endIndex > string.length: "
            r11.append(r0)
            r11.append(r12)
            java.lang.String r12 = " > "
            r11.append(r12)
            int r10 = r10.length()
            r11.append(r10)
            java.lang.String r10 = r11.toString()
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r10 = r10.toString()
            r11.<init>(r10)
            java.lang.Throwable r11 = (java.lang.Throwable) r11
            throw r11
        L90:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "endIndex < beginIndex: "
            r10.append(r0)
            r10.append(r12)
            java.lang.String r12 = " < "
            r10.append(r12)
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r10 = r10.toString()
            r11.<init>(r10)
            java.lang.Throwable r11 = (java.lang.Throwable) r11
            throw r11
        Lb5:
            java.lang.Integer r10 = java.lang.Integer.valueOf(r11)
            java.lang.String r11 = "beginIndex < 0: "
            java.lang.String r10 = kotlin.jvm.internal.Intrinsics.stringPlus(r11, r10)
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r10 = r10.toString()
            r11.<init>(r10)
            java.lang.Throwable r11 = (java.lang.Throwable) r11
            throw r11
    }

    public static long size$default(java.lang.String r0, int r1, int r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L5
            r1 = 0
        L5:
            r3 = r3 & 2
            if (r3 == 0) goto Ld
            int r2 = r0.length()
        Ld:
            long r0 = size(r0, r1, r2)
            return r0
    }
}
