.class public abstract Lcom/loc/ci;
.super Ljava/lang/Object;
.source "UpdateDataStrategy.java"


# instance fields
.field c:Lcom/loc/ci;

.field d:[B


# direct methods
.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/loc/ci;->d:[B

    return-void
.end method

.method constructor <init>(Lcom/loc/ci;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/loc/ci;->d:[B

    iput-object p1, p0, Lcom/loc/ci;->c:Lcom/loc/ci;

    return-void
.end method


# virtual methods
.method public final a()[B
    .locals 2
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

    iget-object v0, p0, Lcom/loc/ci;->d:[B

    invoke-virtual {p0, v0}, Lcom/loc/ci;->a([B)[B

    move-result-object v0

    iget-object v1, p0, Lcom/loc/ci;->c:Lcom/loc/ci;

    if-eqz v1, :cond_0

    iput-object v0, v1, Lcom/loc/ci;->d:[B

    invoke-virtual {v1}, Lcom/loc/ci;->a()[B

    move-result-object v0

    :cond_0
    return-object v0
.end method

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

.method public b([B)V
    .locals 0

    return-void
.end method
