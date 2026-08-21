package com.bumptech.glide.request.target;

public abstract class SimpleTarget<Z> extends com.bumptech.glide.request.target.BaseTarget<Z> {
    private final int height;
    private final int width;

    public SimpleTarget() {
            r1 = this;
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.<init>(r0, r0)
            return
    }

    public SimpleTarget(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.width = r1
            r0.height = r2
            return
    }

    @Override
    public final void getSize(com.bumptech.glide.request.target.SizeReadyCallback r3) {
            r2 = this;
            int r0 = r2.width
            int r1 = r2.height
            boolean r0 = com.bumptech.glide.util.Util.isValidDimensions(r0, r1)
            if (r0 == 0) goto L12
            int r0 = r2.width
            int r1 = r2.height
            r3.onSizeReady(r0, r1)
            return
        L12:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Width and height must both be > 0 or Target#SIZE_ORIGINAL, but given width: "
            r0.append(r1)
            int r1 = r2.width
            r0.append(r1)
            java.lang.String r1 = " and height: "
            r0.append(r1)
            int r1 = r2.height
            r0.append(r1)
            java.lang.String r1 = ", either provide dimensions in the constructor"
            r0.append(r1)
            java.lang.String r1 = " or call override()"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }
}
