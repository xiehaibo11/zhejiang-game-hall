.class public final Lcom/tkay/expressad/exoplayer/j/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/h;


# static fields
.field public static final a:Ljava/lang/String; = "data"


# instance fields
.field private b:Lcom/tkay/expressad/exoplayer/j/k;

.field private c:I

.field private d:[B


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a([BII)I
    .locals 2

    if-nez p3, :cond_0

    const/4 p1, 0x0

    return p1

    .line 70
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/f;->d:[B

    array-length v0, v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/j/f;->c:I

    sub-int/2addr v0, v1

    if-nez v0, :cond_1

    const/4 p1, -0x1

    return p1

    .line 74
    :cond_1
    invoke-static {p3, v0}, Ljava/lang/Math;->min(II)I

    move-result p3

    .line 75
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/f;->d:[B

    iget v1, p0, Lcom/tkay/expressad/exoplayer/j/f;->c:I

    invoke-static {v0, v1, p1, p2, p3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 76
    iget p1, p0, Lcom/tkay/expressad/exoplayer/j/f;->c:I

    add-int/2addr p1, p3

    iput p1, p0, Lcom/tkay/expressad/exoplayer/j/f;->c:I

    return p3
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/k;)J
    .locals 3

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/f;->b:Lcom/tkay/expressad/exoplayer/j/k;

    .line 42
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/j/k;->c:Landroid/net/Uri;

    .line 43
    invoke-virtual {p1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    const-string v1, "data"

    .line 44
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 47
    invoke-virtual {p1}, Landroid/net/Uri;->getSchemeSpecificPart()Ljava/lang/String;

    move-result-object v0

    const-string v1, ","

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 48
    array-length v1, v0

    const/4 v2, 0x2

    if-ne v1, v2, :cond_1

    const/4 p1, 0x1

    .line 51
    aget-object p1, v0, p1

    const/4 v1, 0x0

    .line 52
    aget-object v0, v0, v1

    const-string v2, ";base64"

    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 54
    :try_start_0
    invoke-static {p1, v1}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/f;->d:[B
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 56
    new-instance v1, Lcom/tkay/expressad/exoplayer/t;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v2, "Error while parsing Base64 encoded string: "

    invoke-virtual {v2, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1, v0}, Lcom/tkay/expressad/exoplayer/t;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1

    :cond_0
    const-string v0, "US-ASCII"

    .line 60
    invoke-static {p1, v0}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/f;->d:[B

    .line 62
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j/f;->d:[B

    array-length p1, p1

    int-to-long v0, p1

    return-wide v0

    .line 49
    :cond_1
    new-instance v0, Lcom/tkay/expressad/exoplayer/t;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "Unexpected URI format: "

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/t;-><init>(Ljava/lang/String;)V

    throw v0

    .line 45
    :cond_2
    new-instance p1, Lcom/tkay/expressad/exoplayer/t;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "Unsupported scheme: "

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/t;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final a()Landroid/net/Uri;
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/f;->b:Lcom/tkay/expressad/exoplayer/j/k;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/j/k;->c:Landroid/net/Uri;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    .line 87
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/f;->b:Lcom/tkay/expressad/exoplayer/j/k;

    .line 88
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/f;->d:[B

    return-void
.end method
