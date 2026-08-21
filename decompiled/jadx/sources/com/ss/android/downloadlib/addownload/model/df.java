package com.ss.android.downloadlib.addownload.model;

import android.util.Pair;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class df {
    public String c;
    public long df;
    public String fw;
    public String pp;
    public String pt;
    public String q;
    public long rg;
    public String rz;
    public final List<Pair<String, String>> ux = new ArrayList();

    public static long rg(long j, long j2) {
        return j > 0 ? j : j2;
    }

    public long rg() {
        return rg(this.rg, this.df);
    }
}
