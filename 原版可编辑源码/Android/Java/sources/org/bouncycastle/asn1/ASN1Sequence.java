package org.bouncycastle.asn1;

import java.io.IOException;
import java.util.Enumeration;
import java.util.Vector;

public abstract class ASN1Sequence extends ASN1Object {
    private Vector seq = new Vector();

    public static ASN1Sequence getInstance(Object obj) {
        if (obj == null || (obj instanceof ASN1Sequence)) {
            return (ASN1Sequence) obj;
        }
        throw new IllegalArgumentException("unknown object in getInstance: " + obj.getClass().getName());
    }

    public static ASN1Sequence getInstance(ASN1TaggedObject aSN1TaggedObject, boolean z) {
        if (z) {
            if (!aSN1TaggedObject.isExplicit()) {
                throw new IllegalArgumentException("object implicit - explicit expected.");
            }
        } else {
            if (aSN1TaggedObject.isExplicit()) {
                return aSN1TaggedObject instanceof BERTaggedObject ? new BERSequence(aSN1TaggedObject.getObject()) : new DERSequence(aSN1TaggedObject.getObject());
            }
            if (!(aSN1TaggedObject.getObject() instanceof ASN1Sequence)) {
                throw new IllegalArgumentException("unknown object in getInstance: " + aSN1TaggedObject.getClass().getName());
            }
        }
        return (ASN1Sequence) aSN1TaggedObject.getObject();
    }

    protected void addObject(DEREncodable dEREncodable) {
        this.seq.addElement(dEREncodable);
    }

    @Override
    boolean asn1Equals(DERObject dERObject) {
        if (!(dERObject instanceof ASN1Sequence)) {
            return false;
        }
        ASN1Sequence aSN1Sequence = (ASN1Sequence) dERObject;
        if (size() != aSN1Sequence.size()) {
            return false;
        }
        Enumeration objects = getObjects();
        Enumeration objects2 = aSN1Sequence.getObjects();
        while (objects.hasMoreElements()) {
            DERObject dERObject2 = ((DEREncodable) objects.nextElement()).getDERObject();
            DERObject dERObject3 = ((DEREncodable) objects2.nextElement()).getDERObject();
            if (dERObject2 != dERObject3 && (dERObject2 == null || !dERObject2.equals(dERObject3))) {
                return false;
            }
        }
        return true;
    }

    @Override
    abstract void encode(DEROutputStream dEROutputStream) throws IOException;

    public DEREncodable getObjectAt(int i) {
        return (DEREncodable) this.seq.elementAt(i);
    }

    public Enumeration getObjects() {
        return this.seq.elements();
    }

    @Override
    public int hashCode() {
        Enumeration objects = getObjects();
        int iHashCode = 0;
        while (objects.hasMoreElements()) {
            Object objNextElement = objects.nextElement();
            if (objNextElement != null) {
                iHashCode ^= objNextElement.hashCode();
            }
        }
        return iHashCode;
    }

    public ASN1SequenceParser parser() {
        return new ASN1SequenceParser() {
            private int index;
            private final int max;

            {
                this.max = ASN1Sequence.this.size();
            }

            @Override
            public DERObject getDERObject() {
                return this;
            }

            @Override
            public DEREncodable readObject() throws IOException {
                int i = this.index;
                if (i == this.max) {
                    return null;
                }
                ASN1Sequence aSN1Sequence = ASN1Sequence.this;
                this.index = i + 1;
                DEREncodable objectAt = aSN1Sequence.getObjectAt(i);
                return objectAt instanceof ASN1Sequence ? ((ASN1Sequence) objectAt).parser() : objectAt instanceof ASN1Set ? ((ASN1Set) objectAt).parser() : objectAt;
            }
        };
    }

    public int size() {
        return this.seq.size();
    }

    public String toString() {
        return this.seq.toString();
    }
}
