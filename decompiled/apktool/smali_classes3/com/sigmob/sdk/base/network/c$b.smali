.class public Lcom/sigmob/sdk/base/network/c$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/network/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/network/c$b$a;
    }
.end annotation


# instance fields
.field private a:I

.field private b:Ljava/lang/String;

.field private c:I

.field private d:Ljava/lang/String;

.field private e:[B

.field private f:I


# direct methods
.method public constructor <init>(Ljava/lang/String;ILjava/lang/String;I)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/sigmob/sdk/base/network/c$b;->a:I

    const/16 v0, 0x2800

    new-array v0, v0, [B

    iput-object v0, p0, Lcom/sigmob/sdk/base/network/c$b;->e:[B

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/network/c$b;->f:I

    iput-object p1, p0, Lcom/sigmob/sdk/base/network/c$b;->b:Ljava/lang/String;

    iput p2, p0, Lcom/sigmob/sdk/base/network/c$b;->a:I

    iput-object p3, p0, Lcom/sigmob/sdk/base/network/c$b;->d:Ljava/lang/String;

    iput p4, p0, Lcom/sigmob/sdk/base/network/c$b;->c:I

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;[BI)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "[BI)",
            "Ljava/util/List<",
            "[B>;"
        }
    .end annotation

    iget v0, p0, Lcom/sigmob/sdk/base/network/c$b;->f:I

    add-int/2addr v0, p4

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/c$b;->e:[B

    array-length v1, v1

    if-lt v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/network/c$b;->b()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/c$b;->e:[B

    iget v1, p0, Lcom/sigmob/sdk/base/network/c$b;->f:I

    const/4 v2, 0x0

    invoke-static {p3, v2, v0, v1, p4}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget p3, p0, Lcom/sigmob/sdk/base/network/c$b;->f:I

    add-int/2addr p3, p4

    iput p3, p0, Lcom/sigmob/sdk/base/network/c$b;->f:I

    new-instance p3, Ljava/util/ArrayList;

    invoke-direct {p3}, Ljava/util/ArrayList;-><init>()V

    const/4 p4, 0x0

    :try_start_0
    new-instance v0, Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/c$b;->e:[B

    const-string v3, "utf-8"

    invoke-direct {v0, v1, v3}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    move-object p4, v0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "headerBuffer "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-virtual {p4, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {p4, p2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {p4, p1, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result p1

    invoke-virtual {p4, p2, p1}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result p4

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p2

    add-int/2addr p4, p2

    sub-int/2addr p4, p1

    new-array p2, p4, [B

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/c$b;->e:[B

    invoke-static {v0, p1, p2, v2, p4}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    invoke-interface {p3, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget p1, p0, Lcom/sigmob/sdk/base/network/c$b;->f:I

    if-le p1, p4, :cond_1

    sub-int/2addr p1, p4

    new-array p2, p1, [B

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/c$b;->e:[B

    invoke-static {v0, p4, p2, v2, p1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    invoke-interface {p3, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "total:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/sigmob/sdk/base/network/c$b;->f:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ",header.length:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "----------------"

    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/network/c$b;->b()V

    :cond_2
    return-object p3
.end method


# virtual methods
.method public a([B)Lcom/sigmob/sdk/base/network/c$b$a;
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/network/c$b$a;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/base/network/c$b$a;-><init>(Lcom/sigmob/sdk/base/network/c$b;)V

    new-instance v1, Ljava/lang/String;

    invoke-direct {v1, p1}, Ljava/lang/String;-><init>([B)V

    iput-object v1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    iget-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/c$b;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/c$b;->b:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    iget p1, p0, Lcom/sigmob/sdk/base/network/c$b;->a:I

    const-string v1, ":"

    const/4 v2, -0x1

    if-ne p1, v2, :cond_0

    iget-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/sigmob/sdk/base/network/c$b;->c:I

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    iget-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/sigmob/sdk/base/network/c$b;->c:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/sigmob/sdk/base/network/c$b;->a:I

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v2, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    iput-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    iget-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    const-string v1, "Range: bytes="

    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    const-string v2, "\r\n\r\n"

    const-string v3, "\r\nRange: bytes=0-\r\n\r\n"

    invoke-virtual {p1, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    :cond_1
    iget-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    const-string v2, "HttpParser"

    invoke-static {v2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    iget-object p1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result p1

    add-int/lit8 p1, p1, 0xd

    iget-object v1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    const-string v3, "-"

    invoke-virtual {v1, v3, p1}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result v1

    iget-object v3, v0, Lcom/sigmob/sdk/base/network/c$b$a;->a:Ljava/lang/String;

    invoke-virtual {v3, p1, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "------->rangePosition:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    int-to-long v1, p1

    iput-wide v1, v0, Lcom/sigmob/sdk/base/network/c$b$a;->b:J

    return-object v0
.end method

.method public a()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "HTTP/1.1 206 Ok\r\nConnection: keep-alive\r\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "Content-Type: video/mp4\r\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\r\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public a(Ljava/lang/String;I)Ljava/lang/String;
    .locals 3

    const-string v0, "Range: bytes="

    invoke-virtual {p1, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    const-string v2, "\r\n"

    invoke-virtual {p1, v2, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "-"

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v1, p2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public a([BI)[B
    .locals 2

    const-string v0, "GET"

    const-string v1, "\r\n\r\n"

    invoke-direct {p0, v0, v1, p1, p2}, Lcom/sigmob/sdk/base/network/c$b;->a(Ljava/lang/String;Ljava/lang/String;[BI)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_0

    const/4 p2, 0x0

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [B

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public b([BI)Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([BI)",
            "Ljava/util/List<",
            "[B>;"
        }
    .end annotation

    const-string v0, "HTTP/1.1"

    const-string v1, "\r\n\r\n"

    invoke-direct {p0, v0, v1, p1, p2}, Lcom/sigmob/sdk/base/network/c$b;->a(Ljava/lang/String;Ljava/lang/String;[BI)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public b()V
    .locals 1

    const/16 v0, 0x2800

    new-array v0, v0, [B

    iput-object v0, p0, Lcom/sigmob/sdk/base/network/c$b;->e:[B

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/network/c$b;->f:I

    return-void
.end method
