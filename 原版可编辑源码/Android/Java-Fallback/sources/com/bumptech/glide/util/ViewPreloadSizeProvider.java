package com.bumptech.glide.util;

public class ViewPreloadSizeProvider<T> implements com.bumptech.glide.ListPreloader.PreloadSizeProvider<T>, com.bumptech.glide.request.target.SizeReadyCallback {
    private int[] size;
    private com.bumptech.glide.util.ViewPreloadSizeProvider.SizeViewTarget viewTarget;

    private static final class SizeViewTarget extends com.bumptech.glide.request.target.ViewTarget<android.view.View, java.lang.Object> {
        public SizeViewTarget(android.view.View r1, com.bumptech.glide.request.target.SizeReadyCallback r2) {
                r0 = this;
                r0.<init>(r1)
                r0.getSize(r2)
                return
        }

        @Override
        public void onResourceReady(java.lang.Object r1, com.bumptech.glide.request.animation.GlideAnimation r2) {
                r0 = this;
                return
        }
    }

    public ViewPreloadSizeProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    public ViewPreloadSizeProvider(android.view.View r1) {
            r0 = this;
            r0.<init>()
            r0.setView(r1)
            return
    }

    @Override
    public int[] getPreloadSize(T r1, int r2, int r3) {
            r0 = this;
            int[] r1 = r0.size
            if (r1 != 0) goto L6
            r1 = 0
            return r1
        L6:
            int r2 = r1.length
            int[] r1 = java.util.Arrays.copyOf(r1, r2)
            return r1
    }

    @Override
    public void onSizeReady(int r3, int r4) {
            r2 = this;
            r0 = 2
            int[] r0 = new int[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            r2.size = r0
            r3 = 0
            r2.viewTarget = r3
            return
    }

    public void setView(android.view.View r2) {
            r1 = this;
            int[] r0 = r1.size
            if (r0 != 0) goto L10
            com.bumptech.glide.util.ViewPreloadSizeProvider$SizeViewTarget r0 = r1.viewTarget
            if (r0 == 0) goto L9
            goto L10
        L9:
            com.bumptech.glide.util.ViewPreloadSizeProvider$SizeViewTarget r0 = new com.bumptech.glide.util.ViewPreloadSizeProvider$SizeViewTarget
            r0.<init>(r2, r1)
            r1.viewTarget = r0
        L10:
            return
    }
}
