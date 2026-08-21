package com.bumptech.glide;

public class ListPreloader<T> implements android.widget.AbsListView.OnScrollListener {
    private boolean isIncreasing;
    private int lastEnd;
    private int lastFirstVisible;
    private int lastStart;
    private final int maxPreload;
    private final com.bumptech.glide.ListPreloader.PreloadSizeProvider<T> preloadDimensionProvider;
    private final com.bumptech.glide.ListPreloader.PreloadModelProvider<T> preloadModelProvider;
    private final com.bumptech.glide.ListPreloader.PreloadTargetQueue preloadTargetQueue;
    private int totalItemCount;



    public interface PreloadModelProvider<U> {
        java.util.List<U> getPreloadItems(int r1);

        com.bumptech.glide.GenericRequestBuilder getPreloadRequestBuilder(U r1);
    }

    public interface PreloadSizeProvider<T> {
        int[] getPreloadSize(T r1, int r2, int r3);
    }

    private static class PreloadTarget extends com.bumptech.glide.request.target.BaseTarget<java.lang.Object> {
        private int photoHeight;
        private int photoWidth;

        private PreloadTarget() {
                r0 = this;
                r0.<init>()
                return
        }

        PreloadTarget(com.bumptech.glide.ListPreloader.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static int access$102(com.bumptech.glide.ListPreloader.PreloadTarget r0, int r1) {
                r0.photoWidth = r1
                return r1
        }

        static int access$202(com.bumptech.glide.ListPreloader.PreloadTarget r0, int r1) {
                r0.photoHeight = r1
                return r1
        }

        @Override
        public void getSize(com.bumptech.glide.request.target.SizeReadyCallback r3) {
                r2 = this;
                int r0 = r2.photoWidth
                int r1 = r2.photoHeight
                r3.onSizeReady(r0, r1)
                return
        }

        @Override
        public void onResourceReady(java.lang.Object r1, com.bumptech.glide.request.animation.GlideAnimation<? super java.lang.Object> r2) {
                r0 = this;
                return
        }
    }

    private static final class PreloadTargetQueue {
        private final java.util.Queue<com.bumptech.glide.ListPreloader.PreloadTarget> queue;

        public PreloadTargetQueue(int r5) {
                r4 = this;
                r4.<init>()
                java.util.Queue r0 = com.bumptech.glide.util.Util.createQueue(r5)
                r4.queue = r0
                r0 = 0
            La:
                if (r0 >= r5) goto L1a
                java.util.Queue<com.bumptech.glide.ListPreloader$PreloadTarget> r1 = r4.queue
                com.bumptech.glide.ListPreloader$PreloadTarget r2 = new com.bumptech.glide.ListPreloader$PreloadTarget
                r3 = 0
                r2.<init>(r3)
                r1.offer(r2)
                int r0 = r0 + 1
                goto La
            L1a:
                return
        }

        public com.bumptech.glide.ListPreloader.PreloadTarget next(int r3, int r4) {
                r2 = this;
                java.util.Queue<com.bumptech.glide.ListPreloader$PreloadTarget> r0 = r2.queue
                java.lang.Object r0 = r0.poll()
                com.bumptech.glide.ListPreloader$PreloadTarget r0 = (com.bumptech.glide.ListPreloader.PreloadTarget) r0
                java.util.Queue<com.bumptech.glide.ListPreloader$PreloadTarget> r1 = r2.queue
                r1.offer(r0)
                com.bumptech.glide.ListPreloader.PreloadTarget.access$102(r0, r3)
                com.bumptech.glide.ListPreloader.PreloadTarget.access$202(r0, r4)
                return r0
        }
    }

    @java.lang.Deprecated
    public ListPreloader(int r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.isIncreasing = r0
            com.bumptech.glide.ListPreloader$1 r1 = new com.bumptech.glide.ListPreloader$1
            r1.<init>(r2)
            r2.preloadModelProvider = r1
            com.bumptech.glide.ListPreloader$2 r1 = new com.bumptech.glide.ListPreloader$2
            r1.<init>(r2)
            r2.preloadDimensionProvider = r1
            r2.maxPreload = r3
            com.bumptech.glide.ListPreloader$PreloadTargetQueue r1 = new com.bumptech.glide.ListPreloader$PreloadTargetQueue
            int r3 = r3 + r0
            r1.<init>(r3)
            r2.preloadTargetQueue = r1
            return
    }

    public ListPreloader(com.bumptech.glide.ListPreloader.PreloadModelProvider<T> r2, com.bumptech.glide.ListPreloader.PreloadSizeProvider<T> r3, int r4) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.isIncreasing = r0
            r1.preloadModelProvider = r2
            r1.preloadDimensionProvider = r3
            r1.maxPreload = r4
            com.bumptech.glide.ListPreloader$PreloadTargetQueue r2 = new com.bumptech.glide.ListPreloader$PreloadTargetQueue
            int r4 = r4 + r0
            r2.<init>(r4)
            r1.preloadTargetQueue = r2
            return
    }

    private void cancelAll() {
            r3 = this;
            r0 = 0
            r1 = 0
        L2:
            int r2 = r3.maxPreload
            if (r1 >= r2) goto L12
            com.bumptech.glide.ListPreloader$PreloadTargetQueue r2 = r3.preloadTargetQueue
            com.bumptech.glide.ListPreloader$PreloadTarget r2 = r2.next(r0, r0)
            com.bumptech.glide.Glide.clear(r2)
            int r1 = r1 + 1
            goto L2
        L12:
            return
    }

    private void preload(int r5, int r6) {
            r4 = this;
            if (r5 >= r6) goto Lb
            int r0 = r4.lastEnd
            int r0 = java.lang.Math.max(r0, r5)
            r1 = r0
            r0 = r6
            goto L12
        Lb:
            int r0 = r4.lastStart
            int r0 = java.lang.Math.min(r0, r5)
            r1 = r6
        L12:
            int r2 = r4.totalItemCount
            int r0 = java.lang.Math.min(r2, r0)
            int r2 = r4.totalItemCount
            r3 = 0
            int r1 = java.lang.Math.max(r3, r1)
            int r1 = java.lang.Math.min(r2, r1)
            if (r5 >= r6) goto L35
            r5 = r1
        L26:
            if (r5 >= r0) goto L45
            com.bumptech.glide.ListPreloader$PreloadModelProvider<T> r6 = r4.preloadModelProvider
            java.util.List r6 = r6.getPreloadItems(r5)
            r2 = 1
            r4.preloadAdapterPosition(r6, r5, r2)
            int r5 = r5 + 1
            goto L26
        L35:
            int r5 = r0 + (-1)
        L37:
            if (r5 < r1) goto L45
            com.bumptech.glide.ListPreloader$PreloadModelProvider<T> r6 = r4.preloadModelProvider
            java.util.List r6 = r6.getPreloadItems(r5)
            r4.preloadAdapterPosition(r6, r5, r3)
            int r5 = r5 + (-1)
            goto L37
        L45:
            r4.lastStart = r1
            r4.lastEnd = r0
            return
    }

    private void preload(int r2, boolean r3) {
            r1 = this;
            boolean r0 = r1.isIncreasing
            if (r0 == r3) goto L9
            r1.isIncreasing = r3
            r1.cancelAll()
        L9:
            if (r3 == 0) goto Le
            int r3 = r1.maxPreload
            goto L11
        Le:
            int r3 = r1.maxPreload
            int r3 = -r3
        L11:
            int r3 = r3 + r2
            r1.preload(r2, r3)
            return
    }

    private void preloadAdapterPosition(java.util.List<T> r3, int r4, boolean r5) {
            r2 = this;
            int r0 = r3.size()
            if (r5 == 0) goto L13
            r5 = 0
        L7:
            if (r5 >= r0) goto L21
            java.lang.Object r1 = r3.get(r5)
            r2.preloadItem(r1, r4, r5)
            int r5 = r5 + 1
            goto L7
        L13:
            int r0 = r0 + (-1)
        L15:
            if (r0 < 0) goto L21
            java.lang.Object r5 = r3.get(r0)
            r2.preloadItem(r5, r4, r0)
            int r0 = r0 + (-1)
            goto L15
        L21:
            return
    }

    private void preloadItem(T r3, int r4, int r5) {
            r2 = this;
            com.bumptech.glide.ListPreloader$PreloadSizeProvider<T> r0 = r2.preloadDimensionProvider
            int[] r4 = r0.getPreloadSize(r3, r4, r5)
            if (r4 == 0) goto L1d
            com.bumptech.glide.ListPreloader$PreloadModelProvider<T> r5 = r2.preloadModelProvider
            com.bumptech.glide.GenericRequestBuilder r3 = r5.getPreloadRequestBuilder(r3)
            com.bumptech.glide.ListPreloader$PreloadTargetQueue r5 = r2.preloadTargetQueue
            r0 = 0
            r0 = r4[r0]
            r1 = 1
            r4 = r4[r1]
            com.bumptech.glide.ListPreloader$PreloadTarget r4 = r5.next(r0, r4)
            r3.into(r4)
        L1d:
            return
    }

    @java.lang.Deprecated
    protected int[] getDimensions(T r2) {
            r1 = this;
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "You must either provide a PreloadDimensionProvider or override getDimensions()"
            r2.<init>(r0)
            throw r2
    }

    @java.lang.Deprecated
    protected java.util.List<T> getItems(int r1, int r2) {
            r0 = this;
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "You must either provide a PreloadModelProvider or override getItems()"
            r1.<init>(r2)
            throw r1
    }

    @java.lang.Deprecated
    protected com.bumptech.glide.GenericRequestBuilder getRequestBuilder(T r2) {
            r1 = this;
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "You must either provide a PreloadModelProvider, or override getRequestBuilder()"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void onScroll(android.widget.AbsListView r1, int r2, int r3, int r4) {
            r0 = this;
            r0.totalItemCount = r4
            int r1 = r0.lastFirstVisible
            if (r2 <= r1) goto Lc
            int r3 = r3 + r2
            r1 = 1
            r0.preload(r3, r1)
            goto L12
        Lc:
            if (r2 >= r1) goto L12
            r1 = 0
            r0.preload(r2, r1)
        L12:
            r0.lastFirstVisible = r2
            return
    }

    @Override
    public void onScrollStateChanged(android.widget.AbsListView r1, int r2) {
            r0 = this;
            return
    }
}
