package com.kwad.components.core.k;

import com.kwad.sdk.core.e.c;
import java.text.SimpleDateFormat;
import java.util.Date;

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    private static SimpleDateFormat Ld = new SimpleDateFormat("yyyy-MM-dd");
    public int Le;
    public long Lf;

    public final boolean h(int i, int i2) {
        c.d("AdForceActiveInfo", "checkAndAddCount forceActiveIntervalHour: " + i + ", forceActiveThreshold: " + i2);
        if (this.Lf <= 0) {
            oc();
            return true;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        String str = Ld.format(new Date(this.Lf));
        String str2 = Ld.format(new Date(jCurrentTimeMillis));
        c.d("AdForceActiveInfo", "checkAndAddCount lastDate: " + str + ", currentDate: " + str2);
        if (!str.equals(str2)) {
            this.Le = 0;
            oc();
            return true;
        }
        long j = this.Lf + (((long) i) * 60 * 60 * 1000);
        c.d("AdForceActiveInfo", "checkAndAddCount minTimestamp: " + j + ", currentActiveCount: " + this.Le);
        if (j >= jCurrentTimeMillis || this.Le > i2) {
            return false;
        }
        oc();
        return true;
    }

    public final void oc() {
        this.Lf = System.currentTimeMillis();
        this.Le++;
        c.d("AdForceActiveInfo", "doAddCount, lastForceActiveTimestamp: " + this.Lf + ", currentActiveCount " + this.Le);
    }
}
