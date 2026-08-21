package android.support.v7.content.res;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.XmlResourceParser;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.ColorRes;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.content.ContextCompat;
import android.support.v4.content.res.ColorStateListInflaterCompat;
import android.support.v7.widget.AppCompatDrawableManager;
import android.util.Log;
import android.util.SparseArray;
import android.util.TypedValue;
import java.util.WeakHashMap;

public final class AppCompatResources {
    private static final String LOG_TAG = "AppCompatResources";
    private static final ThreadLocal<TypedValue> TL_TYPED_VALUE = null;
    private static final Object sColorStateCacheLock = null;
    private static final WeakHashMap<Context, SparseArray<ColorStateListCacheEntry>> sColorStateCaches = null;

    private static class ColorStateListCacheEntry {
        final Configuration configuration;
        final ColorStateList value;

        ColorStateListCacheEntry(@NonNull ColorStateList r1, @NonNull Configuration r2) {
            this.value = r1;
            this.configuration = r2;
        }
    }

    static {
        TL_TYPED_VALUE = new ThreadLocal();
        sColorStateCaches = new WeakHashMap(0);
        sColorStateCacheLock = new Object();
    }

    private AppCompatResources() {
    }

    public static ColorStateList getColorStateList(@NonNull Context r2, @ColorRes int r3) {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        ColorStateList r0 = getCachedColorStateList(r2, r3);
        if (r0 == null) goto L9;
        return r0;
    L9:
        ColorStateList r02 = inflateColorStateList(r2, r3);
        if (r02 == null) goto L14;
        addColorStateListToCache(r2, r3, r02);
        return r02;
    L14:
        return ContextCompat.getColorStateList(r2, r3);
    L5:
        return r2.getColorStateList(r3);
    }

    @Nullable
    public static Drawable getDrawable(@NonNull Context r1, @DrawableRes int r2) {
        return AppCompatDrawableManager.get().getDrawable(r1, r2);
    }

    @Nullable
    private static ColorStateList inflateColorStateList(Context r2, int r3) {
        if (isColorInt(r2, r3) == false) goto L5;
        return null;
    L5:
        Resources r0 = r2.getResources();
        XmlResourceParser r32 = r0.getXml(r3);
        return ColorStateListInflaterCompat.createFromXml(r0, r32, r2.getTheme());
    L8:
        e = move-exception;
        Log.e(LOG_TAG, "Failed to inflate ColorStateList, leaving it to the framework", e);
        return null;
    }

    @Nullable
    private static ColorStateList getCachedColorStateList(@NonNull Context r4, @ColorRes int r5) {
        Object r0 = sColorStateCacheLock;
        monitor-enter(r0);
        SparseArray<ColorStateListCacheEntry> r1 = sColorStateCaches.get(r4);     // Catch: Throwable -> L19
        if (r1 != null) goto L7;
    L16:
        monitor-exit(r0);     // Catch: Throwable -> L19
        return null;
    L7:
        if (r1.size() <= 0) goto L16;
        ColorStateListCacheEntry r2 = r1.get(r5);     // Catch: Throwable -> L19
        if (r2 == null) goto L16;
        if (r2.configuration.equals(r4.getResources().getConfiguration()) == false) goto L15;
        ColorStateList r42 = r2.value;     // Catch: Throwable -> L19
        monitor-exit(r0);     // Catch: Throwable -> L19
        return r42;
    L15:
        r1.remove(r5);     // Catch: Throwable -> L19
    L19:
        th = move-exception;
        throw th;
    }

    private static void addColorStateListToCache(@NonNull Context r3, @ColorRes int r4, @NonNull ColorStateList r5) {
        Object r0 = sColorStateCacheLock;
        monitor-enter(r0);
        SparseArray<ColorStateListCacheEntry> r1 = sColorStateCaches.get(r3);     // Catch: Throwable -> L10
        if (r1 != null) goto L7;
        r1 = new SparseArray();     // Catch: Throwable -> L10
        sColorStateCaches.put(r3, r1);     // Catch: Throwable -> L10
    L7:
        r1.append(r4, new ColorStateListCacheEntry(r5, r3.getResources().getConfiguration()));     // Catch: Throwable -> L10
        monitor-exit(r0);     // Catch: Throwable -> L10
        return;
    L10:
        th = move-exception;
        throw th;
    }

    private static boolean isColorInt(@NonNull Context r2, @ColorRes int r3) {
        Resources r22 = r2.getResources();
        TypedValue r0 = getTypedValue();
        r22.getValue(r3, r0, true);
        if (r0.type >= 28) goto L5;
    L7:
        return false;
    L5:
        if (r0.type > 31) goto L7;
        return true;
    }

    @NonNull
    private static TypedValue getTypedValue() {
        TypedValue r0 = TL_TYPED_VALUE.get();
        if (r0 != null) goto L6;
        TypedValue r02 = new TypedValue();
        TL_TYPED_VALUE.set(r02);
        return r02;
    L6:
        return r0;
    }
}
