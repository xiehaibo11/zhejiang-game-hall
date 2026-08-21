package com.mbridge.msdk.foundation.tools;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.qihoo360.replugin.ext.parser.struct.ChunkType;
import java.util.HashMap;
import java.util.Map;
import kotlin.UByte;
import kotlin.jvm.internal.ByteCompanionObject;
import okio.Utf8;

/* JADX INFO: compiled from: SameMVEncoder.java */
/* JADX INFO: loaded from: classes2.dex */
public final class aa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Map<Character, Character> f3511a;
    private static final char[] b = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'};
    private static char[] c;
    private static final byte[] d;

    static {
        HashMap map = new HashMap();
        f3511a = map;
        map.put('A', 'v');
        f3511a.put('B', 'S');
        f3511a.put('C', 'o');
        f3511a.put('D', 'a');
        f3511a.put('E', 'j');
        f3511a.put('F', 'c');
        f3511a.put('G', '7');
        f3511a.put('H', 'd');
        f3511a.put('I', 'R');
        f3511a.put('J', 'z');
        f3511a.put('K', 'p');
        f3511a.put('L', 'W');
        f3511a.put('M', 'i');
        f3511a.put('N', 'f');
        f3511a.put('O', 'G');
        f3511a.put('P', 'y');
        f3511a.put('Q', 'N');
        f3511a.put('R', 'x');
        f3511a.put('S', 'Z');
        f3511a.put('T', 'n');
        f3511a.put('U', 'V');
        f3511a.put('V', '5');
        f3511a.put('W', 'k');
        f3511a.put('X', '+');
        f3511a.put('Y', 'D');
        f3511a.put('Z', 'H');
        f3511a.put('a', 'L');
        f3511a.put('b', 'Y');
        f3511a.put('c', 'h');
        f3511a.put('d', 'J');
        f3511a.put('e', '4');
        f3511a.put('f', '6');
        f3511a.put('g', 'l');
        f3511a.put('h', 't');
        f3511a.put('i', '0');
        f3511a.put('j', 'U');
        f3511a.put('k', '3');
        f3511a.put('l', 'Q');
        f3511a.put('m', 'r');
        f3511a.put('n', 'g');
        f3511a.put('o', 'E');
        f3511a.put('p', 'u');
        f3511a.put('q', 'q');
        f3511a.put('r', '8');
        f3511a.put('s', 's');
        f3511a.put('t', 'w');
        f3511a.put('u', '/');
        f3511a.put('v', 'X');
        f3511a.put('w', 'M');
        f3511a.put('x', 'e');
        f3511a.put('y', 'B');
        f3511a.put('z', 'A');
        f3511a.put('0', 'T');
        f3511a.put('1', '2');
        f3511a.put('2', 'F');
        f3511a.put('3', 'b');
        f3511a.put('4', '9');
        f3511a.put('5', 'P');
        f3511a.put('6', '1');
        f3511a.put('7', 'O');
        f3511a.put('8', 'I');
        f3511a.put('9', 'K');
        f3511a.put('+', 'm');
        f3511a.put('/', 'C');
        c = new char[b.length];
        int i = 0;
        int i2 = 0;
        while (true) {
            char[] cArr = b;
            if (i2 >= cArr.length) {
                break;
            }
            c[i2] = f3511a.get(Character.valueOf(cArr[i2])).charValue();
            i2++;
        }
        d = new byte[128];
        int i3 = 0;
        while (true) {
            byte[] bArr = d;
            if (i3 >= bArr.length) {
                break;
            }
            bArr[i3] = ByteCompanionObject.MAX_VALUE;
            i3++;
        }
        while (true) {
            char[] cArr2 = c;
            if (i >= cArr2.length) {
                return;
            }
            d[cArr2[i]] = (byte) i;
            i++;
        }
    }

    private static int a(char[] cArr, byte[] bArr, int i) {
        try {
            char c2 = cArr[3] == '=' ? (char) 2 : (char) 3;
            if (cArr[2] == '=') {
                c2 = 1;
            }
            byte b2 = d[cArr[0]];
            byte b3 = d[cArr[1]];
            byte b4 = d[cArr[2]];
            byte b5 = d[cArr[3]];
            if (c2 == 1) {
                bArr[i] = (byte) (((b2 << 2) & 252) | (3 & (b3 >> 4)));
                return 1;
            }
            if (c2 == 2) {
                bArr[i] = (byte) ((3 & (b3 >> 4)) | ((b2 << 2) & 252));
                bArr[i + 1] = (byte) (((b3 << 4) & PsExtractor.VIDEO_STREAM_MASK) | ((b4 >> 2) & 15));
                return 2;
            }
            if (c2 == 3) {
                int i2 = i + 1;
                bArr[i] = (byte) (((b2 << 2) & 252) | ((b3 >> 4) & 3));
                bArr[i2] = (byte) (((b3 << 4) & PsExtractor.VIDEO_STREAM_MASK) | ((b4 >> 2) & 15));
                bArr[i2 + 1] = (byte) ((b5 & Utf8.REPLACEMENT_BYTE) | ((b4 << 6) & PsExtractor.AUDIO_STREAM));
                return 3;
            }
            throw new RuntimeException("Internal Error");
        } catch (Exception unused) {
            return 0;
        }
    }

    public static String a(String str) {
        byte[] bArrC = c(str);
        if (bArrC == null || bArrC.length <= 0) {
            return null;
        }
        return new String(bArrC);
    }

    private static byte[] c(String str) {
        int i;
        try {
            int length = str.length();
            int i2 = ChunkType.XML_END_ELEMENT;
            if (length < 259) {
                i2 = length;
            }
            char[] cArr = new char[i2];
            int i3 = ((length >> 2) * 3) + 3;
            byte[] bArr = new byte[i3];
            int i4 = 0;
            int iA = 0;
            int i5 = 0;
            while (i4 < length) {
                int i6 = i4 + 256;
                if (i6 <= length) {
                    str.getChars(i4, i6, cArr, i5);
                    i = i5 + 256;
                } else {
                    str.getChars(i4, length, cArr, i5);
                    i = (length - i4) + i5;
                }
                int i7 = i5;
                while (i5 < i) {
                    char c2 = cArr[i5];
                    if (c2 == '=' || (c2 < d.length && d[c2] != 127)) {
                        int i8 = i7 + 1;
                        cArr[i7] = c2;
                        if (i8 == 4) {
                            iA += a(cArr, bArr, iA);
                            i7 = 0;
                        } else {
                            i7 = i8;
                        }
                    }
                    i5++;
                }
                i4 = i6;
                i5 = i7;
            }
            if (iA == i3) {
                return bArr;
            }
            byte[] bArr2 = new byte[iA];
            System.arraycopy(bArr, 0, bArr2, 0, iA);
            return bArr2;
        } catch (Exception unused) {
            return null;
        }
    }

    public static String b(String str) {
        byte[] bytes = str.getBytes();
        return a(bytes, 0, bytes.length);
    }

    private static String a(byte[] bArr, int i, int i2) {
        if (i2 <= 0) {
            return "";
        }
        try {
            char[] cArr = new char[((i2 / 3) << 2) + 4];
            int i3 = 0;
            while (i2 >= 3) {
                int i4 = ((bArr[i] & UByte.MAX_VALUE) << 16) + ((bArr[i + 1] & UByte.MAX_VALUE) << 8) + (bArr[i + 2] & UByte.MAX_VALUE);
                int i5 = i3 + 1;
                cArr[i3] = c[i4 >> 18];
                int i6 = i5 + 1;
                cArr[i5] = c[(i4 >> 12) & 63];
                int i7 = i6 + 1;
                cArr[i6] = c[(i4 >> 6) & 63];
                i3 = i7 + 1;
                cArr[i7] = c[i4 & 63];
                i += 3;
                i2 -= 3;
            }
            if (i2 == 1) {
                int i8 = bArr[i] & UByte.MAX_VALUE;
                int i9 = i3 + 1;
                cArr[i3] = c[i8 >> 2];
                int i10 = i9 + 1;
                cArr[i9] = c[(i8 << 4) & 63];
                int i11 = i10 + 1;
                cArr[i10] = com.alipay.sdk.m.n.a.h;
                i3 = i11 + 1;
                cArr[i11] = com.alipay.sdk.m.n.a.h;
            } else if (i2 == 2) {
                int i12 = ((bArr[i] & UByte.MAX_VALUE) << 8) + (bArr[i + 1] & UByte.MAX_VALUE);
                int i13 = i3 + 1;
                cArr[i3] = c[i12 >> 10];
                int i14 = i13 + 1;
                cArr[i13] = c[(i12 >> 4) & 63];
                int i15 = i14 + 1;
                cArr[i14] = c[(i12 << 2) & 63];
                i3 = i15 + 1;
                cArr[i15] = com.alipay.sdk.m.n.a.h;
            }
            return new String(cArr, 0, i3);
        } catch (Exception unused) {
            return null;
        }
    }
}
