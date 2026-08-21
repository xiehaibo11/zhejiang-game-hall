package com.kuaishou.weapon.p0.receiver;

public class WeaponRECE extends android.content.BroadcastReceiver {


    public WeaponRECE() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a()     // Catch: java.lang.Throwable -> Lc
            com.kuaishou.weapon.p0.receiver.WeaponRECE$1 r1 = new com.kuaishou.weapon.p0.receiver.WeaponRECE$1     // Catch: java.lang.Throwable -> Lc
            r1.<init>(r2, r4, r3)     // Catch: java.lang.Throwable -> Lc
            r0.a(r1)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }
}
