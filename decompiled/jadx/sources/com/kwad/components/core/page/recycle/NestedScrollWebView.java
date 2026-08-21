package com.kwad.components.core.page.recycle;

import android.app.Activity;
import android.content.Context;
import android.support.v4.view.NestedScrollingChild;
import android.support.v4.view.NestedScrollingChildHelper;
import android.util.AttributeSet;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import com.kwad.sdk.core.webview.KsAdWebView;

/* JADX INFO: loaded from: classes2.dex */
public class NestedScrollWebView extends KsAdWebView implements NestedScrollingChild {
    private int NX;
    private int NY;
    private final int[] NZ;
    private final int[] Oa;
    private int Ob;
    private boolean Oc;
    private int Od;
    private int Oe;
    private NestedScrollingChildHelper Of;
    private VelocityTracker Og;
    private int Oh;

    public NestedScrollWebView(Context context) {
        super(context);
        this.NZ = new int[2];
        this.Oa = new int[2];
        pk();
    }

    public NestedScrollWebView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.NZ = new int[2];
        this.Oa = new int[2];
        pk();
    }

    public NestedScrollWebView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.NZ = new int[2];
        this.Oa = new int[2];
        pk();
    }

    private void pk() {
        this.Oh = 0;
        ViewConfiguration viewConfiguration = ViewConfiguration.get(getContext());
        this.Of = new NestedScrollingChildHelper(this);
        setNestedScrollingEnabled(true);
        this.Oe = viewConfiguration.getScaledMaximumFlingVelocity();
        this.Od = viewConfiguration.getScaledMinimumFlingVelocity();
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean dispatchNestedFling(float f, float f2, boolean z) {
        return this.Of.dispatchNestedFling(f, f2, z);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean dispatchNestedPreFling(float f, float f2) {
        return this.Of.dispatchNestedPreFling(f, f2);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean dispatchNestedPreScroll(int i, int i2, int[] iArr, int[] iArr2) {
        return this.Of.dispatchNestedPreScroll(i, i2, iArr, iArr2);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean dispatchNestedScroll(int i, int i2, int i3, int i4, int[] iArr) {
        return this.Of.dispatchNestedScroll(i, i2, i3, i4, iArr);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean hasNestedScrollingParent() {
        return this.Of.hasNestedScrollingParent();
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean isNestedScrollingEnabled() {
        return this.Of.isNestedScrollingEnabled();
    }

    @Override // android.webkit.WebView, android.widget.AbsoluteLayout, android.view.View
    protected void onMeasure(int i, int i2) {
        if (this.Oh != 0) {
            i2 = View.MeasureSpec.makeMeasureSpec(((getContext() instanceof Activity ? com.kwad.sdk.d.a.a.e((Activity) getContext()) : com.kwad.sdk.d.a.a.getScreenHeight(getContext())) - (com.kwad.components.core.t.d.qn() ? com.kwad.sdk.d.a.a.getStatusBarHeight(getContext()) : 0)) - this.Oh, 1073741824);
        }
        super.onMeasure(i, i2);
    }

    @Override // com.kwad.sdk.core.webview.KsAdWebView, android.webkit.WebView, android.view.View
    public void onScrollChanged(int i, int i2, int i3, int i4) {
        super.onScrollChanged(i, i2, i3, i4);
        if (hasFocus()) {
            return;
        }
        requestFocus();
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x00e2  */
    @Override // android.webkit.WebView, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean onTouchEvent(android.view.MotionEvent r21) {
        /*
            Method dump skipped, instruction units count: 355
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.core.page.recycle.NestedScrollWebView.onTouchEvent(android.view.MotionEvent):boolean");
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public void setNestedScrollingEnabled(boolean z) {
        this.Of.setNestedScrollingEnabled(z);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean startNestedScroll(int i) {
        return this.Of.startNestedScroll(i);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public void stopNestedScroll() {
        this.Of.stopNestedScroll();
    }
}
