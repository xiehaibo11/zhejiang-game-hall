package com.ss.android.downloadlib.addownload.model;

import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import com.ss.android.downloadlib.addownload.bm;
import com.tkay.expressad.foundation.g.a;
import java.util.Iterator;
import java.util.LinkedList;

/* JADX INFO: loaded from: classes3.dex */
public class pt {
    private static volatile pt rg;
    private final LinkedList<rg> df = new LinkedList<>();
    private static final String[] q = {"com", "android", a.ac};
    private static final int[] pt = {3101, 3102, 3103, 3201, 3202, 3203};

    private pt() {
    }

    public static pt rg() {
        if (rg == null) {
            synchronized (pt.class) {
                if (rg == null) {
                    rg = new pt();
                }
            }
        }
        return rg;
    }

    public void rg(String str) {
        rg rgVarQ;
        df();
        if (TextUtils.isEmpty(str) || (rgVarQ = q(str)) == null) {
            return;
        }
        synchronized (this.df) {
            this.df.add(rgVarQ);
        }
    }

    public void df(String str) {
        df();
        if (TextUtils.isEmpty(str)) {
            return;
        }
        synchronized (this.df) {
            Iterator<rg> it = this.df.iterator();
            while (it.hasNext()) {
                if (str.equals(it.next().rg)) {
                    it.remove();
                    return;
                }
            }
        }
    }

    public rg rg(com.ss.android.downloadad.api.rg.df dfVar) {
        if (dfVar == null) {
            return null;
        }
        df();
        synchronized (this.df) {
            for (rg rgVar : this.df) {
                if (rgVar.pp > dfVar.d()) {
                    return rgVar;
                }
            }
            return null;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:34:0x0096, code lost:
    
        r7[1] = r11;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public android.util.Pair<com.ss.android.downloadlib.addownload.model.pt.rg, java.lang.Integer> df(com.ss.android.downloadad.api.rg.df r18) {
        /*
            Method dump skipped, instruction units count: 343
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.downloadlib.addownload.model.pt.df(com.ss.android.downloadad.api.rg.df):android.util.Pair");
    }

    private void df() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        synchronized (this.df) {
            Iterator<rg> it = this.df.iterator();
            while (it.hasNext() && jCurrentTimeMillis - it.next().pp > 1800000) {
                it.remove();
            }
        }
    }

    private rg q(String str) {
        try {
            PackageManager packageManager = bm.getContext().getPackageManager();
            PackageInfo packageInfo = packageManager.getPackageInfo(str, 0);
            if (packageInfo != null) {
                return new rg(str, packageInfo.versionCode, packageInfo.versionName, (String) packageManager.getApplicationLabel(packageInfo.applicationInfo), System.currentTimeMillis());
            }
            return null;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    private static boolean rg(String str, String str2) {
        String[] strArrSplit;
        String[] strArrSplit2;
        boolean z;
        try {
            strArrSplit = str.split("\\.");
            strArrSplit2 = str2.split("\\.");
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (strArrSplit.length != 0 && strArrSplit2.length != 0) {
            int i = 0;
            int i2 = 0;
            for (String str3 : strArrSplit) {
                String[] strArr = q;
                int length = strArr.length;
                int i3 = 0;
                while (true) {
                    if (i3 >= length) {
                        z = false;
                        break;
                    }
                    String str4 = strArr[i3];
                    if (str4.equals(str3)) {
                        if (i < strArrSplit2.length && str4.equals(strArrSplit2[i])) {
                            i++;
                        }
                        z = true;
                    } else {
                        i3++;
                    }
                }
                if (!z) {
                    int i4 = i2;
                    int i5 = i;
                    while (i < strArrSplit2.length) {
                        if (str3.equals(strArrSplit2[i])) {
                            if (i == i5) {
                                i5++;
                            }
                            i4++;
                            if (i4 >= 2) {
                                return true;
                            }
                        }
                        i++;
                    }
                    i = i5;
                    i2 = i4;
                }
            }
            return false;
        }
        return false;
    }

    public static class rg {
        public final int df;
        public final long pp;
        public final String pt;
        public final String q;
        public final String rg;

        private rg(String str, int i, String str2, String str3, long j) {
            this.rg = str;
            this.df = i;
            this.q = str2 != null ? str2.toLowerCase() : null;
            this.pt = str3 != null ? str3.toLowerCase() : null;
            this.pp = j;
        }
    }
}
