package com.bumptech.glide.load.resource.bitmap;

public class ImageHeaderParser {
    private static final int[] BYTES_PER_FORMAT = null;
    private static final int EXIF_MAGIC_NUMBER = 65496;
    private static final int EXIF_SEGMENT_TYPE = 225;
    private static final int GIF_HEADER = 4671814;
    private static final int INTEL_TIFF_MAGIC_NUMBER = 18761;
    private static final java.lang.String JPEG_EXIF_SEGMENT_PREAMBLE = "Exif\u0000\u0000";
    private static final byte[] JPEG_EXIF_SEGMENT_PREAMBLE_BYTES = null;
    private static final int MARKER_EOI = 217;
    private static final int MOTOROLA_TIFF_MAGIC_NUMBER = 19789;
    private static final int ORIENTATION_TAG_TYPE = 274;
    private static final int PNG_HEADER = -1991225785;
    private static final int SEGMENT_SOS = 218;
    private static final int SEGMENT_START_ID = 255;
    private static final java.lang.String TAG = "ImageHeaderParser";
    private final com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.StreamReader streamReader;

    public enum ImageType extends java.lang.Enum<com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType> {
        private static final com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType[] $VALUES = null;
        public static final com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType GIF = null;
        public static final com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType JPEG = null;
        public static final com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType PNG = null;
        public static final com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType PNG_A = null;
        public static final com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType UNKNOWN = null;
        private final boolean hasAlpha;

        static {
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType
                java.lang.String r1 = "GIF"
                r2 = 0
                r3 = 1
                r0.<init>(r1, r2, r3)
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.GIF = r0
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType
                java.lang.String r1 = "JPEG"
                r0.<init>(r1, r3, r2)
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.JPEG = r0
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType
                java.lang.String r1 = "PNG_A"
                r4 = 2
                r0.<init>(r1, r4, r3)
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.PNG_A = r0
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType
                java.lang.String r1 = "PNG"
                r5 = 3
                r0.<init>(r1, r5, r2)
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.PNG = r0
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType
                java.lang.String r1 = "UNKNOWN"
                r6 = 4
                r0.<init>(r1, r6, r2)
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.UNKNOWN = r0
                r1 = 5
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType[] r1 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType[r1]
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r7 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.GIF
                r1[r2] = r7
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r2 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.JPEG
                r1[r3] = r2
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r2 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.PNG_A
                r1[r4] = r2
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r2 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.PNG
                r1[r5] = r2
                r1[r6] = r0
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.$VALUES = r1
                return
        }

        ImageType(java.lang.String r1, int r2, boolean r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.hasAlpha = r3
                return
        }

        public static com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType valueOf(java.lang.String r1) {
                java.lang.Class<com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType> r0 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r1 = (com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType) r1
                return r1
        }

        public static com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType[] values() {
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType[] r0 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType[] r0 = (com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType[]) r0
                return r0
        }

        public boolean hasAlpha() {
                r1 = this;
                boolean r0 = r1.hasAlpha
                return r0
        }
    }

    private static class RandomAccessReader {
        private final java.nio.ByteBuffer data;

        public RandomAccessReader(byte[] r2) {
                r1 = this;
                r1.<init>()
                java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
                r1.data = r2
                java.nio.ByteOrder r0 = java.nio.ByteOrder.BIG_ENDIAN
                r2.order(r0)
                return
        }

        public short getInt16(int r2) {
                r1 = this;
                java.nio.ByteBuffer r0 = r1.data
                short r2 = r0.getShort(r2)
                return r2
        }

        public int getInt32(int r2) {
                r1 = this;
                java.nio.ByteBuffer r0 = r1.data
                int r2 = r0.getInt(r2)
                return r2
        }

        public int length() {
                r1 = this;
                java.nio.ByteBuffer r0 = r1.data
                byte[] r0 = r0.array()
                int r0 = r0.length
                return r0
        }

        public void order(java.nio.ByteOrder r2) {
                r1 = this;
                java.nio.ByteBuffer r0 = r1.data
                r0.order(r2)
                return
        }
    }

    private static class StreamReader {
        private final java.io.InputStream is;

        public StreamReader(java.io.InputStream r1) {
                r0 = this;
                r0.<init>()
                r0.is = r1
                return
        }

        public int getByte() throws java.io.IOException {
                r1 = this;
                java.io.InputStream r0 = r1.is
                int r0 = r0.read()
                return r0
        }

        public int getUInt16() throws java.io.IOException {
                r2 = this;
                java.io.InputStream r0 = r2.is
                int r0 = r0.read()
                int r0 = r0 << 8
                r1 = 65280(0xff00, float:9.1477E-41)
                r0 = r0 & r1
                java.io.InputStream r1 = r2.is
                int r1 = r1.read()
                r1 = r1 & 255(0xff, float:3.57E-43)
                r0 = r0 | r1
                return r0
        }

        public short getUInt8() throws java.io.IOException {
                r1 = this;
                java.io.InputStream r0 = r1.is
                int r0 = r0.read()
                r0 = r0 & 255(0xff, float:3.57E-43)
                short r0 = (short) r0
                return r0
        }

        public int read(byte[] r4) throws java.io.IOException {
                r3 = this;
                int r0 = r4.length
            L1:
                if (r0 <= 0) goto L10
                java.io.InputStream r1 = r3.is
                int r2 = r4.length
                int r2 = r2 - r0
                int r1 = r1.read(r4, r2, r0)
                r2 = -1
                if (r1 == r2) goto L10
                int r0 = r0 - r1
                goto L1
            L10:
                int r4 = r4.length
                int r4 = r4 - r0
                return r4
        }

        public long skip(long r8) throws java.io.IOException {
                r7 = this;
                r0 = 0
                int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
                if (r2 >= 0) goto L7
                return r0
            L7:
                r2 = r8
            L8:
                int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r4 <= 0) goto L25
                java.io.InputStream r4 = r7.is
                long r4 = r4.skip(r2)
                int r6 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
                if (r6 <= 0) goto L18
            L16:
                long r2 = r2 - r4
                goto L8
            L18:
                java.io.InputStream r4 = r7.is
                int r4 = r4.read()
                r5 = -1
                if (r4 != r5) goto L22
                goto L25
            L22:
                r4 = 1
                goto L16
            L25:
                long r8 = r8 - r2
                return r8
        }
    }

    static {
            r0 = 13
            int[] r0 = new int[r0]
            r0 = {x0018: FILL_ARRAY_DATA , data: [0, 1, 1, 2, 4, 8, 1, 1, 2, 4, 8, 4, 8} // fill-array
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.BYTES_PER_FORMAT = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            java.lang.String r1 = "Exif\u0000\u0000"
            java.lang.String r2 = "UTF-8"
            byte[] r0 = r1.getBytes(r2)     // Catch: java.io.UnsupportedEncodingException -> L14
        L14:
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.JPEG_EXIF_SEGMENT_PREAMBLE_BYTES = r0
            return
    }

    public ImageHeaderParser(java.io.InputStream r2) {
            r1 = this;
            r1.<init>()
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r0 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader
            r0.<init>(r2)
            r1.streamReader = r0
            return
    }

    private static int calcTagOffset(int r0, int r1) {
            int r0 = r0 + 2
            int r1 = r1 * 12
            int r0 = r0 + r1
            return r0
    }

    private byte[] getExifSegment() throws java.io.IOException {
            r10 = this;
        L0:
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r0 = r10.streamReader
            short r0 = r0.getUInt8()
            r1 = 255(0xff, float:3.57E-43)
            r2 = 3
            r3 = 0
            java.lang.String r4 = "ImageHeaderParser"
            if (r0 == r1) goto L29
            boolean r1 = android.util.Log.isLoggable(r4, r2)
            if (r1 == 0) goto L28
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown segmentId="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            android.util.Log.d(r4, r0)
        L28:
            return r3
        L29:
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r0 = r10.streamReader
            short r0 = r0.getUInt8()
            r1 = 218(0xda, float:3.05E-43)
            if (r0 != r1) goto L34
            return r3
        L34:
            r1 = 217(0xd9, float:3.04E-43)
            if (r0 != r1) goto L44
            boolean r0 = android.util.Log.isLoggable(r4, r2)
            if (r0 == 0) goto L43
            java.lang.String r0 = "Found MARKER_EOI in exif segment"
            android.util.Log.d(r4, r0)
        L43:
            return r3
        L44:
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r1 = r10.streamReader
            int r1 = r1.getUInt16()
            int r1 = r1 + (-2)
            r5 = 225(0xe1, float:3.15E-43)
            if (r0 == r5) goto L86
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r5 = r10.streamReader
            long r6 = (long) r1
            long r8 = r5.skip(r6)
            int r5 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r5 == 0) goto L0
            boolean r2 = android.util.Log.isLoggable(r4, r2)
            if (r2 == 0) goto L85
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "Unable to skip enough data, type: "
            r2.append(r5)
            r2.append(r0)
            java.lang.String r0 = ", wanted to skip: "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = ", but actually skipped: "
            r2.append(r0)
            r2.append(r8)
            java.lang.String r0 = r2.toString()
            android.util.Log.d(r4, r0)
        L85:
            return r3
        L86:
            byte[] r5 = new byte[r1]
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r6 = r10.streamReader
            int r6 = r6.read(r5)
            if (r6 == r1) goto Lbb
            boolean r2 = android.util.Log.isLoggable(r4, r2)
            if (r2 == 0) goto Lba
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "Unable to read segment data, type: "
            r2.append(r5)
            r2.append(r0)
            java.lang.String r0 = ", length: "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = ", actually read: "
            r2.append(r0)
            r2.append(r6)
            java.lang.String r0 = r2.toString()
            android.util.Log.d(r4, r0)
        Lba:
            return r3
        Lbb:
            return r5
    }

    private static boolean handles(int r2) {
            r0 = 65496(0xffd8, float:9.178E-41)
            r1 = r2 & r0
            if (r1 == r0) goto L12
            r0 = 19789(0x4d4d, float:2.773E-41)
            if (r2 == r0) goto L12
            r0 = 18761(0x4949, float:2.629E-41)
            if (r2 != r0) goto L10
            goto L12
        L10:
            r2 = 0
            goto L13
        L12:
            r2 = 1
        L13:
            return r2
    }

    private static int parseExifSegment(com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.RandomAccessReader r12) {
            r0 = 6
            short r1 = r12.getInt16(r0)
            r2 = 3
            java.lang.String r3 = "ImageHeaderParser"
            r4 = 19789(0x4d4d, float:2.773E-41)
            if (r1 != r4) goto Lf
            java.nio.ByteOrder r1 = java.nio.ByteOrder.BIG_ENDIAN
            goto L32
        Lf:
            r4 = 18761(0x4949, float:2.629E-41)
            if (r1 != r4) goto L16
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            goto L32
        L16:
            boolean r4 = android.util.Log.isLoggable(r3, r2)
            if (r4 == 0) goto L30
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Unknown endianness = "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            android.util.Log.d(r3, r1)
        L30:
            java.nio.ByteOrder r1 = java.nio.ByteOrder.BIG_ENDIAN
        L32:
            r12.order(r1)
            r1 = 10
            int r1 = r12.getInt32(r1)
            int r1 = r1 + r0
            short r0 = r12.getInt16(r1)
            r4 = 0
        L41:
            if (r4 >= r0) goto L13f
            int r5 = calcTagOffset(r1, r4)
            short r6 = r12.getInt16(r5)
            r7 = 274(0x112, float:3.84E-43)
            if (r6 == r7) goto L51
            goto L13b
        L51:
            int r7 = r5 + 2
            short r7 = r12.getInt16(r7)
            r8 = 1
            if (r7 < r8) goto L121
            r8 = 12
            if (r7 <= r8) goto L60
            goto L121
        L60:
            int r8 = r5 + 4
            int r8 = r12.getInt32(r8)
            if (r8 >= 0) goto L75
            boolean r5 = android.util.Log.isLoggable(r3, r2)
            if (r5 == 0) goto L13b
            java.lang.String r5 = "Negative tiff component count"
            android.util.Log.d(r3, r5)
            goto L13b
        L75:
            boolean r9 = android.util.Log.isLoggable(r3, r2)
            java.lang.String r10 = " tagType="
            if (r9 == 0) goto La7
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r11 = "Got tagIndex="
            r9.append(r11)
            r9.append(r4)
            r9.append(r10)
            r9.append(r6)
            java.lang.String r11 = " formatCode="
            r9.append(r11)
            r9.append(r7)
            java.lang.String r11 = " componentCount="
            r9.append(r11)
            r9.append(r8)
            java.lang.String r9 = r9.toString()
            android.util.Log.d(r3, r9)
        La7:
            int[] r9 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.BYTES_PER_FORMAT
            r9 = r9[r7]
            int r8 = r8 + r9
            r9 = 4
            if (r8 <= r9) goto Lcb
            boolean r5 = android.util.Log.isLoggable(r3, r2)
            if (r5 == 0) goto L13b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Got byte count > 4, not orientation, continuing, formatCode="
            r5.append(r6)
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            android.util.Log.d(r3, r5)
            goto L13b
        Lcb:
            int r5 = r5 + 8
            if (r5 < 0) goto L100
            int r7 = r12.length()
            if (r5 <= r7) goto Ld6
            goto L100
        Ld6:
            if (r8 < 0) goto Le5
            int r8 = r8 + r5
            int r7 = r12.length()
            if (r8 <= r7) goto Le0
            goto Le5
        Le0:
            short r12 = r12.getInt16(r5)
            return r12
        Le5:
            boolean r5 = android.util.Log.isLoggable(r3, r2)
            if (r5 == 0) goto L13b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "Illegal number of bytes for TI tag data tagType="
            r5.append(r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.d(r3, r5)
            goto L13b
        L100:
            boolean r7 = android.util.Log.isLoggable(r3, r2)
            if (r7 == 0) goto L13b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Illegal tagValueOffset="
            r7.append(r8)
            r7.append(r5)
            r7.append(r10)
            r7.append(r6)
            java.lang.String r5 = r7.toString()
            android.util.Log.d(r3, r5)
            goto L13b
        L121:
            boolean r5 = android.util.Log.isLoggable(r3, r2)
            if (r5 == 0) goto L13b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Got invalid format code="
            r5.append(r6)
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            android.util.Log.d(r3, r5)
        L13b:
            int r4 = r4 + 1
            goto L41
        L13f:
            r12 = -1
            return r12
    }

    public int getOrientation() throws java.io.IOException {
            r7 = this;
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r0 = r7.streamReader
            int r0 = r0.getUInt16()
            boolean r0 = handles(r0)
            r1 = -1
            if (r0 != 0) goto Le
            return r1
        Le:
            byte[] r0 = r7.getExifSegment()
            r2 = 0
            if (r0 == 0) goto L1d
            int r3 = r0.length
            byte[] r4 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.JPEG_EXIF_SEGMENT_PREAMBLE_BYTES
            int r4 = r4.length
            if (r3 <= r4) goto L1d
            r3 = 1
            goto L1e
        L1d:
            r3 = 0
        L1e:
            if (r3 == 0) goto L30
            r4 = 0
        L21:
            byte[] r5 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.JPEG_EXIF_SEGMENT_PREAMBLE_BYTES
            int r6 = r5.length
            if (r4 >= r6) goto L30
            r6 = r0[r4]
            r5 = r5[r4]
            if (r6 == r5) goto L2d
            goto L31
        L2d:
            int r4 = r4 + 1
            goto L21
        L30:
            r2 = r3
        L31:
            if (r2 == 0) goto L3d
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$RandomAccessReader r1 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$RandomAccessReader
            r1.<init>(r0)
            int r0 = parseExifSegment(r1)
            return r0
        L3d:
            return r1
    }

    public com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType getType() throws java.io.IOException {
            r3 = this;
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r0 = r3.streamReader
            int r0 = r0.getUInt16()
            r1 = 65496(0xffd8, float:9.178E-41)
            if (r0 != r1) goto Le
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.JPEG
            return r0
        Le:
            int r0 = r0 << 16
            r1 = -65536(0xffffffffffff0000, float:NaN)
            r0 = r0 & r1
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r1 = r3.streamReader
            int r1 = r1.getUInt16()
            r2 = 65535(0xffff, float:9.1834E-41)
            r1 = r1 & r2
            r0 = r0 | r1
            r1 = -1991225785(0xffffffff89504e47, float:-2.5073895E-33)
            if (r0 != r1) goto L39
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r0 = r3.streamReader
            r1 = 21
            r0.skip(r1)
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$StreamReader r0 = r3.streamReader
            int r0 = r0.getByte()
            r1 = 3
            if (r0 < r1) goto L36
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.PNG_A
            goto L38
        L36:
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.PNG
        L38:
            return r0
        L39:
            int r0 = r0 >> 8
            r1 = 4671814(0x474946, float:6.546606E-39)
            if (r0 != r1) goto L43
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.GIF
            return r0
        L43:
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.UNKNOWN
            return r0
    }

    public boolean hasAlpha() throws java.io.IOException {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = r1.getType()
            boolean r0 = r0.hasAlpha()
            return r0
    }
}
