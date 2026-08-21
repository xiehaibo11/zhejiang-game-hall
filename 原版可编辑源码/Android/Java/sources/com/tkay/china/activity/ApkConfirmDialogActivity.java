package com.tkay.china.activity;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.os.Bundle;
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

public class ApkConfirmDialogActivity extends Activity {
    public static h a;
    private static a b;
    private Dialog c;

    public static void a(final Context context, final h hVar, final a aVar) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                if (com.tkay.china.common.a.a(context).a(hVar)) {
                    aVar.a(true);
                } else if (com.tkay.china.common.c.a.a(context, hVar.B())) {
                    aVar.a(true);
                } else {
                    m.a().a(new Runnable() {
                        @Override
                        public final void run() {
                            ApkConfirmDialogActivity.a = hVar;
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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onCreate(Bundle bundle) {
        boolean z;
        TextView textView;
        String str;
        String str2;
        View view;
        TextView textView2;
        super.onCreate(bundle);
        h hVar = a;
        if (hVar == null) {
            finish();
            return;
        }
        if (TextUtils.isEmpty(hVar.r())) {
            h hVar2 = a;
            z = (hVar2 instanceof z) && !TextUtils.isEmpty(((z) hVar2).aa());
        }
        if (z && !TextUtils.isEmpty(a.G()) && !TextUtils.isEmpty(a.F()) && !TextUtils.isEmpty(a.H()) && !TextUtils.isEmpty(a.I())) {
            try {
                h hVar3 = a;
                View viewInflate = LayoutInflater.from(this).inflate(com.tkay.core.common.l.h.a(this, "confirm", "layout"), (ViewGroup) null, false);
                RoundImageView roundImageView = (RoundImageView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_icon", "id"));
                TextView textView3 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_title", "id"));
                TextView textView4 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_version_name", "id"));
                TextView textView5 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_publisher_name", "id"));
                TextView textView6 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_permission_manage", "id"));
                TextView textView7 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_privacy_agreement", "id"));
                TextView textView8 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_download_now", "id"));
                TextView textView9 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "confirm_dialog_give_up", "id"));
                String strT = hVar3.t();
                if (!TextUtils.isEmpty(strT)) {
                    view = viewInflate;
                    roundImageView.setNeedRadiu(true);
                    roundImageView.setRadiusInDip(4);
                    ViewGroup.LayoutParams layoutParams = roundImageView.getLayoutParams();
                    str = "style";
                    str2 = "style_full_screen_translucent_dialog";
                    textView2 = textView9;
                    textView = textView8;
                    b.a(this).a(new e(1, strT), layoutParams.width, layoutParams.height, new 4(strT, roundImageView));
                } else {
                    textView = textView8;
                    str = "style";
                    str2 = "style_full_screen_translucent_dialog";
                    view = viewInflate;
                    textView2 = textView9;
                    ViewGroup.LayoutParams layoutParams2 = roundImageView.getLayoutParams();
                    layoutParams2.width = 0;
                    layoutParams2.height = 0;
                    roundImageView.setLayoutParams(layoutParams2);
                }
                String strAa = hVar3 instanceof z ? ((z) hVar3).aa() : "";
                if (TextUtils.isEmpty(strAa)) {
                    strAa = hVar3.r();
                }
                textView3.setText(strAa);
                textView4.setText(getResources().getString(com.tkay.core.common.l.h.a(this, "confirm_dialog_version", i.g), hVar3.G()));
                textView5.setText(getResources().getString(com.tkay.core.common.l.h.a(this, "confirm_dialog_publisher", i.g), hVar3.F()));
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
                textView6.setOnClickListener(new 5(hVar3));
                textView7.setOnClickListener(new 6(hVar3));
                textView.setOnClickListener(new 7());
                textView2.setOnClickListener(new 8());
                Dialog dialog = new Dialog(this, com.tkay.core.common.l.h.a(this, str2, str));
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
                return;
            } catch (Throwable unused) {
                finish();
                return;
            }
        }
        try {
            String strAa2 = a instanceof z ? ((z) a).aa() : "";
            if (TextUtils.isEmpty(strAa2)) {
                strAa2 = a.r();
            }
            View viewInflate2 = LayoutInflater.from(this).inflate(com.tkay.core.common.l.h.a(this, "myoffer_confirm_dialog", "layout"), (ViewGroup) null, false);
            TextView textView10 = (TextView) viewInflate2.findViewById(com.tkay.core.common.l.h.a(this, "myoffer_confirm_msg", "id"));
            TextView textView11 = (TextView) viewInflate2.findViewById(com.tkay.core.common.l.h.a(this, "myoffer_confirm_give_up", "id"));
            TextView textView12 = (TextView) viewInflate2.findViewById(com.tkay.core.common.l.h.a(this, "myoffer_confirm_continue", "id"));
            textView10.setText("立即下载\"" + strAa2 + "\"?");
            textView11.setText("取 消");
            textView12.setText("确 定");
            textView11.setOnClickListener(new 2());
            textView12.setOnClickListener(new 3());
            Dialog dialog2 = new Dialog(this, com.tkay.core.common.l.h.a(this, "style_full_screen_translucent_dialog", "style"));
            this.c = dialog2;
            dialog2.setContentView(viewInflate2);
            this.c.setCancelable(false);
            this.c.show();
        } catch (Throwable unused2) {
            finish();
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        u.a(true);
    }

    private void b() {
        try {
            String strAa = a instanceof z ? ((z) a).aa() : "";
            if (TextUtils.isEmpty(strAa)) {
                strAa = a.r();
            }
            View viewInflate = LayoutInflater.from(this).inflate(com.tkay.core.common.l.h.a(this, "myoffer_confirm_dialog", "layout"), (ViewGroup) null, false);
            TextView textView = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "myoffer_confirm_msg", "id"));
            TextView textView2 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "myoffer_confirm_give_up", "id"));
            TextView textView3 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(this, "myoffer_confirm_continue", "id"));
            textView.setText("立即下载\"" + strAa + "\"?");
            textView2.setText("取 消");
            textView3.setText("确 定");
            textView2.setOnClickListener(new 2());
            textView3.setOnClickListener(new 3());
            Dialog dialog = new Dialog(this, com.tkay.core.common.l.h.a(this, "style_full_screen_translucent_dialog", "style"));
            this.c = dialog;
            dialog.setContentView(viewInflate);
            this.c.setCancelable(false);
            this.c.show();
        } catch (Throwable unused) {
            finish();
        }
    }

    final class 2 implements View.OnClickListener {
        2() {
        }

        @Override
        public final void onClick(View view) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (ApkConfirmDialogActivity.b != null) {
                        ApkConfirmDialogActivity.b.a(false);
                    }
                }
            });
            ApkConfirmDialogActivity.this.finish();
        }
    }

    final class 3 implements View.OnClickListener {
        3() {
        }

        @Override
        public final void onClick(View view) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
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
            h hVar = a;
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
                b.a(this).a(new e(1, strT), layoutParams.width, layoutParams.height, new 4(strT, roundImageView));
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
            textView6.setOnClickListener(new 5(hVar));
            textView7.setOnClickListener(new 6(hVar));
            textView2.setOnClickListener(new 7());
            textView.setOnClickListener(new 8());
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

    final class 4 implements b.a {
        final String a;
        final RoundImageView b;

        @Override
        public final void onFail(String str, String str2) {
        }

        4(String str, RoundImageView roundImageView) {
            this.a = str;
            this.b = roundImageView;
        }

        @Override
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(str, this.a)) {
                this.b.setImageBitmap(bitmap);
            }
        }
    }

    final class 5 implements View.OnClickListener {
        final h a;

        5(h hVar) {
            this.a = hVar;
        }

        @Override
        public final void onClick(View view) {
            l.a(ApkConfirmDialogActivity.this, this.a.I());
        }
    }

    final class 6 implements View.OnClickListener {
        final h a;

        6(h hVar) {
            this.a = hVar;
        }

        @Override
        public final void onClick(View view) {
            l.a(ApkConfirmDialogActivity.this, this.a.H());
        }
    }

    final class 7 implements View.OnClickListener {
        7() {
        }

        @Override
        public final void onClick(View view) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (ApkConfirmDialogActivity.b != null) {
                        ApkConfirmDialogActivity.b.a(true);
                    }
                }
            });
            ApkConfirmDialogActivity.this.finish();
        }
    }

    final class 8 implements View.OnClickListener {
        8() {
        }

        @Override
        public final void onClick(View view) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (ApkConfirmDialogActivity.b != null) {
                        ApkConfirmDialogActivity.b.a(false);
                    }
                }
            });
            ApkConfirmDialogActivity.this.finish();
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
        u.a(false);
        Dialog dialog = this.c;
        if (dialog != null) {
            dialog.dismiss();
            this.c = null;
        }
        a = null;
        b = null;
        super.onDestroy();
    }
}
