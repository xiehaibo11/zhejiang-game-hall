package com.qihoo360.replugin.ext.parser.utils;

import java.nio.ByteBuffer;
import kotlin.UByte;
import kotlin.UShort;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Buffers {
    public static short readUByte(ByteBuffer byteBuffer) {
        return (short) (byteBuffer.get() & UByte.MAX_VALUE);
    }

    public static int readUShort(ByteBuffer byteBuffer) {
        return byteBuffer.getShort() & UShort.MAX_VALUE;
    }

    public static long readUInt(ByteBuffer byteBuffer) {
        return ((long) byteBuffer.getInt()) & 4294967295L;
    }

    public static byte[] readBytes(ByteBuffer byteBuffer, int i) {
        byte[] bArr = new byte[i];
        byteBuffer.get(bArr);
        return bArr;
    }

    public static String readString(ByteBuffer byteBuffer, int i) {
        StringBuilder sb = new StringBuilder(i);
        for (int i2 = 0; i2 < i; i2++) {
            sb.append(byteBuffer.getChar());
        }
        return sb.toString();
    }

    public static void skip(ByteBuffer byteBuffer, int i) {
        byteBuffer.position(byteBuffer.position() + i);
    }
}
