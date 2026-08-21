package com.bianfeng.ymnsdk.gongxiang;

class g {
    private final java.util.List<com.bianfeng.ymnsdk.gongxiang.h> a;

    g() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            return
    }

    public long a(java.io.DataOutput r12) throws java.io.IOException {
            r11 = this;
            r0 = 24
            r2 = 0
        L3:
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r3 = r11.a
            int r3 = r3.size()
            if (r2 >= r3) goto L1f
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r3 = r11.a
            java.lang.Object r3 = r3.get(r2)
            com.bianfeng.ymnsdk.gongxiang.h r3 = (com.bianfeng.ymnsdk.gongxiang.h) r3
            byte[] r4 = r3.a()
            int r5 = r4.length
            int r5 = r5 + 12
            long r5 = (long) r5
            long r0 = r0 + r5
            int r2 = r2 + 1
            goto L3
        L1f:
            r2 = 8
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocate(r2)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.LITTLE_ENDIAN
            r3.order(r4)
            r3.putLong(r0)
            r3.flip()
            byte[] r4 = r3.array()
            r12.write(r4)
            r4 = 0
        L38:
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r5 = r11.a
            int r5 = r5.size()
            if (r4 >= r5) goto L86
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r5 = r11.a
            java.lang.Object r5 = r5.get(r4)
            com.bianfeng.ymnsdk.gongxiang.h r5 = (com.bianfeng.ymnsdk.gongxiang.h) r5
            byte[] r6 = r5.a()
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocate(r2)
            java.nio.ByteOrder r7 = java.nio.ByteOrder.LITTLE_ENDIAN
            r3.order(r7)
            int r7 = r6.length
            r8 = 4
            int r7 = r7 + r8
            long r9 = (long) r7
            r3.putLong(r9)
            r3.flip()
            byte[] r7 = r3.array()
            r12.write(r7)
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocate(r8)
            java.nio.ByteOrder r7 = java.nio.ByteOrder.LITTLE_ENDIAN
            r3.order(r7)
            int r7 = r5.b()
            r3.putInt(r7)
            r3.flip()
            byte[] r7 = r3.array()
            r12.write(r7)
            r12.write(r6)
            int r4 = r4 + 1
            goto L38
        L86:
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocate(r2)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.LITTLE_ENDIAN
            r3.order(r4)
            r3.putLong(r0)
            r3.flip()
            byte[] r4 = r3.array()
            r12.write(r4)
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocate(r2)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.LITTLE_ENDIAN
            r3.order(r4)
            r4 = 2334950737559900225(0x20676953204b5041, double:1.3968830566012645E-152)
            r3.putLong(r4)
            r3.flip()
            byte[] r4 = r3.array()
            r12.write(r4)
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.allocate(r2)
            java.nio.ByteOrder r3 = java.nio.ByteOrder.LITTLE_ENDIAN
            r2.order(r3)
            r3 = 3617552046287187010(0x3234206b636f6c42, double:7.465385175170059E-67)
            r2.putLong(r3)
            r2.flip()
            byte[] r3 = r2.array()
            r12.write(r3)
            return r0
    }

    public void a(com.bianfeng.ymnsdk.gongxiang.h r2) {
            r1 = this;
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r0 = r1.a
            r0.add(r2)
            return
    }
}
