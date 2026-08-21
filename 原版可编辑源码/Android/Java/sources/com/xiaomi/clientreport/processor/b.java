package com.xiaomi.clientreport.processor;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.clientreport.data.PerfClientReport;
import com.xiaomi.push.bt;
import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

public class b implements IPerfProcessor {
    protected Context a;
    private HashMap<String, HashMap<String, com.xiaomi.clientreport.data.a>> a;

    public b(Context context) {
        this.a = context;
    }

    public static String a(com.xiaomi.clientreport.data.a aVar) {
        return String.valueOf(aVar.production) + "#" + aVar.clientInterfaceId;
    }

    private String b(com.xiaomi.clientreport.data.a aVar) {
        String str;
        int i = aVar.production;
        String str2 = aVar.clientInterfaceId;
        if (i <= 0 || TextUtils.isEmpty(str2)) {
            str = "";
        } else {
            str = String.valueOf(i) + "#" + str2;
        }
        File externalFilesDir = this.a.getExternalFilesDir("perf");
        if (externalFilesDir == null) {
            com.xiaomi.channel.commonutils.logger.b.d("cannot get folder when to write perf");
            return null;
        }
        if (!externalFilesDir.exists()) {
            externalFilesDir.mkdirs();
        }
        return new File(externalFilesDir, str).getAbsolutePath();
    }

    private String c(com.xiaomi.clientreport.data.a aVar) {
        String strB = b(aVar);
        if (TextUtils.isEmpty(strB)) {
            return null;
        }
        for (int i = 0; i < 20; i++) {
            String str = strB + i;
            if (bt.a(this.a, str)) {
                return str;
            }
        }
        return null;
    }

    @Override
    public void a() throws Throwable {
        bt.a(this.a, "perf", "perfUploading");
        File[] fileArrA = bt.a(this.a, "perfUploading");
        if (fileArrA == null || fileArrA.length <= 0) {
            return;
        }
        for (File file : fileArrA) {
            if (file != null) {
                List<String> listA = e.a(this.a, file.getAbsolutePath());
                file.delete();
                a(listA);
            }
        }
    }

    @Override
    public void a(com.xiaomi.clientreport.data.a aVar) {
        if ((aVar instanceof PerfClientReport) && this.a != null) {
            PerfClientReport perfClientReport = (PerfClientReport) aVar;
            String strA = a((com.xiaomi.clientreport.data.a) perfClientReport);
            String strA2 = e.a(perfClientReport);
            HashMap<String, com.xiaomi.clientreport.data.a> map = this.a.get(strA);
            if (map == null) {
                map = new HashMap<>();
            }
            PerfClientReport perfClientReport2 = (PerfClientReport) map.get(strA2);
            if (perfClientReport2 != null) {
                perfClientReport.perfCounts += perfClientReport2.perfCounts;
                perfClientReport.perfLatencies += perfClientReport2.perfLatencies;
            }
            map.put(strA2, perfClientReport);
            this.a.put(strA, map);
        }
    }

    public void a(List<String> list) {
        bt.a(this.a, list);
    }

    public void a(com.xiaomi.clientreport.data.a[] aVarArr) {
        String strC = c(aVarArr[0]);
        if (TextUtils.isEmpty(strC)) {
            return;
        }
        e.a(strC, aVarArr);
    }

    @Override
    public void b() {
        HashMap<String, HashMap<String, com.xiaomi.clientreport.data.a>> map = this.a;
        if (map == null) {
            return;
        }
        if (map.size() > 0) {
            Iterator<String> it = this.a.keySet().iterator();
            while (it.hasNext()) {
                HashMap<String, com.xiaomi.clientreport.data.a> map2 = this.a.get(it.next());
                if (map2 != null && map2.size() > 0) {
                    com.xiaomi.clientreport.data.a[] aVarArr = new com.xiaomi.clientreport.data.a[map2.size()];
                    map2.values().toArray(aVarArr);
                    a(aVarArr);
                }
            }
        }
        this.a.clear();
    }

    @Override
    public void setPerfMap(HashMap<String, HashMap<String, com.xiaomi.clientreport.data.a>> map) {
        this.a = map;
    }
}
