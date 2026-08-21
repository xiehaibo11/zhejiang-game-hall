package android.support.v4.view.accessibility;

public class AccessibilityNodeInfoCompat {
    public static final int ACTION_ACCESSIBILITY_FOCUS = 64;
    public static final java.lang.String ACTION_ARGUMENT_COLUMN_INT = "android.view.accessibility.action.ARGUMENT_COLUMN_INT";
    public static final java.lang.String ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN = "ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN";
    public static final java.lang.String ACTION_ARGUMENT_HTML_ELEMENT_STRING = "ACTION_ARGUMENT_HTML_ELEMENT_STRING";
    public static final java.lang.String ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT = "ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT";
    public static final java.lang.String ACTION_ARGUMENT_MOVE_WINDOW_X = "ACTION_ARGUMENT_MOVE_WINDOW_X";
    public static final java.lang.String ACTION_ARGUMENT_MOVE_WINDOW_Y = "ACTION_ARGUMENT_MOVE_WINDOW_Y";
    public static final java.lang.String ACTION_ARGUMENT_PROGRESS_VALUE = "android.view.accessibility.action.ARGUMENT_PROGRESS_VALUE";
    public static final java.lang.String ACTION_ARGUMENT_ROW_INT = "android.view.accessibility.action.ARGUMENT_ROW_INT";
    public static final java.lang.String ACTION_ARGUMENT_SELECTION_END_INT = "ACTION_ARGUMENT_SELECTION_END_INT";
    public static final java.lang.String ACTION_ARGUMENT_SELECTION_START_INT = "ACTION_ARGUMENT_SELECTION_START_INT";
    public static final java.lang.String ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE = "ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE";
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
    private static final java.lang.String BOOLEAN_PROPERTY_KEY = "androidx.view.accessibility.AccessibilityNodeInfoCompat.BOOLEAN_PROPERTY_KEY";
    private static final int BOOLEAN_PROPERTY_SCREEN_READER_FOCUSABLE = 1;
    public static final int FOCUS_ACCESSIBILITY = 2;
    public static final int FOCUS_INPUT = 1;
    private static final java.lang.String HINT_TEXT_KEY = "androidx.view.accessibility.AccessibilityNodeInfoCompat.HINT_TEXT_KEY";
    public static final int MOVEMENT_GRANULARITY_CHARACTER = 1;
    public static final int MOVEMENT_GRANULARITY_LINE = 4;
    public static final int MOVEMENT_GRANULARITY_PAGE = 16;
    public static final int MOVEMENT_GRANULARITY_PARAGRAPH = 8;
    public static final int MOVEMENT_GRANULARITY_WORD = 2;
    private static final java.lang.String PANE_TITLE_KEY = "androidx.view.accessibility.AccessibilityNodeInfoCompat.PANE_TITLE_KEY";
    private static final java.lang.String ROLE_DESCRIPTION_KEY = "AccessibilityNodeInfo.roleDescription";
    private static final java.lang.String TOOLTIP_TEXT_KEY = "androidx.view.accessibility.AccessibilityNodeInfoCompat.TOOLTIP_TEXT_KEY";
    private final android.view.accessibility.AccessibilityNodeInfo mInfo;
    public int mParentVirtualDescendantId;

    public static class AccessibilityActionCompat {
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_ACCESSIBILITY_FOCUS = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_CLEAR_ACCESSIBILITY_FOCUS = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_CLEAR_FOCUS = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_CLEAR_SELECTION = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_CLICK = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_COLLAPSE = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_CONTEXT_CLICK = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_COPY = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_CUT = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_DISMISS = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_EXPAND = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_FOCUS = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_HIDE_TOOLTIP = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_LONG_CLICK = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_MOVE_WINDOW = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_NEXT_AT_MOVEMENT_GRANULARITY = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_NEXT_HTML_ELEMENT = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_PASTE = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_PREVIOUS_HTML_ELEMENT = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SCROLL_BACKWARD = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SCROLL_DOWN = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SCROLL_FORWARD = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SCROLL_LEFT = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SCROLL_RIGHT = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SCROLL_TO_POSITION = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SCROLL_UP = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SELECT = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SET_PROGRESS = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SET_SELECTION = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SET_TEXT = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SHOW_ON_SCREEN = null;
        public static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat ACTION_SHOW_TOOLTIP = null;
        final java.lang.Object mAction;

        static {
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r1 = 0
                r2 = 1
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_FOCUS = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 2
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_CLEAR_FOCUS = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 4
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SELECT = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 8
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_CLEAR_SELECTION = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 16
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_CLICK = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 32
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_LONG_CLICK = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 64
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_ACCESSIBILITY_FOCUS = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 128(0x80, float:1.8E-43)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_CLEAR_ACCESSIBILITY_FOCUS = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 256(0x100, float:3.59E-43)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_NEXT_AT_MOVEMENT_GRANULARITY = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 512(0x200, float:7.17E-43)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 1024(0x400, float:1.435E-42)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_NEXT_HTML_ELEMENT = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 2048(0x800, float:2.87E-42)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_PREVIOUS_HTML_ELEMENT = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 4096(0x1000, float:5.74E-42)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SCROLL_FORWARD = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 8192(0x2000, float:1.148E-41)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SCROLL_BACKWARD = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 16384(0x4000, float:2.2959E-41)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_COPY = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 32768(0x8000, float:4.5918E-41)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_PASTE = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 65536(0x10000, float:9.1835E-41)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_CUT = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 131072(0x20000, float:1.83671E-40)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SET_SELECTION = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 262144(0x40000, float:3.67342E-40)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_EXPAND = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 524288(0x80000, float:7.34684E-40)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_COLLAPSE = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 1048576(0x100000, float:1.469368E-39)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_DISMISS = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                r2 = 2097152(0x200000, float:2.938736E-39)
                r0.<init>(r2, r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SET_TEXT = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 23
                if (r2 < r3) goto Ld0
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_SHOW_ON_SCREEN
                goto Ld1
            Ld0:
                r2 = r1
            Ld1:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SHOW_ON_SCREEN = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                if (r2 < r3) goto Ldf
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_TO_POSITION
                goto Le0
            Ldf:
                r2 = r1
            Le0:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SCROLL_TO_POSITION = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                if (r2 < r3) goto Lee
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_UP
                goto Lef
            Lee:
                r2 = r1
            Lef:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SCROLL_UP = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                if (r2 < r3) goto Lfd
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_LEFT
                goto Lfe
            Lfd:
                r2 = r1
            Lfe:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SCROLL_LEFT = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                if (r2 < r3) goto L10c
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_DOWN
                goto L10d
            L10c:
                r2 = r1
            L10d:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SCROLL_DOWN = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                if (r2 < r3) goto L11b
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_RIGHT
                goto L11c
            L11b:
                r2 = r1
            L11c:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SCROLL_RIGHT = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                if (r2 < r3) goto L12a
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_CONTEXT_CLICK
                goto L12b
            L12a:
                r2 = r1
            L12b:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_CONTEXT_CLICK = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 24
                if (r2 < r3) goto L13b
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_SET_PROGRESS
                goto L13c
            L13b:
                r2 = r1
            L13c:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SET_PROGRESS = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 26
                if (r2 < r3) goto L14c
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_MOVE_WINDOW
                goto L14d
            L14c:
                r2 = r1
            L14d:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_MOVE_WINDOW = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 28
                if (r2 < r3) goto L15d
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r2 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_SHOW_TOOLTIP
                goto L15e
            L15d:
                r2 = r1
            L15e:
                r0.<init>(r2)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_SHOW_TOOLTIP = r0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
                int r2 = android.os.Build.VERSION.SDK_INT
                if (r2 < r3) goto L16b
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r1 = android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction.ACTION_HIDE_TOOLTIP
            L16b:
                r0.<init>(r1)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_HIDE_TOOLTIP = r0
                return
        }

        public AccessibilityActionCompat(int r3, java.lang.CharSequence r4) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 < r1) goto Lc
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r0 = new android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction
                r0.<init>(r3, r4)
                goto Ld
            Lc:
                r0 = 0
            Ld:
                r2.<init>(r0)
                return
        }

        AccessibilityActionCompat(java.lang.Object r1) {
                r0 = this;
                r0.<init>()
                r0.mAction = r1
                return
        }

        public int getId() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mAction
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r0 = (android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction) r0
                int r0 = r0.getId()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public java.lang.CharSequence getLabel() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mAction
                android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r0 = (android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction) r0
                java.lang.CharSequence r0 = r0.getLabel()
                return r0
            Lf:
                r0 = 0
                return r0
        }
    }

    public static class CollectionInfoCompat {
        public static final int SELECTION_MODE_MULTIPLE = 2;
        public static final int SELECTION_MODE_NONE = 0;
        public static final int SELECTION_MODE_SINGLE = 1;
        final java.lang.Object mInfo;

        CollectionInfoCompat(java.lang.Object r1) {
                r0 = this;
                r0.<init>()
                r0.mInfo = r1
                return
        }

        public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionInfoCompat obtain(int r2, int r3, boolean r4) {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto L10
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat
                android.view.accessibility.AccessibilityNodeInfo$CollectionInfo r2 = android.view.accessibility.AccessibilityNodeInfo.CollectionInfo.obtain(r2, r3, r4)
                r0.<init>(r2)
                return r0
            L10:
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat r2 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat
                r3 = 0
                r2.<init>(r3)
                return r2
        }

        public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionInfoCompat obtain(int r2, int r3, boolean r4, int r5) {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 < r1) goto L10
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat
                android.view.accessibility.AccessibilityNodeInfo$CollectionInfo r2 = android.view.accessibility.AccessibilityNodeInfo.CollectionInfo.obtain(r2, r3, r4, r5)
                r0.<init>(r2)
                return r0
            L10:
                int r5 = android.os.Build.VERSION.SDK_INT
                r0 = 19
                if (r5 < r0) goto L20
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat r5 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat
                android.view.accessibility.AccessibilityNodeInfo$CollectionInfo r2 = android.view.accessibility.AccessibilityNodeInfo.CollectionInfo.obtain(r2, r3, r4)
                r5.<init>(r2)
                return r5
            L20:
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat r2 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat
                r3 = 0
                r2.<init>(r3)
                return r2
        }

        public int getColumnCount() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionInfo) r0
                int r0 = r0.getColumnCount()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public int getRowCount() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionInfo) r0
                int r0 = r0.getRowCount()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public int getSelectionMode() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionInfo) r0
                int r0 = r0.getSelectionMode()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public boolean isHierarchical() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionInfo) r0
                boolean r0 = r0.isHierarchical()
                return r0
            Lf:
                r0 = 0
                return r0
        }
    }

    public static class CollectionItemInfoCompat {
        final java.lang.Object mInfo;

        CollectionItemInfoCompat(java.lang.Object r1) {
                r0 = this;
                r0.<init>()
                r0.mInfo = r1
                return
        }

        public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionItemInfoCompat obtain(int r2, int r3, int r4, int r5, boolean r6) {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto L10
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat
                android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r2 = android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo.obtain(r2, r3, r4, r5, r6)
                r0.<init>(r2)
                return r0
            L10:
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r2 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat
                r3 = 0
                r2.<init>(r3)
                return r2
        }

        public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionItemInfoCompat obtain(int r2, int r3, int r4, int r5, boolean r6, boolean r7) {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 < r1) goto L10
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat
                android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r2 = android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo.obtain(r2, r3, r4, r5, r6, r7)
                r0.<init>(r2)
                return r0
            L10:
                int r7 = android.os.Build.VERSION.SDK_INT
                r0 = 19
                if (r7 < r0) goto L20
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r7 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat
                android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r2 = android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo.obtain(r2, r3, r4, r5, r6)
                r7.<init>(r2)
                return r7
            L20:
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r2 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat
                r3 = 0
                r2.<init>(r3)
                return r2
        }

        public int getColumnIndex() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo) r0
                int r0 = r0.getColumnIndex()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public int getColumnSpan() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo) r0
                int r0 = r0.getColumnSpan()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public int getRowIndex() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo) r0
                int r0 = r0.getRowIndex()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public int getRowSpan() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo) r0
                int r0 = r0.getRowSpan()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public boolean isHeading() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo) r0
                boolean r0 = r0.isHeading()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public boolean isSelected() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo) r0
                boolean r0 = r0.isSelected()
                return r0
            Lf:
                r0 = 0
                return r0
        }
    }

    public static class RangeInfoCompat {
        public static final int RANGE_TYPE_FLOAT = 1;
        public static final int RANGE_TYPE_INT = 0;
        public static final int RANGE_TYPE_PERCENT = 2;
        final java.lang.Object mInfo;

        RangeInfoCompat(java.lang.Object r1) {
                r0 = this;
                r0.<init>()
                r0.mInfo = r1
                return
        }

        public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.RangeInfoCompat obtain(int r2, float r3, float r4, float r5) {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto L10
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$RangeInfoCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$RangeInfoCompat
                android.view.accessibility.AccessibilityNodeInfo$RangeInfo r2 = android.view.accessibility.AccessibilityNodeInfo.RangeInfo.obtain(r2, r3, r4, r5)
                r0.<init>(r2)
                return r0
            L10:
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$RangeInfoCompat r2 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$RangeInfoCompat
                r3 = 0
                r2.<init>(r3)
                return r2
        }

        public float getCurrent() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$RangeInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.RangeInfo) r0
                float r0 = r0.getCurrent()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public float getMax() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$RangeInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.RangeInfo) r0
                float r0 = r0.getMax()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public float getMin() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$RangeInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.RangeInfo) r0
                float r0 = r0.getMin()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public int getType() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto Lf
                java.lang.Object r0 = r2.mInfo
                android.view.accessibility.AccessibilityNodeInfo$RangeInfo r0 = (android.view.accessibility.AccessibilityNodeInfo.RangeInfo) r0
                int r0 = r0.getType()
                return r0
            Lf:
                r0 = 0
                return r0
        }
    }

    private AccessibilityNodeInfoCompat(android.view.accessibility.AccessibilityNodeInfo r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.mParentVirtualDescendantId = r0
            r1.mInfo = r2
            return
    }

    @java.lang.Deprecated
    public AccessibilityNodeInfoCompat(java.lang.Object r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.mParentVirtualDescendantId = r0
            android.view.accessibility.AccessibilityNodeInfo r2 = (android.view.accessibility.AccessibilityNodeInfo) r2
            r1.mInfo = r2
            return
    }

    private static java.lang.String getActionSymbolicName(int r1) {
            r0 = 1
            if (r1 == r0) goto L3f
            r0 = 2
            if (r1 == r0) goto L3c
            switch(r1) {
                case 4: goto L39;
                case 8: goto L36;
                case 16: goto L33;
                case 32: goto L30;
                case 64: goto L2d;
                case 128: goto L2a;
                case 256: goto L27;
                case 512: goto L24;
                case 1024: goto L21;
                case 2048: goto L1e;
                case 4096: goto L1b;
                case 8192: goto L18;
                case 16384: goto L15;
                case 32768: goto L12;
                case 65536: goto Lf;
                case 131072: goto Lc;
                default: goto L9;
            }
        L9:
            java.lang.String r1 = "ACTION_UNKNOWN"
            return r1
        Lc:
            java.lang.String r1 = "ACTION_SET_SELECTION"
            return r1
        Lf:
            java.lang.String r1 = "ACTION_CUT"
            return r1
        L12:
            java.lang.String r1 = "ACTION_PASTE"
            return r1
        L15:
            java.lang.String r1 = "ACTION_COPY"
            return r1
        L18:
            java.lang.String r1 = "ACTION_SCROLL_BACKWARD"
            return r1
        L1b:
            java.lang.String r1 = "ACTION_SCROLL_FORWARD"
            return r1
        L1e:
            java.lang.String r1 = "ACTION_PREVIOUS_HTML_ELEMENT"
            return r1
        L21:
            java.lang.String r1 = "ACTION_NEXT_HTML_ELEMENT"
            return r1
        L24:
            java.lang.String r1 = "ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY"
            return r1
        L27:
            java.lang.String r1 = "ACTION_NEXT_AT_MOVEMENT_GRANULARITY"
            return r1
        L2a:
            java.lang.String r1 = "ACTION_CLEAR_ACCESSIBILITY_FOCUS"
            return r1
        L2d:
            java.lang.String r1 = "ACTION_ACCESSIBILITY_FOCUS"
            return r1
        L30:
            java.lang.String r1 = "ACTION_LONG_CLICK"
            return r1
        L33:
            java.lang.String r1 = "ACTION_CLICK"
            return r1
        L36:
            java.lang.String r1 = "ACTION_CLEAR_SELECTION"
            return r1
        L39:
            java.lang.String r1 = "ACTION_SELECT"
            return r1
        L3c:
            java.lang.String r1 = "ACTION_CLEAR_FOCUS"
            return r1
        L3f:
            java.lang.String r1 = "ACTION_FOCUS"
            return r1
    }

    private boolean getBooleanProperty(int r4) {
            r3 = this;
            android.os.Bundle r0 = r3.getExtras()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r2 = "androidx.view.accessibility.AccessibilityNodeInfoCompat.BOOLEAN_PROPERTY_KEY"
            int r0 = r0.getInt(r2, r1)
            r0 = r0 & r4
            if (r0 != r4) goto L12
            r1 = 1
        L12:
            return r1
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain() {
            android.view.accessibility.AccessibilityNodeInfo r0 = android.view.accessibility.AccessibilityNodeInfo.obtain()
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = wrap(r0)
            return r0
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain(android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0) {
            android.view.accessibility.AccessibilityNodeInfo r0 = r0.mInfo
            android.view.accessibility.AccessibilityNodeInfo r0 = android.view.accessibility.AccessibilityNodeInfo.obtain(r0)
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = wrap(r0)
            return r0
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain(android.view.View r0) {
            android.view.accessibility.AccessibilityNodeInfo r0 = android.view.accessibility.AccessibilityNodeInfo.obtain(r0)
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = wrap(r0)
            return r0
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain(android.view.View r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lf
            android.view.accessibility.AccessibilityNodeInfo r2 = android.view.accessibility.AccessibilityNodeInfo.obtain(r2, r3)
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r2 = wrapNonNullInstance(r2)
            return r2
        Lf:
            r2 = 0
            return r2
    }

    private void setBooleanProperty(int r6, boolean r7) {
            r5 = this;
            android.os.Bundle r0 = r5.getExtras()
            if (r0 == 0) goto L17
            r1 = 0
            java.lang.String r2 = "androidx.view.accessibility.AccessibilityNodeInfoCompat.BOOLEAN_PROPERTY_KEY"
            int r3 = r0.getInt(r2, r1)
            int r4 = ~r6
            r3 = r3 & r4
            if (r7 == 0) goto L12
            goto L13
        L12:
            r6 = r1
        L13:
            r6 = r6 | r3
            r0.putInt(r2, r6)
        L17:
            return
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat wrap(android.view.accessibility.AccessibilityNodeInfo r1) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat
            r0.<init>(r1)
            return r0
    }

    static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat wrapNonNullInstance(java.lang.Object r1) {
            if (r1 == 0) goto L8
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat
            r0.<init>(r1)
            return r0
        L8:
            r1 = 0
            return r1
    }

    public void addAction(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.addAction(r2)
            return
    }

    public void addAction(android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            java.lang.Object r3 = r3.mAction
            android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r3 = (android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction) r3
            r0.addAction(r3)
        Lf:
            return
    }

    public void addChild(android.view.View r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.addChild(r2)
            return
    }

    public void addChild(android.view.View r3, int r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.addChild(r3, r4)
        Lb:
            return
    }

    public boolean canOpenPopup() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.canOpenPopup()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r5 = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat) r5
            android.view.accessibility.AccessibilityNodeInfo r2 = r4.mInfo
            if (r2 != 0) goto L1e
            android.view.accessibility.AccessibilityNodeInfo r5 = r5.mInfo
            if (r5 == 0) goto L27
            return r1
        L1e:
            android.view.accessibility.AccessibilityNodeInfo r5 = r5.mInfo
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L27
            return r1
        L27:
            return r0
    }

    public java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat> findAccessibilityNodeInfosByText(java.lang.String r5) {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.view.accessibility.AccessibilityNodeInfo r1 = r4.mInfo
            java.util.List r5 = r1.findAccessibilityNodeInfosByText(r5)
            int r1 = r5.size()
            r2 = 0
        L10:
            if (r2 >= r1) goto L22
            java.lang.Object r3 = r5.get(r2)
            android.view.accessibility.AccessibilityNodeInfo r3 = (android.view.accessibility.AccessibilityNodeInfo) r3
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r3 = wrap(r3)
            r0.add(r3)
            int r2 = r2 + 1
            goto L10
        L22:
            return r0
    }

    public java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat> findAccessibilityNodeInfosByViewId(java.lang.String r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L2a
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            java.util.List r3 = r0.findAccessibilityNodeInfosByViewId(r3)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L15:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L29
            java.lang.Object r1 = r3.next()
            android.view.accessibility.AccessibilityNodeInfo r1 = (android.view.accessibility.AccessibilityNodeInfo) r1
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r1 = wrap(r1)
            r0.add(r1)
            goto L15
        L29:
            return r0
        L2a:
            java.util.List r3 = java.util.Collections.emptyList()
            return r3
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat findFocus(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L11
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityNodeInfo r3 = r0.findFocus(r3)
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r3 = wrapNonNullInstance(r3)
            return r3
        L11:
            r3 = 0
            return r3
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat focusSearch(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L11
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityNodeInfo r3 = r0.focusSearch(r3)
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r3 = wrapNonNullInstance(r3)
            return r3
        L11:
            r3 = 0
            return r3
    }

    public java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat> getActionList() {
            r6 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r6.mInfo
            java.util.List r0 = r0.getActionList()
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r0 == 0) goto L2c
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            int r2 = r0.size()
            r3 = 0
        L1a:
            if (r3 >= r2) goto L2b
            java.lang.Object r4 = r0.get(r3)
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r5 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat
            r5.<init>(r4)
            r1.add(r5)
            int r3 = r3 + 1
            goto L1a
        L2b:
            return r1
        L2c:
            java.util.List r0 = java.util.Collections.emptyList()
            return r0
    }

    public int getActions() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            int r0 = r0.getActions()
            return r0
    }

    public void getBoundsInParent(android.graphics.Rect r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.getBoundsInParent(r2)
            return
    }

    public void getBoundsInScreen(android.graphics.Rect r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.getBoundsInScreen(r2)
            return
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getChild(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            android.view.accessibility.AccessibilityNodeInfo r2 = r0.getChild(r2)
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r2 = wrapNonNullInstance(r2)
            return r2
    }

    public int getChildCount() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            int r0 = r0.getChildCount()
            return r0
    }

    public java.lang.CharSequence getClassName() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            java.lang.CharSequence r0 = r0.getClassName()
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionInfoCompat getCollectionInfo() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L14
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityNodeInfo$CollectionInfo r0 = r0.getCollectionInfo()
            if (r0 == 0) goto L14
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat r1 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat
            r1.<init>(r0)
            return r1
        L14:
            r0 = 0
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionItemInfoCompat getCollectionItemInfo() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L14
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r0 = r0.getCollectionItemInfo()
            if (r0 == 0) goto L14
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r1 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat
            r1.<init>(r0)
            return r1
        L14:
            r0 = 0
            return r0
    }

    public java.lang.CharSequence getContentDescription() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            java.lang.CharSequence r0 = r0.getContentDescription()
            return r0
    }

    public int getDrawingOrder() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            int r0 = r0.getDrawingOrder()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public java.lang.CharSequence getError() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            java.lang.CharSequence r0 = r0.getError()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public android.os.Bundle getExtras() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.os.Bundle r0 = r0.getExtras()
            return r0
        Ld:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            return r0
    }

    public java.lang.CharSequence getHintText() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            java.lang.CharSequence r0 = r0.getHintText()
            return r0
        Ld:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L20
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r1 = "androidx.view.accessibility.AccessibilityNodeInfoCompat.HINT_TEXT_KEY"
            java.lang.CharSequence r0 = r0.getCharSequence(r1)
            return r0
        L20:
            r0 = 0
            return r0
    }

    @java.lang.Deprecated
    public java.lang.Object getInfo() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            return r0
    }

    public int getInputType() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            int r0 = r0.getInputType()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getLabelFor() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L11
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityNodeInfo r0 = r0.getLabelFor()
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = wrapNonNullInstance(r0)
            return r0
        L11:
            r0 = 0
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getLabeledBy() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L11
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityNodeInfo r0 = r0.getLabeledBy()
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = wrapNonNullInstance(r0)
            return r0
        L11:
            r0 = 0
            return r0
    }

    public int getLiveRegion() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            int r0 = r0.getLiveRegion()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public int getMaxTextLength() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            int r0 = r0.getMaxTextLength()
            return r0
        Ld:
            r0 = -1
            return r0
    }

    public int getMovementGranularities() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            int r0 = r0.getMovementGranularities()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public java.lang.CharSequence getPackageName() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            java.lang.CharSequence r0 = r0.getPackageName()
            return r0
    }

    public java.lang.CharSequence getPaneTitle() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            java.lang.CharSequence r0 = r0.getPaneTitle()
            return r0
        Ld:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L20
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r1 = "androidx.view.accessibility.AccessibilityNodeInfoCompat.PANE_TITLE_KEY"
            java.lang.CharSequence r0 = r0.getCharSequence(r1)
            return r0
        L20:
            r0 = 0
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getParent() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            android.view.accessibility.AccessibilityNodeInfo r0 = r0.getParent()
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = wrapNonNullInstance(r0)
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.RangeInfoCompat getRangeInfo() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L14
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityNodeInfo$RangeInfo r0 = r0.getRangeInfo()
            if (r0 == 0) goto L14
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$RangeInfoCompat r1 = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$RangeInfoCompat
            r1.<init>(r0)
            return r1
        L14:
            r0 = 0
            return r0
    }

    public java.lang.CharSequence getRoleDescription() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L13
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r1 = "AccessibilityNodeInfo.roleDescription"
            java.lang.CharSequence r0 = r0.getCharSequence(r1)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public java.lang.CharSequence getText() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            java.lang.CharSequence r0 = r0.getText()
            return r0
    }

    public int getTextSelectionEnd() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            int r0 = r0.getTextSelectionEnd()
            return r0
        Ld:
            r0 = -1
            return r0
    }

    public int getTextSelectionStart() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            int r0 = r0.getTextSelectionStart()
            return r0
        Ld:
            r0 = -1
            return r0
    }

    public java.lang.CharSequence getTooltipText() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            java.lang.CharSequence r0 = r0.getTooltipText()
            return r0
        Ld:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L20
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r1 = "androidx.view.accessibility.AccessibilityNodeInfoCompat.TOOLTIP_TEXT_KEY"
            java.lang.CharSequence r0 = r0.getCharSequence(r1)
            return r0
        L20:
            r0 = 0
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getTraversalAfter() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            if (r0 < r1) goto L11
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityNodeInfo r0 = r0.getTraversalAfter()
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = wrapNonNullInstance(r0)
            return r0
        L11:
            r0 = 0
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getTraversalBefore() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            if (r0 < r1) goto L11
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityNodeInfo r0 = r0.getTraversalBefore()
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = wrapNonNullInstance(r0)
            return r0
        L11:
            r0 = 0
            return r0
    }

    public java.lang.String getViewIdResourceName() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            java.lang.String r0 = r0.getViewIdResourceName()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityWindowInfoCompat getWindow() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L11
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = r0.getWindow()
            android.support.v4.view.accessibility.AccessibilityWindowInfoCompat r0 = android.support.v4.view.accessibility.AccessibilityWindowInfoCompat.wrapNonNullInstance(r0)
            return r0
        L11:
            r0 = 0
            return r0
    }

    public int getWindowId() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            int r0 = r0.getWindowId()
            return r0
    }

    public int hashCode() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.hashCode()
        La:
            return r0
    }

    public boolean isAccessibilityFocused() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isAccessibilityFocused()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean isCheckable() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isCheckable()
            return r0
    }

    public boolean isChecked() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isChecked()
            return r0
    }

    public boolean isClickable() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isClickable()
            return r0
    }

    public boolean isContentInvalid() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isContentInvalid()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean isContextClickable() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isContextClickable()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean isDismissable() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isDismissable()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean isEditable() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isEditable()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean isEnabled() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isEnabled()
            return r0
    }

    public boolean isFocusable() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isFocusable()
            return r0
    }

    public boolean isFocused() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isFocused()
            return r0
    }

    public boolean isHeading() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isHeading()
            return r0
        Ld:
            r0 = 2
            boolean r0 = r2.getBooleanProperty(r0)
            r1 = 1
            if (r0 == 0) goto L16
            return r1
        L16:
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r0 = r2.getCollectionItemInfo()
            if (r0 == 0) goto L23
            boolean r0 = r0.isHeading()
            if (r0 == 0) goto L23
            goto L24
        L23:
            r1 = 0
        L24:
            return r1
    }

    public boolean isImportantForAccessibility() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isImportantForAccessibility()
            return r0
        Ld:
            r0 = 1
            return r0
    }

    public boolean isLongClickable() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isLongClickable()
            return r0
    }

    public boolean isMultiLine() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isMultiLine()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean isPassword() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isPassword()
            return r0
    }

    public boolean isScreenReaderFocusable() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isScreenReaderFocusable()
            return r0
        Ld:
            r0 = 1
            boolean r0 = r2.getBooleanProperty(r0)
            return r0
    }

    public boolean isScrollable() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isScrollable()
            return r0
    }

    public boolean isSelected() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r0 = r0.isSelected()
            return r0
    }

    public boolean isShowingHintText() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isShowingHintText()
            return r0
        Ld:
            r0 = 4
            boolean r0 = r2.getBooleanProperty(r0)
            return r0
    }

    public boolean isVisibleToUser() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.isVisibleToUser()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean performAction(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            boolean r2 = r0.performAction(r2)
            return r2
    }

    public boolean performAction(int r3, android.os.Bundle r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r3 = r0.performAction(r3, r4)
            return r3
        Ld:
            r3 = 0
            return r3
    }

    public void recycle() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.recycle()
            return
    }

    public boolean refresh() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r0 = r0.refresh()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean removeAction(android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L11
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            java.lang.Object r3 = r3.mAction
            android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction r3 = (android.view.accessibility.AccessibilityNodeInfo.AccessibilityAction) r3
            boolean r3 = r0.removeAction(r3)
            return r3
        L11:
            r3 = 0
            return r3
    }

    public boolean removeChild(android.view.View r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r3 = r0.removeChild(r3)
            return r3
        Ld:
            r3 = 0
            return r3
    }

    public boolean removeChild(android.view.View r3, int r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            boolean r3 = r0.removeChild(r3, r4)
            return r3
        Ld:
            r3 = 0
            return r3
    }

    public void setAccessibilityFocused(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setAccessibilityFocused(r3)
        Lb:
            return
    }

    public void setBoundsInParent(android.graphics.Rect r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setBoundsInParent(r2)
            return
    }

    public void setBoundsInScreen(android.graphics.Rect r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setBoundsInScreen(r2)
            return
    }

    public void setCanOpenPopup(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setCanOpenPopup(r3)
        Lb:
            return
    }

    public void setCheckable(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setCheckable(r2)
            return
    }

    public void setChecked(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setChecked(r2)
            return
    }

    public void setClassName(java.lang.CharSequence r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setClassName(r2)
            return
    }

    public void setClickable(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setClickable(r2)
            return
    }

    public void setCollectionInfo(java.lang.Object r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L15
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            if (r3 != 0) goto Lc
            r3 = 0
            goto L12
        Lc:
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat r3 = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionInfoCompat) r3
            java.lang.Object r3 = r3.mInfo
            android.view.accessibility.AccessibilityNodeInfo$CollectionInfo r3 = (android.view.accessibility.AccessibilityNodeInfo.CollectionInfo) r3
        L12:
            r0.setCollectionInfo(r3)
        L15:
            return
    }

    public void setCollectionItemInfo(java.lang.Object r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L15
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            if (r3 != 0) goto Lc
            r3 = 0
            goto L12
        Lc:
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r3 = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionItemInfoCompat) r3
            java.lang.Object r3 = r3.mInfo
            android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo r3 = (android.view.accessibility.AccessibilityNodeInfo.CollectionItemInfo) r3
        L12:
            r0.setCollectionItemInfo(r3)
        L15:
            return
    }

    public void setContentDescription(java.lang.CharSequence r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setContentDescription(r2)
            return
    }

    public void setContentInvalid(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setContentInvalid(r3)
        Lb:
            return
    }

    public void setContextClickable(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setContextClickable(r3)
        Lb:
            return
    }

    public void setDismissable(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setDismissable(r3)
        Lb:
            return
    }

    public void setDrawingOrder(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setDrawingOrder(r3)
        Lb:
            return
    }

    public void setEditable(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setEditable(r3)
        Lb:
            return
    }

    public void setEnabled(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setEnabled(r2)
            return
    }

    public void setError(java.lang.CharSequence r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setError(r3)
        Lb:
            return
    }

    public void setFocusable(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setFocusable(r2)
            return
    }

    public void setFocused(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setFocused(r2)
            return
    }

    public void setHeading(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lc
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setHeading(r3)
            goto L10
        Lc:
            r0 = 2
            r2.setBooleanProperty(r0, r3)
        L10:
            return
    }

    public void setHintText(java.lang.CharSequence r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lc
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setHintText(r3)
            goto L1d
        Lc:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L1d
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r1 = "androidx.view.accessibility.AccessibilityNodeInfoCompat.HINT_TEXT_KEY"
            r0.putCharSequence(r1, r3)
        L1d:
            return
    }

    public void setImportantForAccessibility(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setImportantForAccessibility(r3)
        Lb:
            return
    }

    public void setInputType(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setInputType(r3)
        Lb:
            return
    }

    public void setLabelFor(android.view.View r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setLabelFor(r3)
        Lb:
            return
    }

    public void setLabelFor(android.view.View r3, int r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setLabelFor(r3, r4)
        Lb:
            return
    }

    public void setLabeledBy(android.view.View r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setLabeledBy(r3)
        Lb:
            return
    }

    public void setLabeledBy(android.view.View r3, int r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setLabeledBy(r3, r4)
        Lb:
            return
    }

    public void setLiveRegion(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setLiveRegion(r3)
        Lb:
            return
    }

    public void setLongClickable(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setLongClickable(r2)
            return
    }

    public void setMaxTextLength(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setMaxTextLength(r3)
        Lb:
            return
    }

    public void setMovementGranularities(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setMovementGranularities(r3)
        Lb:
            return
    }

    public void setMultiLine(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setMultiLine(r3)
        Lb:
            return
    }

    public void setPackageName(java.lang.CharSequence r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setPackageName(r2)
            return
    }

    public void setPaneTitle(java.lang.CharSequence r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lc
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setPaneTitle(r3)
            goto L1d
        Lc:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L1d
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r1 = "androidx.view.accessibility.AccessibilityNodeInfoCompat.PANE_TITLE_KEY"
            r0.putCharSequence(r1, r3)
        L1d:
            return
    }

    public void setParent(android.view.View r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setParent(r2)
            return
    }

    public void setParent(android.view.View r3, int r4) {
            r2 = this;
            r2.mParentVirtualDescendantId = r4
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Ld
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setParent(r3, r4)
        Ld:
            return
    }

    public void setPassword(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setPassword(r2)
            return
    }

    public void setRangeInfo(android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.RangeInfoCompat r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lf
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            java.lang.Object r3 = r3.mInfo
            android.view.accessibility.AccessibilityNodeInfo$RangeInfo r3 = (android.view.accessibility.AccessibilityNodeInfo.RangeInfo) r3
            r0.setRangeInfo(r3)
        Lf:
            return
    }

    public void setRoleDescription(java.lang.CharSequence r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L11
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r1 = "AccessibilityNodeInfo.roleDescription"
            r0.putCharSequence(r1, r3)
        L11:
            return
    }

    public void setScreenReaderFocusable(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lc
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setScreenReaderFocusable(r3)
            goto L10
        Lc:
            r0 = 1
            r2.setBooleanProperty(r0, r3)
        L10:
            return
    }

    public void setScrollable(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setScrollable(r2)
            return
    }

    public void setSelected(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setSelected(r2)
            return
    }

    public void setShowingHintText(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lc
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setShowingHintText(r3)
            goto L10
        Lc:
            r0 = 4
            r2.setBooleanProperty(r0, r3)
        L10:
            return
    }

    public void setSource(android.view.View r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setSource(r2)
            return
    }

    public void setSource(android.view.View r3, int r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setSource(r3, r4)
        Lb:
            return
    }

    public void setText(java.lang.CharSequence r2) {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            r0.setText(r2)
            return
    }

    public void setTextSelection(int r3, int r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setTextSelection(r3, r4)
        Lb:
            return
    }

    public void setTooltipText(java.lang.CharSequence r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lc
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setTooltipText(r3)
            goto L1d
        Lc:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L1d
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r1 = "androidx.view.accessibility.AccessibilityNodeInfoCompat.TOOLTIP_TEXT_KEY"
            r0.putCharSequence(r1, r3)
        L1d:
            return
    }

    public void setTraversalAfter(android.view.View r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setTraversalAfter(r3)
        Lb:
            return
    }

    public void setTraversalAfter(android.view.View r3, int r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setTraversalAfter(r3, r4)
        Lb:
            return
    }

    public void setTraversalBefore(android.view.View r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setTraversalBefore(r3)
        Lb:
            return
    }

    public void setTraversalBefore(android.view.View r3, int r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setTraversalBefore(r3, r4)
        Lb:
            return
    }

    public void setViewIdResourceName(java.lang.String r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setViewIdResourceName(r3)
        Lb:
            return
    }

    public void setVisibleToUser(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            android.view.accessibility.AccessibilityNodeInfo r0 = r2.mInfo
            r0.setVisibleToUser(r3)
        Lb:
            return
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = super.toString()
            r0.append(r1)
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r4.getBoundsInParent(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "; boundsInParent: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            r4.getBoundsInScreen(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "; boundsInScreen: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            java.lang.String r1 = "; packageName: "
            r0.append(r1)
            java.lang.CharSequence r1 = r4.getPackageName()
            r0.append(r1)
            java.lang.String r1 = "; className: "
            r0.append(r1)
            java.lang.CharSequence r1 = r4.getClassName()
            r0.append(r1)
            java.lang.String r1 = "; text: "
            r0.append(r1)
            java.lang.CharSequence r1 = r4.getText()
            r0.append(r1)
            java.lang.String r1 = "; contentDescription: "
            r0.append(r1)
            java.lang.CharSequence r1 = r4.getContentDescription()
            r0.append(r1)
            java.lang.String r1 = "; viewId: "
            r0.append(r1)
            java.lang.String r1 = r4.getViewIdResourceName()
            r0.append(r1)
            java.lang.String r1 = "; checkable: "
            r0.append(r1)
            boolean r1 = r4.isCheckable()
            r0.append(r1)
            java.lang.String r1 = "; checked: "
            r0.append(r1)
            boolean r1 = r4.isChecked()
            r0.append(r1)
            java.lang.String r1 = "; focusable: "
            r0.append(r1)
            boolean r1 = r4.isFocusable()
            r0.append(r1)
            java.lang.String r1 = "; focused: "
            r0.append(r1)
            boolean r1 = r4.isFocused()
            r0.append(r1)
            java.lang.String r1 = "; selected: "
            r0.append(r1)
            boolean r1 = r4.isSelected()
            r0.append(r1)
            java.lang.String r1 = "; clickable: "
            r0.append(r1)
            boolean r1 = r4.isClickable()
            r0.append(r1)
            java.lang.String r1 = "; longClickable: "
            r0.append(r1)
            boolean r1 = r4.isLongClickable()
            r0.append(r1)
            java.lang.String r1 = "; enabled: "
            r0.append(r1)
            boolean r1 = r4.isEnabled()
            r0.append(r1)
            java.lang.String r1 = "; password: "
            r0.append(r1)
            boolean r1 = r4.isPassword()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "; scrollable: "
            r1.append(r2)
            boolean r2 = r4.isScrollable()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = "; ["
            r0.append(r1)
            int r1 = r4.getActions()
        L108:
            if (r1 == 0) goto L121
            r2 = 1
            int r3 = java.lang.Integer.numberOfTrailingZeros(r1)
            int r2 = r2 << r3
            int r3 = ~r2
            r1 = r1 & r3
            java.lang.String r2 = getActionSymbolicName(r2)
            r0.append(r2)
            if (r1 == 0) goto L108
            java.lang.String r2 = ", "
            r0.append(r2)
            goto L108
        L121:
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public android.view.accessibility.AccessibilityNodeInfo unwrap() {
            r1 = this;
            android.view.accessibility.AccessibilityNodeInfo r0 = r1.mInfo
            return r0
    }
}
