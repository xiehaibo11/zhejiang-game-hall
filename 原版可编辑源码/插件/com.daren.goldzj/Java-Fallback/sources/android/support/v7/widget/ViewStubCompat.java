package android.support.v7.widget;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.support.annotation.RestrictTo;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import java.lang.ref.WeakReference;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public final class ViewStubCompat extends View {
    private OnInflateListener mInflateListener;
    private int mInflatedId;
    private WeakReference<View> mInflatedViewRef;
    private LayoutInflater mInflater;
    private int mLayoutResource;

    public interface OnInflateListener {
        void onInflate(ViewStubCompat r1, View r2);
    }

    @Override
    protected void dispatchDraw(Canvas r1) {
    }

    @Override
    @SuppressLint({"MissingSuperCall"})
    public void draw(Canvas r1) {
    }

    public ViewStubCompat(Context r2, AttributeSet r3) {
        this(r2, r3, 0);
    }

    public ViewStubCompat(Context r3, AttributeSet r4, int r5) {
        super(r3, r4, r5);
        this.mLayoutResource = 0;
        TypedArray r32 = r3.obtainStyledAttributes(r4, R.styleable.ViewStubCompat, r5, 0);
        this.mInflatedId = r32.getResourceId(R.styleable.ViewStubCompat_android_inflatedId, -1);
        this.mLayoutResource = r32.getResourceId(R.styleable.ViewStubCompat_android_layout, 0);
        setId(r32.getResourceId(R.styleable.ViewStubCompat_android_id, -1));
        r32.recycle();
        setVisibility(8);
        setWillNotDraw(true);
    }

    public int getInflatedId() {
        return this.mInflatedId;
    }

    public void setInflatedId(int r1) {
        this.mInflatedId = r1;
    }

    public int getLayoutResource() {
        return this.mLayoutResource;
    }

    public void setLayoutResource(int r1) {
        this.mLayoutResource = r1;
    }

    public void setLayoutInflater(LayoutInflater r1) {
        this.mInflater = r1;
    }

    public LayoutInflater getLayoutInflater() {
        return this.mInflater;
    }

    @Override
    protected void onMeasure(int r1, int r2) {
        setMeasuredDimension(0, 0);
    }

    @Override
    public void setVisibility(int r2) {
        WeakReference<View> r0 = this.mInflatedViewRef;
        if (r0 == null) goto L9;
        View r02 = r0.get();
        if (r02 == null) goto L8;
        r02.setVisibility(r2);
        return;
    L8:
        throw new IllegalStateException("setVisibility called on un-referenced view");
    L9:
        super.setVisibility(r2);
        if (r2 != 0) goto L12;
    L13:
        inflate();
        return;
    L12:
        if (r2 == 4) goto L13;
    }

    public View inflate() {
        ViewParent r0 = getParent();
        if (r0 == null) goto L26;
        if ((r0 instanceof ViewGroup) == false) goto L26;
        if (this.mLayoutResource == 0) goto L24;
        ViewGroup r02 = (ViewGroup) r0;
        LayoutInflater r1 = this.mInflater;
        if (r1 != null) goto L12;
        r1 = LayoutInflater.from(getContext());
    L12:
        View r12 = r1.inflate(this.mLayoutResource, r02, false);
        int r2 = this.mInflatedId;
        if (r2 == (-1)) goto L15;
        r12.setId(r2);
    L15:
        int r22 = r02.indexOfChild(this);
        r02.removeViewInLayout(this);
        ViewGroup.LayoutParams r3 = getLayoutParams();
        if (r3 == null) goto L18;
        r02.addView(r12, r22, r3);
    L19:
        this.mInflatedViewRef = new WeakReference(r12);
        OnInflateListener r03 = this.mInflateListener;
        if (r03 == null) goto L22;
        r03.onInflate(this, r12);
    L22:
        return r12;
    L18:
        r02.addView(r12, r22);
        goto L19
    L24:
        throw new IllegalArgumentException("ViewStub must have a valid layoutResource");
    L26:
        throw new IllegalStateException("ViewStub must have a non-null ViewGroup viewParent");
    }

    public void setOnInflateListener(OnInflateListener r1) {
        this.mInflateListener = r1;
    }
}
