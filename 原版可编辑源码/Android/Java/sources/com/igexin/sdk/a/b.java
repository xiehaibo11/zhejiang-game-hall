package com.igexin.sdk.a;

import android.content.Context;
import java.io.File;

public class b {
    private String a;

    public b(Context context) {
        if (context == null) {
            return;
        }
        this.a = context.getFilesDir().getPath() + "/push_sd.pid";
    }

    public boolean a() {
        return new File(this.a).exists();
    }
}
