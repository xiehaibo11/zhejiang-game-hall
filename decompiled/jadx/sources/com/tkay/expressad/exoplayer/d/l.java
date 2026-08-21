package com.tkay.expressad.exoplayer.d;

import android.media.DeniedByServerException;
import android.media.MediaCrypto;
import android.media.MediaDrm;
import android.media.NotProvisionedException;
import android.os.Handler;
import com.tkay.expressad.exoplayer.d.j;
import com.tkay.expressad.exoplayer.k.af;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;

/* JADX INFO: loaded from: classes3.dex */
public final class l implements j<k> {
    private static final String g = "cenc";
    private final UUID h;
    private final MediaDrm i;

    public static l a(UUID uuid) throws o {
        try {
            return new l(uuid);
        } catch (Exception e) {
            throw new o(e);
        }
    }

    private l(UUID uuid) {
        com.tkay.expressad.exoplayer.k.a.a(uuid);
        com.tkay.expressad.exoplayer.k.a.a(!com.tkay.expressad.exoplayer.b.bi.equals(uuid), "Use C.CLEARKEY_UUID instead");
        if (af.f6754a < 27 && com.tkay.expressad.exoplayer.b.bj.equals(uuid)) {
            uuid = com.tkay.expressad.exoplayer.b.bi;
        }
        this.h = uuid;
        this.i = new MediaDrm(uuid);
        if (com.tkay.expressad.exoplayer.b.bk.equals(uuid) && "ASUS_Z00AD".equals(af.d)) {
            this.i.setPropertyString("securityLevel", "L3");
        }
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final void a(final j.f<? super k> fVar) {
        this.i.setOnEventListener(new MediaDrm.OnEventListener() { // from class: com.tkay.expressad.exoplayer.d.l.1
            @Override // android.media.MediaDrm.OnEventListener
            public final void onEvent(MediaDrm mediaDrm, byte[] bArr, int i, int i2, byte[] bArr2) {
                fVar.a(bArr, i);
            }
        });
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final void a(final j.g<? super k> gVar) {
        if (af.f6754a < 23) {
            throw new UnsupportedOperationException();
        }
        this.i.setOnKeyStatusChangeListener(gVar == null ? null : new MediaDrm.OnKeyStatusChangeListener() { // from class: com.tkay.expressad.exoplayer.d.l.2
            @Override // android.media.MediaDrm.OnKeyStatusChangeListener
            public final void onKeyStatusChange(MediaDrm mediaDrm, byte[] bArr, List<MediaDrm.KeyStatus> list, boolean z) {
                ArrayList arrayList = new ArrayList();
                for (MediaDrm.KeyStatus keyStatus : list) {
                    arrayList.add(new j.b(keyStatus.getStatusCode(), keyStatus.getKeyId()));
                }
            }
        }, (Handler) null);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final byte[] a() {
        return this.i.openSession();
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final void a(byte[] bArr) {
        this.i.closeSession(bArr);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final j.d a(byte[] bArr, byte[] bArr2, String str, int i, HashMap<String, String> map) throws NotProvisionedException {
        byte[] bArrA;
        byte[] bArr3 = (((af.f6754a >= 21 || !com.tkay.expressad.exoplayer.b.bk.equals(this.h)) && !(com.tkay.expressad.exoplayer.b.bl.equals(this.h) && "Amazon".equals(af.c) && ("AFTB".equals(af.d) || "AFTS".equals(af.d) || "AFTM".equals(af.d)))) || (bArrA = com.tkay.expressad.exoplayer.e.a.h.a(bArr2, this.h)) == null) ? bArr2 : bArrA;
        if (af.f6754a < 26 && com.tkay.expressad.exoplayer.b.bj.equals(this.h) && ("video/mp4".equals(str) || "audio/mp4".equals(str))) {
            str = "cenc";
        }
        MediaDrm.KeyRequest keyRequest = this.i.getKeyRequest(bArr, bArr3, str, i, map);
        byte[] data = keyRequest.getData();
        if (com.tkay.expressad.exoplayer.b.bj.equals(this.h) && af.f6754a < 27) {
            data = af.c(af.a(data).replace('+', '-').replace('/', '_'));
        }
        return new j.a(data, keyRequest.getDefaultUrl());
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final byte[] a(byte[] bArr, byte[] bArr2) {
        if (com.tkay.expressad.exoplayer.b.bj.equals(this.h)) {
            bArr2 = a.a(bArr2);
        }
        return this.i.provideKeyResponse(bArr, bArr2);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final j.h b() {
        MediaDrm.ProvisionRequest provisionRequest = this.i.getProvisionRequest();
        return new j.c(provisionRequest.getData(), provisionRequest.getDefaultUrl());
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final void b(byte[] bArr) throws DeniedByServerException {
        this.i.provideProvisionResponse(bArr);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final Map<String, String> c(byte[] bArr) {
        return this.i.queryKeyStatus(bArr);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final void c() {
        this.i.release();
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final void b(byte[] bArr, byte[] bArr2) {
        this.i.restoreKeys(bArr, bArr2);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final String a(String str) {
        return this.i.getPropertyString(str);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final byte[] b(String str) {
        return this.i.getPropertyByteArray(str);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final void a(String str, String str2) {
        this.i.setPropertyString(str, str2);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final void a(String str, byte[] bArr) {
        this.i.setPropertyByteArray(str, bArr);
    }

    private k e(byte[] bArr) {
        return new k(new MediaCrypto(this.h, bArr), af.f6754a < 21 && com.tkay.expressad.exoplayer.b.bk.equals(this.h) && "L3".equals(a("securityLevel")));
    }

    private static boolean d() {
        return "ASUS_Z00AD".equals(af.d);
    }

    @Override // com.tkay.expressad.exoplayer.d.j
    public final /* synthetic */ i d(byte[] bArr) {
        return new k(new MediaCrypto(this.h, bArr), af.f6754a < 21 && com.tkay.expressad.exoplayer.b.bk.equals(this.h) && "L3".equals(a("securityLevel")));
    }
}
