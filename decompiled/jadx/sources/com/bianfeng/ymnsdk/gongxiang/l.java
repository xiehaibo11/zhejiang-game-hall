package com.bianfeng.ymnsdk.gongxiang;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent;
import com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger;
import com.igexin.sdk.PushConsts;

/* JADX INFO: compiled from: PluginEventMap.java */
/* JADX INFO: loaded from: classes.dex */
public class l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static volatile l f1474a;

    public static l a() {
        if (f1474a == null) {
            synchronized (l.class) {
                if (f1474a == null) {
                    f1474a = new l();
                }
            }
        }
        return f1474a;
    }

    private void a(int i, String str, String str2, String str3, String str4, String str5, int i2, String str6, String str7) {
        com.bianfeng.ymnsdk.ymndatalib.f.a().a(new BaseEvent(new com.bianfeng.ymnsdk.ymndatalib.e(new ResponseDataUtils(i2, str6, 0L), str, str3, str4, str5, str7), i, str2).toString());
    }

    public void a(String str, String str2, String str3, String str4, int i, String str5, String str6) {
        String strA = com.bianfeng.ymnsdk.ymndatalib.h.b().a(str);
        if (!TextUtils.isEmpty(strA)) {
            try {
                a(30899, TraceUtils.getInstance().getPluginTrace(strA), strA, str2, str3, str4, i, str5, str6);
            } catch (Exception e) {
            }
        } else {
            YmnDatalibLogger.i("不在白名单" + str);
        }
    }

    public void a(String str, String str2, String str3, String str4, String str5) {
        YmnDatalibLogger.i("测试：" + str);
        String strA = com.bianfeng.ymnsdk.ymndatalib.h.b().a(str);
        if (TextUtils.isEmpty(strA)) {
            YmnDatalibLogger.i("不在白名单" + str);
            return;
        }
        try {
            a(PushConsts.ALIAS_ERROR_FREQUENCY, TraceUtils.getInstance().getStartPluginTrace(strA), strA, str2, str3, str4, 0, str5, "");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
