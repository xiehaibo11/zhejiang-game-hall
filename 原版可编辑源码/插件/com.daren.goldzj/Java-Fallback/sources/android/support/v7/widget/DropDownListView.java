package android.support.v7.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.view.ViewPropertyAnimatorCompat;
import android.support.v4.widget.ListViewAutoScrollHelper;
import android.support.v7.appcompat.R;
import android.support.v7.graphics.drawable.DrawableWrapper;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AbsListView;
import android.widget.ListAdapter;
import android.widget.ListView;
import java.lang.reflect.Field;

class DropDownListView extends ListView {
    public static final int INVALID_POSITION = -1;
    public static final int NO_POSITION = -1;
    private ViewPropertyAnimatorCompat mClickAnimation;
    private boolean mDrawsInPressedState;
    private boolean mHijackFocus;
    private Field mIsChildViewEnabled;
    private boolean mListSelectionHidden;
    private int mMotionPosition;
    ResolveHoverRunnable mResolveHoverRunnable;
    private ListViewAutoScrollHelper mScrollHelper;
    private int mSelectionBottomPadding;
    private int mSelectionLeftPadding;
    private int mSelectionRightPadding;
    private int mSelectionTopPadding;
    private GateKeeperDrawable mSelector;
    private final Rect mSelectorRect;

    private static class GateKeeperDrawable extends DrawableWrapper {
        private boolean mEnabled;

        GateKeeperDrawable(Drawable r1) {
            super(r1);
            this.mEnabled = true;
        }

        void setEnabled(boolean r1) {
            this.mEnabled = r1;
        }

        @Override
        public boolean setState(int[] r2) {
            if (this.mEnabled == true) goto L5;
            return false;
        L5:
            return super.setState(r2);
        }

        @Override
        public void draw(Canvas r2) {
            if (this.mEnabled == false) goto L6;
            super.draw(r2);
            return;
        }

        @Override
        public void setHotspot(float r2, float r3) {
            if (this.mEnabled == false) goto L6;
            super.setHotspot(r2, r3);
            return;
        }

        @Override
        public void setHotspotBounds(int r2, int r3, int r4, int r5) {
            if (this.mEnabled == false) goto L6;
            super.setHotspotBounds(r2, r3, r4, r5);
            return;
        }

        @Override
        public boolean setVisible(boolean r2, boolean r3) {
            if (this.mEnabled == true) goto L5;
            return false;
        L5:
            return super.setVisible(r2, r3);
        }
    }

    private class ResolveHoverRunnable implements Runnable {
        final DropDownListView this$0;

        ResolveHoverRunnable(DropDownListView r1) {
            this.this$0 = r1;
        }

        @Override
        public void run() {
            DropDownListView r0 = this.this$0;
            r0.mResolveHoverRunnable = null;
            r0.drawableStateChanged();
        }

        public void cancel() {
            DropDownListView r0 = this.this$0;
            r0.mResolveHoverRunnable = null;
            r0.removeCallbacks(this);
        }

        public void post() {
            this.this$0.post(this);
        }
    }

    DropDownListView(Context r3, boolean r4) {
        super(r3, null, R.attr.dropDownListViewStyle);
        this.mSelectorRect = new Rect();
        this.mSelectionLeftPadding = 0;
        this.mSelectionTopPadding = 0;
        this.mSelectionRightPadding = 0;
        this.mSelectionBottomPadding = 0;
        this.mHijackFocus = r4;
        setCacheColorHint(0);
        this.mIsChildViewEnabled = AbsListView.class.getDeclaredField("mIsChildViewEnabled");     // Catch: NoSuchFieldException -> L5
        this.mIsChildViewEnabled.setAccessible(true);     // Catch: NoSuchFieldException -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    @Override
    public boolean isInTouchMode() {
        if (this.mHijackFocus == false) goto L7;
        if (this.mListSelectionHidden == false) goto L7;
    L8:
        return true;
    L7:
        if (super.isInTouchMode() == true) goto L8;
        return false;
    }

    @Override
    public boolean hasWindowFocus() {
        if (this.mHijackFocus == false) goto L5;
    L8:
        return true;
    L5:
        if (super.hasWindowFocus() == true) goto L8;
        return false;
    }

    @Override
    public boolean isFocused() {
        if (this.mHijackFocus == false) goto L5;
    L8:
        return true;
    L5:
        if (super.isFocused() == true) goto L8;
        return false;
    }

    @Override
    public boolean hasFocus() {
        if (this.mHijackFocus == false) goto L5;
    L8:
        return true;
    L5:
        if (super.hasFocus() == true) goto L8;
        return false;
    }

    @Override
    public void setSelector(Drawable r2) {
        if (r2 == null) goto L4;
        GateKeeperDrawable r0 = new GateKeeperDrawable(r2);
    L5:
        this.mSelector = r0;
        super.setSelector(this.mSelector);
        Rect r02 = new Rect();
        if (r2 == null) goto L8;
        r2.getPadding(r02);
    L8:
        this.mSelectionLeftPadding = r02.left;
        this.mSelectionTopPadding = r02.top;
        this.mSelectionRightPadding = r02.right;
        this.mSelectionBottomPadding = r02.bottom;
        return;
    L4:
        r0 = null;
        goto L5
    }

    @Override
    protected void drawableStateChanged() {
        if (this.mResolveHoverRunnable == null) goto L5;
        return;
    L5:
        super.drawableStateChanged();
        setSelectorEnabled(true);
        updateSelectorStateCompat();
    }

    @Override
    protected void dispatchDraw(Canvas r1) {
        drawSelectorCompat(r1);
        super.dispatchDraw(r1);
    }

    @Override
    public boolean onTouchEvent(MotionEvent r3) {
        if (r3.getAction() != 0) goto L6;
        this.mMotionPosition = pointToPosition((int) r3.getX(), (int) r3.getY());
    L6:
        ResolveHoverRunnable r0 = this.mResolveHoverRunnable;
        if (r0 == null) goto L10;
        r0.cancel();
    L10:
        return super.onTouchEvent(r3);
    }

    public int lookForSelectablePosition(int r5, boolean r6) {
        ListAdapter r0 = getAdapter();
        if (r0 != null) goto L5;
    L29:
        return -1;
    L5:
        if (isInTouchMode() == true) goto L29;
        int r2 = r0.getCount();
        if (getAdapter().areAllItemsEnabled() == true) goto L25;
        if (r6 == false) goto L15;
        int r52 = Math.max(0, r5);
    L11:
        if (r52 >= r2) goto L20;
        if (r0.isEnabled(r52) == true) goto L20;
        r52 = r52 + 1;
    L20:
        if (r52 < 0) goto L24;
        if (r52 >= r2) goto L24;
        return r52;
    L24:
        return -1;
    L15:
        r52 = Math.min(r5, r2 - 1);
    L16:
        if (r52 < 0) goto L20;
        if (r0.isEnabled(r52) == true) goto L20;
        r52 = r52 - 1;
        goto L16
    L25:
        if (r5 < 0) goto L29;
        if (r5 >= r2) goto L29;
        return r5;
    }

    public int measureHeightOfChildrenCompat(int r11, int r12, int r13, int r14, int r15) {
        int r122 = getListPaddingTop();
        int r132 = getListPaddingBottom();
        getListPaddingLeft();
        getListPaddingRight();
        int r0 = getDividerHeight();
        Drawable r1 = getDivider();
        ListAdapter r2 = getAdapter();
        if (r2 == null) goto L5;
        int r123 = r122 + r132;
        if (r0 <= 0) goto L10;
        if (r1 == null) goto L10;
    L11:
        int r16 = r2.getCount();
        int r4 = r123;
        View r6 = null;
        int r124 = 0;
        int r5 = 0;
        int r7 = 0;
    L12:
        if (r124 >= r16) goto L38;
        int r8 = r2.getItemViewType(r124);
        if (r8 == r5) goto L16;
        r6 = null;
        r5 = r8;
    L16:
        r6 = r2.getView(r124, r6, this);
        ViewGroup.LayoutParams r82 = r6.getLayoutParams();
        if (r82 != null) goto L20;
        r82 = generateDefaultLayoutParams();
        r6.setLayoutParams(r82);
    L20:
        if (r82.height <= 0) goto L22;
        int r83 = View.MeasureSpec.makeMeasureSpec(r82.height, 1073741824);
    L23:
        r6.measure(r11, r83);
        r6.forceLayout();
        if (r124 <= 0) goto L26;
        r4 = r4 + r0;
    L26:
        r4 = r4 + r6.getMeasuredHeight();
        if (r4 >= r14) goto L28;
        if (r15 < 0) goto L37;
        if (r124 < r15) goto L37;
        r7 = r4;
    L37:
        r124 = r124 + 1;
        goto L12
    L28:
        if (r15 < 0) goto L44;
        if (r124 <= r15) goto L45;
        if (r7 <= 0) goto L46;
        if (r4 != r14) goto L33;
        return r14;
    L33:
        return r7;
    L46:
        return r14;
    L45:
        return r14;
    L44:
        return r14;
    L22:
        r83 = View.MeasureSpec.makeMeasureSpec(0, 0);
        goto L23
    L38:
        return r4;
    L10:
        r0 = 0;
        goto L11
    L5:
        return r122 + r132;
    }

    private void setSelectorEnabled(boolean r2) {
        GateKeeperDrawable r0 = this.mSelector;
        if (r0 == null) goto L6;
        r0.setEnabled(r2);
        return;
    }

    @Override
    public boolean onHoverEvent(@NonNull MotionEvent r5) {
        if (Build.VERSION.SDK_INT < 26) goto L5;
        int r0 = r5.getActionMasked();
        if (r0 == 10) goto L9;
    L11:
        boolean r1 = super.onHoverEvent(r5);
        if (r0 != 9) goto L14;
    L17:
        int r52 = pointToPosition((int) r5.getX(), (int) r5.getY());
        if (r52 != (-1)) goto L20;
    L25:
        return r1;
    L20:
        if (r52 == getSelectedItemPosition()) goto L25;
        View r02 = getChildAt(r52 - getFirstVisiblePosition());
        if (r02.isEnabled() == false) goto L24;
        setSelectionFromTop(r52, r02.getTop() - getTop());
    L24:
        updateSelectorStateCompat();
        goto L25
    L14:
        if (r0 == 7) goto L17;
        setSelection(-1);
        goto L25
    L9:
        if (this.mResolveHoverRunnable != null) goto L11;
        this.mResolveHoverRunnable = new ResolveHoverRunnable(this);
        this.mResolveHoverRunnable.post();
        goto L11
    L5:
        return super.onHoverEvent(r5);
    }

    @Override
    protected void onDetachedFromWindow() {
        this.mResolveHoverRunnable = null;
        super.onDetachedFromWindow();
    }

    public boolean onForwardedEvent(MotionEvent r8, int r9) {
        int r0 = r8.getActionMasked();
        if (r0 != 1) goto L5;
        boolean r3 = false;
    L12:
        int r92 = r8.findPointerIndex(r9);
        if (r92 < 0) goto L9;
        int r4 = (int) r8.getX(r92);
        int r93 = (int) r8.getY(r92);
        int r5 = pointToPosition(r4, r93);
        if (r5 != (-1)) goto L18;
        boolean r94 = true;
    L21:
        if (r3 == false) goto L23;
        if (r94 == true) goto L23;
    L24:
        if (r3 == true) goto L26;
        ListViewAutoScrollHelper r82 = this.mScrollHelper;
        if (r82 == null) goto L32;
        r82.setEnabled(false);
    L32:
        return r3;
    L26:
        if (this.mScrollHelper != null) goto L28;
        this.mScrollHelper = new ListViewAutoScrollHelper(this);
    L28:
        this.mScrollHelper.setEnabled(true);
        this.mScrollHelper.onTouch(this, r8);
    L23:
        clearPressedItem();
        goto L24
    L18:
        View r32 = getChildAt(r5 - getFirstVisiblePosition());
        setPressedItem(r32, r5, r4, r93);
        if (r0 == 1) goto L20;
    L8:
        r94 = false;
        r3 = true;
        goto L21
    L20:
        clickPressedItem(r32, r5);
    L9:
        r94 = false;
        r3 = false;
        goto L21
    L5:
        if (r0 != 2) goto L7;
        r3 = true;
        goto L12
    L7:
        if (r0 == 3) goto L9;
        goto L8
    }

    private void clickPressedItem(View r3, int r4) {
        performItemClick(r3, r4, getItemIdAtPosition(r4));
    }

    void setListSelectionHidden(boolean r1) {
        this.mListSelectionHidden = r1;
    }

    private void updateSelectorStateCompat() {
        Drawable r0 = getSelector();
        if (r0 != null) goto L5;
        return;
    L5:
        if (touchModeDrawsInPressedStateCompat() == true) goto L7;
        return;
    L7:
        if (isPressed() == false) goto L12;
        r0.setState(getDrawableState());
        return;
    }

    private void drawSelectorCompat(Canvas r3) {
        if (this.mSelectorRect.isEmpty() == true) goto L8;
        Drawable r0 = getSelector();
        if (r0 == null) goto L9;
        r0.setBounds(this.mSelectorRect);
        r0.draw(r3);
        return;
    L9:
        return;
    }

    private void positionSelectorLikeTouchCompat(int r2, View r3, float r4, float r5) {
        positionSelectorLikeFocusCompat(r2, r3);
        Drawable r32 = getSelector();
        if (r32 != null) goto L5;
        return;
    L5:
        if (r2 == (-1)) goto L9;
        DrawableCompat.setHotspot(r32, r4, r5);
        return;
    }

    private void positionSelectorLikeFocusCompat(int r5, View r6) {
        Drawable r0 = getSelector();
        boolean r1 = true;
        if (r0 != null) goto L5;
    L7:
        boolean r3 = false;
    L8:
        if (r3 == false) goto L10;
        r0.setVisible(false, false);
    L10:
        positionSelectorCompat(r5, r6);
        if (r3 == false) goto L18;
        Rect r52 = this.mSelectorRect;
        float r62 = r52.exactCenterX();
        float r53 = r52.exactCenterY();
        if (getVisibility() == 0) goto L16;
        r1 = false;
    L16:
        r0.setVisible(r1, false);
        DrawableCompat.setHotspot(r0, r62, r53);
        return;
    L18:
        return;
    L5:
        if (r5 == (-1)) goto L7;
        r3 = true;
        goto L8
    }

    private void positionSelectorCompat(int r6, View r7) {
        Rect r0 = this.mSelectorRect;
        r0.set(r7.getLeft(), r7.getTop(), r7.getRight(), r7.getBottom());
        r0.left -= this.mSelectionLeftPadding;
        r0.top -= this.mSelectionTopPadding;
        r0.right += this.mSelectionRightPadding;
        r0.bottom += this.mSelectionBottomPadding;
        boolean r02 = this.mIsChildViewEnabled.getBoolean(this);     // Catch: IllegalAccessException -> L13
        if (r7.isEnabled() == r02) goto L18;
        Field r72 = this.mIsChildViewEnabled;     // Catch: IllegalAccessException -> L13
        if (r02 == true) goto L8;
        boolean r03 = true;
    L9:
        r72.set(this, Boolean.valueOf(r03));     // Catch: IllegalAccessException -> L13
        if (r6 == (-1)) goto L19;
        refreshDrawableState();     // Catch: IllegalAccessException -> L13
        return;
    L19:
        return;
    L8:
        r03 = false;
        goto L9
    L18:
        return;
    L13:
        e = move-exception;
        e.printStackTrace();
    }

    private void clearPressedItem() {
        this.mDrawsInPressedState = false;
        setPressed(false);
        drawableStateChanged();
        View r1 = getChildAt(this.mMotionPosition - getFirstVisiblePosition());
        if (r1 == null) goto L5;
        r1.setPressed(false);
    L5:
        ViewPropertyAnimatorCompat r0 = this.mClickAnimation;
        if (r0 == null) goto L9;
        r0.cancel();
        this.mClickAnimation = null;
        return;
    }

    private void setPressedItem(View r7, int r8, float r9, float r10) {
        this.mDrawsInPressedState = true;
        if (Build.VERSION.SDK_INT < 21) goto L6;
        drawableHotspotChanged(r9, r10);
    L6:
        if (isPressed() == true) goto L8;
        setPressed(true);
    L8:
        layoutChildren();
        int r1 = this.mMotionPosition;
        if (r1 == (-1)) goto L16;
        View r12 = getChildAt(r1 - getFirstVisiblePosition());
        if (r12 == null) goto L16;
        if (r12 == r7) goto L16;
        if (r12.isPressed() == false) goto L16;
        r12.setPressed(false);
    L16:
        this.mMotionPosition = r8;
        float r13 = r9 - r7.getLeft();
        float r3 = r10 - r7.getTop();
        if (Build.VERSION.SDK_INT < 21) goto L20;
        r7.drawableHotspotChanged(r13, r3);
    L20:
        if (r7.isPressed() == true) goto L22;
        r7.setPressed(true);
    L22:
        positionSelectorLikeTouchCompat(r8, r7, r9, r10);
        setSelectorEnabled(false);
        refreshDrawableState();
    }

    private boolean touchModeDrawsInPressedStateCompat() {
        return this.mDrawsInPressedState;
    }
}
