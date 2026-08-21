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

        class a implements Runnable {
            final Context a;

            a(Context context) {
                this.a = context;
            }

            @Override
            public void run() {
                if (((Activity) this.a).isFinishing()) {
                    return;
                }
                a.this.a(this.a);
            }
        }

        protected void a() {
            ProgressDialog progressDialog = this.a;
            if (progressDialog == null || !progressDialog.isShowing()) {
                return;
            }
            this.a.dismiss();
            this.a = null;
        }

        @Override
        public void onEnd(Context context) {
            a();
            if (context instanceof Activity) {
                SystemUtil.hideVirtualKey((Activity) context);
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

        protected void a(Context context) {
            String str;
            a();
            String upperCase = Locale.getDefault().toString().toUpperCase();
            if (upperCase.contains("ZH_TW") || upperCase.contains("ZH_HK")) {
                str = " 加載中... ";
            } else if (upperCase.contains("ZH") || upperCase.contains("zh")) {
                str = " 加载中... ";
            } else if (upperCase.contains("VN")) {
                str = " Đang tải ... ";
            } else {
                str = upperCase.contains("TH") ? " กำลังโหลด ... " : " Loading... ";
            }
            this.a = ProgressDialog.show(context, null, str);
        }
    }
}
