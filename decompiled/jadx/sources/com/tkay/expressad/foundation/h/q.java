package com.tkay.expressad.foundation.h;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.qihoo360.replugin.ext.parser.struct.ChunkType;
import java.util.HashMap;
import java.util.Map;
import kotlin.UByte;
import kotlin.jvm.internal.ByteCompanionObject;
import okio.Utf8;

/* JADX INFO: loaded from: classes3.dex */
public final class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6954a = 256;
    private static Map<Character, Character> b = null;
    private static Map<Character, Character> c = null;
    private static final char[] d = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'};
    private static char[] e = null;
    private static final char f = '=';
    private static final byte[] g;

    static {
        HashMap map = new HashMap();
        b = map;
        map.put('A', 'v');
        b.put('B', 'S');
        b.put('C', 'o');
        b.put('D', 'a');
        b.put('E', 'j');
        b.put('F', 'c');
        b.put('G', '7');
        b.put('H', 'd');
        b.put('I', 'R');
        b.put('J', 'z');
        b.put('K', 'p');
        b.put('L', 'W');
        b.put('M', 'i');
        b.put('N', 'f');
        b.put('O', 'G');
        b.put('P', 'y');
        b.put('Q', 'N');
        b.put('R', 'x');
        b.put('S', 'Z');
        b.put('T', 'n');
        b.put('U', 'V');
        b.put('V', '5');
        b.put('W', 'k');
        b.put('X', '+');
        b.put('Y', 'D');
        b.put('Z', 'H');
        b.put('a', 'L');
        b.put('b', 'Y');
        b.put('c', 'h');
        b.put('d', 'J');
        b.put('e', '4');
        b.put('f', '6');
        b.put('g', 'l');
        b.put('h', 't');
        b.put('i', '0');
        b.put('j', 'U');
        b.put('k', '3');
        b.put('l', 'Q');
        b.put('m', 'r');
        b.put('n', 'g');
        b.put('o', 'E');
        b.put('p', 'u');
        b.put('q', 'q');
        b.put('r', '8');
        b.put('s', 's');
        b.put('t', 'w');
        b.put('u', '/');
        b.put('v', 'X');
        b.put('w', 'M');
        b.put('x', 'e');
        b.put('y', 'B');
        b.put('z', 'A');
        b.put('0', 'T');
        b.put('1', '2');
        b.put('2', 'F');
        b.put('3', 'b');
        b.put('4', '9');
        b.put('5', 'P');
        b.put('6', '1');
        b.put('7', 'O');
        b.put('8', 'I');
        b.put('9', 'K');
        b.put('+', 'm');
        b.put('/', 'C');
        e = new char[d.length];
        int i = 0;
        int i2 = 0;
        while (true) {
            char[] cArr = d;
            if (i2 >= cArr.length) {
                break;
            }
            e[i2] = b.get(Character.valueOf(cArr[i2])).charValue();
            i2++;
        }
        g = new byte[128];
        int i3 = 0;
        while (true) {
            byte[] bArr = g;
            if (i3 >= bArr.length) {
                break;
            }
            bArr[i3] = ByteCompanionObject.MAX_VALUE;
            i3++;
        }
        while (true) {
            char[] cArr2 = e;
            if (i >= cArr2.length) {
                return;
            }
            g[cArr2[i]] = (byte) i;
            i++;
        }
    }

    private static int a(char[] cArr, byte[] bArr, int i) {
        try {
            char c2 = cArr[3] == '=' ? (char) 2 : (char) 3;
            if (cArr[2] == '=') {
                c2 = 1;
            }
            byte b2 = g[cArr[0]];
            byte b3 = g[cArr[1]];
            byte b4 = g[cArr[2]];
            byte b5 = g[cArr[3]];
            if (c2 == 2) {
                bArr[i] = (byte) ((3 & (b3 >> 4)) | ((b2 << 2) & 252));
                bArr[i + 1] = (byte) (((b3 << 4) & PsExtractor.VIDEO_STREAM_MASK) | ((b4 >> 2) & 15));
                return 2;
            }
            if (c2 != 3) {
                bArr[i] = (byte) (((b2 << 2) & 252) | (3 & (b3 >> 4)));
                return 1;
            }
            int i2 = i + 1;
            bArr[i] = (byte) (((b2 << 2) & 252) | ((b3 >> 4) & 3));
            bArr[i2] = (byte) (((b3 << 4) & PsExtractor.VIDEO_STREAM_MASK) | ((b4 >> 2) & 15));
            bArr[i2 + 1] = (byte) ((b5 & Utf8.REPLACEMENT_BYTE) | ((b4 << 6) & PsExtractor.AUDIO_STREAM));
            return 3;
        } catch (Exception unused) {
            return 0;
        }
    }

    private static byte[] a(char[] cArr, int i, int i2) {
        try {
            char[] cArr2 = new char[4];
            int i3 = ((i2 >> 2) * 3) + 3;
            byte[] bArr = new byte[i3];
            int iA = 0;
            int i4 = 0;
            for (int i5 = i; i5 < i + i2; i5++) {
                char c2 = cArr[i5];
                if (c2 == '=' || (c2 < g.length && g[c2] != 127)) {
                    int i6 = i4 + 1;
                    cArr2[i4] = c2;
                    if (i6 == 4) {
                        iA += a(cArr2, bArr, iA);
                        i4 = 0;
                    } else {
                        i4 = i6;
                    }
                }
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
                    if (c2 == '=' || (c2 < g.length && g[c2] != 127)) {
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
        return a(bytes, bytes.length);
    }

    private static String a(byte[] bArr) {
        return a(bArr, bArr.length);
    }

    private static String a(byte[] bArr, int i) {
        if (i <= 0) {
            return "";
        }
        try {
            char[] cArr = new char[((i / 3) << 2) + 4];
            int i2 = 0;
            int i3 = 0;
            while (i >= 3) {
                int i4 = ((bArr[i2] & UByte.MAX_VALUE) << 16) + ((bArr[i2 + 1] & UByte.MAX_VALUE) << 8) + (bArr[i2 + 2] & UByte.MAX_VALUE);
                int i5 = i3 + 1;
                cArr[i3] = e[i4 >> 18];
                int i6 = i5 + 1;
                cArr[i5] = e[(i4 >> 12) & 63];
                int i7 = i6 + 1;
                cArr[i6] = e[(i4 >> 6) & 63];
                i3 = i7 + 1;
                cArr[i7] = e[i4 & 63];
                i2 += 3;
                i -= 3;
            }
            if (i == 1) {
                int i8 = bArr[i2] & UByte.MAX_VALUE;
                int i9 = i3 + 1;
                cArr[i3] = e[i8 >> 2];
                int i10 = i9 + 1;
                cArr[i9] = e[(i8 << 4) & 63];
                int i11 = i10 + 1;
                cArr[i10] = '=';
                i3 = i11 + 1;
                cArr[i11] = '=';
            } else if (i == 2) {
                int i12 = ((bArr[i2] & UByte.MAX_VALUE) << 8) + (bArr[i2 + 1] & UByte.MAX_VALUE);
                int i13 = i3 + 1;
                cArr[i3] = e[i12 >> 10];
                int i14 = i13 + 1;
                cArr[i13] = e[(i12 >> 4) & 63];
                int i15 = i14 + 1;
                cArr[i14] = e[(i12 << 2) & 63];
                i3 = i15 + 1;
                cArr[i15] = '=';
            }
            return new String(cArr, 0, i3);
        } catch (Exception unused) {
            return null;
        }
    }
}
