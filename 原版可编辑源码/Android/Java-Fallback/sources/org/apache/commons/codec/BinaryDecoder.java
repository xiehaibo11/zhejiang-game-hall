package org.apache.commons.codec;

public interface BinaryDecoder extends org.apache.commons.codec.Decoder {
    byte[] decode(byte[] r1) throws org.apache.commons.codec.DecoderException;
}
