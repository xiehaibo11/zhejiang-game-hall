package com.kwad.components.core.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.tkay.core.common.l;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class g implements h, Comparable<g> {
    private final String ID;
    private final String IK;
    private final String IL;
    private final String IM;
    private final long IN;
    private final long createTime;
    private final int ecpm;

    private g(String str, String str2, String str3, int i, String str4, long j, long j2) {
        this.IK = str;
        this.ID = str2;
        this.IL = str3;
        this.ecpm = i;
        this.IM = str4;
        this.createTime = j;
        this.IN = j2;
    }

    public static List<g> a(Cursor cursor) {
        if (cursor == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        while (cursor.moveToNext()) {
            try {
                arrayList.add(c(cursor));
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        return arrayList;
    }

    public static List<g> a(e eVar, AdResultData adResultData) {
        List<AdTemplate> proceedTemplateList = adResultData.getProceedTemplateList();
        int size = proceedTemplateList.size();
        long jCurrentTimeMillis = System.currentTimeMillis();
        long jMs = (jCurrentTimeMillis / 1000) + eVar.ms();
        ArrayList arrayList = new ArrayList();
        SceneImpl defaultAdScene = adResultData.getDefaultAdScene();
        Iterator<AdTemplate> it = proceedTemplateList.iterator();
        while (it.hasNext()) {
            AdTemplate next = it.next();
            arrayList.add(new g(String.valueOf(com.kwad.sdk.core.response.b.d.cq(next)), String.valueOf(adResultData.getPosId()), new AdResultData(adResultData, defaultAdScene, Collections.singletonList(next)).getResponseJson(), com.kwad.sdk.core.response.b.d.cv(next), adResultData.getDefaultAdScene().toJson().toString(), jCurrentTimeMillis + ((long) size), jMs));
            size--;
            it = it;
            defaultAdScene = defaultAdScene;
        }
        return arrayList;
    }

    private static synchronized g c(Cursor cursor) {
        return new g(cursor.getString(cursor.getColumnIndex("creativeId")), cursor.getString(cursor.getColumnIndex("posId")), cursor.getString(cursor.getColumnIndex("adJson")), cursor.getInt(cursor.getColumnIndex(l.D)), cursor.getString(cursor.getColumnIndex("adSenseJson")), cursor.getLong(cursor.getColumnIndex("createTime")), cursor.getLong(cursor.getColumnIndex("expireTime")));
    }

    private static AdResultData c(g gVar) {
        if (gVar == null) {
            return null;
        }
        if (gVar.mw() == null || gVar.mA() == null) {
            com.kwad.sdk.core.e.c.w("CachedAd", "createAdResultData cachedAd data illegal");
            return null;
        }
        try {
            String strMA = gVar.mA();
            SceneImpl sceneImpl = new SceneImpl();
            sceneImpl.parseJson(new JSONObject(strMA));
            AdResultData adResultDataCreateFromResponseJson = AdResultData.createFromResponseJson(gVar.mw(), sceneImpl);
            Iterator<AdTemplate> it = adResultDataCreateFromResponseJson.getProceedTemplateList().iterator();
            while (it.hasNext()) {
                it.next().fromCache = true;
            }
            return adResultDataCreateFromResponseJson;
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: d, reason: merged with bridge method [inline-methods] */
    public int compareTo(g gVar) {
        return gVar.mx() == mx() ? (int) (gVar.my() - my()) : gVar.mx() - mx();
    }

    public static AdResultData i(List<g> list) {
        ArrayList arrayList = new ArrayList();
        AdResultData adResultDataC = null;
        if (list == null || list.size() == 0) {
            return null;
        }
        Iterator<g> it = list.iterator();
        SceneImpl defaultAdScene = null;
        while (it.hasNext()) {
            adResultDataC = c(it.next());
            if (adResultDataC != null) {
                if (defaultAdScene == null) {
                    defaultAdScene = adResultDataC.getDefaultAdScene();
                }
                arrayList.addAll(adResultDataC.getProceedTemplateList());
            }
        }
        return new AdResultData(adResultDataC, defaultAdScene, arrayList);
    }

    private String mA() {
        return this.IM;
    }

    private String mw() {
        return this.IL;
    }

    private int mx() {
        return this.ecpm;
    }

    private long my() {
        return this.createTime;
    }

    public final String mB() {
        return this.IK;
    }

    @Override // com.kwad.components.core.c.h
    public final ContentValues mt() {
        ContentValues contentValues = new ContentValues();
        contentValues.put("creativeId", this.IK);
        contentValues.put("posId", this.ID);
        contentValues.put("adJson", this.IL);
        contentValues.put(l.D, Integer.valueOf(this.ecpm));
        contentValues.put("adSenseJson", this.IM);
        contentValues.put("createTime", Long.valueOf(this.createTime));
        contentValues.put("expireTime", Long.valueOf(this.IN));
        contentValues.put("playAgainJson", (String) null);
        return contentValues;
    }

    public final String mv() {
        return this.ID;
    }

    public final long mz() {
        return this.IN;
    }
}
