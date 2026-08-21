package android.support.v4.app;

import android.R;
import android.app.ActionBar;
import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.InsetDrawable;
import android.os.Build;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.StringRes;
import android.support.v4.content.ContextCompat;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.ViewCompat;
import android.support.v4.widget.DrawerLayout;
import android.util.Log;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import java.lang.reflect.Method;

@Deprecated
public class ActionBarDrawerToggle implements DrawerLayout.DrawerListener {
    private static final int ID_HOME = 16908332;
    private static final String TAG = "ActionBarDrawerToggle";
    private static final int[] THEME_ATTRS = null;
    private static final float TOGGLE_DRAWABLE_OFFSET = 0.33333334f;
    final Activity mActivity;
    private final Delegate mActivityImpl;
    private final int mCloseDrawerContentDescRes;
    private Drawable mDrawerImage;
    private final int mDrawerImageResource;
    private boolean mDrawerIndicatorEnabled;
    private final DrawerLayout mDrawerLayout;
    private boolean mHasCustomUpIndicator;
    private Drawable mHomeAsUpIndicator;
    private final int mOpenDrawerContentDescRes;
    private SetIndicatorInfo mSetIndicatorInfo;
    private SlideDrawable mSlider;

    @Deprecated
    public interface Delegate {
        @Nullable
        Drawable getThemeUpIndicator();

        void setActionBarDescription(@StringRes int r1);

        void setActionBarUpIndicator(Drawable r1, @StringRes int r2);
    }

    @Deprecated
    public interface DelegateProvider {
        @Nullable
        Delegate getDrawerToggleDelegate();
    }

    private static class SetIndicatorInfo {
        Method mSetHomeActionContentDescription;
        Method mSetHomeAsUpIndicator;
        ImageView mUpIndicatorView;

        SetIndicatorInfo(Activity r7) {
            this.mSetHomeAsUpIndicator = ActionBar.class.getDeclaredMethod("setHomeAsUpIndicator", new Class[]{Drawable.class});     // Catch: NoSuchMethodException -> L5
            this.mSetHomeActionContentDescription = ActionBar.class.getDeclaredMethod("setHomeActionContentDescription", new Class[]{Integer.TYPE});     // Catch: NoSuchMethodException -> L5
            return;
        L5:
            View r72 = r7.findViewById(16908332);
            if (r72 != null) goto L8;
            return;
        L8:
            ViewGroup r73 = (ViewGroup) r72.getParent();
            if (r73.getChildCount() == 2) goto L11;
            return;
        L11:
            View r0 = r73.getChildAt(0);
            View r74 = r73.getChildAt(1);
            if (r0.getId() == 16908332) goto L16;
            r74 = r0;
        L16:
            if ((r74 instanceof ImageView) == false) goto L21;
            this.mUpIndicatorView = (ImageView) r74;
            return;
        }
    }

    private class SlideDrawable extends InsetDrawable implements Drawable.Callback {
        private final boolean mHasMirroring;
        private float mOffset;
        private float mPosition;
        private final Rect mTmpRect;
        final ActionBarDrawerToggle this$0;

        SlideDrawable(ActionBarDrawerToggle r2, Drawable r3) {
            this.this$0 = r2;
            boolean r22 = false;
            super(r3, 0);
            if (Build.VERSION.SDK_INT <= 18) goto L5;
            r22 = true;
        L5:
            this.mHasMirroring = r22;
            this.mTmpRect = new Rect();
        }

        public void setPosition(float r1) {
            this.mPosition = r1;
            invalidateSelf();
        }

        public float getPosition() {
            return this.mPosition;
        }

        public void setOffset(float r1) {
            this.mOffset = r1;
            invalidateSelf();
        }

        @Override
        public void draw(@NonNull Canvas r6) {
            copyBounds(this.mTmpRect);
            r6.save();
            int r1 = 1;
            if (ViewCompat.getLayoutDirection(this.this$0.mActivity.getWindow().getDecorView()) != 1) goto L5;
            boolean r0 = true;
        L6:
            if (r0 == false) goto L8;
            r1 = -1;
        L8:
            float r2 = this.mTmpRect.width();
            r6.translate((((-this.mOffset) * r2) * this.mPosition) * r1, 0.0f);
            if (r0 == true) goto L11;
        L13:
            super.draw(r6);
            r6.restore();
            return;
        L11:
            if (this.mHasMirroring == true) goto L13;
            r6.translate(r2, 0.0f);
            r6.scale(-1.0f, 1.0f);
            goto L13
        L5:
            r0 = false;
            goto L6
        }
    }

    @Override
    public void onDrawerStateChanged(int r1) {
    }

    static {
        THEME_ATTRS = new int[]{R.attr.homeAsUpIndicator};
    }

    public ActionBarDrawerToggle(Activity r9, DrawerLayout r10, @DrawableRes int r11, @StringRes int r12, @StringRes int r13) {
        this(r9, r10, !assumeMaterial(r9), r11, r12, r13);
    }

    private static boolean assumeMaterial(Context r1) {
        if (r1.getApplicationInfo().targetSdkVersion >= 21) goto L5;
    L7:
        return false;
    L5:
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public ActionBarDrawerToggle(Activity r2, DrawerLayout r3, boolean r4, @DrawableRes int r5, @StringRes int r6, @StringRes int r7) {
        this.mDrawerIndicatorEnabled = true;
        this.mActivity = r2;
        if ((r2 instanceof DelegateProvider) == false) goto L5;
        this.mActivityImpl = ((DelegateProvider) r2).getDrawerToggleDelegate();
    L6:
        this.mDrawerLayout = r3;
        this.mDrawerImageResource = r5;
        this.mOpenDrawerContentDescRes = r6;
        this.mCloseDrawerContentDescRes = r7;
        this.mHomeAsUpIndicator = getThemeUpIndicator();
        this.mDrawerImage = ContextCompat.getDrawable(r2, r5);
        this.mSlider = new SlideDrawable(this, this.mDrawerImage);
        SlideDrawable r22 = this.mSlider;
        if (r4 == false) goto L9;
        float r32 = TOGGLE_DRAWABLE_OFFSET;
    L10:
        r22.setOffset(r32);
        return;
    L9:
        r32 = 0.0f;
        goto L10
    L5:
        this.mActivityImpl = null;
        goto L6
    }

    public void syncState() {
        if (this.mDrawerLayout.isDrawerOpen(GravityCompat.START) == false) goto L5;
        this.mSlider.setPosition(1.0f);
    L7:
        if (this.mDrawerIndicatorEnabled == false) goto L14;
        SlideDrawable r0 = this.mSlider;
        if (this.mDrawerLayout.isDrawerOpen(GravityCompat.START) == false) goto L11;
        int r1 = this.mCloseDrawerContentDescRes;
    L12:
        setActionBarUpIndicator(r0, r1);
        return;
    L11:
        r1 = this.mOpenDrawerContentDescRes;
        goto L12
    L14:
        return;
    L5:
        this.mSlider.setPosition(0.0f);
        goto L7
    }

    public void setHomeAsUpIndicator(Drawable r2) {
        if (r2 != null) goto L5;
        this.mHomeAsUpIndicator = getThemeUpIndicator();
        this.mHasCustomUpIndicator = false;
    L7:
        if (this.mDrawerIndicatorEnabled == true) goto L10;
        setActionBarUpIndicator(this.mHomeAsUpIndicator, 0);
        return;
    L10:
        return;
    L5:
        this.mHomeAsUpIndicator = r2;
        this.mHasCustomUpIndicator = true;
        goto L7
    }

    public void setHomeAsUpIndicator(int r2) {
        if (r2 == 0) goto L4;
        Drawable r22 = ContextCompat.getDrawable(this.mActivity, r2);
    L5:
        setHomeAsUpIndicator(r22);
        return;
    L4:
        r22 = null;
        goto L5
    }

    public void setDrawerIndicatorEnabled(boolean r4) {
        if (r4 == this.mDrawerIndicatorEnabled) goto L13;
        if (r4 == false) goto L10;
        SlideDrawable r0 = this.mSlider;
        if (this.mDrawerLayout.isDrawerOpen(GravityCompat.START) == false) goto L8;
        int r1 = this.mCloseDrawerContentDescRes;
    L9:
        setActionBarUpIndicator(r0, r1);
    L11:
        this.mDrawerIndicatorEnabled = r4;
        return;
    L8:
        r1 = this.mOpenDrawerContentDescRes;
        goto L9
    L10:
        setActionBarUpIndicator(this.mHomeAsUpIndicator, 0);
        goto L11
    }

    public boolean isDrawerIndicatorEnabled() {
        return this.mDrawerIndicatorEnabled;
    }

    public void onConfigurationChanged(Configuration r2) {
        if (this.mHasCustomUpIndicator == true) goto L5;
        this.mHomeAsUpIndicator = getThemeUpIndicator();
    L5:
        this.mDrawerImage = ContextCompat.getDrawable(this.mActivity, this.mDrawerImageResource);
        syncState();
    }

    public boolean onOptionsItemSelected(MenuItem r2) {
        if (r2 != null) goto L4;
        return false;
    L4:
        if (r2.getItemId() == 16908332) goto L6;
        return false;
    L6:
        if (this.mDrawerIndicatorEnabled == true) goto L8;
        return false;
    L8:
        if (this.mDrawerLayout.isDrawerVisible(GravityCompat.START) == false) goto L10;
        this.mDrawerLayout.closeDrawer(GravityCompat.START);
        return true;
    L10:
        this.mDrawerLayout.openDrawer(GravityCompat.START);
        return true;
    }

    @Override
    public void onDrawerSlide(View r4, float r5) {
        float r42 = this.mSlider.getPosition();
        if (r5 <= 0.5f) goto L5;
        float r43 = Math.max(r42, Math.max(0.0f, r5 - 0.5f) * 2.0f);
    L6:
        this.mSlider.setPosition(r43);
        return;
    L5:
        r43 = Math.min(r42, r5 * 2.0f);
        goto L6
    }

    @Override
    public void onDrawerOpened(View r2) {
        this.mSlider.setPosition(1.0f);
        if (this.mDrawerIndicatorEnabled == false) goto L6;
        setActionBarDescription(this.mCloseDrawerContentDescRes);
        return;
    }

    @Override
    public void onDrawerClosed(View r2) {
        this.mSlider.setPosition(0.0f);
        if (this.mDrawerIndicatorEnabled == false) goto L6;
        setActionBarDescription(this.mOpenDrawerContentDescRes);
        return;
    }

    private Drawable getThemeUpIndicator() {
        Delegate r0 = this.mActivityImpl;
        if (r0 == null) goto L7;
        return r0.getThemeUpIndicator();
    L7:
        if (Build.VERSION.SDK_INT < 18) goto L14;
        ActionBar r02 = this.mActivity.getActionBar();
        if (r02 == null) goto L11;
        Context r03 = r02.getThemedContext();
    L12:
        TypedArray r04 = r03.obtainStyledAttributes(null, THEME_ATTRS, R.attr.actionBarStyle, 0);
        Drawable r1 = r04.getDrawable(0);
        r04.recycle();
        return r1;
    L11:
        r03 = this.mActivity;
        goto L12
    L14:
        TypedArray r05 = this.mActivity.obtainStyledAttributes(THEME_ATTRS);
        Drawable r12 = r05.getDrawable(0);
        r05.recycle();
        return r12;
    }

    private void setActionBarUpIndicator(Drawable r7, int r8) {
        Delegate r0 = this.mActivityImpl;
        if (r0 == null) goto L7;
        r0.setActionBarUpIndicator(r7, r8);
        return;
    L7:
        if (Build.VERSION.SDK_INT < 18) goto L12;
        ActionBar r02 = this.mActivity.getActionBar();
        if (r02 == null) goto L27;
        r02.setHomeAsUpIndicator(r7);
        r02.setHomeActionContentDescription(r8);
        return;
    L27:
        return;
    L12:
        if (this.mSetIndicatorInfo != null) goto L15;
        this.mSetIndicatorInfo = new SetIndicatorInfo(this.mActivity);
    L15:
        if (this.mSetIndicatorInfo.mSetHomeAsUpIndicator == null) goto L21;
        ActionBar r03 = this.mActivity.getActionBar();     // Catch: Exception -> L18
        this.mSetIndicatorInfo.mSetHomeAsUpIndicator.invoke(r03, new Object[]{r7});     // Catch: Exception -> L18
        this.mSetIndicatorInfo.mSetHomeActionContentDescription.invoke(r03, new Object[]{Integer.valueOf(r8)});     // Catch: Exception -> L18
        return;
    L18:
        e = move-exception;
        Log.w(TAG, "Couldn't set home-as-up indicator via JB-MR2 API", e);
        return;
    L21:
        if (this.mSetIndicatorInfo.mUpIndicatorView == null) goto L23;
        this.mSetIndicatorInfo.mUpIndicatorView.setImageDrawable(r7);
        return;
    L23:
        Log.w(TAG, "Couldn't set home-as-up indicator");
    }

    private void setActionBarDescription(int r5) {
        Delegate r0 = this.mActivityImpl;
        if (r0 == null) goto L7;
        r0.setActionBarDescription(r5);
        return;
    L7:
        if (Build.VERSION.SDK_INT < 18) goto L12;
        ActionBar r02 = this.mActivity.getActionBar();
        if (r02 == null) goto L23;
        r02.setHomeActionContentDescription(r5);
        return;
    L23:
        return;
    L12:
        if (this.mSetIndicatorInfo != null) goto L15;
        this.mSetIndicatorInfo = new SetIndicatorInfo(this.mActivity);
    L15:
        if (this.mSetIndicatorInfo.mSetHomeAsUpIndicator == null) goto L25;
        ActionBar r03 = this.mActivity.getActionBar();     // Catch: Exception -> L18
        this.mSetIndicatorInfo.mSetHomeActionContentDescription.invoke(r03, new Object[]{Integer.valueOf(r5)});     // Catch: Exception -> L18
        r03.setSubtitle(r03.getSubtitle());     // Catch: Exception -> L18
        return;
    L18:
        e = move-exception;
        Log.w(TAG, "Couldn't set content description via JB-MR2 API", e);
        return;
    }
}
