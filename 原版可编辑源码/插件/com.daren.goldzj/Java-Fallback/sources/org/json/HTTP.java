package org.json;

import java.util.Iterator;

public class HTTP {
    public static final String CRLF = "\r\n";

    public HTTP() {
    }

    public static JSONObject toJSONObject(String r5) throws JSONException {
        JSONObject r0 = new JSONObject();
        HTTPTokener r1 = new HTTPTokener(r5);
        String r52 = r1.nextToken();
        if (r52.toUpperCase().startsWith("HTTP") == false) goto L5;
        r0.put("HTTP-Version", r52);
        r0.put("Status-Code", r1.nextToken());
        r0.put("Reason-Phrase", r1.nextTo(0));
        r1.next();
    L7:
        if (r1.more() == false) goto L9;
        String r2 = r1.nextTo(':');
        r1.next(':');
        r0.put(r2, r1.nextTo(0));
        r1.next();
        goto L7
    L9:
        return r0;
    L5:
        r0.put("Method", r52);
        r0.put("Request-URI", r1.nextToken());
        r0.put("HTTP-Version", r1.nextToken());
        goto L7
    }

    public static String toString(JSONObject r10) throws JSONException {
        Iterator<String> r0 = r10.keys();
        StringBuilder r1 = new StringBuilder();
        if (r10.has("Status-Code") == false) goto L8;
        if (r10.has("Reason-Phrase") == false) goto L8;
        r1.append(r10.getString("HTTP-Version"));
        r1.append(' ');
        r1.append(r10.getString("Status-Code"));
        r1.append(' ');
        r1.append(r10.getString("Reason-Phrase"));
    L12:
        r1.append(CRLF);
    L14:
        if (r0.hasNext() == false) goto L28;
        String r8 = r0.next();
        if ("HTTP-Version".equals(r8) == true) goto L14;
        if ("Status-Code".equals(r8) == true) goto L14;
        if ("Reason-Phrase".equals(r8) == true) goto L14;
        if ("Method".equals(r8) == true) goto L14;
        if ("Request-URI".equals(r8) == true) goto L14;
        if (r10.isNull(r8) == true) goto L14;
        r1.append(r8);
        r1.append(": ");
        r1.append(r10.getString(r8));
        r1.append(CRLF);
        goto L14
    L28:
        r1.append(CRLF);
        return r1.toString();
    L8:
        if (r10.has("Method") == false) goto L31;
        if (r10.has("Request-URI") == false) goto L31;
        r1.append(r10.getString("Method"));
        r1.append(' ');
        r1.append('\"');
        r1.append(r10.getString("Request-URI"));
        r1.append('\"');
        r1.append(' ');
        r1.append(r10.getString("HTTP-Version"));
    L31:
        throw new JSONException("Not enough material for an HTTP header.");
    }
}
