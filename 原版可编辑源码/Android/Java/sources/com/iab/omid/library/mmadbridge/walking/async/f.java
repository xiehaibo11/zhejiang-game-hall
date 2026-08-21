package com.iab.omid.library.mmadbridge.walking.async;

import android.text.TextUtils;
import com.iab.omid.library.mmadbridge.walking.async.b;
import java.util.HashSet;
import org.json.JSONObject;

public class f extends a {
    public f(b.b bVar, HashSet<String> hashSet, JSONObject jSONObject, long j) {
        super(bVar, hashSet, jSONObject, j);
    }

    private void b(String str) {
        com.iab.omid.library.mmadbridge.internal.c cVarC = com.iab.omid.library.mmadbridge.internal.c.c();
        if (cVarC != null) {
            for (com.iab.omid.library.mmadbridge.adsession.a aVar : cVarC.b()) {
                if (this.c.contains(aVar.getAdSessionId())) {
                    aVar.getAdSessionStatePublisher().b(str, this.e);
                }
            }
        }
    }

    @Override
    protected String doInBackground(Object... objArr) {
        if (com.iab.omid.library.mmadbridge.utils.c.h(this.d, this.b.a())) {
            return null;
        }
        this.b.a(this.d);
        return this.d.toString();
    }

    @Override
    protected void onPostExecute(String str) {
        if (!TextUtils.isEmpty(str)) {
            b(str);
        }
        super.onPostExecute(str);
    }
}
