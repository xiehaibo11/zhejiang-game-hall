package com.huawei.hms.availableupdate;

import android.app.AlertDialog;
import android.content.DialogInterface;
import com.huawei.hms.utils.ResourceLoaderUtil;

public class a0 extends q {
    public String c = ResourceLoaderUtil.getString("hms_update_title");

    public class a implements DialogInterface.OnClickListener {
        public a() {
        }

        @Override
        public void onClick(DialogInterface dialogInterface, int i) {
            a0.this.d();
        }
    }

    public class b implements DialogInterface.OnClickListener {
        public b() {
        }

        @Override
        public void onClick(DialogInterface dialogInterface, int i) {
            a0.this.a();
        }
    }

    public void a(String str) {
        this.c = str;
    }

    @Override
    public AlertDialog g() {
        int stringId = ResourceLoaderUtil.getStringId("hms_update_message_new");
        int stringId2 = ResourceLoaderUtil.getStringId("hms_install");
        AlertDialog.Builder builder = new AlertDialog.Builder(e(), f());
        builder.setMessage(e().getString(stringId, new Object[]{this.c}));
        builder.setPositiveButton(stringId2, new a());
        builder.setNegativeButton(ResourceLoaderUtil.getStringId("hms_cancel"), new b());
        return builder.create();
    }
}
