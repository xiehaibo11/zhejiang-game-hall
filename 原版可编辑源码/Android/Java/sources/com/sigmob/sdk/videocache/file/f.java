package com.sigmob.sdk.videocache.file;

import android.text.TextUtils;
import com.sigmob.sdk.videocache.q;

public class f implements c {
    private static final int a = 4;

    private String b(String str) {
        int iLastIndexOf = str.lastIndexOf(46);
        return (iLastIndexOf == -1 || iLastIndexOf <= str.lastIndexOf(47) || (iLastIndexOf + 2) + 4 <= str.length()) ? "" : str.substring(iLastIndexOf + 1, str.length());
    }

    @Override
    public String a(String str) {
        String strB = b(str);
        String strD = q.d(str);
        if (TextUtils.isEmpty(strB)) {
            return strD;
        }
        return strD + "." + strB;
    }
}
