package com.kwad.sdk.api.core.fragment;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public class KsFragmentManager {
    public static final int POP_BACK_STACK_INCLUSIVE = 1;
    private final android.support.v4.app.FragmentManager mBase;

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public static abstract class FragmentLifecycleCallbacks {
        private android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks mBase;

        public FragmentLifecycleCallbacks() {
                r0 = this;
                r0.<init>()
                return
        }

        android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks getBase() {
                r1 = this;
                android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r0 = r1.mBase
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentActivityCreated(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2, android.os.Bundle r3) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentAttached(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2, android.content.Context r3) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentCreated(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2, android.os.Bundle r3) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentDestroyed(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentDetached(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentPaused(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentPreAttached(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2, android.content.Context r3) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentPreCreated(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2, android.os.Bundle r3) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentResumed(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentSaveInstanceState(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2, android.os.Bundle r3) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentStarted(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentStopped(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentViewCreated(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2, android.view.View r3, android.os.Bundle r4) {
                r0 = this;
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkDynamicApi
        public void onFragmentViewDestroyed(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragment r2) {
                r0 = this;
                return
        }

        void setBase(android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks r1) {
                r0 = this;
                r0.mBase = r1
                return
        }
    }

    KsFragmentManager(android.support.v4.app.FragmentManager r1) {
            r0 = this;
            r0.<init>()
            r0.mBase = r1
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public static void enableDebugLogging(boolean r0) {
        L0:
            goto L0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction beginTransaction() {
            r2 = this;
            com.kwad.sdk.api.core.fragment.KsFragmentTransaction r0 = new com.kwad.sdk.api.core.fragment.KsFragmentTransaction
            android.support.v4.app.FragmentManager r1 = r2.mBase
            android.support.v4.app.FragmentTransaction r1 = r1.beginTransaction()
            r0.<init>(r1)
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void dump(java.lang.String r2, java.io.FileDescriptor r3, java.io.PrintWriter r4, java.lang.String[] r5) {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            r0.dump(r2, r3, r4, r5)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean executePendingTransactions() {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            boolean r0 = r0.executePendingTransactions()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragment findFragmentById(int r3) {
            r2 = this;
            android.support.v4.app.FragmentManager r0 = r2.mBase
            android.support.v4.app.Fragment r3 = r0.findFragmentById(r3)
            boolean r0 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r0 == 0) goto L11
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r3 = r3.getBase()
            return r3
        L11:
            if (r3 != 0) goto L15
            r3 = 0
            return r3
        L15:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = " is not a DelegateFragment"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragment findFragmentByTag(java.lang.String r3) {
            r2 = this;
            android.support.v4.app.FragmentManager r0 = r2.mBase
            android.support.v4.app.Fragment r3 = r0.findFragmentByTag(r3)
            boolean r0 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r0 == 0) goto L11
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r3 = r3.getBase()
            return r3
        L11:
            if (r3 != 0) goto L15
            r3 = 0
            return r3
        L15:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = " is not a DelegateFragment"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public int getBackStackEntryCount() {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            int r0 = r0.getBackStackEntryCount()
            return r0
    }

    android.support.v4.app.FragmentManager getBase() {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragment getFragment(android.os.Bundle r2, java.lang.String r3) {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            android.support.v4.app.Fragment r2 = r0.getFragment(r2, r3)
            boolean r3 = r2 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r3 == 0) goto L11
            com.kwad.sdk.api.core.fragment.IDelegateFragment r2 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r2
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r2.getBase()
            return r2
        L11:
            if (r2 != 0) goto L15
            r2 = 0
            return r2
        L15:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " is not a DelegateFragment or DelegateDialogFragment"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public java.util.List<com.kwad.sdk.api.core.fragment.KsFragment> getFragments() {
            r4 = this;
            android.support.v4.app.FragmentManager r0 = r4.mBase
            java.util.List r0 = r0.getFragments()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.size()
            r1.<init>(r2)
            java.util.Iterator r0 = r0.iterator()
        L13:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L44
            java.lang.Object r2 = r0.next()
            android.support.v4.app.Fragment r2 = (android.support.v4.app.Fragment) r2
            boolean r3 = r2 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r3 == 0) goto L2d
            com.kwad.sdk.api.core.fragment.IDelegateFragment r2 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r2
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r2.getBase()
            r1.add(r2)
            goto L13
        L2d:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = " is not a DelegateFragment"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L44:
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean isDestroyed() {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            boolean r0 = r0.isDestroyed()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean isStateSaved() {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            boolean r0 = r0.isStateSaved()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction openTransaction() {
            r2 = this;
            com.kwad.sdk.api.core.fragment.KsFragmentTransaction r0 = new com.kwad.sdk.api.core.fragment.KsFragmentTransaction
            android.support.v4.app.FragmentManager r1 = r2.mBase
            android.support.v4.app.FragmentTransaction r1 = r1.beginTransaction()
            r0.<init>(r1)
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void popBackStack() {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            r0.popBackStack()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void popBackStack(int r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            r0.popBackStack(r2, r3)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void popBackStack(java.lang.String r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            r0.popBackStack(r2, r3)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean popBackStackImmediate() {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            boolean r0 = r0.popBackStackImmediate()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean popBackStackImmediate(int r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            boolean r2 = r0.popBackStackImmediate(r2, r3)
            return r2
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean popBackStackImmediate(java.lang.String r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            boolean r2 = r0.popBackStackImmediate(r2, r3)
            return r2
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void putFragment(android.os.Bundle r2, java.lang.String r3, com.kwad.sdk.api.core.fragment.KsFragment r4) {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            android.support.v4.app.Fragment r4 = r4.getBase()
            r0.putFragment(r2, r3, r4)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void registerFragmentLifecycleCallbacks(com.kwad.sdk.api.core.fragment.KsFragmentManager.FragmentLifecycleCallbacks r2, boolean r3) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateFragmentLifecycleCallbacks r0 = new com.kwad.sdk.api.core.fragment.DelegateFragmentLifecycleCallbacks
            r0.<init>(r1, r2)
            r2.setBase(r0)
            android.support.v4.app.FragmentManager r0 = r1.mBase
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r2 = r2.getBase()
            r0.registerFragmentLifecycleCallbacks(r2, r3)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsSavedState saveFragmentInstanceState(com.kwad.sdk.api.core.fragment.KsFragment r3) {
            r2 = this;
            com.kwad.sdk.api.core.fragment.KsSavedState r0 = new com.kwad.sdk.api.core.fragment.KsSavedState
            android.support.v4.app.FragmentManager r1 = r2.mBase
            android.support.v4.app.Fragment r3 = r3.getBase()
            android.support.v4.app.Fragment$SavedState r3 = r1.saveFragmentInstanceState(r3)
            r0.<init>(r3)
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void unregisterFragmentLifecycleCallbacks(com.kwad.sdk.api.core.fragment.KsFragmentManager.FragmentLifecycleCallbacks r2) {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = r1.mBase
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r2 = r2.getBase()
            r0.unregisterFragmentLifecycleCallbacks(r2)
            return
    }
}
