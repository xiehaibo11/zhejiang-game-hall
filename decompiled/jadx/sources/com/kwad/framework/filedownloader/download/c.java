package com.kwad.framework.filedownloader.download;

import android.os.Process;
import com.kwad.framework.filedownloader.download.ConnectTask;
import com.kwad.framework.filedownloader.download.e;
import com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException;
import java.io.IOException;
import java.net.SocketException;

/* JADX INFO: loaded from: classes2.dex */
public final class c implements Runnable {
    private final String Tt;
    private final ConnectTask acY;
    private final f acZ;
    private final int acc;
    private final boolean acz;
    private e ada;
    final int adb;
    private volatile boolean kT;

    public static class a {
        private String Tt;
        private Boolean acW;
        private f acZ;
        private final ConnectTask.a adc = new ConnectTask.a();
        private Integer add;

        public final a a(f fVar) {
            this.acZ = fVar;
            return this;
        }

        public final a aW(boolean z) {
            this.acW = Boolean.valueOf(z);
            return this;
        }

        public final a b(com.kwad.framework.filedownloader.download.a aVar) {
            this.adc.a(aVar);
            return this;
        }

        public final a bd(String str) {
            this.adc.ba(str);
            return this;
        }

        public final a be(String str) {
            this.adc.bb(str);
            return this;
        }

        public final a bf(String str) {
            this.Tt = str;
            return this;
        }

        public final a bo(int i) {
            this.adc.bn(i);
            return this;
        }

        public final a c(com.kwad.framework.filedownloader.d.b bVar) {
            this.adc.a(bVar);
            return this;
        }

        public final a d(Integer num) {
            this.add = num;
            return this;
        }

        public final c uG() {
            if (this.acZ == null || this.Tt == null || this.acW == null || this.add == null) {
                throw new IllegalArgumentException(com.kwad.framework.filedownloader.f.f.b("%s %s %B", this.acZ, this.Tt, this.acW));
            }
            ConnectTask connectTaskUo = this.adc.uo();
            return new c(connectTaskUo.acc, this.add.intValue(), connectTaskUo, this.acZ, this.acW.booleanValue(), this.Tt, (byte) 0);
        }
    }

    private c(int i, int i2, ConnectTask connectTask, f fVar, boolean z, String str) {
        this.acc = i;
        this.adb = i2;
        this.kT = false;
        this.acZ = fVar;
        this.Tt = str;
        this.acY = connectTask;
        this.acz = z;
    }

    /* synthetic */ c(int i, int i2, ConnectTask connectTask, f fVar, boolean z, String str, byte b) {
        this(i, i2, connectTask, fVar, z, str);
    }

    public final void pause() {
        this.kT = true;
        e eVar = this.ada;
        if (eVar != null) {
            eVar.pause();
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z;
        Exception e;
        Process.setThreadPriority(10);
        long j = this.acY.un().acl;
        com.kwad.framework.filedownloader.a.b bVarUk = null;
        boolean z2 = false;
        while (!this.kT) {
            try {
                try {
                    bVarUk = this.acY.uk();
                    int responseCode = bVarUk.getResponseCode();
                    if (com.kwad.framework.filedownloader.f.d.aeI) {
                        com.kwad.framework.filedownloader.f.d.c(this, "the connection[%d] for %d, is connected %s with requestHttpCode[%d]", Integer.valueOf(this.adb), Integer.valueOf(this.acc), this.acY.un(), Integer.valueOf(responseCode));
                    }
                    if (responseCode != 206 && responseCode != 200) {
                        throw new SocketException(com.kwad.framework.filedownloader.f.f.b("Connection failed with request[%s] response[%s] http-state[%d] on task[%d-%d], which is changed after verify connection, so please try again.", this.acY.getRequestHeader(), bVarUk.uf(), Integer.valueOf(responseCode), Integer.valueOf(this.acc), Integer.valueOf(this.adb)));
                    }
                } catch (FileDownloadGiveUpRetryException | IOException | ArrayIndexOutOfBoundsException | IllegalAccessException | IllegalArgumentException e2) {
                    e = e2;
                    z = false;
                }
                try {
                    e.a aVar = new e.a();
                    if (this.kT) {
                        if (bVarUk != null) {
                            bVarUk.ug();
                            return;
                        }
                        return;
                    } else {
                        e eVarUT = aVar.br(this.acc).bq(this.adb).b(this.acZ).a(this).aY(this.acz).d(bVarUk).c(this.acY.un()).bg(this.Tt).uT();
                        this.ada = eVarUT;
                        eVarUT.run();
                        if (this.kT) {
                            this.ada.pause();
                        }
                        if (bVarUk != null) {
                            return;
                        } else {
                            return;
                        }
                    }
                } catch (FileDownloadGiveUpRetryException | IOException | ArrayIndexOutOfBoundsException | IllegalAccessException | IllegalArgumentException e3) {
                    e = e3;
                    z = true;
                    try {
                        if (!this.acZ.a(e)) {
                            this.acZ.b(e);
                            if (bVarUk != null) {
                                bVarUk.ug();
                                return;
                            }
                            return;
                        }
                        if (!z) {
                            this.acZ.a(e, 0L);
                        } else {
                            if (this.ada == null) {
                                com.kwad.framework.filedownloader.f.d.d(this, "it is valid to retry and connection is valid but create fetch-data-task failed, so give up directly with %s", e);
                                this.acZ.b(e);
                                if (bVarUk != null) {
                                    bVarUk.ug();
                                    return;
                                }
                                return;
                            }
                            this.acZ.a(e, this.ada.acl - j);
                        }
                        if (bVarUk != null) {
                            bVarUk.ug();
                        }
                        z2 = z;
                    } finally {
                        if (bVarUk != null) {
                            bVarUk.ug();
                        }
                    }
                }
            } catch (FileDownloadGiveUpRetryException | IOException | ArrayIndexOutOfBoundsException | IllegalAccessException | IllegalArgumentException e4) {
                z = z2;
                e = e4;
            }
        }
        if (bVarUk != null) {
            bVarUk.ug();
        }
    }

    public final void tM() {
        pause();
    }
}
