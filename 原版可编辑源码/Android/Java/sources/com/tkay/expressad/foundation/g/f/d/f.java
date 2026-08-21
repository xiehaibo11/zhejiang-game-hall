package com.tkay.expressad.foundation.g.f.d;

import com.tkay.expressad.foundation.g.f.i;
import com.tkay.expressad.foundation.g.f.k;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.io.UnsupportedEncodingException;
import java.util.HashMap;
import java.util.Map;
import org.json.HTTP;

public class f extends i<String> {
    private static final String c = f.class.getSimpleName();
    private Map<String, String> d;
    private com.tkay.expressad.foundation.g.f.c.b[] e;
    private String f;

    private f(int i, String str, Map<String, String> map, com.tkay.expressad.foundation.g.f.c.b[] bVarArr, com.tkay.expressad.foundation.g.f.e<String> eVar) {
        super(i, str, eVar);
        this.f = "---------Ij5ei4KM7KM7ae0KM7cH2ae0Ij5Ef1";
        this.d = map;
        this.e = bVarArr;
    }

    @Override
    public final void i() {
        super.i();
        HashMap map = new HashMap();
        map.put("Content-Type", "multipart/form-data; boundary=" + this.f);
        a((Map<String, String>) map);
    }

    @Override
    public final byte[] h() {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : this.d.entrySet()) {
            sb.append("--");
            sb.append(this.f);
            sb.append(HTTP.CRLF);
            sb.append("Content-Disposition: form-data; name=\"" + entry.getKey() + "\"\r\n\r\n");
            sb.append(entry.getValue());
            sb.append(HTTP.CRLF);
        }
        return sb.toString().getBytes();
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$PrimitiveArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override
    public final void a(OutputStream outputStream) {
        DataOutputStream dataOutputStream = (DataOutputStream) outputStream;
        try {
            try {
                if (this.e != null) {
                    for (com.tkay.expressad.foundation.g.f.c.b bVar : this.e) {
                        StringBuilder sb = new StringBuilder();
                        sb.append("--");
                        sb.append(this.f);
                        sb.append(HTTP.CRLF);
                        sb.append("Content-Disposition: form-data;name=\"" + bVar.f() + "\";filename=\"" + bVar.e() + "\"\r\n");
                        StringBuilder sb2 = new StringBuilder("Content-Type: ");
                        sb2.append(bVar.g());
                        sb2.append(com.sigmob.sdk.base.network.c.c);
                        sb.append(sb2.toString());
                        dataOutputStream.write(sb.toString().getBytes());
                        if (bVar.c() != null) {
                            byte[] bArr = new byte[1024];
                            int i = 0;
                            while (true) {
                                int i2 = bVar.c().read(bArr);
                                if (i2 == -1) {
                                    break;
                                }
                                dataOutputStream.write(bArr, 0, i2);
                                i += i2;
                                if (this.b != null) {
                                    this.b.a(bVar.a(), i);
                                }
                            }
                            bVar.c().close();
                        } else {
                            dataOutputStream.write(bVar.d(), 0, bVar.d().length);
                        }
                        dataOutputStream.write(HTTP.CRLF.getBytes());
                    }
                }
                dataOutputStream.writeBytes("--" + this.f + "--\r\n");
                dataOutputStream.flush();
            } catch (IOException e) {
                e.getMessage();
                this.b.a(new com.tkay.expressad.foundation.g.f.a.a(2, null));
                try {
                    dataOutputStream.close();
                } catch (IOException e2) {
                    e2.printStackTrace();
                }
            }
        } finally {
            try {
                dataOutputStream.close();
            } catch (IOException e3) {
                e3.printStackTrace();
            }
        }
    }

    @Override
    protected final k<String> a(com.tkay.expressad.foundation.g.f.f.c cVar) {
        try {
            return k.a(new String(cVar.b, com.tkay.expressad.foundation.g.f.g.e.a(cVar.d)), cVar);
        } catch (UnsupportedEncodingException e) {
            e.getMessage();
            return k.a(new com.tkay.expressad.foundation.g.f.a.a(8, cVar));
        }
    }
}
