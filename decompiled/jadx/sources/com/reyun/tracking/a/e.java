package com.reyun.tracking.a;

import com.reyun.tracking.sdk.Tracking;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.HashMap;
import java.util.Locale;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes3.dex */
class e implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ d f4700a;

    e(d dVar) {
        this.f4700a = dVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault());
        JSONArray jSONArray = this.f4700a.g == null ? new JSONArray() : this.f4700a.g.c();
        HashMap map = new HashMap();
        map.put("gyroStartTime", simpleDateFormat.format(new Date(this.f4700a.f)));
        map.put("gyroEndTime", simpleDateFormat.format(new Date()));
        map.put("gyroData", jSONArray);
        Tracking.setEvent("gyroDataEvent", map);
    }
}
