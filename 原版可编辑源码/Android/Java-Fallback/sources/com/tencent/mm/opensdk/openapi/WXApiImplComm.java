package com.tencent.mm.opensdk.openapi;

class WXApiImplComm {
    private static final java.lang.String TAG = "MicroMsg.SDK.WXMsgImplComm";
    private static final java.lang.String WX_APP_SIGNATURE = "308202eb30820254a00302010202044d36f7a4300d06092a864886f70d01010505003081b9310b300906035504061302383631123010060355040813094775616e67646f6e673111300f060355040713085368656e7a68656e31353033060355040a132c54656e63656e7420546563686e6f6c6f6779285368656e7a68656e2920436f6d70616e79204c696d69746564313a3038060355040b133154656e63656e74204775616e677a686f7520526573656172636820616e6420446576656c6f706d656e742043656e7465723110300e0603550403130754656e63656e74301e170d3131303131393134333933325a170d3431303131313134333933325a3081b9310b300906035504061302383631123010060355040813094775616e67646f6e673111300f060355040713085368656e7a68656e31353033060355040a132c54656e63656e7420546563686e6f6c6f6779285368656e7a68656e2920436f6d70616e79204c696d69746564313a3038060355040b133154656e63656e74204775616e677a686f7520526573656172636820616e6420446576656c6f706d656e742043656e7465723110300e0603550403130754656e63656e7430819f300d06092a864886f70d010101050003818d0030818902818100c05f34b231b083fb1323670bfbe7bdab40c0c0a6efc87ef2072a1ff0d60cc67c8edb0d0847f210bea6cbfaa241be70c86daf56be08b723c859e52428a064555d80db448cdcacc1aea2501eba06f8bad12a4fa49d85cacd7abeb68945a5cb5e061629b52e3254c373550ee4e40cb7c8ae6f7a8151ccd8df582d446f39ae0c5e930203010001300d06092a864886f70d0101050500038181009c8d9d7f2f908c42081b4c764c377109a8b2c70582422125ce545842d5f520aea69550b6bd8bfd94e987b75a3077eb04ad341f481aac266e89d3864456e69fba13df018acdc168b9a19dfd7ad9d9cc6f6ace57c746515f71234df3a053e33ba93ece5cd0fc15f3e389a3f365588a9fcb439e069d3629cd7732a13fff7b891499";

    private WXApiImplComm() {
            r3 = this;
            r3.<init>()
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Class<com.tencent.mm.opensdk.openapi.WXApiImplComm> r2 = com.tencent.mm.opensdk.openapi.WXApiImplComm.class
            java.lang.String r2 = r2.getSimpleName()
            r1.append(r2)
            java.lang.String r2 = " should not be instantiated"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public static boolean isIntentFromWx(android.content.Intent r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "wx_token_key"
            java.lang.String r2 = r2.getStringExtra(r1)
            if (r2 == 0) goto L15
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L13
            goto L15
        L13:
            r2 = 1
            return r2
        L15:
            return r0
    }

    public static boolean validateAppSignature(android.content.Context r6, android.content.pm.Signature[] r7, boolean r8) {
            r6 = 1
            java.lang.String r0 = "MicroMsg.SDK.WXMsgImplComm"
            if (r8 != 0) goto Lb
            java.lang.String r7 = "ignore wechat app signature validation"
        L7:
            com.tencent.mm.opensdk.utils.Log.d(r0, r7)
            return r6
        Lb:
            int r8 = r7.length
            r1 = 0
            r2 = 0
        Le:
            if (r2 >= r8) goto L3f
            r3 = r7[r2]
            if (r3 != 0) goto L15
            goto L3c
        L15:
            java.lang.String r3 = r3.toCharsString()
            java.lang.String r3 = r3.toLowerCase()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "check signature:"
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.tencent.mm.opensdk.utils.Log.d(r0, r4)
            java.lang.String r4 = "308202eb30820254a00302010202044d36f7a4300d06092a864886f70d01010505003081b9310b300906035504061302383631123010060355040813094775616e67646f6e673111300f060355040713085368656e7a68656e31353033060355040a132c54656e63656e7420546563686e6f6c6f6779285368656e7a68656e2920436f6d70616e79204c696d69746564313a3038060355040b133154656e63656e74204775616e677a686f7520526573656172636820616e6420446576656c6f706d656e742043656e7465723110300e0603550403130754656e63656e74301e170d3131303131393134333933325a170d3431303131313134333933325a3081b9310b300906035504061302383631123010060355040813094775616e67646f6e673111300f060355040713085368656e7a68656e31353033060355040a132c54656e63656e7420546563686e6f6c6f6779285368656e7a68656e2920436f6d70616e79204c696d69746564313a3038060355040b133154656e63656e74204775616e677a686f7520526573656172636820616e6420446576656c6f706d656e742043656e7465723110300e0603550403130754656e63656e7430819f300d06092a864886f70d010101050003818d0030818902818100c05f34b231b083fb1323670bfbe7bdab40c0c0a6efc87ef2072a1ff0d60cc67c8edb0d0847f210bea6cbfaa241be70c86daf56be08b723c859e52428a064555d80db448cdcacc1aea2501eba06f8bad12a4fa49d85cacd7abeb68945a5cb5e061629b52e3254c373550ee4e40cb7c8ae6f7a8151ccd8df582d446f39ae0c5e930203010001300d06092a864886f70d0101050500038181009c8d9d7f2f908c42081b4c764c377109a8b2c70582422125ce545842d5f520aea69550b6bd8bfd94e987b75a3077eb04ad341f481aac266e89d3864456e69fba13df018acdc168b9a19dfd7ad9d9cc6f6ace57c746515f71234df3a053e33ba93ece5cd0fc15f3e389a3f365588a9fcb439e069d3629cd7732a13fff7b891499"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L3c
            java.lang.String r7 = "pass"
            goto L7
        L3c:
            int r2 = r2 + 1
            goto Le
        L3f:
            return r1
    }

    public static boolean validateAppSignatureForPackage(android.content.Context r3, java.lang.String r4, boolean r5) {
            if (r5 != 0) goto Lb
            java.lang.String r3 = "MicroMsg.SDK.WXMsgImplComm"
            java.lang.String r4 = "ignore wechat app signature validation"
            com.tencent.mm.opensdk.utils.Log.d(r3, r4)
            r3 = 1
            return r3
        Lb:
            r0 = 0
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Throwable -> L1d
            r2 = 64
            android.content.pm.PackageInfo r4 = r1.getPackageInfo(r4, r2)     // Catch: java.lang.Throwable -> L1d
            android.content.pm.Signature[] r4 = r4.signatures
            boolean r3 = validateAppSignature(r3, r4, r5)
            return r3
        L1d:
            return r0
    }
}
