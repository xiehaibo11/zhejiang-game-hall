package com.sigmob.sdk.base.common;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.text.TextUtils;
import com.czhj.sdk.common.Constants;
import com.czhj.sdk.common.utils.Preconditions;
import java.util.Map;

public abstract class BaseBroadcastReceiver extends BroadcastReceiver {
    private String a;

    public BaseBroadcastReceiver(String str) {
        this.a = str;
    }

    public static void a(Context context, String str, String str2) {
        a(context, str, null, str2, 0);
    }

    public static void a(Context context, String str, String str2, int i) {
        a(context, str, null, str2, i);
    }

    public static void a(Context context, String str, Map<String, Object> map, String str2) {
        a(context, str, map, str2, 0);
    }

    public static void a(Context context, String str, Map<String, Object> map, String str2, int i) {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(str2);
        Intent intent = new Intent(str2);
        intent.putExtra(Constants.BROADCAST_IDENTIFIER_KEY, str);
        if (map != null) {
            for (String str3 : map.keySet()) {
                try {
                    Object obj = map.get(str3);
                    if (obj instanceof Number) {
                        intent.putExtra(str3, (Number) obj);
                    } else {
                        intent.putExtra(str3, (String) obj);
                    }
                } catch (Throwable unused) {
                }
            }
        }
        ac acVarA = ac.a(context);
        if (acVarA != null) {
            try {
                acVarA.a(intent, i);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    protected abstract IntentFilter a();

    public void a(BroadcastReceiver broadcastReceiver) {
        ac acVarA = ac.a(com.sigmob.sdk.b.b());
        if (acVarA != null) {
            try {
                acVarA.a(broadcastReceiver, a());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    protected boolean a(Intent intent) {
        Preconditions.NoThrow.checkNotNull(intent);
        String stringExtra = intent.getStringExtra(Constants.BROADCAST_IDENTIFIER_KEY);
        return !TextUtils.isEmpty(stringExtra) && stringExtra.equalsIgnoreCase(this.a);
    }

    public void b(BroadcastReceiver broadcastReceiver) {
        ac acVarA;
        if (broadcastReceiver == null || (acVarA = ac.a(com.sigmob.sdk.b.b())) == null) {
            return;
        }
        try {
            acVarA.a(broadcastReceiver);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
