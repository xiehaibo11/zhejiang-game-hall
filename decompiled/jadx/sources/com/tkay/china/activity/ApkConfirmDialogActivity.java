package com.tkay.china.activity;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.TextView;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.z;
import com.tkay.core.common.g.a;
import com.tkay.core.common.l.l;
import com.tkay.core.common.l.u;
import com.tkay.core.common.res.b;
import com.tkay.core.common.res.e;
import com.tkay.core.common.ui.component.RoundImageView;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public class ApkConfirmDialogActivity extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static h f5890a;
    private static a b;
    private Dialog c;

    public static void a(final Context context, final h hVar, final a aVar) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.china.activity.ApkConfirmDialogActivity.1
            @Override // java.lang.Runnable
            public final void run() {
                if (com.tkay.china.common.a.a(context).a(hVar)) {
                    aVar.a(true);
                } else if (com.tkay.china.common.c.a.a(context, hVar.B())) {
                    aVar.a(true);
                } else {
                    m.a().a(new Runnable() { // from class: com.tkay.china.activity.ApkConfirmDialogActivity.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            ApkConfirmDialogActivity.f5890a = hVar;
                            a unused = ApkConfirmDialogActivity.b = aVar;
                            Intent intent = new Intent(context, (Class<?>) ApkConfirmDialogActivity.class);
                            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                            context.startActivity(intent);
                        }
                    });
                }
            }
        });
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0031  */
    @Override // android.app.Activity
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void onCreate(android.os.Bundle r23) {
        /*
            Method dump skipped, instruction units count: 758
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.china.activity.ApkConfirmDialogActivity.onCreate(android.os.Bundle):void");
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        u.a(true);
    }

    private void b() {
        try {
            String strAa = f5890a instanceof z ? ((z) f5890a).aa() : "";
            if (TextUtils.isEmpty(strAa)) {
                strAa = f5890a.r();
            }
            View viewInflate = LayoutInflater.from(this).inflate(com.tkay.core.common.l.h.a(this, "myoffer_confirm_dialog", "layout"), (ViewGroup) null, false);
            TextView textView = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "myoffer_confirm_msg", "id"));
            TextView textView2 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "myoffer_confirm_give_up", "id"));
            TextView textView3 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "myoffer_confirm_continue", "id"));
            textView.setText("立即下载\"" + strAa + "\"?");
            textView2.setText("取 消");
            textView3.setText("确 定");
            textView2.setOnClickListener(new AnonymousClass2());
            textView3.setOnClickListener(new AnonymousClass3());
            Dialog dialog = new Dialog(this, com.tkay.core.common.l.h.a(this, "style_full_screen_translucent_dialog", "style"));
            this.c = dialog;
            dialog.setContentView(viewInflate);
            this.c.setCancelable(false);
            this.c.show();
        } catch (Throwable unused) {
            finish();
        }
    }

    /* JADX INFO: renamed from: com.tkay.china.activity.ApkConfirmDialogActivity$2, reason: invalid class name */
    final class AnonymousClass2 implements View.OnClickListener {
        AnonymousClass2() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.china.activity.ApkConfirmDialogActivity.2.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (ApkConfirmDialogActivity.b != null) {
                        ApkConfirmDialogActivity.b.a(false);
                    }
                }
            });
            ApkConfirmDialogActivity.this.finish();
        }
    }

    /* JADX INFO: renamed from: com.tkay.china.activity.ApkConfirmDialogActivity$3, reason: invalid class name */
    final class AnonymousClass3 implements View.OnClickListener {
        AnonymousClass3() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.china.activity.ApkConfirmDialogActivity.3.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (ApkConfirmDialogActivity.b != null) {
                        ApkConfirmDialogActivity.b.a(true);
                    }
                }
            });
            ApkConfirmDialogActivity.this.finish();
        }
    }

    private void c() {
        TextView textView;
        View view;
        TextView textView2;
        try {
            h hVar = f5890a;
            View viewInflate = LayoutInflater.from(this).inflate(com.tkay.core.common.l.h.a(this, "confirm", "layout"), (ViewGroup) null, false);
            RoundImageView roundImageView = (RoundImageView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_icon", "id"));
            TextView textView3 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_title", "id"));
            TextView textView4 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_version_name", "id"));
            TextView textView5 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_publisher_name", "id"));
            TextView textView6 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_permission_manage", "id"));
            TextView textView7 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_privacy_agreement", "id"));
            TextView textView8 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_download_now", "id"));
            TextView textView9 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_give_up", "id"));
            String strT = hVar.t();
            if (!TextUtils.isEmpty(strT)) {
                roundImageView.setNeedRadiu(true);
                roundImageView.setRadiusInDip(4);
                ViewGroup.LayoutParams layoutParams = roundImageView.getLayoutParams();
                view = viewInflate;
                textView = textView9;
                textView2 = textView8;
                b.a(this).a(new e(1, strT), layoutParams.width, layoutParams.height, new AnonymousClass4(strT, roundImageView));
            } else {
                textView = textView9;
                view = viewInflate;
                textView2 = textView8;
                ViewGroup.LayoutParams layoutParams2 = roundImageView.getLayoutParams();
                layoutParams2.width = 0;
                layoutParams2.height = 0;
                roundImageView.setLayoutParams(layoutParams2);
            }
            String strAa = hVar instanceof z ? ((z) hVar).aa() : "";
            if (TextUtils.isEmpty(strAa)) {
                strAa = hVar.r();
            }
            textView3.setText(strAa);
            textView4.setText(getResources().getString(com.tkay.core.common.l.h.a(this, "confirm_dialog_version", i.g), hVar.G()));
            textView5.setText(getResources().getString(com.tkay.core.common.l.h.a(this, "confirm_dialog_publisher", i.g), hVar.F()));
            String string = getResources().getString(com.tkay.core.common.l.h.a(this, "confirm_dialog_privacy_agreement", i.g));
            String string2 = getResources().getString(com.tkay.core.common.l.h.a(this, "confirm_dialog_application_permission", i.g));
            int length = string.length();
            int length2 = string2.length();
            if (length != length2) {
                int iAbs = Math.abs(length2 - length);
                StringBuilder sb = new StringBuilder(string);
                for (int i = 0; i < iAbs; i++) {
                    sb.append(" ");
                }
                string = sb.toString();
            }
            textView7.setText(string);
            textView6.setOnClickListener(new AnonymousClass5(hVar));
            textView7.setOnClickListener(new AnonymousClass6(hVar));
            textView2.setOnClickListener(new AnonymousClass7());
            textView.setOnClickListener(new AnonymousClass8());
            Dialog dialog = new Dialog(this, com.tkay.core.common.l.h.a(this, "style_full_screen_translucent_dialog", "style"));
            this.c = dialog;
            dialog.setContentView(view);
            this.c.setCancelable(false);
            Window window = this.c.getWindow();
            if (window != null) {
                int dimensionPixelSize = getResources().getDimensionPixelSize(com.tkay.core.common.l.h.a(this, "confirm_dialog_margin", "dimen"));
                int i2 = getResources().getDisplayMetrics().widthPixels;
                int i3 = getResources().getDisplayMetrics().heightPixels;
                if (i2 > i3) {
                    window.setLayout((int) Math.ceil(r4 * 0.98859316f), i3 - (dimensionPixelSize * 2));
                } else {
                    window.setLayout(i2 - (dimensionPixelSize * 2), (int) Math.ceil(r3 / 0.98859316f));
                }
            }
            this.c.show();
        } catch (Throwable unused) {
            finish();
        }
    }

    /* JADX INFO: renamed from: com.tkay.china.activity.ApkConfirmDialogActivity$4, reason: invalid class name */
    final class AnonymousClass4 implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f5897a;
        final /* synthetic */ RoundImageView b;

        @Override // com.tkay.core.common.res.b.a
        public final void onFail(String str, String str2) {
        }

        AnonymousClass4(String str, RoundImageView roundImageView) {
            this.f5897a = str;
            this.b = roundImageView;
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(str, this.f5897a)) {
                this.b.setImageBitmap(bitmap);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.china.activity.ApkConfirmDialogActivity$5, reason: invalid class name */
    final class AnonymousClass5 implements View.OnClickListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ h f5898a;

        AnonymousClass5(h hVar) {
            this.f5898a = hVar;
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            l.a(ApkConfirmDialogActivity.this, this.f5898a.I());
        }
    }

    /* JADX INFO: renamed from: com.tkay.china.activity.ApkConfirmDialogActivity$6, reason: invalid class name */
    final class AnonymousClass6 implements View.OnClickListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ h f5899a;

        AnonymousClass6(h hVar) {
            this.f5899a = hVar;
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            l.a(ApkConfirmDialogActivity.this, this.f5899a.H());
        }
    }

    /* JADX INFO: renamed from: com.tkay.china.activity.ApkConfirmDialogActivity$7, reason: invalid class name */
    final class AnonymousClass7 implements View.OnClickListener {
        AnonymousClass7() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.china.activity.ApkConfirmDialogActivity.7.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (ApkConfirmDialogActivity.b != null) {
                        ApkConfirmDialogActivity.b.a(true);
                    }
                }
            });
            ApkConfirmDialogActivity.this.finish();
        }
    }

    /* JADX INFO: renamed from: com.tkay.china.activity.ApkConfirmDialogActivity$8, reason: invalid class name */
    final class AnonymousClass8 implements View.OnClickListener {
        AnonymousClass8() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.china.activity.ApkConfirmDialogActivity.8.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (ApkConfirmDialogActivity.b != null) {
                        ApkConfirmDialogActivity.b.a(false);
                    }
                }
            });
            ApkConfirmDialogActivity.this.finish();
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
        u.a(false);
        Dialog dialog = this.c;
        if (dialog != null) {
            dialog.dismiss();
            this.c = null;
        }
        f5890a = null;
        b = null;
        super.onDestroy();
    }
}
