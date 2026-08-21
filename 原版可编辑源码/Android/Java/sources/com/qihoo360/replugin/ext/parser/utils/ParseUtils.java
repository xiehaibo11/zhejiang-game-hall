package com.qihoo360.replugin.ext.parser.utils;

import com.qihoo360.replugin.ext.parser.exception.ParserException;
import com.qihoo360.replugin.ext.parser.parser.StringPoolEntry;
import com.qihoo360.replugin.ext.parser.struct.ResourceValue;
import com.qihoo360.replugin.ext.parser.struct.StringPool;
import com.qihoo360.replugin.ext.parser.struct.StringPoolHeader;
import java.nio.ByteBuffer;
import java.nio.charset.Charset;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ParseUtils {
    public static Charset charsetUTF8 = Charset.forName("UTF-8");

    public static String readString(ByteBuffer byteBuffer, boolean z) {
        if (z) {
            readLen(byteBuffer);
            String str = new String(Buffers.readBytes(byteBuffer, readLen(byteBuffer)), charsetUTF8);
            Buffers.readUByte(byteBuffer);
            return str;
        }
        String string = Buffers.readString(byteBuffer, readLen16(byteBuffer));
        Buffers.readUShort(byteBuffer);
        return string;
    }

    private static int readLen(ByteBuffer byteBuffer) {
        short uByte = Buffers.readUByte(byteBuffer);
        return (uByte & 128) != 0 ? (((uByte & 127) << 7) | 0) + Buffers.readUByte(byteBuffer) : uByte;
    }

    private static int readLen16(ByteBuffer byteBuffer) {
        int uShort = Buffers.readUShort(byteBuffer);
        return (32768 & uShort) != 0 ? (((uShort & 32767) << 15) | 0) + Buffers.readUShort(byteBuffer) : uShort;
    }

    public static StringPool readStringPool(ByteBuffer byteBuffer, StringPoolHeader stringPoolHeader) {
        long jPosition = byteBuffer.position();
        int stringCount = (int) stringPoolHeader.getStringCount();
        long[] jArr = new long[stringCount];
        if (stringPoolHeader.getStringCount() > 0) {
            for (int i = 0; i < stringPoolHeader.getStringCount(); i++) {
                jArr[i] = Buffers.readUInt(byteBuffer);
            }
        }
        int i2 = ((stringPoolHeader.getFlags() & 1) > 0L ? 1 : ((stringPoolHeader.getFlags() & 1) == 0L ? 0 : -1));
        boolean z = (stringPoolHeader.getFlags() & 256) != 0;
        long stringsStart = (stringPoolHeader.getStringsStart() + jPosition) - ((long) stringPoolHeader.getHeaderSize());
        byteBuffer.position((int) stringsStart);
        StringPoolEntry[] stringPoolEntryArr = new StringPoolEntry[stringCount];
        for (int i3 = 0; i3 < stringCount; i3++) {
            stringPoolEntryArr[i3] = new StringPoolEntry(i3, jArr[i3] + stringsStart);
        }
        String string = null;
        long offset = -1;
        StringPool stringPool = new StringPool((int) stringPoolHeader.getStringCount());
        for (int i4 = 0; i4 < stringCount; i4++) {
            StringPoolEntry stringPoolEntry = stringPoolEntryArr[i4];
            if (stringPoolEntry.getOffset() == offset) {
                stringPool.set(stringPoolEntry.getIdx(), string);
            } else {
                byteBuffer.position((int) stringPoolEntry.getOffset());
                offset = stringPoolEntry.getOffset();
                string = readString(byteBuffer, z);
                stringPool.set(stringPoolEntry.getIdx(), string);
            }
        }
        stringPoolHeader.getStyleCount();
        byteBuffer.position((int) (jPosition + ((long) stringPoolHeader.getBodySize())));
        return stringPool;
    }

    public static ResourceValue readResValue(ByteBuffer byteBuffer, StringPool stringPool) {
        Buffers.readUShort(byteBuffer);
        Buffers.readUByte(byteBuffer);
        return ResourceValue.raw(byteBuffer.getInt(), Buffers.readUByte(byteBuffer));
    }

    public static void checkChunkType(int i, int i2) {
        if (i == i2) {
            return;
        }
        throw new ParserException("Expect chunk type:" + Integer.toHexString(i) + ", but got:" + Integer.toHexString(i2));
    }
}
