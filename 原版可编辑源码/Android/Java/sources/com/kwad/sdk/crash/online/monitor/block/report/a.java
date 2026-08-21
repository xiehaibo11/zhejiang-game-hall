package com.kwad.sdk.crash.online.monitor.block.report;

import android.content.Context;
import android.database.Cursor;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.report.e;
import org.json.JSONException;
import org.json.JSONObject;

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

    @Override
    private synchronized BlockReportAction g(Cursor cursor) {
        try {
        } catch (JSONException e) {
            c.printStackTrace(e);
            return new BlockReportAction("");
        }
        return new BlockReportAction(new JSONObject(cursor.getString(0)));
    }

    @Override
    public final String BV() {
        return "ksad_block_actions";
    }

    @Override
    public final String BW() {
        return "select aLog from " + BV();
    }

    @Override
    public final String getTag() {
        return "perfMonitor.BlockReportDBManager";
    }
}
