package com.huawei.hms.availableupdate;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Build;
import com.huawei.hms.support.log.HMSLog;

/* JADX INFO: compiled from: AbstractDialog.java */
/* JADX INFO: loaded from: classes.dex */
public abstract class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public AlertDialog f2037a;
    public p b;

    /* JADX INFO: compiled from: AbstractDialog.java */
    public class a implements DialogInterface.OnCancelListener {
        public a() {
        }

        @Override // android.content.DialogInterface.OnCancelListener
        public void onCancel(DialogInterface dialogInterface) {
            q.this.c();
        }
    }

    public static int a(Context context) {
        if (context == null) {
            return 0;
        }
        return context.getResources().getIdentifier("androidhwext:style/Theme.Emui", null, null);
    }

    public void b() {
        AlertDialog alertDialog = this.f2037a;
        if (alertDialog != null) {
            alertDialog.dismiss();
        }
    }

    public void c() {
        p pVar = this.b;
        if (pVar != null) {
            pVar.a(this);
        }
    }

    public void d() {
        p pVar = this.b;
        if (pVar != null) {
            pVar.b(this);
        }
    }

    public Activity e() {
        p pVar = this.b;
        if (pVar != null) {
            return pVar.b();
        }
        return null;
    }

    public int f() {
        return (a(e()) == 0 || Build.VERSION.SDK_INT < 16) ? 3 : 0;
    }

    public abstract AlertDialog g();

    public void a(p pVar) {
        this.b = pVar;
        if (e() == null || e().isFinishing()) {
            HMSLog.e("AbstractDialog", "In show, The activity is null or finishing.");
            return;
        }
        AlertDialog alertDialogG = g();
        this.f2037a = alertDialogG;
        alertDialogG.setCanceledOnTouchOutside(false);
        this.f2037a.setOnCancelListener(new a());
        this.f2037a.show();
    }

    public void a() {
        AlertDialog alertDialog = this.f2037a;
        if (alertDialog != null) {
            alertDialog.cancel();
        }
    }
}
