package com.iab.omid.library.mmadbridge.walking;

import com.iab.omid.library.mmadbridge.walking.async.b;
import com.iab.omid.library.mmadbridge.walking.async.d;
import com.iab.omid.library.mmadbridge.walking.async.e;
import com.iab.omid.library.mmadbridge.walking.async.f;
import java.util.HashSet;
import org.json.JSONObject;

public class b implements b.b {
    private JSONObject a;
    private final com.iab.omid.library.mmadbridge.walking.async.c b;

    public b(com.iab.omid.library.mmadbridge.walking.async.c cVar) {
        this.b = cVar;
    }

    @Override
    public JSONObject a() {
        return this.a;
    }

    @Override
    public void a(JSONObject jSONObject) {
        this.a = jSONObject;
    }

    public void a(JSONObject jSONObject, HashSet<String> hashSet, long j) {
        this.b.b(new e(this, hashSet, jSONObject, j));
    }

    public void b() {
        this.b.b(new d(this));
    }

    public void b(JSONObject jSONObject, HashSet<String> hashSet, long j) {
        this.b.b(new f(this, hashSet, jSONObject, j));
    }
}
