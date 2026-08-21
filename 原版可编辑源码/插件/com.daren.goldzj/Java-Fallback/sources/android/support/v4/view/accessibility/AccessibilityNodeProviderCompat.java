package android.support.v4.view.accessibility;

import android.os.Build;
import android.os.Bundle;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.view.accessibility.AccessibilityNodeInfo;
import android.view.accessibility.AccessibilityNodeProvider;
import java.util.ArrayList;
import java.util.List;

public class AccessibilityNodeProviderCompat {
    public static final int HOST_VIEW_ID = -1;
    private final Object mProvider;

    @RequiresApi(16)
    static class AccessibilityNodeProviderApi16 extends AccessibilityNodeProvider {
        final AccessibilityNodeProviderCompat mCompat;

        AccessibilityNodeProviderApi16(AccessibilityNodeProviderCompat r1) {
            this.mCompat = r1;
        }

        @Override
        public AccessibilityNodeInfo createAccessibilityNodeInfo(int r2) {
            AccessibilityNodeInfoCompat r22 = this.mCompat.createAccessibilityNodeInfo(r2);
            if (r22 != null) goto L7;
            return null;
        L7:
            return r22.unwrap();
        }

        @Override
        public List<AccessibilityNodeInfo> findAccessibilityNodeInfosByText(String r4, int r5) {
            List<AccessibilityNodeInfoCompat> r42 = this.mCompat.findAccessibilityNodeInfosByText(r4, r5);
            if (r42 != null) goto L6;
            return null;
        L6:
            ArrayList r52 = new ArrayList();
            int r0 = r42.size();
            int r1 = 0;
        L7:
            if (r1 >= r0) goto L9;
            r52.add(r42.get(r1).unwrap());
            r1 = r1 + 1;
            goto L7
        L9:
            return r52;
        }

        @Override
        public boolean performAction(int r2, int r3, Bundle r4) {
            return this.mCompat.performAction(r2, r3, r4);
        }
    }

    @RequiresApi(19)
    static class AccessibilityNodeProviderApi19 extends AccessibilityNodeProviderApi16 {
        AccessibilityNodeProviderApi19(AccessibilityNodeProviderCompat r1) {
            super(r1);
        }

        @Override
        public AccessibilityNodeInfo findFocus(int r2) {
            AccessibilityNodeInfoCompat r22 = this.mCompat.findFocus(r2);
            if (r22 != null) goto L7;
            return null;
        L7:
            return r22.unwrap();
        }
    }

    @Nullable
    public AccessibilityNodeInfoCompat createAccessibilityNodeInfo(int r1) {
        return null;
    }

    @Nullable
    public List<AccessibilityNodeInfoCompat> findAccessibilityNodeInfosByText(String r1, int r2) {
        return null;
    }

    @Nullable
    public AccessibilityNodeInfoCompat findFocus(int r1) {
        return null;
    }

    public boolean performAction(int r1, int r2, Bundle r3) {
        return false;
    }

    public AccessibilityNodeProviderCompat() {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        this.mProvider = new AccessibilityNodeProviderApi19(this);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 16) goto L8;
        this.mProvider = new AccessibilityNodeProviderApi16(this);
        return;
    L8:
        this.mProvider = null;
    }

    public AccessibilityNodeProviderCompat(Object r1) {
        this.mProvider = r1;
    }

    public Object getProvider() {
        return this.mProvider;
    }
}
