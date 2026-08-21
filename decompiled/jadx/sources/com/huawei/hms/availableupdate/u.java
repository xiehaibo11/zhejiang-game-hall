package com.huawei.hms.availableupdate;

import android.app.AlertDialog;
import android.content.DialogInterface;

/* JADX INFO: compiled from: ConfirmDialogs.java */
/* JADX INFO: loaded from: classes.dex */
public abstract class u extends q {

    /* JADX INFO: compiled from: ConfirmDialogs.java */
    public class a implements DialogInterface.OnClickListener {
        public a() {
        }

        @Override // android.content.DialogInterface.OnClickListener
        public void onClick(DialogInterface dialogInterface, int i) {
            u.this.d();
        }
    }

    /* JADX INFO: compiled from: ConfirmDialogs.java */
    public class b implements DialogInterface.OnClickListener {
        public b() {
        }

        @Override // android.content.DialogInterface.OnClickListener
        public void onClick(DialogInterface dialogInterface, int i) {
            u.this.a();
        }
    }

    public u() {
    }

    @Override // com.huawei.hms.availableupdate.q
    public AlertDialog g() {
        AlertDialog.Builder builder = new AlertDialog.Builder(e(), f());
        builder.setMessage(h());
        builder.setPositiveButton(j(), new a());
        builder.setNegativeButton(i(), new b());
        return builder.create();
    }

    public abstract int h();

    public abstract int i();

    public abstract int j();
}
