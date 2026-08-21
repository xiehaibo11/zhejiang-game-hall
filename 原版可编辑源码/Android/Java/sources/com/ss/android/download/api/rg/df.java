package com.ss.android.download.api.rg;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.support.v4.content.ContextCompat;
import com.ss.android.download.api.config.n;
import com.ss.android.download.api.config.rz;

public class df implements rz {
    private n rg;

    @Override
    public void rg(Activity activity, String[] strArr, n nVar) {
        if (Build.VERSION.SDK_INT >= 23) {
            this.rg = nVar;
            activity.requestPermissions(strArr, 1);
        } else if (nVar != null) {
            nVar.rg();
        }
    }

    @Override
    public boolean rg(Context context, String str) {
        return context != null && ContextCompat.checkSelfPermission(context, str) == 0;
    }

    @Override
    public void rg(Activity activity, int i, String[] strArr, int[] iArr) {
        n nVar;
        if (iArr.length <= 0 || (nVar = this.rg) == null) {
            return;
        }
        if (iArr[0] == -1) {
            nVar.rg(strArr[0]);
        } else if (iArr[0] == 0) {
            nVar.rg();
        }
    }
}
