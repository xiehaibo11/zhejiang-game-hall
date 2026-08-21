package com.bianfeng.addpermission.common;

import android.text.TextUtils;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class ConstantsUtils {
    public static ArrayList<String> toPermissionList(String str) {
        String[] strArrSplit = str.split(";");
        ArrayList<String> arrayList = new ArrayList<>();
        ArrayList<String> permissionStr = new Constants().getPermissionStr();
        for (String str2 : strArrSplit) {
            if (!str2.isEmpty()) {
                String str3 = permissionStr.get(Integer.valueOf(str2).intValue());
                if (!TextUtils.isEmpty(str3)) {
                    arrayList.add(str3);
                }
            }
        }
        return arrayList;
    }
}
