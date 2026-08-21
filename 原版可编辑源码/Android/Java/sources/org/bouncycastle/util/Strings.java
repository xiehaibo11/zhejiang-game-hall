package org.bouncycastle.util;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.ss.android.socialbase.downloader.constants.DownloadErrorCode;
import java.io.ByteArrayOutputStream;
import java.util.Vector;
import kotlin.UByte;
import okio.Utf8;

public final class Strings {
    public static String fromUTF8ByteArray(byte[] bArr) {
        char c;
        int i = 0;
        int i2 = 0;
        int i3 = 0;
        while (i2 < bArr.length) {
            i3++;
            if ((bArr[i2] & 240) == 240) {
                i3++;
                i2 += 4;
            } else {
                i2 = (bArr[i2] & 224) == 224 ? i2 + 3 : (bArr[i2] & 192) == 192 ? i2 + 2 : i2 + 1;
            }
        }
        char[] cArr = new char[i3];
        int i4 = 0;
        while (i < bArr.length) {
            if ((bArr[i] & 240) == 240) {
                int i5 = (((((bArr[i] & 3) << 18) | ((bArr[i + 1] & Utf8.REPLACEMENT_BYTE) << 12)) | ((bArr[i + 2] & Utf8.REPLACEMENT_BYTE) << 6)) | (bArr[i + 3] & Utf8.REPLACEMENT_BYTE)) - 65536;
                char c2 = (char) (55296 | (i5 >> 10));
                c = (char) ((i5 & DownloadErrorCode.ERROR_IO) | Utf8.LOG_SURROGATE_HEADER);
                cArr[i4] = c2;
                i += 4;
                i4++;
            } else if ((bArr[i] & 224) == 224) {
                c = (char) (((bArr[i] & 15) << 12) | ((bArr[i + 1] & Utf8.REPLACEMENT_BYTE) << 6) | (bArr[i + 2] & Utf8.REPLACEMENT_BYTE));
                i += 3;
            } else if ((bArr[i] & 208) == 208 || (bArr[i] & 192) == 192) {
                int i6 = (bArr[i] & 31) << 6;
                byte b = bArr[i + 1];
                c = (char) (i6 | (b & Utf8.REPLACEMENT_BYTE));
                i += 2;
            } else {
                c = (char) (bArr[i] & UByte.MAX_VALUE);
                i++;
            }
            cArr[i4] = c;
            i4++;
        }
        return new String(cArr);
    }

    public static String[] split(String str, char c) {
        int i;
        Vector vector = new Vector();
        boolean z = true;
        while (true) {
            if (!z) {
                break;
            }
            int iIndexOf = str.indexOf(c);
            if (iIndexOf > 0) {
                vector.addElement(str.substring(0, iIndexOf));
                str = str.substring(iIndexOf + 1);
            } else {
                vector.addElement(str);
                z = false;
            }
        }
        int size = vector.size();
        String[] strArr = new String[size];
        for (i = 0; i != size; i++) {
            strArr[i] = (String) vector.elementAt(i);
        }
        return strArr;
    }

    public static byte[] toByteArray(String str) {
        int length = str.length();
        byte[] bArr = new byte[length];
        for (int i = 0; i != length; i++) {
            bArr[i] = (byte) str.charAt(i);
        }
        return bArr;
    }

    public static String toLowerCase(String str) {
        char[] charArray = str.toCharArray();
        boolean z = false;
        for (int i = 0; i != charArray.length; i++) {
            char c = charArray[i];
            if ('A' <= c && 'Z' >= c) {
                charArray[i] = (char) ((c - 'A') + 97);
                z = true;
            }
        }
        return z ? new String(charArray) : str;
    }

    public static byte[] toUTF8ByteArray(String str) {
        int i;
        int i2;
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        char[] charArray = str.toCharArray();
        int i3 = 0;
        while (i3 < charArray.length) {
            char c = charArray[i3];
            int i4 = c;
            if (c >= 128) {
                if (c < 2048) {
                    i = (c >> 6) | PsExtractor.AUDIO_STREAM;
                } else if (c < 55296 || c > 57343) {
                    byteArrayOutputStream.write((c >> '\f') | 224);
                    i = ((c >> 6) & 63) | 128;
                } else {
                    i3++;
                    if (i3 >= charArray.length) {
                        throw new IllegalStateException("invalid UTF-16 codepoint");
                    }
                    char c2 = charArray[i3];
                    if (c > 56319) {
                        throw new IllegalStateException("invalid UTF-16 codepoint");
                    }
                    int i5 = (((c & 1023) << 10) | (c2 & 1023)) + 65536;
                    byteArrayOutputStream.write((i5 >> 18) | PsExtractor.VIDEO_STREAM_MASK);
                    byteArrayOutputStream.write(((i5 >> 12) & 63) | 128);
                    byteArrayOutputStream.write(((i5 >> 6) & 63) | 128);
                    i2 = i5;
                    i4 = (i2 & 63) | 128;
                }
                byteArrayOutputStream.write(i);
                i2 = c;
                i4 = (i2 & 63) | 128;
            }
            byteArrayOutputStream.write(i4);
            i3++;
        }
        return byteArrayOutputStream.toByteArray();
    }

    public static String toUpperCase(String str) {
        char[] charArray = str.toCharArray();
        boolean z = false;
        for (int i = 0; i != charArray.length; i++) {
            char c = charArray[i];
            if ('a' <= c && 'z' >= c) {
                charArray[i] = (char) ((c - 'a') + 65);
                z = true;
            }
        }
        return z ? new String(charArray) : str;
    }
}
