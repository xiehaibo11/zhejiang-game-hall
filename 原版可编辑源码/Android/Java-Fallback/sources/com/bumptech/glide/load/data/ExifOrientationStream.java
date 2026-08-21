package com.bumptech.glide.load.data;

public class ExifOrientationStream extends java.io.FilterInputStream {
    private static final byte[] EXIF_SEGMENT = null;
    private static final int ORIENTATION_POSITION = 0;
    private static final int SEGMENT_LENGTH = 0;
    private static final int SEGMENT_START_POSITION = 2;
    private final byte orientation;
    private int position;

    static {
            r0 = 29
            byte[] r0 = new byte[r0]
            r0 = {x0012: FILL_ARRAY_DATA , data: [-1, -31, 0, 28, 69, 120, 105, 102, 0, 0, 77, 77, 0, 0, 0, 0, 0, 8, 0, 1, 1, 18, 0, 2, 0, 0, 0, 1, 0} // fill-array
            com.bumptech.glide.load.data.ExifOrientationStream.EXIF_SEGMENT = r0
            int r0 = r0.length
            com.bumptech.glide.load.data.ExifOrientationStream.SEGMENT_LENGTH = r0
            int r0 = r0 + 2
            com.bumptech.glide.load.data.ExifOrientationStream.ORIENTATION_POSITION = r0
            return
    }

    public ExifOrientationStream(java.io.InputStream r3, int r4) {
            r2 = this;
            r2.<init>(r3)
            r3 = -1
            if (r4 < r3) goto Le
            r3 = 8
            if (r4 > r3) goto Le
            byte r3 = (byte) r4
            r2.orientation = r3
            return
        Le:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot add invalid orientation: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void mark(int r1) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public boolean markSupported() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r3 = this;
            int r0 = r3.position
            r1 = 2
            if (r0 < r1) goto L17
            int r2 = com.bumptech.glide.load.data.ExifOrientationStream.ORIENTATION_POSITION
            if (r0 <= r2) goto La
            goto L17
        La:
            if (r0 != r2) goto Lf
            byte r0 = r3.orientation
            goto L1b
        Lf:
            byte[] r2 = com.bumptech.glide.load.data.ExifOrientationStream.EXIF_SEGMENT
            int r0 = r0 - r1
            r0 = r2[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            goto L1b
        L17:
            int r0 = super.read()
        L1b:
            r1 = -1
            if (r0 == r1) goto L24
            int r1 = r3.position
            int r1 = r1 + 1
            r3.position = r1
        L24:
            return r0
    }

    @Override
    public int read(byte[] r4, int r5, int r6) throws java.io.IOException {
            r3 = this;
            int r0 = r3.position
            int r1 = com.bumptech.glide.load.data.ExifOrientationStream.ORIENTATION_POSITION
            if (r0 <= r1) goto Lb
            int r4 = super.read(r4, r5, r6)
            goto L2a
        Lb:
            if (r0 != r1) goto L13
            byte r6 = r3.orientation
            r4[r5] = r6
            r4 = 1
            goto L2a
        L13:
            r2 = 2
            if (r0 >= r2) goto L1c
            int r2 = r2 - r0
            int r4 = super.read(r4, r5, r2)
            goto L2a
        L1c:
            int r1 = r1 - r0
            int r6 = java.lang.Math.min(r1, r6)
            byte[] r0 = com.bumptech.glide.load.data.ExifOrientationStream.EXIF_SEGMENT
            int r1 = r3.position
            int r1 = r1 - r2
            java.lang.System.arraycopy(r0, r1, r4, r5, r6)
            r4 = r6
        L2a:
            if (r4 <= 0) goto L31
            int r5 = r3.position
            int r5 = r5 + r4
            r3.position = r5
        L31:
            return r4
    }

    @Override
    public void reset() throws java.io.IOException {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    @Override
    public long skip(long r4) throws java.io.IOException {
            r3 = this;
            long r4 = super.skip(r4)
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto L11
            int r0 = r3.position
            long r0 = (long) r0
            long r0 = r0 + r4
            int r1 = (int) r0
            r3.position = r1
        L11:
            return r4
    }
}
