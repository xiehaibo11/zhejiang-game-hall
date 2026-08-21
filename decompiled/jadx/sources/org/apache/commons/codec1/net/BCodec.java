package org.apache.commons.codec1.net;

import java.io.UnsupportedEncodingException;
import java.nio.charset.Charset;
import org.apache.commons.codec1.Charsets;
import org.apache.commons.codec1.DecoderException;
import org.apache.commons.codec1.EncoderException;
import org.apache.commons.codec1.StringDecoder;
import org.apache.commons.codec1.StringEncoder;
import org.apache.commons.codec1.binary.Base64;

/* JADX INFO: loaded from: classes4.dex */
public class BCodec extends RFC1522Codec implements StringEncoder, StringDecoder {
    private final Charset charset;

    @Override // org.apache.commons.codec1.net.RFC1522Codec
    protected String getEncoding() {
        return "B";
    }

    public BCodec() {
        this(Charsets.UTF_8);
    }

    public BCodec(Charset charset) {
        this.charset = charset;
    }

    public BCodec(String str) {
        this(Charset.forName(str));
    }

    @Override // org.apache.commons.codec1.net.RFC1522Codec
    protected byte[] doEncoding(byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        return Base64.encodeBase64(bArr);
    }

    @Override // org.apache.commons.codec1.net.RFC1522Codec
    protected byte[] doDecoding(byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        return Base64.decodeBase64(bArr);
    }

    public String encode(String str, Charset charset) throws EncoderException {
        if (str == null) {
            return null;
        }
        return encodeText(str, charset);
    }

    public String encode(String str, String str2) throws EncoderException {
        if (str == null) {
            return null;
        }
        try {
            return encodeText(str, str2);
        } catch (UnsupportedEncodingException e) {
            throw new EncoderException(e.getMessage(), e);
        }
    }

    @Override // org.apache.commons.codec1.StringEncoder
    public String encode(String str) throws EncoderException {
        if (str == null) {
            return null;
        }
        return encode(str, getCharset());
    }

    @Override // org.apache.commons.codec1.StringDecoder
    public String decode(String str) throws DecoderException {
        if (str == null) {
            return null;
        }
        try {
            return decodeText(str);
        } catch (UnsupportedEncodingException e) {
            throw new DecoderException(e.getMessage(), e);
        }
    }

    @Override // org.apache.commons.codec1.Encoder
    public Object encode(Object obj) throws EncoderException {
        if (obj == null) {
            return null;
        }
        if (obj instanceof String) {
            return encode((String) obj);
        }
        throw new EncoderException("Objects of type " + obj.getClass().getName() + " cannot be encoded using BCodec");
    }

    @Override // org.apache.commons.codec1.Decoder
    public Object decode(Object obj) throws DecoderException {
        if (obj == null) {
            return null;
        }
        if (obj instanceof String) {
            return decode((String) obj);
        }
        throw new DecoderException("Objects of type " + obj.getClass().getName() + " cannot be decoded using BCodec");
    }

    public Charset getCharset() {
        return this.charset;
    }

    public String getDefaultCharset() {
        return this.charset.name();
    }
}
