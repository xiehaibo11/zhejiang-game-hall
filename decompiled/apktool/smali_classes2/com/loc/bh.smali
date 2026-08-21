.class public abstract Lcom/loc/bh;
.super Ljava/lang/Object;
.source "EncryptProcessor.java"


# instance fields
.field a:Lcom/loc/bh;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method constructor <init>(Lcom/loc/bh;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/loc/bh;->a:Lcom/loc/bh;

    return-void
.end method


# virtual methods
.method protected abstract a([B)[B
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/security/cert/CertificateException;,
            Ljava/security/NoSuchAlgorithmException;,
            Ljava/io/IOException;,
            Ljavax/crypto/BadPaddingException;,
            Ljavax/crypto/IllegalBlockSizeException;,
            Ljavax/crypto/NoSuchPaddingException;,
            Ljava/security/InvalidKeyException;,
            Ljava/security/spec/InvalidKeySpecException;
        }
    .end annotation
.end method

.method public final b([B)[B
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/security/cert/CertificateException;,
            Ljava/security/NoSuchAlgorithmException;,
            Ljava/io/IOException;,
            Ljavax/crypto/BadPaddingException;,
            Ljavax/crypto/IllegalBlockSizeException;,
            Ljavax/crypto/NoSuchPaddingException;,
            Ljava/security/InvalidKeyException;,
            Ljava/security/spec/InvalidKeySpecException;
        }
    .end annotation

    iget-object v0, p0, Lcom/loc/bh;->a:Lcom/loc/bh;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/loc/bh;->b([B)[B

    move-result-object p1

    :cond_0
    invoke-virtual {p0, p1}, Lcom/loc/bh;->a([B)[B

    move-result-object p1

    return-object p1
.end method
