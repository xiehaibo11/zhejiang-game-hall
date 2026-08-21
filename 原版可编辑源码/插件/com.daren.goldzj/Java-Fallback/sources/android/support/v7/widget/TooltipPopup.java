package android.support.v7.widget;

import android.app.Activity;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import android.graphics.Rect;
import android.support.annotation.RestrictTo;
import android.support.v4.view.PointerIconCompat;
import android.support.v7.appcompat.R;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.widget.TextView;
import com.bianqi.wpll.BuildConfig;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class TooltipPopup {
    private static final String TAG = "TooltipPopup";
    private final View mContentView;
    private final Context mContext;
    private final WindowManager.LayoutParams mLayoutParams;
    private final TextView mMessageView;
    private final int[] mTmpAnchorPos;
    private final int[] mTmpAppPos;
    private final Rect mTmpDisplayFrame;

    TooltipPopup(Context r3) {
        this.mLayoutParams = new WindowManager.LayoutParams();
        this.mTmpDisplayFrame = new Rect();
        this.mTmpAnchorPos = new int[2];
        this.mTmpAppPos = new int[2];
        this.mContext = r3;
        this.mContentView = LayoutInflater.from(this.mContext).inflate(R.layout.abc_tooltip, null);
        this.mMessageView = (TextView) this.mContentView.findViewById(R.id.message);
        this.mLayoutParams.setTitle(getClass().getSimpleName());
        WindowManager.LayoutParams r32 = this.mLayoutParams;
        r32.packageName = this.mContext.getPackageName();
        WindowManager.LayoutParams r33 = this.mLayoutParams;
        r33.type = PointerIconCompat.TYPE_HAND;
        r33.width = -2;
        r33.height = -2;
        r33.format = -3;
        r33.windowAnimations = R.style.Animation_AppCompat_Tooltip;
        this.mLayoutParams.flags = 24;
    }

    void show(View r8, int r9, int r10, boolean r11, CharSequence r12) {
        if (isShowing() == false) goto L5;
        hide();
    L5:
        this.mMessageView.setText(r12);
        computePosition(r8, r9, r10, r11, this.mLayoutParams);
        ((WindowManager) this.mContext.getSystemService("window")).addView(this.mContentView, this.mLayoutParams);
    }

    void hide() {
        if (isShowing() == true) goto L5;
        return;
    L5:
        ((WindowManager) this.mContext.getSystemService("window")).removeView(this.mContentView);
    }

    boolean isShowing() {
        if (this.mContentView.getParent() == null) goto L5;
        return true;
    L5:
        return false;
    }

    private void computePosition(View r9, int r10, int r11, boolean r12, WindowManager.LayoutParams r13) {
        r13.token = r9.getApplicationWindowToken();
        int r0 = this.mContext.getResources().getDimensionPixelOffset(R.dimen.tooltip_precise_anchor_threshold);
        if (r9.getWidth() >= r0) goto L7;
        r10 = r9.getWidth() / 2;
    L7:
        if (r9.getHeight() < r0) goto L9;
        int r02 = this.mContext.getResources().getDimensionPixelOffset(R.dimen.tooltip_precise_anchor_extra_offset);
        int r1 = r11 + r02;
        int r112 = r11 - r02;
    L10:
        r13.gravity = 49;
        Resources r03 = this.mContext.getResources();
        if (r12 == false) goto L13;
        int r3 = R.dimen.tooltip_y_offset_touch;
    L14:
        int r04 = r03.getDimensionPixelOffset(r3);
        View r32 = getAppRootView(r9);
        if (r32 != null) goto L18;
        Log.e(TAG, "Cannot find app view");
        return;
    L18:
        r32.getWindowVisibleDisplayFrame(this.mTmpDisplayFrame);
        if (this.mTmpDisplayFrame.left < 0) goto L21;
    L27:
        r32.getLocationOnScreen(this.mTmpAppPos);
        r9.getLocationOnScreen(this.mTmpAnchorPos);
        int[] r92 = this.mTmpAnchorPos;
        int r4 = r92[0];
        int[] r5 = this.mTmpAppPos;
        r92[0] = r4 - r5[0];
        r92[1] = r92[1] - r5[1];
        r13.x = (r92[0] + r10) - (r32.getWidth() / 2);
        int r93 = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.mContentView.measure(r93, r93);
        int r94 = this.mContentView.getMeasuredHeight();
        int[] r102 = this.mTmpAnchorPos;
        int r2 = ((r102[1] + r112) - r04) - r94;
        int r103 = (r102[1] + r1) + r04;
        if (r12 == false) goto L33;
        if (r2 < 0) goto L31;
        r13.y = r2;
        return;
    L31:
        r13.y = r103;
        return;
    L33:
        if ((r94 + r103) > this.mTmpDisplayFrame.height()) goto L35;
        r13.y = r103;
        return;
    L35:
        r13.y = r2;
        return;
    L21:
        if (this.mTmpDisplayFrame.top >= 0) goto L27;
        Resources r42 = this.mContext.getResources();
        int r52 = r42.getIdentifier("status_bar_height", "dimen", BuildConfig.APPLICATION_ID);
        if (r52 == 0) goto L25;
        int r53 = r42.getDimensionPixelSize(r52);
    L26:
        DisplayMetrics r43 = r42.getDisplayMetrics();
        this.mTmpDisplayFrame.set(0, r53, r43.widthPixels, r43.heightPixels);
        goto L27
    L25:
        r53 = 0;
        goto L26
    L13:
        r3 = R.dimen.tooltip_y_offset_non_touch;
        goto L14
    L9:
        r1 = r9.getHeight();
        r112 = 0;
        goto L10
    }

    private static View getAppRootView(View r3) {
        View r0 = r3.getRootView();
        ViewGroup.LayoutParams r1 = r0.getLayoutParams();
        if ((r1 instanceof WindowManager.LayoutParams) == true) goto L5;
    L7:
        Context r32 = r3.getContext();
    L9:
        if ((r32 instanceof ContextWrapper) == false) goto L15;
        if ((r32 instanceof Activity) == true) goto L13;
        r32 = ((ContextWrapper) r32).getBaseContext();
        goto L9
    L13:
        return ((Activity) r32).getWindow().getDecorView();
    L15:
        return r0;
    L5:
        if (((WindowManager.LayoutParams) r1).type != 2) goto L7;
        return r0;
    }
}
