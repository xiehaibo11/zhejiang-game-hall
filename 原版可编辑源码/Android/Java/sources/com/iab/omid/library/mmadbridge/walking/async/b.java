package com.iab.omid.library.mmadbridge.walking.async;

import android.os.AsyncTask;
import java.util.concurrent.ThreadPoolExecutor;
import org.json.JSONObject;

public abstract class b extends AsyncTask<Object, Void, String> {
    private a a;
    protected final b b;

    public interface a {
        void a(b bVar);
    }

    public interface b {
        JSONObject a();

        void a(JSONObject jSONObject);
    }

    public b(b bVar) {
        this.b = bVar;
    }

    public void a(a aVar) {
        this.a = aVar;
    }

    @Override
    protected void onPostExecute(String str) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(this);
        }
    }

    public void a(ThreadPoolExecutor threadPoolExecutor) {
        executeOnExecutor(threadPoolExecutor, new Object[0]);
    }
}
