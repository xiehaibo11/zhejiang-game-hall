package com.bianfeng.ymnsdk.util.security;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import kotlin.jvm.internal.ByteCompanionObject;
import okio.Utf8;

public final class Base64 {
    private static final int BASELENGTH = 128;
    private static final int EIGHTBIT = 8;
    private static final int FOURBYTE = 4;
    private static final int LOOKUPLENGTH = 64;
    private static final char PAD = '=';
    private static final int SIGN = -128;
    private static final int SIXTEENBIT = 16;
    private static final int TWENTYFOURBITGROUP = 24;
    private static final boolean fDebug = false;
    private static final byte[] base64Alphabet = new byte[128];
    private static final char[] lookUpBase64Alphabet = new char[64];

    static {
        for (int i = 0; i < 128; i++) {
            base64Alphabet[i] = -1;
        }
        for (int i2 = 90; i2 >= 65; i2--) {
            base64Alphabet[i2] = (byte) (i2 - 65);
        }
        for (int i3 = 122; i3 >= 97; i3--) {
            base64Alphabet[i3] = (byte) ((i3 - 97) + 26);
        }
        for (int i4 = 57; i4 >= 48; i4--) {
            base64Alphabet[i4] = (byte) ((i4 - 48) + 52);
        }
        byte[] bArr = base64Alphabet;
        bArr[43] = 62;
        bArr[47] = Utf8.REPLACEMENT_BYTE;
        for (int i5 = 0; i5 <= 25; i5++) {
            lookUpBase64Alphabet[i5] = (char) (i5 + 65);
        }
        int i6 = 26;
        int j = 0;
        while (i6 <= 51) {
            lookUpBase64Alphabet[i6] = (char) (j + 97);
            i6++;
            j++;
        }
        int i7 = 52;
        int j2 = 0;
        while (i7 <= 61) {
            lookUpBase64Alphabet[i7] = (char) (j2 + 48);
            i7++;
            j2++;
        }
        char[] cArr = lookUpBase64Alphabet;
        cArr[62] = '+';
        cArr[63] = '/';
    }

    private static boolean isWhiteSpace(char octect) {
        return octect == ' ' || octect == '\r' || octect == '\n' || octect == '\t';
    }

    private static boolean isPad(char octect) {
        return octect == '=';
    }

    private static boolean isData(char octect) {
        return octect < 128 && base64Alphabet[octect] != -1;
    }

    public static String encode(byte[] binaryData) {
        int lengthDataBits;
        int lengthDataBits2;
        if (binaryData == null) {
            return null;
        }
        int lengthDataBits3 = binaryData.length * 8;
        if (lengthDataBits3 == 0) {
            return "";
        }
        int fewerThan24bits = lengthDataBits3 % 24;
        int numberTriplets = lengthDataBits3 / 24;
        int numberQuartet = fewerThan24bits != 0 ? numberTriplets + 1 : numberTriplets;
        char[] encodedData = new char[numberQuartet * 4];
        int encodedIndex = 0;
        int dataIndex = 0;
        int i = 0;
        while (i < numberTriplets) {
            int dataIndex2 = dataIndex + 1;
            byte b1 = binaryData[dataIndex];
            int dataIndex3 = dataIndex2 + 1;
            byte b2 = binaryData[dataIndex2];
            int dataIndex4 = dataIndex3 + 1;
            byte b3 = binaryData[dataIndex3];
            byte l = (byte) (b2 & 15);
            byte k = (byte) (b1 & 3);
            byte val1 = (byte) ((b1 & ByteCompanionObject.MIN_VALUE) == 0 ? b1 >> 2 : (b1 >> 2) ^ PsExtractor.AUDIO_STREAM);
            int i2 = b2 >> 4;
            if ((b2 & ByteCompanionObject.MIN_VALUE) != 0) {
                i2 ^= PsExtractor.VIDEO_STREAM_MASK;
            }
            byte val2 = (byte) i2;
            if ((b3 & ByteCompanionObject.MIN_VALUE) == 0) {
                lengthDataBits = lengthDataBits3;
                lengthDataBits2 = b3 >> 6;
            } else {
                lengthDataBits = lengthDataBits3;
                lengthDataBits2 = (b3 >> 6) ^ 252;
            }
            byte val3 = (byte) lengthDataBits2;
            int encodedIndex2 = encodedIndex + 1;
            char[] cArr = lookUpBase64Alphabet;
            encodedData[encodedIndex] = cArr[val1];
            int encodedIndex3 = encodedIndex2 + 1;
            encodedData[encodedIndex2] = cArr[val2 | (k << 4)];
            int encodedIndex4 = encodedIndex3 + 1;
            encodedData[encodedIndex3] = cArr[(l << 2) | val3];
            encodedIndex = encodedIndex4 + 1;
            encodedData[encodedIndex4] = cArr[b3 & Utf8.REPLACEMENT_BYTE];
            i++;
            dataIndex = dataIndex4;
            lengthDataBits3 = lengthDataBits;
        }
        if (fewerThan24bits == 8) {
            byte b12 = binaryData[dataIndex];
            byte k2 = (byte) (b12 & 3);
            byte val12 = (byte) ((b12 & ByteCompanionObject.MIN_VALUE) == 0 ? b12 >> 2 : (b12 >> 2) ^ PsExtractor.AUDIO_STREAM);
            int encodedIndex5 = encodedIndex + 1;
            char[] cArr2 = lookUpBase64Alphabet;
            encodedData[encodedIndex] = cArr2[val12];
            int encodedIndex6 = encodedIndex5 + 1;
            encodedData[encodedIndex5] = cArr2[k2 << 4];
            int encodedIndex7 = encodedIndex6 + 1;
            encodedData[encodedIndex6] = '=';
            int i3 = encodedIndex7 + 1;
            encodedData[encodedIndex7] = '=';
        } else if (fewerThan24bits == 16) {
            byte b13 = binaryData[dataIndex];
            byte b22 = binaryData[dataIndex + 1];
            byte l2 = (byte) (b22 & 15);
            byte k3 = (byte) (b13 & 3);
            byte val13 = (byte) ((b13 & ByteCompanionObject.MIN_VALUE) == 0 ? b13 >> 2 : (b13 >> 2) ^ PsExtractor.AUDIO_STREAM);
            byte val22 = (byte) ((b22 & ByteCompanionObject.MIN_VALUE) == 0 ? b22 >> 4 : (b22 >> 4) ^ PsExtractor.VIDEO_STREAM_MASK);
            int encodedIndex8 = encodedIndex + 1;
            char[] cArr3 = lookUpBase64Alphabet;
            encodedData[encodedIndex] = cArr3[val13];
            int encodedIndex9 = encodedIndex8 + 1;
            encodedData[encodedIndex8] = cArr3[val22 | (k3 << 4)];
            int encodedIndex10 = encodedIndex9 + 1;
            encodedData[encodedIndex9] = cArr3[l2 << 2];
            int i4 = encodedIndex10 + 1;
            encodedData[encodedIndex10] = '=';
        }
        return new String(encodedData);
    }

    public static byte[] decode(String encoded) {
        if (encoded == null) {
            return null;
        }
        char[] base64Data = encoded.toCharArray();
        int len = removeWhiteSpace(base64Data);
        if (len % 4 != 0) {
            return null;
        }
        int numberQuadruple = len / 4;
        if (numberQuadruple == 0) {
            return new byte[0];
        }
        int i = 0;
        int encodedIndex = 0;
        int dataIndex = 0;
        byte[] decodedData = new byte[numberQuadruple * 3];
        while (i < numberQuadruple - 1) {
            int dataIndex2 = dataIndex + 1;
            char d1 = base64Data[dataIndex];
            if (isData(d1)) {
                int dataIndex3 = dataIndex2 + 1;
                char d2 = base64Data[dataIndex2];
                if (isData(d2)) {
                    int dataIndex4 = dataIndex3 + 1;
                    char d3 = base64Data[dataIndex3];
                    if (isData(d3)) {
                        dataIndex = dataIndex4 + 1;
                        char d4 = base64Data[dataIndex4];
                        if (!isData(d4)) {
                            return null;
                        }
                        byte[] bArr = base64Alphabet;
                        byte b1 = bArr[d1];
                        byte b2 = bArr[d2];
                        byte b3 = bArr[d3];
                        byte b4 = bArr[d4];
                        int encodedIndex2 = encodedIndex + 1;
                        decodedData[encodedIndex] = (byte) ((b1 << 2) | (b2 >> 4));
                        int encodedIndex3 = encodedIndex2 + 1;
                        decodedData[encodedIndex2] = (byte) (((b2 & 15) << 4) | ((b3 >> 2) & 15));
                        encodedIndex = encodedIndex3 + 1;
                        decodedData[encodedIndex3] = (byte) ((b3 << 6) | b4);
                        i++;
                    } else {
                        return null;
                    }
                } else {
                    return null;
                }
            } else {
                return null;
            }
        }
        int dataIndex5 = dataIndex + 1;
        char d12 = base64Data[dataIndex];
        if (!isData(d12)) {
            return null;
        }
        int dataIndex6 = dataIndex5 + 1;
        char d22 = base64Data[dataIndex5];
        if (!isData(d22)) {
            return null;
        }
        byte[] bArr2 = base64Alphabet;
        byte b12 = bArr2[d12];
        byte b22 = bArr2[d22];
        int dataIndex7 = dataIndex6 + 1;
        char d32 = base64Data[dataIndex6];
        int i2 = dataIndex7 + 1;
        char d42 = base64Data[dataIndex7];
        if (!isData(d32) || !isData(d42)) {
            if (isPad(d32) && isPad(d42)) {
                if ((b22 & 15) != 0) {
                    return null;
                }
                byte[] tmp = new byte[(i * 3) + 1];
                System.arraycopy(decodedData, 0, tmp, 0, i * 3);
                tmp[encodedIndex] = (byte) ((b12 << 2) | (b22 >> 4));
                return tmp;
            }
            if (!isPad(d32) && isPad(d42)) {
                byte b32 = base64Alphabet[d32];
                if ((b32 & 3) != 0) {
                    return null;
                }
                byte[] tmp2 = new byte[(i * 3) + 2];
                System.arraycopy(decodedData, 0, tmp2, 0, i * 3);
                tmp2[encodedIndex] = (byte) ((b12 << 2) | (b22 >> 4));
                tmp2[encodedIndex + 1] = (byte) (((b22 & 15) << 4) | ((b32 >> 2) & 15));
                return tmp2;
            }
            return null;
        }
        byte[] bArr3 = base64Alphabet;
        byte b33 = bArr3[d32];
        byte b42 = bArr3[d42];
        int encodedIndex4 = encodedIndex + 1;
        decodedData[encodedIndex] = (byte) ((b12 << 2) | (b22 >> 4));
        int encodedIndex5 = encodedIndex4 + 1;
        decodedData[encodedIndex4] = (byte) (((b22 & 15) << 4) | ((b33 >> 2) & 15));
        int i3 = encodedIndex5 + 1;
        decodedData[encodedIndex5] = (byte) ((b33 << 6) | b42);
        return decodedData;
    }

    private static int removeWhiteSpace(char[] data) {
        if (data == null) {
            return 0;
        }
        int newSize = 0;
        int len = data.length;
        for (int i = 0; i < len; i++) {
            if (!isWhiteSpace(data[i])) {
                data[newSize] = data[i];
                newSize++;
            }
        }
        return newSize;
    }
}
