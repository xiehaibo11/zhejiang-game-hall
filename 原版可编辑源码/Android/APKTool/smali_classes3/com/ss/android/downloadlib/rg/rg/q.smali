.class public Lcom/ss/android/downloadlib/rg/rg/q;
.super Ljava/lang/Object;


# direct methods
.method public static rg(Ljava/io/InputStream;Ljava/lang/String;)[B
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 24
    invoke-static {p1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object p1

    const/16 v0, 0x1000

    new-array v0, v0, [B

    .line 27
    :goto_0
    invoke-virtual {p0, v0}, Ljava/io/InputStream;->read([B)I

    move-result v1

    if-gtz v1, :cond_0

    .line 29
    invoke-virtual {p1}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0

    return-object p0

    :cond_0
    const/4 v2, 0x0

    .line 31
    invoke-virtual {p1, v0, v2, v1}, Ljava/security/MessageDigest;->update([BII)V

    goto :goto_0
.end method

.method public static rg(Ljava/lang/CharSequence;Ljava/lang/String;)[B
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 16
    invoke-interface {p0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/rg/rg/q;->rg([BLjava/lang/String;)[B

    move-result-object p0

    return-object p0
.end method

.method public static rg([BLjava/lang/String;)[B
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 20
    new-instance v0, Ljava/io/ByteArrayInputStream;

    invoke-direct {v0, p0}, Ljava/io/ByteArrayInputStream;-><init>([B)V

    invoke-static {v0, p1}, Lcom/ss/android/downloadlib/rg/rg/q;->rg(Ljava/io/InputStream;Ljava/lang/String;)[B

    move-result-object p0

    return-object p0
.end method
