.class final Lcom/tkay/expressad/exoplayer/g/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/g/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/g/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/m;)Z
    .locals 1

    .line 61
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    const-string v0, "application/id3"

    .line 62
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "application/x-emsg"

    .line 63
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "application/x-scte35"

    .line 64
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    return p1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/m;)Lcom/tkay/expressad/exoplayer/g/b;
    .locals 4

    .line 69
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const v1, -0x4a682ec7

    const/4 v2, 0x2

    const/4 v3, 0x1

    if-eq v0, v1, :cond_2

    const v1, 0x44ce7ed0

    if-eq v0, v1, :cond_1

    const v1, 0x62816bb7

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "application/x-scte35"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p1, v2

    goto :goto_1

    :cond_1
    const-string v0, "application/x-emsg"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p1, v3

    goto :goto_1

    :cond_2
    const-string v0, "application/id3"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    const/4 p1, 0x0

    goto :goto_1

    :cond_3
    :goto_0
    const/4 p1, -0x1

    :goto_1
    if-eqz p1, :cond_6

    if-eq p1, v3, :cond_5

    if-ne p1, v2, :cond_4

    .line 75
    new-instance p1, Lcom/tkay/expressad/exoplayer/g/c/c;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/g/c/c;-><init>()V

    return-object p1

    .line 77
    :cond_4
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "Attempted to create decoder for unsupported format"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 73
    :cond_5
    new-instance p1, Lcom/tkay/expressad/exoplayer/g/a/b;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/g/a/b;-><init>()V

    return-object p1

    .line 71
    :cond_6
    new-instance p1, Lcom/tkay/expressad/exoplayer/g/b/g;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/g/b/g;-><init>()V

    return-object p1
.end method
