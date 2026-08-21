package com.xiaomi.push;

import java.util.ArrayList;

class cx extends cr {
    cr a;
    final cv a;
    final cr b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cx(cv cvVar, String str, cr crVar) {
        super(str);
        this.a = cvVar;
        this.b = crVar;
        this.a = this.b;
        this.b = this.b;
        cr crVar2 = this.b;
        if (crVar2 != null) {
            this.f = crVar2.f;
        }
    }

    @Override
    public synchronized ArrayList<String> a(boolean z) {
        ArrayList<String> arrayList;
        arrayList = new ArrayList<>();
        if (this.a != null) {
            arrayList.addAll(this.a.a(true));
        }
        synchronized (cv.b) {
            cr crVar = cv.b.get(this.b);
            if (crVar != null) {
                for (String str : crVar.a(true)) {
                    if (arrayList.indexOf(str) == -1) {
                        arrayList.add(str);
                    }
                }
                arrayList.remove(this.b);
                arrayList.add(this.b);
            }
        }
        return arrayList;
    }

    @Override
    public synchronized void a(String str, cq cqVar) {
        if (this.a != null) {
            this.a.a(str, cqVar);
        }
    }

    @Override
    public boolean b() {
        return false;
    }
}
