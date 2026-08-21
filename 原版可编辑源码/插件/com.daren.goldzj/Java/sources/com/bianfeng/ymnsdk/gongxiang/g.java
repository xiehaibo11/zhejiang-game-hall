package com.bianfeng.ymnsdk.gongxiang;

import java.io.DataOutput;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import java.util.List;

class g {
    private final List<h> a = new ArrayList();

    g() {
    }

    public void a(h hVar) {
        this.a.add(hVar);
    }

    public long a(DataOutput dataOutput) throws IOException {
        long length = 24;
        for (int i = 0; i < this.a.size(); i++) {
            length += (long) (this.a.get(i).a().length + 12);
        }
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(8);
        byteBufferAllocate.order(ByteOrder.LITTLE_ENDIAN);
        byteBufferAllocate.putLong(length);
        byteBufferAllocate.flip();
        dataOutput.write(byteBufferAllocate.array());
        for (int i2 = 0; i2 < this.a.size(); i2++) {
            h hVar = this.a.get(i2);
            byte[] bArrA = hVar.a();
            ByteBuffer byteBufferAllocate2 = ByteBuffer.allocate(8);
            byteBufferAllocate2.order(ByteOrder.LITTLE_ENDIAN);
            byteBufferAllocate2.putLong(bArrA.length + 4);
            byteBufferAllocate2.flip();
            dataOutput.write(byteBufferAllocate2.array());
            ByteBuffer byteBufferAllocate3 = ByteBuffer.allocate(4);
            byteBufferAllocate3.order(ByteOrder.LITTLE_ENDIAN);
            byteBufferAllocate3.putInt(hVar.b());
            byteBufferAllocate3.flip();
            dataOutput.write(byteBufferAllocate3.array());
            dataOutput.write(bArrA);
        }
        ByteBuffer byteBufferAllocate4 = ByteBuffer.allocate(8);
        byteBufferAllocate4.order(ByteOrder.LITTLE_ENDIAN);
        byteBufferAllocate4.putLong(length);
        byteBufferAllocate4.flip();
        dataOutput.write(byteBufferAllocate4.array());
        ByteBuffer byteBufferAllocate5 = ByteBuffer.allocate(8);
        byteBufferAllocate5.order(ByteOrder.LITTLE_ENDIAN);
        byteBufferAllocate5.putLong(2334950737559900225L);
        byteBufferAllocate5.flip();
        dataOutput.write(byteBufferAllocate5.array());
        ByteBuffer byteBufferAllocate6 = ByteBuffer.allocate(8);
        byteBufferAllocate6.order(ByteOrder.LITTLE_ENDIAN);
        byteBufferAllocate6.putLong(3617552046287187010L);
        byteBufferAllocate6.flip();
        dataOutput.write(byteBufferAllocate6.array());
        return length;
    }
}
