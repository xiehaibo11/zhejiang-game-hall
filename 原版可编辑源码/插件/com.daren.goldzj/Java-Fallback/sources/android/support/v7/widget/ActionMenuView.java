package android.support.v7.widget;

import android.content.Context;
import android.content.res.Configuration;
import android.graphics.drawable.Drawable;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.StyleRes;
import android.support.v7.view.menu.ActionMenuItemView;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuItemImpl;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.view.menu.MenuView;
import android.support.v7.widget.ActivityChooserView;
import android.support.v7.widget.LinearLayoutCompat;
import android.util.AttributeSet;
import android.view.ContextThemeWrapper;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewDebug;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;

public class ActionMenuView extends LinearLayoutCompat implements MenuBuilder.ItemInvoker, MenuView {
    static final int GENERATED_ITEM_PADDING = 4;
    static final int MIN_CELL_SIZE = 56;
    private static final String TAG = "ActionMenuView";
    private MenuPresenter.Callback mActionMenuPresenterCallback;
    private boolean mFormatItems;
    private int mFormatItemsWidth;
    private int mGeneratedItemPadding;
    private MenuBuilder mMenu;
    MenuBuilder.Callback mMenuBuilderCallback;
    private int mMinCellSize;
    OnMenuItemClickListener mOnMenuItemClickListener;
    private Context mPopupContext;
    private int mPopupTheme;
    private ActionMenuPresenter mPresenter;
    private boolean mReserveOverflow;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public interface ActionMenuChildView {
        boolean needsDividerAfter();

        boolean needsDividerBefore();
    }

    private static class ActionMenuPresenterCallback implements MenuPresenter.Callback {
        @Override
        public void onCloseMenu(MenuBuilder r1, boolean r2) {
        }

        @Override
        public boolean onOpenSubMenu(MenuBuilder r1) {
            return false;
        }

        ActionMenuPresenterCallback() {
        }
    }

    public static class LayoutParams extends LinearLayoutCompat.LayoutParams {

        @ViewDebug.ExportedProperty
        public int cellsUsed;

        @ViewDebug.ExportedProperty
        public boolean expandable;
        boolean expanded;

        @ViewDebug.ExportedProperty
        public int extraPixels;

        @ViewDebug.ExportedProperty
        public boolean isOverflowButton;

        @ViewDebug.ExportedProperty
        public boolean preventEdgeOffset;

        public LayoutParams(Context r1, AttributeSet r2) {
            super(r1, r2);
        }

        public LayoutParams(ViewGroup.LayoutParams r1) {
            super(r1);
        }

        public LayoutParams(LayoutParams r1) {
            super(r1);
            this.isOverflowButton = r1.isOverflowButton;
        }

        public LayoutParams(int r1, int r2) {
            super(r1, r2);
            this.isOverflowButton = false;
        }

        LayoutParams(int r1, int r2, boolean r3) {
            super(r1, r2);
            this.isOverflowButton = r3;
        }
    }

    private class MenuBuilderCallback implements MenuBuilder.Callback {
        final ActionMenuView this$0;

        MenuBuilderCallback(ActionMenuView r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean onMenuItemSelected(MenuBuilder r1, MenuItem r2) {
            if (this.this$0.mOnMenuItemClickListener != null) goto L5;
        L7:
            return false;
        L5:
            if (this.this$0.mOnMenuItemClickListener.onMenuItemClick(r2) == false) goto L7;
            return true;
        }

        @Override
        public void onMenuModeChange(MenuBuilder r2) {
            if (this.this$0.mMenuBuilderCallback == null) goto L6;
            this.this$0.mMenuBuilderCallback.onMenuModeChange(r2);
            return;
        }
    }

    public interface OnMenuItemClickListener {
        boolean onMenuItemClick(MenuItem r1);
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent r1) {
        return false;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int getWindowAnimations() {
        return 0;
    }

    @Override
    protected LinearLayoutCompat.LayoutParams generateDefaultLayoutParams() {
        return generateDefaultLayoutParams();
    }

    @Override
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return generateDefaultLayoutParams();
    }

    @Override
    public LinearLayoutCompat.LayoutParams generateLayoutParams(AttributeSet r1) {
        return generateLayoutParams(r1);
    }

    @Override
    protected LinearLayoutCompat.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r1) {
        return generateLayoutParams(r1);
    }

    @Override
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet r1) {
        return generateLayoutParams(r1);
    }

    @Override
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r1) {
        return generateLayoutParams(r1);
    }

    public ActionMenuView(Context r2) {
        this(r2, null);
    }

    public ActionMenuView(Context r3, AttributeSet r4) {
        super(r3, r4);
        setBaselineAligned(false);
        float r0 = r3.getResources().getDisplayMetrics().density;
        this.mMinCellSize = (int) (56.0f * r0);
        this.mGeneratedItemPadding = (int) (r0 * 4.0f);
        this.mPopupContext = r3;
        this.mPopupTheme = 0;
    }

    public void setPopupTheme(@StyleRes int r3) {
        if (this.mPopupTheme == r3) goto L9;
        this.mPopupTheme = r3;
        if (r3 != 0) goto L7;
        this.mPopupContext = getContext();
        return;
    L7:
        this.mPopupContext = new ContextThemeWrapper(getContext(), r3);
        return;
    }

    public int getPopupTheme() {
        return this.mPopupTheme;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setPresenter(ActionMenuPresenter r1) {
        this.mPresenter = r1;
        this.mPresenter.setMenuView(this);
    }

    @Override
    public void onConfigurationChanged(Configuration r2) {
        super.onConfigurationChanged(r2);
        ActionMenuPresenter r22 = this.mPresenter;
        if (r22 == null) goto L8;
        r22.updateMenuView(false);
        if (this.mPresenter.isOverflowMenuShowing() == false) goto L9;
        this.mPresenter.hideOverflowMenu();
        this.mPresenter.showOverflowMenu();
        return;
    L9:
        return;
    }

    public void setOnMenuItemClickListener(OnMenuItemClickListener r1) {
        this.mOnMenuItemClickListener = r1;
    }

    @Override
    protected void onMeasure(int r6, int r7) {
        boolean r0 = this.mFormatItems;
        if (View.MeasureSpec.getMode(r6) != 1073741824) goto L5;
        boolean r1 = true;
    L6:
        this.mFormatItems = r1;
        if (r0 == this.mFormatItems) goto L9;
        this.mFormatItemsWidth = 0;
    L9:
        int r02 = View.MeasureSpec.getSize(r6);
        if (this.mFormatItems == false) goto L16;
        MenuBuilder r12 = this.mMenu;
        if (r12 == null) goto L16;
        if (r02 == this.mFormatItemsWidth) goto L16;
        this.mFormatItemsWidth = r02;
        r12.onItemsChanged(true);
    L16:
        int r03 = getChildCount();
        if (this.mFormatItems == false) goto L20;
        if (r03 <= 0) goto L20;
        onMeasureExactFormat(r6, r7);
        return;
    L20:
        int r13 = 0;
    L21:
        if (r13 >= r03) goto L23;
        LayoutParams r2 = (LayoutParams) getChildAt(r13).getLayoutParams();
        r2.rightMargin = 0;
        r2.leftMargin = 0;
        r13 = r13 + 1;
        goto L21
    L23:
        super.onMeasure(r6, r7);
        return;
    L5:
        r1 = false;
        goto L6
    }

    /* JADX WARN: Type inference failed for: r13v14 */
    /* JADX WARN: Type inference failed for: r13v15, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r13v18 */
    private void onMeasureExactFormat(int r30, int r31) {
        int r1 = View.MeasureSpec.getMode(r31);
        int r2 = View.MeasureSpec.getSize(r30);
        int r3 = View.MeasureSpec.getSize(r31);
        int r4 = getPaddingLeft() + getPaddingRight();
        int r5 = getPaddingTop() + getPaddingBottom();
        int r6 = getChildMeasureSpec(r31, r5, -2);
        int r22 = r2 - r4;
        int r42 = this.mMinCellSize;
        int r7 = r22 / r42;
        int r8 = r22 % r42;
        if (r7 != 0) goto L6;
        setMeasuredDimension(r22, 0);
        return;
    L6:
        int r43 = r42 + (r8 / r7);
        int r82 = getChildCount();
        int r14 = r7;
        int r72 = 0;
        int r10 = 0;
        boolean r12 = false;
        int r13 = 0;
        int r15 = 0;
        int r16 = 0;
        long r17 = 0;
    L7:
        if (r72 >= r82) goto L37;
        View r11 = getChildAt(r72);
        int r19 = r3;
        if (r11.getVisibility() == 8) goto L36;
        boolean r32 = r11 instanceof ActionMenuItemView;
        int r132 = r13 + 1;
        if (r32 == false) goto L14;
        int r9 = this.mGeneratedItemPadding;
        int r20 = r132;
        ?? r133 = 0;
        r11.setPadding(r9, 0, r9, 0);
    L15:
        LayoutParams r92 = (LayoutParams) r11.getLayoutParams();
        r92.expanded = r133;
        r92.extraPixels = r133;
        r92.cellsUsed = r133;
        r92.expandable = r133;
        r92.leftMargin = r133;
        r92.rightMargin = r133;
        if (r32 == true) goto L18;
    L20:
        boolean r33 = false;
    L21:
        r92.preventEdgeOffset = r33;
        if (r92.isOverflowButton == false) goto L24;
        int r34 = 1;
    L25:
        int r35 = measureChildForCells(r11, r43, r34, r6, r5);
        int r134 = Math.max(r15, r35);
        if (r92.expandable == false) goto L29;
        r16 = r16 + 1;
    L29:
        if (r92.isOverflowButton == false) goto L31;
        r12 = true;
    L31:
        r14 = r14 - r35;
        r10 = Math.max(r10, r11.getMeasuredHeight());
        if (r35 != 1) goto L35;
        r17 = r17 | ((long) (1 << r72));
        r10 = r10;
    L35:
        r15 = r134;
        r13 = r20;
        goto L36
    L24:
        r34 = r14;
        goto L25
    L18:
        if (((ActionMenuItemView) r11).hasText() == false) goto L20;
        r33 = true;
        goto L21
    L14:
        r20 = r132;
        r133 = 0;
    L36:
        r72 = r72 + 1;
        r3 = r19;
        goto L7
    L37:
        int r192 = r3;
        if (r12 == false) goto L41;
        if (r13 != 2) goto L41;
        boolean r52 = true;
    L42:
        boolean r73 = false;
    L44:
        if (r16 <= 0) goto L79;
        if (r14 <= 0) goto L79;
        int r36 = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
        int r93 = 0;
        int r112 = 0;
        long r222 = 0;
    L47:
        if (r93 >= r82) goto L58;
        boolean r25 = r73;
        LayoutParams r74 = (LayoutParams) getChildAt(r93).getLayoutParams();
        int r24 = r10;
        if (r74.expandable == false) goto L57;
        if (r74.cellsUsed >= r36) goto L55;
        r36 = r74.cellsUsed;
        r222 = 1 << r93;
        r112 = 1;
        goto L57
    L55:
        if (r74.cellsUsed != r36) goto L57;
        r222 = r222 | (1 << r93);
        r112 = r112 + 1;
    L57:
        r93 = r93 + 1;
        r10 = r24;
        r73 = r25;
        goto L47
    L58:
        boolean r252 = r73;
        int r242 = r10;
        r17 = r17 | r222;
        if (r112 > r14) goto L60;
        int r37 = r36 + 1;
        int r75 = 0;
    L62:
        if (r75 >= r82) goto L78;
        View r94 = getChildAt(r75);
        LayoutParams r102 = (LayoutParams) r94.getLayoutParams();
        int r26 = r22;
        int r113 = r1;
        long r18 = 1 << r75;
        if ((r222 & r18) == 0) goto L66;
        if (r52 == true) goto L71;
    L75:
        int r202 = r37;
    L76:
        r102.cellsUsed++;
        r102.expanded = true;
        r14 = r14 - 1;
    L77:
        r75 = r75 + 1;
        r1 = r113;
        r37 = r202;
        r22 = r26;
        goto L62
    L71:
        if (r102.preventEdgeOffset == false) goto L75;
        if (r14 != 1) goto L75;
        int r23 = this.mGeneratedItemPadding;
        r202 = r37;
        r94.setPadding(r23 + r43, 0, r23, 0);
        goto L76
    L66:
        if (r102.cellsUsed != r37) goto L68;
        r17 = r17 | r18;
    L68:
        r202 = r37;
        goto L77
    L78:
        r10 = r242;
        r73 = true;
        goto L44
    L60:
        int r114 = r1;
        int r262 = r22;
    L80:
        if (r12 == true) goto L84;
        int r110 = 1;
        if (r13 != 1) goto L85;
        boolean r27 = true;
    L86:
        if (r14 > 0) goto L88;
    L136:
        int r135 = 0;
    L138:
        if (r252 == false) goto L145;
    L139:
        if (r135 >= r82) goto L145;
        View r28 = getChildAt(r135);
        LayoutParams r38 = (LayoutParams) r28.getLayoutParams();
        if (r38.expanded == false) goto L144;
        r28.measure(View.MeasureSpec.makeMeasureSpec((r38.cellsUsed * r43) + r38.extraPixels, 1073741824), r6);
    L144:
        r135 = r135 + 1;
    L145:
        if (r114 == 1073741824) goto L147;
        int r111 = r242;
    L148:
        setMeasuredDimension(r262, r111);
        return;
    L147:
        r111 = r192;
        goto L148
    L88:
        if (r17 == 0) goto L136;
        if (r14 < (r13 - r110)) goto L93;
        if (r27 == true) goto L93;
        if (r15 <= r110) goto L136;
    L93:
        float r115 = Long.bitCount(r17);
        if (r27 == false) goto L96;
        r135 = 0;
    L108:
        if (r115 <= 0.0f) goto L110;
        int r95 = (int) ((r14 * r43) / r115);
    L111:
        int r116 = 0;
    L112:
        if (r116 >= r82) goto L138;
        if ((r17 & ((long) (1 << r116))) == 0) goto L135;
        View r29 = getChildAt(r116);
        LayoutParams r39 = (LayoutParams) r29.getLayoutParams();
        if ((r29 instanceof ActionMenuItemView) == false) goto L126;
        r39.extraPixels = r95;
        r39.expanded = true;
        if (r116 != 0) goto L128;
        if (r39.preventEdgeOffset == true) goto L128;
        r39.leftMargin = (-r95) / 2;
    L128:
        r252 = true;
        goto L135
    L126:
        if (r39.isOverflowButton == false) goto L130;
        r39.extraPixels = r95;
        r39.expanded = true;
        r39.rightMargin = (-r95) / 2;
        goto L128
    L130:
        if (r116 == 0) goto L133;
        r39.leftMargin = r95 / 2;
    L133:
        if (r116 == (r82 - 1)) goto L135;
        r39.rightMargin = r95 / 2;
    L135:
        r116 = r116 + 1;
        goto L112
    L110:
        r95 = 0;
        goto L111
    L96:
        if ((r17 & 1) == 0) goto L100;
        r135 = 0;
        if (((LayoutParams) getChildAt(0).getLayoutParams()).preventEdgeOffset == true) goto L101;
        r115 = r115 - 0.5f;
    L101:
        int r210 = r82 - 1;
        if ((r17 & ((long) (1 << r210))) == 0) goto L108;
        if (((LayoutParams) getChildAt(r210).getLayoutParams()).preventEdgeOffset == true) goto L108;
        r115 = r115 - 0.5f;
        goto L108
    L100:
        r135 = 0;
    L85:
        r27 = false;
        goto L86
    L84:
        r110 = 1;
    L79:
        r114 = r1;
        r262 = r22;
        r252 = r73;
        r242 = r10;
    L41:
        r52 = false;
        goto L42
    }

    static int measureChildForCells(View r5, int r6, int r7, int r8, int r9) {
        LayoutParams r0 = (LayoutParams) r5.getLayoutParams();
        int r82 = View.MeasureSpec.makeMeasureSpec(View.MeasureSpec.getSize(r8) - r9, View.MeasureSpec.getMode(r8));
        if ((r5 instanceof ActionMenuItemView) == false) goto L5;
        ActionMenuItemView r92 = (ActionMenuItemView) r5;
    L6:
        boolean r1 = true;
        if (r92 != null) goto L9;
    L11:
        boolean r93 = false;
    L12:
        int r3 = 2;
        if (r7 <= 0) goto L23;
        if (r93 == false) goto L16;
        if (r7 < 2) goto L23;
    L16:
        r5.measure(View.MeasureSpec.makeMeasureSpec(r7 * r6, Integer.MIN_VALUE), r82);
        int r72 = r5.getMeasuredWidth();
        int r4 = r72 / r6;
        if ((r72 % r6) == 0) goto L19;
        r4 = r4 + 1;
    L19:
        if (r93 == false) goto L22;
        if (r4 >= 2) goto L22;
    L25:
        if (r0.isOverflowButton == true) goto L28;
        if (r93 == false) goto L28;
    L29:
        r0.expandable = r1;
        r0.cellsUsed = r3;
        r5.measure(View.MeasureSpec.makeMeasureSpec(r6 * r3, 1073741824), r82);
        return r3;
    L28:
        r1 = false;
    L22:
        r3 = r4;
    L23:
        r3 = 0;
        goto L25
    L9:
        if (r92.hasText() == false) goto L11;
        r93 = true;
        goto L12
    L5:
        r92 = null;
        goto L6
    }

    @Override
    protected void onLayout(boolean r18, int r19, int r20, int r21, int r22) {
        if (this.mFormatItems == true) goto L6;
        super.onLayout(r18, r19, r20, r21, r22);
        return;
    L6:
        int r1 = getChildCount();
        int r2 = (r22 - r20) / 2;
        int r3 = getDividerWidth();
        int r4 = r21 - r19;
        int r5 = (r4 - getPaddingRight()) - getPaddingLeft();
        boolean r6 = ViewUtils.isLayoutRtl(this);
        int r10 = r5;
        int r52 = 0;
        int r8 = 0;
        int r9 = 0;
    L8:
        if (r52 >= r1) goto L24;
        View r13 = getChildAt(r52);
        if (r13.getVisibility() == 8) goto L23;
        LayoutParams r11 = (LayoutParams) r13.getLayoutParams();
        if (r11.isOverflowButton == false) goto L22;
        int r82 = r13.getMeasuredWidth();
        if (hasSupportDividerBeforeChildAt(r52) == false) goto L17;
        r82 = r82 + r3;
    L17:
        int r14 = r13.getMeasuredHeight();
        if (r6 == false) goto L20;
        int r15 = getPaddingLeft() + r11.leftMargin;
        int r112 = r15 + r82;
    L21:
        int r7 = r2 - (r14 / 2);
        r13.layout(r15, r7, r112, r14 + r7);
        r10 = r10 - r82;
        r8 = 1;
        goto L23
    L20:
        r112 = (getWidth() - getPaddingRight()) - r11.rightMargin;
        r15 = r112 - r82;
        goto L21
    L22:
        r10 = r10 - ((r13.getMeasuredWidth() + r11.leftMargin) + r11.rightMargin);
        hasSupportDividerBeforeChildAt(r52);
        r9 = r9 + 1;
    L23:
        r52 = r52 + 1;
        goto L8
    L24:
        if (r1 != 1) goto L28;
        if (r8 != 0) goto L28;
        View r12 = getChildAt(0);
        int r32 = r12.getMeasuredWidth();
        int r53 = r12.getMeasuredHeight();
        int r42 = (r4 / 2) - (r32 / 2);
        int r23 = r2 - (r53 / 2);
        r12.layout(r42, r23, r32 + r42, r53 + r23);
        return;
    L28:
        int r92 = r9 - (r8 ^ 1);
        if (r92 <= 0) goto L31;
        int r72 = r10 / r92;
        int r33 = 0;
    L32:
        int r43 = Math.max(r33, r72);
        if (r6 == false) goto L43;
        int r54 = getWidth() - getPaddingRight();
    L35:
        if (r33 >= r1) goto L52;
        View r62 = getChildAt(r33);
        LayoutParams r73 = (LayoutParams) r62.getLayoutParams();
        if (r62.getVisibility() == 8) goto L42;
        if (r73.isOverflowButton == true) goto L42;
        int r55 = r54 - r73.rightMargin;
        int r83 = r62.getMeasuredWidth();
        int r93 = r62.getMeasuredHeight();
        int r102 = r2 - (r93 / 2);
        r62.layout(r55 - r83, r102, r55, r93 + r102);
        r54 = r55 - ((r83 + r73.leftMargin) + r43);
    L42:
        r33 = r33 + 1;
        goto L35
    L52:
        return;
    L43:
        int r56 = getPaddingLeft();
    L44:
        if (r33 >= r1) goto L65;
        View r63 = getChildAt(r33);
        LayoutParams r74 = (LayoutParams) r63.getLayoutParams();
        if (r63.getVisibility() == 8) goto L51;
        if (r74.isOverflowButton == true) goto L51;
        int r57 = r56 + r74.leftMargin;
        int r84 = r63.getMeasuredWidth();
        int r94 = r63.getMeasuredHeight();
        int r103 = r2 - (r94 / 2);
        r63.layout(r57, r103, r57 + r84, r94 + r103);
        r56 = r57 + ((r84 + r74.rightMargin) + r43);
    L51:
        r33 = r33 + 1;
        goto L44
    L65:
        return;
    L31:
        r33 = 0;
        r72 = 0;
        goto L32
    }

    @Override
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        dismissPopupMenus();
    }

    public void setOverflowIcon(@Nullable Drawable r2) {
        getMenu();
        this.mPresenter.setOverflowIcon(r2);
    }

    @Nullable
    public Drawable getOverflowIcon() {
        getMenu();
        return this.mPresenter.getOverflowIcon();
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public boolean isOverflowReserved() {
        return this.mReserveOverflow;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setOverflowReserved(boolean r1) {
        this.mReserveOverflow = r1;
    }

    @Override
    protected LayoutParams generateDefaultLayoutParams() {
        LayoutParams r0 = new LayoutParams(-2, -2);
        r0.gravity = 16;
        return r0;
    }

    @Override
    public LayoutParams generateLayoutParams(AttributeSet r3) {
        return new LayoutParams(getContext(), r3);
    }

    @Override
    protected LayoutParams generateLayoutParams(ViewGroup.LayoutParams r2) {
        if (r2 == null) goto L12;
        if ((r2 instanceof LayoutParams) == false) goto L6;
        LayoutParams r0 = new LayoutParams((LayoutParams) r2);
    L8:
        if (r0.gravity > 0) goto L10;
        r0.gravity = 16;
    L10:
        return r0;
    L6:
        r0 = new LayoutParams(r2);
        goto L8
    L12:
        return generateDefaultLayoutParams();
    }

    @Override
    protected boolean checkLayoutParams(ViewGroup.LayoutParams r1) {
        if (r1 != null) goto L4;
    L6:
        return false;
    L4:
        if ((r1 instanceof LayoutParams) == false) goto L6;
        return true;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public LayoutParams generateOverflowButtonLayoutParams() {
        LayoutParams r0 = generateDefaultLayoutParams();
        r0.isOverflowButton = true;
        return r0;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public boolean invokeItem(MenuItemImpl r3) {
        return this.mMenu.performItemAction(r3, 0);
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void initialize(MenuBuilder r1) {
        this.mMenu = r1;
    }

    public Menu getMenu() {
        if (this.mMenu != null) goto L10;
        Context r0 = getContext();
        this.mMenu = new MenuBuilder(r0);
        this.mMenu.setCallback(new MenuBuilderCallback(this));
        this.mPresenter = new ActionMenuPresenter(r0);
        this.mPresenter.setReserveOverflow(true);
        ActionMenuPresenter r02 = this.mPresenter;
        MenuPresenter.Callback r1 = this.mActionMenuPresenterCallback;
        if (r1 != null) goto L8;
        r1 = new ActionMenuPresenterCallback();
    L8:
        r02.setCallback(r1);
        this.mMenu.addMenuPresenter(this.mPresenter, this.mPopupContext);
        this.mPresenter.setMenuView(this);
    L10:
        return this.mMenu;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setMenuCallbacks(MenuPresenter.Callback r1, MenuBuilder.Callback r2) {
        this.mActionMenuPresenterCallback = r1;
        this.mMenuBuilderCallback = r2;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public MenuBuilder peekMenu() {
        return this.mMenu;
    }

    public boolean showOverflowMenu() {
        ActionMenuPresenter r0 = this.mPresenter;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.showOverflowMenu() == false) goto L7;
        return true;
    }

    public boolean hideOverflowMenu() {
        ActionMenuPresenter r0 = this.mPresenter;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.hideOverflowMenu() == false) goto L7;
        return true;
    }

    public boolean isOverflowMenuShowing() {
        ActionMenuPresenter r0 = this.mPresenter;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.isOverflowMenuShowing() == false) goto L7;
        return true;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public boolean isOverflowMenuShowPending() {
        ActionMenuPresenter r0 = this.mPresenter;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.isOverflowMenuShowPending() == false) goto L7;
        return true;
    }

    public void dismissPopupMenus() {
        ActionMenuPresenter r0 = this.mPresenter;
        if (r0 == null) goto L6;
        r0.dismissPopupMenus();
        return;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected boolean hasSupportDividerBeforeChildAt(int r5) {
        boolean r0 = false;
        if (r5 != 0) goto L5;
        return false;
    L5:
        KeyEvent.Callback r1 = getChildAt(r5 - 1);
        KeyEvent.Callback r2 = getChildAt(r5);
        if (r5 < getChildCount()) goto L8;
    L10:
        if (r5 > 0) goto L12;
        return r0;
    L12:
        if ((r2 instanceof ActionMenuChildView) == true) goto L14;
        return r0;
    L14:
        return r0 | ((ActionMenuChildView) r2).needsDividerBefore();
    L8:
        if ((r1 instanceof ActionMenuChildView) == false) goto L10;
        r0 = false | ((ActionMenuChildView) r1).needsDividerAfter();
        goto L10
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setExpandedActionViewsExclusive(boolean r2) {
        this.mPresenter.setExpandedActionViewsExclusive(r2);
    }
}
