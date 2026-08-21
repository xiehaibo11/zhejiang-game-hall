package android.support.v7.widget;

public class ActionMenuView extends android.support.v7.widget.LinearLayoutCompat implements android.support.v7.view.menu.MenuBuilder.ItemInvoker, android.support.v7.view.menu.MenuView {
    static final int GENERATED_ITEM_PADDING = 4;
    static final int MIN_CELL_SIZE = 56;
    private static final java.lang.String TAG = "ActionMenuView";
    private android.support.v7.view.menu.MenuPresenter.Callback mActionMenuPresenterCallback;
    private boolean mFormatItems;
    private int mFormatItemsWidth;
    private int mGeneratedItemPadding;
    private android.support.v7.view.menu.MenuBuilder mMenu;
    android.support.v7.view.menu.MenuBuilder.Callback mMenuBuilderCallback;
    private int mMinCellSize;
    android.support.v7.widget.ActionMenuView.OnMenuItemClickListener mOnMenuItemClickListener;
    private android.content.Context mPopupContext;
    private int mPopupTheme;
    private android.support.v7.widget.ActionMenuPresenter mPresenter;
    private boolean mReserveOverflow;

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public interface ActionMenuChildView {
        boolean needsDividerAfter();

        boolean needsDividerBefore();
    }

    private static class ActionMenuPresenterCallback implements android.support.v7.view.menu.MenuPresenter.Callback {
        ActionMenuPresenterCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r1, boolean r2) {
                r0 = this;
                return
        }

        @Override
        public boolean onOpenSubMenu(android.support.v7.view.menu.MenuBuilder r1) {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public static class LayoutParams extends android.support.v7.widget.LinearLayoutCompat.LayoutParams {

        @android.view.ViewDebug.ExportedProperty
        public int cellsUsed;

        @android.view.ViewDebug.ExportedProperty
        public boolean expandable;
        boolean expanded;

        @android.view.ViewDebug.ExportedProperty
        public int extraPixels;

        @android.view.ViewDebug.ExportedProperty
        public boolean isOverflowButton;

        @android.view.ViewDebug.ExportedProperty
        public boolean preventEdgeOffset;

        public LayoutParams(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = 0
                r0.isOverflowButton = r1
                return
        }

        LayoutParams(int r1, int r2, boolean r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.isOverflowButton = r3
                return
        }

        public LayoutParams(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public LayoutParams(android.support.v7.widget.ActionMenuView.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                boolean r1 = r1.isOverflowButton
                r0.isOverflowButton = r1
                return
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private class MenuBuilderCallback implements android.support.v7.view.menu.MenuBuilder.Callback {
        final android.support.v7.widget.ActionMenuView this$0;

        MenuBuilderCallback(android.support.v7.widget.ActionMenuView r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public boolean onMenuItemSelected(android.support.v7.view.menu.MenuBuilder r1, android.view.MenuItem r2) {
                r0 = this;
                android.support.v7.widget.ActionMenuView r1 = r0.this$0
                android.support.v7.widget.ActionMenuView$OnMenuItemClickListener r1 = r1.mOnMenuItemClickListener
                if (r1 == 0) goto L12
                android.support.v7.widget.ActionMenuView r1 = r0.this$0
                android.support.v7.widget.ActionMenuView$OnMenuItemClickListener r1 = r1.mOnMenuItemClickListener
                boolean r1 = r1.onMenuItemClick(r2)
                if (r1 == 0) goto L12
                r1 = 1
                goto L13
            L12:
                r1 = 0
            L13:
                return r1
        }

        @Override
        public void onMenuModeChange(android.support.v7.view.menu.MenuBuilder r2) {
                r1 = this;
                android.support.v7.widget.ActionMenuView r0 = r1.this$0
                android.support.v7.view.menu.MenuBuilder$Callback r0 = r0.mMenuBuilderCallback
                if (r0 == 0) goto Ld
                android.support.v7.widget.ActionMenuView r0 = r1.this$0
                android.support.v7.view.menu.MenuBuilder$Callback r0 = r0.mMenuBuilderCallback
                r0.onMenuModeChange(r2)
            Ld:
                return
        }
    }

    public interface OnMenuItemClickListener {
        boolean onMenuItemClick(android.view.MenuItem r1);
    }

    public ActionMenuView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ActionMenuView(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            r4 = 0
            r2.setBaselineAligned(r4)
            android.content.res.Resources r0 = r3.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            r1 = 1113587712(0x42600000, float:56.0)
            float r1 = r1 * r0
            int r1 = (int) r1
            r2.mMinCellSize = r1
            r1 = 1082130432(0x40800000, float:4.0)
            float r0 = r0 * r1
            int r0 = (int) r0
            r2.mGeneratedItemPadding = r0
            r2.mPopupContext = r3
            r2.mPopupTheme = r4
            return
    }

    static int measureChildForCells(android.view.View r5, int r6, int r7, int r8, int r9) {
            android.view.ViewGroup$LayoutParams r0 = r5.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r0 = (android.support.v7.widget.ActionMenuView.LayoutParams) r0
            int r1 = android.view.View.MeasureSpec.getSize(r8)
            int r1 = r1 - r9
            int r8 = android.view.View.MeasureSpec.getMode(r8)
            int r8 = android.view.View.MeasureSpec.makeMeasureSpec(r1, r8)
            boolean r9 = r5 instanceof android.support.v7.view.menu.ActionMenuItemView
            if (r9 == 0) goto L1b
            r9 = r5
            android.support.v7.view.menu.ActionMenuItemView r9 = (android.support.v7.view.menu.ActionMenuItemView) r9
            goto L1c
        L1b:
            r9 = 0
        L1c:
            r1 = 1
            r2 = 0
            if (r9 == 0) goto L28
            boolean r9 = r9.hasText()
            if (r9 == 0) goto L28
            r9 = 1
            goto L29
        L28:
            r9 = 0
        L29:
            r3 = 2
            if (r7 <= 0) goto L4d
            if (r9 == 0) goto L30
            if (r7 < r3) goto L4d
        L30:
            int r7 = r7 * r6
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            int r7 = android.view.View.MeasureSpec.makeMeasureSpec(r7, r4)
            r5.measure(r7, r8)
            int r7 = r5.getMeasuredWidth()
            int r4 = r7 / r6
            int r7 = r7 % r6
            if (r7 == 0) goto L46
            int r4 = r4 + 1
        L46:
            if (r9 == 0) goto L4b
            if (r4 >= r3) goto L4b
            goto L4e
        L4b:
            r3 = r4
            goto L4e
        L4d:
            r3 = 0
        L4e:
            boolean r7 = r0.isOverflowButton
            if (r7 != 0) goto L55
            if (r9 == 0) goto L55
            goto L56
        L55:
            r1 = 0
        L56:
            r0.expandable = r1
            r0.cellsUsed = r3
            int r6 = r6 * r3
            r7 = 1073741824(0x40000000, float:2.0)
            int r6 = android.view.View.MeasureSpec.makeMeasureSpec(r6, r7)
            r5.measure(r6, r8)
            return r3
    }

    private void onMeasureExactFormat(int r30, int r31) {
            r29 = this;
            r0 = r29
            int r1 = android.view.View.MeasureSpec.getMode(r31)
            int r2 = android.view.View.MeasureSpec.getSize(r30)
            int r3 = android.view.View.MeasureSpec.getSize(r31)
            int r4 = r29.getPaddingLeft()
            int r5 = r29.getPaddingRight()
            int r4 = r4 + r5
            int r5 = r29.getPaddingTop()
            int r6 = r29.getPaddingBottom()
            int r5 = r5 + r6
            r6 = -2
            r7 = r31
            int r6 = getChildMeasureSpec(r7, r5, r6)
            int r2 = r2 - r4
            int r4 = r0.mMinCellSize
            int r7 = r2 / r4
            int r8 = r2 % r4
            r9 = 0
            if (r7 != 0) goto L35
            r0.setMeasuredDimension(r2, r9)
            return
        L35:
            int r8 = r8 / r7
            int r4 = r4 + r8
            int r8 = r29.getChildCount()
            r14 = r7
            r7 = 0
            r10 = 0
            r12 = 0
            r13 = 0
            r15 = 0
            r16 = 0
            r17 = 0
        L45:
            if (r7 >= r8) goto Lc5
            android.view.View r11 = r0.getChildAt(r7)
            int r9 = r11.getVisibility()
            r19 = r3
            r3 = 8
            if (r9 != r3) goto L57
            goto Lbf
        L57:
            boolean r3 = r11 instanceof android.support.v7.view.menu.ActionMenuItemView
            int r13 = r13 + 1
            if (r3 == 0) goto L66
            int r9 = r0.mGeneratedItemPadding
            r20 = r13
            r13 = 0
            r11.setPadding(r9, r13, r9, r13)
            goto L69
        L66:
            r20 = r13
            r13 = 0
        L69:
            android.view.ViewGroup$LayoutParams r9 = r11.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r9 = (android.support.v7.widget.ActionMenuView.LayoutParams) r9
            r9.expanded = r13
            r9.extraPixels = r13
            r9.cellsUsed = r13
            r9.expandable = r13
            r9.leftMargin = r13
            r9.rightMargin = r13
            if (r3 == 0) goto L88
            r3 = r11
            android.support.v7.view.menu.ActionMenuItemView r3 = (android.support.v7.view.menu.ActionMenuItemView) r3
            boolean r3 = r3.hasText()
            if (r3 == 0) goto L88
            r3 = 1
            goto L89
        L88:
            r3 = 0
        L89:
            r9.preventEdgeOffset = r3
            boolean r3 = r9.isOverflowButton
            if (r3 == 0) goto L91
            r3 = 1
            goto L92
        L91:
            r3 = r14
        L92:
            int r3 = measureChildForCells(r11, r4, r3, r6, r5)
            int r13 = java.lang.Math.max(r15, r3)
            boolean r15 = r9.expandable
            if (r15 == 0) goto La0
            int r16 = r16 + 1
        La0:
            boolean r9 = r9.isOverflowButton
            if (r9 == 0) goto La5
            r12 = 1
        La5:
            int r14 = r14 - r3
            int r9 = r11.getMeasuredHeight()
            int r10 = java.lang.Math.max(r10, r9)
            r9 = 1
            if (r3 != r9) goto Lbb
            int r3 = r9 << r7
            r11 = r10
            long r9 = (long) r3
            long r9 = r17 | r9
            r17 = r9
            r10 = r11
            goto Lbc
        Lbb:
            r11 = r10
        Lbc:
            r15 = r13
            r13 = r20
        Lbf:
            int r7 = r7 + 1
            r3 = r19
            r9 = 0
            goto L45
        Lc5:
            r19 = r3
            r3 = 2
            if (r12 == 0) goto Lce
            if (r13 != r3) goto Lce
            r5 = 1
            goto Lcf
        Lce:
            r5 = 0
        Lcf:
            r7 = 0
        Ld0:
            r20 = 1
            if (r16 <= 0) goto L175
            if (r14 <= 0) goto L175
            r9 = 2147483647(0x7fffffff, float:NaN)
            r3 = 2147483647(0x7fffffff, float:NaN)
            r9 = 0
            r11 = 0
            r22 = 0
        Le0:
            if (r9 >= r8) goto L114
            android.view.View r24 = r0.getChildAt(r9)
            android.view.ViewGroup$LayoutParams r24 = r24.getLayoutParams()
            r25 = r7
            r7 = r24
            android.support.v7.widget.ActionMenuView$LayoutParams r7 = (android.support.v7.widget.ActionMenuView.LayoutParams) r7
            r24 = r10
            boolean r10 = r7.expandable
            if (r10 != 0) goto Lf7
            goto L10d
        Lf7:
            int r10 = r7.cellsUsed
            if (r10 >= r3) goto L103
            int r3 = r7.cellsUsed
            long r10 = r20 << r9
            r22 = r10
            r11 = 1
            goto L10d
        L103:
            int r7 = r7.cellsUsed
            if (r7 != r3) goto L10d
            long r26 = r20 << r9
            long r22 = r22 | r26
            int r11 = r11 + 1
        L10d:
            int r9 = r9 + 1
            r10 = r24
            r7 = r25
            goto Le0
        L114:
            r25 = r7
            r24 = r10
            long r17 = r17 | r22
            if (r11 <= r14) goto L120
            r11 = r1
            r26 = r2
            goto L17c
        L120:
            int r3 = r3 + 1
            r7 = 0
        L123:
            if (r7 >= r8) goto L16f
            android.view.View r9 = r0.getChildAt(r7)
            android.view.ViewGroup$LayoutParams r10 = r9.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r10 = (android.support.v7.widget.ActionMenuView.LayoutParams) r10
            r26 = r2
            r11 = 1
            int r2 = r11 << r7
            r11 = r1
            long r1 = (long) r2
            long r20 = r22 & r1
            r27 = 0
            int r25 = (r20 > r27 ? 1 : (r20 == r27 ? 0 : -1))
            if (r25 != 0) goto L147
            int r9 = r10.cellsUsed
            if (r9 != r3) goto L144
            long r17 = r17 | r1
        L144:
            r20 = r3
            goto L167
        L147:
            if (r5 == 0) goto L15b
            boolean r1 = r10.preventEdgeOffset
            if (r1 == 0) goto L15b
            r1 = 1
            if (r14 != r1) goto L15b
            int r2 = r0.mGeneratedItemPadding
            int r1 = r2 + r4
            r20 = r3
            r3 = 0
            r9.setPadding(r1, r3, r2, r3)
            goto L15d
        L15b:
            r20 = r3
        L15d:
            int r1 = r10.cellsUsed
            r2 = 1
            int r1 = r1 + r2
            r10.cellsUsed = r1
            r10.expanded = r2
            int r14 = r14 + (-1)
        L167:
            int r7 = r7 + 1
            r1 = r11
            r3 = r20
            r2 = r26
            goto L123
        L16f:
            r10 = r24
            r3 = 2
            r7 = 1
            goto Ld0
        L175:
            r11 = r1
            r26 = r2
            r25 = r7
            r24 = r10
        L17c:
            if (r12 != 0) goto L183
            r1 = 1
            if (r13 != r1) goto L184
            r2 = 1
            goto L185
        L183:
            r1 = 1
        L184:
            r2 = 0
        L185:
            if (r14 <= 0) goto L239
            r9 = 0
            int r3 = (r17 > r9 ? 1 : (r17 == r9 ? 0 : -1))
            if (r3 == 0) goto L239
            int r13 = r13 - r1
            if (r14 < r13) goto L194
            if (r2 != 0) goto L194
            if (r15 <= r1) goto L239
        L194:
            int r1 = java.lang.Long.bitCount(r17)
            float r1 = (float) r1
            if (r2 != 0) goto L1d5
            long r2 = r17 & r20
            r5 = 1056964608(0x3f000000, float:0.5)
            r9 = 0
            int r7 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r7 == 0) goto L1b6
            r13 = 0
            android.view.View r2 = r0.getChildAt(r13)
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r2 = (android.support.v7.widget.ActionMenuView.LayoutParams) r2
            boolean r2 = r2.preventEdgeOffset
            if (r2 != 0) goto L1b7
            float r1 = r1 - r5
            goto L1b7
        L1b6:
            r13 = 0
        L1b7:
            int r2 = r8 + (-1)
            r3 = 1
            int r7 = r3 << r2
            long r9 = (long) r7
            long r9 = r17 & r9
            r15 = 0
            int r3 = (r9 > r15 ? 1 : (r9 == r15 ? 0 : -1))
            if (r3 == 0) goto L1d6
            android.view.View r2 = r0.getChildAt(r2)
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r2 = (android.support.v7.widget.ActionMenuView.LayoutParams) r2
            boolean r2 = r2.preventEdgeOffset
            if (r2 != 0) goto L1d6
            float r1 = r1 - r5
            goto L1d6
        L1d5:
            r13 = 0
        L1d6:
            r2 = 0
            int r2 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1e1
            int r14 = r14 * r4
            float r2 = (float) r14
            float r2 = r2 / r1
            int r9 = (int) r2
            goto L1e2
        L1e1:
            r9 = 0
        L1e2:
            r1 = 0
        L1e3:
            if (r1 >= r8) goto L23a
            r2 = 1
            int r3 = r2 << r1
            long r2 = (long) r3
            long r2 = r17 & r2
            r14 = 0
            int r5 = (r2 > r14 ? 1 : (r2 == r14 ? 0 : -1))
            if (r5 != 0) goto L1f4
            r2 = 1
            r5 = 2
            goto L236
        L1f4:
            android.view.View r2 = r0.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r3 = (android.support.v7.widget.ActionMenuView.LayoutParams) r3
            boolean r2 = r2 instanceof android.support.v7.view.menu.ActionMenuItemView
            if (r2 == 0) goto L216
            r3.extraPixels = r9
            r2 = 1
            r3.expanded = r2
            if (r1 != 0) goto L213
            boolean r2 = r3.preventEdgeOffset
            if (r2 != 0) goto L213
            int r2 = -r9
            r5 = 2
            int r2 = r2 / r5
            r3.leftMargin = r2
            goto L214
        L213:
            r5 = 2
        L214:
            r2 = 1
            goto L224
        L216:
            r5 = 2
            boolean r2 = r3.isOverflowButton
            if (r2 == 0) goto L227
            r3.extraPixels = r9
            r2 = 1
            r3.expanded = r2
            int r7 = -r9
            int r7 = r7 / r5
            r3.rightMargin = r7
        L224:
            r25 = 1
            goto L236
        L227:
            r2 = 1
            if (r1 == 0) goto L22e
            int r7 = r9 / 2
            r3.leftMargin = r7
        L22e:
            int r7 = r8 + (-1)
            if (r1 == r7) goto L236
            int r7 = r9 / 2
            r3.rightMargin = r7
        L236:
            int r1 = r1 + 1
            goto L1e3
        L239:
            r13 = 0
        L23a:
            r1 = 1073741824(0x40000000, float:2.0)
            if (r25 == 0) goto L260
        L23e:
            if (r13 >= r8) goto L260
            android.view.View r2 = r0.getChildAt(r13)
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r3 = (android.support.v7.widget.ActionMenuView.LayoutParams) r3
            boolean r5 = r3.expanded
            if (r5 != 0) goto L24f
            goto L25d
        L24f:
            int r5 = r3.cellsUsed
            int r5 = r5 * r4
            int r3 = r3.extraPixels
            int r5 = r5 + r3
            int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r5, r1)
            r2.measure(r3, r6)
        L25d:
            int r13 = r13 + 1
            goto L23e
        L260:
            if (r11 == r1) goto L265
            r1 = r24
            goto L267
        L265:
            r1 = r19
        L267:
            r2 = r26
            r0.setMeasuredDimension(r2, r1)
            return
    }

    @Override
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            if (r1 == 0) goto L8
            boolean r1 = r1 instanceof android.support.v7.widget.ActionMenuView.LayoutParams
            if (r1 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    public void dismissPopupMenus() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mPresenter
            if (r0 == 0) goto L7
            r0.dismissPopupMenus()
        L7:
            return
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(android.view.accessibility.AccessibilityEvent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected android.support.v7.widget.ActionMenuView.LayoutParams generateDefaultLayoutParams() {
            r2 = this;
            android.support.v7.widget.ActionMenuView$LayoutParams r0 = new android.support.v7.widget.ActionMenuView$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r1 = 16
            r0.gravity = r1
            return r0
    }

    @Override
    protected android.support.v7.widget.LinearLayoutCompat.LayoutParams generateDefaultLayoutParams() {
            r1 = this;
            android.support.v7.widget.ActionMenuView$LayoutParams r0 = r1.generateDefaultLayoutParams()
            return r0
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
            r1 = this;
            android.support.v7.widget.ActionMenuView$LayoutParams r0 = r1.generateDefaultLayoutParams()
            return r0
    }

    @Override
    public android.support.v7.widget.ActionMenuView.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            android.support.v7.widget.ActionMenuView$LayoutParams r0 = new android.support.v7.widget.ActionMenuView$LayoutParams
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    protected android.support.v7.widget.ActionMenuView.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            if (r2 == 0) goto L1c
            boolean r0 = r2 instanceof android.support.v7.widget.ActionMenuView.LayoutParams
            if (r0 == 0) goto Le
            android.support.v7.widget.ActionMenuView$LayoutParams r0 = new android.support.v7.widget.ActionMenuView$LayoutParams
            android.support.v7.widget.ActionMenuView$LayoutParams r2 = (android.support.v7.widget.ActionMenuView.LayoutParams) r2
            r0.<init>(r2)
            goto L13
        Le:
            android.support.v7.widget.ActionMenuView$LayoutParams r0 = new android.support.v7.widget.ActionMenuView$LayoutParams
            r0.<init>(r2)
        L13:
            int r2 = r0.gravity
            if (r2 > 0) goto L1b
            r2 = 16
            r0.gravity = r2
        L1b:
            return r0
        L1c:
            android.support.v7.widget.ActionMenuView$LayoutParams r2 = r1.generateDefaultLayoutParams()
            return r2
    }

    @Override
    public android.support.v7.widget.LinearLayoutCompat.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.support.v7.widget.ActionMenuView$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    protected android.support.v7.widget.LinearLayoutCompat.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            android.support.v7.widget.ActionMenuView$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.support.v7.widget.ActionMenuView$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            android.support.v7.widget.ActionMenuView$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public android.support.v7.widget.ActionMenuView.LayoutParams generateOverflowButtonLayoutParams() {
            r2 = this;
            android.support.v7.widget.ActionMenuView$LayoutParams r0 = r2.generateDefaultLayoutParams()
            r1 = 1
            r0.isOverflowButton = r1
            return r0
    }

    public android.view.Menu getMenu() {
            r3 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r3.mMenu
            if (r0 != 0) goto L43
            android.content.Context r0 = r3.getContext()
            android.support.v7.view.menu.MenuBuilder r1 = new android.support.v7.view.menu.MenuBuilder
            r1.<init>(r0)
            r3.mMenu = r1
            android.support.v7.view.menu.MenuBuilder r1 = r3.mMenu
            android.support.v7.widget.ActionMenuView$MenuBuilderCallback r2 = new android.support.v7.widget.ActionMenuView$MenuBuilderCallback
            r2.<init>(r3)
            r1.setCallback(r2)
            android.support.v7.widget.ActionMenuPresenter r1 = new android.support.v7.widget.ActionMenuPresenter
            r1.<init>(r0)
            r3.mPresenter = r1
            android.support.v7.widget.ActionMenuPresenter r0 = r3.mPresenter
            r1 = 1
            r0.setReserveOverflow(r1)
            android.support.v7.widget.ActionMenuPresenter r0 = r3.mPresenter
            android.support.v7.view.menu.MenuPresenter$Callback r1 = r3.mActionMenuPresenterCallback
            if (r1 == 0) goto L2d
            goto L32
        L2d:
            android.support.v7.widget.ActionMenuView$ActionMenuPresenterCallback r1 = new android.support.v7.widget.ActionMenuView$ActionMenuPresenterCallback
            r1.<init>()
        L32:
            r0.setCallback(r1)
            android.support.v7.view.menu.MenuBuilder r0 = r3.mMenu
            android.support.v7.widget.ActionMenuPresenter r1 = r3.mPresenter
            android.content.Context r2 = r3.mPopupContext
            r0.addMenuPresenter(r1, r2)
            android.support.v7.widget.ActionMenuPresenter r0 = r3.mPresenter
            r0.setMenuView(r3)
        L43:
            android.support.v7.view.menu.MenuBuilder r0 = r3.mMenu
            return r0
    }

    @android.support.annotation.Nullable
    public android.graphics.drawable.Drawable getOverflowIcon() {
            r1 = this;
            r1.getMenu()
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mPresenter
            android.graphics.drawable.Drawable r0 = r0.getOverflowIcon()
            return r0
    }

    public int getPopupTheme() {
            r1 = this;
            int r0 = r1.mPopupTheme
            return r0
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public int getWindowAnimations() {
            r1 = this;
            r0 = 0
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    protected boolean hasSupportDividerBeforeChildAt(int r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            int r1 = r5 + (-1)
            android.view.View r1 = r4.getChildAt(r1)
            android.view.View r2 = r4.getChildAt(r5)
            int r3 = r4.getChildCount()
            if (r5 >= r3) goto L1f
            boolean r3 = r1 instanceof android.support.v7.widget.ActionMenuView.ActionMenuChildView
            if (r3 == 0) goto L1f
            android.support.v7.widget.ActionMenuView$ActionMenuChildView r1 = (android.support.v7.widget.ActionMenuView.ActionMenuChildView) r1
            boolean r1 = r1.needsDividerAfter()
            r0 = r0 | r1
        L1f:
            if (r5 <= 0) goto L2c
            boolean r5 = r2 instanceof android.support.v7.widget.ActionMenuView.ActionMenuChildView
            if (r5 == 0) goto L2c
            android.support.v7.widget.ActionMenuView$ActionMenuChildView r2 = (android.support.v7.widget.ActionMenuView.ActionMenuChildView) r2
            boolean r5 = r2.needsDividerBefore()
            r0 = r0 | r5
        L2c:
            return r0
    }

    public boolean hideOverflowMenu() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mPresenter
            if (r0 == 0) goto Lc
            boolean r0 = r0.hideOverflowMenu()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void initialize(android.support.v7.view.menu.MenuBuilder r1) {
            r0 = this;
            r0.mMenu = r1
            return
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public boolean invokeItem(android.support.v7.view.menu.MenuItemImpl r3) {
            r2 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r2.mMenu
            r1 = 0
            boolean r3 = r0.performItemAction(r3, r1)
            return r3
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public boolean isOverflowMenuShowPending() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mPresenter
            if (r0 == 0) goto Lc
            boolean r0 = r0.isOverflowMenuShowPending()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean isOverflowMenuShowing() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mPresenter
            if (r0 == 0) goto Lc
            boolean r0 = r0.isOverflowMenuShowing()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public boolean isOverflowReserved() {
            r1 = this;
            boolean r0 = r1.mReserveOverflow
            return r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            android.support.v7.widget.ActionMenuPresenter r2 = r1.mPresenter
            if (r2 == 0) goto L1d
            r0 = 0
            r2.updateMenuView(r0)
            android.support.v7.widget.ActionMenuPresenter r2 = r1.mPresenter
            boolean r2 = r2.isOverflowMenuShowing()
            if (r2 == 0) goto L1d
            android.support.v7.widget.ActionMenuPresenter r2 = r1.mPresenter
            r2.hideOverflowMenu()
            android.support.v7.widget.ActionMenuPresenter r2 = r1.mPresenter
            r2.showOverflowMenu()
        L1d:
            return
    }

    @Override
    public void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.dismissPopupMenus()
            return
    }

    @Override
    protected void onLayout(boolean r18, int r19, int r20, int r21, int r22) {
            r17 = this;
            r0 = r17
            boolean r1 = r0.mFormatItems
            if (r1 != 0) goto La
            super.onLayout(r18, r19, r20, r21, r22)
            return
        La:
            int r1 = r17.getChildCount()
            int r2 = r22 - r20
            int r2 = r2 / 2
            int r3 = r17.getDividerWidth()
            int r4 = r21 - r19
            int r5 = r17.getPaddingRight()
            int r5 = r4 - r5
            int r6 = r17.getPaddingLeft()
            int r5 = r5 - r6
            boolean r6 = android.support.v7.widget.ViewUtils.isLayoutRtl(r17)
            r10 = r5
            r5 = 0
            r8 = 0
            r9 = 0
        L2b:
            r11 = 8
            r12 = 1
            if (r5 >= r1) goto L8f
            android.view.View r13 = r0.getChildAt(r5)
            int r14 = r13.getVisibility()
            if (r14 != r11) goto L3b
            goto L8c
        L3b:
            android.view.ViewGroup$LayoutParams r11 = r13.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r11 = (android.support.v7.widget.ActionMenuView.LayoutParams) r11
            boolean r14 = r11.isOverflowButton
            if (r14 == 0) goto L7b
            int r8 = r13.getMeasuredWidth()
            boolean r14 = r0.hasSupportDividerBeforeChildAt(r5)
            if (r14 == 0) goto L50
            int r8 = r8 + r3
        L50:
            int r14 = r13.getMeasuredHeight()
            if (r6 == 0) goto L60
            int r15 = r17.getPaddingLeft()
            int r11 = r11.leftMargin
            int r15 = r15 + r11
            int r11 = r15 + r8
            goto L70
        L60:
            int r15 = r17.getWidth()
            int r16 = r17.getPaddingRight()
            int r15 = r15 - r16
            int r11 = r11.rightMargin
            int r11 = r15 - r11
            int r15 = r11 - r8
        L70:
            int r16 = r14 / 2
            int r7 = r2 - r16
            int r14 = r14 + r7
            r13.layout(r15, r7, r11, r14)
            int r10 = r10 - r8
            r8 = 1
            goto L8c
        L7b:
            int r7 = r13.getMeasuredWidth()
            int r12 = r11.leftMargin
            int r7 = r7 + r12
            int r11 = r11.rightMargin
            int r7 = r7 + r11
            int r10 = r10 - r7
            boolean r7 = r0.hasSupportDividerBeforeChildAt(r5)
            int r9 = r9 + 1
        L8c:
            int r5 = r5 + 1
            goto L2b
        L8f:
            if (r1 != r12) goto Lae
            if (r8 != 0) goto Lae
            r3 = 0
            android.view.View r1 = r0.getChildAt(r3)
            int r3 = r1.getMeasuredWidth()
            int r5 = r1.getMeasuredHeight()
            int r4 = r4 / 2
            int r6 = r3 / 2
            int r4 = r4 - r6
            int r6 = r5 / 2
            int r2 = r2 - r6
            int r3 = r3 + r4
            int r5 = r5 + r2
            r1.layout(r4, r2, r3, r5)
            return
        Lae:
            r3 = r8 ^ 1
            int r9 = r9 - r3
            if (r9 <= 0) goto Lb7
            int r7 = r10 / r9
            r3 = 0
            goto Lb9
        Lb7:
            r3 = 0
            r7 = 0
        Lb9:
            int r4 = java.lang.Math.max(r3, r7)
            if (r6 == 0) goto Lfc
            int r5 = r17.getWidth()
            int r6 = r17.getPaddingRight()
            int r5 = r5 - r6
        Lc8:
            if (r3 >= r1) goto L134
            android.view.View r6 = r0.getChildAt(r3)
            android.view.ViewGroup$LayoutParams r7 = r6.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r7 = (android.support.v7.widget.ActionMenuView.LayoutParams) r7
            int r8 = r6.getVisibility()
            if (r8 == r11) goto Lf9
            boolean r8 = r7.isOverflowButton
            if (r8 == 0) goto Ldf
            goto Lf9
        Ldf:
            int r8 = r7.rightMargin
            int r5 = r5 - r8
            int r8 = r6.getMeasuredWidth()
            int r9 = r6.getMeasuredHeight()
            int r10 = r9 / 2
            int r10 = r2 - r10
            int r12 = r5 - r8
            int r9 = r9 + r10
            r6.layout(r12, r10, r5, r9)
            int r6 = r7.leftMargin
            int r8 = r8 + r6
            int r8 = r8 + r4
            int r5 = r5 - r8
        Lf9:
            int r3 = r3 + 1
            goto Lc8
        Lfc:
            int r5 = r17.getPaddingLeft()
        L100:
            if (r3 >= r1) goto L134
            android.view.View r6 = r0.getChildAt(r3)
            android.view.ViewGroup$LayoutParams r7 = r6.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r7 = (android.support.v7.widget.ActionMenuView.LayoutParams) r7
            int r8 = r6.getVisibility()
            if (r8 == r11) goto L131
            boolean r8 = r7.isOverflowButton
            if (r8 == 0) goto L117
            goto L131
        L117:
            int r8 = r7.leftMargin
            int r5 = r5 + r8
            int r8 = r6.getMeasuredWidth()
            int r9 = r6.getMeasuredHeight()
            int r10 = r9 / 2
            int r10 = r2 - r10
            int r12 = r5 + r8
            int r9 = r9 + r10
            r6.layout(r5, r10, r12, r9)
            int r6 = r7.rightMargin
            int r8 = r8 + r6
            int r8 = r8 + r4
            int r5 = r5 + r8
        L131:
            int r3 = r3 + 1
            goto L100
        L134:
            return
    }

    @Override
    protected void onMeasure(int r6, int r7) {
            r5 = this;
            boolean r0 = r5.mFormatItems
            int r1 = android.view.View.MeasureSpec.getMode(r6)
            r2 = 1
            r3 = 0
            r4 = 1073741824(0x40000000, float:2.0)
            if (r1 != r4) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            r5.mFormatItems = r1
            boolean r1 = r5.mFormatItems
            if (r0 == r1) goto L17
            r5.mFormatItemsWidth = r3
        L17:
            int r0 = android.view.View.MeasureSpec.getSize(r6)
            boolean r1 = r5.mFormatItems
            if (r1 == 0) goto L2c
            android.support.v7.view.menu.MenuBuilder r1 = r5.mMenu
            if (r1 == 0) goto L2c
            int r4 = r5.mFormatItemsWidth
            if (r0 == r4) goto L2c
            r5.mFormatItemsWidth = r0
            r1.onItemsChanged(r2)
        L2c:
            int r0 = r5.getChildCount()
            boolean r1 = r5.mFormatItems
            if (r1 == 0) goto L3a
            if (r0 <= 0) goto L3a
            r5.onMeasureExactFormat(r6, r7)
            goto L51
        L3a:
            r1 = 0
        L3b:
            if (r1 >= r0) goto L4e
            android.view.View r2 = r5.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.support.v7.widget.ActionMenuView$LayoutParams r2 = (android.support.v7.widget.ActionMenuView.LayoutParams) r2
            r2.rightMargin = r3
            r2.leftMargin = r3
            int r1 = r1 + 1
            goto L3b
        L4e:
            super.onMeasure(r6, r7)
        L51:
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public android.support.v7.view.menu.MenuBuilder peekMenu() {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mMenu
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setExpandedActionViewsExclusive(boolean r2) {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mPresenter
            r0.setExpandedActionViewsExclusive(r2)
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setMenuCallbacks(android.support.v7.view.menu.MenuPresenter.Callback r1, android.support.v7.view.menu.MenuBuilder.Callback r2) {
            r0 = this;
            r0.mActionMenuPresenterCallback = r1
            r0.mMenuBuilderCallback = r2
            return
    }

    public void setOnMenuItemClickListener(android.support.v7.widget.ActionMenuView.OnMenuItemClickListener r1) {
            r0 = this;
            r0.mOnMenuItemClickListener = r1
            return
    }

    public void setOverflowIcon(@android.support.annotation.Nullable android.graphics.drawable.Drawable r2) {
            r1 = this;
            r1.getMenu()
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mPresenter
            r0.setOverflowIcon(r2)
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setOverflowReserved(boolean r1) {
            r0 = this;
            r0.mReserveOverflow = r1
            return
    }

    public void setPopupTheme(@android.support.annotation.StyleRes int r3) {
            r2 = this;
            int r0 = r2.mPopupTheme
            if (r0 == r3) goto L1a
            r2.mPopupTheme = r3
            if (r3 != 0) goto Lf
            android.content.Context r3 = r2.getContext()
            r2.mPopupContext = r3
            goto L1a
        Lf:
            android.view.ContextThemeWrapper r0 = new android.view.ContextThemeWrapper
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            r2.mPopupContext = r0
        L1a:
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setPresenter(android.support.v7.widget.ActionMenuPresenter r1) {
            r0 = this;
            r0.mPresenter = r1
            android.support.v7.widget.ActionMenuPresenter r1 = r0.mPresenter
            r1.setMenuView(r0)
            return
    }

    public boolean showOverflowMenu() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mPresenter
            if (r0 == 0) goto Lc
            boolean r0 = r0.showOverflowMenu()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }
}
