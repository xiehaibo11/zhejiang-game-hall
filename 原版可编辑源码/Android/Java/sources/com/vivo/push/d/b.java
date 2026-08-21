package com.vivo.push.d;

final class b extends com.vivo.push.l {
    b(com.vivo.push.o oVar) {
        super(oVar);
    }

    @Override
    protected final void a(com.vivo.push.o oVar) {
        com.vivo.push.model.b bVarA = com.vivo.push.util.t.a(this.a);
        try {
            if (((com.vivo.push.b.d) oVar).d() ? f.a(this.a) : f.b(this.a)) {
                com.vivo.push.model.b bVarA2 = com.vivo.push.util.t.a(this.a);
                if (bVarA == null || bVarA2 == null || bVarA2.a() == null || !bVarA2.a().equals(bVarA.a())) {
                    if (bVarA != null && bVarA.a() != null) {
                        com.vivo.push.a.a.a(this.a, bVarA.a(), new com.vivo.push.b.y(bVarA.a()));
                    }
                    if (bVarA2 == null || bVarA2.a() == null) {
                        return;
                    }
                    com.vivo.push.a.a.a(this.a, bVarA2.a(), new com.vivo.push.b.f());
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
