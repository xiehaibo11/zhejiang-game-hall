package android.support.v4.view.accessibility;

import android.graphics.Rect;
import android.os.Build;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.view.View;
import android.view.accessibility.AccessibilityNodeInfo;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

public class AccessibilityNodeInfoCompat {
    public static final int ACTION_ACCESSIBILITY_FOCUS = 64;
    public static final String ACTION_ARGUMENT_COLUMN_INT = "android.view.accessibility.action.ARGUMENT_COLUMN_INT";
    public static final String ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN = "ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN";
    public static final String ACTION_ARGUMENT_HTML_ELEMENT_STRING = "ACTION_ARGUMENT_HTML_ELEMENT_STRING";
    public static final String ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT = "ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT";
    public static final String ACTION_ARGUMENT_MOVE_WINDOW_X = "ACTION_ARGUMENT_MOVE_WINDOW_X";
    public static final String ACTION_ARGUMENT_MOVE_WINDOW_Y = "ACTION_ARGUMENT_MOVE_WINDOW_Y";
    public static final String ACTION_ARGUMENT_PROGRESS_VALUE = "android.view.accessibility.action.ARGUMENT_PROGRESS_VALUE";
    public static final String ACTION_ARGUMENT_ROW_INT = "android.view.accessibility.action.ARGUMENT_ROW_INT";
    public static final String ACTION_ARGUMENT_SELECTION_END_INT = "ACTION_ARGUMENT_SELECTION_END_INT";
    public static final String ACTION_ARGUMENT_SELECTION_START_INT = "ACTION_ARGUMENT_SELECTION_START_INT";
    public static final String ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE = "ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE";
    public static final int ACTION_CLEAR_ACCESSIBILITY_FOCUS = 128;
    public static final int ACTION_CLEAR_FOCUS = 2;
    public static final int ACTION_CLEAR_SELECTION = 8;
    public static final int ACTION_CLICK = 16;
    public static final int ACTION_COLLAPSE = 524288;
    public static final int ACTION_COPY = 16384;
    public static final int ACTION_CUT = 65536;
    public static final int ACTION_DISMISS = 1048576;
    public static final int ACTION_EXPAND = 262144;
    public static final int ACTION_FOCUS = 1;
    public static final int ACTION_LONG_CLICK = 32;
    public static final int ACTION_NEXT_AT_MOVEMENT_GRANULARITY = 256;
    public static final int ACTION_NEXT_HTML_ELEMENT = 1024;
    public static final int ACTION_PASTE = 32768;
    public static final int ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY = 512;
    public static final int ACTION_PREVIOUS_HTML_ELEMENT = 2048;
    public static final int ACTION_SCROLL_BACKWARD = 8192;
    public static final int ACTION_SCROLL_FORWARD = 4096;
    public static final int ACTION_SELECT = 4;
    public static final int ACTION_SET_SELECTION = 131072;
    public static final int ACTION_SET_TEXT = 2097152;
    private static final int BOOLEAN_PROPERTY_IS_HEADING = 2;
    private static final int BOOLEAN_PROPERTY_IS_SHOWING_HINT = 4;
    private static final String BOOLEAN_PROPERTY_KEY = "androidx.view.accessibility.AccessibilityNodeInfoCompat.BOOLEAN_PROPERTY_KEY";
    private static final int BOOLEAN_PROPERTY_SCREEN_READER_FOCUSABLE = 1;
    public static final int FOCUS_ACCESSIBILITY = 2;
    public static final int FOCUS_INPUT = 1;
    private static final String HINT_TEXT_KEY = "androidx.view.accessibility.AccessibilityNodeInfoCompat.HINT_TEXT_KEY";
    public static final int MOVEMENT_GRANULARITY_CHARACTER = 1;
    public static final int MOVEMENT_GRANULARITY_LINE = 4;
    public static final int MOVEMENT_GRANULARITY_PAGE = 16;
    public static final int MOVEMENT_GRANULARITY_PARAGRAPH = 8;
    public static final int MOVEMENT_GRANULARITY_WORD = 2;
    private static final String PANE_TITLE_KEY = "androidx.view.accessibility.AccessibilityNodeInfoCompat.PANE_TITLE_KEY";
    private static final String ROLE_DESCRIPTION_KEY = "AccessibilityNodeInfo.roleDescription";
    private static final String TOOLTIP_TEXT_KEY = "androidx.view.accessibility.AccessibilityNodeInfoCompat.TOOLTIP_TEXT_KEY";
    private final AccessibilityNodeInfo mInfo;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int mParentVirtualDescendantId;

    public static class AccessibilityActionCompat {
        public static final AccessibilityActionCompat ACTION_ACCESSIBILITY_FOCUS = null;
        public static final AccessibilityActionCompat ACTION_CLEAR_ACCESSIBILITY_FOCUS = null;
        public static final AccessibilityActionCompat ACTION_CLEAR_FOCUS = null;
        public static final AccessibilityActionCompat ACTION_CLEAR_SELECTION = null;
        public static final AccessibilityActionCompat ACTION_CLICK = null;
        public static final AccessibilityActionCompat ACTION_COLLAPSE = null;
        public static final AccessibilityActionCompat ACTION_CONTEXT_CLICK = null;
        public static final AccessibilityActionCompat ACTION_COPY = null;
        public static final AccessibilityActionCompat ACTION_CUT = null;
        public static final AccessibilityActionCompat ACTION_DISMISS = null;
        public static final AccessibilityActionCompat ACTION_EXPAND = null;
        public static final AccessibilityActionCompat ACTION_FOCUS = null;
        public static final AccessibilityActionCompat ACTION_HIDE_TOOLTIP = null;
        public static final AccessibilityActionCompat ACTION_LONG_CLICK = null;
        public static final AccessibilityActionCompat ACTION_MOVE_WINDOW = null;
        public static final AccessibilityActionCompat ACTION_NEXT_AT_MOVEMENT_GRANULARITY = null;
        public static final AccessibilityActionCompat ACTION_NEXT_HTML_ELEMENT = null;
        public static final AccessibilityActionCompat ACTION_PASTE = null;
        public static final AccessibilityActionCompat ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY = null;
        public static final AccessibilityActionCompat ACTION_PREVIOUS_HTML_ELEMENT = null;
        public static final AccessibilityActionCompat ACTION_SCROLL_BACKWARD = null;
        public static final AccessibilityActionCompat ACTION_SCROLL_DOWN = null;
        public static final AccessibilityActionCompat ACTION_SCROLL_FORWARD = null;
        public static final AccessibilityActionCompat ACTION_SCROLL_LEFT = null;
        public static final AccessibilityActionCompat ACTION_SCROLL_RIGHT = null;
        public static final AccessibilityActionCompat ACTION_SCROLL_TO_POSITION = null;
        public static final AccessibilityActionCompat ACTION_SCROLL_UP = null;
        public static final AccessibilityActionCompat ACTION_SELECT = null;
        public static final AccessibilityActionCompat ACTION_SET_PROGRESS = null;
        public static final AccessibilityActionCompat ACTION_SET_SELECTION = null;
        public static final AccessibilityActionCompat ACTION_SET_TEXT = null;
        public static final AccessibilityActionCompat ACTION_SHOW_ON_SCREEN = null;
        public static final AccessibilityActionCompat ACTION_SHOW_TOOLTIP = null;
        final Object mAction;

        static {
            AccessibilityNodeInfo.AccessibilityAction r1 = null;
            ACTION_FOCUS = new AccessibilityActionCompat(1, null);
            ACTION_CLEAR_FOCUS = new AccessibilityActionCompat(2, null);
            ACTION_SELECT = new AccessibilityActionCompat(4, null);
            ACTION_CLEAR_SELECTION = new AccessibilityActionCompat(8, null);
            ACTION_CLICK = new AccessibilityActionCompat(16, null);
            ACTION_LONG_CLICK = new AccessibilityActionCompat(32, null);
            ACTION_ACCESSIBILITY_FOCUS = new AccessibilityActionCompat(64, null);
            ACTION_CLEAR_ACCESSIBILITY_FOCUS = new AccessibilityActionCompat(128, null);
            ACTION_NEXT_AT_MOVEMENT_GRANULARITY = new AccessibilityActionCompat(256, null);
            ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY = new AccessibilityActionCompat(512, null);
            ACTION_NEXT_HTML_ELEMENT = new AccessibilityActionCompat(1024, null);
            ACTION_PREVIOUS_HTML_ELEMENT = new AccessibilityActionCompat(2048, null);
            ACTION_SCROLL_FORWARD = new AccessibilityActionCompat(4096, null);
            ACTION_SCROLL_BACKWARD = new AccessibilityActionCompat(8192, null);
            ACTION_COPY = new AccessibilityActionCompat(16384, null);
            ACTION_PASTE = new AccessibilityActionCompat(32768, null);
            ACTION_CUT = new AccessibilityActionCompat(65536, null);
            ACTION_SET_SELECTION = new AccessibilityActionCompat(131072, null);
            ACTION_EXPAND = new AccessibilityActionCompat(262144, null);
            ACTION_COLLAPSE = new AccessibilityActionCompat(524288, null);
            ACTION_DISMISS = new AccessibilityActionCompat(1048576, null);
            ACTION_SET_TEXT = new AccessibilityActionCompat(2097152, null);
            if (Build.VERSION.SDK_INT < 23) goto L5;
            AccessibilityNodeInfo.AccessibilityAction r2 = AccessibilityNodeInfo.AccessibilityAction.ACTION_SHOW_ON_SCREEN;
        L6:
            ACTION_SHOW_ON_SCREEN = new AccessibilityActionCompat(r2);
            if (Build.VERSION.SDK_INT < 23) goto L9;
            AccessibilityNodeInfo.AccessibilityAction r22 = AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_TO_POSITION;
        L10:
            ACTION_SCROLL_TO_POSITION = new AccessibilityActionCompat(r22);
            if (Build.VERSION.SDK_INT < 23) goto L13;
            AccessibilityNodeInfo.AccessibilityAction r23 = AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_UP;
        L14:
            ACTION_SCROLL_UP = new AccessibilityActionCompat(r23);
            if (Build.VERSION.SDK_INT < 23) goto L17;
            AccessibilityNodeInfo.AccessibilityAction r24 = AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_LEFT;
        L18:
            ACTION_SCROLL_LEFT = new AccessibilityActionCompat(r24);
            if (Build.VERSION.SDK_INT < 23) goto L21;
            AccessibilityNodeInfo.AccessibilityAction r25 = AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_DOWN;
        L22:
            ACTION_SCROLL_DOWN = new AccessibilityActionCompat(r25);
            if (Build.VERSION.SDK_INT < 23) goto L25;
            AccessibilityNodeInfo.AccessibilityAction r26 = AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_RIGHT;
        L26:
            ACTION_SCROLL_RIGHT = new AccessibilityActionCompat(r26);
            if (Build.VERSION.SDK_INT < 23) goto L29;
            AccessibilityNodeInfo.AccessibilityAction r27 = AccessibilityNodeInfo.AccessibilityAction.ACTION_CONTEXT_CLICK;
        L30:
            ACTION_CONTEXT_CLICK = new AccessibilityActionCompat(r27);
            if (Build.VERSION.SDK_INT < 24) goto L33;
            AccessibilityNodeInfo.AccessibilityAction r28 = AccessibilityNodeInfo.AccessibilityAction.ACTION_SET_PROGRESS;
        L34:
            ACTION_SET_PROGRESS = new AccessibilityActionCompat(r28);
            if (Build.VERSION.SDK_INT < 26) goto L37;
            AccessibilityNodeInfo.AccessibilityAction r29 = AccessibilityNodeInfo.AccessibilityAction.ACTION_MOVE_WINDOW;
        L38:
            ACTION_MOVE_WINDOW = new AccessibilityActionCompat(r29);
            if (Build.VERSION.SDK_INT < 28) goto L41;
            AccessibilityNodeInfo.AccessibilityAction r210 = AccessibilityNodeInfo.AccessibilityAction.ACTION_SHOW_TOOLTIP;
        L42:
            ACTION_SHOW_TOOLTIP = new AccessibilityActionCompat(r210);
            if (Build.VERSION.SDK_INT < 28) goto L45;
            r1 = AccessibilityNodeInfo.AccessibilityAction.ACTION_HIDE_TOOLTIP;
        L45:
            ACTION_HIDE_TOOLTIP = new AccessibilityActionCompat(r1);
            return;
        L41:
            r210 = null;
            goto L42
        L37:
            r29 = null;
            goto L38
        L33:
            r28 = null;
            goto L34
        L29:
            r27 = null;
            goto L30
        L25:
            r26 = null;
            goto L26
        L21:
            r25 = null;
            goto L22
        L17:
            r24 = null;
            goto L18
        L13:
            r23 = null;
            goto L14
        L9:
            r22 = null;
            goto L10
        L5:
            r2 = null;
            goto L6
        }

        public AccessibilityActionCompat(int r3, CharSequence r4) {
            if (Build.VERSION.SDK_INT < 21) goto L5;
            AccessibilityNodeInfo.AccessibilityAction r0 = new AccessibilityNodeInfo.AccessibilityAction(r3, r4);
        L6:
            this(r0);
            return;
        L5:
            r0 = null;
            goto L6
        }

        AccessibilityActionCompat(Object r1) {
            this.mAction = r1;
        }

        public int getId() {
            if (Build.VERSION.SDK_INT >= 21) goto L5;
            return 0;
        L5:
            return ((AccessibilityNodeInfo.AccessibilityAction) this.mAction).getId();
        }

        public CharSequence getLabel() {
            if (Build.VERSION.SDK_INT >= 21) goto L5;
            return null;
        L5:
            return ((AccessibilityNodeInfo.AccessibilityAction) this.mAction).getLabel();
        }
    }

    public static class CollectionInfoCompat {
        public static final int SELECTION_MODE_MULTIPLE = 2;
        public static final int SELECTION_MODE_NONE = 0;
        public static final int SELECTION_MODE_SINGLE = 1;
        final Object mInfo;

        public static CollectionInfoCompat obtain(int r2, int r3, boolean r4, int r5) {
            if (Build.VERSION.SDK_INT < 21) goto L7;
            return new CollectionInfoCompat(AccessibilityNodeInfo.CollectionInfo.obtain(r2, r3, r4, r5));
        L7:
            if (Build.VERSION.SDK_INT < 19) goto L11;
            return new CollectionInfoCompat(AccessibilityNodeInfo.CollectionInfo.obtain(r2, r3, r4));
        L11:
            return new CollectionInfoCompat(null);
        }

        public static CollectionInfoCompat obtain(int r2, int r3, boolean r4) {
            if (Build.VERSION.SDK_INT < 19) goto L7;
            return new CollectionInfoCompat(AccessibilityNodeInfo.CollectionInfo.obtain(r2, r3, r4));
        L7:
            return new CollectionInfoCompat(null);
        }

        CollectionInfoCompat(Object r1) {
            this.mInfo = r1;
        }

        public int getColumnCount() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0;
        L5:
            return ((AccessibilityNodeInfo.CollectionInfo) this.mInfo).getColumnCount();
        }

        public int getRowCount() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0;
        L5:
            return ((AccessibilityNodeInfo.CollectionInfo) this.mInfo).getRowCount();
        }

        public boolean isHierarchical() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return false;
        L5:
            return ((AccessibilityNodeInfo.CollectionInfo) this.mInfo).isHierarchical();
        }

        public int getSelectionMode() {
            if (Build.VERSION.SDK_INT >= 21) goto L5;
            return 0;
        L5:
            return ((AccessibilityNodeInfo.CollectionInfo) this.mInfo).getSelectionMode();
        }
    }

    public static class CollectionItemInfoCompat {
        final Object mInfo;

        public static CollectionItemInfoCompat obtain(int r2, int r3, int r4, int r5, boolean r6, boolean r7) {
            if (Build.VERSION.SDK_INT < 21) goto L7;
            return new CollectionItemInfoCompat(AccessibilityNodeInfo.CollectionItemInfo.obtain(r2, r3, r4, r5, r6, r7));
        L7:
            if (Build.VERSION.SDK_INT < 19) goto L11;
            return new CollectionItemInfoCompat(AccessibilityNodeInfo.CollectionItemInfo.obtain(r2, r3, r4, r5, r6));
        L11:
            return new CollectionItemInfoCompat(null);
        }

        public static CollectionItemInfoCompat obtain(int r2, int r3, int r4, int r5, boolean r6) {
            if (Build.VERSION.SDK_INT < 19) goto L7;
            return new CollectionItemInfoCompat(AccessibilityNodeInfo.CollectionItemInfo.obtain(r2, r3, r4, r5, r6));
        L7:
            return new CollectionItemInfoCompat(null);
        }

        CollectionItemInfoCompat(Object r1) {
            this.mInfo = r1;
        }

        public int getColumnIndex() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0;
        L5:
            return ((AccessibilityNodeInfo.CollectionItemInfo) this.mInfo).getColumnIndex();
        }

        public int getColumnSpan() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0;
        L5:
            return ((AccessibilityNodeInfo.CollectionItemInfo) this.mInfo).getColumnSpan();
        }

        public int getRowIndex() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0;
        L5:
            return ((AccessibilityNodeInfo.CollectionItemInfo) this.mInfo).getRowIndex();
        }

        public int getRowSpan() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0;
        L5:
            return ((AccessibilityNodeInfo.CollectionItemInfo) this.mInfo).getRowSpan();
        }

        public boolean isHeading() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return false;
        L5:
            return ((AccessibilityNodeInfo.CollectionItemInfo) this.mInfo).isHeading();
        }

        public boolean isSelected() {
            if (Build.VERSION.SDK_INT >= 21) goto L5;
            return false;
        L5:
            return ((AccessibilityNodeInfo.CollectionItemInfo) this.mInfo).isSelected();
        }
    }

    public static class RangeInfoCompat {
        public static final int RANGE_TYPE_FLOAT = 1;
        public static final int RANGE_TYPE_INT = 0;
        public static final int RANGE_TYPE_PERCENT = 2;
        final Object mInfo;

        public static RangeInfoCompat obtain(int r2, float r3, float r4, float r5) {
            if (Build.VERSION.SDK_INT < 19) goto L7;
            return new RangeInfoCompat(AccessibilityNodeInfo.RangeInfo.obtain(r2, r3, r4, r5));
        L7:
            return new RangeInfoCompat(null);
        }

        RangeInfoCompat(Object r1) {
            this.mInfo = r1;
        }

        public float getCurrent() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0.0f;
        L5:
            return ((AccessibilityNodeInfo.RangeInfo) this.mInfo).getCurrent();
        }

        public float getMax() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0.0f;
        L5:
            return ((AccessibilityNodeInfo.RangeInfo) this.mInfo).getMax();
        }

        public float getMin() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0.0f;
        L5:
            return ((AccessibilityNodeInfo.RangeInfo) this.mInfo).getMin();
        }

        public int getType() {
            if (Build.VERSION.SDK_INT >= 19) goto L5;
            return 0;
        L5:
            return ((AccessibilityNodeInfo.RangeInfo) this.mInfo).getType();
        }
    }

    private static String getActionSymbolicName(int r1) {
        if (r1 != 1) goto L5;
        return "ACTION_FOCUS";
    L5:
        if (r1 == 2) goto L41;
        switch(r1) {
            case 4: goto L39;
            case 8: goto L37;
            case 16: goto L35;
            case 32: goto L33;
            case 64: goto L31;
            case 128: goto L29;
            case 256: goto L27;
            case 512: goto L25;
            case 1024: goto L23;
            case 2048: goto L21;
            case 4096: goto L19;
            case 8192: goto L17;
            case 16384: goto L15;
            case 32768: goto L13;
            case 65536: goto L11;
            case 131072: goto L9;
            default: goto L7;
        };
    L7:
        return "ACTION_UNKNOWN";
    L9:
        return "ACTION_SET_SELECTION";
    L11:
        return "ACTION_CUT";
    L13:
        return "ACTION_PASTE";
    L15:
        return "ACTION_COPY";
    L17:
        return "ACTION_SCROLL_BACKWARD";
    L19:
        return "ACTION_SCROLL_FORWARD";
    L21:
        return "ACTION_PREVIOUS_HTML_ELEMENT";
    L23:
        return "ACTION_NEXT_HTML_ELEMENT";
    L25:
        return "ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY";
    L27:
        return "ACTION_NEXT_AT_MOVEMENT_GRANULARITY";
    L29:
        return "ACTION_CLEAR_ACCESSIBILITY_FOCUS";
    L31:
        return "ACTION_ACCESSIBILITY_FOCUS";
    L33:
        return "ACTION_LONG_CLICK";
    L35:
        return "ACTION_CLICK";
    L37:
        return "ACTION_CLEAR_SELECTION";
    L39:
        return "ACTION_SELECT";
    L41:
        return "ACTION_CLEAR_FOCUS";
    }

    static AccessibilityNodeInfoCompat wrapNonNullInstance(Object r1) {
        if (r1 != null) goto L4;
        return null;
    L4:
        return new AccessibilityNodeInfoCompat(r1);
    }

    @Deprecated
    public AccessibilityNodeInfoCompat(Object r2) {
        this.mParentVirtualDescendantId = -1;
        this.mInfo = (AccessibilityNodeInfo) r2;
    }

    private AccessibilityNodeInfoCompat(AccessibilityNodeInfo r2) {
        this.mParentVirtualDescendantId = -1;
        this.mInfo = r2;
    }

    public static AccessibilityNodeInfoCompat wrap(@NonNull AccessibilityNodeInfo r1) {
        return new AccessibilityNodeInfoCompat(r1);
    }

    public AccessibilityNodeInfo unwrap() {
        return this.mInfo;
    }

    @Deprecated
    public Object getInfo() {
        return this.mInfo;
    }

    public static AccessibilityNodeInfoCompat obtain(View r0) {
        return wrap(AccessibilityNodeInfo.obtain(r0));
    }

    public static AccessibilityNodeInfoCompat obtain(View r2, int r3) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(AccessibilityNodeInfo.obtain(r2, r3));
    }

    public static AccessibilityNodeInfoCompat obtain() {
        return wrap(AccessibilityNodeInfo.obtain());
    }

    public static AccessibilityNodeInfoCompat obtain(AccessibilityNodeInfoCompat r0) {
        return wrap(AccessibilityNodeInfo.obtain(r0.mInfo));
    }

    public void setSource(View r2) {
        this.mInfo.setSource(r2);
    }

    public void setSource(View r3, int r4) {
        if (Build.VERSION.SDK_INT < 16) goto L6;
        this.mInfo.setSource(r3, r4);
        return;
    }

    public AccessibilityNodeInfoCompat findFocus(int r3) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(this.mInfo.findFocus(r3));
    }

    public AccessibilityNodeInfoCompat focusSearch(int r3) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(this.mInfo.focusSearch(r3));
    }

    public int getWindowId() {
        return this.mInfo.getWindowId();
    }

    public int getChildCount() {
        return this.mInfo.getChildCount();
    }

    public AccessibilityNodeInfoCompat getChild(int r2) {
        return wrapNonNullInstance(this.mInfo.getChild(r2));
    }

    public void addChild(View r2) {
        this.mInfo.addChild(r2);
    }

    public void addChild(View r3, int r4) {
        if (Build.VERSION.SDK_INT < 16) goto L6;
        this.mInfo.addChild(r3, r4);
        return;
    }

    public boolean removeChild(View r3) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return false;
    L5:
        return this.mInfo.removeChild(r3);
    }

    public boolean removeChild(View r3, int r4) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return false;
    L5:
        return this.mInfo.removeChild(r3, r4);
    }

    public int getActions() {
        return this.mInfo.getActions();
    }

    public void addAction(int r2) {
        this.mInfo.addAction(r2);
    }

    public void addAction(AccessibilityActionCompat r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        this.mInfo.addAction((AccessibilityNodeInfo.AccessibilityAction) r3.mAction);
        return;
    }

    public boolean removeAction(AccessibilityActionCompat r3) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return false;
    L5:
        return this.mInfo.removeAction((AccessibilityNodeInfo.AccessibilityAction) r3.mAction);
    }

    public boolean performAction(int r2) {
        return this.mInfo.performAction(r2);
    }

    public boolean performAction(int r3, Bundle r4) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return false;
    L5:
        return this.mInfo.performAction(r3, r4);
    }

    public void setMovementGranularities(int r3) {
        if (Build.VERSION.SDK_INT < 16) goto L6;
        this.mInfo.setMovementGranularities(r3);
        return;
    }

    public int getMovementGranularities() {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return 0;
    L5:
        return this.mInfo.getMovementGranularities();
    }

    public List<AccessibilityNodeInfoCompat> findAccessibilityNodeInfosByText(String r5) {
        ArrayList r0 = new ArrayList();
        List<AccessibilityNodeInfo> r52 = this.mInfo.findAccessibilityNodeInfosByText(r5);
        int r1 = r52.size();
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L5;
        r0.add(wrap(r52.get(r2)));
        r2 = r2 + 1;
        goto L3
    L5:
        return r0;
    }

    public AccessibilityNodeInfoCompat getParent() {
        return wrapNonNullInstance(this.mInfo.getParent());
    }

    public void setParent(View r2) {
        this.mInfo.setParent(r2);
    }

    public void setParent(View r3, int r4) {
        this.mParentVirtualDescendantId = r4;
        if (Build.VERSION.SDK_INT < 16) goto L6;
        this.mInfo.setParent(r3, r4);
        return;
    }

    public void getBoundsInParent(Rect r2) {
        this.mInfo.getBoundsInParent(r2);
    }

    public void setBoundsInParent(Rect r2) {
        this.mInfo.setBoundsInParent(r2);
    }

    public void getBoundsInScreen(Rect r2) {
        this.mInfo.getBoundsInScreen(r2);
    }

    public void setBoundsInScreen(Rect r2) {
        this.mInfo.setBoundsInScreen(r2);
    }

    public boolean isCheckable() {
        return this.mInfo.isCheckable();
    }

    public void setCheckable(boolean r2) {
        this.mInfo.setCheckable(r2);
    }

    public boolean isChecked() {
        return this.mInfo.isChecked();
    }

    public void setChecked(boolean r2) {
        this.mInfo.setChecked(r2);
    }

    public boolean isFocusable() {
        return this.mInfo.isFocusable();
    }

    public void setFocusable(boolean r2) {
        this.mInfo.setFocusable(r2);
    }

    public boolean isFocused() {
        return this.mInfo.isFocused();
    }

    public void setFocused(boolean r2) {
        this.mInfo.setFocused(r2);
    }

    public boolean isVisibleToUser() {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return false;
    L5:
        return this.mInfo.isVisibleToUser();
    }

    public void setVisibleToUser(boolean r3) {
        if (Build.VERSION.SDK_INT < 16) goto L6;
        this.mInfo.setVisibleToUser(r3);
        return;
    }

    public boolean isAccessibilityFocused() {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return false;
    L5:
        return this.mInfo.isAccessibilityFocused();
    }

    public void setAccessibilityFocused(boolean r3) {
        if (Build.VERSION.SDK_INT < 16) goto L6;
        this.mInfo.setAccessibilityFocused(r3);
        return;
    }

    public boolean isSelected() {
        return this.mInfo.isSelected();
    }

    public void setSelected(boolean r2) {
        this.mInfo.setSelected(r2);
    }

    public boolean isClickable() {
        return this.mInfo.isClickable();
    }

    public void setClickable(boolean r2) {
        this.mInfo.setClickable(r2);
    }

    public boolean isLongClickable() {
        return this.mInfo.isLongClickable();
    }

    public void setLongClickable(boolean r2) {
        this.mInfo.setLongClickable(r2);
    }

    public boolean isEnabled() {
        return this.mInfo.isEnabled();
    }

    public void setEnabled(boolean r2) {
        this.mInfo.setEnabled(r2);
    }

    public boolean isPassword() {
        return this.mInfo.isPassword();
    }

    public void setPassword(boolean r2) {
        this.mInfo.setPassword(r2);
    }

    public boolean isScrollable() {
        return this.mInfo.isScrollable();
    }

    public void setScrollable(boolean r2) {
        this.mInfo.setScrollable(r2);
    }

    public boolean isImportantForAccessibility() {
        if (Build.VERSION.SDK_INT >= 24) goto L5;
        return true;
    L5:
        return this.mInfo.isImportantForAccessibility();
    }

    public void setImportantForAccessibility(boolean r3) {
        if (Build.VERSION.SDK_INT < 24) goto L6;
        this.mInfo.setImportantForAccessibility(r3);
        return;
    }

    public CharSequence getPackageName() {
        return this.mInfo.getPackageName();
    }

    public void setPackageName(CharSequence r2) {
        this.mInfo.setPackageName(r2);
    }

    public CharSequence getClassName() {
        return this.mInfo.getClassName();
    }

    public void setClassName(CharSequence r2) {
        this.mInfo.setClassName(r2);
    }

    public CharSequence getText() {
        return this.mInfo.getText();
    }

    public void setText(CharSequence r2) {
        this.mInfo.setText(r2);
    }

    public CharSequence getContentDescription() {
        return this.mInfo.getContentDescription();
    }

    public void setContentDescription(CharSequence r2) {
        this.mInfo.setContentDescription(r2);
    }

    public void recycle() {
        this.mInfo.recycle();
    }

    public void setViewIdResourceName(String r3) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        this.mInfo.setViewIdResourceName(r3);
        return;
    }

    public String getViewIdResourceName() {
        if (Build.VERSION.SDK_INT >= 18) goto L5;
        return null;
    L5:
        return this.mInfo.getViewIdResourceName();
    }

    public int getLiveRegion() {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return 0;
    L5:
        return this.mInfo.getLiveRegion();
    }

    public void setLiveRegion(int r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        this.mInfo.setLiveRegion(r3);
        return;
    }

    public int getDrawingOrder() {
        if (Build.VERSION.SDK_INT >= 24) goto L5;
        return 0;
    L5:
        return this.mInfo.getDrawingOrder();
    }

    public void setDrawingOrder(int r3) {
        if (Build.VERSION.SDK_INT < 24) goto L6;
        this.mInfo.setDrawingOrder(r3);
        return;
    }

    public CollectionInfoCompat getCollectionInfo() {
        if (Build.VERSION.SDK_INT < 19) goto L8;
        AccessibilityNodeInfo.CollectionInfo r0 = this.mInfo.getCollectionInfo();
        if (r0 != null) goto L7;
        return null;
    L7:
        return new CollectionInfoCompat(r0);
    L8:
        return null;
    }

    public void setCollectionInfo(Object r3) {
        if (Build.VERSION.SDK_INT < 19) goto L10;
        AccessibilityNodeInfo r0 = this.mInfo;
        if (r3 != null) goto L7;
        AccessibilityNodeInfo.CollectionInfo r32 = null;
    L8:
        r0.setCollectionInfo(r32);
        return;
    L7:
        r32 = (AccessibilityNodeInfo.CollectionInfo) ((CollectionInfoCompat) r3).mInfo;
        goto L8
    }

    public void setCollectionItemInfo(Object r3) {
        if (Build.VERSION.SDK_INT < 19) goto L10;
        AccessibilityNodeInfo r0 = this.mInfo;
        if (r3 != null) goto L7;
        AccessibilityNodeInfo.CollectionItemInfo r32 = null;
    L8:
        r0.setCollectionItemInfo(r32);
        return;
    L7:
        r32 = (AccessibilityNodeInfo.CollectionItemInfo) ((CollectionItemInfoCompat) r3).mInfo;
        goto L8
    }

    public CollectionItemInfoCompat getCollectionItemInfo() {
        if (Build.VERSION.SDK_INT < 19) goto L8;
        AccessibilityNodeInfo.CollectionItemInfo r0 = this.mInfo.getCollectionItemInfo();
        if (r0 != null) goto L7;
        return null;
    L7:
        return new CollectionItemInfoCompat(r0);
    L8:
        return null;
    }

    public RangeInfoCompat getRangeInfo() {
        if (Build.VERSION.SDK_INT < 19) goto L8;
        AccessibilityNodeInfo.RangeInfo r0 = this.mInfo.getRangeInfo();
        if (r0 != null) goto L7;
        return null;
    L7:
        return new RangeInfoCompat(r0);
    L8:
        return null;
    }

    public void setRangeInfo(RangeInfoCompat r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        this.mInfo.setRangeInfo((AccessibilityNodeInfo.RangeInfo) r3.mInfo);
        return;
    }

    public List<AccessibilityActionCompat> getActionList() {
        if (Build.VERSION.SDK_INT < 21) goto L5;
        List<AccessibilityNodeInfo.AccessibilityAction> r0 = this.mInfo.getActionList();
    L6:
        if (r0 == null) goto L12;
        ArrayList r1 = new ArrayList();
        int r2 = r0.size();
        int r3 = 0;
    L8:
        if (r3 >= r2) goto L10;
        r1.add(new AccessibilityActionCompat(r0.get(r3)));
        r3 = r3 + 1;
        goto L8
    L10:
        return r1;
    L12:
        return Collections.emptyList();
    L5:
        r0 = null;
        goto L6
    }

    public void setContentInvalid(boolean r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        this.mInfo.setContentInvalid(r3);
        return;
    }

    public boolean isContentInvalid() {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return false;
    L5:
        return this.mInfo.isContentInvalid();
    }

    public boolean isContextClickable() {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        return false;
    L5:
        return this.mInfo.isContextClickable();
    }

    public void setContextClickable(boolean r3) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        this.mInfo.setContextClickable(r3);
        return;
    }

    @Nullable
    public CharSequence getHintText() {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return this.mInfo.getHintText();
    L7:
        if (Build.VERSION.SDK_INT >= 19) goto L9;
        return null;
    L9:
        return this.mInfo.getExtras().getCharSequence(HINT_TEXT_KEY);
    }

    public void setHintText(@Nullable CharSequence r3) {
        if (Build.VERSION.SDK_INT < 26) goto L6;
        this.mInfo.setHintText(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 19) goto L10;
        this.mInfo.getExtras().putCharSequence(HINT_TEXT_KEY, r3);
        return;
    }

    public void setError(CharSequence r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        this.mInfo.setError(r3);
        return;
    }

    public CharSequence getError() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return this.mInfo.getError();
    }

    public void setLabelFor(View r3) {
        if (Build.VERSION.SDK_INT < 17) goto L6;
        this.mInfo.setLabelFor(r3);
        return;
    }

    public void setLabelFor(View r3, int r4) {
        if (Build.VERSION.SDK_INT < 17) goto L6;
        this.mInfo.setLabelFor(r3, r4);
        return;
    }

    public AccessibilityNodeInfoCompat getLabelFor() {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(this.mInfo.getLabelFor());
    }

    public void setLabeledBy(View r3) {
        if (Build.VERSION.SDK_INT < 17) goto L6;
        this.mInfo.setLabeledBy(r3);
        return;
    }

    public void setLabeledBy(View r3, int r4) {
        if (Build.VERSION.SDK_INT < 17) goto L6;
        this.mInfo.setLabeledBy(r3, r4);
        return;
    }

    public AccessibilityNodeInfoCompat getLabeledBy() {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(this.mInfo.getLabeledBy());
    }

    public boolean canOpenPopup() {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return false;
    L5:
        return this.mInfo.canOpenPopup();
    }

    public void setCanOpenPopup(boolean r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        this.mInfo.setCanOpenPopup(r3);
        return;
    }

    public List<AccessibilityNodeInfoCompat> findAccessibilityNodeInfosByViewId(String r3) {
        if (Build.VERSION.SDK_INT < 18) goto L10;
        List<AccessibilityNodeInfo> r32 = this.mInfo.findAccessibilityNodeInfosByViewId(r3);
        ArrayList r0 = new ArrayList();
        Iterator<AccessibilityNodeInfo> r33 = r32.iterator();
    L6:
        if (r33.hasNext() == false) goto L8;
        r0.add(wrap(r33.next()));
        goto L6
    L8:
        return r0;
    L10:
        return Collections.emptyList();
    }

    public Bundle getExtras() {
        if (Build.VERSION.SDK_INT < 19) goto L7;
        return this.mInfo.getExtras();
    L7:
        return new Bundle();
    }

    public int getInputType() {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return 0;
    L5:
        return this.mInfo.getInputType();
    }

    public void setInputType(int r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        this.mInfo.setInputType(r3);
        return;
    }

    public void setMaxTextLength(int r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        this.mInfo.setMaxTextLength(r3);
        return;
    }

    public int getMaxTextLength() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return -1;
    L5:
        return this.mInfo.getMaxTextLength();
    }

    public void setTextSelection(int r3, int r4) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        this.mInfo.setTextSelection(r3, r4);
        return;
    }

    public int getTextSelectionStart() {
        if (Build.VERSION.SDK_INT >= 18) goto L5;
        return -1;
    L5:
        return this.mInfo.getTextSelectionStart();
    }

    public int getTextSelectionEnd() {
        if (Build.VERSION.SDK_INT >= 18) goto L5;
        return -1;
    L5:
        return this.mInfo.getTextSelectionEnd();
    }

    public AccessibilityNodeInfoCompat getTraversalBefore() {
        if (Build.VERSION.SDK_INT >= 22) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(this.mInfo.getTraversalBefore());
    }

    public void setTraversalBefore(View r3) {
        if (Build.VERSION.SDK_INT < 22) goto L6;
        this.mInfo.setTraversalBefore(r3);
        return;
    }

    public void setTraversalBefore(View r3, int r4) {
        if (Build.VERSION.SDK_INT < 22) goto L6;
        this.mInfo.setTraversalBefore(r3, r4);
        return;
    }

    public AccessibilityNodeInfoCompat getTraversalAfter() {
        if (Build.VERSION.SDK_INT >= 22) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(this.mInfo.getTraversalAfter());
    }

    public void setTraversalAfter(View r3) {
        if (Build.VERSION.SDK_INT < 22) goto L6;
        this.mInfo.setTraversalAfter(r3);
        return;
    }

    public void setTraversalAfter(View r3, int r4) {
        if (Build.VERSION.SDK_INT < 22) goto L6;
        this.mInfo.setTraversalAfter(r3, r4);
        return;
    }

    public AccessibilityWindowInfoCompat getWindow() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return AccessibilityWindowInfoCompat.wrapNonNullInstance(this.mInfo.getWindow());
    }

    public boolean isDismissable() {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return false;
    L5:
        return this.mInfo.isDismissable();
    }

    public void setDismissable(boolean r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        this.mInfo.setDismissable(r3);
        return;
    }

    public boolean isEditable() {
        if (Build.VERSION.SDK_INT >= 18) goto L5;
        return false;
    L5:
        return this.mInfo.isEditable();
    }

    public void setEditable(boolean r3) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        this.mInfo.setEditable(r3);
        return;
    }

    public boolean isMultiLine() {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return false;
    L5:
        return this.mInfo.isMultiLine();
    }

    public void setMultiLine(boolean r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        this.mInfo.setMultiLine(r3);
        return;
    }

    @Nullable
    public CharSequence getTooltipText() {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return this.mInfo.getTooltipText();
    L7:
        if (Build.VERSION.SDK_INT >= 19) goto L9;
        return null;
    L9:
        return this.mInfo.getExtras().getCharSequence(TOOLTIP_TEXT_KEY);
    }

    public void setTooltipText(@Nullable CharSequence r3) {
        if (Build.VERSION.SDK_INT < 28) goto L6;
        this.mInfo.setTooltipText(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 19) goto L10;
        this.mInfo.getExtras().putCharSequence(TOOLTIP_TEXT_KEY, r3);
        return;
    }

    public void setPaneTitle(@Nullable CharSequence r3) {
        if (Build.VERSION.SDK_INT < 28) goto L6;
        this.mInfo.setPaneTitle(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 19) goto L10;
        this.mInfo.getExtras().putCharSequence(PANE_TITLE_KEY, r3);
        return;
    }

    @Nullable
    public CharSequence getPaneTitle() {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return this.mInfo.getPaneTitle();
    L7:
        if (Build.VERSION.SDK_INT >= 19) goto L9;
        return null;
    L9:
        return this.mInfo.getExtras().getCharSequence(PANE_TITLE_KEY);
    }

    public boolean isScreenReaderFocusable() {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return this.mInfo.isScreenReaderFocusable();
    L7:
        return getBooleanProperty(1);
    }

    public void setScreenReaderFocusable(boolean r3) {
        if (Build.VERSION.SDK_INT < 28) goto L5;
        this.mInfo.setScreenReaderFocusable(r3);
        return;
    L5:
        setBooleanProperty(1, r3);
    }

    public boolean isShowingHintText() {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return this.mInfo.isShowingHintText();
    L7:
        return getBooleanProperty(4);
    }

    public void setShowingHintText(boolean r3) {
        if (Build.VERSION.SDK_INT < 26) goto L5;
        this.mInfo.setShowingHintText(r3);
        return;
    L5:
        setBooleanProperty(4, r3);
    }

    public boolean isHeading() {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return this.mInfo.isHeading();
    L7:
        if (getBooleanProperty(2) == false) goto L9;
        return true;
    L9:
        CollectionItemInfoCompat r0 = getCollectionItemInfo();
        if (r0 != null) goto L12;
    L14:
        return false;
    L12:
        if (r0.isHeading() == false) goto L14;
        return true;
    }

    public void setHeading(boolean r3) {
        if (Build.VERSION.SDK_INT < 28) goto L5;
        this.mInfo.setHeading(r3);
        return;
    L5:
        setBooleanProperty(2, r3);
    }

    public boolean refresh() {
        if (Build.VERSION.SDK_INT >= 18) goto L5;
        return false;
    L5:
        return this.mInfo.refresh();
    }

    @Nullable
    public CharSequence getRoleDescription() {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return null;
    L5:
        return this.mInfo.getExtras().getCharSequence(ROLE_DESCRIPTION_KEY);
    }

    public void setRoleDescription(@Nullable CharSequence r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        this.mInfo.getExtras().putCharSequence(ROLE_DESCRIPTION_KEY, r3);
        return;
    }

    public int hashCode() {
        AccessibilityNodeInfo r0 = this.mInfo;
        if (r0 != null) goto L6;
        return 0;
    L6:
        return r0.hashCode();
    }

    public boolean equals(Object r5) {
        if (this != r5) goto L6;
        return true;
    L6:
        if (r5 != null) goto L9;
        return false;
    L9:
        if (getClass() == r5.getClass()) goto L11;
        return false;
    L11:
        AccessibilityNodeInfoCompat r52 = (AccessibilityNodeInfoCompat) r5;
        AccessibilityNodeInfo r2 = this.mInfo;
        if (r2 != null) goto L17;
        if (r52.mInfo == null) goto L19;
        return false;
    L19:
        return true;
    L17:
        if (r2.equals(r52.mInfo) == true) goto L19;
        return false;
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder();
        r0.append(super.toString());
        Rect r1 = new Rect();
        getBoundsInParent(r1);
        r0.append("; boundsInParent: " + r1);
        getBoundsInScreen(r1);
        r0.append("; boundsInScreen: " + r1);
        r0.append("; packageName: ");
        r0.append(getPackageName());
        r0.append("; className: ");
        r0.append(getClassName());
        r0.append("; text: ");
        r0.append(getText());
        r0.append("; contentDescription: ");
        r0.append(getContentDescription());
        r0.append("; viewId: ");
        r0.append(getViewIdResourceName());
        r0.append("; checkable: ");
        r0.append(isCheckable());
        r0.append("; checked: ");
        r0.append(isChecked());
        r0.append("; focusable: ");
        r0.append(isFocusable());
        r0.append("; focused: ");
        r0.append(isFocused());
        r0.append("; selected: ");
        r0.append(isSelected());
        r0.append("; clickable: ");
        r0.append(isClickable());
        r0.append("; longClickable: ");
        r0.append(isLongClickable());
        r0.append("; enabled: ");
        r0.append(isEnabled());
        r0.append("; password: ");
        r0.append(isPassword());
        r0.append("; scrollable: " + isScrollable());
        r0.append("; [");
        int r12 = getActions();
    L3:
        if (r12 == 0) goto L7;
        int r2 = 1 << Integer.numberOfTrailingZeros(r12);
        r12 = r12 & (~r2);
        r0.append(getActionSymbolicName(r2));
        if (r12 == 0) goto L3;
        r0.append(", ");
        goto L3
    L7:
        r0.append("]");
        return r0.toString();
    }

    private void setBooleanProperty(int r6, boolean r7) {
        Bundle r0 = getExtras();
        if (r0 == null) goto L10;
        int r3 = r0.getInt(BOOLEAN_PROPERTY_KEY, 0) & (~r6);
        if (r7 == true) goto L8;
        r6 = 0;
    L8:
        r0.putInt(BOOLEAN_PROPERTY_KEY, r6 | r3);
        return;
    }

    private boolean getBooleanProperty(int r4) {
        Bundle r0 = getExtras();
        if (r0 != null) goto L6;
        return false;
    L6:
        if ((r0.getInt(BOOLEAN_PROPERTY_KEY, 0) & r4) != r4) goto L9;
        return true;
    L9:
        return false;
    }
}
