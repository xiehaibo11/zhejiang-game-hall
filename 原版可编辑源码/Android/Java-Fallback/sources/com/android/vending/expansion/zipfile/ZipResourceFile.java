package com.android.vending.expansion.zipfile;

public class ZipResourceFile {
    static final boolean LOGV = false;
    static final java.lang.String LOG_TAG = "zipro";
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
    private java.util.HashMap<java.lang.String, com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO> mHashMap;
    java.nio.ByteBuffer mLEByteBuffer;
    public java.util.HashMap<java.io.File, java.util.zip.ZipFile> mZipFiles;

    public static final class ZipEntryRO {
        public long mCRC32;
        public long mCompressedLength;
        public final java.io.File mFile;
        public final java.lang.String mFileName;
        public long mLocalHdrOffset;
        public int mMethod;
        public long mOffset;
        public long mUncompressedLength;
        public long mWhenModified;
        public final java.lang.String mZipFileName;

        public ZipEntryRO(java.lang.String r3, java.io.File r4, java.lang.String r5) {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.mOffset = r0
                r2.mFileName = r5
                r2.mZipFileName = r3
                r2.mFile = r4
                return
        }

        public android.content.res.AssetFileDescriptor getAssetFileDescriptor() {
                r8 = this;
                int r0 = r8.mMethod
                if (r0 != 0) goto L1d
                java.io.File r0 = r8.mFile     // Catch: java.io.FileNotFoundException -> L19
                r1 = 268435456(0x10000000, float:2.524355E-29)
                android.os.ParcelFileDescriptor r3 = android.os.ParcelFileDescriptor.open(r0, r1)     // Catch: java.io.FileNotFoundException -> L19
                android.content.res.AssetFileDescriptor r0 = new android.content.res.AssetFileDescriptor     // Catch: java.io.FileNotFoundException -> L19
                long r4 = r8.getOffset()     // Catch: java.io.FileNotFoundException -> L19
                long r6 = r8.mUncompressedLength     // Catch: java.io.FileNotFoundException -> L19
                r2 = r0
                r2.<init>(r3, r4, r6)     // Catch: java.io.FileNotFoundException -> L19
                return r0
            L19:
                r0 = move-exception
                r0.printStackTrace()
            L1d:
                r0 = 0
                return r0
        }

        public long getOffset() {
                r2 = this;
                long r0 = r2.mOffset
                return r0
        }

        public java.io.File getZipFile() {
                r1 = this;
                java.io.File r0 = r1.mFile
                return r0
        }

        public java.lang.String getZipFileName() {
                r1 = this;
                java.lang.String r0 = r1.mZipFileName
                return r0
        }

        public boolean isUncompressed() {
                r1 = this;
                int r0 = r1.mMethod
                if (r0 != 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        public void setOffsetFromFile(java.io.RandomAccessFile r5, java.nio.ByteBuffer r6) throws java.io.IOException {
                r4 = this;
                long r0 = r4.mLocalHdrOffset
                r5.seek(r0)     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                byte[] r2 = r6.array()     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                r5.readFully(r2)     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                r5 = 0
                int r5 = r6.getInt(r5)     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                r2 = 67324752(0x4034b50, float:1.5433558E-36)
                if (r5 != r2) goto L31
                r5 = 26
                short r5 = r6.getShort(r5)     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                r2 = 65535(0xffff, float:9.1834E-41)
                r5 = r5 & r2
                r3 = 28
                short r6 = r6.getShort(r3)     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                r6 = r6 & r2
                r2 = 30
                long r0 = r0 + r2
                long r2 = (long) r5     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                long r0 = r0 + r2
                long r5 = (long) r6     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                long r0 = r0 + r5
                r4.mOffset = r0     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                goto L47
            L31:
                java.lang.String r5 = "zipro"
                java.lang.String r6 = "didn't find signature at start of lfh"
                android.util.Log.w(r5, r6)     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                java.io.IOException r5 = new java.io.IOException     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                r5.<init>()     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
                throw r5     // Catch: java.io.IOException -> L3e java.io.FileNotFoundException -> L43
            L3e:
                r5 = move-exception
                r5.printStackTrace()
                goto L47
            L43:
                r5 = move-exception
                r5.printStackTrace()
            L47:
                return
        }
    }

    public ZipResourceFile(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mHashMap = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mZipFiles = r0
            r0 = 4
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r1.mLEByteBuffer = r0
            r1.addPatchFile(r2)
            return
    }

    private static int read4LE(java.io.RandomAccessFile r0) throws java.io.EOFException, java.io.IOException {
            int r0 = r0.readInt()
            int r0 = swapEndian(r0)
            return r0
    }

    private static int swapEndian(int r2) {
            r0 = r2 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            r1 = 65280(0xff00, float:9.1477E-41)
            r1 = r1 & r2
            int r1 = r1 << 8
            int r0 = r0 + r1
            r1 = 16711680(0xff0000, float:2.3418052E-38)
            r1 = r1 & r2
            int r1 = r1 >>> 8
            int r0 = r0 + r1
            int r2 = r2 >>> 24
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r2
            return r0
    }

    private static int swapEndian(short r2) {
            r0 = r2 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            r1 = 65280(0xff00, float:9.1477E-41)
            r2 = r2 & r1
            int r2 = r2 >>> 8
            r2 = r2 | r0
            return r2
    }

    void addPatchFile(java.lang.String r22) throws java.io.IOException {
            r21 = this;
            r0 = r22
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile
            java.lang.String r3 = "r"
            r2.<init>(r1, r3)
            long r3 = r2.length()
            r5 = 22
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 < 0) goto L1df
            r5 = 65557(0x10015, double:3.23895E-319)
            int r7 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r7 <= 0) goto L20
            r5 = r3
        L20:
            r7 = 0
            r2.seek(r7)
            int r7 = read4LE(r2)
            r8 = 101010256(0x6054b50, float:2.506985E-35)
            java.lang.String r9 = "zipro"
            if (r7 == r8) goto L1d2
            r10 = 67324752(0x4034b50, float:1.5433558E-36)
            if (r7 != r10) goto L1c5
            long r10 = r3 - r5
            r2.seek(r10)
            int r6 = (int) r5
            java.nio.ByteBuffer r5 = java.nio.ByteBuffer.allocate(r6)
            byte[] r6 = r5.array()
            r2.readFully(r6)
            java.nio.ByteOrder r7 = java.nio.ByteOrder.LITTLE_ENDIAN
            r5.order(r7)
            int r7 = r6.length
            int r7 = r7 + (-22)
        L4e:
            if (r7 < 0) goto L60
            r10 = r6[r7]
            r11 = 80
            if (r10 != r11) goto L5d
            int r10 = r5.getInt(r7)
            if (r10 != r8) goto L5d
            goto L60
        L5d:
            int r7 = r7 + (-1)
            goto L4e
        L60:
            if (r7 >= 0) goto L7b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r8 = "Zip: EOCD not found, "
            r6.append(r8)
            r6.append(r0)
            java.lang.String r8 = " is not zip"
            r6.append(r8)
            java.lang.String r6 = r6.toString()
            android.util.Log.d(r9, r6)
        L7b:
            int r6 = r7 + 8
            short r6 = r5.getShort(r6)
            int r8 = r7 + 12
            int r8 = r5.getInt(r8)
            long r10 = (long) r8
            r12 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r10 = r10 & r12
            int r8 = r7 + 16
            int r5 = r5.getInt(r8)
            long r14 = (long) r5
            long r14 = r14 & r12
            long r16 = r14 + r10
            java.lang.String r5 = ")"
            int r8 = (r16 > r3 ? 1 : (r16 == r3 ? 0 : -1))
            if (r8 > 0) goto L195
            if (r6 == 0) goto L188
            java.nio.channels.FileChannel r3 = r2.getChannel()
            java.nio.channels.FileChannel$MapMode r4 = java.nio.channels.FileChannel.MapMode.READ_ONLY
            r7 = r14
            r14 = r3
            r15 = r4
            r16 = r7
            r18 = r10
            java.nio.MappedByteBuffer r3 = r14.map(r15, r16, r18)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.LITTLE_ENDIAN
            r3.order(r4)
            r4 = 65535(0xffff, float:9.1834E-41)
            byte[] r7 = new byte[r4]
            r8 = 30
            java.nio.ByteBuffer r8 = java.nio.ByteBuffer.allocate(r8)
            java.nio.ByteOrder r10 = java.nio.ByteOrder.LITTLE_ENDIAN
            r8.order(r10)
            r10 = 0
            r11 = 0
            r14 = 0
        Lc9:
            if (r11 >= r6) goto L185
            int r15 = r3.getInt(r14)
            r12 = 33639248(0x2014b50, float:9.499037E-38)
            if (r15 != r12) goto L166
            int r12 = r14 + 28
            short r12 = r3.getShort(r12)
            r12 = r12 & r4
            int r13 = r14 + 30
            short r13 = r3.getShort(r13)
            r13 = r13 & r4
            int r15 = r14 + 32
            short r15 = r3.getShort(r15)
            r15 = r15 & r4
            int r4 = r14 + 46
            r3.position(r4)
            r3.get(r7, r10, r12)
            r3.position(r10)
            java.lang.String r4 = new java.lang.String
            r4.<init>(r7, r10, r12)
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO r10 = new com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO
            r10.<init>(r0, r1, r4)
            int r0 = r14 + 10
            short r0 = r3.getShort(r0)
            r18 = 65535(0xffff, float:9.1834E-41)
            r0 = r0 & r18
            r10.mMethod = r0
            int r0 = r14 + 12
            int r0 = r3.getInt(r0)
            r20 = r1
            long r0 = (long) r0
            r16 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r16
            r10.mWhenModified = r0
            int r0 = r14 + 16
            long r0 = r3.getLong(r0)
            long r0 = r0 & r16
            r10.mCRC32 = r0
            int r0 = r14 + 20
            long r0 = r3.getLong(r0)
            long r0 = r0 & r16
            r10.mCompressedLength = r0
            int r0 = r14 + 24
            long r0 = r3.getLong(r0)
            long r0 = r0 & r16
            r10.mUncompressedLength = r0
            int r0 = r14 + 42
            int r0 = r3.getInt(r0)
            long r0 = (long) r0
            long r0 = r0 & r16
            r10.mLocalHdrOffset = r0
            r8.clear()
            r10.setOffsetFromFile(r2, r8)
            r0 = r21
            java.util.HashMap<java.lang.String, com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO> r1 = r0.mHashMap
            r1.put(r4, r10)
            int r12 = r12 + 46
            int r12 = r12 + r13
            int r12 = r12 + r15
            int r14 = r14 + r12
            int r11 = r11 + 1
            r0 = r22
            r12 = r16
            r1 = r20
            r4 = 65535(0xffff, float:9.1834E-41)
            r10 = 0
            goto Lc9
        L166:
            r0 = r21
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Missed a central dir sig (at "
            r1.append(r2)
            r1.append(r14)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            android.util.Log.w(r9, r1)
            java.io.IOException r1 = new java.io.IOException
            r1.<init>()
            throw r1
        L185:
            r0 = r21
            return
        L188:
            r0 = r21
            java.lang.String r1 = "empty archive?"
            android.util.Log.w(r9, r1)
            java.io.IOException r1 = new java.io.IOException
            r1.<init>()
            throw r1
        L195:
            r0 = r21
            r1 = r14
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "bad offsets (dir "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = ", size "
            r3.append(r1)
            r3.append(r10)
            java.lang.String r1 = ", eocd "
            r3.append(r1)
            r3.append(r7)
            r3.append(r5)
            java.lang.String r1 = r3.toString()
            android.util.Log.w(r9, r1)
            java.io.IOException r1 = new java.io.IOException
            r1.<init>()
            throw r1
        L1c5:
            r0 = r21
            java.lang.String r1 = "Not a Zip archive"
            android.util.Log.v(r9, r1)
            java.io.IOException r1 = new java.io.IOException
            r1.<init>()
            throw r1
        L1d2:
            r0 = r21
            java.lang.String r1 = "Found Zip archive, but it looks empty"
            android.util.Log.i(r9, r1)
            java.io.IOException r1 = new java.io.IOException
            r1.<init>()
            throw r1
        L1df:
            r0 = r21
            java.io.IOException r1 = new java.io.IOException
            r1.<init>()
            throw r1
    }

    public com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO[] getAllEntries() {
            r2 = this;
            java.util.HashMap<java.lang.String, com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO> r0 = r2.mHashMap
            java.util.Collection r0 = r0.values()
            int r1 = r0.size()
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO[] r1 = new com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO[r1]
            java.lang.Object[] r0 = r0.toArray(r1)
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO[] r0 = (com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO[]) r0
            return r0
    }

    public android.content.res.AssetFileDescriptor getAssetFileDescriptor(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO> r0 = r1.mHashMap
            java.lang.Object r2 = r0.get(r2)
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO r2 = (com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO) r2
            if (r2 == 0) goto Lf
            android.content.res.AssetFileDescriptor r2 = r2.getAssetFileDescriptor()
            return r2
        Lf:
            r2 = 0
            return r2
    }

    com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO[] getEntriesAt(java.lang.String r8) {
            r7 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            java.util.HashMap<java.lang.String, com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO> r1 = r7.mHashMap
            java.util.Collection r1 = r1.values()
            if (r8 != 0) goto Lf
            java.lang.String r8 = ""
        Lf:
            int r2 = r8.length()
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L3a
            java.lang.Object r3 = r1.next()
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO r3 = (com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO) r3
            java.lang.String r4 = r3.mFileName
            boolean r4 = r4.startsWith(r8)
            if (r4 == 0) goto L17
            r4 = -1
            java.lang.String r5 = r3.mFileName
            r6 = 47
            int r5 = r5.indexOf(r6, r2)
            if (r4 != r5) goto L17
            r0.add(r3)
            goto L17
        L3a:
            int r8 = r0.size()
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO[] r8 = new com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO[r8]
            java.lang.Object[] r8 = r0.toArray(r8)
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO[] r8 = (com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO[]) r8
            return r8
    }

    public java.io.InputStream getInputStream(java.lang.String r5) throws java.io.IOException {
            r4 = this;
            java.util.HashMap<java.lang.String, com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO> r0 = r4.mHashMap
            java.lang.Object r0 = r0.get(r5)
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO r0 = (com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO) r0
            if (r0 == 0) goto L45
            boolean r1 = r0.isUncompressed()
            if (r1 == 0) goto L19
            android.content.res.AssetFileDescriptor r5 = r0.getAssetFileDescriptor()
            java.io.FileInputStream r5 = r5.createInputStream()
            return r5
        L19:
            java.util.HashMap<java.io.File, java.util.zip.ZipFile> r1 = r4.mZipFiles
            java.io.File r2 = r0.getZipFile()
            java.lang.Object r1 = r1.get(r2)
            java.util.zip.ZipFile r1 = (java.util.zip.ZipFile) r1
            if (r1 != 0) goto L3a
            java.util.zip.ZipFile r1 = new java.util.zip.ZipFile
            java.io.File r2 = r0.getZipFile()
            r3 = 1
            r1.<init>(r2, r3)
            java.util.HashMap<java.io.File, java.util.zip.ZipFile> r2 = r4.mZipFiles
            java.io.File r0 = r0.getZipFile()
            r2.put(r0, r1)
        L3a:
            java.util.zip.ZipEntry r5 = r1.getEntry(r5)
            if (r5 == 0) goto L45
            java.io.InputStream r5 = r1.getInputStream(r5)
            return r5
        L45:
            r5 = 0
            return r5
    }
}
