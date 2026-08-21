package android.support.v7.widget;

public class RecyclerViewAccessibilityDelegate extends android.support.v4.view.AccessibilityDelegateCompat {
    final android.support.v4.view.AccessibilityDelegateCompat mItemDelegate;
    final android.support.v7.widget.RecyclerView mRecyclerView;

    public static class ItemDelegate extends android.support.v4.view.AccessibilityDelegateCompat {
        final android.support.v7.widget.RecyclerViewAccessibilityDelegate mRecyclerViewDelegate;

        public ItemDelegate(android.support.v7.widget.RecyclerViewAccessibilityDelegate r1) {
                r0 = this;
                r0.<init>()
                r0.mRecyclerViewDelegate = r1
                return
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(android.view.View r2, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r3) {
                r1 = this;
                super.onInitializeAccessibilityNodeInfo(r2, r3)
                android.support.v7.widget.RecyclerViewAccessibilityDelegate r0 = r1.mRecyclerViewDelegate
                boolean r0 = r0.shouldIgnore()
                if (r0 != 0) goto L20
                android.support.v7.widget.RecyclerViewAccessibilityDelegate r0 = r1.mRecyclerViewDelegate
                android.support.v7.widget.RecyclerView r0 = r0.mRecyclerView
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.getLayoutManager()
                if (r0 == 0) goto L20
                android.support.v7.widget.RecyclerViewAccessibilityDelegate r0 = r1.mRecyclerViewDelegate
                android.support.v7.widget.RecyclerView r0 = r0.mRecyclerView
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.getLayoutManager()
                r0.onInitializeAccessibilityNodeInfoForItem(r2, r3)
            L20:
                return
        }

        @Override
        public boolean performAccessibilityAction(android.view.View r2, int r3, android.os.Bundle r4) {
                r1 = this;
                boolean r0 = super.performAccessibilityAction(r2, r3, r4)
                if (r0 == 0) goto L8
                r2 = 1
                return r2
            L8:
                android.support.v7.widget.RecyclerViewAccessibilityDelegate r0 = r1.mRecyclerViewDelegate
                boolean r0 = r0.shouldIgnore()
                if (r0 != 0) goto L27
                android.support.v7.widget.RecyclerViewAccessibilityDelegate r0 = r1.mRecyclerViewDelegate
                android.support.v7.widget.RecyclerView r0 = r0.mRecyclerView
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.getLayoutManager()
                if (r0 == 0) goto L27
                android.support.v7.widget.RecyclerViewAccessibilityDelegate r0 = r1.mRecyclerViewDelegate
                android.support.v7.widget.RecyclerView r0 = r0.mRecyclerView
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.getLayoutManager()
                boolean r2 = r0.performAccessibilityActionForItem(r2, r3, r4)
                return r2
            L27:
                r2 = 0
                return r2
        }
    }

    public RecyclerViewAccessibilityDelegate(android.support.v7.widget.RecyclerView r1) {
            r0 = this;
            r0.<init>()
            r0.mRecyclerView = r1
            android.support.v7.widget.RecyclerViewAccessibilityDelegate$ItemDelegate r1 = new android.support.v7.widget.RecyclerViewAccessibilityDelegate$ItemDelegate
            r1.<init>(r0)
            r0.mItemDelegate = r1
            return
    }

    public android.support.v4.view.AccessibilityDelegateCompat getItemDelegate() {
            r1 = this;
            android.support.v4.view.AccessibilityDelegateCompat r0 = r1.mItemDelegate
            return r0
    }

    @Override
    public void onInitializeAccessibilityEvent(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
            r1 = this;
            super.onInitializeAccessibilityEvent(r2, r3)
            java.lang.Class<android.support.v7.widget.RecyclerView> r0 = android.support.v7.widget.RecyclerView.class
            java.lang.String r0 = r0.getName()
            r3.setClassName(r0)
            boolean r0 = r2 instanceof android.support.v7.widget.RecyclerView
            if (r0 == 0) goto L25
            boolean r0 = r1.shouldIgnore()
            if (r0 != 0) goto L25
            android.support.v7.widget.RecyclerView r2 = (android.support.v7.widget.RecyclerView) r2
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.getLayoutManager()
            if (r0 == 0) goto L25
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r2.getLayoutManager()
            r2.onInitializeAccessibilityEvent(r3)
        L25:
            return
    }

    @Override
    public void onInitializeAccessibilityNodeInfo(android.view.View r1, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r2) {
            r0 = this;
            super.onInitializeAccessibilityNodeInfo(r1, r2)
            java.lang.Class<android.support.v7.widget.RecyclerView> r1 = android.support.v7.widget.RecyclerView.class
            java.lang.String r1 = r1.getName()
            r2.setClassName(r1)
            boolean r1 = r0.shouldIgnore()
            if (r1 != 0) goto L23
            android.support.v7.widget.RecyclerView r1 = r0.mRecyclerView
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r1.getLayoutManager()
            if (r1 == 0) goto L23
            android.support.v7.widget.RecyclerView r1 = r0.mRecyclerView
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r1.getLayoutManager()
            r1.onInitializeAccessibilityNodeInfo(r2)
        L23:
            return
    }

    @Override
    public boolean performAccessibilityAction(android.view.View r1, int r2, android.os.Bundle r3) {
            r0 = this;
            boolean r1 = super.performAccessibilityAction(r1, r2, r3)
            if (r1 == 0) goto L8
            r1 = 1
            return r1
        L8:
            boolean r1 = r0.shouldIgnore()
            if (r1 != 0) goto L21
            android.support.v7.widget.RecyclerView r1 = r0.mRecyclerView
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r1.getLayoutManager()
            if (r1 == 0) goto L21
            android.support.v7.widget.RecyclerView r1 = r0.mRecyclerView
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r1.getLayoutManager()
            boolean r1 = r1.performAccessibilityAction(r2, r3)
            return r1
        L21:
            r1 = 0
            return r1
    }

    boolean shouldIgnore() {
            r1 = this;
            android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
            boolean r0 = r0.hasPendingAdapterUpdates()
            return r0
    }
}
