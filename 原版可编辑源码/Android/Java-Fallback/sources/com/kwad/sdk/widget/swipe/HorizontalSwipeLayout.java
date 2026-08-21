package com.kwad.sdk.widget.swipe;

public class HorizontalSwipeLayout extends android.widget.FrameLayout {
    private int aMr;
    private int aMs;
    private com.kwad.sdk.widget.swipe.a aMt;
    private java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout.a> aMu;
    private float fx;
    private float fy;

    public interface a {
        void dC();

        void dD();
    }

    public HorizontalSwipeLayout(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 0
            r1.aMs = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.aMu = r0
            r1.init(r2)
            return
    }

    public HorizontalSwipeLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r2 = 0
            r0.aMs = r2
            java.util.concurrent.CopyOnWriteArrayList r2 = new java.util.concurrent.CopyOnWriteArrayList
            r2.<init>()
            r0.aMu = r2
            r0.init(r1)
            return
    }

    public HorizontalSwipeLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r2 = 0
            r0.aMs = r2
            java.util.concurrent.CopyOnWriteArrayList r2 = new java.util.concurrent.CopyOnWriteArrayList
            r2.<init>()
            r0.aMu = r2
            r0.init(r1)
            return
    }

    private synchronized void KI() {
            r2 = this;
            monitor-enter(r2)
            java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a> r0 = r2.aMu     // Catch: java.lang.Throwable -> L19
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L19
        L7:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L19
            if (r1 == 0) goto L17
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L19
            com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a r1 = (com.kwad.sdk.widget.swipe.HorizontalSwipeLayout.a) r1     // Catch: java.lang.Throwable -> L19
            r1.dD()     // Catch: java.lang.Throwable -> L19
            goto L7
        L17:
            monitor-exit(r2)
            return
        L19:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    private synchronized void KJ() {
            r2 = this;
            monitor-enter(r2)
            java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a> r0 = r2.aMu     // Catch: java.lang.Throwable -> L19
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L19
        L7:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L19
            if (r1 == 0) goto L17
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L19
            com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a r1 = (com.kwad.sdk.widget.swipe.HorizontalSwipeLayout.a) r1     // Catch: java.lang.Throwable -> L19
            r1.dC()     // Catch: java.lang.Throwable -> L19
            goto L7
        L17:
            monitor-exit(r2)
            return
        L19:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    private boolean c(android.view.MotionEvent r8) {
            r7 = this;
            int r0 = r8.getAction()
            java.lang.String r1 = "HorizontalSwipeLayout"
            r2 = 1
            r3 = 0
            if (r0 == 0) goto L58
            if (r0 == r2) goto L53
            r4 = 2
            if (r0 == r4) goto L16
            r8 = 3
            if (r0 == r8) goto L13
            goto L79
        L13:
            r7.aMs = r3
            goto L79
        L16:
            float r0 = r8.getX()
            float r5 = r7.fx
            float r0 = r0 - r5
            float r5 = java.lang.Math.abs(r0)
            float r8 = r8.getY()
            float r6 = r7.fy
            float r8 = r8 - r6
            float r8 = java.lang.Math.abs(r8)
            int r6 = r7.aMr
            float r6 = (float) r6
            int r6 = (r5 > r6 ? 1 : (r5 == r6 ? 0 : -1))
            if (r6 <= 0) goto L41
            int r8 = (r5 > r8 ? 1 : (r5 == r8 ? 0 : -1))
            if (r8 <= 0) goto L41
            r8 = 0
            int r8 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
            if (r8 <= 0) goto L3f
            r7.aMs = r2
            goto L41
        L3f:
            r7.aMs = r4
        L41:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r4 = "onInterceptTouchEvent ACTION_MOVE mDragState="
            r8.<init>(r4)
            int r4 = r7.aMs
            r8.append(r4)
            java.lang.String r4 = "--dx="
            r8.append(r4)
            goto L6f
        L53:
            r7.aMs = r3
            java.lang.String r8 = "onInterceptTouchEvent ACTION_UP"
            goto L76
        L58:
            float r0 = r8.getX()
            r7.fx = r0
            float r8 = r8.getY()
            r7.fy = r8
            r7.aMs = r3
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "onInterceptTouchEvent ACTION_DOWN mInitialMotionX="
            r8.<init>(r0)
            float r0 = r7.fx
        L6f:
            r8.append(r0)
            java.lang.String r8 = r8.toString()
        L76:
            com.kwad.sdk.core.e.c.d(r1, r8)
        L79:
            int r8 = r7.aMs
            if (r8 == 0) goto L7e
            return r2
        L7e:
            return r3
    }

    private boolean d(android.view.MotionEvent r8) {
            r7 = this;
            int r0 = r8.getAction()
            r1 = 0
            java.lang.String r2 = "HorizontalSwipeLayout"
            r3 = 1
            if (r0 == 0) goto L86
            r4 = 2
            if (r0 == r3) goto L59
            if (r0 == r4) goto L18
            r8 = 3
            if (r0 == r8) goto L14
            goto L99
        L14:
            r7.aMs = r1
            goto L99
        L18:
            float r0 = r8.getX()
            float r5 = r7.fx
            float r0 = r0 - r5
            float r5 = java.lang.Math.abs(r0)
            float r8 = r8.getY()
            float r6 = r7.fy
            float r8 = r8 - r6
            float r8 = java.lang.Math.abs(r8)
            int r6 = r7.aMs
            if (r6 != 0) goto L47
            int r6 = r7.aMr
            float r6 = (float) r6
            int r6 = (r5 > r6 ? 1 : (r5 == r6 ? 0 : -1))
            if (r6 <= 0) goto L47
            int r8 = (r5 > r8 ? 1 : (r5 == r8 ? 0 : -1))
            if (r8 <= 0) goto L47
            r8 = 0
            int r8 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
            if (r8 <= 0) goto L45
            r7.aMs = r3
            goto L47
        L45:
            r7.aMs = r4
        L47:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r4 = "onTouchEvent ACTION_MOVE mDragState="
            r8.<init>(r4)
            int r4 = r7.aMs
            r8.append(r4)
            java.lang.String r4 = "--dx="
            r8.append(r4)
            goto L8f
        L59:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "onTouchEvent ACTION_UP mDragState="
            r8.<init>(r0)
            int r0 = r7.aMs
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            com.kwad.sdk.core.e.c.d(r2, r8)
            java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a> r8 = r7.aMu
            if (r8 == 0) goto L14
            boolean r8 = r8.isEmpty()
            if (r8 != 0) goto L14
            int r8 = r7.aMs
            if (r8 == 0) goto L14
            if (r8 != r3) goto L80
            r7.KJ()
            goto L14
        L80:
            if (r8 != r4) goto L14
            r7.KI()
            goto L14
        L86:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "onTouchEvent ACTION_DOWN mInitialMotionX="
            r8.<init>(r0)
            float r0 = r7.fx
        L8f:
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            com.kwad.sdk.core.e.c.d(r2, r8)
        L99:
            int r8 = r7.aMs
            if (r8 == 0) goto L9e
            return r3
        L9e:
            return r1
    }

    private void init(android.content.Context r1) {
            r0 = this;
            android.view.ViewConfiguration r1 = android.view.ViewConfiguration.get(r1)
            int r1 = r1.getScaledPagingTouchSlop()
            r0.aMr = r1
            return
    }

    public final synchronized void a(com.kwad.sdk.widget.swipe.HorizontalSwipeLayout.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a> r0 = r1.aMu     // Catch: java.lang.Throwable -> L8
            r0.add(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void b(com.kwad.sdk.widget.swipe.HorizontalSwipeLayout.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a> r0 = r1.aMu     // Catch: java.lang.Throwable -> L8
            r0.remove(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r3) {
            r2 = this;
            java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a> r0 = r2.aMu
            if (r0 == 0) goto L24
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L24
            int r0 = r3.getAction()
            r1 = 1
            if (r0 == 0) goto L1d
            if (r0 == r1) goto L17
            r1 = 3
            if (r0 == r1) goto L17
            goto L24
        L17:
            android.view.ViewParent r0 = r2.getParent()
            r1 = 0
            goto L21
        L1d:
            android.view.ViewParent r0 = r2.getParent()
        L21:
            r0.requestDisallowInterceptTouchEvent(r1)
        L24:
            boolean r3 = super.dispatchTouchEvent(r3)
            return r3
    }

    public synchronized java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout.a> getOnSwipedListeners() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a> r0 = r1.aMu     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r3) {
            r2 = this;
            com.kwad.sdk.widget.swipe.a r0 = r2.aMt
            r1 = 1
            if (r0 == 0) goto L13
            boolean r0 = r0.b(r2, r3)
            if (r0 == 0) goto L13
            java.lang.String r3 = "HorizontalSwipeLayout"
            java.lang.String r0 = "onInterceptTouchEvent true"
            com.kwad.sdk.core.e.c.d(r3, r0)
            return r1
        L13:
            java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a> r0 = r2.aMu
            if (r0 == 0) goto L24
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L24
            boolean r0 = r2.c(r3)
            if (r0 == 0) goto L24
            return r1
        L24:
            boolean r3 = super.onInterceptTouchEvent(r3)
            return r3
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r3) {
            r2 = this;
            com.kwad.sdk.widget.swipe.a r0 = r2.aMt
            r1 = 1
            if (r0 == 0) goto L13
            boolean r0 = r0.c(r2, r3)
            if (r0 == 0) goto L13
            java.lang.String r3 = "HorizontalSwipeLayout"
            java.lang.String r0 = "handlerTouchEvent true"
            com.kwad.sdk.core.e.c.d(r3, r0)
            return r1
        L13:
            java.util.List<com.kwad.sdk.widget.swipe.HorizontalSwipeLayout$a> r0 = r2.aMu
            if (r0 == 0) goto L24
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L24
            boolean r0 = r2.d(r3)
            if (r0 == 0) goto L24
            return r1
        L24:
            boolean r3 = super.onTouchEvent(r3)
            return r3
    }

    public void setTouchDetector(com.kwad.sdk.widget.swipe.a r1) {
            r0 = this;
            r0.aMt = r1
            return
    }
}
