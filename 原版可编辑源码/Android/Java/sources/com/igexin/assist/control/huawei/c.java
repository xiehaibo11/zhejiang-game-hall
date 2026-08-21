package com.igexin.assist.control.huawei;

import android.util.Log;
import com.huawei.hmf.tasks.OnCompleteListener;
import com.huawei.hmf.tasks.Task;

class c implements OnCompleteListener<Void> {
    final HmsPushManager a;

    c(HmsPushManager hmsPushManager) {
        this.a = hmsPushManager;
    }

    @Override
    public void onComplete(Task<Void> task) {
        if (task.isSuccessful()) {
            Log.i("Assist_HW", "turnOnPush Complete");
            return;
        }
        Log.e("Assist_HW", "turnOnPush failed: ret=" + task.getException().getMessage());
    }
}
