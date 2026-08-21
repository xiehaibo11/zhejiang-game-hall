package com.kwad.components.core.page.recycle;

import android.support.v7.widget.OrientationHelper;
import android.support.v7.widget.RecyclerView;
import android.view.View;
import com.kwad.sdk.utils.ao;

public final class f {
    final RecyclerView Oj;
    final RecyclerView.LayoutManager Ok;

    private f(RecyclerView recyclerView) {
        this.Oj = recyclerView;
        this.Ok = recyclerView.getLayoutManager();
    }

    private View a(int i, int i2, boolean z, boolean z2) {
        OrientationHelper orientationHelperCreateVerticalHelper = this.Ok.canScrollVertically() ? OrientationHelper.createVerticalHelper(this.Ok) : OrientationHelper.createHorizontalHelper(this.Ok);
        int startAfterPadding = orientationHelperCreateVerticalHelper.getStartAfterPadding();
        int endAfterPadding = orientationHelperCreateVerticalHelper.getEndAfterPadding();
        int i3 = i2 > i ? 1 : -1;
        while (i != i2) {
            View childAt = this.Ok.getChildAt(i);
            int decoratedStart = orientationHelperCreateVerticalHelper.getDecoratedStart(childAt);
            int decoratedEnd = orientationHelperCreateVerticalHelper.getDecoratedEnd(childAt);
            if (decoratedStart < endAfterPadding && decoratedEnd > startAfterPadding) {
                return childAt;
            }
            i += i3;
        }
        return null;
    }

    public static f b(RecyclerView recyclerView) {
        ao.checkNotNull(recyclerView);
        return new f(recyclerView);
    }

    public final int findFirstVisibleItemPosition() {
        View viewA = a(0, this.Ok.getChildCount(), false, true);
        if (viewA == null) {
            return -1;
        }
        return this.Oj.getChildAdapterPosition(viewA);
    }

    public final int findLastVisibleItemPosition() {
        View viewA = a(this.Ok.getChildCount() - 1, -1, false, true);
        if (viewA == null) {
            return -1;
        }
        return this.Oj.getChildAdapterPosition(viewA);
    }
}
