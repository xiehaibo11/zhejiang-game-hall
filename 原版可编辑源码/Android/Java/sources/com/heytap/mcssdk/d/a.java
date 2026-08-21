package com.heytap.mcssdk.d;

import android.content.Context;
import android.content.Intent;
import com.heytap.msp.push.mode.BaseMode;

public class a extends c {
    @Override
    public BaseMode a(Context context, int i, Intent intent) {
        if (4105 == i) {
            return a(intent, i);
        }
        return null;
    }

    @Override
    protected BaseMode a(Intent intent, int i) {
        try {
            com.heytap.mcssdk.c.b bVar = new com.heytap.mcssdk.c.b();
            bVar.a(Integer.parseInt(com.heytap.mcssdk.utils.b.d(intent.getStringExtra(com.heytap.mcssdk.constant.b.y))));
            bVar.b(Integer.parseInt(com.heytap.mcssdk.utils.b.d(intent.getStringExtra("code"))));
            bVar.e(com.heytap.mcssdk.utils.b.d(intent.getStringExtra("content")));
            bVar.a(com.heytap.mcssdk.utils.b.d(intent.getStringExtra(com.heytap.mcssdk.constant.b.z)));
            bVar.b(com.heytap.mcssdk.utils.b.d(intent.getStringExtra(com.heytap.mcssdk.constant.b.A)));
            bVar.f(com.heytap.mcssdk.utils.b.d(intent.getStringExtra(com.heytap.mcssdk.constant.b.e)));
            com.heytap.mcssdk.utils.d.b("OnHandleIntent-message:" + bVar.toString());
            return bVar;
        } catch (Exception e) {
            com.heytap.mcssdk.utils.d.b("OnHandleIntent--" + e.getMessage());
            return null;
        }
    }
}
