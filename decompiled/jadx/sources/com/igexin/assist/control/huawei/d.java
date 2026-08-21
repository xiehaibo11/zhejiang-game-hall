package com.igexin.assist.control.huawei;

import android.util.Log;
import com.huawei.hmf.tasks.OnCompleteListener;
import com.huawei.hmf.tasks.Task;

/* JADX INFO: loaded from: classes2.dex */
class d implements OnCompleteListener<Void> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ HmsPushManager f2420a;

    d(HmsPushManager hmsPushManager) {
        this.f2420a = hmsPushManager;
    }

    @Override // com.huawei.hmf.tasks.OnCompleteListener
    public void onComplete(Task<Void> task) {
        if (task.isSuccessful()) {
            Log.i("Assist_HW", "turnOffPush Complete");
            return;
        }
        Log.e("Assist_HW", "turnOffPush failed: ret=" + task.getException().getMessage());
    }
}
