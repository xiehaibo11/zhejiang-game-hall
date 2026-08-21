package com.bianfeng.ymnsdk.ymndatalib.utils;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class RstMsgSplitUtils {
    public static String[] split(String str) {
        String[] strArr = new String[2];
        if (TextUtils.isEmpty(str)) {
            strArr[0] = "0";
            strArr[1] = "";
            return strArr;
        }
        if (!str.contains("\\|")) {
            strArr[0] = "0";
            strArr[1] = str + "";
            return strArr;
        }
        StringBuilder sb = new StringBuilder();
        String[] strArrSplit = str.split("\\|");
        int i = 0;
        for (int length = strArrSplit.length - 1; length >= 0; length--) {
            try {
                i = Integer.parseInt(strArrSplit[length]);
            } catch (Exception e) {
                sb.append("|");
                sb.append(strArrSplit[length]);
            }
        }
        strArr[0] = i + "";
        try {
            strArr[1] = sb.substring(1) + "";
        } catch (Exception e2) {
            strArr[1] = sb.toString() + "";
        }
        return strArr;
    }
}
