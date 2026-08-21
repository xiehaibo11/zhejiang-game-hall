package android.support.v4.app;

@java.lang.Deprecated
public class ActionBarDrawerToggle implements android.support.v4.widget.DrawerLayout.DrawerListener {
    private static final int ID_HOME = 16908332;
    private static final java.lang.String TAG = "ActionBarDrawerToggle";
    private static final int[] THEME_ATTRS = null;
    private static final float TOGGLE_DRAWABLE_OFFSET = 0.33333334f;
    final android.app.Activity mActivity;
    private final android.support.v4.app.ActionBarDrawerToggle.Delegate mActivityImpl;
    private final int mCloseDrawerContentDescRes;
    private android.graphics.drawable.Drawable mDrawerImage;
    private final int mDrawerImageResource;
    private boolean mDrawerIndicatorEnabled;
    private final android.support.v4.widget.DrawerLayout mDrawerLayout;
    private boolean mHasCustomUpIndicator;
    private android.graphics.drawable.Drawable mHomeAsUpIndicator;
    private final int mOpenDrawerContentDescRes;
    private android.support.v4.app.ActionBarDrawerToggle.SetIndicatorInfo mSetIndicatorInfo;
    private android.support.v4.app.ActionBarDrawerToggle.SlideDrawable mSlider;

    @java.lang.Deprecated
    public interface Delegate {
        @android.support.annotation.Nullable
        android.graphics.drawable.Drawable getThemeUpIndicator();

        void setActionBarDescription(@android.support.annotation.StringRes int r1);

        void setActionBarUpIndicator(android.graphics.drawable.Drawable r1, @android.support.annotation.StringRes int r2);
    }

    @java.lang.Deprecated
    public interface DelegateProvider {
        @android.support.annotation.Nullable
        android.support.v4.app.ActionBarDrawerToggle.Delegate getDrawerToggleDelegate();
    }

    private static class SetIndicatorInfo {
        java.lang.reflect.Method mSetHomeActionContentDescription;
        java.lang.reflect.Method mSetHomeAsUpIndicator;
        android.widget.ImageView mUpIndicatorView;

        SetIndicatorInfo(android.app.Activity r7) {
                r6 = this;
                r6.<init>()
                r0 = 0
                r1 = 1
                java.lang.Class<android.app.ActionBar> r2 = android.app.ActionBar.class
                java.lang.String r3 = "setHomeAsUpIndicator"
                java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.NoSuchMethodException -> L26
                java.lang.Class<android.graphics.drawable.Drawable> r5 = android.graphics.drawable.Drawable.class
                r4[r0] = r5     // Catch: java.lang.NoSuchMethodException -> L26
                java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.NoSuchMethodException -> L26
                r6.mSetHomeAsUpIndicator = r2     // Catch: java.lang.NoSuchMethodException -> L26
                java.lang.Class<android.app.ActionBar> r2 = android.app.ActionBar.class
                java.lang.String r3 = "setHomeActionContentDescription"
                java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.NoSuchMethodException -> L26
                java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L26
                r4[r0] = r5     // Catch: java.lang.NoSuchMethodException -> L26
                java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.NoSuchMethodException -> L26
                r6.mSetHomeActionContentDescription = r2     // Catch: java.lang.NoSuchMethodException -> L26
                return
            L26:
                r2 = 16908332(0x102002c, float:2.3877352E-38)
                android.view.View r7 = r7.findViewById(r2)
                if (r7 != 0) goto L31
                return
            L31:
                android.view.ViewParent r7 = r7.getParent()
                android.view.ViewGroup r7 = (android.view.ViewGroup) r7
                int r3 = r7.getChildCount()
                r4 = 2
                if (r3 == r4) goto L3f
                return
            L3f:
                android.view.View r0 = r7.getChildAt(r0)
                android.view.View r7 = r7.getChildAt(r1)
                int r1 = r0.getId()
                if (r1 != r2) goto L4e
                goto L4f
            L4e:
                r7 = r0
            L4f:
                boolean r0 = r7 instanceof android.widget.ImageView
                if (r0 == 0) goto L58
                android.widget.ImageView r7 = (android.widget.ImageView) r7
                r6.mUpIndicatorView = r7
            L58:
                return
        }
    }

    private class SlideDrawable extends android.graphics.drawable.InsetDrawable implements android.graphics.drawable.Drawable.Callback {
        private final boolean mHasMirroring;
        private float mOffset;
        private float mPosition;
        private final android.graphics.Rect mTmpRect;
        final android.support.v4.app.ActionBarDrawerToggle this$0;

        SlideDrawable(android.support.v4.app.ActionBarDrawerToggle r2, android.graphics.drawable.Drawable r3) {
                r1 = this;
                r1.this$0 = r2
                r2 = 0
                r1.<init>(r3, r2)
                int r3 = android.os.Build.VERSION.SDK_INT
                r0 = 18
                if (r3 <= r0) goto Ld
                r2 = 1
            Ld:
                r1.mHasMirroring = r2
                android.graphics.Rect r2 = new android.graphics.Rect
                r2.<init>()
                r1.mTmpRect = r2
                return
        }

        @Override
        public void draw(@android.support.annotation.NonNull android.graphics.Canvas r6) {
                r5 = this;
                android.graphics.Rect r0 = r5.mTmpRect
                r5.copyBounds(r0)
                r6.save()
                android.support.v4.app.ActionBarDrawerToggle r0 = r5.this$0
                android.app.Activity r0 = r0.mActivity
                android.view.Window r0 = r0.getWindow()
                android.view.View r0 = r0.getDecorView()
                int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r0)
                r1 = 1
                if (r0 != r1) goto L1d
                r0 = 1
                goto L1e
            L1d:
                r0 = 0
            L1e:
                if (r0 == 0) goto L21
                r1 = -1
            L21:
                android.graphics.Rect r2 = r5.mTmpRect
                int r2 = r2.width()
                float r3 = r5.mOffset
                float r3 = -r3
                float r2 = (float) r2
                float r3 = r3 * r2
                float r4 = r5.mPosition
                float r3 = r3 * r4
                float r1 = (float) r1
                float r3 = r3 * r1
                r1 = 0
                r6.translate(r3, r1)
                if (r0 == 0) goto L48
                boolean r0 = r5.mHasMirroring
                if (r0 != 0) goto L48
                r6.translate(r2, r1)
                r0 = -1082130432(0xffffffffbf800000, float:-1.0)
                r1 = 1065353216(0x3f800000, float:1.0)
                r6.scale(r0, r1)
            L48:
                super.draw(r6)
                r6.restore()
                return
        }

        public float getPosition() {
                r1 = this;
                float r0 = r1.mPosition
                return r0
        }

        public void setOffset(float r1) {
                r0 = this;
                r0.mOffset = r1
                r0.invalidateSelf()
                return
        }

        public void setPosition(float r1) {
                r0 = this;
                r0.mPosition = r1
                r0.invalidateSelf()
                return
        }
    }

    static {
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16843531(0x101030b, float:2.369574E-38)
            r0[r1] = r2
            android.support.v4.app.ActionBarDrawerToggle.THEME_ATTRS = r0
            return
    }

    public ActionBarDrawerToggle(android.app.Activity r9, android.support.v4.widget.DrawerLayout r10, @android.support.annotation.DrawableRes int r11, @android.support.annotation.StringRes int r12, @android.support.annotation.StringRes int r13) {
            r8 = this;
            boolean r0 = assumeMaterial(r9)
            r4 = r0 ^ 1
            r1 = r8
            r2 = r9
            r3 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return
    }

    public ActionBarDrawerToggle(android.app.Activity r2, android.support.v4.widget.DrawerLayout r3, boolean r4, @android.support.annotation.DrawableRes int r5, @android.support.annotation.StringRes int r6, @android.support.annotation.StringRes int r7) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mDrawerIndicatorEnabled = r0
            r1.mActivity = r2
            boolean r0 = r2 instanceof android.support.v4.app.ActionBarDrawerToggle.DelegateProvider
            if (r0 == 0) goto L16
            r0 = r2
            android.support.v4.app.ActionBarDrawerToggle$DelegateProvider r0 = (android.support.v4.app.ActionBarDrawerToggle.DelegateProvider) r0
            android.support.v4.app.ActionBarDrawerToggle$Delegate r0 = r0.getDrawerToggleDelegate()
            r1.mActivityImpl = r0
            goto L19
        L16:
            r0 = 0
            r1.mActivityImpl = r0
        L19:
            r1.mDrawerLayout = r3
            r1.mDrawerImageResource = r5
            r1.mOpenDrawerContentDescRes = r6
            r1.mCloseDrawerContentDescRes = r7
            android.graphics.drawable.Drawable r3 = r1.getThemeUpIndicator()
            r1.mHomeAsUpIndicator = r3
            android.graphics.drawable.Drawable r2 = android.support.v4.content.ContextCompat.getDrawable(r2, r5)
            r1.mDrawerImage = r2
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r2 = new android.support.v4.app.ActionBarDrawerToggle$SlideDrawable
            android.graphics.drawable.Drawable r3 = r1.mDrawerImage
            r2.<init>(r1, r3)
            r1.mSlider = r2
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r2 = r1.mSlider
            if (r4 == 0) goto L3e
            r3 = 1051372203(0x3eaaaaab, float:0.33333334)
            goto L3f
        L3e:
            r3 = 0
        L3f:
            r2.setOffset(r3)
            return
    }

    private static boolean assumeMaterial(android.content.Context r1) {
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()
            int r1 = r1.targetSdkVersion
            r0 = 21
            if (r1 < r0) goto L10
            int r1 = android.os.Build.VERSION.SDK_INT
            if (r1 < r0) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }

    private android.graphics.drawable.Drawable getThemeUpIndicator() {
            r5 = this;
            android.support.v4.app.ActionBarDrawerToggle$Delegate r0 = r5.mActivityImpl
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = r0.getThemeUpIndicator()
            return r0
        L9:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            r2 = 0
            if (r0 < r1) goto L31
            android.app.Activity r0 = r5.mActivity
            android.app.ActionBar r0 = r0.getActionBar()
            if (r0 == 0) goto L1d
            android.content.Context r0 = r0.getThemedContext()
            goto L1f
        L1d:
            android.app.Activity r0 = r5.mActivity
        L1f:
            r1 = 0
            int[] r3 = android.support.v4.app.ActionBarDrawerToggle.THEME_ATTRS
            r4 = 16843470(0x10102ce, float:2.369557E-38)
            android.content.res.TypedArray r0 = r0.obtainStyledAttributes(r1, r3, r4, r2)
            android.graphics.drawable.Drawable r1 = r0.getDrawable(r2)
            r0.recycle()
            return r1
        L31:
            android.app.Activity r0 = r5.mActivity
            int[] r1 = android.support.v4.app.ActionBarDrawerToggle.THEME_ATTRS
            android.content.res.TypedArray r0 = r0.obtainStyledAttributes(r1)
            android.graphics.drawable.Drawable r1 = r0.getDrawable(r2)
            r0.recycle()
            return r1
    }

    private void setActionBarDescription(int r5) {
            r4 = this;
            android.support.v4.app.ActionBarDrawerToggle$Delegate r0 = r4.mActivityImpl
            if (r0 == 0) goto L8
            r0.setActionBarDescription(r5)
            return
        L8:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L1a
            android.app.Activity r0 = r4.mActivity
            android.app.ActionBar r0 = r0.getActionBar()
            if (r0 == 0) goto L54
            r0.setHomeActionContentDescription(r5)
            goto L54
        L1a:
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r0 = r4.mSetIndicatorInfo
            if (r0 != 0) goto L27
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r0 = new android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo
            android.app.Activity r1 = r4.mActivity
            r0.<init>(r1)
            r4.mSetIndicatorInfo = r0
        L27:
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r0 = r4.mSetIndicatorInfo
            java.lang.reflect.Method r0 = r0.mSetHomeAsUpIndicator
            if (r0 == 0) goto L54
            android.app.Activity r0 = r4.mActivity     // Catch: java.lang.Exception -> L4c
            android.app.ActionBar r0 = r0.getActionBar()     // Catch: java.lang.Exception -> L4c
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r1 = r4.mSetIndicatorInfo     // Catch: java.lang.Exception -> L4c
            java.lang.reflect.Method r1 = r1.mSetHomeActionContentDescription     // Catch: java.lang.Exception -> L4c
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L4c
            r3 = 0
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L4c
            r2[r3] = r5     // Catch: java.lang.Exception -> L4c
            r1.invoke(r0, r2)     // Catch: java.lang.Exception -> L4c
            java.lang.CharSequence r5 = r0.getSubtitle()     // Catch: java.lang.Exception -> L4c
            r0.setSubtitle(r5)     // Catch: java.lang.Exception -> L4c
            goto L54
        L4c:
            r5 = move-exception
            java.lang.String r0 = "ActionBarDrawerToggle"
            java.lang.String r1 = "Couldn't set content description via JB-MR2 API"
            android.util.Log.w(r0, r1, r5)
        L54:
            return
    }

    private void setActionBarUpIndicator(android.graphics.drawable.Drawable r7, int r8) {
            r6 = this;
            android.support.v4.app.ActionBarDrawerToggle$Delegate r0 = r6.mActivityImpl
            if (r0 == 0) goto L8
            r0.setActionBarUpIndicator(r7, r8)
            return
        L8:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L1d
            android.app.Activity r0 = r6.mActivity
            android.app.ActionBar r0 = r0.getActionBar()
            if (r0 == 0) goto L6f
            r0.setHomeAsUpIndicator(r7)
            r0.setHomeActionContentDescription(r8)
            goto L6f
        L1d:
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r0 = r6.mSetIndicatorInfo
            if (r0 != 0) goto L2a
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r0 = new android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo
            android.app.Activity r1 = r6.mActivity
            r0.<init>(r1)
            r6.mSetIndicatorInfo = r0
        L2a:
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r0 = r6.mSetIndicatorInfo
            java.lang.reflect.Method r0 = r0.mSetHomeAsUpIndicator
            java.lang.String r1 = "ActionBarDrawerToggle"
            if (r0 == 0) goto L5c
            android.app.Activity r0 = r6.mActivity     // Catch: java.lang.Exception -> L55
            android.app.ActionBar r0 = r0.getActionBar()     // Catch: java.lang.Exception -> L55
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r2 = r6.mSetIndicatorInfo     // Catch: java.lang.Exception -> L55
            java.lang.reflect.Method r2 = r2.mSetHomeAsUpIndicator     // Catch: java.lang.Exception -> L55
            r3 = 1
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L55
            r5 = 0
            r4[r5] = r7     // Catch: java.lang.Exception -> L55
            r2.invoke(r0, r4)     // Catch: java.lang.Exception -> L55
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r7 = r6.mSetIndicatorInfo     // Catch: java.lang.Exception -> L55
            java.lang.reflect.Method r7 = r7.mSetHomeActionContentDescription     // Catch: java.lang.Exception -> L55
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L55
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> L55
            r2[r5] = r8     // Catch: java.lang.Exception -> L55
            r7.invoke(r0, r2)     // Catch: java.lang.Exception -> L55
            goto L6f
        L55:
            r7 = move-exception
            java.lang.String r8 = "Couldn't set home-as-up indicator via JB-MR2 API"
            android.util.Log.w(r1, r8, r7)
            goto L6f
        L5c:
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r8 = r6.mSetIndicatorInfo
            android.widget.ImageView r8 = r8.mUpIndicatorView
            if (r8 == 0) goto L6a
            android.support.v4.app.ActionBarDrawerToggle$SetIndicatorInfo r8 = r6.mSetIndicatorInfo
            android.widget.ImageView r8 = r8.mUpIndicatorView
            r8.setImageDrawable(r7)
            goto L6f
        L6a:
            java.lang.String r7 = "Couldn't set home-as-up indicator"
            android.util.Log.w(r1, r7)
        L6f:
            return
    }

    public boolean isDrawerIndicatorEnabled() {
            r1 = this;
            boolean r0 = r1.mDrawerIndicatorEnabled
            return r0
    }

    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            boolean r2 = r1.mHasCustomUpIndicator
            if (r2 != 0) goto La
            android.graphics.drawable.Drawable r2 = r1.getThemeUpIndicator()
            r1.mHomeAsUpIndicator = r2
        La:
            android.app.Activity r2 = r1.mActivity
            int r0 = r1.mDrawerImageResource
            android.graphics.drawable.Drawable r2 = android.support.v4.content.ContextCompat.getDrawable(r2, r0)
            r1.mDrawerImage = r2
            r1.syncState()
            return
    }

    @Override
    public void onDrawerClosed(android.view.View r2) {
            r1 = this;
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r2 = r1.mSlider
            r0 = 0
            r2.setPosition(r0)
            boolean r2 = r1.mDrawerIndicatorEnabled
            if (r2 == 0) goto Lf
            int r2 = r1.mOpenDrawerContentDescRes
            r1.setActionBarDescription(r2)
        Lf:
            return
    }

    @Override
    public void onDrawerOpened(android.view.View r2) {
            r1 = this;
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r2 = r1.mSlider
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.setPosition(r0)
            boolean r2 = r1.mDrawerIndicatorEnabled
            if (r2 == 0) goto L10
            int r2 = r1.mCloseDrawerContentDescRes
            r1.setActionBarDescription(r2)
        L10:
            return
    }

    @Override
    public void onDrawerSlide(android.view.View r4, float r5) {
            r3 = this;
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r4 = r3.mSlider
            float r4 = r4.getPosition()
            r0 = 1073741824(0x40000000, float:2.0)
            r1 = 1056964608(0x3f000000, float:0.5)
            int r2 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r2 <= 0) goto L1b
            r2 = 0
            float r5 = r5 - r1
            float r5 = java.lang.Math.max(r2, r5)
            float r5 = r5 * r0
            float r4 = java.lang.Math.max(r4, r5)
            goto L21
        L1b:
            float r5 = r5 * r0
            float r4 = java.lang.Math.min(r4, r5)
        L21:
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r5 = r3.mSlider
            r5.setPosition(r4)
            return
    }

    @Override
    public void onDrawerStateChanged(int r1) {
            r0 = this;
            return
    }

    public boolean onOptionsItemSelected(android.view.MenuItem r2) {
            r1 = this;
            if (r2 == 0) goto L27
            int r2 = r2.getItemId()
            r0 = 16908332(0x102002c, float:2.3877352E-38)
            if (r2 != r0) goto L27
            boolean r2 = r1.mDrawerIndicatorEnabled
            if (r2 == 0) goto L27
            android.support.v4.widget.DrawerLayout r2 = r1.mDrawerLayout
            r0 = 8388611(0x800003, float:1.1754948E-38)
            boolean r2 = r2.isDrawerVisible(r0)
            if (r2 == 0) goto L20
            android.support.v4.widget.DrawerLayout r2 = r1.mDrawerLayout
            r2.closeDrawer(r0)
            goto L25
        L20:
            android.support.v4.widget.DrawerLayout r2 = r1.mDrawerLayout
            r2.openDrawer(r0)
        L25:
            r2 = 1
            return r2
        L27:
            r2 = 0
            return r2
    }

    public void setDrawerIndicatorEnabled(boolean r4) {
            r3 = this;
            boolean r0 = r3.mDrawerIndicatorEnabled
            if (r4 == r0) goto L24
            if (r4 == 0) goto L1c
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r0 = r3.mSlider
            android.support.v4.widget.DrawerLayout r1 = r3.mDrawerLayout
            r2 = 8388611(0x800003, float:1.1754948E-38)
            boolean r1 = r1.isDrawerOpen(r2)
            if (r1 == 0) goto L16
            int r1 = r3.mCloseDrawerContentDescRes
            goto L18
        L16:
            int r1 = r3.mOpenDrawerContentDescRes
        L18:
            r3.setActionBarUpIndicator(r0, r1)
            goto L22
        L1c:
            android.graphics.drawable.Drawable r0 = r3.mHomeAsUpIndicator
            r1 = 0
            r3.setActionBarUpIndicator(r0, r1)
        L22:
            r3.mDrawerIndicatorEnabled = r4
        L24:
            return
    }

    public void setHomeAsUpIndicator(int r2) {
            r1 = this;
            if (r2 == 0) goto L9
            android.app.Activity r0 = r1.mActivity
            android.graphics.drawable.Drawable r2 = android.support.v4.content.ContextCompat.getDrawable(r0, r2)
            goto La
        L9:
            r2 = 0
        La:
            r1.setHomeAsUpIndicator(r2)
            return
    }

    public void setHomeAsUpIndicator(android.graphics.drawable.Drawable r2) {
            r1 = this;
            r0 = 0
            if (r2 != 0) goto Lc
            android.graphics.drawable.Drawable r2 = r1.getThemeUpIndicator()
            r1.mHomeAsUpIndicator = r2
            r1.mHasCustomUpIndicator = r0
            goto L11
        Lc:
            r1.mHomeAsUpIndicator = r2
            r2 = 1
            r1.mHasCustomUpIndicator = r2
        L11:
            boolean r2 = r1.mDrawerIndicatorEnabled
            if (r2 != 0) goto L1a
            android.graphics.drawable.Drawable r2 = r1.mHomeAsUpIndicator
            r1.setActionBarUpIndicator(r2, r0)
        L1a:
            return
    }

    public void syncState() {
            r3 = this;
            android.support.v4.widget.DrawerLayout r0 = r3.mDrawerLayout
            r1 = 8388611(0x800003, float:1.1754948E-38)
            boolean r0 = r0.isDrawerOpen(r1)
            if (r0 == 0) goto L13
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r0 = r3.mSlider
            r2 = 1065353216(0x3f800000, float:1.0)
            r0.setPosition(r2)
            goto L19
        L13:
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r0 = r3.mSlider
            r2 = 0
            r0.setPosition(r2)
        L19:
            boolean r0 = r3.mDrawerIndicatorEnabled
            if (r0 == 0) goto L2f
            android.support.v4.app.ActionBarDrawerToggle$SlideDrawable r0 = r3.mSlider
            android.support.v4.widget.DrawerLayout r2 = r3.mDrawerLayout
            boolean r1 = r2.isDrawerOpen(r1)
            if (r1 == 0) goto L2a
            int r1 = r3.mCloseDrawerContentDescRes
            goto L2c
        L2a:
            int r1 = r3.mOpenDrawerContentDescRes
        L2c:
            r3.setActionBarUpIndicator(r0, r1)
        L2f:
            return
    }
}
