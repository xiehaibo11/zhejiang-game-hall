package com.tkay.basead.ui;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

public class RewardExitConfirmDialogActivity extends Activity {
    private static Runnable a;
    private static String b;
    private Dialog c;

    public static void a(Context context, String str, Runnable runnable) {
        b = str;
        a = runnable;
        Intent intent = new Intent(context, (Class<?>) RewardExitConfirmDialogActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        context.startActivity(intent);
    }

    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            View viewInflate = LayoutInflater.from(this).inflate(h.a(this, "myoffer_confirm_dialog", "layout"), (ViewGroup) null, false);
            TextView textView = (TextView) viewInflate.findViewById(h.a(this, "myoffer_confirm_msg", "id"));
            TextView textView2 = (TextView) viewInflate.findViewById(h.a(this, "myoffer_confirm_give_up", "id"));
            TextView textView3 = (TextView) viewInflate.findViewById(h.a(this, "myoffer_confirm_continue", "id"));
            textView.setText(getResources().getString(h.a(this, "myoffer_reward_exit_confirm_msg", i.g), b));
            textView2.setText(getResources().getString(h.a(this, "myoffer_reward_exit_confirm_give_up", i.g)));
            textView3.setText(getResources().getString(h.a(this, "myoffer_reward_exit_confirm_continue", i.g)));
            textView2.setOnClickListener(new 1());
            textView3.setOnClickListener(new 2());
            Dialog dialog = new Dialog(this, h.a(this, "style_full_screen_translucent_dialog", "style"));
            this.c = dialog;
            dialog.setContentView(viewInflate);
            this.c.setCancelable(false);
            this.c.show();
        } catch (Throwable unused) {
            finish();
        }
    }

    private void b() {
        try {
            View viewInflate = LayoutInflater.from(this).inflate(h.a(this, "myoffer_confirm_dialog", "layout"), (ViewGroup) null, false);
            TextView textView = (TextView) viewInflate.findViewById(h.a(this, "myoffer_confirm_msg", "id"));
            TextView textView2 = (TextView) viewInflate.findViewById(h.a(this, "myoffer_confirm_give_up", "id"));
            TextView textView3 = (TextView) viewInflate.findViewById(h.a(this, "myoffer_confirm_continue", "id"));
            textView.setText(getResources().getString(h.a(this, "myoffer_reward_exit_confirm_msg", i.g), b));
            textView2.setText(getResources().getString(h.a(this, "myoffer_reward_exit_confirm_give_up", i.g)));
            textView3.setText(getResources().getString(h.a(this, "myoffer_reward_exit_confirm_continue", i.g)));
            textView2.setOnClickListener(new 1());
            textView3.setOnClickListener(new 2());
            Dialog dialog = new Dialog(this, h.a(this, "style_full_screen_translucent_dialog", "style"));
            this.c = dialog;
            dialog.setContentView(viewInflate);
            this.c.setCancelable(false);
            this.c.show();
        } catch (Throwable unused) {
            finish();
        }
    }

    final class 1 implements View.OnClickListener {
        1() {
        }

        @Override
        public final void onClick(View view) {
            if (RewardExitConfirmDialogActivity.a != null) {
                RewardExitConfirmDialogActivity.a.run();
            }
            RewardExitConfirmDialogActivity.this.finish();
        }
    }

    final class 2 implements View.OnClickListener {
        2() {
        }

        @Override
        public final void onClick(View view) {
            RewardExitConfirmDialogActivity.this.finish();
        }
    }

    @Override
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (4 == i) {
            return true;
        }
        return super.onKeyDown(i, keyEvent);
    }

    @Override
    protected void onDestroy() {
        Dialog dialog = this.c;
        if (dialog != null) {
            dialog.dismiss();
            this.c = null;
        }
        a = null;
        super.onDestroy();
    }
}
