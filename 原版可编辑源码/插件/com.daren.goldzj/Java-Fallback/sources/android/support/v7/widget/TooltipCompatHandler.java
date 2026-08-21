package android.support.v7.widget;

import android.support.annotation.RestrictTo;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.ViewConfigurationCompat;
import android.support.v7.widget.ActivityChooserView;
import android.text.TextUtils;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.accessibility.AccessibilityManager;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class TooltipCompatHandler implements View.OnLongClickListener, View.OnHoverListener, View.OnAttachStateChangeListener {
    private static final long HOVER_HIDE_TIMEOUT_MS = 15000;
    private static final long HOVER_HIDE_TIMEOUT_SHORT_MS = 3000;
    private static final long LONG_CLICK_HIDE_TIMEOUT_MS = 2500;
    private static final String TAG = "TooltipCompatHandler";
    private static TooltipCompatHandler sActiveHandler;
    private static TooltipCompatHandler sPendingHandler;
    private final View mAnchor;
    private int mAnchorX;
    private int mAnchorY;
    private boolean mFromTouch;
    private final Runnable mHideRunnable;
    private final int mHoverSlop;
    private TooltipPopup mPopup;
    private final Runnable mShowRunnable;
    private final CharSequence mTooltipText;

    @Override
    public void onViewAttachedToWindow(View r1) {
    }

    public static void setTooltipText(View r2, CharSequence r3) {
        TooltipCompatHandler r0 = sPendingHandler;
        if (r0 == null) goto L8;
        if (r0.mAnchor != r2) goto L8;
        setPendingHandler(null);
    L8:
        if (TextUtils.isEmpty(r3) == false) goto L15;
        TooltipCompatHandler r32 = sActiveHandler;
        if (r32 != null) goto L12;
    L14:
        r2.setOnLongClickListener(null);
        r2.setLongClickable(false);
        r2.setOnHoverListener(null);
        return;
    L12:
        if (r32.mAnchor != r2) goto L14;
        r32.hide();
        goto L14
    L15:
        new TooltipCompatHandler(r2, r3);
    }

    private TooltipCompatHandler(View r2, CharSequence r3) {
        this.mShowRunnable = new 1(this);
        this.mHideRunnable = new 2(this);
        this.mAnchor = r2;
        this.mTooltipText = r3;
        this.mHoverSlop = ViewConfigurationCompat.getScaledHoverSlop(ViewConfiguration.get(this.mAnchor.getContext()));
        clearAnchorPos();
        this.mAnchor.setOnLongClickListener(this);
        this.mAnchor.setOnHoverListener(this);
    }

    @Override
    public boolean onLongClick(View r2) {
        this.mAnchorX = r2.getWidth() / 2;
        this.mAnchorY = r2.getHeight() / 2;
        show(true);
        return true;
    }

    @Override
    public boolean onHover(View r3, MotionEvent r4) {
        if (this.mPopup != null) goto L5;
    L7:
        AccessibilityManager r32 = (AccessibilityManager) this.mAnchor.getContext().getSystemService("accessibility");
        if (r32.isEnabled() == true) goto L10;
    L12:
        int r33 = r4.getAction();
        if (r33 == 7) goto L19;
        if (r33 != 10) goto L25;
        clearAnchorPos();
        hide();
    L25:
        return false;
    L19:
        if (this.mAnchor.isEnabled() == false) goto L25;
        if (this.mPopup != null) goto L25;
        if (updateAnchorPos(r4) == false) goto L25;
        setPendingHandler(this);
        goto L25
    L10:
        if (r32.isTouchExplorationEnabled() == false) goto L12;
        return false;
    L5:
        if (this.mFromTouch == false) goto L7;
        return false;
    }

    @Override
    public void onViewDetachedFromWindow(View r1) {
        hide();
    }

    void show(boolean r8) {
        if (ViewCompat.isAttachedToWindow(this.mAnchor) == true) goto L5;
        return;
    L5:
        setPendingHandler(null);
        TooltipCompatHandler r0 = sActiveHandler;
        if (r0 == null) goto L8;
        r0.hide();
    L8:
        sActiveHandler = this;
        this.mFromTouch = r8;
        this.mPopup = new TooltipPopup(this.mAnchor.getContext());
        this.mPopup.show(this.mAnchor, this.mAnchorX, this.mAnchorY, this.mFromTouch, this.mTooltipText);
        this.mAnchor.addOnAttachStateChangeListener(this);
        if (this.mFromTouch == false) goto L12;
        long r02 = LONG_CLICK_HIDE_TIMEOUT_MS;
    L16:
        this.mAnchor.removeCallbacks(this.mHideRunnable);
        this.mAnchor.postDelayed(this.mHideRunnable, r02);
        return;
    L12:
        if ((ViewCompat.getWindowSystemUiVisibility(this.mAnchor) & 1) != 1) goto L14;
        long r03 = HOVER_HIDE_TIMEOUT_SHORT_MS;
        int r82 = ViewConfiguration.getLongPressTimeout();
    L15:
        r02 = r03 - ((long) r82);
        goto L16
    L14:
        r03 = HOVER_HIDE_TIMEOUT_MS;
        r82 = ViewConfiguration.getLongPressTimeout();
        goto L15
    }

    void hide() {
        if (sActiveHandler != this) goto L9;
        sActiveHandler = null;
        TooltipPopup r0 = this.mPopup;
        if (r0 == null) goto L7;
        r0.hide();
        this.mPopup = null;
        clearAnchorPos();
        this.mAnchor.removeOnAttachStateChangeListener(this);
        goto L9
    L7:
        Log.e(TAG, "sActiveHandler.mPopup == null");
    L9:
        if (sPendingHandler != this) goto L11;
        setPendingHandler(null);
    L11:
        this.mAnchor.removeCallbacks(this.mHideRunnable);
    }

    private static void setPendingHandler(TooltipCompatHandler r1) {
        TooltipCompatHandler r0 = sPendingHandler;
        if (r0 == null) goto L5;
        r0.cancelPendingShow();
    L5:
        sPendingHandler = r1;
        TooltipCompatHandler r12 = sPendingHandler;
        if (r12 == null) goto L9;
        r12.scheduleShow();
        return;
    }

    private void scheduleShow() {
        this.mAnchor.postDelayed(this.mShowRunnable, ViewConfiguration.getLongPressTimeout());
    }

    private void cancelPendingShow() {
        this.mAnchor.removeCallbacks(this.mShowRunnable);
    }

    private boolean updateAnchorPos(MotionEvent r4) {
        int r0 = (int) r4.getX();
        int r42 = (int) r4.getY();
        if (Math.abs(r0 - this.mAnchorX) <= this.mHoverSlop) goto L5;
    L8:
        this.mAnchorX = r0;
        this.mAnchorY = r42;
        return true;
    L5:
        if (Math.abs(r42 - this.mAnchorY) > this.mHoverSlop) goto L8;
        return false;
    }

    private void clearAnchorPos() {
        this.mAnchorX = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
        this.mAnchorY = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
    }
}
