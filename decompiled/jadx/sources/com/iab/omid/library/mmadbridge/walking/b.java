package com.iab.omid.library.mmadbridge.walking;

import com.iab.omid.library.mmadbridge.walking.async.b;
import com.iab.omid.library.mmadbridge.walking.async.d;
import com.iab.omid.library.mmadbridge.walking.async.e;
import com.iab.omid.library.mmadbridge.walking.async.f;
import java.util.HashSet;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class b implements b.InterfaceC0090b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private JSONObject f2401a;
    private final com.iab.omid.library.mmadbridge.walking.async.c b;

    public b(com.iab.omid.library.mmadbridge.walking.async.c cVar) {
        this.b = cVar;
    }

    @Override // com.iab.omid.library.mmadbridge.walking.async.b.InterfaceC0090b
    public JSONObject a() {
        return this.f2401a;
    }

    @Override // com.iab.omid.library.mmadbridge.walking.async.b.InterfaceC0090b
    public void a(JSONObject jSONObject) {
        this.f2401a = jSONObject;
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
