package com.bytedance.pangle.fragment;

public class ReportBaseFragment extends android.app.Fragment {
    android.app.Application.ActivityLifecycleCallbacks callbacks;

    public ReportBaseFragment() {
            r1 = this;
            r1.<init>()
            com.bytedance.pangle.fragment.c r0 = new com.bytedance.pangle.fragment.c
            r0.<init>(r1)
            r1.callbacks = r0
            return
    }

    @Override
    public void onAttach(android.content.Context r2) {
            r1 = this;
            super.onAttach(r2)
            android.app.Application r2 = com.bytedance.pangle.Zeus.getAppApplication()
            android.app.Application$ActivityLifecycleCallbacks r0 = r1.callbacks
            r2.registerActivityLifecycleCallbacks(r0)
            return
    }

    @Override
    public void onDetach() {
            r2 = this;
            super.onDetach()
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            android.app.Application$ActivityLifecycleCallbacks r1 = r2.callbacks
            r0.unregisterActivityLifecycleCallbacks(r1)
            return
    }
}
