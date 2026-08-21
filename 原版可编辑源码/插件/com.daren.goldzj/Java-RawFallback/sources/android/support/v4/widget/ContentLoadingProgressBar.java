package android.support.v4.widget;

public class ContentLoadingProgressBar extends android.widget.ProgressBar {
    private static final int MIN_DELAY = 500;
    private static final int MIN_SHOW_TIME = 500;
    private final java.lang.Runnable mDelayedHide;
    private final java.lang.Runnable mDelayedShow;
    boolean mDismissed;
    boolean mPostedHide;
    boolean mPostedShow;
    long mStartTime;



    public ContentLoadingProgressBar(@android.support.annotation.NonNull android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ContentLoadingProgressBar(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.Nullable android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            r2 = -1
            r1.mStartTime = r2
            r1.mPostedHide = r0
            r1.mPostedShow = r0
            r1.mDismissed = r0
            android.support.v4.widget.ContentLoadingProgressBar$1 r2 = new android.support.v4.widget.ContentLoadingProgressBar$1
            r2.<init>(r1)
            r1.mDelayedHide = r2
            android.support.v4.widget.ContentLoadingProgressBar$2 r2 = new android.support.v4.widget.ContentLoadingProgressBar$2
            r2.<init>(r1)
            r1.mDelayedShow = r2
            return
    }

    private void removeCallbacks() {
            r1 = this;
            java.lang.Runnable r0 = r1.mDelayedHide
            r1.removeCallbacks(r0)
            java.lang.Runnable r0 = r1.mDelayedShow
            r1.removeCallbacks(r0)
            return
    }

    public synchronized void hide() {
            r10 = this;
            monitor-enter(r10)
            r0 = 1
            r10.mDismissed = r0     // Catch: java.lang.Throwable -> L36
            java.lang.Runnable r1 = r10.mDelayedShow     // Catch: java.lang.Throwable -> L36
            r10.removeCallbacks(r1)     // Catch: java.lang.Throwable -> L36
            r1 = 0
            r10.mPostedShow = r1     // Catch: java.lang.Throwable -> L36
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L36
            long r3 = r10.mStartTime     // Catch: java.lang.Throwable -> L36
            long r1 = r1 - r3
            r3 = 500(0x1f4, double:2.47E-321)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 >= 0) goto L2f
            long r5 = r10.mStartTime     // Catch: java.lang.Throwable -> L36
            r7 = -1
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 != 0) goto L22
            goto L2f
        L22:
            boolean r5 = r10.mPostedHide     // Catch: java.lang.Throwable -> L36
            if (r5 != 0) goto L34
            java.lang.Runnable r5 = r10.mDelayedHide     // Catch: java.lang.Throwable -> L36
            long r3 = r3 - r1
            r10.postDelayed(r5, r3)     // Catch: java.lang.Throwable -> L36
            r10.mPostedHide = r0     // Catch: java.lang.Throwable -> L36
            goto L34
        L2f:
            r0 = 8
            r10.setVisibility(r0)     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r10)
            return
        L36:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
    }

    @Override
    public void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            r0.removeCallbacks()
            return
    }

    @Override
    public void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.removeCallbacks()
            return
    }

    public synchronized void show() {
            r3 = this;
            monitor-enter(r3)
            r0 = -1
            r3.mStartTime = r0     // Catch: java.lang.Throwable -> L1f
            r0 = 0
            r3.mDismissed = r0     // Catch: java.lang.Throwable -> L1f
            java.lang.Runnable r1 = r3.mDelayedHide     // Catch: java.lang.Throwable -> L1f
            r3.removeCallbacks(r1)     // Catch: java.lang.Throwable -> L1f
            r3.mPostedHide = r0     // Catch: java.lang.Throwable -> L1f
            boolean r0 = r3.mPostedShow     // Catch: java.lang.Throwable -> L1f
            if (r0 != 0) goto L1d
            java.lang.Runnable r0 = r3.mDelayedShow     // Catch: java.lang.Throwable -> L1f
            r1 = 500(0x1f4, double:2.47E-321)
            r3.postDelayed(r0, r1)     // Catch: java.lang.Throwable -> L1f
            r0 = 1
            r3.mPostedShow = r0     // Catch: java.lang.Throwable -> L1f
        L1d:
            monitor-exit(r3)
            return
        L1f:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }
}
