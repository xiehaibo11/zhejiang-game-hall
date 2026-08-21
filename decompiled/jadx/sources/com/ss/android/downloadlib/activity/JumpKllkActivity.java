package com.ss.android.downloadlib.activity;

import android.app.Activity;
import android.text.TextUtils;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.exception.q;
import com.ss.android.downloadlib.utils.fw;

/* JADX INFO: loaded from: classes3.dex */
public class JumpKllkActivity extends TTDelegateActivity {
    @Override // com.ss.android.downloadlib.activity.TTDelegateActivity
    protected void rg() {
        if (getIntent() == null) {
            q.rg().rg("handleIntent is null");
            com.ss.android.socialbase.appdownloader.q.rg((Activity) this);
        }
        String stringExtra = getIntent().getStringExtra("p");
        long longExtra = getIntent().getLongExtra("id", 0L);
        if (TextUtils.isEmpty(stringExtra) || longExtra == 0) {
            q.rg().rg("getPackage or id is null");
            com.ss.android.socialbase.appdownloader.q.rg((Activity) this);
        }
        int iOptInt = bm.rz().optInt("ab", 0);
        fw.rg(this, stringExtra, longExtra, iOptInt == 1);
        if (iOptInt != 1) {
            com.ss.android.socialbase.appdownloader.q.rg((Activity) this);
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        com.ss.android.socialbase.appdownloader.q.rg((Activity) this);
    }
}
