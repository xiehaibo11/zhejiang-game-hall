package com.iab.omid.library.mmadbridge.walking.async;

public class f extends com.iab.omid.library.mmadbridge.walking.async.a {
    public f(com.iab.omid.library.mmadbridge.walking.async.b.b r1, java.util.HashSet<java.lang.String> r2, org.json.JSONObject r3, long r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    private void b(java.lang.String r5) {
            r4 = this;
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            if (r0 == 0) goto L30
            java.util.Collection r0 = r0.b()
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.a r1 = (com.iab.omid.library.mmadbridge.adsession.a) r1
            java.util.HashSet<java.lang.String> r2 = r4.c
            java.lang.String r3 = r1.getAdSessionId()
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto Le
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r1 = r1.getAdSessionStatePublisher()
            long r2 = r4.e
            r1.b(r5, r2)
            goto Le
        L30:
            return
    }

    protected java.lang.String a(java.lang.Object... r2) {
            r1 = this;
            org.json.JSONObject r2 = r1.d
            com.iab.omid.library.mmadbridge.walking.async.b$b r0 = r1.b
            org.json.JSONObject r0 = r0.a()
            boolean r2 = com.iab.omid.library.mmadbridge.utils.c.h(r2, r0)
            if (r2 == 0) goto L10
            r2 = 0
            return r2
        L10:
            com.iab.omid.library.mmadbridge.walking.async.b$b r2 = r1.b
            org.json.JSONObject r0 = r1.d
            r2.a(r0)
            org.json.JSONObject r2 = r1.d
            java.lang.String r2 = r2.toString()
            return r2
    }

    @Override
    protected void a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L9
            r1.b(r2)
        L9:
            super.a(r2)
            return
    }

    @Override
    protected java.lang.String doInBackground(java.lang.Object[] r1) {
            r0 = this;
            java.lang.String r1 = r0.a(r1)
            return r1
    }

    @Override
    protected void onPostExecute(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            r0.a(r1)
            return
    }
}
