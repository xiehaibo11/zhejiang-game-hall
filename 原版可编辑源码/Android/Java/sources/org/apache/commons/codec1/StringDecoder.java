package org.apache.commons.codec1;

public interface StringDecoder extends Decoder {
    String decode(String str) throws DecoderException;
}
