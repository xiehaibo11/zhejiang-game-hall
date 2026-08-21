package com.kwad.sdk.core.imageloader.core.decode;

public class DecodedResult {
    public android.graphics.Bitmap mBitmap;
    public com.kwad.sdk.glide.framesequence.FrameSequence mFrameSequence;

    public DecodedResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getByteSize() {
            r2 = this;
            android.graphics.Bitmap r0 = r2.mBitmap
            if (r0 == 0) goto L10
            int r0 = r0.getRowBytes()
            android.graphics.Bitmap r1 = r2.mBitmap
            int r1 = r1.getHeight()
            int r0 = r0 * r1
            return r0
        L10:
            r0 = 0
            return r0
    }

    public boolean isDecoded() {
            r4 = this;
            android.graphics.Bitmap r0 = r4.mBitmap
            r1 = 1
            r2 = 0
            if (r0 == 0) goto Le
            boolean r0 = r0.isRecycled()
            if (r0 != 0) goto Le
            r0 = r1
            goto Lf
        Le:
            r0 = r2
        Lf:
            com.kwad.sdk.glide.framesequence.FrameSequence r3 = r4.mFrameSequence
            if (r3 == 0) goto L15
            r3 = r1
            goto L16
        L15:
            r3 = r2
        L16:
            if (r0 != 0) goto L1c
            if (r3 == 0) goto L1b
            goto L1c
        L1b:
            return r2
        L1c:
            return r1
    }
}
