package android.support.v4.accessibilityservice;

public final class AccessibilityServiceInfoCompat {
    public static final int CAPABILITY_CAN_FILTER_KEY_EVENTS = 8;
    public static final int CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY = 4;
    public static final int CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION = 2;
    public static final int CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT = 1;
    public static final int FEEDBACK_ALL_MASK = -1;
    public static final int FEEDBACK_BRAILLE = 32;
    public static final int FLAG_INCLUDE_NOT_IMPORTANT_VIEWS = 2;
    public static final int FLAG_REPORT_VIEW_IDS = 16;
    public static final int FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY = 8;
    public static final int FLAG_REQUEST_FILTER_KEY_EVENTS = 32;
    public static final int FLAG_REQUEST_TOUCH_EXPLORATION_MODE = 4;

    private AccessibilityServiceInfoCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String capabilityToString(int r1) {
            r0 = 1
            if (r1 == r0) goto L19
            r0 = 2
            if (r1 == r0) goto L16
            r0 = 4
            if (r1 == r0) goto L13
            r0 = 8
            if (r1 == r0) goto L10
            java.lang.String r1 = "UNKNOWN"
            return r1
        L10:
            java.lang.String r1 = "CAPABILITY_CAN_FILTER_KEY_EVENTS"
            return r1
        L13:
            java.lang.String r1 = "CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY"
            return r1
        L16:
            java.lang.String r1 = "CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION"
            return r1
        L19:
            java.lang.String r1 = "CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT"
            return r1
    }

    public static java.lang.String feedbackTypeToString(int r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "["
            r0.append(r1)
        La:
            if (r4 <= 0) goto L4f
            int r1 = java.lang.Integer.numberOfTrailingZeros(r4)
            r2 = 1
            int r1 = r2 << r1
            int r3 = ~r1
            r4 = r4 & r3
            int r3 = r0.length()
            if (r3 <= r2) goto L20
            java.lang.String r3 = ", "
            r0.append(r3)
        L20:
            if (r1 == r2) goto L49
            r2 = 2
            if (r1 == r2) goto L43
            r2 = 4
            if (r1 == r2) goto L3d
            r2 = 8
            if (r1 == r2) goto L37
            r2 = 16
            if (r1 == r2) goto L31
            goto La
        L31:
            java.lang.String r1 = "FEEDBACK_GENERIC"
            r0.append(r1)
            goto La
        L37:
            java.lang.String r1 = "FEEDBACK_VISUAL"
            r0.append(r1)
            goto La
        L3d:
            java.lang.String r1 = "FEEDBACK_AUDIBLE"
            r0.append(r1)
            goto La
        L43:
            java.lang.String r1 = "FEEDBACK_HAPTIC"
            r0.append(r1)
            goto La
        L49:
            java.lang.String r1 = "FEEDBACK_SPOKEN"
            r0.append(r1)
            goto La
        L4f:
            java.lang.String r4 = "]"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static java.lang.String flagToString(int r1) {
            r0 = 1
            if (r1 == r0) goto L26
            r0 = 2
            if (r1 == r0) goto L23
            r0 = 4
            if (r1 == r0) goto L20
            r0 = 8
            if (r1 == r0) goto L1d
            r0 = 16
            if (r1 == r0) goto L1a
            r0 = 32
            if (r1 == r0) goto L17
            r1 = 0
            return r1
        L17:
            java.lang.String r1 = "FLAG_REQUEST_FILTER_KEY_EVENTS"
            return r1
        L1a:
            java.lang.String r1 = "FLAG_REPORT_VIEW_IDS"
            return r1
        L1d:
            java.lang.String r1 = "FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY"
            return r1
        L20:
            java.lang.String r1 = "FLAG_REQUEST_TOUCH_EXPLORATION_MODE"
            return r1
        L23:
            java.lang.String r1 = "FLAG_INCLUDE_NOT_IMPORTANT_VIEWS"
            return r1
        L26:
            java.lang.String r1 = "DEFAULT"
            return r1
    }

    public static int getCapabilities(android.accessibilityservice.AccessibilityServiceInfo r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lb
            int r2 = r2.getCapabilities()
            return r2
        Lb:
            boolean r2 = r2.getCanRetrieveWindowContent()
            if (r2 == 0) goto L13
            r2 = 1
            return r2
        L13:
            r2 = 0
            return r2
    }

    public static java.lang.String loadDescription(android.accessibilityservice.AccessibilityServiceInfo r2, android.content.pm.PackageManager r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            java.lang.String r2 = r2.loadDescription(r3)
            return r2
        Lb:
            java.lang.String r2 = r2.getDescription()
            return r2
    }
}
