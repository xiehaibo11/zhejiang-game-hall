package com.ss.android.downloadlib.addownload.model;

import android.content.SharedPreferences;
import com.ss.android.downloadlib.addownload.bm;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class ux {

    private static class rg {
        private static ux rg = new ux();
    }

    public static ux rg() {
        return rg.rg;
    }

    private ux() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public SharedPreferences q() {
        return bm.getContext().getSharedPreferences("sp_ad_download_event", 0);
    }

    ConcurrentHashMap<Long, com.ss.android.downloadad.api.rg.df> df() {
        ConcurrentHashMap<Long, com.ss.android.downloadad.api.rg.df> concurrentHashMap = new ConcurrentHashMap<>();
        Map<String, ?> all = q().getAll();
        if (all == null) {
            return concurrentHashMap;
        }
        for (Map.Entry<String, ?> entry : all.entrySet()) {
            if (entry.getValue() != null) {
                try {
                    long jLongValue = Long.valueOf(entry.getKey()).longValue();
                    com.ss.android.downloadad.api.rg.df dfVarDf = com.ss.android.downloadad.api.rg.df.df(new JSONObject(String.valueOf(entry.getValue())));
                    if (jLongValue > 0 && dfVarDf != null) {
                        concurrentHashMap.put(Long.valueOf(jLongValue), dfVarDf);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
        return concurrentHashMap;
    }

    public void rg(com.ss.android.downloadad.api.rg.df dfVar) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(dfVar);
        rg((Collection<com.ss.android.downloadad.api.rg.df>) arrayList);
    }

    public synchronized void rg(final Collection<com.ss.android.downloadad.api.rg.df> collection) {
        if (collection != null) {
            if (!collection.isEmpty()) {
                com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.addownload.model.ux.1
                    @Override // java.lang.Runnable
                    public void run() {
                        SharedPreferences.Editor editorEdit = ux.this.q().edit();
                        for (com.ss.android.downloadad.api.rg.df dfVar : collection) {
                            if (dfVar != null && dfVar.df() != 0) {
                                editorEdit.putString(String.valueOf(dfVar.df()), dfVar.yw().toString());
                            }
                        }
                        editorEdit.apply();
                    }
                }, true);
            }
        }
    }

    public void rg(final List<String> list) {
        if (list == null || list.isEmpty()) {
            return;
        }
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.addownload.model.ux.2
            @Override // java.lang.Runnable
            public void run() {
                SharedPreferences.Editor editorEdit = ux.this.q().edit();
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    editorEdit.remove((String) it.next());
                }
                editorEdit.apply();
            }
        }, true);
    }
}
