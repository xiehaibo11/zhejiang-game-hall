package android.support.v7.widget;

import android.content.Context;
import android.content.res.Configuration;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import android.support.v7.view.menu.ListMenuItemView;
import android.support.v7.view.menu.MenuAdapter;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuItemImpl;
import android.transition.Transition;
import android.util.AttributeSet;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.widget.HeaderViewListAdapter;
import android.widget.ListAdapter;
import android.widget.PopupWindow;
import java.lang.reflect.Method;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class MenuPopupWindow extends ListPopupWindow implements MenuItemHoverListener {
    private static final String TAG = "MenuPopupWindow";
    private static Method sSetTouchModalMethod;
    private MenuItemHoverListener mHoverListener;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static class MenuDropDownListView extends DropDownListView {
        final int mAdvanceKey;
        private MenuItemHoverListener mHoverListener;
        private MenuItem mHoveredMenuItem;
        final int mRetreatKey;

        @Override
        public boolean hasFocus() {
            return super.hasFocus();
        }

        @Override
        public boolean hasWindowFocus() {
            return super.hasWindowFocus();
        }

        @Override
        public boolean isFocused() {
            return super.isFocused();
        }

        @Override
        public boolean isInTouchMode() {
            return super.isInTouchMode();
        }

        @Override
        public int lookForSelectablePosition(int r1, boolean r2) {
            return super.lookForSelectablePosition(r1, r2);
        }

        @Override
        public int measureHeightOfChildrenCompat(int r1, int r2, int r3, int r4, int r5) {
            return super.measureHeightOfChildrenCompat(r1, r2, r3, r4, r5);
        }

        @Override
        public boolean onForwardedEvent(MotionEvent r1, int r2) {
            return super.onForwardedEvent(r1, r2);
        }

        @Override
        public boolean onTouchEvent(MotionEvent r1) {
            return super.onTouchEvent(r1);
        }

        @Override
        public void setSelector(Drawable r1) {
            super.setSelector(r1);
        }

        public MenuDropDownListView(Context r4, boolean r5) {
            super(r4, r5);
            Configuration r42 = r4.getResources().getConfiguration();
            if (Build.VERSION.SDK_INT >= 17) goto L5;
        L7:
            this.mAdvanceKey = 22;
            this.mRetreatKey = 21;
            return;
        L5:
            if (1 != r42.getLayoutDirection()) goto L7;
            this.mAdvanceKey = 21;
            this.mRetreatKey = 22;
        }

        public void setHoverListener(MenuItemHoverListener r1) {
            this.mHoverListener = r1;
        }

        public void clearSelection() {
            setSelection(-1);
        }

        @Override
        public boolean onKeyDown(int r5, KeyEvent r6) {
            ListMenuItemView r0 = (ListMenuItemView) getSelectedView();
            if (r0 != null) goto L5;
        L12:
            if (r0 == null) goto L18;
            if (r5 != this.mRetreatKey) goto L18;
            setSelection(-1);
            ((MenuAdapter) getAdapter()).getAdapterMenu().close(false);
            return true;
        L18:
            return super.onKeyDown(r5, r6);
        L5:
            if (r5 != this.mAdvanceKey) goto L12;
            if (r0.isEnabled() == true) goto L9;
        L11:
            return true;
        L9:
            if (r0.getItemData().hasSubMenu() == false) goto L11;
            performItemClick(r0, getSelectedItemPosition(), getSelectedItemId());
            goto L11
        }

        @Override
        public boolean onHoverEvent(MotionEvent r6) {
            if (this.mHoverListener == null) goto L26;
            ListAdapter r0 = getAdapter();
            if ((r0 instanceof HeaderViewListAdapter) == false) goto L7;
            HeaderViewListAdapter r02 = (HeaderViewListAdapter) r0;
            int r1 = r02.getHeadersCount();
            MenuAdapter r03 = (MenuAdapter) r02.getWrappedAdapter();
        L8:
            MenuItemImpl r2 = null;
            if (r6.getAction() == 10) goto L17;
            int r3 = pointToPosition((int) r6.getX(), (int) r6.getY());
            if (r3 == (-1)) goto L17;
            int r32 = r3 - r1;
            if (r32 < 0) goto L17;
            if (r32 >= r03.getCount()) goto L17;
            r2 = r03.getItem(r32);
        L17:
            MenuItem r12 = this.mHoveredMenuItem;
            if (r12 == r2) goto L26;
            MenuBuilder r04 = r03.getAdapterMenu();
            if (r12 == null) goto L22;
            this.mHoverListener.onItemHoverExit(r04, r12);
        L22:
            this.mHoveredMenuItem = r2;
            if (r2 == null) goto L26;
            this.mHoverListener.onItemHoverEnter(r04, r2);
            goto L26
        L7:
            r1 = 0;
            r03 = (MenuAdapter) r0;
        L26:
            return super.onHoverEvent(r6);
        }
    }

    static {
        sSetTouchModalMethod = PopupWindow.class.getDeclaredMethod("setTouchModal", new Class[]{Boolean.TYPE});     // Catch: NoSuchMethodException -> L4
        return;
    L4:
        Log.i(TAG, "Could not find method setTouchModal() on PopupWindow. Oh well.");
    }

    public MenuPopupWindow(Context r1, AttributeSet r2, int r3, int r4) {
        super(r1, r2, r3, r4);
    }

    @Override
    DropDownListView createDropDownListView(Context r2, boolean r3) {
        MenuDropDownListView r0 = new MenuDropDownListView(r2, r3);
        r0.setHoverListener(this);
        return r0;
    }

    public void setEnterTransition(Object r3) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        this.mPopup.setEnterTransition((Transition) r3);
        return;
    }

    public void setExitTransition(Object r3) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        this.mPopup.setExitTransition((Transition) r3);
        return;
    }

    public void setHoverListener(MenuItemHoverListener r1) {
        this.mHoverListener = r1;
    }

    public void setTouchModal(boolean r5) {
        Method r0 = sSetTouchModalMethod;
        if (r0 == null) goto L10;
        r0.invoke(this.mPopup, new Object[]{Boolean.valueOf(r5)});     // Catch: Exception -> L6
        return;
    L6:
        Log.i(TAG, "Could not invoke setTouchModal() on PopupWindow. Oh well.");
        return;
    }

    @Override
    public void onItemHoverEnter(@NonNull MenuBuilder r2, @NonNull MenuItem r3) {
        MenuItemHoverListener r0 = this.mHoverListener;
        if (r0 == null) goto L6;
        r0.onItemHoverEnter(r2, r3);
        return;
    }

    @Override
    public void onItemHoverExit(@NonNull MenuBuilder r2, @NonNull MenuItem r3) {
        MenuItemHoverListener r0 = this.mHoverListener;
        if (r0 == null) goto L6;
        r0.onItemHoverExit(r2, r3);
        return;
    }
}
