package com.bianfeng.ymnsdk.gongxiang;

import com.bianfeng.afext.read.ApkUtil;
import java.io.IOException;
import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.FileChannel;
import java.util.LinkedHashMap;
import java.util.Map;
import okhttp3.internal.ws.WebSocketProtocol;

public final class a {
    public static long c(FileChannel fileChannel) throws IOException {
        long archiveSize = fileChannel.size();
        if (archiveSize < 22) {
            throw new IOException("APK too small for ZIP End of Central Directory (EOCD) record");
        }
        long maxCommentLength = Math.min(archiveSize - 22, WebSocketProtocol.PAYLOAD_SHORT_MAX);
        long eocdWithEmptyCommentStartPosition = archiveSize - 22;
        for (int expectedCommentLength = 0; expectedCommentLength <= maxCommentLength; expectedCommentLength++) {
            long eocdStartPos = eocdWithEmptyCommentStartPosition - ((long) expectedCommentLength);
            ByteBuffer byteBuffer = ByteBuffer.allocate(4);
            fileChannel.position(eocdStartPos);
            fileChannel.read(byteBuffer);
            byteBuffer.order(ByteOrder.LITTLE_ENDIAN);
            if (byteBuffer.getInt(0) == 101010256) {
                ByteBuffer commentLengthByteBuffer = ByteBuffer.allocate(2);
                fileChannel.position(20 + eocdStartPos);
                fileChannel.read(commentLengthByteBuffer);
                commentLengthByteBuffer.order(ByteOrder.LITTLE_ENDIAN);
                int actualCommentLength = commentLengthByteBuffer.getShort(0);
                if (actualCommentLength == expectedCommentLength) {
                    return actualCommentLength;
                }
            }
        }
        throw new IOException("ZIP End of Central Directory (EOCD) record not found");
    }

    public static long b(FileChannel fileChannel) throws IOException {
        return b(fileChannel, c(fileChannel));
    }

    public static long b(FileChannel fileChannel, long commentLength) throws IOException {
        ByteBuffer zipCentralDirectoryStart = ByteBuffer.allocate(4);
        zipCentralDirectoryStart.order(ByteOrder.LITTLE_ENDIAN);
        fileChannel.position((fileChannel.size() - commentLength) - 6);
        fileChannel.read(zipCentralDirectoryStart);
        long centralDirStartOffset = zipCentralDirectoryStart.getInt(0);
        return centralDirStartOffset;
    }

    public static d<ByteBuffer, Long> a(FileChannel fileChannel) throws IOException, f {
        long centralDirOffset = b(fileChannel);
        return a(fileChannel, centralDirOffset);
    }

    public static d<ByteBuffer, Long> a(FileChannel fileChannel, long centralDirOffset) throws IOException, f {
        if (centralDirOffset < 32) {
            throw new f("APK too small for APK Signing Block. ZIP Central Directory offset: " + centralDirOffset);
        }
        fileChannel.position(centralDirOffset - 24);
        ByteBuffer footer = ByteBuffer.allocate(24);
        fileChannel.read(footer);
        footer.order(ByteOrder.LITTLE_ENDIAN);
        if (footer.getLong(8) != ApkUtil.APK_SIG_BLOCK_MAGIC_LO || footer.getLong(16) != ApkUtil.APK_SIG_BLOCK_MAGIC_HI) {
            throw new f("No APK Signing Block before ZIP Central Directory");
        }
        long apkSigBlockSizeInFooter = footer.getLong(0);
        if (apkSigBlockSizeInFooter < footer.capacity() || apkSigBlockSizeInFooter > 2147483639) {
            throw new f("APK Signing Block size out of range: " + apkSigBlockSizeInFooter);
        }
        int totalSize = (int) (8 + apkSigBlockSizeInFooter);
        long apkSigBlockOffset = centralDirOffset - ((long) totalSize);
        if (apkSigBlockOffset < 0) {
            throw new f("APK Signing Block offset out of range: " + apkSigBlockOffset);
        }
        fileChannel.position(apkSigBlockOffset);
        ByteBuffer apkSigBlock = ByteBuffer.allocate(totalSize);
        fileChannel.read(apkSigBlock);
        apkSigBlock.order(ByteOrder.LITTLE_ENDIAN);
        long apkSigBlockSizeInHeader = apkSigBlock.getLong(0);
        if (apkSigBlockSizeInHeader != apkSigBlockSizeInFooter) {
            throw new f("APK Signing Block sizes in header and footer do not match: " + apkSigBlockSizeInHeader + " vs " + apkSigBlockSizeInFooter);
        }
        return d.a(apkSigBlock, Long.valueOf(apkSigBlockOffset));
    }

    public static Map<Integer, ByteBuffer> b(ByteBuffer apkSigningBlock) throws f {
        a(apkSigningBlock);
        ByteBuffer pairs = a(apkSigningBlock, 8, apkSigningBlock.capacity() - 24);
        Map<Integer, ByteBuffer> idValues = new LinkedHashMap<>();
        int entryCount = 0;
        while (pairs.hasRemaining()) {
            entryCount++;
            if (pairs.remaining() < 8) {
                throw new f("Insufficient data to read size of APK Signing Block entry #" + entryCount);
            }
            long lenLong = pairs.getLong();
            if (lenLong < 4 || lenLong > 2147483647L) {
                throw new f("APK Signing Block entry #" + entryCount + " size out of range: " + lenLong);
            }
            int len = (int) lenLong;
            int nextEntryPos = pairs.position() + len;
            if (len > pairs.remaining()) {
                throw new f("APK Signing Block entry #" + entryCount + " size out of range: " + len + ", available: " + pairs.remaining());
            }
            int id = pairs.getInt();
            idValues.put(Integer.valueOf(id), a(pairs, len - 4));
            pairs.position(nextEntryPos);
        }
        return idValues;
    }

    private static ByteBuffer a(ByteBuffer source, int start, int end) {
        if (start < 0) {
            throw new IllegalArgumentException("start: " + start);
        }
        if (end < start) {
            throw new IllegalArgumentException("end < start: " + end + " < " + start);
        }
        int capacity = source.capacity();
        if (end > source.capacity()) {
            throw new IllegalArgumentException("end > capacity: " + end + " > " + capacity);
        }
        int originalLimit = source.limit();
        int originalPosition = source.position();
        try {
            source.position(0);
            source.limit(end);
            source.position(start);
            ByteBuffer result = source.slice();
            result.order(source.order());
            return result;
        } finally {
            source.position(0);
            source.limit(originalLimit);
            source.position(originalPosition);
        }
    }

    private static ByteBuffer a(ByteBuffer source, int size) throws BufferUnderflowException {
        if (size < 0) {
            throw new IllegalArgumentException("size: " + size);
        }
        int originalLimit = source.limit();
        int position = source.position();
        int limit = position + size;
        if (limit < position || limit > originalLimit) {
            throw new BufferUnderflowException();
        }
        source.limit(limit);
        try {
            ByteBuffer result = source.slice();
            result.order(source.order());
            source.position(limit);
            return result;
        } finally {
            source.limit(originalLimit);
        }
    }

    private static void a(ByteBuffer buffer) {
        if (buffer.order() != ByteOrder.LITTLE_ENDIAN) {
            throw new IllegalArgumentException("ByteBuffer byte order must be little endian");
        }
    }
}
