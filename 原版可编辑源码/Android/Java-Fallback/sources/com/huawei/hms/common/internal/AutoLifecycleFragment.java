package com.huawei.hms.common.internal;

public class AutoLifecycleFragment extends android.app.Fragment {
    private static final java.lang.String TAG = "HmsAutoLifecycleFrag";
    private final android.util.SparseArray<com.huawei.hms.common.internal.AutoLifecycleFragment.ClientInfo> mAutoClientInfoMap;
    private boolean mStarted;

    private class ClientInfo {
        public final com.huawei.hms.api.HuaweiApiClient apiClient;
        public final int clientId;
        final com.huawei.hms.common.internal.AutoLifecycleFragment this$0;

        public ClientInfo(com.huawei.hms.common.internal.AutoLifecycleFragment r1, int r2, com.huawei.hms.api.HuaweiApiClient r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.apiClient = r3
                r0.clientId = r2
                return
        }

        public void stopAutoManage() {
                r1 = this;
                com.huawei.hms.api.HuaweiApiClient r0 = r1.apiClient
                r0.disconnect()
                return
        }
    }

    public AutoLifecycleFragment() {
            r1 = this;
            r1.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.mAutoClientInfoMap = r0
            return
    }

    public static com.huawei.hms.common.internal.AutoLifecycleFragment getInstance(android.app.Activity r3) {
            java.lang.String r0 = "HmsAutoLifecycleFrag"
            java.lang.String r1 = "Must be called on the main thread"
            com.huawei.hms.common.internal.Preconditions.checkMainThread(r1)
            android.app.FragmentManager r1 = r3.getFragmentManager()     // Catch: java.lang.ClassCastException -> L2b
            android.app.Fragment r1 = r1.findFragmentByTag(r0)     // Catch: java.lang.ClassCastException -> L2b
            com.huawei.hms.common.internal.AutoLifecycleFragment r1 = (com.huawei.hms.common.internal.AutoLifecycleFragment) r1     // Catch: java.lang.ClassCastException -> L2b
            android.app.FragmentManager r3 = r3.getFragmentManager()     // Catch: java.lang.ClassCastException -> L2b
            if (r1 != 0) goto L2a
            com.huawei.hms.common.internal.AutoLifecycleFragment r1 = new com.huawei.hms.common.internal.AutoLifecycleFragment     // Catch: java.lang.ClassCastException -> L2b
            r1.<init>()     // Catch: java.lang.ClassCastException -> L2b
            android.app.FragmentTransaction r2 = r3.beginTransaction()     // Catch: java.lang.ClassCastException -> L2b
            android.app.FragmentTransaction r0 = r2.add(r1, r0)     // Catch: java.lang.ClassCastException -> L2b
            r0.commitAllowingStateLoss()     // Catch: java.lang.ClassCastException -> L2b
            r3.executePendingTransactions()     // Catch: java.lang.ClassCastException -> L2b
        L2a:
            return r1
        L2b:
            r3 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Fragment with tag HmsAutoLifecycleFrag is not a AutoLifecycleFragment"
            r0.<init>(r1, r3)
            throw r0
    }

    @Override
    public void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            return
    }

    @Override
    public void onStart() {
            r3 = this;
            super.onStart()
            r0 = 1
            r3.mStarted = r0
            r0 = 0
        L7:
            android.util.SparseArray<com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo> r1 = r3.mAutoClientInfoMap
            int r1 = r1.size()
            if (r0 >= r1) goto L20
            android.util.SparseArray<com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo> r1 = r3.mAutoClientInfoMap
            java.lang.Object r1 = r1.valueAt(r0)
            com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo r1 = (com.huawei.hms.common.internal.AutoLifecycleFragment.ClientInfo) r1
            com.huawei.hms.api.HuaweiApiClient r1 = r1.apiClient
            r2 = 0
            r1.connect(r2)
            int r0 = r0 + 1
            goto L7
        L20:
            return
    }

    @Override
    public void onStop() {
            r2 = this;
            super.onStop()
            r0 = 0
            r2.mStarted = r0
        L6:
            android.util.SparseArray<com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo> r1 = r2.mAutoClientInfoMap
            int r1 = r1.size()
            if (r0 >= r1) goto L1e
            android.util.SparseArray<com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo> r1 = r2.mAutoClientInfoMap
            java.lang.Object r1 = r1.valueAt(r0)
            com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo r1 = (com.huawei.hms.common.internal.AutoLifecycleFragment.ClientInfo) r1
            com.huawei.hms.api.HuaweiApiClient r1 = r1.apiClient
            r1.disconnect()
            int r0 = r0 + 1
            goto L6
        L1e:
            return
    }

    public void startAutoMange(int r4, com.huawei.hms.api.HuaweiApiClient r5) {
            r3 = this;
            java.lang.String r0 = "HuaweiApiClient instance cannot be null"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r5, r0)
            android.util.SparseArray<com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo> r0 = r3.mAutoClientInfoMap
            int r0 = r0.indexOfKey(r4)
            if (r0 >= 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Already managing a HuaweiApiClient with this clientId: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.common.internal.Preconditions.checkState(r0, r1)
            android.util.SparseArray<com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo> r0 = r3.mAutoClientInfoMap
            com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo r1 = new com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo
            r1.<init>(r3, r4, r5)
            r0.put(r4, r1)
            boolean r4 = r3.mStarted
            if (r4 == 0) goto L36
            r4 = 0
            r5.connect(r4)
        L36:
            return
    }

    public void stopAutoManage(int r3) {
            r2 = this;
            android.util.SparseArray<com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo> r0 = r2.mAutoClientInfoMap
            java.lang.Object r0 = r0.get(r3)
            com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo r0 = (com.huawei.hms.common.internal.AutoLifecycleFragment.ClientInfo) r0
            android.util.SparseArray<com.huawei.hms.common.internal.AutoLifecycleFragment$ClientInfo> r1 = r2.mAutoClientInfoMap
            r1.remove(r3)
            if (r0 == 0) goto L12
            r0.stopAutoManage()
        L12:
            return
    }
}
