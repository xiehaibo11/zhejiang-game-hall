package org.apache.commons.codec1;

public interface StringEncoder extends Encoder {
    String encode(String str) throws EncoderException;
}
