package org.bouncycastle.asn1;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStream;

public class ASN1StreamParser {
    private final InputStream _in;
    private final int _limit;

    public ASN1StreamParser(InputStream inputStream) {
        this(inputStream, Integer.MAX_VALUE);
    }

    public ASN1StreamParser(InputStream inputStream, int i) {
        this._in = inputStream;
        this._limit = i;
    }

    public ASN1StreamParser(byte[] bArr) {
        this(new ByteArrayInputStream(bArr), bArr.length);
    }

    private void set00Check(boolean z) {
        InputStream inputStream = this._in;
        if (inputStream instanceof IndefiniteLengthInputStream) {
            ((IndefiniteLengthInputStream) inputStream).setEofOn00(z);
        }
    }

    public DEREncodable readObject() throws IOException {
        int i = this._in.read();
        if (i == -1) {
            return null;
        }
        set00Check(false);
        int i2 = i & 128;
        int tagNumber = (i2 == 0 && (i & 64) == 0) ? 0 : ASN1InputStream.readTagNumber(this._in, i);
        boolean z = (i & 32) != 0;
        int i3 = i & (-33);
        int length = ASN1InputStream.readLength(this._in, this._limit);
        if (length >= 0) {
            DefiniteLengthInputStream definiteLengthInputStream = new DefiniteLengthInputStream(this._in, length);
            return (i & 64) != 0 ? new DERApplicationSpecific(z, tagNumber, definiteLengthInputStream.toByteArray()) : i2 != 0 ? new BERTaggedObjectParser(i, tagNumber, definiteLengthInputStream) : z ? i3 != 4 ? i3 != 16 ? i3 != 17 ? new DERUnknownTag(i, definiteLengthInputStream.toByteArray()) : new DERSetParser(new ASN1StreamParser(definiteLengthInputStream)) : new DERSequenceParser(new ASN1StreamParser(definiteLengthInputStream)) : new BEROctetStringParser(new ASN1StreamParser(definiteLengthInputStream)) : i3 != 4 ? ASN1InputStream.createPrimitiveDERObject(i, definiteLengthInputStream.toByteArray()) : new DEROctetStringParser(definiteLengthInputStream);
        }
        if (!z) {
            throw new IOException("indefinite length primitive encoding encountered");
        }
        IndefiniteLengthInputStream indefiniteLengthInputStream = new IndefiniteLengthInputStream(this._in);
        if (i2 != 0) {
            return new BERTaggedObjectParser(i, tagNumber, indefiniteLengthInputStream);
        }
        ASN1StreamParser aSN1StreamParser = new ASN1StreamParser(indefiniteLengthInputStream);
        if (i3 == 4) {
            return new BEROctetStringParser(aSN1StreamParser);
        }
        if (i3 == 16) {
            return new BERSequenceParser(aSN1StreamParser);
        }
        if (i3 == 17) {
            return new BERSetParser(aSN1StreamParser);
        }
        throw new IOException("unknown BER object encountered");
    }

    ASN1EncodableVector readVector() throws IOException {
        ASN1EncodableVector aSN1EncodableVector = new ASN1EncodableVector();
        while (true) {
            DEREncodable object = readObject();
            if (object == null) {
                return aSN1EncodableVector;
            }
            aSN1EncodableVector.add(object.getDERObject());
        }
    }
}
