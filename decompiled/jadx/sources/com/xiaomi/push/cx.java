package com.xiaomi.push;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes4.dex */
class cx extends cr {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    cr f8094a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ cv f211a;
    final /* synthetic */ cr b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cx(cv cvVar, String str, cr crVar) {
        super(str);
        this.f211a = cvVar;
        this.b = crVar;
        this.f8094a = this.b;
        this.f197b = this.f197b;
        cr crVar2 = this.b;
        if (crVar2 != null) {
            this.f = crVar2.f;
        }
    }

    @Override // com.xiaomi.push.cr
    public synchronized ArrayList<String> a(boolean z) {
        ArrayList<String> arrayList;
        arrayList = new ArrayList<>();
        if (this.f8094a != null) {
            arrayList.addAll(this.f8094a.a(true));
        }
        synchronized (cv.b) {
            cr crVar = cv.b.get(this.f197b);
            if (crVar != null) {
                for (String str : crVar.a(true)) {
                    if (arrayList.indexOf(str) == -1) {
                        arrayList.add(str);
                    }
                }
                arrayList.remove(this.f197b);
                arrayList.add(this.f197b);
            }
        }
        return arrayList;
    }

    @Override // com.xiaomi.push.cr
    public synchronized void a(String str, cq cqVar) {
        if (this.f8094a != null) {
            this.f8094a.a(str, cqVar);
        }
    }

    @Override // com.xiaomi.push.cr
    public boolean b() {
        return false;
    }
}
