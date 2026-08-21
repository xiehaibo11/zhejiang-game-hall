package com.bumptech.glide.manager;

public class SupportRequestManagerFragment extends android.support.v4.app.Fragment {
    private final java.util.HashSet<com.bumptech.glide.manager.SupportRequestManagerFragment> childRequestManagerFragments;
    private final com.bumptech.glide.manager.ActivityFragmentLifecycle lifecycle;
    private com.bumptech.glide.RequestManager requestManager;
    private final com.bumptech.glide.manager.RequestManagerTreeNode requestManagerTreeNode;
    private com.bumptech.glide.manager.SupportRequestManagerFragment rootRequestManagerFragment;

    static class 1 {
    }

    private class SupportFragmentRequestManagerTreeNode implements com.bumptech.glide.manager.RequestManagerTreeNode {
        final com.bumptech.glide.manager.SupportRequestManagerFragment this$0;

        private SupportFragmentRequestManagerTreeNode(com.bumptech.glide.manager.SupportRequestManagerFragment r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        SupportFragmentRequestManagerTreeNode(com.bumptech.glide.manager.SupportRequestManagerFragment r1, com.bumptech.glide.manager.SupportRequestManagerFragment.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public java.util.Set<com.bumptech.glide.RequestManager> getDescendants() {
                r4 = this;
                com.bumptech.glide.manager.SupportRequestManagerFragment r0 = r4.this$0
                java.util.Set r0 = r0.getDescendantRequestManagerFragments()
                java.util.HashSet r1 = new java.util.HashSet
                int r2 = r0.size()
                r1.<init>(r2)
                java.util.Iterator r0 = r0.iterator()
            L13:
                boolean r2 = r0.hasNext()
                if (r2 == 0) goto L2d
                java.lang.Object r2 = r0.next()
                com.bumptech.glide.manager.SupportRequestManagerFragment r2 = (com.bumptech.glide.manager.SupportRequestManagerFragment) r2
                com.bumptech.glide.RequestManager r3 = r2.getRequestManager()
                if (r3 == 0) goto L13
                com.bumptech.glide.RequestManager r2 = r2.getRequestManager()
                r1.add(r2)
                goto L13
            L2d:
                return r1
        }
    }

    public SupportRequestManagerFragment() {
            r1 = this;
            com.bumptech.glide.manager.ActivityFragmentLifecycle r0 = new com.bumptech.glide.manager.ActivityFragmentLifecycle
            r0.<init>()
            r1.<init>(r0)
            return
    }

    public SupportRequestManagerFragment(com.bumptech.glide.manager.ActivityFragmentLifecycle r3) {
            r2 = this;
            r2.<init>()
            com.bumptech.glide.manager.SupportRequestManagerFragment$SupportFragmentRequestManagerTreeNode r0 = new com.bumptech.glide.manager.SupportRequestManagerFragment$SupportFragmentRequestManagerTreeNode
            r1 = 0
            r0.<init>(r2, r1)
            r2.requestManagerTreeNode = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.childRequestManagerFragments = r0
            r2.lifecycle = r3
            return
    }

    private void addChildRequestManagerFragment(com.bumptech.glide.manager.SupportRequestManagerFragment r2) {
            r1 = this;
            java.util.HashSet<com.bumptech.glide.manager.SupportRequestManagerFragment> r0 = r1.childRequestManagerFragments
            r0.add(r2)
            return
    }

    private boolean isDescendant(android.support.v4.app.Fragment r3) {
            r2 = this;
            android.support.v4.app.Fragment r0 = r2.getParentFragment()
        L4:
            android.support.v4.app.Fragment r1 = r3.getParentFragment()
            if (r1 == 0) goto L17
            android.support.v4.app.Fragment r1 = r3.getParentFragment()
            if (r1 != r0) goto L12
            r3 = 1
            return r3
        L12:
            android.support.v4.app.Fragment r3 = r3.getParentFragment()
            goto L4
        L17:
            r3 = 0
            return r3
    }

    private void removeChildRequestManagerFragment(com.bumptech.glide.manager.SupportRequestManagerFragment r2) {
            r1 = this;
            java.util.HashSet<com.bumptech.glide.manager.SupportRequestManagerFragment> r0 = r1.childRequestManagerFragments
            r0.remove(r2)
            return
    }

    public java.util.Set<com.bumptech.glide.manager.SupportRequestManagerFragment> getDescendantRequestManagerFragments() {
            r4 = this;
            com.bumptech.glide.manager.SupportRequestManagerFragment r0 = r4.rootRequestManagerFragment
            if (r0 != 0) goto L9
            java.util.Set r0 = java.util.Collections.emptySet()
            return r0
        L9:
            if (r0 != r4) goto L12
            java.util.HashSet<com.bumptech.glide.manager.SupportRequestManagerFragment> r0 = r4.childRequestManagerFragments
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
        L12:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.bumptech.glide.manager.SupportRequestManagerFragment r1 = r4.rootRequestManagerFragment
            java.util.Set r1 = r1.getDescendantRequestManagerFragments()
            java.util.Iterator r1 = r1.iterator()
        L21:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3b
            java.lang.Object r2 = r1.next()
            com.bumptech.glide.manager.SupportRequestManagerFragment r2 = (com.bumptech.glide.manager.SupportRequestManagerFragment) r2
            android.support.v4.app.Fragment r3 = r2.getParentFragment()
            boolean r3 = r4.isDescendant(r3)
            if (r3 == 0) goto L21
            r0.add(r2)
            goto L21
        L3b:
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    com.bumptech.glide.manager.ActivityFragmentLifecycle getLifecycle() {
            r1 = this;
            com.bumptech.glide.manager.ActivityFragmentLifecycle r0 = r1.lifecycle
            return r0
    }

    public com.bumptech.glide.RequestManager getRequestManager() {
            r1 = this;
            com.bumptech.glide.RequestManager r0 = r1.requestManager
            return r0
    }

    public com.bumptech.glide.manager.RequestManagerTreeNode getRequestManagerTreeNode() {
            r1 = this;
            com.bumptech.glide.manager.RequestManagerTreeNode r0 = r1.requestManagerTreeNode
            return r0
    }

    @Override
    public void onAttach(android.app.Activity r2) {
            r1 = this;
            super.onAttach(r2)
            com.bumptech.glide.manager.RequestManagerRetriever r2 = com.bumptech.glide.manager.RequestManagerRetriever.get()
            android.support.v4.app.FragmentActivity r0 = r1.getActivity()
            android.support.v4.app.FragmentManager r0 = r0.getSupportFragmentManager()
            com.bumptech.glide.manager.SupportRequestManagerFragment r2 = r2.getSupportRequestManagerFragment(r0)
            r1.rootRequestManagerFragment = r2
            if (r2 == r1) goto L1a
            r2.addChildRequestManagerFragment(r1)
        L1a:
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.bumptech.glide.manager.ActivityFragmentLifecycle r0 = r1.lifecycle
            r0.onDestroy()
            return
    }

    @Override
    public void onDetach() {
            r1 = this;
            super.onDetach()
            com.bumptech.glide.manager.SupportRequestManagerFragment r0 = r1.rootRequestManagerFragment
            if (r0 == 0) goto Ld
            r0.removeChildRequestManagerFragment(r1)
            r0 = 0
            r1.rootRequestManagerFragment = r0
        Ld:
            return
    }

    @Override
    public void onLowMemory() {
            r1 = this;
            super.onLowMemory()
            com.bumptech.glide.RequestManager r0 = r1.requestManager
            if (r0 == 0) goto La
            r0.onLowMemory()
        La:
            return
    }

    @Override
    public void onStart() {
            r1 = this;
            super.onStart()
            com.bumptech.glide.manager.ActivityFragmentLifecycle r0 = r1.lifecycle
            r0.onStart()
            return
    }

    @Override
    public void onStop() {
            r1 = this;
            super.onStop()
            com.bumptech.glide.manager.ActivityFragmentLifecycle r0 = r1.lifecycle
            r0.onStop()
            return
    }

    public void setRequestManager(com.bumptech.glide.RequestManager r1) {
            r0 = this;
            r0.requestManager = r1
            return
    }
}
