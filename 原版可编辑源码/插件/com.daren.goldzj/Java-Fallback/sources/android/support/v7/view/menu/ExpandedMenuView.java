package android.support.v7.view.menu;

import android.R;
import android.content.Context;
import android.support.annotation.RestrictTo;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.widget.TintTypedArray;
import android.util.AttributeSet;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public final class ExpandedMenuView extends ListView implements MenuBuilder.ItemInvoker, MenuView, AdapterView.OnItemClickListener {
    private static final int[] TINT_ATTRS = null;
    private int mAnimations;
    private MenuBuilder mMenu;

    static {
        TINT_ATTRS = new int[]{R.attr.background, R.attr.divider};
    }

    public ExpandedMenuView(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.listViewStyle);
    }

    public ExpandedMenuView(Context r3, AttributeSet r4, int r5) {
        super(r3, r4);
        setOnItemClickListener(this);
        TintTypedArray r32 = TintTypedArray.obtainStyledAttributes(r3, r4, TINT_ATTRS, r5, 0);
        if (r32.hasValue(0) == false) goto L6;
        setBackgroundDrawable(r32.getDrawable(0));
    L6:
        if (r32.hasValue(1) == false) goto L8;
        setDivider(r32.getDrawable(1));
    L8:
        r32.recycle();
    }

    @Override
    public void initialize(MenuBuilder r1) {
        this.mMenu = r1;
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        setChildrenDrawingCacheEnabled(false);
    }

    @Override
    public boolean invokeItem(MenuItemImpl r3) {
        return this.mMenu.performItemAction(r3, 0);
    }

    @Override
    public void onItemClick(AdapterView r1, View r2, int r3, long r4) {
        invokeItem((MenuItemImpl) getAdapter().getItem(r3));
    }

    @Override
    public int getWindowAnimations() {
        return this.mAnimations;
    }
}
