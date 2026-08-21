package com.kwai.adclient.kscommerciallogger.snapshot;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Objects;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class c {
    private final String aNH;
    private final LinkedList<d> aNI;
    private int aNJ;
    private final int aNK;
    private long aNL;

    c(String str) {
        this(str, 10);
    }

    c(String str, int i) {
        this.aNH = str == null ? "" : str;
        this.aNI = new LinkedList<>();
        this.aNK = Math.min(i, 30);
        this.aNL = System.currentTimeMillis();
    }

    public final synchronized long Lk() {
        return this.aNL;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        return this.aNH.equals(((c) obj).aNH);
    }

    public synchronized d gb(String str) {
        d dVar;
        if (this.aNI.size() >= this.aNK) {
            this.aNI.removeFirst();
        }
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append("_");
        int i = this.aNJ;
        this.aNJ = i + 1;
        sb.append(i);
        dVar = new d(sb.toString());
        this.aNI.addLast(dVar);
        this.aNL = System.currentTimeMillis();
        return dVar;
    }

    synchronized JSONObject gc(String str) {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        try {
            JSONArray jSONArray = new JSONArray();
            Iterator<d> it = this.aNI.iterator();
            while (it.hasNext()) {
                jSONArray.put(it.next().Lj());
            }
            jSONObject.put("session_id", str);
            jSONObject.put("segment_name", this.aNH);
            jSONObject.put("spans", jSONArray);
            this.aNL = System.currentTimeMillis();
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    final String getName() {
        return this.aNH;
    }

    public int hashCode() {
        return Objects.hash(this.aNH);
    }
}
