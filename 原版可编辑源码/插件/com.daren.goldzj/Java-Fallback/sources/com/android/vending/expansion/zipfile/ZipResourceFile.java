package com.android.vending.expansion.zipfile;

import android.content.res.AssetFileDescriptor;
import android.os.ParcelFileDescriptor;
import android.util.Log;
import java.io.EOFException;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.MappedByteBuffer;
import java.nio.channels.FileChannel;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Vector;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

public class ZipResourceFile {
    static final boolean LOGV = false;
    static final String LOG_TAG = "zipro";
    static final int kCDECRC = 16;
    static final int kCDECommentLen = 32;
    static final int kCDECompLen = 20;
    static final int kCDEExtraLen = 30;
    static final int kCDELen = 46;
    static final int kCDELocalOffset = 42;
    static final int kCDEMethod = 10;
    static final int kCDEModWhen = 12;
    static final int kCDENameLen = 28;
    static final int kCDESignature = 33639248;
    static final int kCDEUncompLen = 24;
    static final int kCompressDeflated = 8;
    static final int kCompressStored = 0;
    static final int kEOCDFileOffset = 16;
    static final int kEOCDLen = 22;
    static final int kEOCDNumEntries = 8;
    static final int kEOCDSignature = 101010256;
    static final int kEOCDSize = 12;
    static final int kLFHExtraLen = 28;
    static final int kLFHLen = 30;
    static final int kLFHNameLen = 26;
    static final int kLFHSignature = 67324752;
    static final int kMaxCommentLen = 65535;
    static final int kMaxEOCDSearch = 65557;
    static final int kZipEntryAdj = 10000;
    private HashMap<String, ZipEntryRO> mHashMap;
    ByteBuffer mLEByteBuffer;
    public HashMap<File, ZipFile> mZipFiles;

    public static final class ZipEntryRO {
        public long mCRC32;
        public long mCompressedLength;
        public final File mFile;
        public final String mFileName;
        public long mLocalHdrOffset;
        public int mMethod;
        public long mOffset;
        public long mUncompressedLength;
        public long mWhenModified;
        public final String mZipFileName;

        public ZipEntryRO(String r3, File r4, String r5) {
            this.mOffset = -1;
            this.mFileName = r5;
            this.mZipFileName = r3;
            this.mFile = r4;
        }

        public void setOffsetFromFile(RandomAccessFile r5, ByteBuffer r6) throws IOException {
            long r0 = this.mLocalHdrOffset;
            r5.seek(r0);     // Catch: IOException -> L8 FileNotFoundException -> L10
            r5.readFully(r6.array());     // Catch: IOException -> L8 FileNotFoundException -> L10
            if (r6.getInt(0) != ZipResourceFile.kLFHSignature) goto L6;
            int r52 = r6.getShort(26) & 65535;     // Catch: IOException -> L8 FileNotFoundException -> L10
            this.mOffset = ((r0 + 30) + ((long) r52)) + ((long) (r6.getShort(28) & 65535));     // Catch: IOException -> L8 FileNotFoundException -> L10
            return;
        L6:
            Log.w(ZipResourceFile.LOG_TAG, "didn't find signature at start of lfh");     // Catch: IOException -> L8 FileNotFoundException -> L10
            throw new IOException();     // Catch: IOException -> L8 FileNotFoundException -> L10
        L10:
            e = move-exception;
            e.printStackTrace();
            return;
        L8:
            e = move-exception;
            e.printStackTrace();
        }

        public long getOffset() {
            return this.mOffset;
        }

        public boolean isUncompressed() {
            if (this.mMethod != 0) goto L5;
            return true;
        L5:
            return false;
        }

        public AssetFileDescriptor getAssetFileDescriptor() {
            if (this.mMethod != 0) goto L12;
            return new AssetFileDescriptor(ParcelFileDescriptor.open(this.mFile, 268435456), getOffset(), this.mUncompressedLength);
        L6:
            e = move-exception;
            e.printStackTrace();
            return null;
        L12:
            return null;
        }

        public String getZipFileName() {
            return this.mZipFileName;
        }

        public File getZipFile() {
            return this.mFile;
        }
    }

    private static int swapEndian(int r2) {
        return ((((r2 & 255) << 24) + ((65280 & r2) << 8)) + ((16711680 & r2) >>> 8)) + ((r2 >>> 24) & 255);
    }

    private static int swapEndian(short r2) {
        int r0 = (r2 & 255) << 8;
        return ((r2 & 65280) >>> 8) | r0;
    }

    public ZipResourceFile(String r2) throws IOException {
        this.mHashMap = new HashMap();
        this.mZipFiles = new HashMap();
        this.mLEByteBuffer = ByteBuffer.allocate(4);
        addPatchFile(r2);
    }

    ZipEntryRO[] getEntriesAt(String r8) {
        Vector r0 = new Vector();
        Collection<ZipEntryRO> r1 = this.mHashMap.values();
        if (r8 != null) goto L5;
        r8 = "";
    L5:
        int r2 = r8.length();
        Iterator<ZipEntryRO> r12 = r1.iterator();
    L7:
        if (r12.hasNext() == false) goto L14;
        ZipEntryRO r3 = r12.next();
        if (r3.mFileName.startsWith(r8) == false) goto L7;
        if ((-1) != r3.mFileName.indexOf(47, r2)) goto L7;
        r0.add(r3);
        goto L7
    L14:
        return (ZipEntryRO[]) r0.toArray(new ZipEntryRO[r0.size()]);
    }

    public ZipEntryRO[] getAllEntries() {
        Collection<ZipEntryRO> r0 = this.mHashMap.values();
        return (ZipEntryRO[]) r0.toArray(new ZipEntryRO[r0.size()]);
    }

    public AssetFileDescriptor getAssetFileDescriptor(String r2) {
        ZipEntryRO r22 = this.mHashMap.get(r2);
        if (r22 != null) goto L5;
        return null;
    L5:
        return r22.getAssetFileDescriptor();
    }

    public InputStream getInputStream(String r5) throws IOException {
        ZipEntryRO r0 = this.mHashMap.get(r5);
        if (r0 != null) goto L5;
        return null;
    L5:
        if (r0.isUncompressed() == true) goto L7;
        ZipFile r1 = this.mZipFiles.get(r0.getZipFile());
        if (r1 != null) goto L11;
        r1 = new ZipFile(r0.getZipFile(), 1);
        this.mZipFiles.put(r0.getZipFile(), r1);
    L11:
        ZipEntry r52 = r1.getEntry(r5);
        if (r52 != null) goto L14;
        return null;
    L14:
        return r1.getInputStream(r52);
    L7:
        return r0.getAssetFileDescriptor().createInputStream();
    }

    private static int read4LE(RandomAccessFile r0) throws EOFException, IOException {
        return swapEndian(r0.readInt());
    }

    void addPatchFile(String r22) throws IOException {
        String r0 = r22;
        File r1 = new File(r0);
        RandomAccessFile r2 = new RandomAccessFile(r1, "r");
        long r3 = r2.length();
        if (r3 < 22) goto L42;
        long r5 = 65557;
        if (65557 <= r3) goto L7;
        r5 = r3;
    L7:
        r2.seek(0);
        int r7 = read4LE(r2);
        if (r7 != kEOCDSignature) goto L10;
        Log.i(LOG_TAG, "Found Zip archive, but it looks empty");
        throw new IOException();
    L10:
        if (r7 != kLFHSignature) goto L37;
        r2.seek(r3 - r5);
        ByteBuffer r52 = ByteBuffer.allocate((int) r5);
        byte[] r6 = r52.array();
        r2.readFully(r6);
        r52.order(ByteOrder.LITTLE_ENDIAN);
        int r72 = r6.length - 22;
    L12:
        if (r72 < 0) goto L19;
        if (r6[r72] != 80) goto L18;
        if (r52.getInt(r72) == kEOCDSignature) goto L19;
    L18:
        r72 = r72 - 1;
    L19:
        if (r72 >= 0) goto L21;
        Log.d(LOG_TAG, "Zip: EOCD not found, " + r0 + " is not zip");
    L21:
        short r62 = r52.getShort(r72 + 8);
        long r10 = ((long) r52.getInt(r72 + 12)) & 4294967295L;
        long r14 = ((long) r52.getInt(r72 + 16)) & 4294967295L;
        if ((r14 + r10) > r3) goto L35;
        if (r62 == 0) goto L33;
        MappedByteBuffer r32 = r2.getChannel().map(FileChannel.MapMode.READ_ONLY, r14, r10);
        r32.order(ByteOrder.LITTLE_ENDIAN);
        short r4 = 65535;
        byte[] r73 = new byte[65535];
        ByteBuffer r8 = ByteBuffer.allocate(30);
        r8.order(ByteOrder.LITTLE_ENDIAN);
        int r102 = 0;
        int r11 = 0;
        int r142 = 0;
    L25:
        if (r11 >= r62) goto L32;
        if (r32.getInt(r142) != kCDESignature) goto L29;
        int r12 = r32.getShort(r142 + 28) & r4;
        int r13 = r32.getShort(r142 + 30) & r4;
        int r15 = r32.getShort(r142 + 32) & r4;
        r32.position(r142 + 46);
        r32.get(r73, r102, r12);
        r32.position(r102);
        String r42 = new String(r73, r102, r12);
        ZipEntryRO r103 = new ZipEntryRO(r0, r1, r42);
        r103.mMethod = r32.getShort(r142 + 10) & 65535;
        r103.mWhenModified = ((long) r32.getInt(r142 + 12)) & 4294967295L;
        r103.mCRC32 = r32.getLong(r142 + 16) & 4294967295L;
        r103.mCompressedLength = r32.getLong(r142 + 20) & 4294967295L;
        r103.mUncompressedLength = r32.getLong(r142 + 24) & 4294967295L;
        r103.mLocalHdrOffset = ((long) r32.getInt(r142 + 42)) & 4294967295L;
        r8.clear();
        r103.setOffsetFromFile(r2, r8);
        this.mHashMap.put(r42, r103);
        r142 = r142 + (((r12 + 46) + r13) + r15);
        r11 = r11 + 1;
        r0 = r22;
        r1 = r1;
        r4 = 65535;
        r102 = 0;
        goto L25
    L29:
        Log.w(LOG_TAG, "Missed a central dir sig (at " + r142 + ")");
        throw new IOException();
    L32:
        return;
    L33:
        Log.w(LOG_TAG, "empty archive?");
        throw new IOException();
    L35:
        Log.w(LOG_TAG, "bad offsets (dir " + r14 + ", size " + r10 + ", eocd " + r72 + ")");
        throw new IOException();
    L37:
        Log.v(LOG_TAG, "Not a Zip archive");
        throw new IOException();
    L42:
        throw new IOException();
    }
}
