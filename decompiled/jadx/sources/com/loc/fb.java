package com.loc;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.telephony.CellIdentityCdma;
import android.telephony.CellIdentityGsm;
import android.telephony.CellIdentityLte;
import android.telephony.CellIdentityNr;
import android.telephony.CellIdentityWcdma;
import android.telephony.CellInfo;
import android.telephony.CellInfoCdma;
import android.telephony.CellInfoGsm;
import android.telephony.CellInfoLte;
import android.telephony.CellInfoNr;
import android.telephony.CellInfoWcdma;
import android.telephony.CellLocation;
import android.telephony.CellSignalStrengthNr;
import android.telephony.PhoneStateListener;
import android.telephony.ServiceState;
import android.telephony.SignalStrength;
import android.telephony.TelephonyManager;
import android.telephony.cdma.CdmaCellLocation;
import android.telephony.gsm.GsmCellLocation;
import android.text.TextUtils;
import com.bianfeng.platform.UserInterface;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import okhttp3.internal.ws.WebSocketProtocol;

/* JADX INFO: compiled from: CgiManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class fb {
    TelephonyManager b;
    SignalStrength d;
    private Context h;
    private ez m;
    private TelephonyManager.CellInfoCallback q;
    private es u;
    private boolean i = false;
    private boolean j = false;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    ArrayList<fa> f2966a = new ArrayList<>();
    private String k = null;
    private ArrayList<fa> l = new ArrayList<>();
    private long n = 0;
    PhoneStateListener c = null;
    private boolean o = false;
    private Object p = new Object();
    private boolean r = false;
    boolean e = false;
    StringBuilder f = null;
    private String s = null;
    private String t = null;
    String g = null;

    /* JADX INFO: compiled from: CgiManager.java */
    class a extends TelephonyManager.CellInfoCallback {
        a() {
        }

        @Override // android.telephony.TelephonyManager.CellInfoCallback
        public final void onCellInfo(List<CellInfo> list) {
            try {
                if (fz.b() - fb.this.n < 500) {
                    return;
                }
                fb.b(fb.this);
                fb.this.a(fb.this.t());
                fb.this.a(list);
                fb.this.n = fz.b();
            } catch (SecurityException e) {
                fb.this.g = e.getMessage();
            } catch (Throwable th) {
                fr.a(th, "Cgi", "cellInfo");
            }
        }
    }

    /* JADX INFO: compiled from: CgiManager.java */
    class b extends PhoneStateListener {
        b() {
        }

        @Override // android.telephony.PhoneStateListener
        public final void onCellInfoChanged(List<CellInfo> list) {
            try {
                ft.b();
                if (fb.this.u != null) {
                    fb.this.u.c();
                }
                if (fz.b() - fb.this.n < 500) {
                    return;
                }
                fb.this.a(fb.this.t());
                fb.this.a(list);
                fb.this.n = fz.b();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }

        @Override // android.telephony.PhoneStateListener
        public final void onCellLocationChanged(CellLocation cellLocation) {
            ft.b();
            if (fz.b() - fb.this.n < 500) {
                return;
            }
            try {
                fb.this.a(cellLocation);
                fb.this.a(fb.this.u());
                fb.this.n = fz.b();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }

        @Override // android.telephony.PhoneStateListener
        public final void onDataConnectionStateChanged(int i) {
            super.onDataConnectionStateChanged(i);
        }

        @Override // android.telephony.PhoneStateListener
        public final void onServiceStateChanged(ServiceState serviceState) {
            try {
                int state = serviceState.getState();
                if (state == 0) {
                    fb.this.a(false, false);
                } else {
                    if (state != 1) {
                        return;
                    }
                    fb.this.j();
                }
            } catch (Throwable unused) {
            }
        }

        @Override // android.telephony.PhoneStateListener
        public final void onSignalStrengthChanged(int i) {
            super.onSignalStrengthChanged(i);
        }

        @Override // android.telephony.PhoneStateListener
        public final void onSignalStrengthsChanged(SignalStrength signalStrength) {
            if (signalStrength == null) {
                return;
            }
            fb.this.d = signalStrength;
            try {
                if (fb.this.u != null) {
                    fb.this.u.c();
                }
            } catch (Throwable unused) {
            }
        }
    }

    public fb(Context context, Handler handler) {
        this.b = null;
        this.m = null;
        this.h = context;
        if (this.b == null) {
            this.b = (TelephonyManager) fz.a(context, "phone");
        }
        o();
        ez ezVar = new ez(context, "cellAge", handler);
        this.m = ezVar;
        ezVar.a();
    }

    private static fa a(int i, boolean z, int i2, int i3, int i4, int i5, int i6) {
        fa faVar = new fa(i, z);
        faVar.f2965a = i2;
        faVar.b = i3;
        faVar.c = i4;
        faVar.d = i5;
        faVar.k = i6;
        return faVar;
    }

    private fa a(CellInfoCdma cellInfoCdma, boolean z) {
        int i;
        int i2;
        int i3;
        if (cellInfoCdma != null && cellInfoCdma.getCellIdentity() != null) {
            CellIdentityCdma cellIdentity = cellInfoCdma.getCellIdentity();
            if (cellIdentity.getSystemId() > 0 && cellIdentity.getNetworkId() >= 0 && cellIdentity.getBasestationId() >= 0) {
                CellIdentityCdma cellIdentity2 = cellInfoCdma.getCellIdentity();
                String[] strArrA = fz.a(this.b);
                try {
                    i = Integer.parseInt(strArrA[0]);
                } catch (Throwable unused) {
                    i = 0;
                }
                try {
                    i3 = Integer.parseInt(strArrA[1]);
                    i2 = i;
                } catch (Throwable unused2) {
                    i2 = i;
                    i3 = 0;
                }
                fa faVarA = a(2, z, i2, i3, 0, 0, cellInfoCdma.getCellSignalStrength().getCdmaDbm());
                faVarA.h = cellIdentity2.getSystemId();
                faVarA.i = cellIdentity2.getNetworkId();
                faVarA.j = cellIdentity2.getBasestationId();
                faVarA.f = cellIdentity2.getLatitude();
                faVarA.g = cellIdentity2.getLongitude();
                faVarA.s = cellInfoCdma.getCellSignalStrength().getCdmaDbm();
                return faVarA;
            }
        }
        return null;
    }

    private static fa a(CellInfoGsm cellInfoGsm, boolean z) {
        if (cellInfoGsm == null || cellInfoGsm.getCellIdentity() == null) {
            return null;
        }
        CellIdentityGsm cellIdentity = cellInfoGsm.getCellIdentity();
        fa faVarA = a(1, z, cellIdentity.getMcc(), cellIdentity.getMnc(), cellIdentity.getLac(), cellIdentity.getCid(), cellInfoGsm.getCellSignalStrength().getDbm());
        faVarA.o = cellInfoGsm.getCellIdentity().getBsic();
        faVarA.p = cellInfoGsm.getCellIdentity().getArfcn();
        faVarA.q = cellInfoGsm.getCellSignalStrength().getTimingAdvance();
        faVarA.s = cellInfoGsm.getCellSignalStrength().getDbm();
        return faVarA;
    }

    private static fa a(CellInfoLte cellInfoLte, boolean z) {
        if (cellInfoLte == null || cellInfoLte.getCellIdentity() == null) {
            return null;
        }
        CellIdentityLte cellIdentity = cellInfoLte.getCellIdentity();
        fa faVarA = a(3, z, cellIdentity.getMcc(), cellIdentity.getMnc(), cellIdentity.getTac(), cellIdentity.getCi(), cellInfoLte.getCellSignalStrength().getDbm());
        faVarA.o = cellIdentity.getPci();
        if (Build.VERSION.SDK_INT >= 24) {
            faVarA.p = cellIdentity.getEarfcn();
        }
        faVarA.q = cellInfoLte.getCellSignalStrength().getTimingAdvance();
        faVarA.s = cellInfoLte.getCellSignalStrength().getDbm();
        return faVarA;
    }

    private static fa a(CellInfoNr cellInfoNr, boolean z) {
        int i;
        int i2;
        int i3;
        if (cellInfoNr == null || cellInfoNr.getCellIdentity() == null) {
            return null;
        }
        CellIdentityNr cellIdentityNr = (CellIdentityNr) cellInfoNr.getCellIdentity();
        int tac = cellIdentityNr.getTac();
        if (tac == Integer.MAX_VALUE && "HUAWEI".equals(Build.MANUFACTURER)) {
            try {
                tac = fv.b(cellIdentityNr, "getHwTac", new Object[0]);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        long nci = cellIdentityNr.getNci();
        try {
            i = Integer.parseInt(cellIdentityNr.getMccString());
            try {
                i2 = i;
                i3 = Integer.parseInt(cellIdentityNr.getMncString());
            } catch (Throwable th2) {
                th = th2;
                th.printStackTrace();
                i2 = i;
                i3 = 0;
            }
        } catch (Throwable th3) {
            th = th3;
            i = 0;
        }
        fa faVarA = a(5, z, i2, i3, cellIdentityNr.getTac(), 0, ((CellSignalStrengthNr) cellInfoNr.getCellSignalStrength()).getSsRsrp());
        faVarA.e = nci;
        if (tac > 16777215) {
            faVarA.c = 65535;
        } else if (tac > 65535) {
            faVarA.c = 65535;
            faVarA.q = tac;
        } else {
            faVarA.c = tac;
        }
        faVarA.o = cellIdentityNr.getPci();
        faVarA.p = cellIdentityNr.getNrarfcn();
        faVarA.s = cellInfoNr.getCellSignalStrength().getDbm();
        return faVarA;
    }

    private static fa a(CellInfoWcdma cellInfoWcdma, boolean z) {
        if (cellInfoWcdma == null || cellInfoWcdma.getCellIdentity() == null) {
            return null;
        }
        CellIdentityWcdma cellIdentity = cellInfoWcdma.getCellIdentity();
        fa faVarA = a(4, z, cellIdentity.getMcc(), cellIdentity.getMnc(), cellIdentity.getLac(), cellIdentity.getCid(), cellInfoWcdma.getCellSignalStrength().getDbm());
        faVarA.o = cellIdentity.getPsc();
        faVarA.p = cellInfoWcdma.getCellIdentity().getUarfcn();
        faVarA.s = cellInfoWcdma.getCellSignalStrength().getDbm();
        return faVarA;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(CellLocation cellLocation) {
        String[] strArrA = fz.a(this.b);
        this.f2966a.clear();
        if (cellLocation instanceof GsmCellLocation) {
            GsmCellLocation gsmCellLocation = (GsmCellLocation) cellLocation;
            fa faVar = new fa(1, true);
            faVar.f2965a = fz.e(strArrA[0]);
            faVar.b = fz.e(strArrA[1]);
            faVar.c = gsmCellLocation.getLac();
            faVar.d = gsmCellLocation.getCid();
            if (this.d != null) {
                int gsmSignalStrength = this.d.getGsmSignalStrength();
                faVar.s = gsmSignalStrength == 99 ? Integer.MAX_VALUE : b(gsmSignalStrength);
            }
            faVar.r = false;
            this.m.a(faVar);
            this.f2966a.add(faVar);
            return;
        }
        if (cellLocation instanceof CdmaCellLocation) {
            CdmaCellLocation cdmaCellLocation = (CdmaCellLocation) cellLocation;
            fa faVar2 = new fa(2, true);
            faVar2.f2965a = Integer.parseInt(strArrA[0]);
            faVar2.b = Integer.parseInt(strArrA[1]);
            faVar2.f = cdmaCellLocation.getBaseStationLatitude();
            faVar2.g = cdmaCellLocation.getBaseStationLongitude();
            faVar2.h = cdmaCellLocation.getSystemId();
            faVar2.i = cdmaCellLocation.getNetworkId();
            faVar2.j = cdmaCellLocation.getBaseStationId();
            if (this.d != null) {
                faVar2.s = this.d.getCdmaDbm();
            }
            faVar2.r = false;
            this.m.a(faVar2);
            this.f2966a.add(faVar2);
        }
    }

    public static boolean a(int i) {
        return i > 0 && i <= 15;
    }

    private static int b(int i) {
        return (i * 2) - 113;
    }

    private void b(boolean z, boolean z2) {
        if (!this.e && this.b != null && Build.VERSION.SDK_INT >= 29 && this.h.getApplicationInfo().targetSdkVersion >= 29) {
            if (this.q == null) {
                this.q = new a();
            }
            this.b.requestCellInfoUpdate(cr.a().b(), this.q);
            if (z2 || z) {
                for (int i = 0; !this.r && i < 20; i++) {
                    try {
                        Thread.sleep(5L);
                    } catch (Throwable unused) {
                    }
                }
            }
        }
        this.j = false;
        TelephonyManager telephonyManager = this.b;
        if (telephonyManager != null) {
            String networkOperator = telephonyManager.getNetworkOperator();
            this.k = networkOperator;
            if (!TextUtils.isEmpty(networkOperator)) {
                this.j = true;
            }
        }
        this.n = fz.b();
    }

    static /* synthetic */ boolean b(fb fbVar) {
        fbVar.r = true;
        return true;
    }

    private void o() {
        if (this.b == null) {
            return;
        }
        p();
    }

    private void p() {
        try {
            if (this.c == null) {
                this.c = new b();
            }
            int i = 320;
            String str = "hasFineLocPerm";
            if (Build.VERSION.SDK_INT < 31) {
                ft.b();
                i = 336;
            } else if (this.h.checkSelfPermission(com.kuaishou.weapon.p0.g.g) == 0) {
                this.t = "hasFineLocPerm";
                ft.b();
                i = 336;
            } else {
                this.t = "hasNoFineLocPerm";
                ft.b();
            }
            if (Build.VERSION.SDK_INT >= 17) {
                if (Build.VERSION.SDK_INT >= 31) {
                    boolean z = true;
                    boolean z2 = this.h.checkSelfPermission("android.permission.READ_PHONE_STATE") == 0;
                    if (this.h.checkSelfPermission(com.kuaishou.weapon.p0.g.g) != 0) {
                        z = false;
                    }
                    if (z2 && z) {
                        i |= 1024;
                    }
                    ft.b();
                    this.s = z2 ? "hasReadPhoneStatePerm" : "hasNoReadPhoneStatePerm";
                    if (!z) {
                        str = "hasNoFineLocPerm";
                    }
                    this.t = str;
                    StringBuilder sb = new StringBuilder("CgiManager | mLFLPerm = ");
                    sb.append(this.t);
                    sb.append(";mLRPSPerm = ");
                    sb.append(this.s);
                    ft.b();
                } else {
                    ft.b();
                    i |= 1024;
                }
            }
            if (this.c != null) {
                this.b.listen(this.c, i);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private int q() {
        fa faVarE = e();
        if (faVarE != null) {
            return faVarE.l;
        }
        return 0;
    }

    private CellLocation r() {
        TelephonyManager telephonyManager = this.b;
        if (telephonyManager != null) {
            try {
                CellLocation cellLocation = telephonyManager.getCellLocation();
                this.g = null;
                return cellLocation;
            } catch (SecurityException e) {
                this.g = e.getMessage();
            } catch (Throwable th) {
                this.g = null;
                fr.a(th, "CgiManager", "getCellLocation");
            }
        }
        return null;
    }

    private boolean s() {
        return !this.e && fz.b() - this.n >= 45000;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public CellLocation t() {
        if (this.b == null) {
            return null;
        }
        return r();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<CellInfo> u() {
        List<CellInfo> allCellInfo;
        try {
            if (fz.c() < 18 || this.b == null) {
                return null;
            }
            try {
                allCellInfo = this.b.getAllCellInfo();
                try {
                    this.g = null;
                } catch (SecurityException e) {
                    e = e;
                    this.g = e.getMessage();
                }
            } catch (SecurityException e2) {
                e = e2;
                allCellInfo = null;
            }
            return allCellInfo;
        } catch (Throwable th) {
            fr.a(th, "Cgi", "getNewCells");
            return null;
        }
    }

    public final List<dz> a() {
        Object obj;
        Object obj2;
        ArrayList arrayList = new ArrayList();
        List<CellInfo> allCellInfo = this.b.getAllCellInfo();
        if (Build.VERSION.SDK_INT >= 17 && allCellInfo != null) {
            for (CellInfo cellInfo : allCellInfo) {
                if (cellInfo instanceof CellInfoCdma) {
                    CellInfoCdma cellInfoCdma = (CellInfoCdma) cellInfo;
                    CellIdentityCdma cellIdentity = cellInfoCdma.getCellIdentity();
                    ea eaVar = new ea(cellInfo.isRegistered(), true);
                    eaVar.m = cellIdentity.getLatitude();
                    eaVar.n = cellIdentity.getLongitude();
                    eaVar.j = cellIdentity.getSystemId();
                    eaVar.k = cellIdentity.getNetworkId();
                    eaVar.l = cellIdentity.getBasestationId();
                    eaVar.d = cellInfoCdma.getCellSignalStrength().getAsuLevel();
                    eaVar.c = cellInfoCdma.getCellSignalStrength().getCdmaDbm();
                    obj = eaVar;
                } else {
                    if (cellInfo instanceof CellInfoGsm) {
                        CellInfoGsm cellInfoGsm = (CellInfoGsm) cellInfo;
                        CellIdentityGsm cellIdentity2 = cellInfoGsm.getCellIdentity();
                        eb ebVar = new eb(cellInfo.isRegistered(), true);
                        ebVar.f2936a = String.valueOf(cellIdentity2.getMcc());
                        ebVar.b = String.valueOf(cellIdentity2.getMnc());
                        ebVar.j = cellIdentity2.getLac();
                        ebVar.k = cellIdentity2.getCid();
                        ebVar.c = cellInfoGsm.getCellSignalStrength().getDbm();
                        ebVar.d = cellInfoGsm.getCellSignalStrength().getAsuLevel();
                        obj2 = ebVar;
                        if (Build.VERSION.SDK_INT >= 24) {
                            ebVar.m = cellIdentity2.getArfcn();
                            ebVar.n = cellIdentity2.getBsic();
                            obj2 = ebVar;
                        }
                    } else if (cellInfo instanceof CellInfoLte) {
                        CellInfoLte cellInfoLte = (CellInfoLte) cellInfo;
                        CellIdentityLte cellIdentity3 = cellInfoLte.getCellIdentity();
                        ec ecVar = new ec(cellInfo.isRegistered());
                        ecVar.f2936a = String.valueOf(cellIdentity3.getMcc());
                        ecVar.b = String.valueOf(cellIdentity3.getMnc());
                        ecVar.l = cellIdentity3.getPci();
                        ecVar.d = cellInfoLte.getCellSignalStrength().getAsuLevel();
                        ecVar.k = cellIdentity3.getCi();
                        ecVar.j = cellIdentity3.getTac();
                        ecVar.n = cellInfoLte.getCellSignalStrength().getTimingAdvance();
                        ecVar.c = cellInfoLte.getCellSignalStrength().getDbm();
                        obj = ecVar;
                        if (Build.VERSION.SDK_INT >= 24) {
                            ecVar.m = cellIdentity3.getEarfcn();
                            obj = ecVar;
                        }
                    } else if (Build.VERSION.SDK_INT >= 18 && (cellInfo instanceof CellInfoWcdma)) {
                        CellInfoWcdma cellInfoWcdma = (CellInfoWcdma) cellInfo;
                        CellIdentityWcdma cellIdentity4 = cellInfoWcdma.getCellIdentity();
                        ed edVar = new ed(cellInfo.isRegistered(), true);
                        edVar.f2936a = String.valueOf(cellIdentity4.getMcc());
                        edVar.b = String.valueOf(cellIdentity4.getMnc());
                        edVar.j = cellIdentity4.getLac();
                        edVar.k = cellIdentity4.getCid();
                        edVar.l = cellIdentity4.getPsc();
                        edVar.d = cellInfoWcdma.getCellSignalStrength().getAsuLevel();
                        edVar.c = cellInfoWcdma.getCellSignalStrength().getDbm();
                        obj2 = edVar;
                        if (Build.VERSION.SDK_INT >= 24) {
                            edVar.m = cellIdentity4.getUarfcn();
                            obj2 = edVar;
                        }
                    }
                    arrayList.add(obj2);
                }
                arrayList.add(obj);
            }
        }
        return arrayList;
    }

    public final void a(es esVar) {
        this.u = esVar;
    }

    final synchronized void a(List<CellInfo> list) {
        if (this.l != null) {
            this.l.clear();
        }
        if (list != null && list.size() > 0) {
            for (int i = 0; i < list.size(); i++) {
                CellInfo cellInfo = list.get(i);
                if (cellInfo != null) {
                    fa faVarA = null;
                    boolean zIsRegistered = cellInfo.isRegistered();
                    if (cellInfo instanceof CellInfoCdma) {
                        faVarA = a((CellInfoCdma) cellInfo, zIsRegistered);
                    } else if (cellInfo instanceof CellInfoGsm) {
                        faVarA = a((CellInfoGsm) cellInfo, zIsRegistered);
                    } else if (cellInfo instanceof CellInfoWcdma) {
                        faVarA = a((CellInfoWcdma) cellInfo, zIsRegistered);
                    } else if (cellInfo instanceof CellInfoLte) {
                        faVarA = a((CellInfoLte) cellInfo, zIsRegistered);
                    } else if (Build.VERSION.SDK_INT >= 29 && (cellInfo instanceof CellInfoNr)) {
                        faVarA = a((CellInfoNr) cellInfo, zIsRegistered);
                    }
                    if (faVarA != null) {
                        this.m.a(faVarA);
                        faVarA.m = (short) Math.min(WebSocketProtocol.PAYLOAD_SHORT_MAX, this.m.e(faVarA));
                        faVarA.r = true;
                        this.l.add(faVarA);
                    }
                }
            }
            this.i = false;
            if (this.l != null && this.l.size() > 0) {
                this.i = true;
            }
        }
    }

    public final void a(boolean z) {
        PhoneStateListener phoneStateListener;
        this.m.a(z);
        this.n = 0L;
        synchronized (this.p) {
            this.o = true;
        }
        TelephonyManager telephonyManager = this.b;
        if (telephonyManager != null && (phoneStateListener = this.c) != null) {
            try {
                telephonyManager.listen(phoneStateListener, 0);
            } catch (Throwable th) {
                fr.a(th, "CgiManager", UserInterface.FUNCTION_DESTROY);
            }
        }
        this.c = null;
        this.d = null;
        this.b = null;
    }

    public final void a(boolean z, boolean z2) {
        try {
            this.e = fz.a(this.h);
            if (s()) {
                b(z, z2);
                a(t());
                a(u());
            }
            if (this.e) {
                j();
            }
        } catch (SecurityException e) {
            this.g = e.getMessage();
        } catch (Throwable th) {
            fr.a(th, "CgiManager", "refresh");
        }
    }

    public final void b() {
        boolean z = false;
        try {
            if (Build.VERSION.SDK_INT >= 31) {
                String str = this.h.checkSelfPermission(com.kuaishou.weapon.p0.g.g) == 0 ? "hasFineLocPerm" : "hasNoFineLocPerm";
                String str2 = this.h.checkSelfPermission("android.permission.READ_PHONE_STATE") == 0 ? "hasReadPhoneStatePerm" : "hasNoReadPhoneStatePerm";
                boolean z2 = true;
                if (!TextUtils.isEmpty(this.t) && !this.t.equals(str)) {
                    z = true;
                }
                if (TextUtils.isEmpty(this.s) || this.s.equals(str2)) {
                    z2 = z;
                }
                if (z2) {
                    ft.b();
                    p();
                }
            }
        } catch (Throwable unused) {
            ft.b();
        }
    }

    public final synchronized ArrayList<fa> c() {
        ArrayList<fa> arrayList;
        arrayList = new ArrayList<>();
        if (this.f2966a != null) {
            Iterator<fa> it = this.f2966a.iterator();
            while (it.hasNext()) {
                arrayList.add(it.next().clone());
            }
        }
        return arrayList;
    }

    public final synchronized ArrayList<fa> d() {
        ArrayList<fa> arrayList;
        arrayList = new ArrayList<>();
        if (this.l != null) {
            Iterator<fa> it = this.l.iterator();
            while (it.hasNext()) {
                arrayList.add(it.next().clone());
            }
        }
        return arrayList;
    }

    public final synchronized fa e() {
        if (this.e) {
            return null;
        }
        ArrayList<fa> arrayList = this.f2966a;
        if (arrayList.size() <= 0) {
            return null;
        }
        return arrayList.get(0).clone();
    }

    public final synchronized fa f() {
        if (this.e) {
            return null;
        }
        ArrayList<fa> arrayList = this.l;
        if (arrayList.size() <= 0) {
            return null;
        }
        for (fa faVar : arrayList) {
            if (faVar.n) {
                return faVar.clone();
            }
        }
        return arrayList.get(0).clone();
    }

    public final int g() {
        return q() | (this.i ? 4 : 0) | (this.j ? 8 : 0);
    }

    public final int h() {
        return q() & 3;
    }

    public final TelephonyManager i() {
        return this.b;
    }

    final synchronized void j() {
        this.g = null;
        this.f2966a.clear();
        this.l.clear();
        this.i = false;
        this.j = false;
    }

    public final String k() {
        return this.g;
    }

    public final String l() {
        return this.k;
    }

    public final synchronized String m() {
        if (this.e) {
            j();
        }
        if (this.f == null) {
            this.f = new StringBuilder();
        } else {
            this.f.delete(0, this.f.length());
        }
        if (h() == 1) {
            for (int i = 1; i < this.f2966a.size(); i++) {
                StringBuilder sb = this.f;
                sb.append("#");
                sb.append(this.f2966a.get(i).b);
                StringBuilder sb2 = this.f;
                sb2.append("|");
                sb2.append(this.f2966a.get(i).c);
                StringBuilder sb3 = this.f;
                sb3.append("|");
                sb3.append(this.f2966a.get(i).d);
            }
        }
        for (int i2 = 1; i2 < this.l.size(); i2++) {
            fa faVar = this.l.get(i2);
            if (faVar.l == 1 || faVar.l == 3 || faVar.l == 4 || faVar.l == 5) {
                StringBuilder sb4 = this.f;
                sb4.append("#");
                sb4.append(faVar.l);
                StringBuilder sb5 = this.f;
                sb5.append("|");
                sb5.append(faVar.f2965a);
                StringBuilder sb6 = this.f;
                sb6.append("|");
                sb6.append(faVar.b);
                StringBuilder sb7 = this.f;
                sb7.append("|");
                sb7.append(faVar.c);
                StringBuilder sb8 = this.f;
                sb8.append("|");
                sb8.append(faVar.a());
            } else if (faVar.l == 2) {
                StringBuilder sb9 = this.f;
                sb9.append("#");
                sb9.append(faVar.l);
                StringBuilder sb10 = this.f;
                sb10.append("|");
                sb10.append(faVar.f2965a);
                StringBuilder sb11 = this.f;
                sb11.append("|");
                sb11.append(faVar.h);
                StringBuilder sb12 = this.f;
                sb12.append("|");
                sb12.append(faVar.i);
                StringBuilder sb13 = this.f;
                sb13.append("|");
                sb13.append(faVar.j);
            }
        }
        if (this.f.length() > 0) {
            this.f.deleteCharAt(0);
        }
        return this.f.toString();
    }

    public final boolean n() {
        try {
            if (this.b != null) {
                if (!TextUtils.isEmpty(this.b.getSimOperator())) {
                    return true;
                }
                if (!TextUtils.isEmpty(this.b.getSimCountryIso())) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        try {
            int iA = fz.a(fz.c(this.h));
            return iA == 0 || iA == 4 || iA == 2 || iA == 5 || iA == 3;
        } catch (Throwable unused2) {
            return false;
        }
    }
}
