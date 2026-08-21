package com.heytap.mcssdk.d;

import android.content.Context;
import android.content.Intent;
import com.heytap.mcssdk.PushService;
import com.heytap.msp.push.mode.BaseMode;
import java.util.ArrayList;
import java.util.List;

public abstract class c implements d {
    public static List<BaseMode> a(Context context, Intent intent) {
        BaseMode baseModeA;
        if (intent == null) {
            return null;
        }
        int i = 4096;
        try {
            i = Integer.parseInt(com.heytap.mcssdk.utils.b.d(intent.getStringExtra("type")));
        } catch (Exception e) {
            com.heytap.mcssdk.utils.d.e("MessageParser--getMessageByIntent--Exception:" + e.getMessage());
        }
        com.heytap.mcssdk.utils.d.b("MessageParser--getMessageByIntent--type:" + i);
        ArrayList arrayList = new ArrayList();
        for (d dVar : PushService.getInstance().getParsers()) {
            if (dVar != null && (baseModeA = dVar.a(context, i, intent)) != null) {
                arrayList.add(baseModeA);
            }
        }
        return arrayList;
    }

    protected abstract BaseMode a(Intent intent, int i);
}
