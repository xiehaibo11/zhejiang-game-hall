package com.tencent.mm.opensdk.modelmsg;

public class SendTdiAuth {

    public static final class Resp extends com.tencent.mm.opensdk.modelmsg.SendAuth.Resp {
        private static final java.lang.String KEY_AUTH_BUFFER = "_wxapi_sendauth_resp_tdi_buffer";
        private static final java.lang.String TAG = "MicroMsg.SDK.SendTdiAuth.Resp";
        public byte[] tdiAuthBuffer;

        public Resp(android.os.Bundle r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public boolean checkArgs() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_sendauth_resp_tdi_buffer"
                byte[] r2 = r2.getByteArray(r0)
                r1.tdiAuthBuffer = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 31
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                byte[] r0 = r2.tdiAuthBuffer
                java.lang.String r1 = "_wxapi_sendauth_resp_tdi_buffer"
                r3.putByteArray(r1, r0)
                return
        }
    }

    private SendTdiAuth() {
            r0 = this;
            r0.<init>()
            return
    }
}
