package android.support.v4.view;

import android.os.Build;
import android.os.Bundle;
import android.support.annotation.RequiresApi;
import android.support.v4.view.accessibility.AccessibilityNodeInfoCompat;
import android.support.v4.view.accessibility.AccessibilityNodeProviderCompat;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.view.accessibility.AccessibilityNodeProvider;

public class AccessibilityDelegateCompat {
    private static final View.AccessibilityDelegate DEFAULT_DELEGATE = null;
    private final View.AccessibilityDelegate mBridge;

    private static final class AccessibilityDelegateAdapter extends View.AccessibilityDelegate {
        private final AccessibilityDelegateCompat mCompat;

        AccessibilityDelegateAdapter(AccessibilityDelegateCompat r1) {
            this.mCompat = r1;
        }

        @Override
        public boolean dispatchPopulateAccessibilityEvent(View r2, AccessibilityEvent r3) {
            return this.mCompat.dispatchPopulateAccessibilityEvent(r2, r3);
        }

        @Override
        public void onInitializeAccessibilityEvent(View r2, AccessibilityEvent r3) {
            this.mCompat.onInitializeAccessibilityEvent(r2, r3);
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(View r2, AccessibilityNodeInfo r3) {
            this.mCompat.onInitializeAccessibilityNodeInfo(r2, AccessibilityNodeInfoCompat.wrap(r3));
        }

        @Override
        public void onPopulateAccessibilityEvent(View r2, AccessibilityEvent r3) {
            this.mCompat.onPopulateAccessibilityEvent(r2, r3);
        }

        @Override
        public boolean onRequestSendAccessibilityEvent(ViewGroup r2, View r3, AccessibilityEvent r4) {
            return this.mCompat.onRequestSendAccessibilityEvent(r2, r3, r4);
        }

        @Override
        public void sendAccessibilityEvent(View r2, int r3) {
            this.mCompat.sendAccessibilityEvent(r2, r3);
        }

        @Override
        public void sendAccessibilityEventUnchecked(View r2, AccessibilityEvent r3) {
            this.mCompat.sendAccessibilityEventUnchecked(r2, r3);
        }

        @Override
        @RequiresApi(16)
        public AccessibilityNodeProvider getAccessibilityNodeProvider(View r2) {
            AccessibilityNodeProviderCompat r22 = this.mCompat.getAccessibilityNodeProvider(r2);
            if (r22 != null) goto L7;
            return null;
        L7:
            return (AccessibilityNodeProvider) r22.getProvider();
        }

        @Override
        public boolean performAccessibilityAction(View r2, int r3, Bundle r4) {
            return this.mCompat.performAccessibilityAction(r2, r3, r4);
        }
    }

    static {
        DEFAULT_DELEGATE = new View.AccessibilityDelegate();
    }

    public AccessibilityDelegateCompat() {
        this.mBridge = new AccessibilityDelegateAdapter(this);
    }

    View.AccessibilityDelegate getBridge() {
        return this.mBridge;
    }

    public void sendAccessibilityEvent(View r2, int r3) {
        DEFAULT_DELEGATE.sendAccessibilityEvent(r2, r3);
    }

    public void sendAccessibilityEventUnchecked(View r2, AccessibilityEvent r3) {
        DEFAULT_DELEGATE.sendAccessibilityEventUnchecked(r2, r3);
    }

    public boolean dispatchPopulateAccessibilityEvent(View r2, AccessibilityEvent r3) {
        return DEFAULT_DELEGATE.dispatchPopulateAccessibilityEvent(r2, r3);
    }

    public void onPopulateAccessibilityEvent(View r2, AccessibilityEvent r3) {
        DEFAULT_DELEGATE.onPopulateAccessibilityEvent(r2, r3);
    }

    public void onInitializeAccessibilityEvent(View r2, AccessibilityEvent r3) {
        DEFAULT_DELEGATE.onInitializeAccessibilityEvent(r2, r3);
    }

    public void onInitializeAccessibilityNodeInfo(View r2, AccessibilityNodeInfoCompat r3) {
        DEFAULT_DELEGATE.onInitializeAccessibilityNodeInfo(r2, r3.unwrap());
    }

    public boolean onRequestSendAccessibilityEvent(ViewGroup r2, View r3, AccessibilityEvent r4) {
        return DEFAULT_DELEGATE.onRequestSendAccessibilityEvent(r2, r3, r4);
    }

    public AccessibilityNodeProviderCompat getAccessibilityNodeProvider(View r3) {
        if (Build.VERSION.SDK_INT < 16) goto L8;
        AccessibilityNodeProvider r32 = DEFAULT_DELEGATE.getAccessibilityNodeProvider(r3);
        if (r32 != null) goto L7;
        return null;
    L7:
        return new AccessibilityNodeProviderCompat(r32);
    L8:
        return null;
    }

    public boolean performAccessibilityAction(View r3, int r4, Bundle r5) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        return false;
    L5:
        return DEFAULT_DELEGATE.performAccessibilityAction(r3, r4, r5);
    }
}
