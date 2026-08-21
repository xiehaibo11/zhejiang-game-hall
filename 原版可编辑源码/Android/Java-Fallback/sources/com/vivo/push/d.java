package com.vivo.push;

public final class d implements com.vivo.push.IPushClientFactory {
    private com.vivo.push.d.ag a;

    public d() {
            r1 = this;
            r1.<init>()
            com.vivo.push.d.ag r0 = new com.vivo.push.d.ag
            r0.<init>()
            r1.a = r0
            return
    }

    @Override
    public final com.vivo.push.d.z createReceiveTask(com.vivo.push.o r1) {
            r0 = this;
            com.vivo.push.d.z r1 = com.vivo.push.d.ag.b(r1)
            return r1
    }

    @Override
    public final com.vivo.push.o createReceiverCommand(android.content.Intent r3) {
            r2 = this;
            r0 = -1
            java.lang.String r1 = "command"
            int r1 = r3.getIntExtra(r1, r0)
            if (r1 >= 0) goto Lf
            java.lang.String r1 = "method"
            int r1 = r3.getIntExtra(r1, r0)
        Lf:
            r0 = 20
            if (r1 == r0) goto L5e
            r0 = 2016(0x7e0, float:2.825E-42)
            if (r1 == r0) goto L58
            switch(r1) {
                case 1: goto L52;
                case 2: goto L52;
                case 3: goto L4c;
                case 4: goto L46;
                case 5: goto L40;
                case 6: goto L3a;
                case 7: goto L34;
                case 8: goto L2e;
                case 9: goto L28;
                case 10: goto L22;
                case 11: goto L22;
                case 12: goto L1c;
                default: goto L1a;
            }
        L1a:
            r0 = 0
            goto L63
        L1c:
            com.vivo.push.b.j r0 = new com.vivo.push.b.j
            r0.<init>()
            goto L63
        L22:
            com.vivo.push.b.i r0 = new com.vivo.push.b.i
            r0.<init>(r1)
            goto L63
        L28:
            com.vivo.push.b.k r0 = new com.vivo.push.b.k
            r0.<init>()
            goto L63
        L2e:
            com.vivo.push.b.m r0 = new com.vivo.push.b.m
            r0.<init>()
            goto L63
        L34:
            com.vivo.push.b.n r0 = new com.vivo.push.b.n
            r0.<init>()
            goto L63
        L3a:
            com.vivo.push.b.r r0 = new com.vivo.push.b.r
            r0.<init>()
            goto L63
        L40:
            com.vivo.push.b.p r0 = new com.vivo.push.b.p
            r0.<init>()
            goto L63
        L46:
            com.vivo.push.b.q r0 = new com.vivo.push.b.q
            r0.<init>()
            goto L63
        L4c:
            com.vivo.push.b.o r0 = new com.vivo.push.b.o
            r0.<init>()
            goto L63
        L52:
            com.vivo.push.b.t r0 = new com.vivo.push.b.t
            r0.<init>(r1)
            goto L63
        L58:
            com.vivo.push.b.l r0 = new com.vivo.push.b.l
            r0.<init>()
            goto L63
        L5e:
            com.vivo.push.b.u r0 = new com.vivo.push.b.u
            r0.<init>()
        L63:
            if (r0 == 0) goto L76
            com.vivo.push.a r3 = com.vivo.push.a.a(r3)
            if (r3 != 0) goto L73
            java.lang.String r3 = "PushCommand"
            java.lang.String r1 = "bundleWapper is null"
            com.vivo.push.util.p.b(r3, r1)
            goto L76
        L73:
            r0.b(r3)
        L76:
            return r0
    }

    @Override
    public final com.vivo.push.l createTask(com.vivo.push.o r1) {
            r0 = this;
            com.vivo.push.l r1 = com.vivo.push.d.ag.a(r1)
            return r1
    }
}
