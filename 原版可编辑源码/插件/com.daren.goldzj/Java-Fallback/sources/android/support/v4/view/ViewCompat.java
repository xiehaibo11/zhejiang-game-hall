package android.support.v4.view;

import android.animation.ValueAnimator;
import android.annotation.SuppressLint;
import android.content.ClipData;
import android.content.res.ColorStateList;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Bundle;
import android.support.annotation.FloatRange;
import android.support.annotation.IdRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.Px;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.annotation.UiThread;
import android.support.compat.R;
import android.support.v4.util.ArrayMap;
import android.support.v4.view.accessibility.AccessibilityNodeInfoCompat;
import android.support.v4.view.accessibility.AccessibilityNodeProviderCompat;
import android.util.Log;
import android.util.SparseArray;
import android.view.Display;
import android.view.KeyEvent;
import android.view.PointerIcon;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.WindowInsets;
import android.view.WindowManager;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeProvider;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.concurrent.atomic.AtomicInteger;

public class ViewCompat {
    public static final int ACCESSIBILITY_LIVE_REGION_ASSERTIVE = 2;
    public static final int ACCESSIBILITY_LIVE_REGION_NONE = 0;
    public static final int ACCESSIBILITY_LIVE_REGION_POLITE = 1;
    public static final int IMPORTANT_FOR_ACCESSIBILITY_AUTO = 0;
    public static final int IMPORTANT_FOR_ACCESSIBILITY_NO = 2;
    public static final int IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS = 4;
    public static final int IMPORTANT_FOR_ACCESSIBILITY_YES = 1;

    @Deprecated
    public static final int LAYER_TYPE_HARDWARE = 2;

    @Deprecated
    public static final int LAYER_TYPE_NONE = 0;

    @Deprecated
    public static final int LAYER_TYPE_SOFTWARE = 1;
    public static final int LAYOUT_DIRECTION_INHERIT = 2;
    public static final int LAYOUT_DIRECTION_LOCALE = 3;
    public static final int LAYOUT_DIRECTION_LTR = 0;
    public static final int LAYOUT_DIRECTION_RTL = 1;

    @Deprecated
    public static final int MEASURED_HEIGHT_STATE_SHIFT = 16;

    @Deprecated
    public static final int MEASURED_SIZE_MASK = 16777215;

    @Deprecated
    public static final int MEASURED_STATE_MASK = -16777216;

    @Deprecated
    public static final int MEASURED_STATE_TOO_SMALL = 16777216;

    @Deprecated
    public static final int OVER_SCROLL_ALWAYS = 0;

    @Deprecated
    public static final int OVER_SCROLL_IF_CONTENT_SCROLLS = 1;

    @Deprecated
    public static final int OVER_SCROLL_NEVER = 2;
    public static final int SCROLL_AXIS_HORIZONTAL = 1;
    public static final int SCROLL_AXIS_NONE = 0;
    public static final int SCROLL_AXIS_VERTICAL = 2;
    public static final int SCROLL_INDICATOR_BOTTOM = 2;
    public static final int SCROLL_INDICATOR_END = 32;
    public static final int SCROLL_INDICATOR_LEFT = 4;
    public static final int SCROLL_INDICATOR_RIGHT = 8;
    public static final int SCROLL_INDICATOR_START = 16;
    public static final int SCROLL_INDICATOR_TOP = 1;
    private static final String TAG = "ViewCompat";
    public static final int TYPE_NON_TOUCH = 1;
    public static final int TYPE_TOUCH = 0;
    private static boolean sAccessibilityDelegateCheckFailed;
    private static Field sAccessibilityDelegateField;
    private static Method sChildrenDrawingOrderMethod;
    private static Method sDispatchFinishTemporaryDetach;
    private static Method sDispatchStartTemporaryDetach;
    private static Field sMinHeightField;
    private static boolean sMinHeightFieldFetched;
    private static Field sMinWidthField;
    private static boolean sMinWidthFieldFetched;
    private static final AtomicInteger sNextGeneratedId = null;
    private static boolean sTempDetachBound;
    private static ThreadLocal<Rect> sThreadLocalRect;
    private static WeakHashMap<View, String> sTransitionNameMap;
    private static WeakHashMap<View, ViewPropertyAnimatorCompat> sViewPropertyAnimatorMap;

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface FocusDirection {
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface FocusRealDirection {
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface FocusRelativeDirection {
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface NestedScrollType {
    }

    public interface OnUnhandledKeyEventListenerCompat {
        boolean onUnhandledKeyEvent(View r1, KeyEvent r2);
    }

    @RequiresApi(28)
    private static class OnUnhandledKeyEventListenerWrapper implements View.OnUnhandledKeyEventListener {
        private OnUnhandledKeyEventListenerCompat mCompatListener;

        OnUnhandledKeyEventListenerWrapper(OnUnhandledKeyEventListenerCompat r1) {
            this.mCompatListener = r1;
        }

        @Override
        public boolean onUnhandledKeyEvent(View r2, KeyEvent r3) {
            return this.mCompatListener.onUnhandledKeyEvent(r2, r3);
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface ScrollAxis {
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface ScrollIndicators {
    }

    static class UnhandledKeyEventManager {
        private static final ArrayList<WeakReference<View>> sViewsWithListeners = null;
        private SparseArray<WeakReference<View>> mCapturedKeys;
        private WeakReference<KeyEvent> mLastDispatchedPreViewKeyEvent;

        @Nullable
        private WeakHashMap<View, Boolean> mViewsContainingListeners;

        UnhandledKeyEventManager() {
            this.mViewsContainingListeners = null;
            this.mCapturedKeys = null;
            this.mLastDispatchedPreViewKeyEvent = null;
        }

        static {
            sViewsWithListeners = new ArrayList();
        }

        private SparseArray<WeakReference<View>> getCapturedKeys() {
            if (this.mCapturedKeys != null) goto L6;
            this.mCapturedKeys = new SparseArray();
        L6:
            return this.mCapturedKeys;
        }

        static UnhandledKeyEventManager at(View r2) {
            UnhandledKeyEventManager r0 = (UnhandledKeyEventManager) r2.getTag(R.id.tag_unhandled_key_event_manager);
            if (r0 != null) goto L6;
            UnhandledKeyEventManager r02 = new UnhandledKeyEventManager();
            r2.setTag(R.id.tag_unhandled_key_event_manager, r02);
            return r02;
        L6:
            return r0;
        }

        boolean dispatch(View r3, KeyEvent r4) {
            if (r4.getAction() != 0) goto L5;
            recalcViewsWithUnhandled();
        L5:
            View r32 = dispatchInOrder(r3, r4);
            if (r4.getAction() != 0) goto L12;
            int r42 = r4.getKeyCode();
            if (r32 == null) goto L12;
            if (KeyEvent.isModifierKey(r42) == true) goto L12;
            getCapturedKeys().put(r42, new WeakReference(r32));
        L12:
            if (r32 == null) goto L14;
            return true;
        L14:
            return false;
        }

        @Nullable
        private View dispatchInOrder(View r5, KeyEvent r6) {
            WeakHashMap<View, Boolean> r0 = this.mViewsContainingListeners;
            if (r0 != null) goto L5;
        L18:
            return null;
        L5:
            if (r0.containsKey(r5) == false) goto L18;
            if ((r5 instanceof ViewGroup) == false) goto L16;
            ViewGroup r02 = (ViewGroup) r5;
            int r2 = r02.getChildCount() - 1;
        L10:
            if (r2 < 0) goto L16;
            View r3 = dispatchInOrder(r02.getChildAt(r2), r6);
            if (r3 != null) goto L13;
            r2 = r2 - 1;
            goto L10
        L13:
            return r3;
        L16:
            if (onUnhandledKeyEvent(r5, r6) == false) goto L18;
            return r5;
        }

        boolean preDispatch(KeyEvent r6) {
            WeakReference<KeyEvent> r0 = this.mLastDispatchedPreViewKeyEvent;
            if (r0 != null) goto L5;
        L7:
            this.mLastDispatchedPreViewKeyEvent = new WeakReference(r6);
            WeakReference<View> r02 = null;
            SparseArray<WeakReference<View>> r2 = getCapturedKeys();
            if (r6.getAction() != 1) goto L12;
            int r3 = r2.indexOfKey(r6.getKeyCode());
            if (r3 < 0) goto L12;
            r02 = r2.valueAt(r3);
            r2.removeAt(r3);
        L12:
            if (r02 != null) goto L14;
            r02 = r2.get(r6.getKeyCode());
        L14:
            if (r02 == null) goto L21;
            View r03 = r02.get();
            if (r03 != null) goto L18;
        L20:
            return true;
        L18:
            if (ViewCompat.isAttachedToWindow(r03) == false) goto L20;
            onUnhandledKeyEvent(r03, r6);
            goto L20
        L21:
            return false;
        L5:
            if (r0.get() != r6) goto L7;
            return false;
        }

        private boolean onUnhandledKeyEvent(@NonNull View r5, @NonNull KeyEvent r6) {
            ArrayList r0 = (ArrayList) r5.getTag(R.id.tag_unhandled_key_listeners);
            if (r0 == null) goto L10;
            int r1 = r0.size() - 1;
        L5:
            if (r1 < 0) goto L14;
            if (((OnUnhandledKeyEventListenerCompat) r0.get(r1)).onUnhandledKeyEvent(r5, r6) == true) goto L8;
            r1 = r1 - 1;
            goto L5
        L8:
            return true;
        L14:
            return false;
        L10:
            return false;
        }

        static void registerListeningView(View r3) {
            ArrayList<WeakReference<View>> r0 = sViewsWithListeners;
            monitor-enter(r0);
            Iterator<WeakReference<View>> r1 = sViewsWithListeners.iterator();     // Catch: Throwable -> L14
        L6:
            if (r1.hasNext() == false) goto L11;
            if (r1.next().get() != r3) goto L6;
            monitor-exit(r0);     // Catch: Throwable -> L14
            return;
        L11:
            sViewsWithListeners.add(new WeakReference(r3));     // Catch: Throwable -> L14
            monitor-exit(r0);     // Catch: Throwable -> L14
            return;
        L14:
            th = move-exception;
            throw th;
        }

        static void unregisterListeningView(View r3) {
            ArrayList<WeakReference<View>> r0 = sViewsWithListeners;
            monitor-enter(r0);
            int r1 = 0;
        L18:
        L15:
            th = move-exception;
            throw th;
        L6:
            if (r1 >= sViewsWithListeners.size()) goto L13;
            if (sViewsWithListeners.get(r1).get() == r3) goto L9;
            r1 = r1 + 1;     // Catch: Throwable -> L15
            goto L18
        L9:
            sViewsWithListeners.remove(r1);     // Catch: Throwable -> L15
            monitor-exit(r0);     // Catch: Throwable -> L15
            return;
        L13:
            monitor-exit(r0);     // Catch: Throwable -> L15
        }

        private void recalcViewsWithUnhandled() {
            WeakHashMap<View, Boolean> r0 = this.mViewsContainingListeners;
            if (r0 == null) goto L6;
            r0.clear();
        L6:
            if (sViewsWithListeners.isEmpty() == false) goto L8;
            return;
        L8:
            ArrayList<WeakReference<View>> r02 = sViewsWithListeners;
            monitor-enter(r02);
        L25:
            th = move-exception;
            throw th;
        L11:
            if (this.mViewsContainingListeners != null) goto L13;
            this.mViewsContainingListeners = new WeakHashMap();     // Catch: Throwable -> L25
        L13:
            int r1 = sViewsWithListeners.size() - 1;
        L14:
            if (r1 < 0) goto L23;
            View r2 = sViewsWithListeners.get(r1).get();     // Catch: Throwable -> L25
            if (r2 != null) goto L18;
            sViewsWithListeners.remove(r1);     // Catch: Throwable -> L25
        L22:
            r1 = r1 - 1;
            goto L14
        L18:
            this.mViewsContainingListeners.put(r2, Boolean.TRUE);     // Catch: Throwable -> L25
            ViewParent r22 = r2.getParent();     // Catch: Throwable -> L25
        L20:
            if ((r22 instanceof View) == false) goto L22;
            this.mViewsContainingListeners.put((View) r22, Boolean.TRUE);     // Catch: Throwable -> L25
            r22 = r22.getParent();     // Catch: Throwable -> L25
            goto L20
        L23:
            monitor-exit(r02);     // Catch: Throwable -> L25
        }
    }

    static {
        sNextGeneratedId = new AtomicInteger(1);
        sViewPropertyAnimatorMap = null;
        sAccessibilityDelegateCheckFailed = false;
    }

    private static Rect getEmptyTempRect() {
        if (sThreadLocalRect != null) goto L5;
        sThreadLocalRect = new ThreadLocal();
    L5:
        Rect r0 = sThreadLocalRect.get();
        if (r0 != null) goto L8;
        r0 = new Rect();
        sThreadLocalRect.set(r0);
    L8:
        r0.setEmpty();
        return r0;
    }

    @Deprecated
    public static boolean canScrollHorizontally(View r0, int r1) {
        return r0.canScrollHorizontally(r1);
    }

    @Deprecated
    public static boolean canScrollVertically(View r0, int r1) {
        return r0.canScrollVertically(r1);
    }

    @Deprecated
    public static int getOverScrollMode(View r0) {
        return r0.getOverScrollMode();
    }

    @Deprecated
    public static void setOverScrollMode(View r0, int r1) {
        r0.setOverScrollMode(r1);
    }

    @Deprecated
    public static void onPopulateAccessibilityEvent(View r0, AccessibilityEvent r1) {
        r0.onPopulateAccessibilityEvent(r1);
    }

    @Deprecated
    public static void onInitializeAccessibilityEvent(View r0, AccessibilityEvent r1) {
        r0.onInitializeAccessibilityEvent(r1);
    }

    public static void onInitializeAccessibilityNodeInfo(@NonNull View r0, AccessibilityNodeInfoCompat r1) {
        r0.onInitializeAccessibilityNodeInfo(r1.unwrap());
    }

    public static void setAccessibilityDelegate(@NonNull View r0, AccessibilityDelegateCompat r1) {
        if (r1 != null) goto L4;
        View.AccessibilityDelegate r12 = null;
    L5:
        r0.setAccessibilityDelegate(r12);
        return;
    L4:
        r12 = r1.getBridge();
        goto L5
    }

    public static void setAutofillHints(@NonNull View r2, @Nullable String... r3) {
        if (Build.VERSION.SDK_INT < 26) goto L6;
        r2.setAutofillHints(r3);
        return;
    }

    @SuppressLint({"InlinedApi"})
    public static int getImportantForAutofill(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return 0;
    L5:
        return r2.getImportantForAutofill();
    }

    public static void setImportantForAutofill(@NonNull View r2, int r3) {
        if (Build.VERSION.SDK_INT < 26) goto L6;
        r2.setImportantForAutofill(r3);
        return;
    }

    public static boolean isImportantForAutofill(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return true;
    L5:
        return r2.isImportantForAutofill();
    }

    public static boolean hasAccessibilityDelegate(@NonNull View r4) {
        if (sAccessibilityDelegateCheckFailed == false) goto L6;
        return false;
    L6:
        if (sAccessibilityDelegateField != null) goto L19;
        sAccessibilityDelegateField = View.class.getDeclaredField("mAccessibilityDelegate");     // Catch: Throwable -> L9
        sAccessibilityDelegateField.setAccessible(true);     // Catch: Throwable -> L9
    L9:
        sAccessibilityDelegateCheckFailed = true;
        return false;
    L19:
        if (sAccessibilityDelegateField.get(r4) == null) goto L21;
        return true;
    L21:
        return false;
    L15:
        sAccessibilityDelegateCheckFailed = true;
        return false;
    }

    public static boolean hasTransientState(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return false;
    L5:
        return r2.hasTransientState();
    }

    public static void setHasTransientState(@NonNull View r2, boolean r3) {
        if (Build.VERSION.SDK_INT < 16) goto L6;
        r2.setHasTransientState(r3);
        return;
    }

    public static void postInvalidateOnAnimation(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.postInvalidateOnAnimation();
        return;
    L5:
        r2.postInvalidate();
    }

    public static void postInvalidateOnAnimation(@NonNull View r2, int r3, int r4, int r5, int r6) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.postInvalidateOnAnimation(r3, r4, r5, r6);
        return;
    L5:
        r2.postInvalidate(r3, r4, r5, r6);
    }

    public static void postOnAnimation(@NonNull View r2, Runnable r3) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.postOnAnimation(r3);
        return;
    L5:
        r2.postDelayed(r3, ValueAnimator.getFrameDelay());
    }

    public static void postOnAnimationDelayed(@NonNull View r2, Runnable r3, long r4) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.postOnAnimationDelayed(r3, r4);
        return;
    L5:
        r2.postDelayed(r3, ValueAnimator.getFrameDelay() + r4);
    }

    public static int getImportantForAccessibility(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return 0;
    L5:
        return r2.getImportantForAccessibility();
    }

    public static void setImportantForAccessibility(@NonNull View r2, int r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        r2.setImportantForAccessibility(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT >= 16) goto L8;
        return;
    L8:
        if (r3 != 4) goto L10;
        r3 = 2;
    L10:
        r2.setImportantForAccessibility(r3);
    }

    public static boolean isImportantForAccessibility(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return true;
    L5:
        return r2.isImportantForAccessibility();
    }

    public static boolean performAccessibilityAction(@NonNull View r2, int r3, Bundle r4) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return false;
    L5:
        return r2.performAccessibilityAction(r3, r4);
    }

    public static AccessibilityNodeProviderCompat getAccessibilityNodeProvider(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 16) goto L8;
        AccessibilityNodeProvider r22 = r2.getAccessibilityNodeProvider();
        if (r22 != null) goto L7;
        return null;
    L7:
        return new AccessibilityNodeProviderCompat(r22);
    L8:
        return null;
    }

    @Deprecated
    public static float getAlpha(View r0) {
        return r0.getAlpha();
    }

    @Deprecated
    public static void setLayerType(View r0, int r1, Paint r2) {
        r0.setLayerType(r1, r2);
    }

    @Deprecated
    public static int getLayerType(View r0) {
        return r0.getLayerType();
    }

    public static int getLabelFor(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        return 0;
    L5:
        return r2.getLabelFor();
    }

    public static void setLabelFor(@NonNull View r2, @IdRes int r3) {
        if (Build.VERSION.SDK_INT < 17) goto L6;
        r2.setLabelFor(r3);
        return;
    }

    public static void setLayerPaint(@NonNull View r2, Paint r3) {
        if (Build.VERSION.SDK_INT < 17) goto L5;
        r2.setLayerPaint(r3);
        return;
    L5:
        r2.setLayerType(r2.getLayerType(), r3);
        r2.invalidate();
    }

    public static int getLayoutDirection(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        return 0;
    L5:
        return r2.getLayoutDirection();
    }

    public static void setLayoutDirection(@NonNull View r2, int r3) {
        if (Build.VERSION.SDK_INT < 17) goto L6;
        r2.setLayoutDirection(r3);
        return;
    }

    public static ViewParent getParentForAccessibility(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        return r2.getParentForAccessibility();
    L7:
        return r2.getParent();
    }

    @NonNull
    public static <T extends View> T requireViewById(@NonNull View r2, @IdRes int r3) {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        T r22 = (T) r2.findViewById(r3);
        if (r22 == null) goto L10;
        return r22;
    L10:
        throw new IllegalArgumentException("ID does not reference a View inside this View");
    L5:
        return (T) r2.requireViewById(r3);
    }

    @Deprecated
    public static boolean isOpaque(View r0) {
        return r0.isOpaque();
    }

    @Deprecated
    public static int resolveSizeAndState(int r0, int r1, int r2) {
        return View.resolveSizeAndState(r0, r1, r2);
    }

    @Deprecated
    public static int getMeasuredWidthAndState(View r0) {
        return r0.getMeasuredWidthAndState();
    }

    @Deprecated
    public static int getMeasuredHeightAndState(View r0) {
        return r0.getMeasuredHeightAndState();
    }

    @Deprecated
    public static int getMeasuredState(View r0) {
        return r0.getMeasuredState();
    }

    @Deprecated
    public static int combineMeasuredStates(int r0, int r1) {
        return View.combineMeasuredStates(r0, r1);
    }

    public static int getAccessibilityLiveRegion(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return 0;
    L5:
        return r2.getAccessibilityLiveRegion();
    }

    public static void setAccessibilityLiveRegion(@NonNull View r2, int r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        r2.setAccessibilityLiveRegion(r3);
        return;
    }

    @Px
    public static int getPaddingStart(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 17) goto L7;
        return r2.getPaddingStart();
    L7:
        return r2.getPaddingLeft();
    }

    @Px
    public static int getPaddingEnd(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 17) goto L7;
        return r2.getPaddingEnd();
    L7:
        return r2.getPaddingRight();
    }

    public static void setPaddingRelative(@NonNull View r2, @Px int r3, @Px int r4, @Px int r5, @Px int r6) {
        if (Build.VERSION.SDK_INT < 17) goto L5;
        r2.setPaddingRelative(r3, r4, r5, r6);
        return;
    L5:
        r2.setPadding(r3, r4, r5, r6);
    }

    private static void bindTempDetach() {
        sDispatchStartTemporaryDetach = View.class.getDeclaredMethod("dispatchStartTemporaryDetach", new Class[0]);     // Catch: NoSuchMethodException -> L4
        sDispatchFinishTemporaryDetach = View.class.getDeclaredMethod("dispatchFinishTemporaryDetach", new Class[0]);     // Catch: NoSuchMethodException -> L4
    L6:
        sTempDetachBound = true;
        return;
    L4:
        e = move-exception;
        Log.e(TAG, "Couldn't find method", e);
        goto L6
    }

    public static void dispatchStartTemporaryDetach(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 24) goto L6;
        r2.dispatchStartTemporaryDetach();
        return;
    L6:
        if (sTempDetachBound == true) goto L8;
        bindTempDetach();
    L8:
        Method r0 = sDispatchStartTemporaryDetach;
        if (r0 != null) goto L17;
        r2.onStartTemporaryDetach();
        return;
    L17:
        r0.invoke(r2, new Object[0]);     // Catch: Exception -> L13
        return;
    L13:
        e = move-exception;
        Log.d(TAG, "Error calling dispatchStartTemporaryDetach", e);
    }

    public static void dispatchFinishTemporaryDetach(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 24) goto L6;
        r2.dispatchFinishTemporaryDetach();
        return;
    L6:
        if (sTempDetachBound == true) goto L8;
        bindTempDetach();
    L8:
        Method r0 = sDispatchFinishTemporaryDetach;
        if (r0 != null) goto L17;
        r2.onFinishTemporaryDetach();
        return;
    L17:
        r0.invoke(r2, new Object[0]);     // Catch: Exception -> L13
        return;
    L13:
        e = move-exception;
        Log.d(TAG, "Error calling dispatchFinishTemporaryDetach", e);
    }

    @Deprecated
    public static float getTranslationX(View r0) {
        return r0.getTranslationX();
    }

    @Deprecated
    public static float getTranslationY(View r0) {
        return r0.getTranslationY();
    }

    @Nullable
    @Deprecated
    public static Matrix getMatrix(View r0) {
        return r0.getMatrix();
    }

    public static int getMinimumWidth(@NonNull View r3) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        return r3.getMinimumWidth();
    L7:
        if (sMinWidthFieldFetched == false) goto L21;
    L11:
        Field r0 = sMinWidthField;
        if (r0 != null) goto L19;
        return 0;
    L19:
        return ((Integer) r0.get(r3)).intValue();
    L23:
        return 0;
    L21:
        sMinWidthField = View.class.getDeclaredField("mMinWidth");     // Catch: NoSuchFieldException -> L17
        sMinWidthField.setAccessible(true);     // Catch: NoSuchFieldException -> L17
    L10:
        sMinWidthFieldFetched = true;
        goto L11
    }

    public static int getMinimumHeight(@NonNull View r3) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        return r3.getMinimumHeight();
    L7:
        if (sMinHeightFieldFetched == false) goto L21;
    L11:
        Field r0 = sMinHeightField;
        if (r0 != null) goto L19;
        return 0;
    L19:
        return ((Integer) r0.get(r3)).intValue();
    L23:
        return 0;
    L21:
        sMinHeightField = View.class.getDeclaredField("mMinHeight");     // Catch: NoSuchFieldException -> L17
        sMinHeightField.setAccessible(true);     // Catch: NoSuchFieldException -> L17
    L10:
        sMinHeightFieldFetched = true;
        goto L11
    }

    @NonNull
    public static ViewPropertyAnimatorCompat animate(@NonNull View r2) {
        if (sViewPropertyAnimatorMap != null) goto L5;
        sViewPropertyAnimatorMap = new WeakHashMap();
    L5:
        ViewPropertyAnimatorCompat r0 = sViewPropertyAnimatorMap.get(r2);
        if (r0 != null) goto L9;
        ViewPropertyAnimatorCompat r02 = new ViewPropertyAnimatorCompat(r2);
        sViewPropertyAnimatorMap.put(r2, r02);
        return r02;
    L9:
        return r0;
    }

    @Deprecated
    public static void setTranslationX(View r0, float r1) {
        r0.setTranslationX(r1);
    }

    @Deprecated
    public static void setTranslationY(View r0, float r1) {
        r0.setTranslationY(r1);
    }

    @Deprecated
    public static void setAlpha(View r0, @FloatRange(from = 0.0d, to = 1.0d) float r1) {
        r0.setAlpha(r1);
    }

    @Deprecated
    public static void setX(View r0, float r1) {
        r0.setX(r1);
    }

    @Deprecated
    public static void setY(View r0, float r1) {
        r0.setY(r1);
    }

    @Deprecated
    public static void setRotation(View r0, float r1) {
        r0.setRotation(r1);
    }

    @Deprecated
    public static void setRotationX(View r0, float r1) {
        r0.setRotationX(r1);
    }

    @Deprecated
    public static void setRotationY(View r0, float r1) {
        r0.setRotationY(r1);
    }

    @Deprecated
    public static void setScaleX(View r0, float r1) {
        r0.setScaleX(r1);
    }

    @Deprecated
    public static void setScaleY(View r0, float r1) {
        r0.setScaleY(r1);
    }

    @Deprecated
    public static float getPivotX(View r0) {
        return r0.getPivotX();
    }

    @Deprecated
    public static void setPivotX(View r0, float r1) {
        r0.setPivotX(r1);
    }

    @Deprecated
    public static float getPivotY(View r0) {
        return r0.getPivotY();
    }

    @Deprecated
    public static void setPivotY(View r0, float r1) {
        r0.setPivotY(r1);
    }

    @Deprecated
    public static float getRotation(View r0) {
        return r0.getRotation();
    }

    @Deprecated
    public static float getRotationX(View r0) {
        return r0.getRotationX();
    }

    @Deprecated
    public static float getRotationY(View r0) {
        return r0.getRotationY();
    }

    @Deprecated
    public static float getScaleX(View r0) {
        return r0.getScaleX();
    }

    @Deprecated
    public static float getScaleY(View r0) {
        return r0.getScaleY();
    }

    @Deprecated
    public static float getX(View r0) {
        return r0.getX();
    }

    @Deprecated
    public static float getY(View r0) {
        return r0.getY();
    }

    public static void setElevation(@NonNull View r2, float r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setElevation(r3);
        return;
    }

    public static float getElevation(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return 0.0f;
    L5:
        return r2.getElevation();
    }

    public static void setTranslationZ(@NonNull View r2, float r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setTranslationZ(r3);
        return;
    }

    public static float getTranslationZ(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return 0.0f;
    L5:
        return r2.getTranslationZ();
    }

    public static void setTransitionName(@NonNull View r2, String r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setTransitionName(r3);
        return;
    L6:
        if (sTransitionNameMap != null) goto L8;
        sTransitionNameMap = new WeakHashMap();
    L8:
        sTransitionNameMap.put(r2, r3);
    }

    @Nullable
    public static String getTransitionName(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        WeakHashMap<View, String> r0 = sTransitionNameMap;
        if (r0 != null) goto L11;
        return null;
    L11:
        return r0.get(r2);
    L5:
        return r2.getTransitionName();
    }

    public static int getWindowSystemUiVisibility(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return 0;
    L5:
        return r2.getWindowSystemUiVisibility();
    }

    public static void requestApplyInsets(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 20) goto L6;
        r2.requestApplyInsets();
        return;
    L6:
        if (Build.VERSION.SDK_INT < 16) goto L10;
        r2.requestFitSystemWindows();
        return;
    }

    @Deprecated
    public static void setChildrenDrawingOrderEnabled(ViewGroup r8, boolean r9) {
        if (sChildrenDrawingOrderMethod != null) goto L20;
        sChildrenDrawingOrderMethod = ViewGroup.class.getDeclaredMethod("setChildrenDrawingOrderEnabled", new Class[]{Boolean.TYPE});     // Catch: NoSuchMethodException -> L6
    L8:
        sChildrenDrawingOrderMethod.setAccessible(true);
    L6:
        e = move-exception;
        Log.e(TAG, "Unable to find childrenDrawingOrderEnabled", e);
    L20:
        sChildrenDrawingOrderMethod.invoke(r8, new Object[]{Boolean.valueOf(r9)});     // Catch: InvocationTargetException -> L11 IllegalArgumentException -> L13 IllegalAccessException -> L15
    L24:
        return;
    L15:
        e = move-exception;
        Log.e(TAG, "Unable to invoke childrenDrawingOrderEnabled", e);
        return;
    L13:
        e = move-exception;
        Log.e(TAG, "Unable to invoke childrenDrawingOrderEnabled", e);
        return;
    L11:
        e = move-exception;
        Log.e(TAG, "Unable to invoke childrenDrawingOrderEnabled", e);
    }

    public static boolean getFitsSystemWindows(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return false;
    L5:
        return r2.getFitsSystemWindows();
    }

    @Deprecated
    public static void setFitsSystemWindows(View r0, boolean r1) {
        r0.setFitsSystemWindows(r1);
    }

    @Deprecated
    public static void jumpDrawablesToCurrentState(View r0) {
        r0.jumpDrawablesToCurrentState();
    }

    public static void setOnApplyWindowInsetsListener(@NonNull View r2, final OnApplyWindowInsetsListener r3) {
        if (Build.VERSION.SDK_INT < 21) goto L9;
        if (r3 != null) goto L7;
        r2.setOnApplyWindowInsetsListener(null);
        return;
    L7:
        r2.setOnApplyWindowInsetsListener(new 1(r3));
        return;
    }

    public static WindowInsetsCompat onApplyWindowInsets(@NonNull View r2, WindowInsetsCompat r3) {
        if (Build.VERSION.SDK_INT < 21) goto L9;
        WindowInsets r32 = (WindowInsets) WindowInsetsCompat.unwrap(r3);
        WindowInsets r22 = r2.onApplyWindowInsets(r32);
        if (r22 == r32) goto L8;
        r32 = new WindowInsets(r22);
    L8:
        return WindowInsetsCompat.wrap(r32);
    L9:
        return r3;
    }

    public static WindowInsetsCompat dispatchApplyWindowInsets(@NonNull View r2, WindowInsetsCompat r3) {
        if (Build.VERSION.SDK_INT < 21) goto L9;
        WindowInsets r32 = (WindowInsets) WindowInsetsCompat.unwrap(r3);
        WindowInsets r22 = r2.dispatchApplyWindowInsets(r32);
        if (r22 == r32) goto L8;
        r32 = new WindowInsets(r22);
    L8:
        return WindowInsetsCompat.wrap(r32);
    L9:
        return r3;
    }

    @Deprecated
    public static void setSaveFromParentEnabled(View r0, boolean r1) {
        r0.setSaveFromParentEnabled(r1);
    }

    @Deprecated
    public static void setActivated(View r0, boolean r1) {
        r0.setActivated(r1);
    }

    public static boolean hasOverlappingRendering(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return true;
    L5:
        return r2.hasOverlappingRendering();
    }

    public static boolean isPaddingRelative(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        return false;
    L5:
        return r2.isPaddingRelative();
    }

    public static void setBackground(@NonNull View r2, @Nullable Drawable r3) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.setBackground(r3);
        return;
    L5:
        r2.setBackgroundDrawable(r3);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static ColorStateList getBackgroundTintList(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getBackgroundTintList();
    L7:
        if ((r2 instanceof TintableBackgroundView) == true) goto L11;
        return null;
    L11:
        return ((TintableBackgroundView) r2).getSupportBackgroundTintList();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setBackgroundTintList(@NonNull View r2, ColorStateList r3) {
        if (Build.VERSION.SDK_INT < 21) goto L20;
        r2.setBackgroundTintList(r3);
        if (Build.VERSION.SDK_INT != 21) goto L23;
        Drawable r32 = r2.getBackground();
        if (r2.getBackgroundTintList() == null) goto L9;
    L12:
        boolean r0 = true;
    L13:
        if (r32 == null) goto L24;
        if (r0 == true) goto L16;
        return;
    L16:
        if (r32.isStateful() == false) goto L18;
        r32.setState(r2.getDrawableState());
    L18:
        r2.setBackground(r32);
        return;
    L24:
        return;
    L9:
        if (r2.getBackgroundTintMode() != null) goto L12;
        r0 = false;
        goto L13
    L23:
        return;
    L20:
        if ((r2 instanceof TintableBackgroundView) == false) goto L27;
        ((TintableBackgroundView) r2).setSupportBackgroundTintList(r3);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static PorterDuff.Mode getBackgroundTintMode(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getBackgroundTintMode();
    L7:
        if ((r2 instanceof TintableBackgroundView) == true) goto L11;
        return null;
    L11:
        return ((TintableBackgroundView) r2).getSupportBackgroundTintMode();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setBackgroundTintMode(@NonNull View r2, PorterDuff.Mode r3) {
        if (Build.VERSION.SDK_INT < 21) goto L20;
        r2.setBackgroundTintMode(r3);
        if (Build.VERSION.SDK_INT != 21) goto L23;
        Drawable r32 = r2.getBackground();
        if (r2.getBackgroundTintList() == null) goto L9;
    L12:
        boolean r0 = true;
    L13:
        if (r32 == null) goto L24;
        if (r0 == true) goto L16;
        return;
    L16:
        if (r32.isStateful() == false) goto L18;
        r32.setState(r2.getDrawableState());
    L18:
        r2.setBackground(r32);
        return;
    L24:
        return;
    L9:
        if (r2.getBackgroundTintMode() != null) goto L12;
        r0 = false;
        goto L13
    L23:
        return;
    L20:
        if ((r2 instanceof TintableBackgroundView) == false) goto L27;
        ((TintableBackgroundView) r2).setSupportBackgroundTintMode(r3);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setNestedScrollingEnabled(@NonNull View r2, boolean r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setNestedScrollingEnabled(r3);
        return;
    L6:
        if ((r2 instanceof NestedScrollingChild) == false) goto L10;
        ((NestedScrollingChild) r2).setNestedScrollingEnabled(r3);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean isNestedScrollingEnabled(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.isNestedScrollingEnabled();
    L7:
        if ((r2 instanceof NestedScrollingChild) == true) goto L9;
        return false;
    L9:
        return ((NestedScrollingChild) r2).isNestedScrollingEnabled();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean startNestedScroll(@NonNull View r2, int r3) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.startNestedScroll(r3);
    L7:
        if ((r2 instanceof NestedScrollingChild) == true) goto L9;
        return false;
    L9:
        return ((NestedScrollingChild) r2).startNestedScroll(r3);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void stopNestedScroll(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.stopNestedScroll();
        return;
    L6:
        if ((r2 instanceof NestedScrollingChild) == false) goto L10;
        ((NestedScrollingChild) r2).stopNestedScroll();
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean hasNestedScrollingParent(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.hasNestedScrollingParent();
    L7:
        if ((r2 instanceof NestedScrollingChild) == true) goto L9;
        return false;
    L9:
        return ((NestedScrollingChild) r2).hasNestedScrollingParent();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean dispatchNestedScroll(@NonNull View r7, int r8, int r9, int r10, int r11, @Nullable int[] r12) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r7.dispatchNestedScroll(r8, r9, r10, r11, r12);
    L7:
        if ((r7 instanceof NestedScrollingChild) == true) goto L9;
        return false;
    L9:
        return ((NestedScrollingChild) r7).dispatchNestedScroll(r8, r9, r10, r11, r12);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean dispatchNestedPreScroll(@NonNull View r2, int r3, int r4, @Nullable int[] r5, @Nullable int[] r6) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.dispatchNestedPreScroll(r3, r4, r5, r6);
    L7:
        if ((r2 instanceof NestedScrollingChild) == true) goto L9;
        return false;
    L9:
        return ((NestedScrollingChild) r2).dispatchNestedPreScroll(r3, r4, r5, r6);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean startNestedScroll(@NonNull View r1, int r2, int r3) {
        if ((r1 instanceof NestedScrollingChild2) == true) goto L5;
        if (r3 == 0) goto L8;
        return false;
    L8:
        return startNestedScroll(r1, r2);
    L5:
        return ((NestedScrollingChild2) r1).startNestedScroll(r2, r3);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void stopNestedScroll(@NonNull View r1, int r2) {
        if ((r1 instanceof NestedScrollingChild2) == false) goto L5;
        ((NestedScrollingChild2) r1).stopNestedScroll(r2);
        return;
    L5:
        if (r2 != 0) goto L9;
        stopNestedScroll(r1);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean hasNestedScrollingParent(@NonNull View r1, int r2) {
        if ((r1 instanceof NestedScrollingChild2) == false) goto L5;
        ((NestedScrollingChild2) r1).hasNestedScrollingParent(r2);
        return false;
    L5:
        if (r2 == 0) goto L7;
        return false;
    L7:
        return hasNestedScrollingParent(r1);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean dispatchNestedScroll(@NonNull View r8, int r9, int r10, int r11, int r12, @Nullable int[] r13, int r14) {
        if ((r8 instanceof NestedScrollingChild2) == true) goto L5;
        if (r14 == 0) goto L8;
        return false;
    L8:
        return dispatchNestedScroll(r8, r9, r10, r11, r12, r13);
    L5:
        return ((NestedScrollingChild2) r8).dispatchNestedScroll(r9, r10, r11, r12, r13, r14);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean dispatchNestedPreScroll(@NonNull View r7, int r8, int r9, @Nullable int[] r10, @Nullable int[] r11, int r12) {
        if ((r7 instanceof NestedScrollingChild2) == true) goto L5;
        if (r12 == 0) goto L8;
        return false;
    L8:
        return dispatchNestedPreScroll(r7, r8, r9, r10, r11);
    L5:
        return ((NestedScrollingChild2) r7).dispatchNestedPreScroll(r8, r9, r10, r11, r12);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean dispatchNestedFling(@NonNull View r2, float r3, float r4, boolean r5) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.dispatchNestedFling(r3, r4, r5);
    L7:
        if ((r2 instanceof NestedScrollingChild) == true) goto L9;
        return false;
    L9:
        return ((NestedScrollingChild) r2).dispatchNestedFling(r3, r4, r5);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean dispatchNestedPreFling(@NonNull View r2, float r3, float r4) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.dispatchNestedPreFling(r3, r4);
    L7:
        if ((r2 instanceof NestedScrollingChild) == true) goto L9;
        return false;
    L9:
        return ((NestedScrollingChild) r2).dispatchNestedPreFling(r3, r4);
    }

    public static boolean isInLayout(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 18) goto L5;
        return false;
    L5:
        return r2.isInLayout();
    }

    public static boolean isLaidOut(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 19) goto L7;
        return r2.isLaidOut();
    L7:
        if (r2.getWidth() > 0) goto L9;
    L11:
        return false;
    L9:
        if (r2.getHeight() <= 0) goto L11;
        return true;
    }

    public static boolean isLayoutDirectionResolved(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return false;
    L5:
        return r2.isLayoutDirectionResolved();
    }

    public static float getZ(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return 0.0f;
    L5:
        return r2.getZ();
    }

    public static void setZ(@NonNull View r2, float r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setZ(r3);
        return;
    }

    public static void offsetTopAndBottom(@NonNull View r6, int r7) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        r6.offsetTopAndBottom(r7);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 21) goto L15;
        Rect r0 = getEmptyTempRect();
        boolean r1 = false;
        Object r2 = r6.getParent();
        if ((r2 instanceof View) == false) goto L10;
        View r12 = (View) r2;
        r0.set(r12.getLeft(), r12.getTop(), r12.getRight(), r12.getBottom());
        r1 = !r0.intersects(r6.getLeft(), r6.getTop(), r6.getRight(), r6.getBottom());
    L10:
        compatOffsetTopAndBottom(r6, r7);
        if (r1 == true) goto L13;
        return;
    L13:
        if (r0.intersect(r6.getLeft(), r6.getTop(), r6.getRight(), r6.getBottom()) == false) goto L19;
        ((View) r2).invalidate(r0);
        return;
    L19:
        return;
    L15:
        compatOffsetTopAndBottom(r6, r7);
    }

    private static void compatOffsetTopAndBottom(View r0, int r1) {
        r0.offsetTopAndBottom(r1);
        if (r0.getVisibility() != 0) goto L8;
        tickleInvalidationFlag(r0);
        Object r02 = r0.getParent();
        if ((r02 instanceof View) == false) goto L9;
        tickleInvalidationFlag((View) r02);
        return;
    L9:
        return;
    }

    public static void offsetLeftAndRight(@NonNull View r6, int r7) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        r6.offsetLeftAndRight(r7);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 21) goto L15;
        Rect r0 = getEmptyTempRect();
        boolean r1 = false;
        Object r2 = r6.getParent();
        if ((r2 instanceof View) == false) goto L10;
        View r12 = (View) r2;
        r0.set(r12.getLeft(), r12.getTop(), r12.getRight(), r12.getBottom());
        r1 = !r0.intersects(r6.getLeft(), r6.getTop(), r6.getRight(), r6.getBottom());
    L10:
        compatOffsetLeftAndRight(r6, r7);
        if (r1 == true) goto L13;
        return;
    L13:
        if (r0.intersect(r6.getLeft(), r6.getTop(), r6.getRight(), r6.getBottom()) == false) goto L19;
        ((View) r2).invalidate(r0);
        return;
    L19:
        return;
    L15:
        compatOffsetLeftAndRight(r6, r7);
    }

    private static void compatOffsetLeftAndRight(View r0, int r1) {
        r0.offsetLeftAndRight(r1);
        if (r0.getVisibility() != 0) goto L8;
        tickleInvalidationFlag(r0);
        Object r02 = r0.getParent();
        if ((r02 instanceof View) == false) goto L9;
        tickleInvalidationFlag((View) r02);
        return;
    L9:
        return;
    }

    private static void tickleInvalidationFlag(View r2) {
        float r0 = r2.getTranslationY();
        r2.setTranslationY(1.0f + r0);
        r2.setTranslationY(r0);
    }

    public static void setClipBounds(@NonNull View r2, Rect r3) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        r2.setClipBounds(r3);
        return;
    }

    @Nullable
    public static Rect getClipBounds(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 18) goto L5;
        return null;
    L5:
        return r2.getClipBounds();
    }

    public static boolean isAttachedToWindow(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 19) goto L7;
        return r2.isAttachedToWindow();
    L7:
        if (r2.getWindowToken() == null) goto L9;
        return true;
    L9:
        return false;
    }

    public static boolean hasOnClickListeners(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 15) goto L5;
        return false;
    L5:
        return r2.hasOnClickListeners();
    }

    public static void setScrollIndicators(@NonNull View r2, int r3) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        r2.setScrollIndicators(r3);
        return;
    }

    public static void setScrollIndicators(@NonNull View r2, int r3, int r4) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        r2.setScrollIndicators(r3, r4);
        return;
    }

    public static int getScrollIndicators(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        return 0;
    L5:
        return r2.getScrollIndicators();
    }

    public static void setPointerIcon(@NonNull View r2, PointerIconCompat r3) {
        if (Build.VERSION.SDK_INT < 24) goto L9;
        if (r3 == null) goto L6;
        Object r32 = r3.getPointerIcon();
    L7:
        r2.setPointerIcon((PointerIcon) r32);
        return;
    L6:
        r32 = null;
        goto L7
    }

    @Nullable
    public static Display getDisplay(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 17) goto L7;
        return r2.getDisplay();
    L7:
        if (isAttachedToWindow(r2) == true) goto L9;
        return null;
    L9:
        return ((WindowManager) r2.getContext().getSystemService("window")).getDefaultDisplay();
    }

    public static void setTooltipText(@NonNull View r2, @Nullable CharSequence r3) {
        if (Build.VERSION.SDK_INT < 26) goto L6;
        r2.setTooltipText(r3);
        return;
    }

    public static boolean startDragAndDrop(@NonNull View r2, ClipData r3, View.DragShadowBuilder r4, Object r5, int r6) {
        if (Build.VERSION.SDK_INT < 24) goto L7;
        return r2.startDragAndDrop(r3, r4, r5, r6);
    L7:
        return r2.startDrag(r3, r4, r5, r6);
    }

    public static void cancelDragAndDrop(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 24) goto L6;
        r2.cancelDragAndDrop();
        return;
    }

    public static void updateDragShadow(@NonNull View r2, View.DragShadowBuilder r3) {
        if (Build.VERSION.SDK_INT < 24) goto L6;
        r2.updateDragShadow(r3);
        return;
    }

    public static int getNextClusterForwardId(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return -1;
    L5:
        return r2.getNextClusterForwardId();
    }

    public static void setNextClusterForwardId(@NonNull View r2, int r3) {
        if (Build.VERSION.SDK_INT < 26) goto L6;
        r2.setNextClusterForwardId(r3);
        return;
    }

    public static boolean isKeyboardNavigationCluster(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return false;
    L5:
        return r2.isKeyboardNavigationCluster();
    }

    public static void setKeyboardNavigationCluster(@NonNull View r2, boolean r3) {
        if (Build.VERSION.SDK_INT < 26) goto L6;
        r2.setKeyboardNavigationCluster(r3);
        return;
    }

    public static boolean isFocusedByDefault(@NonNull View r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return false;
    L5:
        return r2.isFocusedByDefault();
    }

    public static void setFocusedByDefault(@NonNull View r2, boolean r3) {
        if (Build.VERSION.SDK_INT < 26) goto L6;
        r2.setFocusedByDefault(r3);
        return;
    }

    public static View keyboardNavigationClusterSearch(@NonNull View r2, View r3, int r4) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return null;
    L5:
        return r2.keyboardNavigationClusterSearch(r3, r4);
    }

    public static void addKeyboardNavigationClusters(@NonNull View r2, @NonNull Collection<View> r3, int r4) {
        if (Build.VERSION.SDK_INT < 26) goto L6;
        r2.addKeyboardNavigationClusters(r3, r4);
        return;
    }

    public static boolean restoreDefaultFocus(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return r2.restoreDefaultFocus();
    L7:
        return r2.requestFocus();
    }

    public static boolean hasExplicitFocusable(@NonNull View r2) {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return r2.hasExplicitFocusable();
    L7:
        return r2.hasFocusable();
    }

    public static int generateViewId() {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
    L6:
        int r0 = sNextGeneratedId.get();
        int r1 = r0 + 1;
        if (r1 <= 16777215) goto L10;
        r1 = 1;
    L10:
        if (sNextGeneratedId.compareAndSet(r0, r1) == false) goto L6;
        return r0;
    L5:
        return View.generateViewId();
    }

    public static void addOnUnhandledKeyEventListener(@NonNull View r2, @NonNull OnUnhandledKeyEventListenerCompat r3) {
        if (Build.VERSION.SDK_INT < 28) goto L9;
        Map r0 = (Map) r2.getTag(R.id.tag_unhandled_key_listeners);
        if (r0 != null) goto L7;
        r0 = new ArrayMap();
        r2.setTag(R.id.tag_unhandled_key_listeners, r0);
    L7:
        OnUnhandledKeyEventListenerWrapper r1 = new OnUnhandledKeyEventListenerWrapper(r3);
        r0.put(r3, r1);
        r2.addOnUnhandledKeyEventListener(r1);
        return;
    L9:
        ArrayList r02 = (ArrayList) r2.getTag(R.id.tag_unhandled_key_listeners);
        if (r02 != null) goto L12;
        r02 = new ArrayList();
        r2.setTag(R.id.tag_unhandled_key_listeners, r02);
    L12:
        r02.add(r3);
        if (r02.size() != 1) goto L16;
        UnhandledKeyEventManager.registerListeningView(r2);
        return;
    }

    public static void removeOnUnhandledKeyEventListener(@NonNull View r2, @NonNull OnUnhandledKeyEventListenerCompat r3) {
        if (Build.VERSION.SDK_INT < 28) goto L11;
        Map r0 = (Map) r2.getTag(R.id.tag_unhandled_key_listeners);
        if (r0 != null) goto L7;
        return;
    L7:
        View.OnUnhandledKeyEventListener r32 = (View.OnUnhandledKeyEventListener) r0.get(r3);
        if (r32 == null) goto L17;
        r2.removeOnUnhandledKeyEventListener(r32);
        return;
    L17:
        return;
    L11:
        ArrayList r02 = (ArrayList) r2.getTag(R.id.tag_unhandled_key_listeners);
        if (r02 == null) goto L18;
        r02.remove(r3);
        if (r02.size() != 0) goto L19;
        UnhandledKeyEventManager.unregisterListeningView(r2);
        return;
    L19:
        return;
    }

    protected ViewCompat() {
    }

    @UiThread
    static boolean dispatchUnhandledKeyEventBeforeHierarchy(View r2, KeyEvent r3) {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return false;
    L7:
        return UnhandledKeyEventManager.at(r2).preDispatch(r3);
    }

    @UiThread
    static boolean dispatchUnhandledKeyEventBeforeCallback(View r2, KeyEvent r3) {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return false;
    L7:
        return UnhandledKeyEventManager.at(r2).dispatch(r2, r3);
    }
}
