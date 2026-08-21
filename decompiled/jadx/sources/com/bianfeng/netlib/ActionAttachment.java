package com.bianfeng.netlib;

import android.app.Activity;
import android.app.ProgressDialog;
import android.content.Context;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public interface ActionAttachment {
    void onEnd(Context context);

    void onStart(Context context);

    public static class ProgressAttachment implements ActionAttachment {
        ProgressDialog progressDialog;

        protected void dismissProgressDialog() {
            ProgressDialog progressDialog = this.progressDialog;
            if (progressDialog == null || !progressDialog.isShowing()) {
                return;
            }
            this.progressDialog.dismiss();
            this.progressDialog = null;
        }

        protected void showProgressDialog(Context context) {
            dismissProgressDialog();
            this.progressDialog = ProgressDialog.show(context, null, "  加载中···  ");
        }

        @Override // com.bianfeng.netlib.ActionAttachment
        public void onStart(final Context context) {
            if (context instanceof Activity) {
                ((Activity) context).runOnUiThread(new Runnable() { // from class: com.bianfeng.netlib.ActionAttachment.ProgressAttachment.1
                    @Override // java.lang.Runnable
                    public void run() {
                        ProgressAttachment.this.showProgressDialog(context);
                    }
                });
            } else {
                showProgressDialog(context);
            }
        }

        @Override // com.bianfeng.netlib.ActionAttachment
        public void onEnd(Context context) {
            dismissProgressDialog();
            if (context instanceof Activity) {
                UtilsSdk.getSystemUtil().hideVirtualKey((Activity) context);
            }
        }
    }
}
