package com.kwad.sdk.core.videocache;

import android.text.TextUtils;
import com.kwad.sdk.utils.ao;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes2.dex */
final class d {
    private static final Pattern awm = Pattern.compile("[R,r]ange:[ ]?bytes=(\\d*)-");
    private static final Pattern awn = Pattern.compile("GET /(.*) HTTP");
    public final long awo;
    public final boolean awp;
    public final String uri;

    private d(String str) {
        ao.fE(str);
        long jDL = dL(str);
        this.awo = Math.max(0L, jDL);
        this.awp = jDL >= 0;
        this.uri = dM(str);
    }

    public static d b(InputStream inputStream) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream, "UTF-8"));
        StringBuilder sb = new StringBuilder();
        while (true) {
            String line = bufferedReader.readLine();
            if (TextUtils.isEmpty(line)) {
                return new d(sb.toString());
            }
            sb.append(line);
            sb.append('\n');
        }
    }

    private static long dL(String str) {
        Matcher matcher = awm.matcher(str);
        if (matcher.find()) {
            return Long.parseLong(matcher.group(1));
        }
        return -1L;
    }

    private static String dM(String str) {
        Matcher matcher = awn.matcher(str);
        if (matcher.find()) {
            return matcher.group(1);
        }
        throw new IllegalArgumentException("Invalid request `" + str + "`: url not found!");
    }

    public final String toString() {
        return "GetRequest{rangeOffset=" + this.awo + ", partial=" + this.awp + ", uri='" + this.uri + "'}";
    }
}
