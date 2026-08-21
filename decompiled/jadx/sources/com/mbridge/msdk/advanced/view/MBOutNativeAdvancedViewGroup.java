package com.mbridge.msdk.advanced.view;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.RelativeLayout;
import com.mbridge.msdk.advanced.c.c;

/* JADX INFO: loaded from: classes2.dex */
public class MBOutNativeAdvancedViewGroup extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private c f3105a;

    public void setProvider(c cVar) {
        this.f3105a = cVar;
    }

    public MBOutNativeAdvancedViewGroup(Context context) {
        super(context);
    }

    public MBOutNativeAdvancedViewGroup(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public MBOutNativeAdvancedViewGroup(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.f3105a != null) {
            a(1);
            if (getVisibility() == 0) {
                a(2);
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        c cVar = this.f3105a;
        if (cVar != null) {
            cVar.e(1);
        }
    }

    @Override // android.view.View
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        if (i == 0) {
            a(2);
            if (getParent() != null) {
                a(1);
                return;
            }
            return;
        }
        c cVar = this.f3105a;
        if (cVar != null) {
            cVar.e(2);
        }
    }

    private void a(final int i) {
        postDelayed(new Runnable() { // from class: com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup.1
            @Override // java.lang.Runnable
            public final void run() {
                if (MBOutNativeAdvancedViewGroup.this.f3105a != null) {
                    MBOutNativeAdvancedViewGroup.this.f3105a.d(i);
                }
            }
        }, 200L);
    }
}
