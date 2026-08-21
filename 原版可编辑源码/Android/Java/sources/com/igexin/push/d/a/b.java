package com.igexin.push.d.a;

import com.igexin.b.a.b.a.a.o;
import com.igexin.b.a.b.c;
import com.igexin.b.a.b.d;
import com.igexin.b.a.d.a.e;
import com.igexin.push.d.c.f;
import com.igexin.push.util.EncryptUtils;
import java.io.IOException;
import java.util.Arrays;
import kotlin.UByte;

public class b extends com.igexin.b.a.b.b {
    public static final String a = b.class.getName();
    public static int b = -1;
    private byte[] g;

    b(String str) {
        super(str, true);
    }

    private byte a(o oVar) {
        return (byte) b(oVar, 1);
    }

    public static com.igexin.b.a.b.b a() {
        b bVar = new b("socketProtocol");
        new a(com.heytap.mcssdk.constant.b.y, bVar);
        return bVar;
    }

    private e a(com.igexin.b.a.b.e eVar, d dVar, o oVar, com.igexin.push.d.c.e eVar2) throws Exception {
        if (eVar2.h == 48) {
            return null;
        }
        byte bA = a(oVar);
        if (bA > 0) {
            a(oVar, bA);
        }
        eVar2.f = a(oVar);
        eVar2.o = a(oVar);
        if (eVar2.o > 0) {
            eVar2.n = a(oVar, eVar2.o);
        }
        if (eVar2.e == 0) {
            c.b().a(new f());
            c.b().c();
            return null;
        }
        byte[] bArrA = a(oVar, 11);
        int iD = com.igexin.b.a.b.f.d(bArrA, 0);
        if (iD <= b) {
            b = -1;
            throw new Exception("server packetId can't be less than previous");
        }
        b = iD;
        int iD2 = com.igexin.b.a.b.f.d(bArrA, 4);
        short sB = com.igexin.b.a.b.f.b(bArrA, 8);
        int iA = com.igexin.b.a.b.f.a(bArrA, 10);
        com.igexin.push.d.c.a aVar = new com.igexin.push.d.c.a();
        aVar.a = sB;
        aVar.b = (byte) iA;
        aVar.f = eVar2.c;
        aVar.g = eVar2.h;
        if (sB > 0) {
            byte[] bArrA2 = a(oVar, sB);
            if (eVar2.h == 16) {
                bArrA2 = EncryptUtils.aesDecSocket(bArrA2, EncryptUtils.getIV(com.igexin.b.a.b.f.b(iD2)));
            } else if (eVar2.h == 32) {
                if (iA != 26) {
                    return null;
                }
                bArrA2 = EncryptUtils.altAesDecSocket(bArrA2, com.igexin.b.a.b.f.b(iD2));
            } else if (eVar2.h != 0) {
                byte b2 = eVar2.h;
                return null;
            }
            if (eVar2.g != -128) {
                if (eVar2.g == 0) {
                }
                return null;
            }
            bArrA2 = com.igexin.b.a.b.f.d(bArrA2);
            aVar.a(bArrA2);
            if (!Arrays.equals(eVar2.n, EncryptUtils.getSocketSignature(aVar, iD, iD2))) {
                com.igexin.b.a.c.b.a(a + "|decode signature error!!!!", new Object[0]);
                return null;
            }
        } else if (aVar.a < 0) {
            com.igexin.b.a.c.b.a(a + "|data len < 0, error", new Object[0]);
            return null;
        }
        if (this.d != null) {
            c.b().a(this.d.c(eVar, dVar, aVar));
        }
        c.b().c();
        return null;
    }

    static com.igexin.push.d.c.e a(com.igexin.push.d.c.a aVar) {
        com.igexin.push.d.c.e eVar = new com.igexin.push.d.c.e();
        eVar.a = 1944742139;
        eVar.a(aVar.c);
        eVar.e = aVar.b > 0 ? 1 : 0;
        eVar.c = 7;
        eVar.b = 11;
        eVar.f = aVar.d;
        eVar.b += EncryptUtils.getRSAKeyId().length;
        if (aVar.a <= 0) {
            if (eVar.h == 0) {
                eVar.o = 0;
            }
            c.d();
            return eVar;
        }
        eVar.p = EncryptUtils.getPacketId();
        eVar.q = (int) (System.currentTimeMillis() / 1000);
        eVar.n = EncryptUtils.getSocketSignature(aVar, eVar.p, eVar.q);
        eVar.o = eVar.n.length;
        eVar.b += eVar.o;
        c.d();
        return eVar;
    }

    private byte[] a(o oVar, int i) throws IOException {
        byte[] bArr = new byte[i];
        oVar.a(bArr);
        return bArr;
    }

    private int b(o oVar, int i) throws IOException {
        byte[] bArrA = a(oVar, i);
        if (i == 1) {
            return com.igexin.b.a.b.f.a(bArrA, 0);
        }
        if (i == 2) {
            return com.igexin.b.a.b.f.b(bArrA, 0);
        }
        if (i == 4) {
            return com.igexin.b.a.b.f.d(bArrA, 0);
        }
        return 0;
    }

    private e b(com.igexin.b.a.b.e eVar, d dVar, o oVar, com.igexin.push.d.c.e eVar2) throws IOException {
        byte bA;
        if (eVar2.h == 48 && (bA = a(oVar)) > 0) {
            this.g = a(oVar, bA);
        }
        if (eVar2.e == 0) {
            c.b().a(new f());
        } else {
            byte[] bArrA = a(oVar, 3);
            short sB = com.igexin.b.a.b.f.b(bArrA, 0);
            int iA = com.igexin.b.a.b.f.a(bArrA, 2);
            com.igexin.push.d.c.a aVar = new com.igexin.push.d.c.a();
            aVar.a = sB;
            aVar.b = (byte) iA;
            aVar.f = eVar2.c;
            if (iA != 26) {
                return null;
            }
            if (aVar.a > 0) {
                byte[] bArrA2 = a(oVar, sB);
                if (eVar2.h == 48) {
                    byte[] bArr = this.g;
                    bArrA2 = com.igexin.b.a.a.a.a(bArrA2, bArr == null ? c.b().a() : com.igexin.b.b.a.a(bArr));
                } else {
                    byte b2 = eVar2.h;
                }
                if (eVar2.g == -128) {
                    bArrA2 = com.igexin.b.a.b.f.d(bArrA2);
                } else if (eVar2.g != 0) {
                    return null;
                }
                aVar.a(bArrA2);
            }
            if (this.d != null) {
                c.b().a(this.d.c(eVar, dVar, aVar));
            }
        }
        c.b().c();
        return null;
    }

    @Override
    public Object a(com.igexin.b.a.b.e eVar, d dVar, Object obj) {
        int iC;
        byte[] bArr = null;
        if (obj instanceof com.igexin.push.d.c.a) {
            com.igexin.push.d.c.a aVar = (com.igexin.push.d.c.a) obj;
            com.igexin.push.d.c.e eVarA = a(aVar);
            if (aVar.b > 0 && aVar.a > 0) {
                if ((eVarA.g & 192) == 128) {
                    aVar.a(com.igexin.b.a.b.f.c(aVar.e));
                }
                if ((eVarA.h & com.sigmob.sdk.archives.tar.e.H) == 16) {
                    byte[] iv = EncryptUtils.getIV(com.igexin.b.a.b.f.b(eVarA.q));
                    if ((eVarA.f & 16) != 16) {
                        aVar.a(EncryptUtils.aesEncSocket(aVar.e, iv));
                    }
                } else if ((eVarA.h & com.sigmob.sdk.archives.tar.e.H) != 0) {
                    if ((eVarA.h & com.sigmob.sdk.archives.tar.e.H) == 48) {
                        com.igexin.b.a.c.b.a(a + "|encry type = 0x30 not support", new Object[0]);
                        return null;
                    }
                    if ((eVarA.h & com.sigmob.sdk.archives.tar.e.H) != 32) {
                        com.igexin.b.a.c.b.a(a + "|encry type = " + (eVarA.h & com.sigmob.sdk.archives.tar.e.H) + " not support", new Object[0]);
                        return null;
                    }
                    com.igexin.b.a.c.b.a(a + "|encry type = 0x20 reserved", new Object[0]);
                }
            }
            bArr = new byte[eVarA.b + (aVar.b > 0 ? aVar.a + 11 : 0)];
            int iA = com.igexin.b.a.b.f.a(1944742139, bArr, 0);
            int iC2 = iA + com.igexin.b.a.b.f.c(eVarA.b, bArr, iA);
            int iC3 = iC2 + com.igexin.b.a.b.f.c(eVarA.c, bArr, iC2);
            int iC4 = iC3 + com.igexin.b.a.b.f.c(eVarA.a(), bArr, iC3);
            int iC5 = iC4 + com.igexin.b.a.b.f.c(eVarA.e, bArr, iC4);
            byte[] rSAKeyId = EncryptUtils.getRSAKeyId();
            int iC6 = iC5 + com.igexin.b.a.b.f.c(rSAKeyId.length, bArr, iC5);
            int iA2 = iC6 + com.igexin.b.a.b.f.a(rSAKeyId, 0, bArr, iC6, rSAKeyId.length);
            int iC7 = iA2 + com.igexin.b.a.b.f.c(eVarA.b(), bArr, iA2);
            if (aVar.a > 0) {
                iC7 += com.igexin.b.a.b.f.c(eVarA.o, bArr, iC7);
                iC = com.igexin.b.a.b.f.a(eVarA.n, 0, bArr, iC7, eVarA.o);
            } else {
                iC = com.igexin.b.a.b.f.c(0, bArr, iC7);
            }
            int i = iC7 + iC;
            if (aVar.b > 0) {
                int iA3 = i + com.igexin.b.a.b.f.a(eVarA.p, bArr, i);
                int iA4 = iA3 + com.igexin.b.a.b.f.a(eVarA.q, bArr, iA3);
                int iB = iA4 + com.igexin.b.a.b.f.b(aVar.a, bArr, iA4);
                int iC8 = iB + com.igexin.b.a.b.f.c(aVar.b, bArr, iB);
                if (aVar.a > 0) {
                    com.igexin.b.a.b.f.a(aVar.e, 0, bArr, iC8, aVar.a);
                }
            }
        }
        return bArr;
    }

    @Override
    public e c(com.igexin.b.a.b.e eVar, d dVar, Object obj) throws IOException {
        o oVar = obj instanceof o ? (o) obj : null;
        if (oVar == null) {
            com.igexin.b.a.c.b.a(a + "|syncIns is null", new Object[0]);
            return null;
        }
        byte[] bArrA = a(oVar, 8);
        if (com.igexin.b.a.b.f.d(bArrA, 0) != 1944742139) {
            return null;
        }
        com.igexin.push.d.c.e eVar2 = new com.igexin.push.d.c.e();
        eVar2.b = bArrA[4] & UByte.MAX_VALUE;
        eVar2.c = bArrA[5] & UByte.MAX_VALUE;
        eVar2.a(bArrA[6]);
        eVar2.e = bArrA[7] & UByte.MAX_VALUE;
        if (eVar2.c == 7) {
            return a(eVar, dVar, oVar, eVar2);
        }
        if (eVar2.c == 1) {
            return b(eVar, dVar, oVar, eVar2);
        }
        com.igexin.b.a.c.b.a(a + "|server socket resp version = " + eVar2.c + ", not support !!!", new Object[0]);
        return null;
    }
}
