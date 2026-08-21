package com.kwad.sdk.core.imageloader.core.listener;

public class PauseOnScrollListener implements android.widget.AbsListView.OnScrollListener {
    private final android.widget.AbsListView.OnScrollListener externalListener;
    private com.kwad.sdk.core.imageloader.core.ImageLoader imageLoader;
    private final boolean pauseOnFling;
    private final boolean pauseOnScroll;

    public PauseOnScrollListener(com.kwad.sdk.core.imageloader.core.ImageLoader r2, boolean r3, boolean r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public PauseOnScrollListener(com.kwad.sdk.core.imageloader.core.ImageLoader r1, boolean r2, boolean r3, android.widget.AbsListView.OnScrollListener r4) {
            r0 = this;
            r0.<init>()
            r0.imageLoader = r1
            r0.pauseOnScroll = r2
            r0.pauseOnFling = r3
            r0.externalListener = r4
            return
    }

    @Override
    public void onScroll(android.widget.AbsListView r2, int r3, int r4, int r5) {
            r1 = this;
            android.widget.AbsListView$OnScrollListener r0 = r1.externalListener
            if (r0 == 0) goto L7
            r0.onScroll(r2, r3, r4, r5)
        L7:
            return
    }

    @Override
    public void onScrollStateChanged(android.widget.AbsListView r2, int r3) {
            r1 = this;
            if (r3 == 0) goto L18
            r0 = 1
            if (r3 == r0) goto Le
            r0 = 2
            if (r3 == r0) goto L9
            goto L1d
        L9:
            boolean r0 = r1.pauseOnFling
            if (r0 == 0) goto L1d
            goto L12
        Le:
            boolean r0 = r1.pauseOnScroll
            if (r0 == 0) goto L1d
        L12:
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = r1.imageLoader
            r0.pause()
            goto L1d
        L18:
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = r1.imageLoader
            r0.resume()
        L1d:
            android.widget.AbsListView$OnScrollListener r0 = r1.externalListener
            if (r0 == 0) goto L24
            r0.onScrollStateChanged(r2, r3)
        L24:
            return
    }
}
