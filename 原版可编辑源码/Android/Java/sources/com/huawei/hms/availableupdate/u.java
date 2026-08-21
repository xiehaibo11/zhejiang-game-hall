package com.huawei.hms.availableupdate;

import android.app.AlertDialog;
import android.content.DialogInterface;

public abstract class u extends q {

    public class a implements DialogInterface.OnClickListener {
        public a() {
        }

        @Override
        public void onClick(DialogInterface dialogInterface, int i) {
            u.this.d();
        }
    }

    public class b implements DialogInterface.OnClickListener {
        public b() {
        }

        @Override
        public void onClick(DialogInterface dialogInterface, int i) {
            u.this.a();
        }
    }

    public u() {
    }

    @Override
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
