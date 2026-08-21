package com.kwad.sdk.core.view;

@java.lang.Deprecated
public class AdBaseFrameLayout extends android.widget.FrameLayout implements com.kwad.sdk.widget.e {
    private static final com.kwad.sdk.utils.ac.a axd = null;
    private java.util.List<android.view.View.OnTouchListener> axc;

    static {
            com.kwad.sdk.utils.ac$a r0 = new com.kwad.sdk.utils.ac$a
            r0.<init>()
            com.kwad.sdk.core.view.AdBaseFrameLayout.axd = r0
            return
    }

    public AdBaseFrameLayout(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.axc = r1
            return
    }

    public AdBaseFrameLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.axc = r1
            return
    }

    public AdBaseFrameLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.axc = r1
            return
    }

    public final void a(android.view.View.OnTouchListener r2) {
            r1 = this;
            java.util.List<android.view.View$OnTouchListener> r0 = r1.axc
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto Ld
            java.util.List<android.view.View$OnTouchListener> r0 = r1.axc
            r0.add(r2)
        Ld:
            return
    }

    @Override
    protected void dispatchRestoreInstanceState(android.util.SparseArray<android.os.Parcelable> r1) {
            r0 = this;
            super.dispatchRestoreInstanceState(r1)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            com.kwad.sdk.service.c.gatherException(r1)
            return
    }

    @Override
    protected void dispatchSaveInstanceState(android.util.SparseArray<android.os.Parcelable> r1) {
            r0 = this;
            return
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r4) {
            r3 = this;
            java.util.List<android.view.View$OnTouchListener> r0 = r3.axc
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1e
            java.util.List<android.view.View$OnTouchListener> r0 = r3.axc
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            android.view.View$OnTouchListener r1 = (android.view.View.OnTouchListener) r1
            r1.onTouch(r3, r4)
            goto Le
        L1e:
            int r0 = r4.getAction()
            if (r0 == 0) goto L36
            r1 = 1
            if (r0 == r1) goto L28
            goto L50
        L28:
            com.kwad.sdk.utils.ac$a r0 = com.kwad.sdk.core.view.AdBaseFrameLayout.axd
            float r1 = r4.getX()
            float r2 = r4.getY()
            r0.g(r1, r2)
            goto L50
        L36:
            com.kwad.sdk.utils.ac$a r0 = com.kwad.sdk.core.view.AdBaseFrameLayout.axd
            int r1 = r3.getWidth()
            int r2 = r3.getHeight()
            r0.x(r1, r2)
            com.kwad.sdk.utils.ac$a r0 = com.kwad.sdk.core.view.AdBaseFrameLayout.axd
            float r1 = r4.getX()
            float r2 = r4.getY()
            r0.f(r1, r2)
        L50:
            boolean r4 = super.dispatchTouchEvent(r4)
            return r4
    }

    @Override
    public com.kwad.sdk.utils.ac.a getTouchCoords() {
            r1 = this;
            com.kwad.sdk.utils.ac$a r0 = com.kwad.sdk.core.view.AdBaseFrameLayout.axd
            return r0
    }

    @Override
    public void saveHierarchyState(android.util.SparseArray<android.os.Parcelable> r1) {
            r0 = this;
            return
    }
}
