package com.tencent.open.b;

import android.os.Bundle;
import java.io.Serializable;
import java.util.HashMap;

/* JADX INFO: compiled from: ProGuard */
/* JADX INFO: loaded from: classes3.dex */
public class c implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap<String, String> f5499a;

    public c(Bundle bundle) {
        this.f5499a = new HashMap<>();
        if (bundle != null) {
            for (String str : bundle.keySet()) {
                this.f5499a.put(str, bundle.getString(str));
            }
        }
    }

    public c(HashMap<String, String> map) {
        this.f5499a = new HashMap<>(map);
    }

    public String toString() {
        return "BaseData{time=" + this.f5499a.get("time") + ", name=" + this.f5499a.get("interface_name") + '}';
    }
}
