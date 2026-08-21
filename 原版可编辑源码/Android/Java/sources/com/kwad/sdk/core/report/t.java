package com.kwad.sdk.core.report;

import android.content.Context;

public final class t extends d {
    public static int If = 1;
    private static String asA = "CREATE TABLE IF NOT EXISTS ksad_actions (actionId varchar(60) primary key, aLog TEXT)";

    public t(Context context, int i) {
        super(context, "ksadrep.db", i, asA);
    }
}
