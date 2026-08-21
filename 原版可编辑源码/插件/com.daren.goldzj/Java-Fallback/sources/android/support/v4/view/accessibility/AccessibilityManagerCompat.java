package android.support.v4.view.accessibility;

import android.accessibilityservice.AccessibilityServiceInfo;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.RequiresApi;
import android.view.accessibility.AccessibilityManager;
import java.util.List;

public final class AccessibilityManagerCompat {

    @Deprecated
    public interface AccessibilityStateChangeListener {
        @Deprecated
        void onAccessibilityStateChanged(boolean r1);
    }

    @Deprecated
    public static abstract class AccessibilityStateChangeListenerCompat implements AccessibilityStateChangeListener {
        public AccessibilityStateChangeListenerCompat() {
        }
    }

    private static class AccessibilityStateChangeListenerWrapper implements AccessibilityManager.AccessibilityStateChangeListener {
        AccessibilityStateChangeListener mListener;

        AccessibilityStateChangeListenerWrapper(@NonNull AccessibilityStateChangeListener r1) {
            this.mListener = r1;
        }

        public int hashCode() {
            return this.mListener.hashCode();
        }

        public boolean equals(Object r3) {
            if (this != r3) goto L5;
            return true;
        L5:
            if (r3 != null) goto L7;
            return false;
        L7:
            if (getClass() == r3.getClass()) goto L10;
            return false;
        L10:
            return this.mListener.equals(((AccessibilityStateChangeListenerWrapper) r3).mListener);
        }

        @Override
        public void onAccessibilityStateChanged(boolean r2) {
            this.mListener.onAccessibilityStateChanged(r2);
        }
    }

    public interface TouchExplorationStateChangeListener {
        void onTouchExplorationStateChanged(boolean r1);
    }

    @RequiresApi(19)
    private static class TouchExplorationStateChangeListenerWrapper implements AccessibilityManager.TouchExplorationStateChangeListener {
        final TouchExplorationStateChangeListener mListener;

        TouchExplorationStateChangeListenerWrapper(@NonNull TouchExplorationStateChangeListener r1) {
            this.mListener = r1;
        }

        public int hashCode() {
            return this.mListener.hashCode();
        }

        public boolean equals(Object r3) {
            if (this != r3) goto L5;
            return true;
        L5:
            if (r3 != null) goto L7;
            return false;
        L7:
            if (getClass() == r3.getClass()) goto L10;
            return false;
        L10:
            return this.mListener.equals(((TouchExplorationStateChangeListenerWrapper) r3).mListener);
        }

        @Override
        public void onTouchExplorationStateChanged(boolean r2) {
            this.mListener.onTouchExplorationStateChanged(r2);
        }
    }

    @Deprecated
    public static boolean addAccessibilityStateChangeListener(AccessibilityManager r1, AccessibilityStateChangeListener r2) {
        if (r2 != null) goto L6;
        return false;
    L6:
        return r1.addAccessibilityStateChangeListener(new AccessibilityStateChangeListenerWrapper(r2));
    }

    @Deprecated
    public static boolean removeAccessibilityStateChangeListener(AccessibilityManager r1, AccessibilityStateChangeListener r2) {
        if (r2 != null) goto L6;
        return false;
    L6:
        return r1.removeAccessibilityStateChangeListener(new AccessibilityStateChangeListenerWrapper(r2));
    }

    @Deprecated
    public static List<AccessibilityServiceInfo> getInstalledAccessibilityServiceList(AccessibilityManager r0) {
        return r0.getInstalledAccessibilityServiceList();
    }

    @Deprecated
    public static List<AccessibilityServiceInfo> getEnabledAccessibilityServiceList(AccessibilityManager r0, int r1) {
        return r0.getEnabledAccessibilityServiceList(r1);
    }

    @Deprecated
    public static boolean isTouchExplorationEnabled(AccessibilityManager r0) {
        return r0.isTouchExplorationEnabled();
    }

    public static boolean addTouchExplorationStateChangeListener(AccessibilityManager r3, TouchExplorationStateChangeListener r4) {
        if (Build.VERSION.SDK_INT < 19) goto L8;
        if (r4 != null) goto L7;
        return false;
    L7:
        return r3.addTouchExplorationStateChangeListener(new TouchExplorationStateChangeListenerWrapper(r4));
    L8:
        return false;
    }

    public static boolean removeTouchExplorationStateChangeListener(AccessibilityManager r3, TouchExplorationStateChangeListener r4) {
        if (Build.VERSION.SDK_INT < 19) goto L8;
        if (r4 != null) goto L7;
        return false;
    L7:
        return r3.removeTouchExplorationStateChangeListener(new TouchExplorationStateChangeListenerWrapper(r4));
    L8:
        return false;
    }

    private AccessibilityManagerCompat() {
    }
}
