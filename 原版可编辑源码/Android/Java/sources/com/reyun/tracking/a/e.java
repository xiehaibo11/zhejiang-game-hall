package com.reyun.tracking.a;

import com.reyun.tracking.sdk.Tracking;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.HashMap;
import java.util.Locale;
import org.json.JSONArray;

class e implements Runnable {
    final d a;

    e(d dVar) {
        this.a = dVar;
    }

    @Override
    public void run() {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault());
        JSONArray jSONArray = this.a.g == null ? new JSONArray() : this.a.g.c();
        HashMap map = new HashMap();
        map.put("gyroStartTime", simpleDateFormat.format(new Date(this.a.f)));
        map.put("gyroEndTime", simpleDateFormat.format(new Date()));
        map.put("gyroData", jSONArray);
        Tracking.setEvent("gyroDataEvent", map);
    }
}
