package com.bianfeng.addpermission.ui;

public class ShowPermissionDecoration extends android.support.v7.widget.RecyclerView.ItemDecoration {
    private android.graphics.drawable.Drawable mDrawable;

    public ShowPermissionDecoration(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            android.content.res.Resources r0 = r3.getResources()
            java.lang.String r1 = "R.drawable.show_permission_decoration"
            int r3 = com.bianfeng.addpermission.common.ResourceManger.getId(r3, r1)
            android.graphics.drawable.Drawable r3 = r0.getDrawable(r3)
            r2.mDrawable = r3
            return
    }

    private void drawHorizontal(android.graphics.Canvas r3, android.support.v7.widget.RecyclerView r4) {
            r2 = this;
            r0 = 0
        L1:
            int r1 = r4.getChildCount()
            if (r0 >= r1) goto L11
            android.view.View r1 = r4.getChildAt(r0)
            r2.drawHorizontalDecoration(r3, r1)
            int r0 = r0 + 1
            goto L1
        L11:
            return
    }

    private void drawHorizontalDecoration(android.graphics.Canvas r4, android.view.View r5) {
            r3 = this;
            android.graphics.Rect r0 = new android.graphics.Rect
            r1 = 0
            r0.<init>(r1, r1, r1, r1)
            int r1 = r5.getBottom()
            r0.top = r1
            int r1 = r0.top
            android.graphics.drawable.Drawable r2 = r3.mDrawable
            int r2 = r2.getIntrinsicHeight()
            int r1 = r1 + r2
            r0.bottom = r1
            int r1 = r5.getLeft()
            r0.left = r1
            int r5 = r5.getRight()
            r0.right = r5
            android.graphics.drawable.Drawable r5 = r3.mDrawable
            r5.setBounds(r0)
            android.graphics.drawable.Drawable r5 = r3.mDrawable
            r5.draw(r4)
            return
    }

    @Override
    public void getItemOffsets(android.graphics.Rect r1, android.view.View r2, android.support.v7.widget.RecyclerView r3, android.support.v7.widget.RecyclerView.State r4) {
            r0 = this;
            super.getItemOffsets(r1, r2, r3, r4)
            android.graphics.drawable.Drawable r2 = r0.mDrawable
            int r2 = r2.getIntrinsicHeight()
            r1.bottom = r2
            return
    }

    @Override
    public void onDraw(android.graphics.Canvas r1, android.support.v7.widget.RecyclerView r2, android.support.v7.widget.RecyclerView.State r3) {
            r0 = this;
            super.onDraw(r1, r2, r3)
            r0.drawHorizontal(r1, r2)
            return
    }
}
