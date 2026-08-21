package com.huawei.updatesdk.b.i;

import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Build;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;

public class a {
    private com.huawei.updatesdk.b.i.b a;
    private Context b;
    private String c;
    private CharSequence d;
    private AlertDialog e;
    private AlertDialog.Builder f;
    private DialogInterface.OnShowListener g;
    private DialogInterface.OnDismissListener h;

    class a implements DialogInterface.OnShowListener {

        class a implements View.OnClickListener {
            a() {
            }

            @Override
            public void onClick(View view) {
                if (a.this.a != null) {
                    a.this.a.a();
                }
            }
        }

        class b implements View.OnClickListener {
            b() {
            }

            @Override
            public void onClick(View view) {
                if (a.this.a != null) {
                    a.this.a.b();
                }
            }
        }

        a() {
        }

        @Override
        public void onShow(DialogInterface dialogInterface) {
            AlertDialog alertDialog = (AlertDialog) dialogInterface;
            alertDialog.getButton(-1).setOnClickListener(new a());
            Button button = alertDialog.getButton(-2);
            if (button != null) {
                button.setOnClickListener(new b());
            }
            if (a.this.g != null) {
                a.this.g.onShow(dialogInterface);
            }
        }
    }

    class b implements DialogInterface.OnDismissListener {
        b() {
        }

        @Override
        public void onDismiss(DialogInterface dialogInterface) {
            if (a.this.h != null) {
                a.this.h.onDismiss(dialogInterface);
            }
        }
    }

    public enum c {
        a,
        b
    }

    public interface d {
        void a();
    }

    protected a(Context context, String str, CharSequence charSequence) {
        this.b = context;
        this.c = str;
        this.d = charSequence;
        this.f = com.huawei.updatesdk.a.a.d.h.c.i() ? new AlertDialog.Builder(context) : ((context.getResources().getConfiguration().uiMode & 48) != 32 || Build.VERSION.SDK_INT < 29) ? new AlertDialog.Builder(context, R.style.Theme.DeviceDefault.Light.Dialog.Alert) : new AlertDialog.Builder(context, R.style.Theme.DeviceDefault.Dialog.Alert);
        this.f.setTitle(this.c);
        this.f.setPositiveButton(com.huawei.updatesdk.b.h.c.c(context, "upsdk_third_app_dl_sure_cancel_download"), (DialogInterface.OnClickListener) null);
        this.f.setNegativeButton(com.huawei.updatesdk.b.h.c.c(context, "upsdk_cancel"), (DialogInterface.OnClickListener) null);
        this.f.setMessage(this.d);
    }

    public static a a(Context context, String str, CharSequence charSequence) {
        return new a(context, str, charSequence);
    }

    public void a() {
        try {
            if (this.e != null) {
                this.e.dismiss();
                this.e = null;
            }
        } catch (IllegalArgumentException unused) {
            com.huawei.updatesdk.a.a.a.b("BaseAlertDialog", "dialog dismiss IllegalArgumentException");
        }
    }

    public void a(DialogInterface.OnDismissListener onDismissListener) {
        this.h = onDismissListener;
    }

    public void a(DialogInterface.OnKeyListener onKeyListener) {
        AlertDialog alertDialog = this.e;
        if (alertDialog != null) {
            alertDialog.setOnKeyListener(onKeyListener);
        }
    }

    public void a(DialogInterface.OnShowListener onShowListener) {
        this.g = onShowListener;
    }

    public void a(View view) {
        ImageView imageView;
        if (this.f != null) {
            if (com.huawei.updatesdk.b.h.a.d().a() >= 17 && (imageView = (ImageView) view.findViewById(com.huawei.updatesdk.b.h.c.a(view.getContext(), "divider"))) != null) {
                imageView.setVisibility(8);
            }
            this.f.setMessage((CharSequence) null);
            this.f.setView(view);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0018 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0019  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(c cVar, String str) {
        Button button;
        int i;
        AlertDialog alertDialog = this.e;
        if (alertDialog == null) {
            return;
        }
        if (cVar == c.a) {
            i = -1;
        } else {
            if (cVar != c.b) {
                button = null;
                if (button != null) {
                    return;
                }
                button.setText(str);
                button.setAllCaps(true);
                return;
            }
            i = -2;
        }
        button = alertDialog.getButton(i);
        if (button != null) {
        }
    }

    public void a(d dVar) {
        StringBuilder sb;
        Context context = this.b;
        if (context == null || ((Activity) context).isFinishing()) {
            com.huawei.updatesdk.a.a.a.b("BaseAlertDialog", "context == null or activity isFinishing");
            if (dVar != null) {
                dVar.a();
                return;
            }
            return;
        }
        if (b()) {
            sb = new StringBuilder();
            sb.append("show dlg error, mContext = ");
            sb.append(this.b);
            sb.append(", mContext.isFinishing is ");
            Context context2 = this.b;
            sb.append(context2 == null ? "mContext == null" : Boolean.valueOf(((Activity) context2).isFinishing()));
        } else {
            try {
                AlertDialog alertDialogCreate = this.f.create();
                this.e = alertDialogCreate;
                alertDialogCreate.setCanceledOnTouchOutside(false);
                this.e.setOnShowListener(new a());
                this.e.setOnDismissListener(new b());
                this.e.show();
                this.e.getButton(-1).requestFocus();
                return;
            } catch (Exception e) {
                if (dVar != null) {
                    dVar.a();
                }
                sb = new StringBuilder();
                sb.append("show dlg error, e: ");
                sb.append(e.toString());
            }
        }
        com.huawei.updatesdk.a.a.a.a("BaseAlertDialog", sb.toString());
    }

    public void a(com.huawei.updatesdk.b.i.b bVar) {
        this.a = bVar;
    }

    public void a(boolean z) {
        AlertDialog alertDialog = this.e;
        if (alertDialog != null) {
            alertDialog.setCancelable(z);
        }
    }

    public boolean b() {
        AlertDialog alertDialog = this.e;
        return alertDialog != null && alertDialog.isShowing();
    }

    public void c() {
        AlertDialog.Builder builder = this.f;
        if (builder == null) {
            return;
        }
        builder.setNegativeButton((CharSequence) null, (DialogInterface.OnClickListener) null);
    }
}
