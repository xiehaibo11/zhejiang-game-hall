package com.qihoo360.replugin.utils.basic;

import kotlin.UByte;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ByteConvertor {
    private static final String HEX = "0123456789ABCDEF";

    public static byte[] toBytes(int i) {
        return new byte[]{(byte) (i & 255), (byte) ((65280 & i) >> 8), (byte) ((16711680 & i) >> 16), (byte) ((i & (-16777216)) >> 24)};
    }

    public static byte[] toBytes(long j) {
        return new byte[]{(byte) (255 & j), (byte) ((65280 & j) >> 8), (byte) ((16711680 & j) >> 16), (byte) ((4278190080L & j) >> 24), (byte) ((1095216660480L & j) >> 32), (byte) ((280375465082880L & j) >> 40), (byte) ((71776119061217280L & j) >> 48), (byte) ((j & (-72057594037927936L)) >> 56)};
    }

    public static String toHex(byte[] bArr) {
        if (bArr == null) {
            return "";
        }
        StringBuilder sb = new StringBuilder(bArr.length * 2);
        for (byte b : bArr) {
            appendHex(sb, b);
        }
        return sb.toString();
    }

    private static void appendHex(StringBuilder sb, byte b) {
        sb.append(HEX.charAt((b >> 4) & 15));
        sb.append(HEX.charAt(b & 15));
    }

    public static int toInt(byte[] bArr) {
        return (bArr[0] & UByte.MAX_VALUE) | (((((((bArr[3] & UByte.MAX_VALUE) | 0) << 8) | (bArr[2] & UByte.MAX_VALUE)) << 8) | (bArr[1] & UByte.MAX_VALUE)) << 8);
    }

    public static long toLong(byte[] bArr) {
        return ((((((((((((((((long) (bArr[7] & UByte.MAX_VALUE)) | 0) << 8) | ((long) (bArr[6] & UByte.MAX_VALUE))) << 8) | ((long) (bArr[5] & UByte.MAX_VALUE))) << 8) | ((long) (bArr[4] & UByte.MAX_VALUE))) << 8) | ((long) (bArr[3] & UByte.MAX_VALUE))) << 8) | ((long) (bArr[2] & UByte.MAX_VALUE))) << 8) | ((long) (bArr[1] & UByte.MAX_VALUE))) << 8) | ((long) (bArr[0] & UByte.MAX_VALUE));
    }

    public static byte[] subBytes(byte[] bArr, int i, int i2) {
        byte[] bArr2 = new byte[i2];
        for (int i3 = 0; i3 < i2; i3++) {
            bArr2[i3] = bArr[i + i3];
        }
        return bArr2;
    }

    public static String bytesToHexString(byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        StringBuilder sb = new StringBuilder(bArr.length * 2);
        for (byte b : bArr) {
            sb.append("0123456789abcdef".charAt((b >> 4) & 15));
            sb.append("0123456789abcdef".charAt(b & 15));
        }
        return sb.toString();
    }

    public static byte[] hexStringToBytes(String str) {
        if (str == null) {
            return null;
        }
        int length = str.length();
        byte[] bArr = new byte[length / 2];
        for (int i = 0; i < length; i += 2) {
            bArr[i / 2] = (byte) ((hexCharToInt(str.charAt(i)) << 4) | hexCharToInt(str.charAt(i + 1)));
        }
        return bArr;
    }

    public static int hexCharToInt(char c) {
        if (c >= '0' && c <= '9') {
            return c - '0';
        }
        char c2 = 'A';
        if (c < 'A' || c > 'F') {
            c2 = 'a';
            if (c < 'a' || c > 'f') {
                throw new RuntimeException("invalid hex char '" + c + "'");
            }
        }
        return (c - c2) + 10;
    }
}
