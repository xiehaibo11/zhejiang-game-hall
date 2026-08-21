package org.apache.commons.codec1.language;

import org.apache.commons.codec1.EncoderException;
import org.apache.commons.codec1.StringEncoder;

public abstract class AbstractCaverphone implements StringEncoder {
    @Override
    public Object encode(Object obj) throws EncoderException {
        if (!(obj instanceof String)) {
            throw new EncoderException("Parameter supplied to Caverphone encode is not of type java.lang.String");
        }
        return encode((String) obj);
    }

    public boolean isEncodeEqual(String str, String str2) throws EncoderException {
        return encode(str).equals(encode(str2));
    }
}
