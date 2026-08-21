package com.ss.android.downloadlib.addownload.compliance;

import com.ss.android.socialbase.downloader.utils.LruCache;

public class q extends LruCache<Long, com.ss.android.downloadlib.addownload.model.df> {

    private static class rg {
        private static q rg = new q();
    }

    public static q rg() {
        return rg.rg;
    }

    private q() {
        super(16, 16);
    }

    public void rg(com.ss.android.downloadlib.addownload.model.df dfVar) {
        if (dfVar == null) {
            return;
        }
        put(Long.valueOf(dfVar.rg()), dfVar);
    }

    public com.ss.android.downloadlib.addownload.model.df rg(long j, long j2) {
        return (com.ss.android.downloadlib.addownload.model.df) get(get(Long.valueOf(j)) != null ? Long.valueOf(j) : Long.valueOf(j2));
    }

    public com.ss.android.downloadlib.addownload.model.df rg(long j) {
        return (com.ss.android.downloadlib.addownload.model.df) get(Long.valueOf(j));
    }
}
