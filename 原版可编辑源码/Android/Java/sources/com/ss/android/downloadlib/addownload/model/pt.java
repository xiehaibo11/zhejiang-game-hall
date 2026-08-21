package com.ss.android.downloadlib.addownload.model;

import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import android.util.Pair;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.utils.b;
import com.tkay.expressad.foundation.g.a;
import java.util.Iterator;
import java.util.LinkedList;

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
    */
    public Pair<rg, Integer> df(com.ss.android.downloadad.api.rg.df dfVar) {
        int i;
        rg next;
        if (dfVar == null) {
            return null;
        }
        try {
            df();
            if (this.df.isEmpty()) {
                return null;
            }
            String strMs = dfVar.ms();
            String strPp = dfVar.pp();
            String strOy = dfVar.oy();
            int iG = dfVar.g();
            int length = pt.length;
            rg[] rgVarArr = new rg[length];
            synchronized (this.df) {
                Iterator<rg> it = this.df.iterator();
                PackageInfo packageInfoRg = null;
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    next = it.next();
                    if (next.pp >= dfVar.d()) {
                        if (TextUtils.isEmpty(strMs)) {
                            if (packageInfoRg == null) {
                                packageInfoRg = b.rg(dfVar);
                            }
                            if (packageInfoRg != null) {
                                try {
                                    strMs = (String) bm.getContext().getPackageManager().getApplicationLabel(packageInfoRg.applicationInfo);
                                } catch (Throwable unused) {
                                }
                            }
                        }
                        if (!TextUtils.isEmpty(strMs) && !TextUtils.isEmpty(next.pt)) {
                            strMs = strMs.toLowerCase();
                            if (strMs.equals(next.pt)) {
                                rgVarArr[0] = next;
                                break;
                            }
                            if (strMs.contains(next.pt) || next.pt.contains(strMs)) {
                                break;
                            }
                        }
                        if (TextUtils.isEmpty(strPp)) {
                            if (packageInfoRg == null) {
                                packageInfoRg = b.rg(dfVar);
                            }
                            if (packageInfoRg != null) {
                                strPp = packageInfoRg.packageName;
                            }
                        }
                        if (!TextUtils.isEmpty(strPp) && !TextUtils.isEmpty(next.rg)) {
                            strPp = strPp.toLowerCase();
                            if (strPp.contains(next.rg) || next.rg.contains(strPp)) {
                                break;
                            }
                            if (rgVarArr[3] == null) {
                                if (rg(strPp, next.rg)) {
                                    rgVarArr[3] = next;
                                }
                            }
                        }
                        if (rgVarArr[4] == null) {
                            if (TextUtils.isEmpty(strOy)) {
                                if (packageInfoRg == null) {
                                    packageInfoRg = b.rg(dfVar);
                                }
                                if (packageInfoRg != null) {
                                    strOy = packageInfoRg.versionName;
                                }
                            }
                            if (!TextUtils.isEmpty(strOy) && !TextUtils.isEmpty(next.q)) {
                                strOy = strOy.toLowerCase();
                                if (strOy.equals(next.q)) {
                                    rgVarArr[4] = next;
                                }
                            }
                            if (rgVarArr[5] == null) {
                                if (iG <= 0) {
                                    if (packageInfoRg == null) {
                                        packageInfoRg = b.rg(dfVar);
                                    }
                                    if (packageInfoRg != null) {
                                        iG = packageInfoRg.versionCode;
                                    }
                                }
                                if (iG == next.df) {
                                    rgVarArr[5] = next;
                                }
                            }
                        }
                    }
                }
                rgVarArr[2] = next;
            }
            for (i = 0; i < length; i++) {
                if (rgVarArr[i] != null) {
                    return new Pair<>(rgVarArr[i], Integer.valueOf(pt[i]));
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return null;
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
