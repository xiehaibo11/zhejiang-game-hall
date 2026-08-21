package com.kwad.components.core.page.recycle;

public class g extends android.support.v7.widget.RecyclerView {
    private boolean Ol;

    public g(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public g(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public g(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void removeDetachedView(android.view.View r2, boolean r3) {
            r1 = this;
            boolean r0 = r1.Ol
            super.removeDetachedView(r2, r3)
            return
    }

    public void setIngoreTmpDetachedFlag(boolean r1) {
            r0 = this;
            r0.Ol = r1
            return
    }
}
