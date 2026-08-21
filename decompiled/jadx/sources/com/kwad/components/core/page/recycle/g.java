package com.kwad.components.core.page.recycle;

import android.content.Context;
import android.support.v7.widget.RecyclerView;
import android.util.AttributeSet;
import android.view.View;

/* JADX INFO: loaded from: classes2.dex */
public class g extends RecyclerView {
    private boolean Ol;

    public g(Context context) {
        super(context);
    }

    public g(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public g(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override // android.support.v7.widget.RecyclerView, android.view.ViewGroup
    protected void removeDetachedView(View view, boolean z) {
        boolean z2 = this.Ol;
        super.removeDetachedView(view, z);
    }

    public void setIngoreTmpDetachedFlag(boolean z) {
        this.Ol = z;
    }
}
