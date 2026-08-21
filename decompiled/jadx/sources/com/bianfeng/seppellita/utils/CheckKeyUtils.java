package com.bianfeng.seppellita.utils;

import android.text.TextUtils;
import com.tencent.open.SocialConstants;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class CheckKeyUtils {
    private static String[] keys = {SocialConstants.PARAM_ACT, "pg"};

    public static boolean check(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            Map<String, String> map = SeppellitaGsonUtils.getMap(str);
            for (String str2 : keys) {
                if (TextUtils.isEmpty(map.get(str2))) {
                    SeppellitaLogger.e("key--->" + str2);
                    return false;
                }
            }
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean check(Map<String, String> map) {
        if (map == null) {
            return false;
        }
        try {
            for (String str : keys) {
                if (TextUtils.isEmpty(map.get(str))) {
                    SeppellitaLogger.e("缺失的字段--->" + str);
                    return false;
                }
            }
            return true;
        } catch (Exception unused) {
            return false;
        }
    }
}
