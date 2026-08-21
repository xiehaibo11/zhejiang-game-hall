package com.bianfeng.ymnsdk.ymndatalib.utils;

public class ResponseDataUtils {
    public int rst_code;
    public int rst_cost;
    public java.lang.String rst_msg;
    public int sub_rst_code;
    public java.lang.String sub_rst_msg;
    public java.lang.String time;

    public ResponseDataUtils(int r6, java.lang.String r7, java.lang.Long r8) {
            r5 = this;
            r5.<init>()
            if (r8 != 0) goto Ld
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.Long r8 = java.lang.Long.valueOf(r0)
        Ld:
            long r0 = r8.longValue()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L1f
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.Long r8 = java.lang.Long.valueOf(r0)
        L1f:
            r5.rst_code = r6
            r5.rst_msg = r7
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r8.longValue()
            long r2 = r0 - r2
            int r6 = (int) r2
            r5.rst_cost = r6
            java.lang.Long r6 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> L3b
            java.lang.String r6 = com.bianfeng.ymnsdk.utilslib.SystemUtils.getRFC3339(r6)     // Catch: java.lang.Exception -> L3b
            r5.time = r6     // Catch: java.lang.Exception -> L3b
            goto L4f
        L3b:
            r6 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r8 = ""
            r6.append(r8)
            java.lang.String r6 = r6.toString()
            r5.time = r6
        L4f:
            r5.setSubdata(r7)
            return
    }

    private void setSubdata(java.lang.String r2) {
            r1 = this;
            java.lang.String[] r2 = com.bianfeng.ymnsdk.ymndatalib.utils.RstMsgSplitUtils.split(r2)
            r0 = 0
            r0 = r2[r0]
            int r0 = java.lang.Integer.parseInt(r0)
            r1.sub_rst_code = r0
            r0 = 1
            r2 = r2[r0]
            r1.sub_rst_msg = r2
            return
    }

    public int getRst_code() {
            r1 = this;
            int r0 = r1.rst_code
            return r0
    }

    public int getRst_cost() {
            r1 = this;
            int r0 = r1.rst_cost
            return r0
    }

    public java.lang.String getRst_msg() {
            r1 = this;
            java.lang.String r0 = r1.rst_msg
            return r0
    }

    public int getSub_rst_code() {
            r1 = this;
            int r0 = r1.sub_rst_code
            return r0
    }

    public java.lang.String getSub_rst_msg() {
            r1 = this;
            java.lang.String r0 = r1.sub_rst_msg
            return r0
    }

    public java.lang.String getTime() {
            r1 = this;
            java.lang.String r0 = r1.time
            return r0
    }
}
