package com.bianfeng.paylib.utils;

import android.app.Activity;
import com.bianfeng.paylib.alipaysdk.OnPayListener;
import com.bianfeng.paylib.alipaysdk.PaySdk;
import com.bianfeng.paylib.alipaysdk.util.Base64;
import com.bianfeng.paylib.entity.AliPayEntity;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class AliPayUtils {
    public static void pay(Activity activity, String str) {
        PaySdk.pay(activity, new String(Base64.decode(((AliPayEntity) ThridSdk.getGson().fromJson(str, AliPayEntity.class)).getToken())), new OnPayListener() { // from class: com.bianfeng.paylib.utils.AliPayUtils.1
            @Override // com.bianfeng.paylib.alipaysdk.OnPayListener
            public void onSuccess(String str2) {
                UtilsSdk.getLogger().i("AliPayUtilsonSuccess");
            }

            @Override // com.bianfeng.paylib.alipaysdk.OnPayListener
            public void onFailure(int i, String str2) {
                UtilsSdk.getLogger().i("AliPayUtilsonFailure" + i + "|" + str2);
            }
        });
    }
}
