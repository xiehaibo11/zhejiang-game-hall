package com.bianfeng.ymnsdk.gongxiang;

import java.io.DataOutput;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import java.util.List;

class g {
    private final List<h> a;

    g() {
        this.a = new ArrayList();
    }

    public void a(h r2) {
        this.a.add(r2);
    }

    public long a(DataOutput r12) throws IOException {
        int r0 = 0;
        long r2 = 24;
        int r1 = 0;
    L4:
        if (r1 >= this.a.size()) goto L6;
        r2 = r2 + ((long) (this.a.get(r1).a().length + 12));
        r1 = r1 + 1;
        goto L4
    L6:
        ByteBuffer r4 = ByteBuffer.allocate(8);
        r4.order(ByteOrder.LITTLE_ENDIAN);
        r4.putLong(r2);
        r4.flip();
        r12.write(r4.array());
    L8:
        if (r0 >= this.a.size()) goto L10;
        h r42 = this.a.get(r0);
        byte[] r5 = r42.a();
        ByteBuffer r6 = ByteBuffer.allocate(8);
        r6.order(ByteOrder.LITTLE_ENDIAN);
        r6.putLong(r5.length + 4);
        r6.flip();
        r12.write(r6.array());
        ByteBuffer r62 = ByteBuffer.allocate(4);
        r62.order(ByteOrder.LITTLE_ENDIAN);
        r62.putInt(r42.b());
        r62.flip();
        r12.write(r62.array());
        r12.write(r5);
        r0 = r0 + 1;
        goto L8
    L10:
        ByteBuffer r02 = ByteBuffer.allocate(8);
        r02.order(ByteOrder.LITTLE_ENDIAN);
        r02.putLong(r2);
        r02.flip();
        r12.write(r02.array());
        ByteBuffer r03 = ByteBuffer.allocate(8);
        r03.order(ByteOrder.LITTLE_ENDIAN);
        r03.putLong(2334950737559900225L);
        r03.flip();
        r12.write(r03.array());
        ByteBuffer r04 = ByteBuffer.allocate(8);
        r04.order(ByteOrder.LITTLE_ENDIAN);
        r04.putLong(3617552046287187010L);
        r04.flip();
        r12.write(r04.array());
        return r2;
    }
}
