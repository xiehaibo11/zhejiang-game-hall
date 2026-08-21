package android.support.v4.view;

public class AccessibilityDelegateCompat {
    private static final android.view.View.AccessibilityDelegate DEFAULT_DELEGATE = null;
    private final android.view.View.AccessibilityDelegate mBridge;

    private static final class AccessibilityDelegateAdapter extends android.view.View.AccessibilityDelegate {
        private final android.support.v4.view.AccessibilityDelegateCompat mCompat;

        AccessibilityDelegateAdapter(android.support.v4.view.AccessibilityDelegateCompat r1) {
                r0 = this;
                r0.<init>()
                r0.mCompat = r1
                return
        }

        @Override
        public boolean dispatchPopulateAccessibilityEvent(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
                r1 = this;
                android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mCompat
                boolean r2 = r0.dispatchPopulateAccessibilityEvent(r2, r3)
                return r2
        }

        @Override
        public android.view.accessibility.AccessibilityNodeProvider getAccessibilityNodeProvider(android.view.View r2) {
                r1 = this;
                android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mCompat
                android.support.v4.view.accessibility.AccessibilityNodeProviderCompat r2 = r0.getAccessibilityNodeProvider(r2)
                if (r2 == 0) goto Lf
                java.lang.Object r2 = r2.getProvider()
                android.view.accessibility.AccessibilityNodeProvider r2 = (android.view.accessibility.AccessibilityNodeProvider) r2
                goto L10
            Lf:
                r2 = 0
            L10:
                return r2
        }

        @Override
        public void onInitializeAccessibilityEvent(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
                r1 = this;
                android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mCompat
                r0.onInitializeAccessibilityEvent(r2, r3)
                return
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(android.view.View r2, android.view.accessibility.AccessibilityNodeInfo r3) {
                r1 = this;
                android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mCompat
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r3 = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.wrap(r3)
                r0.onInitializeAccessibilityNodeInfo(r2, r3)
                return
        }

        @Override
        public void onPopulateAccessibilityEvent(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
                r1 = this;
                android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mCompat
                r0.onPopulateAccessibilityEvent(r2, r3)
                return
        }

        @Override
        public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup r2, android.view.View r3, android.view.accessibility.AccessibilityEvent r4) {
                r1 = this;
                android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mCompat
                boolean r2 = r0.onRequestSendAccessibilityEvent(r2, r3, r4)
                return r2
        }

        @Override
        public boolean performAccessibilityAction(android.view.View r2, int r3, android.os.Bundle r4) {
                r1 = this;
                android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mCompat
                boolean r2 = r0.performAccessibilityAction(r2, r3, r4)
                return r2
        }

        @Override
        public void sendAccessibilityEvent(android.view.View r2, int r3) {
                r1 = this;
                android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mCompat
                r0.sendAccessibilityEvent(r2, r3)
                return
        }

        @Override
        public void sendAccessibilityEventUnchecked(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
                r1 = this;
                android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mCompat
                r0.sendAccessibilityEventUnchecked(r2, r3)
                return
        }
    }

    static {
            android.view.View$AccessibilityDelegate r0 = new android.view.View$AccessibilityDelegate
            r0.<init>()
            android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE = r0
            return
    }

    public AccessibilityDelegateCompat() {
            r1 = this;
            r1.<init>()
            android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateAdapter r0 = new android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateAdapter
            r0.<init>(r1)
            r1.mBridge = r0
            return
    }

    public boolean dispatchPopulateAccessibilityEvent(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
            r1 = this;
            android.view.View$AccessibilityDelegate r0 = android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE
            boolean r2 = r0.dispatchPopulateAccessibilityEvent(r2, r3)
            return r2
    }

    public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(android.view.View r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L14
            android.view.View$AccessibilityDelegate r0 = android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE
            android.view.accessibility.AccessibilityNodeProvider r3 = r0.getAccessibilityNodeProvider(r3)
            if (r3 == 0) goto L14
            android.support.v4.view.accessibility.AccessibilityNodeProviderCompat r0 = new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat
            r0.<init>(r3)
            return r0
        L14:
            r3 = 0
            return r3
    }

    android.view.View.AccessibilityDelegate getBridge() {
            r1 = this;
            android.view.View$AccessibilityDelegate r0 = r1.mBridge
            return r0
    }

    public void onInitializeAccessibilityEvent(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
            r1 = this;
            android.view.View$AccessibilityDelegate r0 = android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE
            r0.onInitializeAccessibilityEvent(r2, r3)
            return
    }

    public void onInitializeAccessibilityNodeInfo(android.view.View r2, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r3) {
            r1 = this;
            android.view.View$AccessibilityDelegate r0 = android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE
            android.view.accessibility.AccessibilityNodeInfo r3 = r3.unwrap()
            r0.onInitializeAccessibilityNodeInfo(r2, r3)
            return
    }

    public void onPopulateAccessibilityEvent(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
            r1 = this;
            android.view.View$AccessibilityDelegate r0 = android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE
            r0.onPopulateAccessibilityEvent(r2, r3)
            return
    }

    public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup r2, android.view.View r3, android.view.accessibility.AccessibilityEvent r4) {
            r1 = this;
            android.view.View$AccessibilityDelegate r0 = android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE
            boolean r2 = r0.onRequestSendAccessibilityEvent(r2, r3, r4)
            return r2
    }

    public boolean performAccessibilityAction(android.view.View r3, int r4, android.os.Bundle r5) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Ld
            android.view.View$AccessibilityDelegate r0 = android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE
            boolean r3 = r0.performAccessibilityAction(r3, r4, r5)
            return r3
        Ld:
            r3 = 0
            return r3
    }

    public void sendAccessibilityEvent(android.view.View r2, int r3) {
            r1 = this;
            android.view.View$AccessibilityDelegate r0 = android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE
            r0.sendAccessibilityEvent(r2, r3)
            return
    }

    public void sendAccessibilityEventUnchecked(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
            r1 = this;
            android.view.View$AccessibilityDelegate r0 = android.support.v4.view.AccessibilityDelegateCompat.DEFAULT_DELEGATE
            r0.sendAccessibilityEventUnchecked(r2, r3)
            return
    }
}
