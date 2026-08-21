package com.huawei.hms.availableupdate;

import android.app.AlertDialog;
import android.content.DialogInterface;
import com.huawei.hms.utils.ResourceLoaderUtil;

/* JADX INFO: compiled from: PromptDialogs.java */
/* JADX INFO: loaded from: classes.dex */
public abstract class c0 extends q {

    /* JADX INFO: compiled from: PromptDialogs.java */
    public class a implements DialogInterface.OnClickListener {
        public a() {
        }

        @Override // android.content.DialogInterface.OnClickListener
        public void onClick(DialogInterface dialogInterface, int i) {
            c0.this.d();
        }
    }

    public c0() {
    }

    @Override // com.huawei.hms.availableupdate.q
    public AlertDialog g() {
        AlertDialog.Builder builder = new AlertDialog.Builder(e(), f());
        builder.setMessage(h());
        builder.setPositiveButton(i(), new a());
        return builder.create();
    }

    public abstract int h();

    public int i() {
        return ResourceLoaderUtil.getStringId("hms_confirm");
    }
}
