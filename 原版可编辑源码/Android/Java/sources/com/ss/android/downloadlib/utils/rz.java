package com.ss.android.downloadlib.utils;

import android.text.TextUtils;
import com.ss.android.downloadlib.activity.TTDelegateActivity;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

public class rz {
    private static Map<String, rg> rg = Collections.synchronizedMap(new HashMap());

    public interface rg {
        void rg();

        void rg(String str);
    }

    public static void rg(String[] strArr, rg rgVar) {
        if (strArr == null || strArr.length <= 0) {
            return;
        }
        String strValueOf = String.valueOf(System.currentTimeMillis());
        rg(strValueOf, rgVar);
        TTDelegateActivity.rg(strValueOf, strArr);
    }

    public static void rg(String str) {
        rg rgVarQ;
        if (TextUtils.isEmpty(str) || (rgVarQ = q(str)) == null) {
            return;
        }
        rgVarQ.rg();
    }

    public static void rg(String str, String str2) {
        rg rgVarQ;
        if (TextUtils.isEmpty(str) || (rgVarQ = q(str)) == null) {
            return;
        }
        rgVarQ.rg(str2);
    }

    private static void rg(String str, rg rgVar) {
        if (TextUtils.isEmpty(str) || rgVar == null) {
            return;
        }
        rg.put(str, rgVar);
    }

    private static rg q(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return rg.remove(str);
    }

    public static boolean df(String str) {
        return com.ss.android.downloadlib.addownload.bm.pp().rg(com.ss.android.downloadlib.addownload.bm.getContext(), str);
    }
}
