package org.bouncycastle.asn1.x509;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.util.Hashtable;
import java.util.Vector;
import org.bouncycastle.asn1.DEREncodable;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.DEROctetString;
import org.bouncycastle.asn1.DEROutputStream;

public class X509ExtensionsGenerator {
    private Hashtable extensions = new Hashtable();
    private Vector extOrdering = new Vector();

    public void addExtension(DERObjectIdentifier dERObjectIdentifier, boolean z, DEREncodable dEREncodable) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            new DEROutputStream(byteArrayOutputStream).writeObject(dEREncodable);
            addExtension(dERObjectIdentifier, z, byteArrayOutputStream.toByteArray());
        } catch (IOException e) {
            throw new IllegalArgumentException("error encoding value: " + e);
        }
    }

    public void addExtension(DERObjectIdentifier dERObjectIdentifier, boolean z, byte[] bArr) {
        if (!this.extensions.containsKey(dERObjectIdentifier)) {
            this.extOrdering.addElement(dERObjectIdentifier);
            this.extensions.put(dERObjectIdentifier, new X509Extension(z, new DEROctetString(bArr)));
        } else {
            throw new IllegalArgumentException("extension " + dERObjectIdentifier + " already added");
        }
    }

    public X509Extensions generate() {
        return new X509Extensions(this.extOrdering, this.extensions);
    }

    public boolean isEmpty() {
        return this.extOrdering.isEmpty();
    }

    public void reset() {
        this.extensions = new Hashtable();
        this.extOrdering = new Vector();
    }
}
