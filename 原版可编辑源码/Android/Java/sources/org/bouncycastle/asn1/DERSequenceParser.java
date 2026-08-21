package org.bouncycastle.asn1;

import java.io.IOException;

public class DERSequenceParser implements ASN1SequenceParser {
    private ASN1StreamParser _parser;

    DERSequenceParser(ASN1StreamParser aSN1StreamParser) {
        this._parser = aSN1StreamParser;
    }

    @Override
    public DERObject getDERObject() {
        try {
            return new DERSequence(this._parser.readVector());
        } catch (IOException e) {
            throw new IllegalStateException(e.getMessage());
        }
    }

    @Override
    public DEREncodable readObject() throws IOException {
        return this._parser.readObject();
    }
}
