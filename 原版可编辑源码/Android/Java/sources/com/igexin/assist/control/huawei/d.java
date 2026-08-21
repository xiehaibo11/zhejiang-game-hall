package com.igexin.assist.control.huawei;

import android.util.Log;
import com.huawei.hmf.tasks.OnCompleteListener;
import com.huawei.hmf.tasks.Task;

class d implements OnCompleteListener<Void> {
    final HmsPushManager a;

    d(HmsPushManager hmsPushManager) {
        this.a = hmsPushManager;
    }

    @Override
    public void onComplete(Task<Void> task) {
        if (task.isSuccessful()) {
            Log.i("Assist_HW", "turnOffPush Complete");
            return;
        }
        Log.e("Assist_HW", "turnOffPush failed: ret=" + task.getException().getMessage());
    }
}
