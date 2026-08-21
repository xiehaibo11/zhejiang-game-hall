package android.support.v4.view.accessibility;

import android.os.Build;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityRecord;

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

    @Deprecated
    public static final int TYPE_TOUCH_EXPLORATION_GESTURE_END = 1024;

    @Deprecated
    public static final int TYPE_TOUCH_EXPLORATION_GESTURE_START = 512;
    public static final int TYPE_TOUCH_INTERACTION_END = 2097152;
    public static final int TYPE_TOUCH_INTERACTION_START = 1048576;
    public static final int TYPE_VIEW_ACCESSIBILITY_FOCUSED = 32768;
    public static final int TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED = 65536;
    public static final int TYPE_VIEW_CONTEXT_CLICKED = 8388608;

    @Deprecated
    public static final int TYPE_VIEW_HOVER_ENTER = 128;

    @Deprecated
    public static final int TYPE_VIEW_HOVER_EXIT = 256;

    @Deprecated
    public static final int TYPE_VIEW_SCROLLED = 4096;

    @Deprecated
    public static final int TYPE_VIEW_TEXT_SELECTION_CHANGED = 8192;
    public static final int TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY = 131072;
    public static final int TYPE_WINDOWS_CHANGED = 4194304;

    @Deprecated
    public static final int TYPE_WINDOW_CONTENT_CHANGED = 2048;

    private AccessibilityEventCompat() {
    }

    @Deprecated
    public static int getRecordCount(AccessibilityEvent r0) {
        return r0.getRecordCount();
    }

    @Deprecated
    public static void appendRecord(AccessibilityEvent r0, AccessibilityRecordCompat r1) {
        r0.appendRecord((AccessibilityRecord) r1.getImpl());
    }

    @Deprecated
    public static AccessibilityRecordCompat getRecord(AccessibilityEvent r1, int r2) {
        return new AccessibilityRecordCompat(r1.getRecord(r2));
    }

    @Deprecated
    public static AccessibilityRecordCompat asRecord(AccessibilityEvent r1) {
        return new AccessibilityRecordCompat(r1);
    }

    public static void setContentChangeTypes(AccessibilityEvent r2, int r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        r2.setContentChangeTypes(r3);
        return;
    }

    public static int getContentChangeTypes(AccessibilityEvent r2) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return 0;
    L5:
        return r2.getContentChangeTypes();
    }

    public static void setMovementGranularity(AccessibilityEvent r2, int r3) {
        if (Build.VERSION.SDK_INT < 16) goto L6;
        r2.setMovementGranularity(r3);
        return;
    }

    public static int getMovementGranularity(AccessibilityEvent r2) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return 0;
    L5:
        return r2.getMovementGranularity();
    }

    public static void setAction(AccessibilityEvent r2, int r3) {
        if (Build.VERSION.SDK_INT < 16) goto L6;
        r2.setAction(r3);
        return;
    }

    public static int getAction(AccessibilityEvent r2) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return 0;
    L5:
        return r2.getAction();
    }
}
