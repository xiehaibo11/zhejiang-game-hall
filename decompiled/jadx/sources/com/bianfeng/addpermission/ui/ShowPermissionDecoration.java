package com.bianfeng.addpermission.ui;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.support.v7.widget.RecyclerView;
import android.view.View;
import com.bianfeng.addpermission.common.ResourceManger;

/* JADX INFO: loaded from: classes.dex */
public class ShowPermissionDecoration extends RecyclerView.ItemDecoration {
    private Drawable mDrawable;

    public ShowPermissionDecoration(Context context) {
        this.mDrawable = context.getResources().getDrawable(ResourceManger.getId(context, "R.drawable.show_permission_decoration"));
    }

    @Override // android.support.v7.widget.RecyclerView.ItemDecoration
    public void onDraw(Canvas canvas, RecyclerView recyclerView, RecyclerView.State state) {
        super.onDraw(canvas, recyclerView, state);
        drawHorizontal(canvas, recyclerView);
    }

    private void drawHorizontal(Canvas canvas, RecyclerView recyclerView) {
        for (int i = 0; i < recyclerView.getChildCount(); i++) {
            drawHorizontalDecoration(canvas, recyclerView.getChildAt(i));
        }
    }

    private void drawHorizontalDecoration(Canvas canvas, View view) {
        Rect rect = new Rect(0, 0, 0, 0);
        rect.top = view.getBottom();
        rect.bottom = rect.top + this.mDrawable.getIntrinsicHeight();
        rect.left = view.getLeft();
        rect.right = view.getRight();
        this.mDrawable.setBounds(rect);
        this.mDrawable.draw(canvas);
    }

    @Override // android.support.v7.widget.RecyclerView.ItemDecoration
    public void getItemOffsets(Rect rect, View view, RecyclerView recyclerView, RecyclerView.State state) {
        super.getItemOffsets(rect, view, recyclerView, state);
        rect.bottom = this.mDrawable.getIntrinsicHeight();
    }
}
