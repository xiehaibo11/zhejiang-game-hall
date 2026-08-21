package org.apache.commons.codec;

public interface BinaryEncoder extends org.apache.commons.codec.Encoder {
    byte[] encode(byte[] r1) throws org.apache.commons.codec.EncoderException;
}
