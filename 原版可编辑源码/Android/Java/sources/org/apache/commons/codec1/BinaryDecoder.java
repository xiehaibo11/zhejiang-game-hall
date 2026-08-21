package org.apache.commons.codec1;

public interface BinaryDecoder extends Decoder {
    byte[] decode(byte[] bArr) throws DecoderException;
}
