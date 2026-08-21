package com.qihoo360.replugin.ext.parser.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Buffers {
    public Buffers() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] readBytes(java.nio.ByteBuffer r0, int r1) {
            byte[] r1 = new byte[r1]
            r0.get(r1)
            return r1
    }

    public static java.lang.String readString(java.nio.ByteBuffer r3, int r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r4)
            r1 = 0
        L6:
            if (r1 >= r4) goto L12
            char r2 = r3.getChar()
            r0.append(r2)
            int r1 = r1 + 1
            goto L6
        L12:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static short readUByte(java.nio.ByteBuffer r0) {
            byte r0 = r0.get()
            r0 = r0 & 255(0xff, float:3.57E-43)
            short r0 = (short) r0
            return r0
    }

    public static long readUInt(java.nio.ByteBuffer r4) {
            int r4 = r4.getInt()
            long r0 = (long) r4
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            return r0
    }

    public static int readUShort(java.nio.ByteBuffer r1) {
            short r1 = r1.getShort()
            r0 = 65535(0xffff, float:9.1834E-41)
            r1 = r1 & r0
            return r1
    }

    public static void skip(java.nio.ByteBuffer r1, int r2) {
            int r0 = r1.position()
            int r0 = r0 + r2
            r1.position(r0)
            return
    }
}
