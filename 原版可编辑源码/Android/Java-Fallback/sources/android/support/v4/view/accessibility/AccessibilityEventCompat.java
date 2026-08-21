package android.support.v4.view.accessibility;

public final class AccessibilityEventCompat {
    public static final int CONTENT_CHANGE_TYPE_CONTENT_DESCRIPTION = 4;
    public static final int CONTENT_CHANGE_TYPE_SUBTREE = 1;
    public static final int CONTENT_CHANGE_TYPE_TEXT = 2;
    public static final int CONTENT_CHANGE_TYPE_UNDEFINED = 0;
    public static final int TYPES_ALL_MASK = -1;
    public static final int TYPE_ANNOUNCEMENT = 16384;
    public static final int TYPE_ASSIST_READING_CONTEXT = 16777216;
    public static final int TYPE_GESTURE_DETECTION_END = 524288;
    public static final int TYPE_GESTURE_DETECTION_START = 262144;

    @java.lang.Deprecated
    public static final int TYPE_TOUCH_EXPLORATION_GESTURE_END = 1024;

    @java.lang.Deprecated
    public static final int TYPE_TOUCH_EXPLORATION_GESTURE_START = 512;
    public static final int TYPE_TOUCH_INTERACTION_END = 2097152;
    public static final int TYPE_TOUCH_INTERACTION_START = 1048576;
    public static final int TYPE_VIEW_ACCESSIBILITY_FOCUSED = 32768;
    public static final int TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED = 65536;
    public static final int TYPE_VIEW_CONTEXT_CLICKED = 8388608;

    @java.lang.Deprecated
    public static final int TYPE_VIEW_HOVER_ENTER = 128;

    @java.lang.Deprecated
    public static final int TYPE_VIEW_HOVER_EXIT = 256;

    @java.lang.Deprecated
    public static final int TYPE_VIEW_SCROLLED = 4096;

    @java.lang.Deprecated
    public static final int TYPE_VIEW_TEXT_SELECTION_CHANGED = 8192;
    public static final int TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY = 131072;
    public static final int TYPE_WINDOWS_CHANGED = 4194304;

    @java.lang.Deprecated
    public static final int TYPE_WINDOW_CONTENT_CHANGED = 2048;

    private AccessibilityEventCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static void appendRecord(android.view.accessibility.AccessibilityEvent r0, android.support.v4.view.accessibility.AccessibilityRecordCompat r1) {
            java.lang.Object r1 = r1.getImpl()
            android.view.accessibility.AccessibilityRecord r1 = (android.view.accessibility.AccessibilityRecord) r1
            r0.appendRecord(r1)
            return
    }

    @java.lang.Deprecated
    public static android.support.v4.view.accessibility.AccessibilityRecordCompat asRecord(android.view.accessibility.AccessibilityEvent r1) {
            android.support.v4.view.accessibility.AccessibilityRecordCompat r0 = new android.support.v4.view.accessibility.AccessibilityRecordCompat
            r0.<init>(r1)
            return r0
    }

    public static int getAction(android.view.accessibility.AccessibilityEvent r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            int r2 = r2.getAction()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static int getContentChangeTypes(android.view.accessibility.AccessibilityEvent r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            int r2 = r2.getContentChangeTypes()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static int getMovementGranularity(android.view.accessibility.AccessibilityEvent r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            int r2 = r2.getMovementGranularity()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static android.support.v4.view.accessibility.AccessibilityRecordCompat getRecord(android.view.accessibility.AccessibilityEvent r1, int r2) {
            android.support.v4.view.accessibility.AccessibilityRecordCompat r0 = new android.support.v4.view.accessibility.AccessibilityRecordCompat
            android.view.accessibility.AccessibilityRecord r1 = r1.getRecord(r2)
            r0.<init>(r1)
            return r0
    }

    @java.lang.Deprecated
    public static int getRecordCount(android.view.accessibility.AccessibilityEvent r0) {
            int r0 = r0.getRecordCount()
            return r0
    }

    public static void setAction(android.view.accessibility.AccessibilityEvent r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L9
            r2.setAction(r3)
        L9:
            return
    }

    public static void setContentChangeTypes(android.view.accessibility.AccessibilityEvent r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            r2.setContentChangeTypes(r3)
        L9:
            return
    }

    public static void setMovementGranularity(android.view.accessibility.AccessibilityEvent r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L9
            r2.setMovementGranularity(r3)
        L9:
            return
    }
}
