package com.kwad.sdk.core.report;

import android.content.Context;
import android.database.Cursor;
import com.kwad.sdk.service.ServiceProvider;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public class u extends e {
    private static volatile u asB;
    private final List<s> asC;

    private u(Context context) {
        super(new t(context, t.If));
        ArrayList arrayList = new ArrayList();
        this.asC = arrayList;
        arrayList.add(new l());
    }

    public static u bd(Context context) {
        if (asB == null) {
            synchronized (u.class) {
                if (asB == null) {
                    asB = new u(context);
                }
            }
        }
        return asB;
    }

    @Override
    private synchronized r g(Cursor cursor) {
        String string = cursor.getString(0);
        if (((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xM()) {
            String string2 = cursor.getString(1);
            r rVar = new r(string, false);
            rVar.actionId = string2;
            return rVar;
        }
        try {
            JSONObject jSONObject = new JSONObject(string);
            int size = this.asC.size() - 1;
            if (size >= 0) {
                return this.asC.get(size).h(jSONObject);
            }
            return new r(jSONObject);
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return new r("");
        }
    }

    @Override
    protected final String BV() {
        return "ksad_actions";
    }

    @Override
    protected final String BW() {
        return "select aLog, actionId from " + BV();
    }

    @Override
    protected final String getTag() {
        return "ReportActionDBManager";
    }
}
