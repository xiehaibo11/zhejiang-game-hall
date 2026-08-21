package android.support.v4.view.accessibility;

import android.graphics.Rect;
import android.os.Build;
import android.view.accessibility.AccessibilityWindowInfo;

public class AccessibilityWindowInfoCompat {
    public static final int TYPE_ACCESSIBILITY_OVERLAY = 4;
    public static final int TYPE_APPLICATION = 1;
    public static final int TYPE_INPUT_METHOD = 2;
    public static final int TYPE_SPLIT_SCREEN_DIVIDER = 5;
    public static final int TYPE_SYSTEM = 3;
    private static final int UNDEFINED = -1;
    private Object mInfo;

    private static String typeToString(int r1) {
        if (r1 != 1) goto L5;
        return "TYPE_APPLICATION";
    L5:
        if (r1 != 2) goto L7;
        return "TYPE_INPUT_METHOD";
    L7:
        if (r1 != 3) goto L9;
        return "TYPE_SYSTEM";
    L9:
        if (r1 == 4) goto L12;
        return "<UNKNOWN>";
    L12:
        return "TYPE_ACCESSIBILITY_OVERLAY";
    }

    static AccessibilityWindowInfoCompat wrapNonNullInstance(Object r1) {
        if (r1 != null) goto L4;
        return null;
    L4:
        return new AccessibilityWindowInfoCompat(r1);
    }

    private AccessibilityWindowInfoCompat(Object r1) {
        this.mInfo = r1;
    }

    public int getType() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return -1;
    L5:
        return ((AccessibilityWindowInfo) this.mInfo).getType();
    }

    public int getLayer() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return -1;
    L5:
        return ((AccessibilityWindowInfo) this.mInfo).getLayer();
    }

    public AccessibilityNodeInfoCompat getRoot() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return AccessibilityNodeInfoCompat.wrapNonNullInstance(((AccessibilityWindowInfo) this.mInfo).getRoot());
    }

    public AccessibilityWindowInfoCompat getParent() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(((AccessibilityWindowInfo) this.mInfo).getParent());
    }

    public int getId() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return -1;
    L5:
        return ((AccessibilityWindowInfo) this.mInfo).getId();
    }

    public void getBoundsInScreen(Rect r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        ((AccessibilityWindowInfo) this.mInfo).getBoundsInScreen(r3);
        return;
    }

    public boolean isActive() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return true;
    L5:
        return ((AccessibilityWindowInfo) this.mInfo).isActive();
    }

    public boolean isFocused() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return true;
    L5:
        return ((AccessibilityWindowInfo) this.mInfo).isFocused();
    }

    public boolean isAccessibilityFocused() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return true;
    L5:
        return ((AccessibilityWindowInfo) this.mInfo).isAccessibilityFocused();
    }

    public int getChildCount() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return 0;
    L5:
        return ((AccessibilityWindowInfo) this.mInfo).getChildCount();
    }

    public AccessibilityWindowInfoCompat getChild(int r3) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(((AccessibilityWindowInfo) this.mInfo).getChild(r3));
    }

    public CharSequence getTitle() {
        if (Build.VERSION.SDK_INT >= 24) goto L5;
        return null;
    L5:
        return ((AccessibilityWindowInfo) this.mInfo).getTitle();
    }

    public AccessibilityNodeInfoCompat getAnchor() {
        if (Build.VERSION.SDK_INT >= 24) goto L5;
        return null;
    L5:
        return AccessibilityNodeInfoCompat.wrapNonNullInstance(((AccessibilityWindowInfo) this.mInfo).getAnchor());
    }

    public static AccessibilityWindowInfoCompat obtain() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return wrapNonNullInstance(AccessibilityWindowInfo.obtain());
    }

    public static AccessibilityWindowInfoCompat obtain(AccessibilityWindowInfoCompat r3) {
        if (Build.VERSION.SDK_INT < 21) goto L8;
        if (r3 != null) goto L7;
        return null;
    L7:
        return wrapNonNullInstance(AccessibilityWindowInfo.obtain((AccessibilityWindowInfo) r3.mInfo));
    L8:
        return null;
    }

    public void recycle() {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        ((AccessibilityWindowInfo) this.mInfo).recycle();
        return;
    }

    public int hashCode() {
        Object r0 = this.mInfo;
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
        AccessibilityWindowInfoCompat r52 = (AccessibilityWindowInfoCompat) r5;
        Object r2 = this.mInfo;
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
        Rect r1 = new Rect();
        getBoundsInScreen(r1);
        r0.append("AccessibilityWindowInfo[");
        r0.append("id=");
        r0.append(getId());
        r0.append(", type=");
        r0.append(typeToString(getType()));
        r0.append(", layer=");
        r0.append(getLayer());
        r0.append(", bounds=");
        r0.append(r1);
        r0.append(", focused=");
        r0.append(isFocused());
        r0.append(", active=");
        r0.append(isActive());
        r0.append(", hasParent=");
        boolean r2 = true;
        if (getParent() == null) goto L5;
        boolean r12 = true;
    L6:
        r0.append(r12);
        r0.append(", hasChildren=");
        if (getChildCount() > 0) goto L10;
        r2 = false;
    L10:
        r0.append(r2);
        r0.append(']');
        return r0.toString();
    L5:
        r12 = false;
        goto L6
    }
}
