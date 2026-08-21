package android.support.multidex;

final class ZipUtil {
    private static final int BUFFER_SIZE = 16384;
    private static final int ENDHDR = 22;
    private static final int ENDSIG = 101010256;

    static class CentralDirectory {
        long offset;
        long size;

        CentralDirectory() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    ZipUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static long computeCrcOfCentralDir(java.io.RandomAccessFile r10, android.support.multidex.ZipUtil.CentralDirectory r11) throws java.io.IOException {
            r8 = 16384(0x4000, double:8.095E-320)
            r7 = 0
            java.util.zip.CRC32 r1 = new java.util.zip.CRC32
            r1.<init>()
            long r3 = r11.size
            long r5 = r11.offset
            r10.seek(r5)
            long r5 = java.lang.Math.min(r8, r3)
            int r2 = (int) r5
            r5 = 16384(0x4000, float:2.2959E-41)
            byte[] r0 = new byte[r5]
            int r2 = r10.read(r0, r7, r2)
        L1c:
            r5 = -1
            if (r2 == r5) goto L2a
            r1.update(r0, r7, r2)
            long r5 = (long) r2
            long r3 = r3 - r5
            r5 = 0
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 != 0) goto L2f
        L2a:
            long r5 = r1.getValue()
            return r5
        L2f:
            long r5 = java.lang.Math.min(r8, r3)
            int r2 = (int) r5
            int r2 = r10.read(r0, r7, r2)
            goto L1c
    }

    static android.support.multidex.ZipUtil.CentralDirectory findCentralDirectory(java.io.RandomAccessFile r15) throws java.io.IOException, java.util.zip.ZipException {
            r13 = 4294967295(0xffffffff, double:2.1219957905E-314)
            r11 = 0
            r10 = 2
            long r6 = r15.length()
            r8 = 22
            long r2 = r6 - r8
            int r6 = (r2 > r11 ? 1 : (r2 == r11 ? 0 : -1))
            if (r6 >= 0) goto L31
            java.util.zip.ZipException r6 = new java.util.zip.ZipException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "File too short to be a zip file: "
            java.lang.StringBuilder r7 = r7.append(r8)
            long r8 = r15.length()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L31:
            r6 = 65536(0x10000, double:3.2379E-319)
            long r4 = r2 - r6
            int r6 = (r4 > r11 ? 1 : (r4 == r11 ? 0 : -1))
            if (r6 >= 0) goto L3c
            r4 = 0
        L3c:
            r6 = 101010256(0x6054b50, float:2.506985E-35)
            int r1 = java.lang.Integer.reverseBytes(r6)
        L43:
            r15.seek(r2)
            int r6 = r15.readInt()
            if (r6 != r1) goto L76
            r15.skipBytes(r10)
            r15.skipBytes(r10)
            r15.skipBytes(r10)
            r15.skipBytes(r10)
            android.support.multidex.ZipUtil$CentralDirectory r0 = new android.support.multidex.ZipUtil$CentralDirectory
            r0.<init>()
            int r6 = r15.readInt()
            int r6 = java.lang.Integer.reverseBytes(r6)
            long r6 = (long) r6
            long r6 = r6 & r13
            r0.size = r6
            int r6 = r15.readInt()
            int r6 = java.lang.Integer.reverseBytes(r6)
            long r6 = (long) r6
            long r6 = r6 & r13
            r0.offset = r6
            return r0
        L76:
            r6 = 1
            long r2 = r2 - r6
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 >= 0) goto L43
            java.util.zip.ZipException r6 = new java.util.zip.ZipException
            java.lang.String r7 = "End Of Central Directory signature not found"
            r6.<init>(r7)
            throw r6
    }

    static long getZipCrc(java.io.File r4) throws java.io.IOException {
            java.io.RandomAccessFile r1 = new java.io.RandomAccessFile
            java.lang.String r2 = "r"
            r1.<init>(r4, r2)
            android.support.multidex.ZipUtil$CentralDirectory r0 = findCentralDirectory(r1)     // Catch: java.lang.Throwable -> L13
            long r2 = computeCrcOfCentralDir(r1, r0)     // Catch: java.lang.Throwable -> L13
            r1.close()
            return r2
        L13:
            r2 = move-exception
            r1.close()
            throw r2
    }
}
