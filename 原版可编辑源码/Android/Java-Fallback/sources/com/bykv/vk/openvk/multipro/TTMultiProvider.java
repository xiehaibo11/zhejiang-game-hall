package com.bykv.vk.openvk.multipro;

public class TTMultiProvider extends android.content.ContentProvider {
    public TTMultiProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.bykv.vk.openvk.ITTProvider rg() {
            r3 = this;
            com.bykv.vk.openvk.TTVfManager r0 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
            r1 = 0
            if (r0 == 0) goto L14
            com.bykv.vk.openvk.TTVfManager r0 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
            java.lang.Class<com.bykv.vk.openvk.ITTProvider> r2 = com.bykv.vk.openvk.ITTProvider.class
            java.lang.Object r0 = r0.getExtra(r2, r1)
            r1 = r0
            com.bykv.vk.openvk.ITTProvider r1 = (com.bykv.vk.openvk.ITTProvider) r1
        L14:
            return r1
    }

    @Override
    public int delete(android.net.Uri r2, java.lang.String r3, java.lang.String[] r4) {
            r1 = this;
            com.bykv.vk.openvk.ITTProvider r0 = r1.rg()
            if (r0 == 0) goto Lf
            com.bykv.vk.openvk.ITTProvider r0 = r1.rg()
            int r2 = r0.delete(r2, r3, r4)
            goto L10
        Lf:
            r2 = 0
        L10:
            return r2
    }

    @Override
    public java.lang.String getType(android.net.Uri r2) {
            r1 = this;
            com.bykv.vk.openvk.ITTProvider r0 = r1.rg()
            if (r0 == 0) goto Lf
            com.bykv.vk.openvk.ITTProvider r0 = r1.rg()
            java.lang.String r2 = r0.getType(r2)
            goto L11
        Lf:
            java.lang.String r2 = ""
        L11:
            return r2
    }

    @Override
    public android.net.Uri insert(android.net.Uri r2, android.content.ContentValues r3) {
            r1 = this;
            com.bykv.vk.openvk.ITTProvider r0 = r1.rg()
            if (r0 == 0) goto Lf
            com.bykv.vk.openvk.ITTProvider r0 = r1.rg()
            android.net.Uri r2 = r0.insert(r2, r3)
            goto L10
        Lf:
            r2 = 0
        L10:
            return r2
    }

    @Override
    public boolean onCreate() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r8, java.lang.String[] r9, java.lang.String r10, java.lang.String[] r11, java.lang.String r12) {
            r7 = this;
            com.bykv.vk.openvk.ITTProvider r0 = r7.rg()
            if (r0 == 0) goto L14
            com.bykv.vk.openvk.ITTProvider r1 = r7.rg()
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            android.database.Cursor r8 = r1.query(r2, r3, r4, r5, r6)
            goto L15
        L14:
            r8 = 0
        L15:
            return r8
    }

    @Override
    public int update(android.net.Uri r2, android.content.ContentValues r3, java.lang.String r4, java.lang.String[] r5) {
            r1 = this;
            com.bykv.vk.openvk.ITTProvider r0 = r1.rg()
            if (r0 == 0) goto Lf
            com.bykv.vk.openvk.ITTProvider r0 = r1.rg()
            int r2 = r0.update(r2, r3, r4, r5)
            goto L10
        Lf:
            r2 = 0
        L10:
            return r2
    }
}
