package android.support.v4.view.accessibility;

public final class AccessibilityManagerCompat {

    @java.lang.Deprecated
    public interface AccessibilityStateChangeListener {
        @java.lang.Deprecated
        void onAccessibilityStateChanged(boolean r1);
    }

    @java.lang.Deprecated
    public static abstract class AccessibilityStateChangeListenerCompat implements android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListener {
        public AccessibilityStateChangeListenerCompat() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static class AccessibilityStateChangeListenerWrapper implements android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener {
        android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListener mListener;

        AccessibilityStateChangeListenerWrapper(@android.support.annotation.NonNull android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListener r1) {
                r0 = this;
                r0.<init>()
                r0.mListener = r1
                return
        }

        public boolean equals(java.lang.Object r3) {
                r2 = this;
                if (r2 != r3) goto L4
                r3 = 1
                return r3
            L4:
                if (r3 == 0) goto L1c
                java.lang.Class r0 = r2.getClass()
                java.lang.Class r1 = r3.getClass()
                if (r0 == r1) goto L11
                goto L1c
            L11:
                android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerWrapper r3 = (android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerWrapper) r3
                android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListener r0 = r2.mListener
                android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListener r3 = r3.mListener
                boolean r3 = r0.equals(r3)
                return r3
            L1c:
                r3 = 0
                return r3
        }

        public int hashCode() {
                r1 = this;
                android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListener r0 = r1.mListener
                int r0 = r0.hashCode()
                return r0
        }

        @Override
        public void onAccessibilityStateChanged(boolean r2) {
                r1 = this;
                android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListener r0 = r1.mListener
                r0.onAccessibilityStateChanged(r2)
                return
        }
    }

    public interface TouchExplorationStateChangeListener {
        void onTouchExplorationStateChanged(boolean r1);
    }

    @android.support.annotation.RequiresApi(19)
    private static class TouchExplorationStateChangeListenerWrapper implements android.view.accessibility.AccessibilityManager.TouchExplorationStateChangeListener {
        final android.support.v4.view.accessibility.AccessibilityManagerCompat.TouchExplorationStateChangeListener mListener;

        TouchExplorationStateChangeListenerWrapper(@android.support.annotation.NonNull android.support.v4.view.accessibility.AccessibilityManagerCompat.TouchExplorationStateChangeListener r1) {
                r0 = this;
                r0.<init>()
                r0.mListener = r1
                return
        }

        public boolean equals(java.lang.Object r3) {
                r2 = this;
                if (r2 != r3) goto L4
                r3 = 1
                return r3
            L4:
                if (r3 == 0) goto L1c
                java.lang.Class r0 = r2.getClass()
                java.lang.Class r1 = r3.getClass()
                if (r0 == r1) goto L11
                goto L1c
            L11:
                android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListenerWrapper r3 = (android.support.v4.view.accessibility.AccessibilityManagerCompat.TouchExplorationStateChangeListenerWrapper) r3
                android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListener r0 = r2.mListener
                android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListener r3 = r3.mListener
                boolean r3 = r0.equals(r3)
                return r3
            L1c:
                r3 = 0
                return r3
        }

        public int hashCode() {
                r1 = this;
                android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListener r0 = r1.mListener
                int r0 = r0.hashCode()
                return r0
        }

        @Override
        public void onTouchExplorationStateChanged(boolean r2) {
                r1 = this;
                android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListener r0 = r1.mListener
                r0.onTouchExplorationStateChanged(r2)
                return
        }
    }

    private AccessibilityManagerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static boolean addAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager r1, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListener r2) {
            if (r2 != 0) goto L4
            r1 = 0
            return r1
        L4:
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerWrapper r0 = new android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerWrapper
            r0.<init>(r2)
            boolean r1 = r1.addAccessibilityStateChangeListener(r0)
            return r1
    }

    public static boolean addTouchExplorationStateChangeListener(android.view.accessibility.AccessibilityManager r3, android.support.v4.view.accessibility.AccessibilityManagerCompat.TouchExplorationStateChangeListener r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 19
            if (r0 < r2) goto L14
            if (r4 != 0) goto La
            return r1
        La:
            android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListenerWrapper r0 = new android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListenerWrapper
            r0.<init>(r4)
            boolean r3 = r3.addTouchExplorationStateChangeListener(r0)
            return r3
        L14:
            return r1
    }

    @java.lang.Deprecated
    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(android.view.accessibility.AccessibilityManager r0, int r1) {
            java.util.List r0 = r0.getEnabledAccessibilityServiceList(r1)
            return r0
    }

    @java.lang.Deprecated
    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(android.view.accessibility.AccessibilityManager r0) {
            java.util.List r0 = r0.getInstalledAccessibilityServiceList()
            return r0
    }

    @java.lang.Deprecated
    public static boolean isTouchExplorationEnabled(android.view.accessibility.AccessibilityManager r0) {
            boolean r0 = r0.isTouchExplorationEnabled()
            return r0
    }

    @java.lang.Deprecated
    public static boolean removeAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager r1, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListener r2) {
            if (r2 != 0) goto L4
            r1 = 0
            return r1
        L4:
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerWrapper r0 = new android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerWrapper
            r0.<init>(r2)
            boolean r1 = r1.removeAccessibilityStateChangeListener(r0)
            return r1
    }

    public static boolean removeTouchExplorationStateChangeListener(android.view.accessibility.AccessibilityManager r3, android.support.v4.view.accessibility.AccessibilityManagerCompat.TouchExplorationStateChangeListener r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 19
            if (r0 < r2) goto L14
            if (r4 != 0) goto La
            return r1
        La:
            android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListenerWrapper r0 = new android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListenerWrapper
            r0.<init>(r4)
            boolean r3 = r3.removeTouchExplorationStateChangeListener(r0)
            return r3
        L14:
            return r1
    }
}
