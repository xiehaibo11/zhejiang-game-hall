package org.apache.commons.codec1;

public interface BinaryEncoder extends Encoder {
    byte[] encode(byte[] bArr) throws EncoderException;
}
