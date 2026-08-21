package android.support.v4.view;

public class ViewCompat {
    public static final int ACCESSIBILITY_LIVE_REGION_ASSERTIVE = 2;
    public static final int ACCESSIBILITY_LIVE_REGION_NONE = 0;
    public static final int ACCESSIBILITY_LIVE_REGION_POLITE = 1;
    public static final int IMPORTANT_FOR_ACCESSIBILITY_AUTO = 0;
    public static final int IMPORTANT_FOR_ACCESSIBILITY_NO = 2;
    public static final int IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS = 4;
    public static final int IMPORTANT_FOR_ACCESSIBILITY_YES = 1;

    @java.lang.Deprecated
    public static final int LAYER_TYPE_HARDWARE = 2;

    @java.lang.Deprecated
    public static final int LAYER_TYPE_NONE = 0;

    @java.lang.Deprecated
    public static final int LAYER_TYPE_SOFTWARE = 1;
    public static final int LAYOUT_DIRECTION_INHERIT = 2;
    public static final int LAYOUT_DIRECTION_LOCALE = 3;
    public static final int LAYOUT_DIRECTION_LTR = 0;
    public static final int LAYOUT_DIRECTION_RTL = 1;

    @java.lang.Deprecated
    public static final int MEASURED_HEIGHT_STATE_SHIFT = 16;

    @java.lang.Deprecated
    public static final int MEASURED_SIZE_MASK = 16777215;

    @java.lang.Deprecated
    public static final int MEASURED_STATE_MASK = -16777216;

    @java.lang.Deprecated
    public static final int MEASURED_STATE_TOO_SMALL = 16777216;

    @java.lang.Deprecated
    public static final int OVER_SCROLL_ALWAYS = 0;

    @java.lang.Deprecated
    public static final int OVER_SCROLL_IF_CONTENT_SCROLLS = 1;

    @java.lang.Deprecated
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
    private static final java.lang.String TAG = "ViewCompat";
    public static final int TYPE_NON_TOUCH = 1;
    public static final int TYPE_TOUCH = 0;
    private static boolean sAccessibilityDelegateCheckFailed;
    private static java.lang.reflect.Field sAccessibilityDelegateField;
    private static java.lang.reflect.Method sChildrenDrawingOrderMethod;
    private static java.lang.reflect.Method sDispatchFinishTemporaryDetach;
    private static java.lang.reflect.Method sDispatchStartTemporaryDetach;
    private static java.lang.reflect.Field sMinHeightField;
    private static boolean sMinHeightFieldFetched;
    private static java.lang.reflect.Field sMinWidthField;
    private static boolean sMinWidthFieldFetched;
    private static final java.util.concurrent.atomic.AtomicInteger sNextGeneratedId = null;
    private static boolean sTempDetachBound;
    private static java.lang.ThreadLocal<android.graphics.Rect> sThreadLocalRect;
    private static java.util.WeakHashMap<android.view.View, java.lang.String> sTransitionNameMap;
    private static java.util.WeakHashMap<android.view.View, android.support.v4.view.ViewPropertyAnimatorCompat> sViewPropertyAnimatorMap;


    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface FocusDirection {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface FocusRealDirection {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface FocusRelativeDirection {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface NestedScrollType {
    }

    public interface OnUnhandledKeyEventListenerCompat {
        boolean onUnhandledKeyEvent(android.view.View r1, android.view.KeyEvent r2);
    }

    @android.support.annotation.RequiresApi(28)
    private static class OnUnhandledKeyEventListenerWrapper implements android.view.View.OnUnhandledKeyEventListener {
        private android.support.v4.view.ViewCompat.OnUnhandledKeyEventListenerCompat mCompatListener;

        OnUnhandledKeyEventListenerWrapper(android.support.v4.view.ViewCompat.OnUnhandledKeyEventListenerCompat r1) {
                r0 = this;
                r0.<init>()
                r0.mCompatListener = r1
                return
        }

        @Override
        public boolean onUnhandledKeyEvent(android.view.View r2, android.view.KeyEvent r3) {
                r1 = this;
                android.support.v4.view.ViewCompat$OnUnhandledKeyEventListenerCompat r0 = r1.mCompatListener
                boolean r2 = r0.onUnhandledKeyEvent(r2, r3)
                return r2
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface ScrollAxis {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface ScrollIndicators {
    }

    static class UnhandledKeyEventManager {
        private static final java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> sViewsWithListeners = null;
        private android.util.SparseArray<java.lang.ref.WeakReference<android.view.View>> mCapturedKeys;
        private java.lang.ref.WeakReference<android.view.KeyEvent> mLastDispatchedPreViewKeyEvent;

        @android.support.annotation.Nullable
        private java.util.WeakHashMap<android.view.View, java.lang.Boolean> mViewsContainingListeners;

        static {
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners = r0
                return
        }

        UnhandledKeyEventManager() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.mViewsContainingListeners = r0
                r1.mCapturedKeys = r0
                r1.mLastDispatchedPreViewKeyEvent = r0
                return
        }

        static android.support.v4.view.ViewCompat.UnhandledKeyEventManager at(android.view.View r2) {
                int r0 = android.support.compat.R.id.tag_unhandled_key_event_manager
                java.lang.Object r0 = r2.getTag(r0)
                android.support.v4.view.ViewCompat$UnhandledKeyEventManager r0 = (android.support.v4.view.ViewCompat.UnhandledKeyEventManager) r0
                if (r0 != 0) goto L14
                android.support.v4.view.ViewCompat$UnhandledKeyEventManager r0 = new android.support.v4.view.ViewCompat$UnhandledKeyEventManager
                r0.<init>()
                int r1 = android.support.compat.R.id.tag_unhandled_key_event_manager
                r2.setTag(r1, r0)
            L14:
                return r0
        }

        @android.support.annotation.Nullable
        private android.view.View dispatchInOrder(android.view.View r5, android.view.KeyEvent r6) {
                r4 = this;
                java.util.WeakHashMap<android.view.View, java.lang.Boolean> r0 = r4.mViewsContainingListeners
                r1 = 0
                if (r0 == 0) goto L30
                boolean r0 = r0.containsKey(r5)
                if (r0 != 0) goto Lc
                goto L30
            Lc:
                boolean r0 = r5 instanceof android.view.ViewGroup
                if (r0 == 0) goto L29
                r0 = r5
                android.view.ViewGroup r0 = (android.view.ViewGroup) r0
                int r2 = r0.getChildCount()
                int r2 = r2 + (-1)
            L19:
                if (r2 < 0) goto L29
                android.view.View r3 = r0.getChildAt(r2)
                android.view.View r3 = r4.dispatchInOrder(r3, r6)
                if (r3 == 0) goto L26
                return r3
            L26:
                int r2 = r2 + (-1)
                goto L19
            L29:
                boolean r6 = r4.onUnhandledKeyEvent(r5, r6)
                if (r6 == 0) goto L30
                return r5
            L30:
                return r1
        }

        private android.util.SparseArray<java.lang.ref.WeakReference<android.view.View>> getCapturedKeys() {
                r1 = this;
                android.util.SparseArray<java.lang.ref.WeakReference<android.view.View>> r0 = r1.mCapturedKeys
                if (r0 != 0) goto Lb
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1.mCapturedKeys = r0
            Lb:
                android.util.SparseArray<java.lang.ref.WeakReference<android.view.View>> r0 = r1.mCapturedKeys
                return r0
        }

        private boolean onUnhandledKeyEvent(@android.support.annotation.NonNull android.view.View r5, @android.support.annotation.NonNull android.view.KeyEvent r6) {
                r4 = this;
                int r0 = android.support.compat.R.id.tag_unhandled_key_listeners
                java.lang.Object r0 = r5.getTag(r0)
                java.util.ArrayList r0 = (java.util.ArrayList) r0
                if (r0 == 0) goto L22
                int r1 = r0.size()
                r2 = 1
                int r1 = r1 - r2
            L10:
                if (r1 < 0) goto L22
                java.lang.Object r3 = r0.get(r1)
                android.support.v4.view.ViewCompat$OnUnhandledKeyEventListenerCompat r3 = (android.support.v4.view.ViewCompat.OnUnhandledKeyEventListenerCompat) r3
                boolean r3 = r3.onUnhandledKeyEvent(r5, r6)
                if (r3 == 0) goto L1f
                return r2
            L1f:
                int r1 = r1 + (-1)
                goto L10
            L22:
                r5 = 0
                return r5
        }

        private void recalcViewsWithUnhandled() {
                r6 = this;
                java.util.WeakHashMap<android.view.View, java.lang.Boolean> r0 = r6.mViewsContainingListeners
                if (r0 == 0) goto L7
                r0.clear()
            L7:
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r0 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto L10
                return
            L10:
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r0 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners
                monitor-enter(r0)
                java.util.WeakHashMap<android.view.View, java.lang.Boolean> r1 = r6.mViewsContainingListeners     // Catch: java.lang.Throwable -> L61
                if (r1 != 0) goto L1e
                java.util.WeakHashMap r1 = new java.util.WeakHashMap     // Catch: java.lang.Throwable -> L61
                r1.<init>()     // Catch: java.lang.Throwable -> L61
                r6.mViewsContainingListeners = r1     // Catch: java.lang.Throwable -> L61
            L1e:
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r1 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners     // Catch: java.lang.Throwable -> L61
                int r1 = r1.size()     // Catch: java.lang.Throwable -> L61
                int r1 = r1 + (-1)
            L26:
                if (r1 < 0) goto L5f
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r2 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners     // Catch: java.lang.Throwable -> L61
                java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L61
                java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L61
                java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L61
                android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Throwable -> L61
                if (r2 != 0) goto L3e
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r2 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners     // Catch: java.lang.Throwable -> L61
                r2.remove(r1)     // Catch: java.lang.Throwable -> L61
                goto L5c
            L3e:
                java.util.WeakHashMap<android.view.View, java.lang.Boolean> r3 = r6.mViewsContainingListeners     // Catch: java.lang.Throwable -> L61
                java.lang.Boolean r4 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L61
                r3.put(r2, r4)     // Catch: java.lang.Throwable -> L61
                android.view.ViewParent r2 = r2.getParent()     // Catch: java.lang.Throwable -> L61
            L49:
                boolean r3 = r2 instanceof android.view.View     // Catch: java.lang.Throwable -> L61
                if (r3 == 0) goto L5c
                java.util.WeakHashMap<android.view.View, java.lang.Boolean> r3 = r6.mViewsContainingListeners     // Catch: java.lang.Throwable -> L61
                r4 = r2
                android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L61
                java.lang.Boolean r5 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L61
                r3.put(r4, r5)     // Catch: java.lang.Throwable -> L61
                android.view.ViewParent r2 = r2.getParent()     // Catch: java.lang.Throwable -> L61
                goto L49
            L5c:
                int r1 = r1 + (-1)
                goto L26
            L5f:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L61
                return
            L61:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L61
                throw r1
        }

        static void registerListeningView(android.view.View r3) {
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r0 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners
                monitor-enter(r0)
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r1 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners     // Catch: java.lang.Throwable -> L29
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L29
            L9:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L29
                if (r2 == 0) goto L1d
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L29
                java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L29
                java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L29
                if (r2 != r3) goto L9
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
                return
            L1d:
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r1 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners     // Catch: java.lang.Throwable -> L29
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L29
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L29
                r1.add(r2)     // Catch: java.lang.Throwable -> L29
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
                return
            L29:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
                throw r3
        }

        static void unregisterListeningView(android.view.View r3) {
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r0 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners
                monitor-enter(r0)
                r1 = 0
            L4:
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r2 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners     // Catch: java.lang.Throwable -> L26
                int r2 = r2.size()     // Catch: java.lang.Throwable -> L26
                if (r1 >= r2) goto L24
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r2 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners     // Catch: java.lang.Throwable -> L26
                java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L26
                java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L26
                java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L26
                if (r2 != r3) goto L21
                java.util.ArrayList<java.lang.ref.WeakReference<android.view.View>> r3 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.sViewsWithListeners     // Catch: java.lang.Throwable -> L26
                r3.remove(r1)     // Catch: java.lang.Throwable -> L26
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
                return
            L21:
                int r1 = r1 + 1
                goto L4
            L24:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
                return
            L26:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
                throw r3
        }

        boolean dispatch(android.view.View r3, android.view.KeyEvent r4) {
                r2 = this;
                int r0 = r4.getAction()
                if (r0 != 0) goto L9
                r2.recalcViewsWithUnhandled()
            L9:
                android.view.View r3 = r2.dispatchInOrder(r3, r4)
                int r0 = r4.getAction()
                if (r0 != 0) goto L2b
                int r4 = r4.getKeyCode()
                if (r3 == 0) goto L2b
                boolean r0 = android.view.KeyEvent.isModifierKey(r4)
                if (r0 != 0) goto L2b
                android.util.SparseArray r0 = r2.getCapturedKeys()
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r3)
                r0.put(r4, r1)
            L2b:
                if (r3 == 0) goto L2f
                r3 = 1
                goto L30
            L2f:
                r3 = 0
            L30:
                return r3
        }

        boolean preDispatch(android.view.KeyEvent r6) {
                r5 = this;
                java.lang.ref.WeakReference<android.view.KeyEvent> r0 = r5.mLastDispatchedPreViewKeyEvent
                r1 = 0
                if (r0 == 0) goto Lc
                java.lang.Object r0 = r0.get()
                if (r0 != r6) goto Lc
                return r1
            Lc:
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r6)
                r5.mLastDispatchedPreViewKeyEvent = r0
                r0 = 0
                android.util.SparseArray r2 = r5.getCapturedKeys()
                int r3 = r6.getAction()
                r4 = 1
                if (r3 != r4) goto L32
                int r3 = r6.getKeyCode()
                int r3 = r2.indexOfKey(r3)
                if (r3 < 0) goto L32
                java.lang.Object r0 = r2.valueAt(r3)
                java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
                r2.removeAt(r3)
            L32:
                if (r0 != 0) goto L3e
                int r0 = r6.getKeyCode()
                java.lang.Object r0 = r2.get(r0)
                java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
            L3e:
                if (r0 == 0) goto L52
                java.lang.Object r0 = r0.get()
                android.view.View r0 = (android.view.View) r0
                if (r0 == 0) goto L51
                boolean r1 = android.support.v4.view.ViewCompat.isAttachedToWindow(r0)
                if (r1 == 0) goto L51
                r5.onUnhandledKeyEvent(r0, r6)
            L51:
                return r4
            L52:
                return r1
        }
    }

    static {
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            android.support.v4.view.ViewCompat.sNextGeneratedId = r0
            r0 = 0
            android.support.v4.view.ViewCompat.sViewPropertyAnimatorMap = r0
            r0 = 0
            android.support.v4.view.ViewCompat.sAccessibilityDelegateCheckFailed = r0
            return
    }

    protected ViewCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addKeyboardNavigationClusters(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.NonNull java.util.Collection<android.view.View> r3, int r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L9
            r2.addKeyboardNavigationClusters(r3, r4)
        L9:
            return
    }

    public static void addOnUnhandledKeyEventListener(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.NonNull android.support.v4.view.ViewCompat.OnUnhandledKeyEventListenerCompat r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L26
            int r0 = android.support.compat.R.id.tag_unhandled_key_listeners
            java.lang.Object r0 = r2.getTag(r0)
            java.util.Map r0 = (java.util.Map) r0
            if (r0 != 0) goto L1a
            android.support.v4.util.ArrayMap r0 = new android.support.v4.util.ArrayMap
            r0.<init>()
            int r1 = android.support.compat.R.id.tag_unhandled_key_listeners
            r2.setTag(r1, r0)
        L1a:
            android.support.v4.view.ViewCompat$OnUnhandledKeyEventListenerWrapper r1 = new android.support.v4.view.ViewCompat$OnUnhandledKeyEventListenerWrapper
            r1.<init>(r3)
            r0.put(r3, r1)
            r2.addOnUnhandledKeyEventListener(r1)
            return
        L26:
            int r0 = android.support.compat.R.id.tag_unhandled_key_listeners
            java.lang.Object r0 = r2.getTag(r0)
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            if (r0 != 0) goto L3a
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = android.support.compat.R.id.tag_unhandled_key_listeners
            r2.setTag(r1, r0)
        L3a:
            r0.add(r3)
            int r3 = r0.size()
            r0 = 1
            if (r3 != r0) goto L47
            android.support.v4.view.ViewCompat.UnhandledKeyEventManager.registerListeningView(r2)
        L47:
            return
    }

    @android.support.annotation.NonNull
    public static android.support.v4.view.ViewPropertyAnimatorCompat animate(@android.support.annotation.NonNull android.view.View r2) {
            java.util.WeakHashMap<android.view.View, android.support.v4.view.ViewPropertyAnimatorCompat> r0 = android.support.v4.view.ViewCompat.sViewPropertyAnimatorMap
            if (r0 != 0) goto Lb
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            android.support.v4.view.ViewCompat.sViewPropertyAnimatorMap = r0
        Lb:
            java.util.WeakHashMap<android.view.View, android.support.v4.view.ViewPropertyAnimatorCompat> r0 = android.support.v4.view.ViewCompat.sViewPropertyAnimatorMap
            java.lang.Object r0 = r0.get(r2)
            android.support.v4.view.ViewPropertyAnimatorCompat r0 = (android.support.v4.view.ViewPropertyAnimatorCompat) r0
            if (r0 != 0) goto L1f
            android.support.v4.view.ViewPropertyAnimatorCompat r0 = new android.support.v4.view.ViewPropertyAnimatorCompat
            r0.<init>(r2)
            java.util.WeakHashMap<android.view.View, android.support.v4.view.ViewPropertyAnimatorCompat> r1 = android.support.v4.view.ViewCompat.sViewPropertyAnimatorMap
            r1.put(r2, r0)
        L1f:
            return r0
    }

    private static void bindTempDetach() {
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.String r1 = "dispatchStartTemporaryDetach"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L1a
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> L1a
            android.support.v4.view.ViewCompat.sDispatchStartTemporaryDetach = r0     // Catch: java.lang.NoSuchMethodException -> L1a
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.String r1 = "dispatchFinishTemporaryDetach"
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L1a
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> L1a
            android.support.v4.view.ViewCompat.sDispatchFinishTemporaryDetach = r0     // Catch: java.lang.NoSuchMethodException -> L1a
            goto L22
        L1a:
            r0 = move-exception
            java.lang.String r1 = "ViewCompat"
            java.lang.String r2 = "Couldn't find method"
            android.util.Log.e(r1, r2, r0)
        L22:
            r0 = 1
            android.support.v4.view.ViewCompat.sTempDetachBound = r0
            return
    }

    @java.lang.Deprecated
    public static boolean canScrollHorizontally(android.view.View r0, int r1) {
            boolean r0 = r0.canScrollHorizontally(r1)
            return r0
    }

    @java.lang.Deprecated
    public static boolean canScrollVertically(android.view.View r0, int r1) {
            boolean r0 = r0.canScrollVertically(r1)
            return r0
    }

    public static void cancelDragAndDrop(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L9
            r2.cancelDragAndDrop()
        L9:
            return
    }

    @java.lang.Deprecated
    public static int combineMeasuredStates(int r0, int r1) {
            int r0 = android.view.View.combineMeasuredStates(r0, r1)
            return r0
    }

    private static void compatOffsetLeftAndRight(android.view.View r0, int r1) {
            r0.offsetLeftAndRight(r1)
            int r1 = r0.getVisibility()
            if (r1 != 0) goto L19
            tickleInvalidationFlag(r0)
            android.view.ViewParent r0 = r0.getParent()
            boolean r1 = r0 instanceof android.view.View
            if (r1 == 0) goto L19
            android.view.View r0 = (android.view.View) r0
            tickleInvalidationFlag(r0)
        L19:
            return
    }

    private static void compatOffsetTopAndBottom(android.view.View r0, int r1) {
            r0.offsetTopAndBottom(r1)
            int r1 = r0.getVisibility()
            if (r1 != 0) goto L19
            tickleInvalidationFlag(r0)
            android.view.ViewParent r0 = r0.getParent()
            boolean r1 = r0 instanceof android.view.View
            if (r1 == 0) goto L19
            android.view.View r0 = (android.view.View) r0
            tickleInvalidationFlag(r0)
        L19:
            return
    }

    public static android.support.v4.view.WindowInsetsCompat dispatchApplyWindowInsets(@android.support.annotation.NonNull android.view.View r2, android.support.v4.view.WindowInsetsCompat r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L1c
            java.lang.Object r3 = android.support.v4.view.WindowInsetsCompat.unwrap(r3)
            android.view.WindowInsets r3 = (android.view.WindowInsets) r3
            android.view.WindowInsets r2 = r2.dispatchApplyWindowInsets(r3)
            if (r2 == r3) goto L17
            android.view.WindowInsets r3 = new android.view.WindowInsets
            r3.<init>(r2)
        L17:
            android.support.v4.view.WindowInsetsCompat r2 = android.support.v4.view.WindowInsetsCompat.wrap(r3)
            return r2
        L1c:
            return r3
    }

    public static void dispatchFinishTemporaryDetach(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto La
            r2.dispatchFinishTemporaryDetach()
            goto L28
        La:
            boolean r0 = android.support.v4.view.ViewCompat.sTempDetachBound
            if (r0 != 0) goto L11
            bindTempDetach()
        L11:
            java.lang.reflect.Method r0 = android.support.v4.view.ViewCompat.sDispatchFinishTemporaryDetach
            if (r0 == 0) goto L25
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1c
            r0.invoke(r2, r1)     // Catch: java.lang.Exception -> L1c
            goto L28
        L1c:
            r2 = move-exception
            java.lang.String r0 = "ViewCompat"
            java.lang.String r1 = "Error calling dispatchFinishTemporaryDetach"
            android.util.Log.d(r0, r1, r2)
            goto L28
        L25:
            r2.onFinishTemporaryDetach()
        L28:
            return
    }

    public static boolean dispatchNestedFling(@android.support.annotation.NonNull android.view.View r2, float r3, float r4, boolean r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r2 = r2.dispatchNestedFling(r3, r4, r5)
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingChild
            if (r0 == 0) goto L16
            android.support.v4.view.NestedScrollingChild r2 = (android.support.v4.view.NestedScrollingChild) r2
            boolean r2 = r2.dispatchNestedFling(r3, r4, r5)
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static boolean dispatchNestedPreFling(@android.support.annotation.NonNull android.view.View r2, float r3, float r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r2 = r2.dispatchNestedPreFling(r3, r4)
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingChild
            if (r0 == 0) goto L16
            android.support.v4.view.NestedScrollingChild r2 = (android.support.v4.view.NestedScrollingChild) r2
            boolean r2 = r2.dispatchNestedPreFling(r3, r4)
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static boolean dispatchNestedPreScroll(@android.support.annotation.NonNull android.view.View r2, int r3, int r4, @android.support.annotation.Nullable int[] r5, @android.support.annotation.Nullable int[] r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r2 = r2.dispatchNestedPreScroll(r3, r4, r5, r6)
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingChild
            if (r0 == 0) goto L16
            android.support.v4.view.NestedScrollingChild r2 = (android.support.v4.view.NestedScrollingChild) r2
            boolean r2 = r2.dispatchNestedPreScroll(r3, r4, r5, r6)
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static boolean dispatchNestedPreScroll(@android.support.annotation.NonNull android.view.View r7, int r8, int r9, @android.support.annotation.Nullable int[] r10, @android.support.annotation.Nullable int[] r11, int r12) {
            boolean r0 = r7 instanceof android.support.v4.view.NestedScrollingChild2
            if (r0 == 0) goto L11
            r1 = r7
            android.support.v4.view.NestedScrollingChild2 r1 = (android.support.v4.view.NestedScrollingChild2) r1
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            boolean r7 = r1.dispatchNestedPreScroll(r2, r3, r4, r5, r6)
            return r7
        L11:
            if (r12 != 0) goto L18
            boolean r7 = dispatchNestedPreScroll(r7, r8, r9, r10, r11)
            return r7
        L18:
            r7 = 0
            return r7
    }

    public static boolean dispatchNestedScroll(@android.support.annotation.NonNull android.view.View r7, int r8, int r9, int r10, int r11, @android.support.annotation.Nullable int[] r12) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r7 = r7.dispatchNestedScroll(r8, r9, r10, r11, r12)
            return r7
        Lb:
            boolean r0 = r7 instanceof android.support.v4.view.NestedScrollingChild
            if (r0 == 0) goto L1c
            r1 = r7
            android.support.v4.view.NestedScrollingChild r1 = (android.support.v4.view.NestedScrollingChild) r1
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            boolean r7 = r1.dispatchNestedScroll(r2, r3, r4, r5, r6)
            return r7
        L1c:
            r7 = 0
            return r7
    }

    public static boolean dispatchNestedScroll(@android.support.annotation.NonNull android.view.View r8, int r9, int r10, int r11, int r12, @android.support.annotation.Nullable int[] r13, int r14) {
            boolean r0 = r8 instanceof android.support.v4.view.NestedScrollingChild2
            if (r0 == 0) goto L12
            r1 = r8
            android.support.v4.view.NestedScrollingChild2 r1 = (android.support.v4.view.NestedScrollingChild2) r1
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            boolean r8 = r1.dispatchNestedScroll(r2, r3, r4, r5, r6, r7)
            return r8
        L12:
            if (r14 != 0) goto L19
            boolean r8 = dispatchNestedScroll(r8, r9, r10, r11, r12, r13)
            return r8
        L19:
            r8 = 0
            return r8
    }

    public static void dispatchStartTemporaryDetach(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto La
            r2.dispatchStartTemporaryDetach()
            goto L28
        La:
            boolean r0 = android.support.v4.view.ViewCompat.sTempDetachBound
            if (r0 != 0) goto L11
            bindTempDetach()
        L11:
            java.lang.reflect.Method r0 = android.support.v4.view.ViewCompat.sDispatchStartTemporaryDetach
            if (r0 == 0) goto L25
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1c
            r0.invoke(r2, r1)     // Catch: java.lang.Exception -> L1c
            goto L28
        L1c:
            r2 = move-exception
            java.lang.String r0 = "ViewCompat"
            java.lang.String r1 = "Error calling dispatchStartTemporaryDetach"
            android.util.Log.d(r0, r1, r2)
            goto L28
        L25:
            r2.onStartTemporaryDetach()
        L28:
            return
    }

    @android.support.annotation.UiThread
    static boolean dispatchUnhandledKeyEventBeforeCallback(android.view.View r2, android.view.KeyEvent r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L8
            r2 = 0
            return r2
        L8:
            android.support.v4.view.ViewCompat$UnhandledKeyEventManager r0 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.at(r2)
            boolean r2 = r0.dispatch(r2, r3)
            return r2
    }

    @android.support.annotation.UiThread
    static boolean dispatchUnhandledKeyEventBeforeHierarchy(android.view.View r2, android.view.KeyEvent r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L8
            r2 = 0
            return r2
        L8:
            android.support.v4.view.ViewCompat$UnhandledKeyEventManager r2 = android.support.v4.view.ViewCompat.UnhandledKeyEventManager.at(r2)
            boolean r2 = r2.preDispatch(r3)
            return r2
    }

    public static int generateViewId() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            int r0 = android.view.View.generateViewId()
            return r0
        Lb:
            java.util.concurrent.atomic.AtomicInteger r0 = android.support.v4.view.ViewCompat.sNextGeneratedId
            int r0 = r0.get()
            int r1 = r0 + 1
            r2 = 16777215(0xffffff, float:2.3509886E-38)
            if (r1 <= r2) goto L19
            r1 = 1
        L19:
            java.util.concurrent.atomic.AtomicInteger r2 = android.support.v4.view.ViewCompat.sNextGeneratedId
            boolean r1 = r2.compareAndSet(r0, r1)
            if (r1 == 0) goto Lb
            return r0
    }

    public static int getAccessibilityLiveRegion(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            int r2 = r2.getAccessibilityLiveRegion()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L12
            android.view.accessibility.AccessibilityNodeProvider r2 = r2.getAccessibilityNodeProvider()
            if (r2 == 0) goto L12
            android.support.v4.view.accessibility.AccessibilityNodeProviderCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat
            r0.<init>(r2)
            return r0
        L12:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static float getAlpha(android.view.View r0) {
            float r0 = r0.getAlpha()
            return r0
    }

    public static android.content.res.ColorStateList getBackgroundTintList(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.content.res.ColorStateList r2 = r2.getBackgroundTintList()
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.view.TintableBackgroundView
            if (r0 == 0) goto L16
            android.support.v4.view.TintableBackgroundView r2 = (android.support.v4.view.TintableBackgroundView) r2
            android.content.res.ColorStateList r2 = r2.getSupportBackgroundTintList()
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    public static android.graphics.PorterDuff.Mode getBackgroundTintMode(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.graphics.PorterDuff$Mode r2 = r2.getBackgroundTintMode()
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.view.TintableBackgroundView
            if (r0 == 0) goto L16
            android.support.v4.view.TintableBackgroundView r2 = (android.support.v4.view.TintableBackgroundView) r2
            android.graphics.PorterDuff$Mode r2 = r2.getSupportBackgroundTintMode()
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    @android.support.annotation.Nullable
    public static android.graphics.Rect getClipBounds(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lb
            android.graphics.Rect r2 = r2.getClipBounds()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @android.support.annotation.Nullable
    public static android.view.Display getDisplay(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            android.view.Display r2 = r2.getDisplay()
            return r2
        Lb:
            boolean r0 = isAttachedToWindow(r2)
            if (r0 == 0) goto L22
            android.content.Context r2 = r2.getContext()
            java.lang.String r0 = "window"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.view.WindowManager r2 = (android.view.WindowManager) r2
            android.view.Display r2 = r2.getDefaultDisplay()
            return r2
        L22:
            r2 = 0
            return r2
    }

    public static float getElevation(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            float r2 = r2.getElevation()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    private static android.graphics.Rect getEmptyTempRect() {
            java.lang.ThreadLocal<android.graphics.Rect> r0 = android.support.v4.view.ViewCompat.sThreadLocalRect
            if (r0 != 0) goto Lb
            java.lang.ThreadLocal r0 = new java.lang.ThreadLocal
            r0.<init>()
            android.support.v4.view.ViewCompat.sThreadLocalRect = r0
        Lb:
            java.lang.ThreadLocal<android.graphics.Rect> r0 = android.support.v4.view.ViewCompat.sThreadLocalRect
            java.lang.Object r0 = r0.get()
            android.graphics.Rect r0 = (android.graphics.Rect) r0
            if (r0 != 0) goto L1f
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            java.lang.ThreadLocal<android.graphics.Rect> r1 = android.support.v4.view.ViewCompat.sThreadLocalRect
            r1.set(r0)
        L1f:
            r0.setEmpty()
            return r0
    }

    public static boolean getFitsSystemWindows(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            boolean r2 = r2.getFitsSystemWindows()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static int getImportantForAccessibility(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            int r2 = r2.getImportantForAccessibility()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @android.annotation.SuppressLint({"InlinedApi"})
    public static int getImportantForAutofill(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            int r2 = r2.getImportantForAutofill()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static int getLabelFor(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            int r2 = r2.getLabelFor()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static int getLayerType(android.view.View r0) {
            int r0 = r0.getLayerType()
            return r0
    }

    public static int getLayoutDirection(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            int r2 = r2.getLayoutDirection()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @android.support.annotation.Nullable
    @java.lang.Deprecated
    public static android.graphics.Matrix getMatrix(android.view.View r0) {
            android.graphics.Matrix r0 = r0.getMatrix()
            return r0
    }

    @java.lang.Deprecated
    public static int getMeasuredHeightAndState(android.view.View r0) {
            int r0 = r0.getMeasuredHeightAndState()
            return r0
    }

    @java.lang.Deprecated
    public static int getMeasuredState(android.view.View r0) {
            int r0 = r0.getMeasuredState()
            return r0
    }

    @java.lang.Deprecated
    public static int getMeasuredWidthAndState(android.view.View r0) {
            int r0 = r0.getMeasuredWidthAndState()
            return r0
    }

    public static int getMinimumHeight(@android.support.annotation.NonNull android.view.View r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            int r3 = r3.getMinimumHeight()
            return r3
        Lb:
            boolean r0 = android.support.v4.view.ViewCompat.sMinHeightFieldFetched
            if (r0 != 0) goto L21
            r0 = 1
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "mMinHeight"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.NoSuchFieldException -> L1f
            android.support.v4.view.ViewCompat.sMinHeightField = r1     // Catch: java.lang.NoSuchFieldException -> L1f
            java.lang.reflect.Field r1 = android.support.v4.view.ViewCompat.sMinHeightField     // Catch: java.lang.NoSuchFieldException -> L1f
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchFieldException -> L1f
        L1f:
            android.support.v4.view.ViewCompat.sMinHeightFieldFetched = r0
        L21:
            java.lang.reflect.Field r0 = android.support.v4.view.ViewCompat.sMinHeightField
            if (r0 == 0) goto L30
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Exception -> L30
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L30
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L30
            return r3
        L30:
            r3 = 0
            return r3
    }

    public static int getMinimumWidth(@android.support.annotation.NonNull android.view.View r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            int r3 = r3.getMinimumWidth()
            return r3
        Lb:
            boolean r0 = android.support.v4.view.ViewCompat.sMinWidthFieldFetched
            if (r0 != 0) goto L21
            r0 = 1
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "mMinWidth"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.NoSuchFieldException -> L1f
            android.support.v4.view.ViewCompat.sMinWidthField = r1     // Catch: java.lang.NoSuchFieldException -> L1f
            java.lang.reflect.Field r1 = android.support.v4.view.ViewCompat.sMinWidthField     // Catch: java.lang.NoSuchFieldException -> L1f
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchFieldException -> L1f
        L1f:
            android.support.v4.view.ViewCompat.sMinWidthFieldFetched = r0
        L21:
            java.lang.reflect.Field r0 = android.support.v4.view.ViewCompat.sMinWidthField
            if (r0 == 0) goto L30
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Exception -> L30
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L30
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L30
            return r3
        L30:
            r3 = 0
            return r3
    }

    public static int getNextClusterForwardId(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            int r2 = r2.getNextClusterForwardId()
            return r2
        Lb:
            r2 = -1
            return r2
    }

    @java.lang.Deprecated
    public static int getOverScrollMode(android.view.View r0) {
            int r0 = r0.getOverScrollMode()
            return r0
    }

    @android.support.annotation.Px
    public static int getPaddingEnd(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            int r2 = r2.getPaddingEnd()
            return r2
        Lb:
            int r2 = r2.getPaddingRight()
            return r2
    }

    @android.support.annotation.Px
    public static int getPaddingStart(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            int r2 = r2.getPaddingStart()
            return r2
        Lb:
            int r2 = r2.getPaddingLeft()
            return r2
    }

    public static android.view.ViewParent getParentForAccessibility(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            android.view.ViewParent r2 = r2.getParentForAccessibility()
            return r2
        Lb:
            android.view.ViewParent r2 = r2.getParent()
            return r2
    }

    @java.lang.Deprecated
    public static float getPivotX(android.view.View r0) {
            float r0 = r0.getPivotX()
            return r0
    }

    @java.lang.Deprecated
    public static float getPivotY(android.view.View r0) {
            float r0 = r0.getPivotY()
            return r0
    }

    @java.lang.Deprecated
    public static float getRotation(android.view.View r0) {
            float r0 = r0.getRotation()
            return r0
    }

    @java.lang.Deprecated
    public static float getRotationX(android.view.View r0) {
            float r0 = r0.getRotationX()
            return r0
    }

    @java.lang.Deprecated
    public static float getRotationY(android.view.View r0) {
            float r0 = r0.getRotationY()
            return r0
    }

    @java.lang.Deprecated
    public static float getScaleX(android.view.View r0) {
            float r0 = r0.getScaleX()
            return r0
    }

    @java.lang.Deprecated
    public static float getScaleY(android.view.View r0) {
            float r0 = r0.getScaleY()
            return r0
    }

    public static int getScrollIndicators(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            int r2 = r2.getScrollIndicators()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @android.support.annotation.Nullable
    public static java.lang.String getTransitionName(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            java.lang.String r2 = r2.getTransitionName()
            return r2
        Lb:
            java.util.WeakHashMap<android.view.View, java.lang.String> r0 = android.support.v4.view.ViewCompat.sTransitionNameMap
            if (r0 != 0) goto L11
            r2 = 0
            return r2
        L11:
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    @java.lang.Deprecated
    public static float getTranslationX(android.view.View r0) {
            float r0 = r0.getTranslationX()
            return r0
    }

    @java.lang.Deprecated
    public static float getTranslationY(android.view.View r0) {
            float r0 = r0.getTranslationY()
            return r0
    }

    public static float getTranslationZ(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            float r2 = r2.getTranslationZ()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static int getWindowSystemUiVisibility(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            int r2 = r2.getWindowSystemUiVisibility()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static float getX(android.view.View r0) {
            float r0 = r0.getX()
            return r0
    }

    @java.lang.Deprecated
    public static float getY(android.view.View r0) {
            float r0 = r0.getY()
            return r0
    }

    public static float getZ(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            float r2 = r2.getZ()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static boolean hasAccessibilityDelegate(@android.support.annotation.NonNull android.view.View r4) {
            boolean r0 = android.support.v4.view.ViewCompat.sAccessibilityDelegateCheckFailed
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            java.lang.reflect.Field r0 = android.support.v4.view.ViewCompat.sAccessibilityDelegateField
            r2 = 1
            if (r0 != 0) goto L1e
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.String r3 = "mAccessibilityDelegate"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r3)     // Catch: java.lang.Throwable -> L1b
            android.support.v4.view.ViewCompat.sAccessibilityDelegateField = r0     // Catch: java.lang.Throwable -> L1b
            java.lang.reflect.Field r0 = android.support.v4.view.ViewCompat.sAccessibilityDelegateField     // Catch: java.lang.Throwable -> L1b
            r0.setAccessible(r2)     // Catch: java.lang.Throwable -> L1b
            goto L1e
        L1b:
            android.support.v4.view.ViewCompat.sAccessibilityDelegateCheckFailed = r2
            return r1
        L1e:
            java.lang.reflect.Field r0 = android.support.v4.view.ViewCompat.sAccessibilityDelegateField     // Catch: java.lang.Throwable -> L28
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Throwable -> L28
            if (r4 == 0) goto L27
            r1 = 1
        L27:
            return r1
        L28:
            android.support.v4.view.ViewCompat.sAccessibilityDelegateCheckFailed = r2
            return r1
    }

    public static boolean hasExplicitFocusable(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            boolean r2 = r2.hasExplicitFocusable()
            return r2
        Lb:
            boolean r2 = r2.hasFocusable()
            return r2
    }

    public static boolean hasNestedScrollingParent(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r2 = r2.hasNestedScrollingParent()
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingChild
            if (r0 == 0) goto L16
            android.support.v4.view.NestedScrollingChild r2 = (android.support.v4.view.NestedScrollingChild) r2
            boolean r2 = r2.hasNestedScrollingParent()
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static boolean hasNestedScrollingParent(@android.support.annotation.NonNull android.view.View r1, int r2) {
            boolean r0 = r1 instanceof android.support.v4.view.NestedScrollingChild2
            if (r0 == 0) goto La
            android.support.v4.view.NestedScrollingChild2 r1 = (android.support.v4.view.NestedScrollingChild2) r1
            r1.hasNestedScrollingParent(r2)
            goto L11
        La:
            if (r2 != 0) goto L11
            boolean r1 = hasNestedScrollingParent(r1)
            return r1
        L11:
            r1 = 0
            return r1
    }

    public static boolean hasOnClickListeners(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 15
            if (r0 < r1) goto Lb
            boolean r2 = r2.hasOnClickListeners()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static boolean hasOverlappingRendering(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            boolean r2 = r2.hasOverlappingRendering()
            return r2
        Lb:
            r2 = 1
            return r2
    }

    public static boolean hasTransientState(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            boolean r2 = r2.hasTransientState()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static boolean isAttachedToWindow(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r2 = r2.isAttachedToWindow()
            return r2
        Lb:
            android.os.IBinder r2 = r2.getWindowToken()
            if (r2 == 0) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = 0
        L14:
            return r2
    }

    public static boolean isFocusedByDefault(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            boolean r2 = r2.isFocusedByDefault()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static boolean isImportantForAccessibility(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r2 = r2.isImportantForAccessibility()
            return r2
        Lb:
            r2 = 1
            return r2
    }

    public static boolean isImportantForAutofill(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            boolean r2 = r2.isImportantForAutofill()
            return r2
        Lb:
            r2 = 1
            return r2
    }

    public static boolean isInLayout(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lb
            boolean r2 = r2.isInLayout()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static boolean isKeyboardNavigationCluster(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            boolean r2 = r2.isKeyboardNavigationCluster()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static boolean isLaidOut(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r2 = r2.isLaidOut()
            return r2
        Lb:
            int r0 = r2.getWidth()
            if (r0 <= 0) goto L19
            int r2 = r2.getHeight()
            if (r2 <= 0) goto L19
            r2 = 1
            goto L1a
        L19:
            r2 = 0
        L1a:
            return r2
    }

    public static boolean isLayoutDirectionResolved(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r2 = r2.isLayoutDirectionResolved()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static boolean isNestedScrollingEnabled(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r2 = r2.isNestedScrollingEnabled()
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingChild
            if (r0 == 0) goto L16
            android.support.v4.view.NestedScrollingChild r2 = (android.support.v4.view.NestedScrollingChild) r2
            boolean r2 = r2.isNestedScrollingEnabled()
            return r2
        L16:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static boolean isOpaque(android.view.View r0) {
            boolean r0 = r0.isOpaque()
            return r0
    }

    public static boolean isPaddingRelative(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            boolean r2 = r2.isPaddingRelative()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static void jumpDrawablesToCurrentState(android.view.View r0) {
            r0.jumpDrawablesToCurrentState()
            return
    }

    public static android.view.View keyboardNavigationClusterSearch(@android.support.annotation.NonNull android.view.View r2, android.view.View r3, int r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            android.view.View r2 = r2.keyboardNavigationClusterSearch(r3, r4)
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static void offsetLeftAndRight(@android.support.annotation.NonNull android.view.View r6, int r7) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto La
            r6.offsetLeftAndRight(r7)
            goto L6d
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L6a
            android.graphics.Rect r0 = getEmptyTempRect()
            r1 = 0
            android.view.ViewParent r2 = r6.getParent()
            boolean r3 = r2 instanceof android.view.View
            if (r3 == 0) goto L49
            r1 = r2
            android.view.View r1 = (android.view.View) r1
            int r3 = r1.getLeft()
            int r4 = r1.getTop()
            int r5 = r1.getRight()
            int r1 = r1.getBottom()
            r0.set(r3, r4, r5, r1)
            int r1 = r6.getLeft()
            int r3 = r6.getTop()
            int r4 = r6.getRight()
            int r5 = r6.getBottom()
            boolean r1 = r0.intersects(r1, r3, r4, r5)
            r1 = r1 ^ 1
        L49:
            compatOffsetLeftAndRight(r6, r7)
            if (r1 == 0) goto L6d
            int r7 = r6.getLeft()
            int r1 = r6.getTop()
            int r3 = r6.getRight()
            int r6 = r6.getBottom()
            boolean r6 = r0.intersect(r7, r1, r3, r6)
            if (r6 == 0) goto L6d
            android.view.View r2 = (android.view.View) r2
            r2.invalidate(r0)
            goto L6d
        L6a:
            compatOffsetLeftAndRight(r6, r7)
        L6d:
            return
    }

    public static void offsetTopAndBottom(@android.support.annotation.NonNull android.view.View r6, int r7) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto La
            r6.offsetTopAndBottom(r7)
            goto L6d
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L6a
            android.graphics.Rect r0 = getEmptyTempRect()
            r1 = 0
            android.view.ViewParent r2 = r6.getParent()
            boolean r3 = r2 instanceof android.view.View
            if (r3 == 0) goto L49
            r1 = r2
            android.view.View r1 = (android.view.View) r1
            int r3 = r1.getLeft()
            int r4 = r1.getTop()
            int r5 = r1.getRight()
            int r1 = r1.getBottom()
            r0.set(r3, r4, r5, r1)
            int r1 = r6.getLeft()
            int r3 = r6.getTop()
            int r4 = r6.getRight()
            int r5 = r6.getBottom()
            boolean r1 = r0.intersects(r1, r3, r4, r5)
            r1 = r1 ^ 1
        L49:
            compatOffsetTopAndBottom(r6, r7)
            if (r1 == 0) goto L6d
            int r7 = r6.getLeft()
            int r1 = r6.getTop()
            int r3 = r6.getRight()
            int r6 = r6.getBottom()
            boolean r6 = r0.intersect(r7, r1, r3, r6)
            if (r6 == 0) goto L6d
            android.view.View r2 = (android.view.View) r2
            r2.invalidate(r0)
            goto L6d
        L6a:
            compatOffsetTopAndBottom(r6, r7)
        L6d:
            return
    }

    public static android.support.v4.view.WindowInsetsCompat onApplyWindowInsets(@android.support.annotation.NonNull android.view.View r2, android.support.v4.view.WindowInsetsCompat r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L1c
            java.lang.Object r3 = android.support.v4.view.WindowInsetsCompat.unwrap(r3)
            android.view.WindowInsets r3 = (android.view.WindowInsets) r3
            android.view.WindowInsets r2 = r2.onApplyWindowInsets(r3)
            if (r2 == r3) goto L17
            android.view.WindowInsets r3 = new android.view.WindowInsets
            r3.<init>(r2)
        L17:
            android.support.v4.view.WindowInsetsCompat r2 = android.support.v4.view.WindowInsetsCompat.wrap(r3)
            return r2
        L1c:
            return r3
    }

    @java.lang.Deprecated
    public static void onInitializeAccessibilityEvent(android.view.View r0, android.view.accessibility.AccessibilityEvent r1) {
            r0.onInitializeAccessibilityEvent(r1)
            return
    }

    public static void onInitializeAccessibilityNodeInfo(@android.support.annotation.NonNull android.view.View r0, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r1) {
            android.view.accessibility.AccessibilityNodeInfo r1 = r1.unwrap()
            r0.onInitializeAccessibilityNodeInfo(r1)
            return
    }

    @java.lang.Deprecated
    public static void onPopulateAccessibilityEvent(android.view.View r0, android.view.accessibility.AccessibilityEvent r1) {
            r0.onPopulateAccessibilityEvent(r1)
            return
    }

    public static boolean performAccessibilityAction(@android.support.annotation.NonNull android.view.View r2, int r3, android.os.Bundle r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            boolean r2 = r2.performAccessibilityAction(r3, r4)
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static void postInvalidateOnAnimation(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.postInvalidateOnAnimation()
            goto Ld
        La:
            r2.postInvalidate()
        Ld:
            return
    }

    public static void postInvalidateOnAnimation(@android.support.annotation.NonNull android.view.View r2, int r3, int r4, int r5, int r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.postInvalidateOnAnimation(r3, r4, r5, r6)
            goto Ld
        La:
            r2.postInvalidate(r3, r4, r5, r6)
        Ld:
            return
    }

    public static void postOnAnimation(@android.support.annotation.NonNull android.view.View r2, java.lang.Runnable r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.postOnAnimation(r3)
            goto L11
        La:
            long r0 = android.animation.ValueAnimator.getFrameDelay()
            r2.postDelayed(r3, r0)
        L11:
            return
    }

    public static void postOnAnimationDelayed(@android.support.annotation.NonNull android.view.View r2, java.lang.Runnable r3, long r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.postOnAnimationDelayed(r3, r4)
            goto L12
        La:
            long r0 = android.animation.ValueAnimator.getFrameDelay()
            long r0 = r0 + r4
            r2.postDelayed(r3, r0)
        L12:
            return
    }

    public static void removeOnUnhandledKeyEventListener(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.NonNull android.support.v4.view.ViewCompat.OnUnhandledKeyEventListenerCompat r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L1d
            int r0 = android.support.compat.R.id.tag_unhandled_key_listeners
            java.lang.Object r0 = r2.getTag(r0)
            java.util.Map r0 = (java.util.Map) r0
            if (r0 != 0) goto L11
            return
        L11:
            java.lang.Object r3 = r0.get(r3)
            android.view.View$OnUnhandledKeyEventListener r3 = (android.view.View.OnUnhandledKeyEventListener) r3
            if (r3 == 0) goto L1c
            r2.removeOnUnhandledKeyEventListener(r3)
        L1c:
            return
        L1d:
            int r0 = android.support.compat.R.id.tag_unhandled_key_listeners
            java.lang.Object r0 = r2.getTag(r0)
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            if (r0 == 0) goto L33
            r0.remove(r3)
            int r3 = r0.size()
            if (r3 != 0) goto L33
            android.support.v4.view.ViewCompat.UnhandledKeyEventManager.unregisterListeningView(r2)
        L33:
            return
    }

    public static void requestApplyInsets(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto La
            r2.requestApplyInsets()
            goto L13
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L13
            r2.requestFitSystemWindows()
        L13:
            return
    }

    @android.support.annotation.NonNull
    public static <T extends android.view.View> T requireViewById(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.IdRes int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lb
            android.view.View r2 = r2.requireViewById(r3)
            return r2
        Lb:
            android.view.View r2 = r2.findViewById(r3)
            if (r2 == 0) goto L12
            return r2
        L12:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "ID does not reference a View inside this View"
            r2.<init>(r3)
            throw r2
    }

    @java.lang.Deprecated
    public static int resolveSizeAndState(int r0, int r1, int r2) {
            int r0 = android.view.View.resolveSizeAndState(r0, r1, r2)
            return r0
    }

    public static boolean restoreDefaultFocus(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            boolean r2 = r2.restoreDefaultFocus()
            return r2
        Lb:
            boolean r2 = r2.requestFocus()
            return r2
    }

    public static void setAccessibilityDelegate(@android.support.annotation.NonNull android.view.View r0, android.support.v4.view.AccessibilityDelegateCompat r1) {
            if (r1 != 0) goto L4
            r1 = 0
            goto L8
        L4:
            android.view.View$AccessibilityDelegate r1 = r1.getBridge()
        L8:
            r0.setAccessibilityDelegate(r1)
            return
    }

    public static void setAccessibilityLiveRegion(@android.support.annotation.NonNull android.view.View r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            r2.setAccessibilityLiveRegion(r3)
        L9:
            return
    }

    @java.lang.Deprecated
    public static void setActivated(android.view.View r0, boolean r1) {
            r0.setActivated(r1)
            return
    }

    @java.lang.Deprecated
    public static void setAlpha(android.view.View r0, @android.support.annotation.FloatRange(from = 0.0d, to = 1.0d) float r1) {
            r0.setAlpha(r1)
            return
    }

    public static void setAutofillHints(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.Nullable java.lang.String... r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L9
            r2.setAutofillHints(r3)
        L9:
            return
    }

    public static void setBackground(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.Nullable android.graphics.drawable.Drawable r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.setBackground(r3)
            goto Ld
        La:
            r2.setBackgroundDrawable(r3)
        Ld:
            return
    }

    public static void setBackgroundTintList(@android.support.annotation.NonNull android.view.View r2, android.content.res.ColorStateList r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L36
            r2.setBackgroundTintList(r3)
            int r3 = android.os.Build.VERSION.SDK_INT
            if (r3 != r1) goto L3f
            android.graphics.drawable.Drawable r3 = r2.getBackground()
            android.content.res.ColorStateList r0 = r2.getBackgroundTintList()
            if (r0 != 0) goto L20
            android.graphics.PorterDuff$Mode r0 = r2.getBackgroundTintMode()
            if (r0 == 0) goto L1e
            goto L20
        L1e:
            r0 = 0
            goto L21
        L20:
            r0 = 1
        L21:
            if (r3 == 0) goto L3f
            if (r0 == 0) goto L3f
            boolean r0 = r3.isStateful()
            if (r0 == 0) goto L32
            int[] r0 = r2.getDrawableState()
            r3.setState(r0)
        L32:
            r2.setBackground(r3)
            goto L3f
        L36:
            boolean r0 = r2 instanceof android.support.v4.view.TintableBackgroundView
            if (r0 == 0) goto L3f
            android.support.v4.view.TintableBackgroundView r2 = (android.support.v4.view.TintableBackgroundView) r2
            r2.setSupportBackgroundTintList(r3)
        L3f:
            return
    }

    public static void setBackgroundTintMode(@android.support.annotation.NonNull android.view.View r2, android.graphics.PorterDuff.Mode r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L36
            r2.setBackgroundTintMode(r3)
            int r3 = android.os.Build.VERSION.SDK_INT
            if (r3 != r1) goto L3f
            android.graphics.drawable.Drawable r3 = r2.getBackground()
            android.content.res.ColorStateList r0 = r2.getBackgroundTintList()
            if (r0 != 0) goto L20
            android.graphics.PorterDuff$Mode r0 = r2.getBackgroundTintMode()
            if (r0 == 0) goto L1e
            goto L20
        L1e:
            r0 = 0
            goto L21
        L20:
            r0 = 1
        L21:
            if (r3 == 0) goto L3f
            if (r0 == 0) goto L3f
            boolean r0 = r3.isStateful()
            if (r0 == 0) goto L32
            int[] r0 = r2.getDrawableState()
            r3.setState(r0)
        L32:
            r2.setBackground(r3)
            goto L3f
        L36:
            boolean r0 = r2 instanceof android.support.v4.view.TintableBackgroundView
            if (r0 == 0) goto L3f
            android.support.v4.view.TintableBackgroundView r2 = (android.support.v4.view.TintableBackgroundView) r2
            r2.setSupportBackgroundTintMode(r3)
        L3f:
            return
    }

    @java.lang.Deprecated
    public static void setChildrenDrawingOrderEnabled(android.view.ViewGroup r8, boolean r9) {
            java.lang.String r0 = "Unable to invoke childrenDrawingOrderEnabled"
            java.lang.reflect.Method r1 = android.support.v4.view.ViewCompat.sChildrenDrawingOrderMethod
            r2 = 0
            r3 = 1
            java.lang.String r4 = "ViewCompat"
            if (r1 != 0) goto L26
            java.lang.Class<android.view.ViewGroup> r1 = android.view.ViewGroup.class
            java.lang.String r5 = "setChildrenDrawingOrderEnabled"
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L1b
            java.lang.Class r7 = java.lang.Boolean.TYPE     // Catch: java.lang.NoSuchMethodException -> L1b
            r6[r2] = r7     // Catch: java.lang.NoSuchMethodException -> L1b
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r5, r6)     // Catch: java.lang.NoSuchMethodException -> L1b
            android.support.v4.view.ViewCompat.sChildrenDrawingOrderMethod = r1     // Catch: java.lang.NoSuchMethodException -> L1b
            goto L21
        L1b:
            r1 = move-exception
            java.lang.String r5 = "Unable to find childrenDrawingOrderEnabled"
            android.util.Log.e(r4, r5, r1)
        L21:
            java.lang.reflect.Method r1 = android.support.v4.view.ViewCompat.sChildrenDrawingOrderMethod
            r1.setAccessible(r3)
        L26:
            java.lang.reflect.Method r1 = android.support.v4.view.ViewCompat.sChildrenDrawingOrderMethod     // Catch: java.lang.reflect.InvocationTargetException -> L34 java.lang.IllegalArgumentException -> L39 java.lang.IllegalAccessException -> L3e
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L34 java.lang.IllegalArgumentException -> L39 java.lang.IllegalAccessException -> L3e
            java.lang.Boolean r9 = java.lang.Boolean.valueOf(r9)     // Catch: java.lang.reflect.InvocationTargetException -> L34 java.lang.IllegalArgumentException -> L39 java.lang.IllegalAccessException -> L3e
            r3[r2] = r9     // Catch: java.lang.reflect.InvocationTargetException -> L34 java.lang.IllegalArgumentException -> L39 java.lang.IllegalAccessException -> L3e
            r1.invoke(r8, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L34 java.lang.IllegalArgumentException -> L39 java.lang.IllegalAccessException -> L3e
            goto L42
        L34:
            r8 = move-exception
            android.util.Log.e(r4, r0, r8)
            goto L42
        L39:
            r8 = move-exception
            android.util.Log.e(r4, r0, r8)
            goto L42
        L3e:
            r8 = move-exception
            android.util.Log.e(r4, r0, r8)
        L42:
            return
    }

    public static void setClipBounds(@android.support.annotation.NonNull android.view.View r2, android.graphics.Rect r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L9
            r2.setClipBounds(r3)
        L9:
            return
    }

    public static void setElevation(@android.support.annotation.NonNull android.view.View r2, float r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            r2.setElevation(r3)
        L9:
            return
    }

    @java.lang.Deprecated
    public static void setFitsSystemWindows(android.view.View r0, boolean r1) {
            r0.setFitsSystemWindows(r1)
            return
    }

    public static void setFocusedByDefault(@android.support.annotation.NonNull android.view.View r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L9
            r2.setFocusedByDefault(r3)
        L9:
            return
    }

    public static void setHasTransientState(@android.support.annotation.NonNull android.view.View r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L9
            r2.setHasTransientState(r3)
        L9:
            return
    }

    public static void setImportantForAccessibility(@android.support.annotation.NonNull android.view.View r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto La
            r2.setImportantForAccessibility(r3)
            goto L17
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L17
            r0 = 4
            if (r3 != r0) goto L14
            r3 = 2
        L14:
            r2.setImportantForAccessibility(r3)
        L17:
            return
    }

    public static void setImportantForAutofill(@android.support.annotation.NonNull android.view.View r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L9
            r2.setImportantForAutofill(r3)
        L9:
            return
    }

    public static void setKeyboardNavigationCluster(@android.support.annotation.NonNull android.view.View r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L9
            r2.setKeyboardNavigationCluster(r3)
        L9:
            return
    }

    public static void setLabelFor(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.IdRes int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L9
            r2.setLabelFor(r3)
        L9:
            return
    }

    public static void setLayerPaint(@android.support.annotation.NonNull android.view.View r2, android.graphics.Paint r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto La
            r2.setLayerPaint(r3)
            goto L14
        La:
            int r0 = r2.getLayerType()
            r2.setLayerType(r0, r3)
            r2.invalidate()
        L14:
            return
    }

    @java.lang.Deprecated
    public static void setLayerType(android.view.View r0, int r1, android.graphics.Paint r2) {
            r0.setLayerType(r1, r2)
            return
    }

    public static void setLayoutDirection(@android.support.annotation.NonNull android.view.View r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L9
            r2.setLayoutDirection(r3)
        L9:
            return
    }

    public static void setNestedScrollingEnabled(@android.support.annotation.NonNull android.view.View r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.setNestedScrollingEnabled(r3)
            goto L13
        La:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingChild
            if (r0 == 0) goto L13
            android.support.v4.view.NestedScrollingChild r2 = (android.support.v4.view.NestedScrollingChild) r2
            r2.setNestedScrollingEnabled(r3)
        L13:
            return
    }

    public static void setNextClusterForwardId(@android.support.annotation.NonNull android.view.View r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L9
            r2.setNextClusterForwardId(r3)
        L9:
            return
    }

    public static void setOnApplyWindowInsetsListener(@android.support.annotation.NonNull android.view.View r2, android.support.v4.view.OnApplyWindowInsetsListener r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L15
            if (r3 != 0) goto Ld
            r3 = 0
            r2.setOnApplyWindowInsetsListener(r3)
            return
        Ld:
            android.support.v4.view.ViewCompat$1 r0 = new android.support.v4.view.ViewCompat$1
            r0.<init>(r3)
            r2.setOnApplyWindowInsetsListener(r0)
        L15:
            return
    }

    @java.lang.Deprecated
    public static void setOverScrollMode(android.view.View r0, int r1) {
            r0.setOverScrollMode(r1)
            return
    }

    public static void setPaddingRelative(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.Px int r3, @android.support.annotation.Px int r4, @android.support.annotation.Px int r5, @android.support.annotation.Px int r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto La
            r2.setPaddingRelative(r3, r4, r5, r6)
            goto Ld
        La:
            r2.setPadding(r3, r4, r5, r6)
        Ld:
            return
    }

    @java.lang.Deprecated
    public static void setPivotX(android.view.View r0, float r1) {
            r0.setPivotX(r1)
            return
    }

    @java.lang.Deprecated
    public static void setPivotY(android.view.View r0, float r1) {
            r0.setPivotY(r1)
            return
    }

    public static void setPointerIcon(@android.support.annotation.NonNull android.view.View r2, android.support.v4.view.PointerIconCompat r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L15
            if (r3 == 0) goto Ld
            java.lang.Object r3 = r3.getPointerIcon()
            goto Le
        Ld:
            r3 = 0
        Le:
            android.view.PointerIcon r3 = (android.view.PointerIcon) r3
            android.view.PointerIcon r3 = (android.view.PointerIcon) r3
            r2.setPointerIcon(r3)
        L15:
            return
    }

    @java.lang.Deprecated
    public static void setRotation(android.view.View r0, float r1) {
            r0.setRotation(r1)
            return
    }

    @java.lang.Deprecated
    public static void setRotationX(android.view.View r0, float r1) {
            r0.setRotationX(r1)
            return
    }

    @java.lang.Deprecated
    public static void setRotationY(android.view.View r0, float r1) {
            r0.setRotationY(r1)
            return
    }

    @java.lang.Deprecated
    public static void setSaveFromParentEnabled(android.view.View r0, boolean r1) {
            r0.setSaveFromParentEnabled(r1)
            return
    }

    @java.lang.Deprecated
    public static void setScaleX(android.view.View r0, float r1) {
            r0.setScaleX(r1)
            return
    }

    @java.lang.Deprecated
    public static void setScaleY(android.view.View r0, float r1) {
            r0.setScaleY(r1)
            return
    }

    public static void setScrollIndicators(@android.support.annotation.NonNull android.view.View r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L9
            r2.setScrollIndicators(r3)
        L9:
            return
    }

    public static void setScrollIndicators(@android.support.annotation.NonNull android.view.View r2, int r3, int r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L9
            r2.setScrollIndicators(r3, r4)
        L9:
            return
    }

    public static void setTooltipText(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.Nullable java.lang.CharSequence r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L9
            r2.setTooltipText(r3)
        L9:
            return
    }

    public static void setTransitionName(@android.support.annotation.NonNull android.view.View r2, java.lang.String r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.setTransitionName(r3)
            goto L1a
        La:
            java.util.WeakHashMap<android.view.View, java.lang.String> r0 = android.support.v4.view.ViewCompat.sTransitionNameMap
            if (r0 != 0) goto L15
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            android.support.v4.view.ViewCompat.sTransitionNameMap = r0
        L15:
            java.util.WeakHashMap<android.view.View, java.lang.String> r0 = android.support.v4.view.ViewCompat.sTransitionNameMap
            r0.put(r2, r3)
        L1a:
            return
    }

    @java.lang.Deprecated
    public static void setTranslationX(android.view.View r0, float r1) {
            r0.setTranslationX(r1)
            return
    }

    @java.lang.Deprecated
    public static void setTranslationY(android.view.View r0, float r1) {
            r0.setTranslationY(r1)
            return
    }

    public static void setTranslationZ(@android.support.annotation.NonNull android.view.View r2, float r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            r2.setTranslationZ(r3)
        L9:
            return
    }

    @java.lang.Deprecated
    public static void setX(android.view.View r0, float r1) {
            r0.setX(r1)
            return
    }

    @java.lang.Deprecated
    public static void setY(android.view.View r0, float r1) {
            r0.setY(r1)
            return
    }

    public static void setZ(@android.support.annotation.NonNull android.view.View r2, float r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            r2.setZ(r3)
        L9:
            return
    }

    public static boolean startDragAndDrop(@android.support.annotation.NonNull android.view.View r2, android.content.ClipData r3, android.view.View.DragShadowBuilder r4, java.lang.Object r5, int r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            boolean r2 = r2.startDragAndDrop(r3, r4, r5, r6)
            return r2
        Lb:
            boolean r2 = r2.startDrag(r3, r4, r5, r6)
            return r2
    }

    public static boolean startNestedScroll(@android.support.annotation.NonNull android.view.View r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r2 = r2.startNestedScroll(r3)
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingChild
            if (r0 == 0) goto L16
            android.support.v4.view.NestedScrollingChild r2 = (android.support.v4.view.NestedScrollingChild) r2
            boolean r2 = r2.startNestedScroll(r3)
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static boolean startNestedScroll(@android.support.annotation.NonNull android.view.View r1, int r2, int r3) {
            boolean r0 = r1 instanceof android.support.v4.view.NestedScrollingChild2
            if (r0 == 0) goto Lb
            android.support.v4.view.NestedScrollingChild2 r1 = (android.support.v4.view.NestedScrollingChild2) r1
            boolean r1 = r1.startNestedScroll(r2, r3)
            return r1
        Lb:
            if (r3 != 0) goto L12
            boolean r1 = startNestedScroll(r1, r2)
            return r1
        L12:
            r1 = 0
            return r1
    }

    public static void stopNestedScroll(@android.support.annotation.NonNull android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.stopNestedScroll()
            goto L13
        La:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingChild
            if (r0 == 0) goto L13
            android.support.v4.view.NestedScrollingChild r2 = (android.support.v4.view.NestedScrollingChild) r2
            r2.stopNestedScroll()
        L13:
            return
    }

    public static void stopNestedScroll(@android.support.annotation.NonNull android.view.View r1, int r2) {
            boolean r0 = r1 instanceof android.support.v4.view.NestedScrollingChild2
            if (r0 == 0) goto La
            android.support.v4.view.NestedScrollingChild2 r1 = (android.support.v4.view.NestedScrollingChild2) r1
            r1.stopNestedScroll(r2)
            goto Lf
        La:
            if (r2 != 0) goto Lf
            stopNestedScroll(r1)
        Lf:
            return
    }

    private static void tickleInvalidationFlag(android.view.View r2) {
            float r0 = r2.getTranslationY()
            r1 = 1065353216(0x3f800000, float:1.0)
            float r1 = r1 + r0
            r2.setTranslationY(r1)
            r2.setTranslationY(r0)
            return
    }

    public static void updateDragShadow(@android.support.annotation.NonNull android.view.View r2, android.view.View.DragShadowBuilder r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L9
            r2.updateDragShadow(r3)
        L9:
            return
    }
}
