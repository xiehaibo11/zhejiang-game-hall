package com.kwad.components.core.page.recycle;

public final class f {
    final android.support.v7.widget.RecyclerView Oj;
    final android.support.v7.widget.RecyclerView.LayoutManager Ok;

    private f(android.support.v7.widget.RecyclerView r1) {
            r0 = this;
            r0.<init>()
            r0.Oj = r1
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r1.getLayoutManager()
            r0.Ok = r1
            return
    }

    private android.view.View a(int r6, int r7, boolean r8, boolean r9) {
            r5 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r8 = r5.Ok
            boolean r8 = r8.canScrollVertically()
            if (r8 == 0) goto Lf
            android.support.v7.widget.RecyclerView$LayoutManager r8 = r5.Ok
            android.support.v7.widget.OrientationHelper r8 = android.support.v7.widget.OrientationHelper.createVerticalHelper(r8)
            goto L15
        Lf:
            android.support.v7.widget.RecyclerView$LayoutManager r8 = r5.Ok
            android.support.v7.widget.OrientationHelper r8 = android.support.v7.widget.OrientationHelper.createHorizontalHelper(r8)
        L15:
            int r9 = r8.getStartAfterPadding()
            int r0 = r8.getEndAfterPadding()
            if (r7 <= r6) goto L21
            r1 = 1
            goto L22
        L21:
            r1 = -1
        L22:
            if (r6 == r7) goto L39
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r5.Ok
            android.view.View r2 = r2.getChildAt(r6)
            int r3 = r8.getDecoratedStart(r2)
            int r4 = r8.getDecoratedEnd(r2)
            if (r3 >= r0) goto L37
            if (r4 <= r9) goto L37
            return r2
        L37:
            int r6 = r6 + r1
            goto L22
        L39:
            r6 = 0
            return r6
    }

    public static com.kwad.components.core.page.recycle.f b(android.support.v7.widget.RecyclerView r1) {
            com.kwad.sdk.utils.ao.checkNotNull(r1)
            com.kwad.components.core.page.recycle.f r0 = new com.kwad.components.core.page.recycle.f
            r0.<init>(r1)
            return r0
    }

    public final int findFirstVisibleItemPosition() {
            r3 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.Ok
            int r0 = r0.getChildCount()
            r1 = 0
            r2 = 1
            android.view.View r0 = r3.a(r1, r0, r1, r2)
            if (r0 != 0) goto L10
            r0 = -1
            return r0
        L10:
            android.support.v7.widget.RecyclerView r1 = r3.Oj
            int r0 = r1.getChildAdapterPosition(r0)
            return r0
    }

    public final int findLastVisibleItemPosition() {
            r4 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r4.Ok
            int r0 = r0.getChildCount()
            r1 = 1
            int r0 = r0 - r1
            r2 = -1
            r3 = 0
            android.view.View r0 = r4.a(r0, r2, r3, r1)
            if (r0 != 0) goto L11
            return r2
        L11:
            android.support.v7.widget.RecyclerView r1 = r4.Oj
            int r0 = r1.getChildAdapterPosition(r0)
            return r0
    }
}
