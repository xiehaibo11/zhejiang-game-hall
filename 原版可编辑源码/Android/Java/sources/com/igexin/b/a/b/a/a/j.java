package com.igexin.b.a.b.a.a;

import java.util.Comparator;

class j implements Comparator<m> {
    final f a;

    j(f fVar) {
        this.a = fVar;
    }

    @Override
    public int compare(m mVar, m mVar2) {
        if (mVar == null) {
            return 1;
        }
        if (mVar2 == null) {
            return -1;
        }
        if (((long) mVar.y) + mVar.w > ((long) mVar2.y) + mVar2.w) {
            return 1;
        }
        return ((long) mVar.y) + mVar.w < ((long) mVar2.y) + mVar2.w ? -1 : 0;
    }
}
