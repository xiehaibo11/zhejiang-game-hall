package com.bianfeng.ymnsdk.action;

import android.app.Activity;
import android.app.ProgressDialog;
import android.content.Context;
import com.bianfeng.ymnsdk.util.SystemUtil;
import java.util.Locale;

public interface ActionAttachment {
    void onEnd(Context context);

    void onStart(Context context);

    public static class a implements ActionAttachment {
        ProgressDialog a;

        protected void a() {
            ProgressDialog progressDialog = this.a;
            if (progressDialog != null && progressDialog.isShowing()) {
                this.a.dismiss();
                this.a = null;
            }
        }

        protected void a(Context context) {
            String loadingStr;
            a();
            String locale = Locale.getDefault().toString().toUpperCase();
            if (locale.contains("ZH_TW") || locale.contains("ZH_HK")) {
                loadingStr = " 加載中... ";
            } else if (locale.contains("ZH") || locale.contains(com.tkay.expressad.video.dynview.a.a.Q)) {
                loadingStr = " 加载中... ";
            } else if (locale.contains("VN")) {
                loadingStr = " Đang tải ... ";
            } else if (locale.contains("TH")) {
                loadingStr = " กำลังโหลด ... ";
            } else {
                loadingStr = " Loading... ";
            }
            this.a = ProgressDialog.show(context, null, loadingStr);
        }

        class a implements Runnable {
            final Context a;

            a(Context context) {
                this.a = context;
            }

            @Override
            public void run() {
                if (!((Activity) this.a).isFinishing()) {
                    a.this.a(this.a);
                }
            }
        }

        @Override
        public void onStart(Context context) {
            if (context instanceof Activity) {
                ((Activity) context).runOnUiThread(new a(context));
            } else {
                a(context);
            }
        }

        @Override
        public void onEnd(Context context) {
            a();
            if (context instanceof Activity) {
                SystemUtil.hideVirtualKey((Activity) context);
            }
        }
    }
}
