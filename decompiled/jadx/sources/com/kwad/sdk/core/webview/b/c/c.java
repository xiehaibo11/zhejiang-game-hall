package com.kwad.sdk.core.webview.b.c;

import com.loopj.android.http.RequestParams;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private static final List<String> ayS;

    static {
        ArrayList arrayList = new ArrayList();
        ayS = arrayList;
        arrayList.add("application/x-javascript");
        ayS.add("image/jpeg");
        ayS.add("image/tiff");
        ayS.add("text/css");
        ayS.add("text/html");
        ayS.add("image/gif");
        ayS.add("image/png");
        ayS.add("application/javascript");
        ayS.add("video/mp4");
        ayS.add("audio/mpeg");
        ayS.add(RequestParams.APPLICATION_JSON);
        ayS.add("image/webp");
        ayS.add("image/apng");
        ayS.add("image/svg+xml");
        ayS.add("application/octet-stream");
    }

    public static boolean ej(String str) {
        return ayS.contains(str);
    }
}
