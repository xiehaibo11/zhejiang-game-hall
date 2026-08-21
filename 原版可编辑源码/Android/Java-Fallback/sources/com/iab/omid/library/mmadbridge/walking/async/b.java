package com.iab.omid.library.mmadbridge.walking.async;

public abstract class b extends android.os.AsyncTask<java.lang.Object, java.lang.Void, java.lang.String> {
    private com.iab.omid.library.mmadbridge.walking.async.b.a a;
    protected final com.iab.omid.library.mmadbridge.walking.async.b.b b;

    public interface a {
        void a(com.iab.omid.library.mmadbridge.walking.async.b r1);
    }

    public interface b {
        org.json.JSONObject a();

        void a(org.json.JSONObject r1);
    }

    public b(com.iab.omid.library.mmadbridge.walking.async.b.b r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    public void a(com.iab.omid.library.mmadbridge.walking.async.b.a r1) {
            r0 = this;
            r0.a = r1
            return
    }

    protected void a(java.lang.String r1) {
            r0 = this;
            com.iab.omid.library.mmadbridge.walking.async.b$a r1 = r0.a
            if (r1 == 0) goto L7
            r1.a(r0)
        L7:
            return
    }

    public void a(java.util.concurrent.ThreadPoolExecutor r2) {
            r1 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1.executeOnExecutor(r2, r0)
            return
    }

    @Override
    protected void onPostExecute(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            r0.a(r1)
            return
    }
}
