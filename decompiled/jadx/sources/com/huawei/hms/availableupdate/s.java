package com.huawei.hms.availableupdate;

import android.app.AlertDialog;
import android.app.ProgressDialog;
import com.huawei.hms.utils.ResourceLoaderUtil;

/* JADX INFO: compiled from: CheckProgress.java */
/* JADX INFO: loaded from: classes.dex */
public class s extends q {
    @Override // com.huawei.hms.availableupdate.q
    public AlertDialog g() {
        ProgressDialog progressDialog = new ProgressDialog(e(), f());
        progressDialog.setMessage(ResourceLoaderUtil.getString("hms_checking"));
        progressDialog.setCanceledOnTouchOutside(false);
        return progressDialog;
    }
}
