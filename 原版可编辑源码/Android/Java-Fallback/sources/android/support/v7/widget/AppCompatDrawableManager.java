package android.support.v7.widget;

public final class AppCompatDrawableManager {
    private static final int[] COLORFILTER_COLOR_BACKGROUND_MULTIPLY = null;
    private static final int[] COLORFILTER_COLOR_CONTROL_ACTIVATED = null;
    private static final int[] COLORFILTER_TINT_COLOR_CONTROL_NORMAL = null;
    private static final android.support.v7.widget.AppCompatDrawableManager.ColorFilterLruCache COLOR_FILTER_CACHE = null;
    private static final boolean DEBUG = false;
    private static final android.graphics.PorterDuff.Mode DEFAULT_MODE = null;
    private static android.support.v7.widget.AppCompatDrawableManager INSTANCE = null;
    private static final java.lang.String PLATFORM_VD_CLAZZ = "android.graphics.drawable.VectorDrawable";
    private static final java.lang.String SKIP_DRAWABLE_TAG = "appcompat_skip_skip";
    private static final java.lang.String TAG = "AppCompatDrawableManag";
    private static final int[] TINT_CHECKABLE_BUTTON_LIST = null;
    private static final int[] TINT_COLOR_CONTROL_NORMAL = null;
    private static final int[] TINT_COLOR_CONTROL_STATE_LIST = null;
    private android.support.v4.util.ArrayMap<java.lang.String, android.support.v7.widget.AppCompatDrawableManager.InflateDelegate> mDelegates;
    private final java.util.WeakHashMap<android.content.Context, android.support.v4.util.LongSparseArray<java.lang.ref.WeakReference<android.graphics.drawable.Drawable.ConstantState>>> mDrawableCaches;
    private boolean mHasCheckedVectorDrawableSetup;
    private android.support.v4.util.SparseArrayCompat<java.lang.String> mKnownDrawableIdTags;
    private java.util.WeakHashMap<android.content.Context, android.support.v4.util.SparseArrayCompat<android.content.res.ColorStateList>> mTintLists;
    private android.util.TypedValue mTypedValue;

    static class AsldcInflateDelegate implements android.support.v7.widget.AppCompatDrawableManager.InflateDelegate {
        AsldcInflateDelegate() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public android.graphics.drawable.Drawable createFromXmlInner(android.content.Context r2, org.xmlpull.v1.XmlPullParser r3, android.util.AttributeSet r4, android.content.res.Resources.Theme r5) {
                r1 = this;
                android.content.res.Resources r0 = r2.getResources()     // Catch: java.lang.Exception -> L9
                android.support.v7.graphics.drawable.AnimatedStateListDrawableCompat r2 = android.support.v7.graphics.drawable.AnimatedStateListDrawableCompat.createFromXmlInner(r2, r0, r3, r4, r5)     // Catch: java.lang.Exception -> L9
                return r2
            L9:
                r2 = move-exception
                java.lang.String r3 = "AsldcInflateDelegate"
                java.lang.String r4 = "Exception while inflating <animated-selector>"
                android.util.Log.e(r3, r4, r2)
                r2 = 0
                return r2
        }
    }

    private static class AvdcInflateDelegate implements android.support.v7.widget.AppCompatDrawableManager.InflateDelegate {
        AvdcInflateDelegate() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public android.graphics.drawable.Drawable createFromXmlInner(android.content.Context r2, org.xmlpull.v1.XmlPullParser r3, android.util.AttributeSet r4, android.content.res.Resources.Theme r5) {
                r1 = this;
                android.content.res.Resources r0 = r2.getResources()     // Catch: java.lang.Exception -> L9
                android.support.graphics.drawable.AnimatedVectorDrawableCompat r2 = android.support.graphics.drawable.AnimatedVectorDrawableCompat.createFromXmlInner(r2, r0, r3, r4, r5)     // Catch: java.lang.Exception -> L9
                return r2
            L9:
                r2 = move-exception
                java.lang.String r3 = "AvdcInflateDelegate"
                java.lang.String r4 = "Exception while inflating <animated-vector>"
                android.util.Log.e(r3, r4, r2)
                r2 = 0
                return r2
        }
    }

    private static class ColorFilterLruCache extends android.support.v4.util.LruCache<java.lang.Integer, android.graphics.PorterDuffColorFilter> {
        public ColorFilterLruCache(int r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private static int generateCacheKey(int r1, android.graphics.PorterDuff.Mode r2) {
                r0 = 31
                int r1 = r1 + r0
                int r1 = r1 * r0
                int r2 = r2.hashCode()
                int r1 = r1 + r2
                return r1
        }

        android.graphics.PorterDuffColorFilter get(int r1, android.graphics.PorterDuff.Mode r2) {
                r0 = this;
                int r1 = generateCacheKey(r1, r2)
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.lang.Object r1 = r0.get(r1)
                android.graphics.PorterDuffColorFilter r1 = (android.graphics.PorterDuffColorFilter) r1
                return r1
        }

        android.graphics.PorterDuffColorFilter put(int r1, android.graphics.PorterDuff.Mode r2, android.graphics.PorterDuffColorFilter r3) {
                r0 = this;
                int r1 = generateCacheKey(r1, r2)
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.lang.Object r1 = r0.put(r1, r3)
                android.graphics.PorterDuffColorFilter r1 = (android.graphics.PorterDuffColorFilter) r1
                return r1
        }
    }

    private interface InflateDelegate {
        android.graphics.drawable.Drawable createFromXmlInner(android.content.Context r1, org.xmlpull.v1.XmlPullParser r2, android.util.AttributeSet r3, android.content.res.Resources.Theme r4);
    }

    private static class VdcInflateDelegate implements android.support.v7.widget.AppCompatDrawableManager.InflateDelegate {
        VdcInflateDelegate() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public android.graphics.drawable.Drawable createFromXmlInner(android.content.Context r1, org.xmlpull.v1.XmlPullParser r2, android.util.AttributeSet r3, android.content.res.Resources.Theme r4) {
                r0 = this;
                android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> L9
                android.support.graphics.drawable.VectorDrawableCompat r1 = android.support.graphics.drawable.VectorDrawableCompat.createFromXmlInner(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L9
                return r1
            L9:
                r1 = move-exception
                java.lang.String r2 = "VdcInflateDelegate"
                java.lang.String r3 = "Exception while inflating <vector>"
                android.util.Log.e(r2, r3, r1)
                r1 = 0
                return r1
        }
    }

    static {
            android.graphics.PorterDuff$Mode r0 = android.graphics.PorterDuff.Mode.SRC_IN
            android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE = r0
            android.support.v7.widget.AppCompatDrawableManager$ColorFilterLruCache r0 = new android.support.v7.widget.AppCompatDrawableManager$ColorFilterLruCache
            r1 = 6
            r0.<init>(r1)
            android.support.v7.widget.AppCompatDrawableManager.COLOR_FILTER_CACHE = r0
            r0 = 3
            int[] r2 = new int[r0]
            int r3 = android.support.v7.appcompat.R.drawable.abc_textfield_search_default_mtrl_alpha
            r4 = 0
            r2[r4] = r3
            int r3 = android.support.v7.appcompat.R.drawable.abc_textfield_default_mtrl_alpha
            r5 = 1
            r2[r5] = r3
            int r3 = android.support.v7.appcompat.R.drawable.abc_ab_share_pack_mtrl_alpha
            r6 = 2
            r2[r6] = r3
            android.support.v7.widget.AppCompatDrawableManager.COLORFILTER_TINT_COLOR_CONTROL_NORMAL = r2
            r2 = 7
            int[] r3 = new int[r2]
            int r7 = android.support.v7.appcompat.R.drawable.abc_ic_commit_search_api_mtrl_alpha
            r3[r4] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_seekbar_tick_mark_material
            r3[r5] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_ic_menu_share_mtrl_alpha
            r3[r6] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_ic_menu_copy_mtrl_am_alpha
            r3[r0] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_ic_menu_cut_mtrl_alpha
            r8 = 4
            r3[r8] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_ic_menu_selectall_mtrl_alpha
            r9 = 5
            r3[r9] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_ic_menu_paste_mtrl_am_alpha
            r3[r1] = r7
            android.support.v7.widget.AppCompatDrawableManager.TINT_COLOR_CONTROL_NORMAL = r3
            r3 = 10
            int[] r3 = new int[r3]
            int r7 = android.support.v7.appcompat.R.drawable.abc_textfield_activated_mtrl_alpha
            r3[r4] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_textfield_search_activated_mtrl_alpha
            r3[r5] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_cab_background_top_mtrl_alpha
            r3[r6] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_text_cursor_material
            r3[r0] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_text_select_handle_left_mtrl_dark
            r3[r8] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_text_select_handle_middle_mtrl_dark
            r3[r9] = r7
            int r7 = android.support.v7.appcompat.R.drawable.abc_text_select_handle_right_mtrl_dark
            r3[r1] = r7
            int r1 = android.support.v7.appcompat.R.drawable.abc_text_select_handle_left_mtrl_light
            r3[r2] = r1
            int r1 = android.support.v7.appcompat.R.drawable.abc_text_select_handle_middle_mtrl_light
            r2 = 8
            r3[r2] = r1
            int r1 = android.support.v7.appcompat.R.drawable.abc_text_select_handle_right_mtrl_light
            r2 = 9
            r3[r2] = r1
            android.support.v7.widget.AppCompatDrawableManager.COLORFILTER_COLOR_CONTROL_ACTIVATED = r3
            int[] r0 = new int[r0]
            int r1 = android.support.v7.appcompat.R.drawable.abc_popup_background_mtrl_mult
            r0[r4] = r1
            int r1 = android.support.v7.appcompat.R.drawable.abc_cab_background_internal_bg
            r0[r5] = r1
            int r1 = android.support.v7.appcompat.R.drawable.abc_menu_hardkey_panel_mtrl_mult
            r0[r6] = r1
            android.support.v7.widget.AppCompatDrawableManager.COLORFILTER_COLOR_BACKGROUND_MULTIPLY = r0
            int[] r0 = new int[r6]
            int r1 = android.support.v7.appcompat.R.drawable.abc_tab_indicator_material
            r0[r4] = r1
            int r1 = android.support.v7.appcompat.R.drawable.abc_textfield_search_material
            r0[r5] = r1
            android.support.v7.widget.AppCompatDrawableManager.TINT_COLOR_CONTROL_STATE_LIST = r0
            int[] r0 = new int[r6]
            int r1 = android.support.v7.appcompat.R.drawable.abc_btn_check_material
            r0[r4] = r1
            int r1 = android.support.v7.appcompat.R.drawable.abc_btn_radio_material
            r0[r5] = r1
            android.support.v7.widget.AppCompatDrawableManager.TINT_CHECKABLE_BUTTON_LIST = r0
            return
    }

    public AppCompatDrawableManager() {
            r2 = this;
            r2.<init>()
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r1 = 0
            r0.<init>(r1)
            r2.mDrawableCaches = r0
            return
    }

    private void addDelegate(java.lang.String r2, android.support.v7.widget.AppCompatDrawableManager.InflateDelegate r3) {
            r1 = this;
            android.support.v4.util.ArrayMap<java.lang.String, android.support.v7.widget.AppCompatDrawableManager$InflateDelegate> r0 = r1.mDelegates
            if (r0 != 0) goto Lb
            android.support.v4.util.ArrayMap r0 = new android.support.v4.util.ArrayMap
            r0.<init>()
            r1.mDelegates = r0
        Lb:
            android.support.v4.util.ArrayMap<java.lang.String, android.support.v7.widget.AppCompatDrawableManager$InflateDelegate> r0 = r1.mDelegates
            r0.put(r2, r3)
            return
    }

    private synchronized boolean addDrawableToCache(android.content.Context r3, long r4, android.graphics.drawable.Drawable r6) {
            r2 = this;
            monitor-enter(r2)
            android.graphics.drawable.Drawable$ConstantState r6 = r6.getConstantState()     // Catch: java.lang.Throwable -> L29
            if (r6 == 0) goto L26
            java.util.WeakHashMap<android.content.Context, android.support.v4.util.LongSparseArray<java.lang.ref.WeakReference<android.graphics.drawable.Drawable$ConstantState>>> r0 = r2.mDrawableCaches     // Catch: java.lang.Throwable -> L29
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L29
            android.support.v4.util.LongSparseArray r0 = (android.support.v4.util.LongSparseArray) r0     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto L1b
            android.support.v4.util.LongSparseArray r0 = new android.support.v4.util.LongSparseArray     // Catch: java.lang.Throwable -> L29
            r0.<init>()     // Catch: java.lang.Throwable -> L29
            java.util.WeakHashMap<android.content.Context, android.support.v4.util.LongSparseArray<java.lang.ref.WeakReference<android.graphics.drawable.Drawable$ConstantState>>> r1 = r2.mDrawableCaches     // Catch: java.lang.Throwable -> L29
            r1.put(r3, r0)     // Catch: java.lang.Throwable -> L29
        L1b:
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L29
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L29
            r0.put(r4, r3)     // Catch: java.lang.Throwable -> L29
            r3 = 1
            monitor-exit(r2)
            return r3
        L26:
            r3 = 0
            monitor-exit(r2)
            return r3
        L29:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private void addTintListToCache(android.content.Context r3, int r4, android.content.res.ColorStateList r5) {
            r2 = this;
            java.util.WeakHashMap<android.content.Context, android.support.v4.util.SparseArrayCompat<android.content.res.ColorStateList>> r0 = r2.mTintLists
            if (r0 != 0) goto Lb
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            r2.mTintLists = r0
        Lb:
            java.util.WeakHashMap<android.content.Context, android.support.v4.util.SparseArrayCompat<android.content.res.ColorStateList>> r0 = r2.mTintLists
            java.lang.Object r0 = r0.get(r3)
            android.support.v4.util.SparseArrayCompat r0 = (android.support.v4.util.SparseArrayCompat) r0
            if (r0 != 0) goto L1f
            android.support.v4.util.SparseArrayCompat r0 = new android.support.v4.util.SparseArrayCompat
            r0.<init>()
            java.util.WeakHashMap<android.content.Context, android.support.v4.util.SparseArrayCompat<android.content.res.ColorStateList>> r1 = r2.mTintLists
            r1.put(r3, r0)
        L1f:
            r0.append(r4, r5)
            return
    }

    private static boolean arrayContains(int[] r4, int r5) {
            int r0 = r4.length
            r1 = 0
            r2 = r1
        L3:
            if (r2 >= r0) goto Le
            r3 = r4[r2]
            if (r3 != r5) goto Lb
            r4 = 1
            return r4
        Lb:
            int r2 = r2 + 1
            goto L3
        Le:
            return r1
    }

    private void checkVectorDrawableSetup(android.content.Context r2) {
            r1 = this;
            boolean r0 = r1.mHasCheckedVectorDrawableSetup
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.mHasCheckedVectorDrawableSetup = r0
            int r0 = android.support.v7.appcompat.R.drawable.abc_vector_test
            android.graphics.drawable.Drawable r2 = r1.getDrawable(r2, r0)
            if (r2 == 0) goto L17
            boolean r2 = isVectorDrawable(r2)
            if (r2 == 0) goto L17
            return
        L17:
            r2 = 0
            r1.mHasCheckedVectorDrawableSetup = r2
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "This app has been built with an incorrect configuration. Please configure your build for VectorDrawableCompat."
            r2.<init>(r0)
            throw r2
    }

    private android.content.res.ColorStateList createBorderlessButtonColorStateList(android.content.Context r2) {
            r1 = this;
            r0 = 0
            android.content.res.ColorStateList r2 = r1.createButtonColorStateList(r2, r0)
            return r2
    }

    private android.content.res.ColorStateList createButtonColorStateList(android.content.Context r6, int r7) {
            r5 = this;
            r0 = 4
            int[][] r1 = new int[r0][]
            int[] r0 = new int[r0]
            int r2 = android.support.v7.appcompat.R.attr.colorControlHighlight
            int r2 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r6, r2)
            int r3 = android.support.v7.appcompat.R.attr.colorButtonNormal
            int r6 = android.support.v7.widget.ThemeUtils.getDisabledThemeAttrColor(r6, r3)
            int[] r3 = android.support.v7.widget.ThemeUtils.DISABLED_STATE_SET
            r4 = 0
            r1[r4] = r3
            r0[r4] = r6
            int[] r6 = android.support.v7.widget.ThemeUtils.PRESSED_STATE_SET
            r3 = 1
            r1[r3] = r6
            int r6 = android.support.v4.graphics.ColorUtils.compositeColors(r2, r7)
            r0[r3] = r6
            int[] r6 = android.support.v7.widget.ThemeUtils.FOCUSED_STATE_SET
            r3 = 2
            r1[r3] = r6
            int r6 = android.support.v4.graphics.ColorUtils.compositeColors(r2, r7)
            r0[r3] = r6
            int[] r6 = android.support.v7.widget.ThemeUtils.EMPTY_STATE_SET
            r2 = 3
            r1[r2] = r6
            r0[r2] = r7
            android.content.res.ColorStateList r6 = new android.content.res.ColorStateList
            r6.<init>(r1, r0)
            return r6
    }

    private static long createCacheKey(android.util.TypedValue r4) {
            int r0 = r4.assetCookie
            long r0 = (long) r0
            r2 = 32
            long r0 = r0 << r2
            int r4 = r4.data
            long r2 = (long) r4
            long r0 = r0 | r2
            return r0
    }

    private android.content.res.ColorStateList createColoredButtonColorStateList(android.content.Context r2) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.colorAccent
            int r0 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r2, r0)
            android.content.res.ColorStateList r2 = r1.createButtonColorStateList(r2, r0)
            return r2
    }

    private android.content.res.ColorStateList createDefaultButtonColorStateList(android.content.Context r2) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.colorButtonNormal
            int r0 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r2, r0)
            android.content.res.ColorStateList r2 = r1.createButtonColorStateList(r2, r0)
            return r2
    }

    private android.graphics.drawable.Drawable createDrawableIfNeeded(android.content.Context r8, int r9) {
            r7 = this;
            android.util.TypedValue r0 = r7.mTypedValue
            if (r0 != 0) goto Lb
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            r7.mTypedValue = r0
        Lb:
            android.util.TypedValue r0 = r7.mTypedValue
            android.content.res.Resources r1 = r8.getResources()
            r2 = 1
            r1.getValue(r9, r0, r2)
            long r3 = createCacheKey(r0)
            android.graphics.drawable.Drawable r1 = r7.getCachedDrawable(r8, r3)
            if (r1 == 0) goto L20
            return r1
        L20:
            int r5 = android.support.v7.appcompat.R.drawable.abc_cab_background_top_material
            if (r9 != r5) goto L3d
            android.graphics.drawable.LayerDrawable r1 = new android.graphics.drawable.LayerDrawable
            r9 = 2
            android.graphics.drawable.Drawable[] r9 = new android.graphics.drawable.Drawable[r9]
            r5 = 0
            int r6 = android.support.v7.appcompat.R.drawable.abc_cab_background_internal_bg
            android.graphics.drawable.Drawable r6 = r7.getDrawable(r8, r6)
            r9[r5] = r6
            int r5 = android.support.v7.appcompat.R.drawable.abc_cab_background_top_mtrl_alpha
            android.graphics.drawable.Drawable r5 = r7.getDrawable(r8, r5)
            r9[r2] = r5
            r1.<init>(r9)
        L3d:
            if (r1 == 0) goto L47
            int r9 = r0.changingConfigurations
            r1.setChangingConfigurations(r9)
            r7.addDrawableToCache(r8, r3, r1)
        L47:
            return r1
    }

    private android.content.res.ColorStateList createSwitchThumbColorStateList(android.content.Context r8) {
            r7 = this;
            r0 = 3
            int[][] r1 = new int[r0][]
            int[] r0 = new int[r0]
            int r2 = android.support.v7.appcompat.R.attr.colorSwitchThumbNormal
            android.content.res.ColorStateList r2 = android.support.v7.widget.ThemeUtils.getThemeAttrColorStateList(r8, r2)
            r3 = 2
            r4 = 1
            r5 = 0
            if (r2 == 0) goto L39
            boolean r6 = r2.isStateful()
            if (r6 == 0) goto L39
            int[] r6 = android.support.v7.widget.ThemeUtils.DISABLED_STATE_SET
            r1[r5] = r6
            r6 = r1[r5]
            int r6 = r2.getColorForState(r6, r5)
            r0[r5] = r6
            int[] r5 = android.support.v7.widget.ThemeUtils.CHECKED_STATE_SET
            r1[r4] = r5
            int r5 = android.support.v7.appcompat.R.attr.colorControlActivated
            int r8 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r8, r5)
            r0[r4] = r8
            int[] r8 = android.support.v7.widget.ThemeUtils.EMPTY_STATE_SET
            r1[r3] = r8
            int r8 = r2.getDefaultColor()
            r0[r3] = r8
            goto L5d
        L39:
            int[] r2 = android.support.v7.widget.ThemeUtils.DISABLED_STATE_SET
            r1[r5] = r2
            int r2 = android.support.v7.appcompat.R.attr.colorSwitchThumbNormal
            int r2 = android.support.v7.widget.ThemeUtils.getDisabledThemeAttrColor(r8, r2)
            r0[r5] = r2
            int[] r2 = android.support.v7.widget.ThemeUtils.CHECKED_STATE_SET
            r1[r4] = r2
            int r2 = android.support.v7.appcompat.R.attr.colorControlActivated
            int r2 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r8, r2)
            r0[r4] = r2
            int[] r2 = android.support.v7.widget.ThemeUtils.EMPTY_STATE_SET
            r1[r3] = r2
            int r2 = android.support.v7.appcompat.R.attr.colorSwitchThumbNormal
            int r8 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r8, r2)
            r0[r3] = r8
        L5d:
            android.content.res.ColorStateList r8 = new android.content.res.ColorStateList
            r8.<init>(r1, r0)
            return r8
    }

    private static android.graphics.PorterDuffColorFilter createTintFilter(android.content.res.ColorStateList r1, android.graphics.PorterDuff.Mode r2, int[] r3) {
            if (r1 == 0) goto Lf
            if (r2 != 0) goto L5
            goto Lf
        L5:
            r0 = 0
            int r1 = r1.getColorForState(r3, r0)
            android.graphics.PorterDuffColorFilter r1 = getPorterDuffColorFilter(r1, r2)
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static synchronized android.support.v7.widget.AppCompatDrawableManager get() {
            java.lang.Class<android.support.v7.widget.AppCompatDrawableManager> r0 = android.support.v7.widget.AppCompatDrawableManager.class
            monitor-enter(r0)
            android.support.v7.widget.AppCompatDrawableManager r1 = android.support.v7.widget.AppCompatDrawableManager.INSTANCE     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L11
            android.support.v7.widget.AppCompatDrawableManager r1 = new android.support.v7.widget.AppCompatDrawableManager     // Catch: java.lang.Throwable -> L15
            r1.<init>()     // Catch: java.lang.Throwable -> L15
            android.support.v7.widget.AppCompatDrawableManager.INSTANCE = r1     // Catch: java.lang.Throwable -> L15
            installDefaultInflateDelegates(r1)     // Catch: java.lang.Throwable -> L15
        L11:
            android.support.v7.widget.AppCompatDrawableManager r1 = android.support.v7.widget.AppCompatDrawableManager.INSTANCE     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)
            return r1
        L15:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private synchronized android.graphics.drawable.Drawable getCachedDrawable(android.content.Context r4, long r5) {
            r3 = this;
            monitor-enter(r3)
            java.util.WeakHashMap<android.content.Context, android.support.v4.util.LongSparseArray<java.lang.ref.WeakReference<android.graphics.drawable.Drawable$ConstantState>>> r0 = r3.mDrawableCaches     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L2d
            android.support.v4.util.LongSparseArray r0 = (android.support.v4.util.LongSparseArray) r0     // Catch: java.lang.Throwable -> L2d
            r1 = 0
            if (r0 != 0) goto Le
            monitor-exit(r3)
            return r1
        Le:
            java.lang.Object r2 = r0.get(r5)     // Catch: java.lang.Throwable -> L2d
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L2d
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L2d
            android.graphics.drawable.Drawable$ConstantState r2 = (android.graphics.drawable.Drawable.ConstantState) r2     // Catch: java.lang.Throwable -> L2d
            if (r2 == 0) goto L28
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Throwable -> L2d
            android.graphics.drawable.Drawable r4 = r2.newDrawable(r4)     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r3)
            return r4
        L28:
            r0.delete(r5)     // Catch: java.lang.Throwable -> L2d
        L2b:
            monitor-exit(r3)
            return r1
        L2d:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public static synchronized android.graphics.PorterDuffColorFilter getPorterDuffColorFilter(int r3, android.graphics.PorterDuff.Mode r4) {
            java.lang.Class<android.support.v7.widget.AppCompatDrawableManager> r0 = android.support.v7.widget.AppCompatDrawableManager.class
            monitor-enter(r0)
            android.support.v7.widget.AppCompatDrawableManager$ColorFilterLruCache r1 = android.support.v7.widget.AppCompatDrawableManager.COLOR_FILTER_CACHE     // Catch: java.lang.Throwable -> L17
            android.graphics.PorterDuffColorFilter r1 = r1.get(r3, r4)     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L15
            android.graphics.PorterDuffColorFilter r1 = new android.graphics.PorterDuffColorFilter     // Catch: java.lang.Throwable -> L17
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L17
            android.support.v7.widget.AppCompatDrawableManager$ColorFilterLruCache r2 = android.support.v7.widget.AppCompatDrawableManager.COLOR_FILTER_CACHE     // Catch: java.lang.Throwable -> L17
            r2.put(r3, r4, r1)     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r0)
            return r1
        L17:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private android.content.res.ColorStateList getTintListFromCache(android.content.Context r3, int r4) {
            r2 = this;
            java.util.WeakHashMap<android.content.Context, android.support.v4.util.SparseArrayCompat<android.content.res.ColorStateList>> r0 = r2.mTintLists
            r1 = 0
            if (r0 == 0) goto L14
            java.lang.Object r3 = r0.get(r3)
            android.support.v4.util.SparseArrayCompat r3 = (android.support.v4.util.SparseArrayCompat) r3
            if (r3 == 0) goto L14
            java.lang.Object r3 = r3.get(r4)
            r1 = r3
            android.content.res.ColorStateList r1 = (android.content.res.ColorStateList) r1
        L14:
            return r1
    }

    static android.graphics.PorterDuff.Mode getTintMode(int r1) {
            int r0 = android.support.v7.appcompat.R.drawable.abc_switch_thumb_material
            if (r1 != r0) goto L7
            android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.MULTIPLY
            goto L8
        L7:
            r1 = 0
        L8:
            return r1
    }

    private static void installDefaultInflateDelegates(android.support.v7.widget.AppCompatDrawableManager r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 >= r1) goto L24
            android.support.v7.widget.AppCompatDrawableManager$VdcInflateDelegate r0 = new android.support.v7.widget.AppCompatDrawableManager$VdcInflateDelegate
            r0.<init>()
            java.lang.String r1 = "vector"
            r2.addDelegate(r1, r0)
            android.support.v7.widget.AppCompatDrawableManager$AvdcInflateDelegate r0 = new android.support.v7.widget.AppCompatDrawableManager$AvdcInflateDelegate
            r0.<init>()
            java.lang.String r1 = "animated-vector"
            r2.addDelegate(r1, r0)
            android.support.v7.widget.AppCompatDrawableManager$AsldcInflateDelegate r0 = new android.support.v7.widget.AppCompatDrawableManager$AsldcInflateDelegate
            r0.<init>()
            java.lang.String r1 = "animated-selector"
            r2.addDelegate(r1, r0)
        L24:
            return
    }

    private static boolean isVectorDrawable(android.graphics.drawable.Drawable r1) {
            boolean r0 = r1 instanceof android.support.graphics.drawable.VectorDrawableCompat
            if (r0 != 0) goto L17
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            java.lang.String r0 = "android.graphics.drawable.VectorDrawable"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L15
            goto L17
        L15:
            r1 = 0
            goto L18
        L17:
            r1 = 1
        L18:
            return r1
    }

    private android.graphics.drawable.Drawable loadDrawableFromDelegates(android.content.Context r11, int r12) {
            r10 = this;
            android.support.v4.util.ArrayMap<java.lang.String, android.support.v7.widget.AppCompatDrawableManager$InflateDelegate> r0 = r10.mDelegates
            r1 = 0
            if (r0 == 0) goto Lb4
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Lb4
            android.support.v4.util.SparseArrayCompat<java.lang.String> r0 = r10.mKnownDrawableIdTags
            java.lang.String r2 = "appcompat_skip_skip"
            if (r0 == 0) goto L28
            java.lang.Object r0 = r0.get(r12)
            java.lang.String r0 = (java.lang.String) r0
            boolean r3 = r2.equals(r0)
            if (r3 != 0) goto L27
            if (r0 == 0) goto L2f
            android.support.v4.util.ArrayMap<java.lang.String, android.support.v7.widget.AppCompatDrawableManager$InflateDelegate> r3 = r10.mDelegates
            java.lang.Object r0 = r3.get(r0)
            if (r0 != 0) goto L2f
        L27:
            return r1
        L28:
            android.support.v4.util.SparseArrayCompat r0 = new android.support.v4.util.SparseArrayCompat
            r0.<init>()
            r10.mKnownDrawableIdTags = r0
        L2f:
            android.util.TypedValue r0 = r10.mTypedValue
            if (r0 != 0) goto L3a
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            r10.mTypedValue = r0
        L3a:
            android.util.TypedValue r0 = r10.mTypedValue
            android.content.res.Resources r1 = r11.getResources()
            r3 = 1
            r1.getValue(r12, r0, r3)
            long r4 = createCacheKey(r0)
            android.graphics.drawable.Drawable r6 = r10.getCachedDrawable(r11, r4)
            if (r6 == 0) goto L4f
            return r6
        L4f:
            java.lang.CharSequence r7 = r0.string
            if (r7 == 0) goto Lac
            java.lang.CharSequence r7 = r0.string
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = ".xml"
            boolean r7 = r7.endsWith(r8)
            if (r7 == 0) goto Lac
            android.content.res.XmlResourceParser r1 = r1.getXml(r12)     // Catch: java.lang.Exception -> La4
            android.util.AttributeSet r7 = android.util.Xml.asAttributeSet(r1)     // Catch: java.lang.Exception -> La4
        L69:
            int r8 = r1.next()     // Catch: java.lang.Exception -> La4
            r9 = 2
            if (r8 == r9) goto L73
            if (r8 == r3) goto L73
            goto L69
        L73:
            if (r8 != r9) goto L9c
            java.lang.String r3 = r1.getName()     // Catch: java.lang.Exception -> La4
            android.support.v4.util.SparseArrayCompat<java.lang.String> r8 = r10.mKnownDrawableIdTags     // Catch: java.lang.Exception -> La4
            r8.append(r12, r3)     // Catch: java.lang.Exception -> La4
            android.support.v4.util.ArrayMap<java.lang.String, android.support.v7.widget.AppCompatDrawableManager$InflateDelegate> r8 = r10.mDelegates     // Catch: java.lang.Exception -> La4
            java.lang.Object r3 = r8.get(r3)     // Catch: java.lang.Exception -> La4
            android.support.v7.widget.AppCompatDrawableManager$InflateDelegate r3 = (android.support.v7.widget.AppCompatDrawableManager.InflateDelegate) r3     // Catch: java.lang.Exception -> La4
            if (r3 == 0) goto L91
            android.content.res.Resources$Theme r8 = r11.getTheme()     // Catch: java.lang.Exception -> La4
            android.graphics.drawable.Drawable r1 = r3.createFromXmlInner(r11, r1, r7, r8)     // Catch: java.lang.Exception -> La4
            r6 = r1
        L91:
            if (r6 == 0) goto Lac
            int r0 = r0.changingConfigurations     // Catch: java.lang.Exception -> La4
            r6.setChangingConfigurations(r0)     // Catch: java.lang.Exception -> La4
            r10.addDrawableToCache(r11, r4, r6)     // Catch: java.lang.Exception -> La4
            goto Lac
        L9c:
            org.xmlpull.v1.XmlPullParserException r11 = new org.xmlpull.v1.XmlPullParserException     // Catch: java.lang.Exception -> La4
            java.lang.String r0 = "No start tag found"
            r11.<init>(r0)     // Catch: java.lang.Exception -> La4
            throw r11     // Catch: java.lang.Exception -> La4
        La4:
            r11 = move-exception
            java.lang.String r0 = "AppCompatDrawableManag"
            java.lang.String r1 = "Exception while inflating drawable"
            android.util.Log.e(r0, r1, r11)
        Lac:
            if (r6 != 0) goto Lb3
            android.support.v4.util.SparseArrayCompat<java.lang.String> r11 = r10.mKnownDrawableIdTags
            r11.append(r12, r2)
        Lb3:
            return r6
        Lb4:
            return r1
    }

    private void removeDelegate(java.lang.String r2, android.support.v7.widget.AppCompatDrawableManager.InflateDelegate r3) {
            r1 = this;
            android.support.v4.util.ArrayMap<java.lang.String, android.support.v7.widget.AppCompatDrawableManager$InflateDelegate> r0 = r1.mDelegates
            if (r0 == 0) goto Lf
            java.lang.Object r0 = r0.get(r2)
            if (r0 != r3) goto Lf
            android.support.v4.util.ArrayMap<java.lang.String, android.support.v7.widget.AppCompatDrawableManager$InflateDelegate> r3 = r1.mDelegates
            r3.remove(r2)
        Lf:
            return
    }

    private static void setPorterDuffColorFilter(android.graphics.drawable.Drawable r1, int r2, android.graphics.PorterDuff.Mode r3) {
            boolean r0 = android.support.v7.widget.DrawableUtils.canSafelyMutateDrawable(r1)
            if (r0 == 0) goto La
            android.graphics.drawable.Drawable r1 = r1.mutate()
        La:
            if (r3 != 0) goto Le
            android.graphics.PorterDuff$Mode r3 = android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE
        Le:
            android.graphics.PorterDuffColorFilter r2 = getPorterDuffColorFilter(r2, r3)
            r1.setColorFilter(r2)
            return
    }

    private android.graphics.drawable.Drawable tintDrawable(android.content.Context r5, int r6, boolean r7, android.graphics.drawable.Drawable r8) {
            r4 = this;
            android.content.res.ColorStateList r0 = r4.getTintList(r5, r6)
            if (r0 == 0) goto L22
            boolean r5 = android.support.v7.widget.DrawableUtils.canSafelyMutateDrawable(r8)
            if (r5 == 0) goto L10
            android.graphics.drawable.Drawable r8 = r8.mutate()
        L10:
            android.graphics.drawable.Drawable r8 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r8)
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r8, r0)
            android.graphics.PorterDuff$Mode r5 = getTintMode(r6)
            if (r5 == 0) goto La6
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r8, r5)
            goto La6
        L22:
            int r0 = android.support.v7.appcompat.R.drawable.abc_seekbar_track_material
            r1 = 16908301(0x102000d, float:2.3877265E-38)
            r2 = 16908303(0x102000f, float:2.387727E-38)
            r3 = 16908288(0x1020000, float:2.387723E-38)
            if (r6 != r0) goto L5f
            r6 = r8
            android.graphics.drawable.LayerDrawable r6 = (android.graphics.drawable.LayerDrawable) r6
            android.graphics.drawable.Drawable r7 = r6.findDrawableByLayerId(r3)
            int r0 = android.support.v7.appcompat.R.attr.colorControlNormal
            int r0 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r5, r0)
            android.graphics.PorterDuff$Mode r3 = android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE
            setPorterDuffColorFilter(r7, r0, r3)
            android.graphics.drawable.Drawable r7 = r6.findDrawableByLayerId(r2)
            int r0 = android.support.v7.appcompat.R.attr.colorControlNormal
            int r0 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r5, r0)
            android.graphics.PorterDuff$Mode r2 = android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE
            setPorterDuffColorFilter(r7, r0, r2)
            android.graphics.drawable.Drawable r6 = r6.findDrawableByLayerId(r1)
            int r7 = android.support.v7.appcompat.R.attr.colorControlActivated
            int r5 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r5, r7)
            android.graphics.PorterDuff$Mode r7 = android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE
            setPorterDuffColorFilter(r6, r5, r7)
            goto La6
        L5f:
            int r0 = android.support.v7.appcompat.R.drawable.abc_ratingbar_material
            if (r6 == r0) goto L76
            int r0 = android.support.v7.appcompat.R.drawable.abc_ratingbar_indicator_material
            if (r6 == r0) goto L76
            int r0 = android.support.v7.appcompat.R.drawable.abc_ratingbar_small_material
            if (r6 != r0) goto L6c
            goto L76
        L6c:
            boolean r5 = tintDrawableUsingColorFilter(r5, r6, r8)
            if (r5 != 0) goto La6
            if (r7 == 0) goto La6
            r8 = 0
            goto La6
        L76:
            r6 = r8
            android.graphics.drawable.LayerDrawable r6 = (android.graphics.drawable.LayerDrawable) r6
            android.graphics.drawable.Drawable r7 = r6.findDrawableByLayerId(r3)
            int r0 = android.support.v7.appcompat.R.attr.colorControlNormal
            int r0 = android.support.v7.widget.ThemeUtils.getDisabledThemeAttrColor(r5, r0)
            android.graphics.PorterDuff$Mode r3 = android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE
            setPorterDuffColorFilter(r7, r0, r3)
            android.graphics.drawable.Drawable r7 = r6.findDrawableByLayerId(r2)
            int r0 = android.support.v7.appcompat.R.attr.colorControlActivated
            int r0 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r5, r0)
            android.graphics.PorterDuff$Mode r2 = android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE
            setPorterDuffColorFilter(r7, r0, r2)
            android.graphics.drawable.Drawable r6 = r6.findDrawableByLayerId(r1)
            int r7 = android.support.v7.appcompat.R.attr.colorControlActivated
            int r5 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r5, r7)
            android.graphics.PorterDuff$Mode r7 = android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE
            setPorterDuffColorFilter(r6, r5, r7)
        La6:
            return r8
    }

    static void tintDrawable(android.graphics.drawable.Drawable r2, android.support.v7.widget.TintInfo r3, int[] r4) {
            boolean r0 = android.support.v7.widget.DrawableUtils.canSafelyMutateDrawable(r2)
            if (r0 == 0) goto L14
            android.graphics.drawable.Drawable r0 = r2.mutate()
            if (r0 == r2) goto L14
            java.lang.String r2 = "AppCompatDrawableManag"
            java.lang.String r3 = "Mutated drawable is not the same instance as the input."
            android.util.Log.d(r2, r3)
            return
        L14:
            boolean r0 = r3.mHasTintList
            if (r0 != 0) goto L21
            boolean r0 = r3.mHasTintMode
            if (r0 == 0) goto L1d
            goto L21
        L1d:
            r2.clearColorFilter()
            goto L39
        L21:
            boolean r0 = r3.mHasTintList
            if (r0 == 0) goto L28
            android.content.res.ColorStateList r0 = r3.mTintList
            goto L29
        L28:
            r0 = 0
        L29:
            boolean r1 = r3.mHasTintMode
            if (r1 == 0) goto L30
            android.graphics.PorterDuff$Mode r3 = r3.mTintMode
            goto L32
        L30:
            android.graphics.PorterDuff$Mode r3 = android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE
        L32:
            android.graphics.PorterDuffColorFilter r3 = createTintFilter(r0, r3, r4)
            r2.setColorFilter(r3)
        L39:
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 23
            if (r3 > r4) goto L42
            r2.invalidateSelf()
        L42:
            return
    }

    static boolean tintDrawableUsingColorFilter(android.content.Context r6, int r7, android.graphics.drawable.Drawable r8) {
            android.graphics.PorterDuff$Mode r0 = android.support.v7.widget.AppCompatDrawableManager.DEFAULT_MODE
            int[] r1 = android.support.v7.widget.AppCompatDrawableManager.COLORFILTER_TINT_COLOR_CONTROL_NORMAL
            boolean r1 = arrayContains(r1, r7)
            r2 = 16842801(0x1010031, float:2.3693695E-38)
            r3 = -1
            r4 = 0
            r5 = 1
            if (r1 == 0) goto L15
            int r2 = android.support.v7.appcompat.R.attr.colorControlNormal
        L12:
            r7 = r3
        L13:
            r1 = r5
            goto L42
        L15:
            int[] r1 = android.support.v7.widget.AppCompatDrawableManager.COLORFILTER_COLOR_CONTROL_ACTIVATED
            boolean r1 = arrayContains(r1, r7)
            if (r1 == 0) goto L20
            int r2 = android.support.v7.appcompat.R.attr.colorControlActivated
            goto L12
        L20:
            int[] r1 = android.support.v7.widget.AppCompatDrawableManager.COLORFILTER_COLOR_BACKGROUND_MULTIPLY
            boolean r1 = arrayContains(r1, r7)
            if (r1 == 0) goto L2b
            android.graphics.PorterDuff$Mode r0 = android.graphics.PorterDuff.Mode.MULTIPLY
            goto L12
        L2b:
            int r1 = android.support.v7.appcompat.R.drawable.abc_list_divider_mtrl_alpha
            if (r7 != r1) goto L3a
            r2 = 16842800(0x1010030, float:2.3693693E-38)
            r7 = 1109603123(0x42233333, float:40.8)
            int r7 = java.lang.Math.round(r7)
            goto L13
        L3a:
            int r1 = android.support.v7.appcompat.R.drawable.abc_dialog_material_background
            if (r7 != r1) goto L3f
            goto L12
        L3f:
            r7 = r3
            r1 = r4
            r2 = r1
        L42:
            if (r1 == 0) goto L5f
            boolean r1 = android.support.v7.widget.DrawableUtils.canSafelyMutateDrawable(r8)
            if (r1 == 0) goto L4e
            android.graphics.drawable.Drawable r8 = r8.mutate()
        L4e:
            int r6 = android.support.v7.widget.ThemeUtils.getThemeAttrColor(r6, r2)
            android.graphics.PorterDuffColorFilter r6 = getPorterDuffColorFilter(r6, r0)
            r8.setColorFilter(r6)
            if (r7 == r3) goto L5e
            r8.setAlpha(r7)
        L5e:
            return r5
        L5f:
            return r4
    }

    public synchronized android.graphics.drawable.Drawable getDrawable(android.content.Context r2, int r3) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            android.graphics.drawable.Drawable r2 = r1.getDrawable(r2, r3, r0)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return r2
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    synchronized android.graphics.drawable.Drawable getDrawable(android.content.Context r2, int r3, boolean r4) {
            r1 = this;
            monitor-enter(r1)
            r1.checkVectorDrawableSetup(r2)     // Catch: java.lang.Throwable -> L21
            android.graphics.drawable.Drawable r0 = r1.loadDrawableFromDelegates(r2, r3)     // Catch: java.lang.Throwable -> L21
            if (r0 != 0) goto Le
            android.graphics.drawable.Drawable r0 = r1.createDrawableIfNeeded(r2, r3)     // Catch: java.lang.Throwable -> L21
        Le:
            if (r0 != 0) goto L14
            android.graphics.drawable.Drawable r0 = android.support.v4.content.ContextCompat.getDrawable(r2, r3)     // Catch: java.lang.Throwable -> L21
        L14:
            if (r0 == 0) goto L1a
            android.graphics.drawable.Drawable r0 = r1.tintDrawable(r2, r3, r4, r0)     // Catch: java.lang.Throwable -> L21
        L1a:
            if (r0 == 0) goto L1f
            android.support.v7.widget.DrawableUtils.fixDrawable(r0)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r1)
            return r0
        L21:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    synchronized android.content.res.ColorStateList getTintList(android.content.Context r3, int r4) {
            r2 = this;
            monitor-enter(r2)
            android.content.res.ColorStateList r0 = r2.getTintListFromCache(r3, r4)     // Catch: java.lang.Throwable -> L91
            if (r0 != 0) goto L8f
            int r1 = android.support.v7.appcompat.R.drawable.abc_edit_text_material     // Catch: java.lang.Throwable -> L91
            if (r4 != r1) goto L13
            int r0 = android.support.v7.appcompat.R.color.abc_tint_edittext     // Catch: java.lang.Throwable -> L91
            android.content.res.ColorStateList r0 = android.support.v7.content.res.AppCompatResources.getColorStateList(r3, r0)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L13:
            int r1 = android.support.v7.appcompat.R.drawable.abc_switch_track_mtrl_alpha     // Catch: java.lang.Throwable -> L91
            if (r4 != r1) goto L1f
            int r0 = android.support.v7.appcompat.R.color.abc_tint_switch_track     // Catch: java.lang.Throwable -> L91
            android.content.res.ColorStateList r0 = android.support.v7.content.res.AppCompatResources.getColorStateList(r3, r0)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L1f:
            int r1 = android.support.v7.appcompat.R.drawable.abc_switch_thumb_material     // Catch: java.lang.Throwable -> L91
            if (r4 != r1) goto L28
            android.content.res.ColorStateList r0 = r2.createSwitchThumbColorStateList(r3)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L28:
            int r1 = android.support.v7.appcompat.R.drawable.abc_btn_default_mtrl_shape     // Catch: java.lang.Throwable -> L91
            if (r4 != r1) goto L31
            android.content.res.ColorStateList r0 = r2.createDefaultButtonColorStateList(r3)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L31:
            int r1 = android.support.v7.appcompat.R.drawable.abc_btn_borderless_material     // Catch: java.lang.Throwable -> L91
            if (r4 != r1) goto L3a
            android.content.res.ColorStateList r0 = r2.createBorderlessButtonColorStateList(r3)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L3a:
            int r1 = android.support.v7.appcompat.R.drawable.abc_btn_colored_material     // Catch: java.lang.Throwable -> L91
            if (r4 != r1) goto L43
            android.content.res.ColorStateList r0 = r2.createColoredButtonColorStateList(r3)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L43:
            int r1 = android.support.v7.appcompat.R.drawable.abc_spinner_mtrl_am_alpha     // Catch: java.lang.Throwable -> L91
            if (r4 == r1) goto L84
            int r1 = android.support.v7.appcompat.R.drawable.abc_spinner_textfield_background_material     // Catch: java.lang.Throwable -> L91
            if (r4 != r1) goto L4c
            goto L84
        L4c:
            int[] r1 = android.support.v7.widget.AppCompatDrawableManager.TINT_COLOR_CONTROL_NORMAL     // Catch: java.lang.Throwable -> L91
            boolean r1 = arrayContains(r1, r4)     // Catch: java.lang.Throwable -> L91
            if (r1 == 0) goto L5b
            int r0 = android.support.v7.appcompat.R.attr.colorControlNormal     // Catch: java.lang.Throwable -> L91
            android.content.res.ColorStateList r0 = android.support.v7.widget.ThemeUtils.getThemeAttrColorStateList(r3, r0)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L5b:
            int[] r1 = android.support.v7.widget.AppCompatDrawableManager.TINT_COLOR_CONTROL_STATE_LIST     // Catch: java.lang.Throwable -> L91
            boolean r1 = arrayContains(r1, r4)     // Catch: java.lang.Throwable -> L91
            if (r1 == 0) goto L6a
            int r0 = android.support.v7.appcompat.R.color.abc_tint_default     // Catch: java.lang.Throwable -> L91
            android.content.res.ColorStateList r0 = android.support.v7.content.res.AppCompatResources.getColorStateList(r3, r0)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L6a:
            int[] r1 = android.support.v7.widget.AppCompatDrawableManager.TINT_CHECKABLE_BUTTON_LIST     // Catch: java.lang.Throwable -> L91
            boolean r1 = arrayContains(r1, r4)     // Catch: java.lang.Throwable -> L91
            if (r1 == 0) goto L79
            int r0 = android.support.v7.appcompat.R.color.abc_tint_btn_checkable     // Catch: java.lang.Throwable -> L91
            android.content.res.ColorStateList r0 = android.support.v7.content.res.AppCompatResources.getColorStateList(r3, r0)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L79:
            int r1 = android.support.v7.appcompat.R.drawable.abc_seekbar_thumb_material     // Catch: java.lang.Throwable -> L91
            if (r4 != r1) goto L8a
            int r0 = android.support.v7.appcompat.R.color.abc_tint_seek_thumb     // Catch: java.lang.Throwable -> L91
            android.content.res.ColorStateList r0 = android.support.v7.content.res.AppCompatResources.getColorStateList(r3, r0)     // Catch: java.lang.Throwable -> L91
            goto L8a
        L84:
            int r0 = android.support.v7.appcompat.R.color.abc_tint_spinner     // Catch: java.lang.Throwable -> L91
            android.content.res.ColorStateList r0 = android.support.v7.content.res.AppCompatResources.getColorStateList(r3, r0)     // Catch: java.lang.Throwable -> L91
        L8a:
            if (r0 == 0) goto L8f
            r2.addTintListToCache(r3, r4, r0)     // Catch: java.lang.Throwable -> L91
        L8f:
            monitor-exit(r2)
            return r0
        L91:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized void onConfigurationChanged(android.content.Context r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.WeakHashMap<android.content.Context, android.support.v4.util.LongSparseArray<java.lang.ref.WeakReference<android.graphics.drawable.Drawable$ConstantState>>> r0 = r1.mDrawableCaches     // Catch: java.lang.Throwable -> L10
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L10
            android.support.v4.util.LongSparseArray r2 = (android.support.v4.util.LongSparseArray) r2     // Catch: java.lang.Throwable -> L10
            if (r2 == 0) goto Le
            r2.clear()     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    synchronized android.graphics.drawable.Drawable onDrawableLoadedFromResources(android.content.Context r2, android.support.v7.widget.VectorEnabledTintResources r3, int r4) {
            r1 = this;
            monitor-enter(r1)
            android.graphics.drawable.Drawable r0 = r1.loadDrawableFromDelegates(r2, r4)     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto Lb
            android.graphics.drawable.Drawable r0 = r3.superGetDrawable(r4)     // Catch: java.lang.Throwable -> L17
        Lb:
            if (r0 == 0) goto L14
            r3 = 0
            android.graphics.drawable.Drawable r2 = r1.tintDrawable(r2, r4, r3, r0)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r1)
            return r2
        L14:
            r2 = 0
            monitor-exit(r1)
            return r2
        L17:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
