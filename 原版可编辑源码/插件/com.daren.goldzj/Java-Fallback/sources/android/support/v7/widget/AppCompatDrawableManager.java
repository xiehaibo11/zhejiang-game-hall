package android.support.v7.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.XmlResourceParser;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.os.Build;
import android.support.annotation.ColorInt;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.graphics.drawable.AnimatedVectorDrawableCompat;
import android.support.graphics.drawable.VectorDrawableCompat;
import android.support.v4.content.ContextCompat;
import android.support.v4.graphics.ColorUtils;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.util.ArrayMap;
import android.support.v4.util.LongSparseArray;
import android.support.v4.util.LruCache;
import android.support.v4.util.SparseArrayCompat;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.graphics.drawable.AnimatedStateListDrawableCompat;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.util.Xml;
import java.lang.ref.WeakReference;
import java.util.WeakHashMap;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public final class AppCompatDrawableManager {
    private static final int[] COLORFILTER_COLOR_BACKGROUND_MULTIPLY = null;
    private static final int[] COLORFILTER_COLOR_CONTROL_ACTIVATED = null;
    private static final int[] COLORFILTER_TINT_COLOR_CONTROL_NORMAL = null;
    private static final ColorFilterLruCache COLOR_FILTER_CACHE = null;
    private static final boolean DEBUG = false;
    private static final PorterDuff.Mode DEFAULT_MODE = null;
    private static AppCompatDrawableManager INSTANCE = null;
    private static final String PLATFORM_VD_CLAZZ = "android.graphics.drawable.VectorDrawable";
    private static final String SKIP_DRAWABLE_TAG = "appcompat_skip_skip";
    private static final String TAG = "AppCompatDrawableManag";
    private static final int[] TINT_CHECKABLE_BUTTON_LIST = null;
    private static final int[] TINT_COLOR_CONTROL_NORMAL = null;
    private static final int[] TINT_COLOR_CONTROL_STATE_LIST = null;
    private ArrayMap<String, InflateDelegate> mDelegates;
    private final WeakHashMap<Context, LongSparseArray<WeakReference<Drawable.ConstantState>>> mDrawableCaches;
    private boolean mHasCheckedVectorDrawableSetup;
    private SparseArrayCompat<String> mKnownDrawableIdTags;
    private WeakHashMap<Context, SparseArrayCompat<ColorStateList>> mTintLists;
    private TypedValue mTypedValue;

    @RequiresApi(11)
    static class AsldcInflateDelegate implements InflateDelegate {
        AsldcInflateDelegate() {
        }

        @Override
        public Drawable createFromXmlInner(@NonNull Context r2, @NonNull XmlPullParser r3, @NonNull AttributeSet r4, @Nullable Resources.Theme r5) {
            return AnimatedStateListDrawableCompat.createFromXmlInner(r2, r2.getResources(), r3, r4, r5);
        L4:
            e = move-exception;
            Log.e("AsldcInflateDelegate", "Exception while inflating <animated-selector>", e);
            return null;
        }
    }

    private static class AvdcInflateDelegate implements InflateDelegate {
        AvdcInflateDelegate() {
        }

        @Override
        public Drawable createFromXmlInner(@NonNull Context r2, @NonNull XmlPullParser r3, @NonNull AttributeSet r4, @Nullable Resources.Theme r5) {
            return AnimatedVectorDrawableCompat.createFromXmlInner(r2, r2.getResources(), r3, r4, r5);
        L4:
            e = move-exception;
            Log.e("AvdcInflateDelegate", "Exception while inflating <animated-vector>", e);
            return null;
        }
    }

    private static class ColorFilterLruCache extends LruCache<Integer, PorterDuffColorFilter> {
        public ColorFilterLruCache(int r1) {
            super(r1);
        }

        PorterDuffColorFilter get(int r1, PorterDuff.Mode r2) {
            return get(Integer.valueOf(generateCacheKey(r1, r2)));
        }

        PorterDuffColorFilter put(int r1, PorterDuff.Mode r2, PorterDuffColorFilter r3) {
            return put(Integer.valueOf(generateCacheKey(r1, r2)), r3);
        }

        private static int generateCacheKey(int r1, PorterDuff.Mode r2) {
            return ((r1 + 31) * 31) + r2.hashCode();
        }
    }

    private interface InflateDelegate {
        Drawable createFromXmlInner(@NonNull Context r1, @NonNull XmlPullParser r2, @NonNull AttributeSet r3, @Nullable Resources.Theme r4);
    }

    private static class VdcInflateDelegate implements InflateDelegate {
        VdcInflateDelegate() {
        }

        @Override
        public Drawable createFromXmlInner(@NonNull Context r1, @NonNull XmlPullParser r2, @NonNull AttributeSet r3, @Nullable Resources.Theme r4) {
            return VectorDrawableCompat.createFromXmlInner(r1.getResources(), r2, r3, r4);
        L4:
            e = move-exception;
            Log.e("VdcInflateDelegate", "Exception while inflating <vector>", e);
            return null;
        }
    }

    public AppCompatDrawableManager() {
        this.mDrawableCaches = new WeakHashMap(0);
    }

    static {
        DEFAULT_MODE = PorterDuff.Mode.SRC_IN;
        COLOR_FILTER_CACHE = new ColorFilterLruCache(6);
        COLORFILTER_TINT_COLOR_CONTROL_NORMAL = new int[]{R.drawable.abc_textfield_search_default_mtrl_alpha, R.drawable.abc_textfield_default_mtrl_alpha, R.drawable.abc_ab_share_pack_mtrl_alpha};
        TINT_COLOR_CONTROL_NORMAL = new int[]{R.drawable.abc_ic_commit_search_api_mtrl_alpha, R.drawable.abc_seekbar_tick_mark_material, R.drawable.abc_ic_menu_share_mtrl_alpha, R.drawable.abc_ic_menu_copy_mtrl_am_alpha, R.drawable.abc_ic_menu_cut_mtrl_alpha, R.drawable.abc_ic_menu_selectall_mtrl_alpha, R.drawable.abc_ic_menu_paste_mtrl_am_alpha};
        COLORFILTER_COLOR_CONTROL_ACTIVATED = new int[]{R.drawable.abc_textfield_activated_mtrl_alpha, R.drawable.abc_textfield_search_activated_mtrl_alpha, R.drawable.abc_cab_background_top_mtrl_alpha, R.drawable.abc_text_cursor_material, R.drawable.abc_text_select_handle_left_mtrl_dark, R.drawable.abc_text_select_handle_middle_mtrl_dark, R.drawable.abc_text_select_handle_right_mtrl_dark, R.drawable.abc_text_select_handle_left_mtrl_light, R.drawable.abc_text_select_handle_middle_mtrl_light, R.drawable.abc_text_select_handle_right_mtrl_light};
        COLORFILTER_COLOR_BACKGROUND_MULTIPLY = new int[]{R.drawable.abc_popup_background_mtrl_mult, R.drawable.abc_cab_background_internal_bg, R.drawable.abc_menu_hardkey_panel_mtrl_mult};
        TINT_COLOR_CONTROL_STATE_LIST = new int[]{R.drawable.abc_tab_indicator_material, R.drawable.abc_textfield_search_material};
        TINT_CHECKABLE_BUTTON_LIST = new int[]{R.drawable.abc_btn_check_material, R.drawable.abc_btn_radio_material};
    }

    public static synchronized AppCompatDrawableManager get() {
        monitor-enter(AppCompatDrawableManager.class);
    L10:
        th = move-exception;
        throw th;
    L5:
        if (INSTANCE != null) goto L7;
        INSTANCE = new AppCompatDrawableManager();     // Catch: Throwable -> L10
        installDefaultInflateDelegates(INSTANCE);     // Catch: Throwable -> L10
    L7:
        AppCompatDrawableManager r1 = INSTANCE;     // Catch: Throwable -> L10
        monitor-exit(AppCompatDrawableManager.class);
        return r1;
    }

    private static void installDefaultInflateDelegates(@NonNull AppCompatDrawableManager r2) {
        if (Build.VERSION.SDK_INT >= 24) goto L6;
        r2.addDelegate("vector", new VdcInflateDelegate());
        r2.addDelegate("animated-vector", new AvdcInflateDelegate());
        r2.addDelegate("animated-selector", new AsldcInflateDelegate());
        return;
    }

    public synchronized Drawable getDrawable(@NonNull Context r2, @DrawableRes int r3) {
        monitor-enter(this);
        Drawable r22 = getDrawable(r2, r3, false);     // Catch: Throwable -> L7
        monitor-exit(this);
        return r22;
    L7:
        th = move-exception;
        throw th;
    }

    synchronized Drawable getDrawable(@NonNull Context r2, @DrawableRes int r3, boolean r4) {
        monitor-enter(this);
        checkVectorDrawableSetup(r2);     // Catch: Throwable -> L14
        Drawable r0 = loadDrawableFromDelegates(r2, r3);     // Catch: Throwable -> L14
        if (r0 != null) goto L6;
        r0 = createDrawableIfNeeded(r2, r3);     // Catch: Throwable -> L14
    L6:
        if (r0 != null) goto L8;
        r0 = ContextCompat.getDrawable(r2, r3);     // Catch: Throwable -> L14
    L8:
        if (r0 == null) goto L10;
        r0 = tintDrawable(r2, r3, r4, r0);     // Catch: Throwable -> L14
    L10:
        if (r0 == null) goto L12;
        DrawableUtils.fixDrawable(r0);     // Catch: Throwable -> L14
    L12:
        monitor-exit(this);
        return r0;
    L14:
        th = move-exception;
        throw th;
    }

    public synchronized void onConfigurationChanged(@NonNull Context r2) {
        monitor-enter(this);
        LongSparseArray<WeakReference<Drawable.ConstantState>> r22 = this.mDrawableCaches.get(r2);     // Catch: Throwable -> L8
        if (r22 == null) goto L6;
        r22.clear();     // Catch: Throwable -> L8
    L6:
        monitor-exit(this);
        return;
    L8:
        th = move-exception;
        throw th;
    }

    private static long createCacheKey(TypedValue r4) {
        return (((long) r4.assetCookie) << 32) | ((long) r4.data);
    }

    private Drawable createDrawableIfNeeded(@NonNull Context r8, @DrawableRes int r9) {
        if (this.mTypedValue != null) goto L5;
        this.mTypedValue = new TypedValue();
    L5:
        TypedValue r0 = this.mTypedValue;
        r8.getResources().getValue(r9, r0, true);
        long r3 = createCacheKey(r0);
        Drawable r1 = getCachedDrawable(r8, r3);
        if (r1 == null) goto L9;
        return r1;
    L9:
        if (r9 != R.drawable.abc_cab_background_top_material) goto L11;
        r1 = new LayerDrawable(new Drawable[]{getDrawable(r8, R.drawable.abc_cab_background_internal_bg), getDrawable(r8, R.drawable.abc_cab_background_top_mtrl_alpha)});
    L11:
        if (r1 == null) goto L13;
        r1.setChangingConfigurations(r0.changingConfigurations);
        addDrawableToCache(r8, r3, r1);
    L13:
        return r1;
    }

    private Drawable tintDrawable(@NonNull Context r5, @DrawableRes int r6, boolean r7, @NonNull Drawable r8) {
        ColorStateList r0 = getTintList(r5, r6);
        if (r0 == null) goto L11;
        if (DrawableUtils.canSafelyMutateDrawable(r8) == false) goto L7;
        r8 = r8.mutate();
    L7:
        Drawable r82 = DrawableCompat.wrap(r8);
        DrawableCompat.setTintList(r82, r0);
        PorterDuff.Mode r52 = getTintMode(r6);
        if (r52 == null) goto L26;
        DrawableCompat.setTintMode(r82, r52);
        return r82;
    L26:
        return r82;
    L11:
        if (r6 != R.drawable.abc_seekbar_track_material) goto L14;
        LayerDrawable r62 = (LayerDrawable) r8;
        setPorterDuffColorFilter(r62.findDrawableByLayerId(android.R.id.background), ThemeUtils.getThemeAttrColor(r5, R.attr.colorControlNormal), DEFAULT_MODE);
        setPorterDuffColorFilter(r62.findDrawableByLayerId(android.R.id.secondaryProgress), ThemeUtils.getThemeAttrColor(r5, R.attr.colorControlNormal), DEFAULT_MODE);
        setPorterDuffColorFilter(r62.findDrawableByLayerId(android.R.id.progress), ThemeUtils.getThemeAttrColor(r5, R.attr.colorControlActivated), DEFAULT_MODE);
        return r8;
    L14:
        if (r6 != R.drawable.abc_ratingbar_material) goto L16;
    L24:
        LayerDrawable r63 = (LayerDrawable) r8;
        setPorterDuffColorFilter(r63.findDrawableByLayerId(android.R.id.background), ThemeUtils.getDisabledThemeAttrColor(r5, R.attr.colorControlNormal), DEFAULT_MODE);
        setPorterDuffColorFilter(r63.findDrawableByLayerId(android.R.id.secondaryProgress), ThemeUtils.getThemeAttrColor(r5, R.attr.colorControlActivated), DEFAULT_MODE);
        setPorterDuffColorFilter(r63.findDrawableByLayerId(android.R.id.progress), ThemeUtils.getThemeAttrColor(r5, R.attr.colorControlActivated), DEFAULT_MODE);
        return r8;
    L16:
        if (r6 == R.drawable.abc_ratingbar_indicator_material) goto L24;
        if (r6 == R.drawable.abc_ratingbar_small_material) goto L24;
        if (tintDrawableUsingColorFilter(r5, r6, r8) == true) goto L29;
        if (r7 == false) goto L30;
        return null;
    L30:
        return r8;
    L29:
        return r8;
    }

    private Drawable loadDrawableFromDelegates(@NonNull Context r11, @DrawableRes int r12) {
        ArrayMap<String, InflateDelegate> r0 = this.mDelegates;
        if (r0 != null) goto L5;
    L43:
        return null;
    L5:
        if (r0.isEmpty() == true) goto L43;
        SparseArrayCompat<String> r02 = this.mKnownDrawableIdTags;
        if (r02 == null) goto L14;
        String r03 = r02.get(r12);
        if (SKIP_DRAWABLE_TAG.equals(r03) == true) goto L13;
        if (r03 == null) goto L16;
        if (this.mDelegates.get(r03) == null) goto L13;
    L16:
        if (this.mTypedValue != null) goto L18;
        this.mTypedValue = new TypedValue();
    L18:
        TypedValue r04 = this.mTypedValue;
        Resources r1 = r11.getResources();
        r1.getValue(r12, r04, true);
        long r4 = createCacheKey(r04);
        Drawable r6 = getCachedDrawable(r11, r4);
        if (r6 == null) goto L22;
        return r6;
    L22:
        if (r04.string != null) goto L24;
    L40:
        if (r6 != null) goto L42;
        this.mKnownDrawableIdTags.append(r12, SKIP_DRAWABLE_TAG);
    L42:
        return r6;
    L24:
        if (r04.string.toString().endsWith(".xml") == false) goto L40;
        XmlResourceParser r13 = r1.getXml(r12);     // Catch: Exception -> L38
        AttributeSet r7 = Xml.asAttributeSet(r13);     // Catch: Exception -> L38
    L26:
        int r8 = r13.next();     // Catch: Exception -> L38
        if (r8 == 2) goto L30;
        if (r8 != 1) goto L26;
    L30:
        if (r8 != 2) goto L37;
        String r3 = r13.getName();     // Catch: Exception -> L38
        this.mKnownDrawableIdTags.append(r12, r3);     // Catch: Exception -> L38
        InflateDelegate r32 = this.mDelegates.get(r3);     // Catch: Exception -> L38
        if (r32 == null) goto L34;
        r6 = r32.createFromXmlInner(r11, r13, r7, r11.getTheme());     // Catch: Exception -> L38
    L34:
        if (r6 == null) goto L40;
        r6.setChangingConfigurations(r04.changingConfigurations);     // Catch: Exception -> L38
        addDrawableToCache(r11, r4, r6);     // Catch: Exception -> L38
        goto L40
    L37:
        throw new XmlPullParserException("No start tag found");     // Catch: Exception -> L38
    L38:
        e = move-exception;
        Log.e(TAG, "Exception while inflating drawable", e);
    L13:
        return null;
    L14:
        this.mKnownDrawableIdTags = new SparseArrayCompat();
        goto L16
    }

    private synchronized Drawable getCachedDrawable(@NonNull Context r4, long r5) {
        monitor-enter(this);
        LongSparseArray<WeakReference<Drawable.ConstantState>> r0 = this.mDrawableCaches.get(r4);     // Catch: Throwable -> L18
        if (r0 != null) goto L8;
        monitor-exit(this);
        return null;
    L8:
        WeakReference<Drawable.ConstantState> r2 = r0.get(r5);     // Catch: Throwable -> L18
        if (r2 == null) goto L16;
        Drawable.ConstantState r22 = r2.get();     // Catch: Throwable -> L18
        if (r22 == null) goto L15;
        Drawable r42 = r22.newDrawable(r4.getResources());     // Catch: Throwable -> L18
        monitor-exit(this);
        return r42;
    L15:
        r0.delete(r5);     // Catch: Throwable -> L18
    L16:
        monitor-exit(this);
        return null;
    L18:
        th = move-exception;
        throw th;
    }

    private synchronized boolean addDrawableToCache(@NonNull Context r3, long r4, @NonNull Drawable r6) {
        monitor-enter(this);
        Drawable.ConstantState r62 = r6.getConstantState();     // Catch: Throwable -> L15
        if (r62 == null) goto L13;
        LongSparseArray<WeakReference<Drawable.ConstantState>> r0 = this.mDrawableCaches.get(r3);     // Catch: Throwable -> L15
        if (r0 != null) goto L8;
        r0 = new LongSparseArray();     // Catch: Throwable -> L15
        this.mDrawableCaches.put(r3, r0);     // Catch: Throwable -> L15
    L8:
        r0.put(r4, new WeakReference(r62));     // Catch: Throwable -> L15
        monitor-exit(this);
        return true;
    L13:
        monitor-exit(this);
        return false;
    L15:
        th = move-exception;
        throw th;
    }

    synchronized Drawable onDrawableLoadedFromResources(@NonNull Context r2, @NonNull VectorEnabledTintResources r3, @DrawableRes int r4) {
        monitor-enter(this);
        Drawable r0 = loadDrawableFromDelegates(r2, r4);     // Catch: Throwable -> L13
        if (r0 != null) goto L6;
        r0 = r3.superGetDrawable(r4);     // Catch: Throwable -> L13
    L6:
        if (r0 == null) goto L11;
        Drawable r22 = tintDrawable(r2, r4, false, r0);     // Catch: Throwable -> L13
        monitor-exit(this);
        return r22;
    L11:
        monitor-exit(this);
        return null;
    L13:
        th = move-exception;
        throw th;
    }

    static boolean tintDrawableUsingColorFilter(@NonNull Context r6, @DrawableRes int r7, @NonNull Drawable r8) {
        PorterDuff.Mode r0 = DEFAULT_MODE;
        boolean r1 = arrayContains(COLORFILTER_TINT_COLOR_CONTROL_NORMAL, r7);
        int r2 = android.R.attr.colorBackground;
        if (r1 == false) goto L7;
        r2 = R.attr.colorControlNormal;
    L5:
        boolean r72 = true;
        int r12 = -1;
    L19:
        if (r72 == true) goto L21;
        return false;
    L21:
        if (DrawableUtils.canSafelyMutateDrawable(r8) == false) goto L23;
        r8 = r8.mutate();
    L23:
        r8.setColorFilter(getPorterDuffColorFilter(ThemeUtils.getThemeAttrColor(r6, r2), r0));
        if (r12 == (-1)) goto L26;
        r8.setAlpha(r12);
    L26:
        return true;
    L7:
        if (arrayContains(COLORFILTER_COLOR_CONTROL_ACTIVATED, r7) == false) goto L10;
        r2 = R.attr.colorControlActivated;
        goto L5
    L10:
        if (arrayContains(COLORFILTER_COLOR_BACKGROUND_MULTIPLY, r7) == false) goto L13;
        r0 = PorterDuff.Mode.MULTIPLY;
        goto L5
    L13:
        if (r7 != R.drawable.abc_list_divider_mtrl_alpha) goto L16;
        r2 = android.R.attr.colorForeground;
        r12 = Math.round(40.8f);
        r72 = true;
        goto L19
    L16:
        if (r7 == R.drawable.abc_dialog_material_background) goto L5;
        r72 = false;
        r12 = -1;
        r2 = 0;
        goto L19
    }

    private void addDelegate(@NonNull String r2, @NonNull InflateDelegate r3) {
        if (this.mDelegates != null) goto L5;
        this.mDelegates = new ArrayMap();
    L5:
        this.mDelegates.put(r2, r3);
    }

    private void removeDelegate(@NonNull String r2, @NonNull InflateDelegate r3) {
        ArrayMap<String, InflateDelegate> r0 = this.mDelegates;
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.get(r2) != r3) goto L9;
        this.mDelegates.remove(r2);
        return;
    }

    private static boolean arrayContains(int[] r4, int r5) {
        int r0 = r4.length;
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L9;
        if (r4[r2] == r5) goto L6;
        r2 = r2 + 1;
        goto L3
    L6:
        return true;
    L9:
        return false;
    }

    static PorterDuff.Mode getTintMode(int r1) {
        if (r1 == R.drawable.abc_switch_thumb_material) goto L7;
        return null;
    L7:
        return PorterDuff.Mode.MULTIPLY;
    }

    synchronized ColorStateList getTintList(@NonNull Context r3, @DrawableRes int r4) {
        monitor-enter(this);
        ColorStateList r0 = getTintListFromCache(r3, r4);     // Catch: Throwable -> L45
        if (r0 == null) goto L6;
    L43:
        monitor-exit(this);
        return r0;
    L6:
        if (r4 != R.drawable.abc_edit_text_material) goto L9;
        r0 = AppCompatResources.getColorStateList(r3, R.color.abc_tint_edittext);     // Catch: Throwable -> L45
    L41:
        if (r0 == null) goto L43;
        addTintListToCache(r3, r4, r0);     // Catch: Throwable -> L45
        goto L43
    L9:
        if (r4 != R.drawable.abc_switch_track_mtrl_alpha) goto L12;
        r0 = AppCompatResources.getColorStateList(r3, R.color.abc_tint_switch_track);     // Catch: Throwable -> L45
        goto L41
    L12:
        if (r4 != R.drawable.abc_switch_thumb_material) goto L15;
        r0 = createSwitchThumbColorStateList(r3);     // Catch: Throwable -> L45
        goto L41
    L15:
        if (r4 != R.drawable.abc_btn_default_mtrl_shape) goto L18;
        r0 = createDefaultButtonColorStateList(r3);     // Catch: Throwable -> L45
        goto L41
    L18:
        if (r4 != R.drawable.abc_btn_borderless_material) goto L21;
        r0 = createBorderlessButtonColorStateList(r3);     // Catch: Throwable -> L45
        goto L41
    L21:
        if (r4 != R.drawable.abc_btn_colored_material) goto L24;
        r0 = createColoredButtonColorStateList(r3);     // Catch: Throwable -> L45
        goto L41
    L24:
        if (r4 != R.drawable.abc_spinner_mtrl_am_alpha) goto L26;
    L40:
        r0 = AppCompatResources.getColorStateList(r3, R.color.abc_tint_spinner);     // Catch: Throwable -> L45
        goto L41
    L26:
        if (r4 == R.drawable.abc_spinner_textfield_background_material) goto L40;
        if (arrayContains(TINT_COLOR_CONTROL_NORMAL, r4) == false) goto L32;
        r0 = ThemeUtils.getThemeAttrColorStateList(r3, R.attr.colorControlNormal);     // Catch: Throwable -> L45
        goto L41
    L32:
        if (arrayContains(TINT_COLOR_CONTROL_STATE_LIST, r4) == false) goto L35;
        r0 = AppCompatResources.getColorStateList(r3, R.color.abc_tint_default);     // Catch: Throwable -> L45
        goto L41
    L35:
        if (arrayContains(TINT_CHECKABLE_BUTTON_LIST, r4) == false) goto L38;
        r0 = AppCompatResources.getColorStateList(r3, R.color.abc_tint_btn_checkable);     // Catch: Throwable -> L45
        goto L41
    L38:
        if (r4 != R.drawable.abc_seekbar_thumb_material) goto L41;
        r0 = AppCompatResources.getColorStateList(r3, R.color.abc_tint_seek_thumb);     // Catch: Throwable -> L45
    L45:
        th = move-exception;
        throw th;
    }

    private ColorStateList getTintListFromCache(@NonNull Context r3, @DrawableRes int r4) {
        WeakHashMap<Context, SparseArrayCompat<ColorStateList>> r0 = this.mTintLists;
        if (r0 == null) goto L8;
        SparseArrayCompat<ColorStateList> r32 = r0.get(r3);
        if (r32 != null) goto L7;
        return null;
    L7:
        return r32.get(r4);
    L8:
        return null;
    }

    private void addTintListToCache(@NonNull Context r3, @DrawableRes int r4, @NonNull ColorStateList r5) {
        if (this.mTintLists != null) goto L5;
        this.mTintLists = new WeakHashMap();
    L5:
        SparseArrayCompat<ColorStateList> r0 = this.mTintLists.get(r3);
        if (r0 != null) goto L8;
        r0 = new SparseArrayCompat();
        this.mTintLists.put(r3, r0);
    L8:
        r0.append(r4, r5);
    }

    private ColorStateList createDefaultButtonColorStateList(@NonNull Context r2) {
        return createButtonColorStateList(r2, ThemeUtils.getThemeAttrColor(r2, R.attr.colorButtonNormal));
    }

    private ColorStateList createBorderlessButtonColorStateList(@NonNull Context r2) {
        return createButtonColorStateList(r2, 0);
    }

    private ColorStateList createColoredButtonColorStateList(@NonNull Context r2) {
        return createButtonColorStateList(r2, ThemeUtils.getThemeAttrColor(r2, R.attr.colorAccent));
    }

    private ColorStateList createButtonColorStateList(@NonNull Context r6, @ColorInt int r7) {
        int r2 = ThemeUtils.getThemeAttrColor(r6, R.attr.colorControlHighlight);
        int r62 = ThemeUtils.getDisabledThemeAttrColor(r6, R.attr.colorButtonNormal);
        return new ColorStateList(new int[][]{ThemeUtils.DISABLED_STATE_SET, ThemeUtils.PRESSED_STATE_SET, ThemeUtils.FOCUSED_STATE_SET, ThemeUtils.EMPTY_STATE_SET}, new int[]{r62, ColorUtils.compositeColors(r2, r7), ColorUtils.compositeColors(r2, r7), r7});
    }

    private ColorStateList createSwitchThumbColorStateList(Context r8) {
        int[][] r1 = new int[3][];
        int[] r0 = new int[3];
        ColorStateList r2 = ThemeUtils.getThemeAttrColorStateList(r8, R.attr.colorSwitchThumbNormal);
        if (r2 != null) goto L5;
    L7:
        r1[0] = ThemeUtils.DISABLED_STATE_SET;
        r0[0] = ThemeUtils.getDisabledThemeAttrColor(r8, R.attr.colorSwitchThumbNormal);
        r1[1] = ThemeUtils.CHECKED_STATE_SET;
        r0[1] = ThemeUtils.getThemeAttrColor(r8, R.attr.colorControlActivated);
        r1[2] = ThemeUtils.EMPTY_STATE_SET;
        r0[2] = ThemeUtils.getThemeAttrColor(r8, R.attr.colorSwitchThumbNormal);
    L9:
        return new ColorStateList(r1, r0);
    L5:
        if (r2.isStateful() == false) goto L7;
        r1[0] = ThemeUtils.DISABLED_STATE_SET;
        r0[0] = r2.getColorForState(r1[0], 0);
        r1[1] = ThemeUtils.CHECKED_STATE_SET;
        r0[1] = ThemeUtils.getThemeAttrColor(r8, R.attr.colorControlActivated);
        r1[2] = ThemeUtils.EMPTY_STATE_SET;
        r0[2] = r2.getDefaultColor();
        goto L9
    }

    static void tintDrawable(Drawable r2, TintInfo r3, int[] r4) {
        if (DrawableUtils.canSafelyMutateDrawable(r2) == false) goto L9;
        if (r2.mutate() == r2) goto L9;
        Log.d(TAG, "Mutated drawable is not the same instance as the input.");
        return;
    L9:
        if (r3.mHasTintList == true) goto L15;
        if (r3.mHasTintMode == true) goto L15;
        r2.clearColorFilter();
    L24:
        if (Build.VERSION.SDK_INT > 23) goto L27;
        r2.invalidateSelf();
        return;
    L27:
        return;
    L15:
        if (r3.mHasTintList == false) goto L17;
        ColorStateList r0 = r3.mTintList;
    L19:
        if (r3.mHasTintMode == false) goto L21;
        PorterDuff.Mode r32 = r3.mTintMode;
    L22:
        r2.setColorFilter(createTintFilter(r0, r32, r4));
        goto L24
    L21:
        r32 = DEFAULT_MODE;
        goto L22
    L17:
        r0 = null;
        goto L19
    }

    private static PorterDuffColorFilter createTintFilter(ColorStateList r1, PorterDuff.Mode r2, int[] r3) {
        if (r1 == null) goto L7;
        if (r2 != null) goto L6;
        return null;
    L6:
        return getPorterDuffColorFilter(r1.getColorForState(r3, 0), r2);
    L7:
        return null;
    }

    public static synchronized PorterDuffColorFilter getPorterDuffColorFilter(int r3, PorterDuff.Mode r4) {
        monitor-enter(AppCompatDrawableManager.class);
        PorterDuffColorFilter r1 = COLOR_FILTER_CACHE.get(r3, r4);     // Catch: Throwable -> L9
        if (r1 != null) goto L7;
        r1 = new PorterDuffColorFilter(r3, r4);     // Catch: Throwable -> L9
        COLOR_FILTER_CACHE.put(r3, r4, r1);     // Catch: Throwable -> L9
    L7:
        monitor-exit(AppCompatDrawableManager.class);
        return r1;
    L9:
        th = move-exception;
        throw th;
    }

    private static void setPorterDuffColorFilter(Drawable r1, int r2, PorterDuff.Mode r3) {
        if (DrawableUtils.canSafelyMutateDrawable(r1) == false) goto L5;
        r1 = r1.mutate();
    L5:
        if (r3 != null) goto L7;
        r3 = DEFAULT_MODE;
    L7:
        r1.setColorFilter(getPorterDuffColorFilter(r2, r3));
    }

    private void checkVectorDrawableSetup(@NonNull Context r2) {
        if (this.mHasCheckedVectorDrawableSetup == false) goto L5;
        return;
    L5:
        this.mHasCheckedVectorDrawableSetup = true;
        Drawable r22 = getDrawable(r2, R.drawable.abc_vector_test);
        if (r22 != null) goto L8;
    L10:
        this.mHasCheckedVectorDrawableSetup = false;
        throw new IllegalStateException("This app has been built with an incorrect configuration. Please configure your build for VectorDrawableCompat.");
    L8:
        if (isVectorDrawable(r22) == false) goto L10;
    }

    private static boolean isVectorDrawable(@NonNull Drawable r1) {
        if ((r1 instanceof VectorDrawableCompat) == false) goto L5;
    L8:
        return true;
    L5:
        if (PLATFORM_VD_CLAZZ.equals(r1.getClass().getName()) == true) goto L8;
        return false;
    }
}
