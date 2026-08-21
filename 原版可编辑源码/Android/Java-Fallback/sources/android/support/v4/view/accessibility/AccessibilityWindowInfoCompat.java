package android.support.v4.view.accessibility;

public class AccessibilityWindowInfoCompat {
    public static final int TYPE_ACCESSIBILITY_OVERLAY = 4;
    public static final int TYPE_APPLICATION = 1;
    public static final int TYPE_INPUT_METHOD = 2;
    public static final int TYPE_SPLIT_SCREEN_DIVIDER = 5;
    public static final int TYPE_SYSTEM = 3;
    private static final int UNDEFINED = -1;
    private java.lang.Object mInfo;

    private AccessibilityWindowInfoCompat(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.mInfo = r1
            return
    }

    public static android.support.v4.view.accessibility.AccessibilityWindowInfoCompat obtain() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            android.view.accessibility.AccessibilityWindowInfo r0 = android.view.accessibility.AccessibilityWindowInfo.obtain()
            android.support.v4.view.accessibility.AccessibilityWindowInfoCompat r0 = wrapNonNullInstance(r0)
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static android.support.v4.view.accessibility.AccessibilityWindowInfoCompat obtain(android.support.v4.view.accessibility.AccessibilityWindowInfoCompat r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 21
            if (r0 < r2) goto L16
            if (r3 != 0) goto La
            goto L16
        La:
            java.lang.Object r3 = r3.mInfo
            android.view.accessibility.AccessibilityWindowInfo r3 = (android.view.accessibility.AccessibilityWindowInfo) r3
            android.view.accessibility.AccessibilityWindowInfo r3 = android.view.accessibility.AccessibilityWindowInfo.obtain(r3)
            android.support.v4.view.accessibility.AccessibilityWindowInfoCompat r1 = wrapNonNullInstance(r3)
        L16:
            return r1
    }

    private static java.lang.String typeToString(int r1) {
            r0 = 1
            if (r1 == r0) goto L18
            r0 = 2
            if (r1 == r0) goto L15
            r0 = 3
            if (r1 == r0) goto L12
            r0 = 4
            if (r1 == r0) goto Lf
            java.lang.String r1 = "<UNKNOWN>"
            return r1
        Lf:
            java.lang.String r1 = "TYPE_ACCESSIBILITY_OVERLAY"
            return r1
        L12:
            java.lang.String r1 = "TYPE_SYSTEM"
            return r1
        L15:
            java.lang.String r1 = "TYPE_INPUT_METHOD"
            return r1
        L18:
            java.lang.String r1 = "TYPE_APPLICATION"
            return r1
    }

    static android.support.v4.view.accessibility.AccessibilityWindowInfoCompat wrapNonNullInstance(java.lang.Object r1) {
            if (r1 == 0) goto L8
            android.support.v4.view.accessibility.AccessibilityWindowInfoCompat r0 = new android.support.v4.view.accessibility.AccessibilityWindowInfoCompat
            r0.<init>(r1)
            return r0
        L8:
            r1 = 0
            return r1
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
            android.support.v4.view.accessibility.AccessibilityWindowInfoCompat r5 = (android.support.v4.view.accessibility.AccessibilityWindowInfoCompat) r5
            java.lang.Object r2 = r4.mInfo
            if (r2 != 0) goto L1e
            java.lang.Object r5 = r5.mInfo
            if (r5 == 0) goto L27
            return r1
        L1e:
            java.lang.Object r5 = r5.mInfo
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L27
            return r1
        L27:
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getAnchor() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L13
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            android.view.accessibility.AccessibilityNodeInfo r0 = r0.getAnchor()
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.wrapNonNullInstance(r0)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public void getBoundsInScreen(android.graphics.Rect r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Ld
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            r0.getBoundsInScreen(r3)
        Ld:
            return
    }

    public android.support.v4.view.accessibility.AccessibilityWindowInfoCompat getChild(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L13
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            android.view.accessibility.AccessibilityWindowInfo r3 = r0.getChild(r3)
            android.support.v4.view.accessibility.AccessibilityWindowInfoCompat r3 = wrapNonNullInstance(r3)
            return r3
        L13:
            r3 = 0
            return r3
    }

    public int getChildCount() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            int r0 = r0.getChildCount()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getId() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            int r0 = r0.getId()
            return r0
        Lf:
            r0 = -1
            return r0
    }

    public int getLayer() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            int r0 = r0.getLayer()
            return r0
        Lf:
            r0 = -1
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityWindowInfoCompat getParent() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L13
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            android.view.accessibility.AccessibilityWindowInfo r0 = r0.getParent()
            android.support.v4.view.accessibility.AccessibilityWindowInfoCompat r0 = wrapNonNullInstance(r0)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getRoot() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L13
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            android.view.accessibility.AccessibilityNodeInfo r0 = r0.getRoot()
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.wrapNonNullInstance(r0)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public java.lang.CharSequence getTitle() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            java.lang.CharSequence r0 = r0.getTitle()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getType() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            int r0 = r0.getType()
            return r0
        Lf:
            r0 = -1
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.Object r0 = r1.mInfo
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
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            boolean r0 = r0.isAccessibilityFocused()
            return r0
        Lf:
            r0 = 1
            return r0
    }

    public boolean isActive() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            boolean r0 = r0.isActive()
            return r0
        Lf:
            r0 = 1
            return r0
    }

    public boolean isFocused() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            boolean r0 = r0.isFocused()
            return r0
        Lf:
            r0 = 1
            return r0
    }

    public void recycle() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Ld
            java.lang.Object r0 = r2.mInfo
            android.view.accessibility.AccessibilityWindowInfo r0 = (android.view.accessibility.AccessibilityWindowInfo) r0
            r0.recycle()
        Ld:
            return
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r4.getBoundsInScreen(r1)
            java.lang.String r2 = "AccessibilityWindowInfo["
            r0.append(r2)
            java.lang.String r2 = "id="
            r0.append(r2)
            int r2 = r4.getId()
            r0.append(r2)
            java.lang.String r2 = ", type="
            r0.append(r2)
            int r2 = r4.getType()
            java.lang.String r2 = typeToString(r2)
            r0.append(r2)
            java.lang.String r2 = ", layer="
            r0.append(r2)
            int r2 = r4.getLayer()
            r0.append(r2)
            java.lang.String r2 = ", bounds="
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", focused="
            r0.append(r1)
            boolean r1 = r4.isFocused()
            r0.append(r1)
            java.lang.String r1 = ", active="
            r0.append(r1)
            boolean r1 = r4.isActive()
            r0.append(r1)
            java.lang.String r1 = ", hasParent="
            r0.append(r1)
            android.support.v4.view.accessibility.AccessibilityWindowInfoCompat r1 = r4.getParent()
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L69
            r1 = r2
            goto L6a
        L69:
            r1 = r3
        L6a:
            r0.append(r1)
            java.lang.String r1 = ", hasChildren="
            r0.append(r1)
            int r1 = r4.getChildCount()
            if (r1 <= 0) goto L79
            goto L7a
        L79:
            r2 = r3
        L7a:
            r0.append(r2)
            r1 = 93
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
