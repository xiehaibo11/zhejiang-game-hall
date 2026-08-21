package com.bytedance.pangle.fragment;

import android.app.Application;
import android.app.Fragment;
import android.content.Context;
import com.bytedance.pangle.Zeus;

public class ReportBaseFragment extends Fragment {
    Application.ActivityLifecycleCallbacks callbacks = new c(this);

    @Override
    public void onAttach(Context context) {
        super.onAttach(context);
        Zeus.getAppApplication().registerActivityLifecycleCallbacks(this.callbacks);
    }

    @Override
    public void onDetach() {
        super.onDetach();
        Zeus.getAppApplication().unregisterActivityLifecycleCallbacks(this.callbacks);
    }
}
