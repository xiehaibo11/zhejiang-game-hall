package com.kwad.sdk.crash.online.monitor.block.report;

import android.content.Context;
import android.database.Cursor;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.report.e;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class a extends e {
    public static int If = 1;
    private static volatile a aAS;

    private a(Context context) {
        super(new com.kwad.sdk.crash.online.monitor.block.a.a(context, If));
    }

    public static a bw(Context context) {
        if (aAS == null) {
            synchronized (a.class) {
                if (aAS == null) {
                    aAS = new a(context);
                }
            }
        }
        return aAS;
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // com.kwad.sdk.core.report.e
    /* JADX INFO: renamed from: j, reason: merged with bridge method [inline-methods] */
    public synchronized BlockReportAction g(Cursor cursor) {
        try {
        } catch (JSONException e) {
            c.printStackTrace(e);
            return new BlockReportAction("");
        }
        return new BlockReportAction(new JSONObject(cursor.getString(0)));
    }

    @Override // com.kwad.sdk.core.report.e
    public final String BV() {
        return "ksad_block_actions";
    }

    @Override // com.kwad.sdk.core.report.e
    public final String BW() {
        return "select aLog from " + BV();
    }

    @Override // com.kwad.sdk.core.report.e
    public final String getTag() {
        return "perfMonitor.BlockReportDBManager";
    }
}
