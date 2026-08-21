package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public final class ViewStubCompat extends android.view.View {
    private android.support.v7.widget.ViewStubCompat.OnInflateListener mInflateListener;
    private int mInflatedId;
    private java.lang.ref.WeakReference<android.view.View> mInflatedViewRef;
    private android.view.LayoutInflater mInflater;
    private int mLayoutResource;

    public interface OnInflateListener {
        void onInflate(android.support.v7.widget.ViewStubCompat r1, android.view.View r2);
    }

    public ViewStubCompat(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ViewStubCompat(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            r2.<init>(r3, r4, r5)
            r0 = 0
            r2.mLayoutResource = r0
            int[] r1 = android.support.v7.appcompat.R.styleable.ViewStubCompat
            android.content.res.TypedArray r3 = r3.obtainStyledAttributes(r4, r1, r5, r0)
            int r4 = android.support.v7.appcompat.R.styleable.ViewStubCompat_android_inflatedId
            r5 = -1
            int r4 = r3.getResourceId(r4, r5)
            r2.mInflatedId = r4
            int r4 = android.support.v7.appcompat.R.styleable.ViewStubCompat_android_layout
            int r4 = r3.getResourceId(r4, r0)
            r2.mLayoutResource = r4
            int r4 = android.support.v7.appcompat.R.styleable.ViewStubCompat_android_id
            int r4 = r3.getResourceId(r4, r5)
            r2.setId(r4)
            r3.recycle()
            r3 = 8
            r2.setVisibility(r3)
            r3 = 1
            r2.setWillNotDraw(r3)
            return
    }

    @Override
    protected void dispatchDraw(android.graphics.Canvas r1) {
            r0 = this;
            return
    }

    @Override
    @android.annotation.SuppressLint({"MissingSuperCall"})
    public void draw(android.graphics.Canvas r1) {
            r0 = this;
            return
    }

    public int getInflatedId() {
            r1 = this;
            int r0 = r1.mInflatedId
            return r0
    }

    public android.view.LayoutInflater getLayoutInflater() {
            r1 = this;
            android.view.LayoutInflater r0 = r1.mInflater
            return r0
    }

    public int getLayoutResource() {
            r1 = this;
            int r0 = r1.mLayoutResource
            return r0
    }

    public android.view.View inflate() {
            r4 = this;
            android.view.ViewParent r0 = r4.getParent()
            if (r0 == 0) goto L57
            boolean r1 = r0 instanceof android.view.ViewGroup
            if (r1 == 0) goto L57
            int r1 = r4.mLayoutResource
            if (r1 == 0) goto L4f
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.LayoutInflater r1 = r4.mInflater
            if (r1 == 0) goto L15
            goto L1d
        L15:
            android.content.Context r1 = r4.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
        L1d:
            int r2 = r4.mLayoutResource
            r3 = 0
            android.view.View r1 = r1.inflate(r2, r0, r3)
            int r2 = r4.mInflatedId
            r3 = -1
            if (r2 == r3) goto L2c
            r1.setId(r2)
        L2c:
            int r2 = r0.indexOfChild(r4)
            r0.removeViewInLayout(r4)
            android.view.ViewGroup$LayoutParams r3 = r4.getLayoutParams()
            if (r3 == 0) goto L3d
            r0.addView(r1, r2, r3)
            goto L40
        L3d:
            r0.addView(r1, r2)
        L40:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r1)
            r4.mInflatedViewRef = r0
            android.support.v7.widget.ViewStubCompat$OnInflateListener r0 = r4.mInflateListener
            if (r0 == 0) goto L4e
            r0.onInflate(r4, r1)
        L4e:
            return r1
        L4f:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "ViewStub must have a valid layoutResource"
            r0.<init>(r1)
            throw r0
        L57:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "ViewStub must have a non-null ViewGroup viewParent"
            r0.<init>(r1)
            throw r0
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            r1 = 0
            r0.setMeasuredDimension(r1, r1)
            return
    }

    public void setInflatedId(int r1) {
            r0 = this;
            r0.mInflatedId = r1
            return
    }

    public void setLayoutInflater(android.view.LayoutInflater r1) {
            r0 = this;
            r0.mInflater = r1
            return
    }

    public void setLayoutResource(int r1) {
            r0 = this;
            r0.mLayoutResource = r1
            return
    }

    public void setOnInflateListener(android.support.v7.widget.ViewStubCompat.OnInflateListener r1) {
            r0 = this;
            r0.mInflateListener = r1
            return
    }

    @Override
    public void setVisibility(int r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mInflatedViewRef
            if (r0 == 0) goto L18
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L10
            r0.setVisibility(r2)
            goto L23
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "setVisibility called on un-referenced view"
            r2.<init>(r0)
            throw r2
        L18:
            super.setVisibility(r2)
            if (r2 == 0) goto L20
            r0 = 4
            if (r2 != r0) goto L23
        L20:
            r1.inflate()
        L23:
            return
    }
}
