package com.ymnsdk.replugin.action;

import android.app.Activity;
import android.app.ProgressDialog;
import android.content.Context;
import android.os.Build;
import com.heytap.mcssdk.constant.MessageConstant;
import com.tkay.expressad.video.dynview.a.a;
import java.util.Locale;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public interface ActionAttachment {
    void onEnd(Context context);

    void onStart(Context context);

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
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
            String str;
            dismissProgressDialog();
            String upperCase = Locale.getDefault().toString().toUpperCase();
            if (upperCase.contains("ZH_TW") || upperCase.contains("ZH_HK")) {
                str = " 加載中... ";
            } else if (upperCase.contains("ZH") || upperCase.contains(a.Q)) {
                str = " 加载中... ";
            } else if (upperCase.contains("VN")) {
                str = " Đang tải ... ";
            } else {
                str = upperCase.contains("TH") ? " กำลังโหลด ... " : " Loading... ";
            }
            this.progressDialog = ProgressDialog.show(context, null, str);
        }

        @Override
        public void onStart(final Context context) {
            if (context instanceof Activity) {
                ((Activity) context).runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        if (((Activity) context).isFinishing()) {
                            return;
                        }
                        ProgressAttachment.this.showProgressDialog(context);
                    }
                });
            } else {
                showProgressDialog(context);
            }
        }

        @Override
        public void onEnd(Context context) {
            dismissProgressDialog();
            if (context instanceof Activity) {
                hideVirtualKey((Activity) context);
            }
        }

        public static void hideVirtualKey(Activity activity) {
            if (Build.VERSION.SDK_INT > 11 && Build.VERSION.SDK_INT < 19) {
                activity.getWindow().getDecorView().setSystemUiVisibility(8);
            } else if (Build.VERSION.SDK_INT >= 19) {
                activity.getWindow().getDecorView().setSystemUiVisibility(MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
            }
        }
    }
}
