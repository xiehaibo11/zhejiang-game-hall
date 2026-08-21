package com.bianfeng.ymnsdk.action;

import android.app.Activity;
import android.app.ProgressDialog;
import android.content.Context;
import com.bianfeng.ymnsdk.util.SystemUtil;
import java.util.Locale;

public interface ActionAttachment {

    public static class a implements ActionAttachment {
        ProgressDialog a;

        class a implements Runnable {
            final Context a;
            final a b;

            a(a r1, Context r2) {
                this.b = r1;
                this.a = r2;
            }

            @Override
            public void run() {
                if (((Activity) this.a).isFinishing() == true) goto L6;
                this.b.a(this.a);
                return;
            }
        }

        public a() {
        }

        protected void a() {
            ProgressDialog r0 = this.a;
            if (r0 != null) goto L5;
            return;
        L5:
            if (r0.isShowing() == false) goto L9;
            this.a.dismiss();
            this.a = null;
            return;
        }

        @Override
        public void onEnd(Context r2) {
            a();
            if ((r2 instanceof Activity) == false) goto L6;
            SystemUtil.hideVirtualKey((Activity) r2);
            return;
        }

        @Override
        public void onStart(Context r3) {
            if ((r3 instanceof Activity) == false) goto L5;
            ((Activity) r3).runOnUiThread(new a(this, r3));
            return;
        L5:
            a(r3);
        }

        protected void a(Context r3) {
            a();
            String r0 = Locale.getDefault().toString().toUpperCase();
            if (r0.contains("ZH_TW") == false) goto L5;
        L20:
            String r02 = " 加載中... ";
        L21:
            this.a = ProgressDialog.show(r3, null, r02);
            return;
        L5:
            if (r0.contains("ZH_HK") == true) goto L20;
            if (r0.contains("ZH") == false) goto L10;
        L19:
            r02 = " 加载中... ";
            goto L21
        L10:
            if (r0.contains("zh") == true) goto L19;
            if (r0.contains("VN") == false) goto L16;
            r02 = " Đang tải ... ";
            goto L21
        L16:
            if (r0.contains("TH") == false) goto L18;
            r02 = " กำลังโหลด ... ";
            goto L21
        L18:
            r02 = " Loading... ";
            goto L21
        }
    }

    void onEnd(Context r1);

    void onStart(Context r1);
}
