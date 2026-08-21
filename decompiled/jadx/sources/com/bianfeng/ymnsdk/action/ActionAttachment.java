package com.bianfeng.ymnsdk.action;

import android.app.Activity;
import android.app.ProgressDialog;
import android.content.Context;
import com.bianfeng.ymnsdk.util.SystemUtil;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public interface ActionAttachment {
    void onEnd(Context context);

    void onStart(Context context);

    public static class a implements ActionAttachment {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        ProgressDialog f1420a;

        protected void a() {
            ProgressDialog progressDialog = this.f1420a;
            if (progressDialog != null && progressDialog.isShowing()) {
                this.f1420a.dismiss();
                this.f1420a = null;
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
            this.f1420a = ProgressDialog.show(context, null, loadingStr);
        }

        /* JADX INFO: renamed from: com.bianfeng.ymnsdk.action.ActionAttachment$a$a, reason: collision with other inner class name */
        class RunnableC0036a implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            final /* synthetic */ Context f1421a;

            RunnableC0036a(Context context) {
                this.f1421a = context;
            }

            @Override // java.lang.Runnable
            public void run() {
                if (!((Activity) this.f1421a).isFinishing()) {
                    a.this.a(this.f1421a);
                }
            }
        }

        @Override // com.bianfeng.ymnsdk.action.ActionAttachment
        public void onStart(Context context) {
            if (context instanceof Activity) {
                ((Activity) context).runOnUiThread(new RunnableC0036a(context));
            } else {
                a(context);
            }
        }

        @Override // com.bianfeng.ymnsdk.action.ActionAttachment
        public void onEnd(Context context) {
            a();
            if (context instanceof Activity) {
                SystemUtil.hideVirtualKey((Activity) context);
            }
        }
    }
}
