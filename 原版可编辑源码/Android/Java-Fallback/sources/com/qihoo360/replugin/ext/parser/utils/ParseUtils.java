package com.qihoo360.replugin.ext.parser.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ParseUtils {
    public static java.nio.charset.Charset charsetUTF8;

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.qihoo360.replugin.ext.parser.utils.ParseUtils.charsetUTF8 = r0
            return
    }

    public ParseUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void checkChunkType(int r3, int r4) {
            if (r3 != r4) goto L3
            return
        L3:
            com.qihoo360.replugin.ext.parser.exception.ParserException r0 = new com.qihoo360.replugin.ext.parser.exception.ParserException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expect chunk type:"
            r1.append(r2)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r1.append(r3)
            java.lang.String r3 = ", but got:"
            r1.append(r3)
            java.lang.String r3 = java.lang.Integer.toHexString(r4)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private static int readLen(java.nio.ByteBuffer r2) {
            short r0 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUByte(r2)
            r1 = r0 & 128(0x80, float:1.8E-43)
            if (r1 == 0) goto L13
            r0 = r0 & 127(0x7f, float:1.78E-43)
            int r0 = r0 << 7
            r0 = r0 | 0
            short r2 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUByte(r2)
            int r0 = r0 + r2
        L13:
            return r0
    }

    private static int readLen16(java.nio.ByteBuffer r2) {
            int r0 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r2)
            r1 = 32768(0x8000, float:4.5918E-41)
            r1 = r1 & r0
            if (r1 == 0) goto L15
            r0 = r0 & 32767(0x7fff, float:4.5916E-41)
            int r0 = r0 << 15
            r0 = r0 | 0
            int r2 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r2)
            int r0 = r0 + r2
        L15:
            return r0
    }

    public static com.qihoo360.replugin.ext.parser.struct.ResourceValue readResValue(java.nio.ByteBuffer r0, com.qihoo360.replugin.ext.parser.struct.StringPool r1) {
            com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r0)
            com.qihoo360.replugin.ext.parser.utils.Buffers.readUByte(r0)
            short r1 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUByte(r0)
            int r0 = r0.getInt()
            com.qihoo360.replugin.ext.parser.struct.ResourceValue r0 = com.qihoo360.replugin.ext.parser.struct.ResourceValue.raw(r0, r1)
            return r0
    }

    public static java.lang.String readString(java.nio.ByteBuffer r2, boolean r3) {
            if (r3 == 0) goto L18
            readLen(r2)
            int r3 = readLen(r2)
            byte[] r3 = com.qihoo360.replugin.ext.parser.utils.Buffers.readBytes(r2, r3)
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = com.qihoo360.replugin.ext.parser.utils.ParseUtils.charsetUTF8
            r0.<init>(r3, r1)
            com.qihoo360.replugin.ext.parser.utils.Buffers.readUByte(r2)
            return r0
        L18:
            int r3 = readLen16(r2)
            java.lang.String r3 = com.qihoo360.replugin.ext.parser.utils.Buffers.readString(r2, r3)
            com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r2)
            return r3
    }

    public static com.qihoo360.replugin.ext.parser.struct.StringPool readStringPool(java.nio.ByteBuffer r13, com.qihoo360.replugin.ext.parser.struct.StringPoolHeader r14) {
            int r0 = r13.position()
            long r0 = (long) r0
            long r2 = r14.getStringCount()
            int r2 = (int) r2
            long[] r3 = new long[r2]
            long r4 = r14.getStringCount()
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            r5 = 0
            if (r4 <= 0) goto L2a
            r4 = r5
        L18:
            long r8 = (long) r4
            long r10 = r14.getStringCount()
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 >= 0) goto L2a
            long r8 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r13)
            r3[r4] = r8
            int r4 = r4 + 1
            goto L18
        L2a:
            long r8 = r14.getFlags()
            r10 = 1
            long r8 = r8 & r10
            int r4 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            long r8 = r14.getFlags()
            r10 = 256(0x100, double:1.265E-321)
            long r8 = r8 & r10
            int r4 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r4 == 0) goto L40
            r4 = 1
            goto L41
        L40:
            r4 = r5
        L41:
            long r6 = r14.getStringsStart()
            long r6 = r6 + r0
            int r8 = r14.getHeaderSize()
            long r8 = (long) r8
            long r6 = r6 - r8
            int r8 = (int) r6
            r13.position(r8)
            com.qihoo360.replugin.ext.parser.parser.StringPoolEntry[] r8 = new com.qihoo360.replugin.ext.parser.parser.StringPoolEntry[r2]
            r9 = r5
        L53:
            if (r9 >= r2) goto L62
            com.qihoo360.replugin.ext.parser.parser.StringPoolEntry r10 = new com.qihoo360.replugin.ext.parser.parser.StringPoolEntry
            r11 = r3[r9]
            long r11 = r11 + r6
            r10.<init>(r9, r11)
            r8[r9] = r10
            int r9 = r9 + 1
            goto L53
        L62:
            r3 = 0
            r6 = -1
            com.qihoo360.replugin.ext.parser.struct.StringPool r9 = new com.qihoo360.replugin.ext.parser.struct.StringPool
            long r10 = r14.getStringCount()
            int r10 = (int) r10
            r9.<init>(r10)
        L6f:
            if (r5 >= r2) goto L9d
            r10 = r8[r5]
            long r11 = r10.getOffset()
            int r11 = (r11 > r6 ? 1 : (r11 == r6 ? 0 : -1))
            if (r11 != 0) goto L83
            int r10 = r10.getIdx()
            r9.set(r10, r3)
            goto L9a
        L83:
            long r6 = r10.getOffset()
            int r3 = (int) r6
            r13.position(r3)
            long r6 = r10.getOffset()
            java.lang.String r3 = readString(r13, r4)
            int r10 = r10.getIdx()
            r9.set(r10, r3)
        L9a:
            int r5 = r5 + 1
            goto L6f
        L9d:
            r14.getStyleCount()
            int r14 = r14.getBodySize()
            long r2 = (long) r14
            long r0 = r0 + r2
            int r14 = (int) r0
            r13.position(r14)
            return r9
    }
}
