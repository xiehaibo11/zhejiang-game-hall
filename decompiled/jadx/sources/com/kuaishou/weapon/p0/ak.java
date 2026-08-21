package com.kuaishou.weapon.p0;

import android.content.Context;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public class ak {
    public static boolean a(Context context) {
        try {
            if (!g.a(context, new String[]{g.i})) {
                return false;
            }
            String[] strArr = {"/storage/emulated/0/DCIM/Camera/virtual.mp4", "/storage/emulated/0/DCIM/Camera1/virtual.mp4"};
            for (int i = 0; i < 2; i++) {
                if (new File(strArr[i]).exists()) {
                    return true;
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }
}
