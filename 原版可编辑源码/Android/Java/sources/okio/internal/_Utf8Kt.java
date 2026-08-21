package okio.internal;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.ss.android.socialbase.downloader.constants.DownloadErrorCode;
import java.util.Arrays;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import okio.Utf8;

@Metadata(d1 = {"\u0000\u0016\n\u0000\n\u0002\u0010\u0012\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\u001a\n\u0010\u0000\u001a\u00020\u0001*\u00020\u0002\u001a\u001e\u0010\u0003\u001a\u00020\u0002*\u00020\u00012\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0005¨\u0006\u0007"}, d2 = {"commonAsUtf8ToByteArray", "", "", "commonToUtf8String", "beginIndex", "", "endIndex", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _Utf8Kt {
    public static String commonToUtf8String$default(byte[] bArr, int i, int i2, int i3, Object obj) {
        if ((i3 & 1) != 0) {
            i = 0;
        }
        if ((i3 & 2) != 0) {
            i2 = bArr.length;
        }
        return commonToUtf8String(bArr, i, i2);
    }

    /* JADX WARN: Code restructure failed: missing block: B:49:0x009d, code lost:
    
        if (((r16[r5] & 192) == 128) == false) goto L23;
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x0123, code lost:
    
        if (((r16[r5] & 192) == 128) == false) goto L97;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final String commonToUtf8String(byte[] bArr, int i, int i2) {
        int i3;
        int i4;
        int i5;
        int i6;
        int i7;
        int i8 = i;
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        if (i8 < 0 || i2 > bArr.length || i8 > i2) {
            throw new ArrayIndexOutOfBoundsException("size=" + bArr.length + " beginIndex=" + i8 + " endIndex=" + i2);
        }
        char[] cArr = new char[i2 - i8];
        int i9 = 0;
        while (i8 < i2) {
            byte b = bArr[i8];
            if (b >= 0) {
                int i10 = i9 + 1;
                cArr[i9] = (char) b;
                i8++;
                while (true) {
                    i9 = i10;
                    if (i8 >= i2 || bArr[i8] < 0) {
                        break;
                    }
                    i10 = i9 + 1;
                    cArr[i9] = (char) bArr[i8];
                    i8++;
                }
            } else {
                if ((b >> 5) == -2) {
                    int i11 = i8 + 1;
                    if (i2 <= i11) {
                        i3 = i9 + 1;
                        cArr[i9] = (char) Utf8.REPLACEMENT_CODE_POINT;
                    } else {
                        byte b2 = bArr[i8];
                        byte b3 = bArr[i11];
                        if ((b3 & 192) == 128) {
                            int i12 = (b3 ^ ByteCompanionObject.MIN_VALUE) ^ (b2 << 6);
                            if (i12 < 128) {
                                i3 = i9 + 1;
                                cArr[i9] = (char) Utf8.REPLACEMENT_CODE_POINT;
                            } else {
                                i3 = i9 + 1;
                                cArr[i9] = (char) i12;
                            }
                            Unit unit = Unit.INSTANCE;
                            i9 = i3;
                            i4 = 2;
                        } else {
                            i3 = i9 + 1;
                            cArr[i9] = (char) Utf8.REPLACEMENT_CODE_POINT;
                        }
                    }
                    Unit unit2 = Unit.INSTANCE;
                    i9 = i3;
                    i4 = 1;
                } else {
                    if ((b >> 4) == -2) {
                        int i13 = i8 + 2;
                        if (i2 <= i13) {
                            i3 = i9 + 1;
                            cArr[i9] = (char) Utf8.REPLACEMENT_CODE_POINT;
                            Unit unit3 = Unit.INSTANCE;
                            int i14 = i8 + 1;
                            if (i2 > i14) {
                            }
                            i9 = i3;
                            i4 = 1;
                        } else {
                            byte b4 = bArr[i8];
                            byte b5 = bArr[i8 + 1];
                            if ((b5 & 192) == 128) {
                                byte b6 = bArr[i13];
                                if ((b6 & 192) == 128) {
                                    int i15 = ((b6 ^ ByteCompanionObject.MIN_VALUE) ^ (b5 << 6)) ^ (b4 << 12);
                                    if (i15 < 2048) {
                                        i5 = i9 + 1;
                                        cArr[i9] = (char) Utf8.REPLACEMENT_CODE_POINT;
                                    } else {
                                        if (55296 <= i15 && i15 <= 57343) {
                                            i5 = i9 + 1;
                                            cArr[i9] = (char) Utf8.REPLACEMENT_CODE_POINT;
                                        } else {
                                            i5 = i9 + 1;
                                            cArr[i9] = (char) i15;
                                        }
                                    }
                                    Unit unit4 = Unit.INSTANCE;
                                    i9 = i5;
                                } else {
                                    i3 = i9 + 1;
                                    cArr[i9] = (char) Utf8.REPLACEMENT_CODE_POINT;
                                    Unit unit5 = Unit.INSTANCE;
                                    i9 = i3;
                                    i4 = 2;
                                }
                            } else {
                                i3 = i9 + 1;
                                cArr[i9] = (char) Utf8.REPLACEMENT_CODE_POINT;
                                Unit unit6 = Unit.INSTANCE;
                                i9 = i3;
                                i4 = 1;
                            }
                        }
                    } else if ((b >> 3) == -2) {
                        int i16 = i8 + 3;
                        if (i2 <= i16) {
                            i7 = i9 + 1;
                            cArr[i9] = Utf8.REPLACEMENT_CHARACTER;
                            Unit unit7 = Unit.INSTANCE;
                            int i17 = i8 + 1;
                            if (i2 > i17) {
                                if ((bArr[i17] & 192) == 128) {
                                    int i18 = i8 + 2;
                                    if (i2 > i18) {
                                    }
                                    i9 = i7;
                                    i4 = 2;
                                }
                            }
                            i9 = i7;
                            i4 = 1;
                        } else {
                            byte b7 = bArr[i8];
                            byte b8 = bArr[i8 + 1];
                            if ((b8 & 192) == 128) {
                                byte b9 = bArr[i8 + 2];
                                if ((b9 & 192) == 128) {
                                    byte b10 = bArr[i16];
                                    if ((b10 & 192) == 128) {
                                        int i19 = (((b10 ^ ByteCompanionObject.MIN_VALUE) ^ (b9 << 6)) ^ (b8 << 12)) ^ (b7 << 18);
                                        if (i19 > 1114111) {
                                            i6 = i9 + 1;
                                            cArr[i9] = Utf8.REPLACEMENT_CHARACTER;
                                        } else {
                                            if ((55296 <= i19 && i19 <= 57343) || i19 < 65536 || i19 == 65533) {
                                                i6 = i9 + 1;
                                                cArr[i9] = Utf8.REPLACEMENT_CHARACTER;
                                            } else {
                                                int i20 = i9 + 1;
                                                cArr[i9] = (char) ((i19 >>> 10) + Utf8.HIGH_SURROGATE_HEADER);
                                                char c = (char) ((i19 & DownloadErrorCode.ERROR_IO) + Utf8.LOG_SURROGATE_HEADER);
                                                i6 = i20 + 1;
                                                cArr[i20] = c;
                                            }
                                        }
                                        Unit unit8 = Unit.INSTANCE;
                                        i4 = 4;
                                        i9 = i6;
                                    } else {
                                        i7 = i9 + 1;
                                        cArr[i9] = Utf8.REPLACEMENT_CHARACTER;
                                        Unit unit9 = Unit.INSTANCE;
                                        i9 = i7;
                                    }
                                } else {
                                    i7 = i9 + 1;
                                    cArr[i9] = Utf8.REPLACEMENT_CHARACTER;
                                    Unit unit10 = Unit.INSTANCE;
                                    i9 = i7;
                                    i4 = 2;
                                }
                            } else {
                                i7 = i9 + 1;
                                cArr[i9] = Utf8.REPLACEMENT_CHARACTER;
                                Unit unit11 = Unit.INSTANCE;
                                i9 = i7;
                                i4 = 1;
                            }
                        }
                    } else {
                        cArr[i9] = Utf8.REPLACEMENT_CHARACTER;
                        i8++;
                        i9++;
                    }
                    i4 = 3;
                }
                i8 += i4;
            }
        }
        return StringsKt.concatToString(cArr, 0, i9);
    }

    public static final byte[] commonAsUtf8ToByteArray(String str) {
        int i;
        int i2;
        Intrinsics.checkNotNullParameter(str, "<this>");
        byte[] bArr = new byte[str.length() * 4];
        int length = str.length();
        if (length > 0) {
            int i3 = 0;
            while (true) {
                int i4 = i3 + 1;
                char cCharAt = str.charAt(i3);
                if (Intrinsics.compare((int) cCharAt, 128) >= 0) {
                    int length2 = str.length();
                    int i5 = i3;
                    while (i3 < length2) {
                        char cCharAt2 = str.charAt(i3);
                        if (Intrinsics.compare((int) cCharAt2, 128) < 0) {
                            int i6 = i5 + 1;
                            bArr[i5] = (byte) cCharAt2;
                            i3++;
                            while (true) {
                                i5 = i6;
                                if (i3 >= length2 || Intrinsics.compare((int) str.charAt(i3), 128) >= 0) {
                                    break;
                                }
                                i6 = i5 + 1;
                                bArr[i5] = (byte) str.charAt(i3);
                                i3++;
                            }
                        } else {
                            if (Intrinsics.compare((int) cCharAt2, 2048) < 0) {
                                int i7 = i5 + 1;
                                bArr[i5] = (byte) ((cCharAt2 >> 6) | PsExtractor.AUDIO_STREAM);
                                byte b = (byte) ((cCharAt2 & '?') | 128);
                                i = i7 + 1;
                                bArr[i7] = b;
                            } else {
                                if (55296 <= cCharAt2 && cCharAt2 <= 57343) {
                                    if (Intrinsics.compare((int) cCharAt2, 56319) <= 0 && length2 > (i2 = i3 + 1)) {
                                        char cCharAt3 = str.charAt(i2);
                                        if (56320 <= cCharAt3 && cCharAt3 <= 57343) {
                                            int iCharAt = ((cCharAt2 << '\n') + str.charAt(i2)) - 56613888;
                                            int i8 = i5 + 1;
                                            bArr[i5] = (byte) ((iCharAt >> 18) | PsExtractor.VIDEO_STREAM_MASK);
                                            int i9 = i8 + 1;
                                            bArr[i8] = (byte) (((iCharAt >> 12) & 63) | 128);
                                            int i10 = i9 + 1;
                                            bArr[i9] = (byte) (((iCharAt >> 6) & 63) | 128);
                                            byte b2 = (byte) ((iCharAt & 63) | 128);
                                            i = i10 + 1;
                                            bArr[i10] = b2;
                                            i3 += 2;
                                            i5 = i;
                                        }
                                    }
                                    i = i5 + 1;
                                    bArr[i5] = Utf8.REPLACEMENT_BYTE;
                                } else {
                                    int i11 = i5 + 1;
                                    bArr[i5] = (byte) ((cCharAt2 >> '\f') | 224);
                                    int i12 = i11 + 1;
                                    bArr[i11] = (byte) (((cCharAt2 >> 6) & 63) | 128);
                                    byte b3 = (byte) ((cCharAt2 & '?') | 128);
                                    i = i12 + 1;
                                    bArr[i12] = b3;
                                }
                            }
                            i3++;
                            i5 = i;
                        }
                    }
                    byte[] bArrCopyOf = Arrays.copyOf(bArr, i5);
                    Intrinsics.checkNotNullExpressionValue(bArrCopyOf, "java.util.Arrays.copyOf(this, newSize)");
                    return bArrCopyOf;
                }
                bArr[i3] = (byte) cCharAt;
                if (i4 >= length) {
                    break;
                }
                i3 = i4;
            }
        }
        byte[] bArrCopyOf2 = Arrays.copyOf(bArr, str.length());
        Intrinsics.checkNotNullExpressionValue(bArrCopyOf2, "java.util.Arrays.copyOf(this, newSize)");
        return bArrCopyOf2;
    }
}
