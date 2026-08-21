package com.tkay.expressad.advanced.view;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.RelativeLayout;
import com.tkay.expressad.advanced.d.c;

/* JADX INFO: loaded from: classes3.dex */
public class ATOutNativeAdvancedViewGroup extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private c f6398a;

    public void setProvider(c cVar) {
        this.f6398a = cVar;
    }

    public ATOutNativeAdvancedViewGroup(Context context) {
        super(context);
    }

    public ATOutNativeAdvancedViewGroup(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public ATOutNativeAdvancedViewGroup(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.f6398a != null) {
            a(1);
            if (getVisibility() == 0) {
                a(2);
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        c cVar = this.f6398a;
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
        c cVar = this.f6398a;
        if (cVar != null) {
            cVar.e(2);
        }
    }

    private void a(final int i) {
        postDelayed(new Runnable() { // from class: com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup.1
            @Override // java.lang.Runnable
            public final void run() {
                if (ATOutNativeAdvancedViewGroup.this.f6398a != null) {
                    ATOutNativeAdvancedViewGroup.this.f6398a.d(i);
                }
            }
        }, 200L);
    }
}
