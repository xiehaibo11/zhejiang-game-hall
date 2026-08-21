package com.xiaomi.push;

public class fu implements com.xiaomi.push.gi {
    public static boolean a;
    private com.xiaomi.push.fu.a a;
    private com.xiaomi.push.fw a;
    private com.xiaomi.push.fz a;
    private final java.lang.String a;
    private java.text.SimpleDateFormat a;
    private com.xiaomi.push.fu.a b;

    class a implements com.xiaomi.push.gb, com.xiaomi.push.gj {
        final com.xiaomi.push.fu a;
        java.lang.String a;
        private boolean a;

        a(com.xiaomi.push.fu r1, boolean r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 1
                r0.a = r1
                r0.a = r2
                if (r2 == 0) goto Lf
                java.lang.String r1 = " RCV "
                goto L11
            Lf:
                java.lang.String r1 = " Sent "
            L11:
                r0.a = r1
                return
        }

        @Override
        public void a(com.xiaomi.push.fl r6) {
                r5 = this;
                boolean r0 = com.xiaomi.push.fu.a
                java.lang.String r1 = "[Slim] "
                if (r0 == 0) goto L2a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                com.xiaomi.push.fu r1 = r5.a
                java.text.SimpleDateFormat r1 = com.xiaomi.push.fu.a(r1)
                java.util.Date r2 = new java.util.Date
                r2.<init>()
                java.lang.String r1 = r1.format(r2)
                r0.append(r1)
                java.lang.String r1 = r5.a
                r0.append(r1)
                java.lang.String r1 = r6.toString()
                goto L6d
            L2a:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                com.xiaomi.push.fu r1 = r5.a
                java.text.SimpleDateFormat r1 = com.xiaomi.push.fu.a(r1)
                java.util.Date r2 = new java.util.Date
                r2.<init>()
                java.lang.String r1 = r1.format(r2)
                r0.append(r1)
                java.lang.String r1 = r5.a
                r0.append(r1)
                java.lang.String r1 = " Blob ["
                r0.append(r1)
                java.lang.String r1 = r6.a()
                r0.append(r1)
                java.lang.String r1 = ","
                r0.append(r1)
                int r2 = r6.a()
                r0.append(r2)
                r0.append(r1)
                java.lang.String r1 = r6.e()
                r0.append(r1)
                java.lang.String r1 = "]"
            L6d:
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.xiaomi.channel.commonutils.logger.b.c(r0)
                if (r6 == 0) goto L15f
                int r0 = r6.a()
                r1 = 99999(0x1869f, float:1.40128E-40)
                if (r0 != r1) goto L15f
                java.lang.String r0 = r6.a()
                boolean r2 = r5.a
                r3 = 0
                if (r2 != 0) goto L129
                java.lang.String r2 = "BIND"
                boolean r4 = r2.equals(r0)
                if (r4 == 0) goto Ld7
                java.lang.String r0 = "build binded result for loopback."
                com.xiaomi.channel.commonutils.logger.b.a(r0)
                com.xiaomi.push.dx$d r0 = new com.xiaomi.push.dx$d
                r0.<init>()
                r4 = 1
                r0.a(r4)
                java.lang.String r4 = "login success."
                r0.c(r4)
                java.lang.String r4 = "success"
                r0.b(r4)
                r0.a(r4)
                com.xiaomi.push.fl r4 = new com.xiaomi.push.fl
                r4.<init>()
                byte[] r0 = r0.a()
                r4.a(r0, r3)
                r0 = 2
                r4.a(r0)
                r4.a(r1)
                r4.a(r2, r3)
                java.lang.String r0 = r6.e()
                r4.a(r0)
                r4.b(r3)
                java.lang.String r6 = r6.g()
                r4.c(r6)
                r3 = r4
                goto L129
            Ld7:
                java.lang.String r2 = "UBND"
                boolean r2 = r2.equals(r0)
                if (r2 == 0) goto Le0
                goto L129
            Le0:
                java.lang.String r2 = "SECMSG"
                boolean r0 = r2.equals(r0)
                if (r0 == 0) goto L129
                com.xiaomi.push.fl r0 = new com.xiaomi.push.fl
                r0.<init>()
                r0.a(r1)
                r0.a(r2, r3)
                java.lang.String r2 = r6.g()
                r0.c(r2)
                java.lang.String r2 = r6.e()
                r0.a(r2)
                short r2 = r6.a()
                r0.a(r2)
                java.lang.String r2 = r6.f()
                r0.b(r2)
                com.xiaomi.push.service.bg r2 = com.xiaomi.push.service.bg.a()
                java.lang.String r1 = java.lang.String.valueOf(r1)
                java.lang.String r4 = r6.g()
                com.xiaomi.push.service.bg$b r1 = r2.a(r1, r4)
                java.lang.String r1 = r1.h
                byte[] r6 = r6.a(r1)
                r0.a(r6, r3)
                r3 = r0
            L129:
                if (r3 == 0) goto L15f
                com.xiaomi.push.fu r6 = r5.a
                com.xiaomi.push.fw r6 = com.xiaomi.push.fu.a(r6)
                java.util.Map r6 = r6.a()
                java.util.Set r6 = r6.entrySet()
                java.util.Iterator r6 = r6.iterator()
            L13d:
                boolean r0 = r6.hasNext()
                if (r0 == 0) goto L15f
                java.lang.Object r0 = r6.next()
                java.util.Map$Entry r0 = (java.util.Map.Entry) r0
                com.xiaomi.push.fu r1 = r5.a
                com.xiaomi.push.fu$a r1 = com.xiaomi.push.fu.a(r1)
                java.lang.Object r2 = r0.getKey()
                if (r1 == r2) goto L13d
                java.lang.Object r0 = r0.getValue()
                com.xiaomi.push.fw$a r0 = (com.xiaomi.push.fw.a) r0
                r0.a(r3)
                goto L13d
            L15f:
                return
        }

        @Override
        public void a(com.xiaomi.push.gn r4) {
                r3 = this;
                boolean r0 = com.xiaomi.push.fu.a
                java.lang.String r1 = "[Slim] "
                if (r0 == 0) goto L2f
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                com.xiaomi.push.fu r1 = r3.a
                java.text.SimpleDateFormat r1 = com.xiaomi.push.fu.a(r1)
                java.util.Date r2 = new java.util.Date
                r2.<init>()
                java.lang.String r1 = r1.format(r2)
                r0.append(r1)
                java.lang.String r1 = r3.a
                r0.append(r1)
                java.lang.String r1 = " PKT "
                r0.append(r1)
                java.lang.String r4 = r4.a()
                goto L68
            L2f:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                com.xiaomi.push.fu r1 = r3.a
                java.text.SimpleDateFormat r1 = com.xiaomi.push.fu.a(r1)
                java.util.Date r2 = new java.util.Date
                r2.<init>()
                java.lang.String r1 = r1.format(r2)
                r0.append(r1)
                java.lang.String r1 = r3.a
                r0.append(r1)
                java.lang.String r1 = " PKT ["
                r0.append(r1)
                java.lang.String r1 = r4.k()
                r0.append(r1)
                java.lang.String r1 = ","
                r0.append(r1)
                java.lang.String r4 = r4.j()
                r0.append(r4)
                java.lang.String r4 = "]"
            L68:
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                com.xiaomi.channel.commonutils.logger.b.c(r4)
                return
        }

        @Override
        public boolean a(com.xiaomi.push.gn r1) {
                r0 = this;
                r1 = 1
                return r1
        }
    }

    static {
            return
    }

    public fu(com.xiaomi.push.fw r3) {
            r2 = this;
            r2.<init>()
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "hh:mm:ss aaa"
            r0.<init>(r1)
            r2.a = r0
            r0 = 0
            r2.a = r0
            r2.a = r0
            r2.b = r0
            r2.a = r0
            java.lang.String r0 = "[Slim] "
            r2.a = r0
            r2.a = r3
            r2.a()
            return
    }

    static com.xiaomi.push.fu.a a(com.xiaomi.push.fu r0) {
            com.xiaomi.push.fu$a r0 = r0.a
            return r0
    }

    static com.xiaomi.push.fw a(com.xiaomi.push.fu r0) {
            com.xiaomi.push.fw r0 = r0.a
            return r0
    }

    static java.text.SimpleDateFormat a(com.xiaomi.push.fu r0) {
            java.text.SimpleDateFormat r0 = r0.a
            return r0
    }

    private void a() {
            r2 = this;
            com.xiaomi.push.fu$a r0 = new com.xiaomi.push.fu$a
            r1 = 1
            r0.<init>(r2, r1)
            r2.a = r0
            com.xiaomi.push.fu$a r0 = new com.xiaomi.push.fu$a
            r1 = 0
            r0.<init>(r2, r1)
            r2.b = r0
            com.xiaomi.push.fw r0 = r2.a
            com.xiaomi.push.fu$a r1 = r2.a
            r0.a(r1, r1)
            com.xiaomi.push.fw r0 = r2.a
            com.xiaomi.push.fu$a r1 = r2.b
            r0.b(r1, r1)
            com.xiaomi.push.fv r0 = new com.xiaomi.push.fv
            r0.<init>(r2)
            r2.a = r0
            return
    }
}
