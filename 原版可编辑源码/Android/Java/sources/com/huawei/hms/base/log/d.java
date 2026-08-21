package com.huawei.hms.base.log;

import android.content.Context;
import android.util.Log;

public class d implements b {
    public b a;

    @Override
    public void a(Context context, String str) {
        b bVar = this.a;
        if (bVar != null) {
            bVar.a(context, str);
        }
    }

    @Override
    public void a(String str, int i, String str2, String str3) {
        Log.println(i, "HMSSDK_" + str2, str3);
        b bVar = this.a;
        if (bVar != null) {
            bVar.a(str, i, str2, str3);
        }
    }
}
