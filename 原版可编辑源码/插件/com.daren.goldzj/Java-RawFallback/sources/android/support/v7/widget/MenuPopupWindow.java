package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class MenuPopupWindow extends android.support.v7.widget.ListPopupWindow implements android.support.v7.widget.MenuItemHoverListener {
    private static final java.lang.String TAG = "MenuPopupWindow";
    private static java.lang.reflect.Method sSetTouchModalMethod;
    private android.support.v7.widget.MenuItemHoverListener mHoverListener;

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public static class MenuDropDownListView extends android.support.v7.widget.DropDownListView {
        final int mAdvanceKey;
        private android.support.v7.widget.MenuItemHoverListener mHoverListener;
        private android.view.MenuItem mHoveredMenuItem;
        final int mRetreatKey;

        public MenuDropDownListView(android.content.Context r4, boolean r5) {
                r3 = this;
                r3.<init>(r4, r5)
                android.content.res.Resources r4 = r4.getResources()
                android.content.res.Configuration r4 = r4.getConfiguration()
                int r5 = android.os.Build.VERSION.SDK_INT
                r0 = 21
                r1 = 22
                r2 = 17
                if (r5 < r2) goto L21
                r5 = 1
                int r4 = r4.getLayoutDirection()
                if (r5 != r4) goto L21
                r3.mAdvanceKey = r0
                r3.mRetreatKey = r1
                goto L25
            L21:
                r3.mAdvanceKey = r1
                r3.mRetreatKey = r0
            L25:
                return
        }

        public void clearSelection() {
                r1 = this;
                r0 = -1
                r1.setSelection(r0)
                return
        }

        @Override
        public boolean hasFocus() {
                r1 = this;
                boolean r0 = super.hasFocus()
                return r0
        }

        @Override
        public boolean hasWindowFocus() {
                r1 = this;
                boolean r0 = super.hasWindowFocus()
                return r0
        }

        @Override
        public boolean isFocused() {
                r1 = this;
                boolean r0 = super.isFocused()
                return r0
        }

        @Override
        public boolean isInTouchMode() {
                r1 = this;
                boolean r0 = super.isInTouchMode()
                return r0
        }

        @Override
        public int lookForSelectablePosition(int r1, boolean r2) {
                r0 = this;
                int r1 = super.lookForSelectablePosition(r1, r2)
                return r1
        }

        @Override
        public int measureHeightOfChildrenCompat(int r1, int r2, int r3, int r4, int r5) {
                r0 = this;
                int r1 = super.measureHeightOfChildrenCompat(r1, r2, r3, r4, r5)
                return r1
        }

        @Override
        public boolean onForwardedEvent(android.view.MotionEvent r1, int r2) {
                r0 = this;
                boolean r1 = super.onForwardedEvent(r1, r2)
                return r1
        }

        @Override
        public boolean onHoverEvent(android.view.MotionEvent r6) {
                r5 = this;
                android.support.v7.widget.MenuItemHoverListener r0 = r5.mHoverListener
                if (r0 == 0) goto L5b
                android.widget.ListAdapter r0 = r5.getAdapter()
                boolean r1 = r0 instanceof android.widget.HeaderViewListAdapter
                if (r1 == 0) goto L19
                android.widget.HeaderViewListAdapter r0 = (android.widget.HeaderViewListAdapter) r0
                int r1 = r0.getHeadersCount()
                android.widget.ListAdapter r0 = r0.getWrappedAdapter()
                android.support.v7.view.menu.MenuAdapter r0 = (android.support.v7.view.menu.MenuAdapter) r0
                goto L1c
            L19:
                r1 = 0
                android.support.v7.view.menu.MenuAdapter r0 = (android.support.v7.view.menu.MenuAdapter) r0
            L1c:
                r2 = 0
                int r3 = r6.getAction()
                r4 = 10
                if (r3 == r4) goto L43
                float r3 = r6.getX()
                int r3 = (int) r3
                float r4 = r6.getY()
                int r4 = (int) r4
                int r3 = r5.pointToPosition(r3, r4)
                r4 = -1
                if (r3 == r4) goto L43
                int r3 = r3 - r1
                if (r3 < 0) goto L43
                int r1 = r0.getCount()
                if (r3 >= r1) goto L43
                android.support.v7.view.menu.MenuItemImpl r2 = r0.getItem(r3)
            L43:
                android.view.MenuItem r1 = r5.mHoveredMenuItem
                if (r1 == r2) goto L5b
                android.support.v7.view.menu.MenuBuilder r0 = r0.getAdapterMenu()
                if (r1 == 0) goto L52
                android.support.v7.widget.MenuItemHoverListener r3 = r5.mHoverListener
                r3.onItemHoverExit(r0, r1)
            L52:
                r5.mHoveredMenuItem = r2
                if (r2 == 0) goto L5b
                android.support.v7.widget.MenuItemHoverListener r1 = r5.mHoverListener
                r1.onItemHoverEnter(r0, r2)
            L5b:
                boolean r6 = super.onHoverEvent(r6)
                return r6
        }

        @Override
        public boolean onKeyDown(int r5, android.view.KeyEvent r6) {
                r4 = this;
                android.view.View r0 = r4.getSelectedView()
                android.support.v7.view.menu.ListMenuItemView r0 = (android.support.v7.view.menu.ListMenuItemView) r0
                r1 = 1
                if (r0 == 0) goto L29
                int r2 = r4.mAdvanceKey
                if (r5 != r2) goto L29
                boolean r5 = r0.isEnabled()
                if (r5 == 0) goto L28
                android.support.v7.view.menu.MenuItemImpl r5 = r0.getItemData()
                boolean r5 = r5.hasSubMenu()
                if (r5 == 0) goto L28
                int r5 = r4.getSelectedItemPosition()
                long r2 = r4.getSelectedItemId()
                r4.performItemClick(r0, r5, r2)
            L28:
                return r1
            L29:
                if (r0 == 0) goto L42
                int r0 = r4.mRetreatKey
                if (r5 != r0) goto L42
                r5 = -1
                r4.setSelection(r5)
                android.widget.ListAdapter r5 = r4.getAdapter()
                android.support.v7.view.menu.MenuAdapter r5 = (android.support.v7.view.menu.MenuAdapter) r5
                android.support.v7.view.menu.MenuBuilder r5 = r5.getAdapterMenu()
                r6 = 0
                r5.close(r6)
                return r1
            L42:
                boolean r5 = super.onKeyDown(r5, r6)
                return r5
        }

        @Override
        public boolean onTouchEvent(android.view.MotionEvent r1) {
                r0 = this;
                boolean r1 = super.onTouchEvent(r1)
                return r1
        }

        public void setHoverListener(android.support.v7.widget.MenuItemHoverListener r1) {
                r0 = this;
                r0.mHoverListener = r1
                return
        }

        @Override
        public void setSelector(android.graphics.drawable.Drawable r1) {
                r0 = this;
                super.setSelector(r1)
                return
        }
    }

    static {
            java.lang.Class<android.widget.PopupWindow> r0 = android.widget.PopupWindow.class
            java.lang.String r1 = "setTouchModal"
            r2 = 1
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L13
            r3 = 0
            java.lang.Class r4 = java.lang.Boolean.TYPE     // Catch: java.lang.NoSuchMethodException -> L13
            r2[r3] = r4     // Catch: java.lang.NoSuchMethodException -> L13
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> L13
            android.support.v7.widget.MenuPopupWindow.sSetTouchModalMethod = r0     // Catch: java.lang.NoSuchMethodException -> L13
            goto L1a
        L13:
            java.lang.String r0 = "MenuPopupWindow"
            java.lang.String r1 = "Could not find method setTouchModal() on PopupWindow. Oh well."
            android.util.Log.i(r0, r1)
        L1a:
            return
    }

    public MenuPopupWindow(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @Override
    android.support.v7.widget.DropDownListView createDropDownListView(android.content.Context r2, boolean r3) {
            r1 = this;
            android.support.v7.widget.MenuPopupWindow$MenuDropDownListView r0 = new android.support.v7.widget.MenuPopupWindow$MenuDropDownListView
            r0.<init>(r2, r3)
            r0.setHoverListener(r1)
            return r0
    }

    @Override
    public void onItemHoverEnter(@android.support.annotation.NonNull android.support.v7.view.menu.MenuBuilder r2, @android.support.annotation.NonNull android.view.MenuItem r3) {
            r1 = this;
            android.support.v7.widget.MenuItemHoverListener r0 = r1.mHoverListener
            if (r0 == 0) goto L7
            r0.onItemHoverEnter(r2, r3)
        L7:
            return
    }

    @Override
    public void onItemHoverExit(@android.support.annotation.NonNull android.support.v7.view.menu.MenuBuilder r2, @android.support.annotation.NonNull android.view.MenuItem r3) {
            r1 = this;
            android.support.v7.widget.MenuItemHoverListener r0 = r1.mHoverListener
            if (r0 == 0) goto L7
            r0.onItemHoverExit(r2, r3)
        L7:
            return
    }

    public void setEnterTransition(java.lang.Object r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Ld
            android.widget.PopupWindow r0 = r2.mPopup
            android.transition.Transition r3 = (android.transition.Transition) r3
            r0.setEnterTransition(r3)
        Ld:
            return
    }

    public void setExitTransition(java.lang.Object r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Ld
            android.widget.PopupWindow r0 = r2.mPopup
            android.transition.Transition r3 = (android.transition.Transition) r3
            r0.setExitTransition(r3)
        Ld:
            return
    }

    public void setHoverListener(android.support.v7.widget.MenuItemHoverListener r1) {
            r0 = this;
            r0.mHoverListener = r1
            return
    }

    public void setTouchModal(boolean r5) {
            r4 = this;
            java.lang.reflect.Method r0 = android.support.v7.widget.MenuPopupWindow.sSetTouchModalMethod
            if (r0 == 0) goto L1b
            android.widget.PopupWindow r1 = r4.mPopup     // Catch: java.lang.Exception -> L14
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L14
            r3 = 0
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Exception -> L14
            r2[r3] = r5     // Catch: java.lang.Exception -> L14
            r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L14
            goto L1b
        L14:
            java.lang.String r5 = "MenuPopupWindow"
            java.lang.String r0 = "Could not invoke setTouchModal() on PopupWindow. Oh well."
            android.util.Log.i(r5, r0)
        L1b:
            return
    }
}
