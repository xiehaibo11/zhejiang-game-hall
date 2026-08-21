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

/* JADX INFO: loaded from: classes3.dex */
public class RewardExitConfirmDialogActivity extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Runnable f5822a;
    private static String b;
    private Dialog c;

    public static void a(Context context, String str, Runnable runnable) {
        b = str;
        f5822a = runnable;
        Intent intent = new Intent(context, (Class<?>) RewardExitConfirmDialogActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        context.startActivity(intent);
    }

    @Override // android.app.Activity
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
            textView2.setOnClickListener(new AnonymousClass1());
            textView3.setOnClickListener(new AnonymousClass2());
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
            textView2.setOnClickListener(new AnonymousClass1());
            textView3.setOnClickListener(new AnonymousClass2());
            Dialog dialog = new Dialog(this, h.a(this, "style_full_screen_translucent_dialog", "style"));
            this.c = dialog;
            dialog.setContentView(viewInflate);
            this.c.setCancelable(false);
            this.c.show();
        } catch (Throwable unused) {
            finish();
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.RewardExitConfirmDialogActivity$1, reason: invalid class name */
    final class AnonymousClass1 implements View.OnClickListener {
        AnonymousClass1() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (RewardExitConfirmDialogActivity.f5822a != null) {
                RewardExitConfirmDialogActivity.f5822a.run();
            }
            RewardExitConfirmDialogActivity.this.finish();
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.RewardExitConfirmDialogActivity$2, reason: invalid class name */
    final class AnonymousClass2 implements View.OnClickListener {
        AnonymousClass2() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            RewardExitConfirmDialogActivity.this.finish();
        }
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (4 == i) {
            return true;
        }
        return super.onKeyDown(i, keyEvent);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        Dialog dialog = this.c;
        if (dialog != null) {
            dialog.dismiss();
            this.c = null;
        }
        f5822a = null;
        super.onDestroy();
    }
}
