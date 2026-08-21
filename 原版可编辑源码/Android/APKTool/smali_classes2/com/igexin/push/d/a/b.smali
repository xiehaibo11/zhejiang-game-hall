.class public Lcom/igexin/push/d/a/b;
.super Lcom/igexin/b/a/b/b;


# static fields
.field public static final a:Ljava/lang/String;

.field public static b:I


# instance fields
.field private g:[B


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/igexin/push/d/a/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/d/a/b;->a:Ljava/lang/String;

    const/4 v0, -0x1

    sput v0, Lcom/igexin/push/d/a/b;->b:I

    return-void
.end method

.method constructor <init>(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/igexin/b/a/b/b;-><init>(Ljava/lang/String;Z)V

    return-void
.end method

.method private a(Lcom/igexin/b/a/b/a/a/o;)B
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/d/a/b;->b(Lcom/igexin/b/a/b/a/a/o;I)I

    move-result p1

    int-to-byte p1, p1

    return p1
.end method

.method public static a()Lcom/igexin/b/a/b/b;
    .locals 3

    new-instance v0, Lcom/igexin/push/d/a/b;

    const-string v1, "socketProtocol"

    invoke-direct {v0, v1}, Lcom/igexin/push/d/a/b;-><init>(Ljava/lang/String;)V

    new-instance v1, Lcom/igexin/push/d/a/a;

    const-string v2, "command"

    invoke-direct {v1, v2, v0}, Lcom/igexin/push/d/a/a;-><init>(Ljava/lang/String;Lcom/igexin/b/a/b/b;)V

    return-object v0
.end method

.method private a(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Lcom/igexin/b/a/b/a/a/o;Lcom/igexin/push/d/c/e;)Lcom/igexin/b/a/d/a/e;
    .locals 9

    iget-byte v0, p4, Lcom/igexin/push/d/c/e;->h:B

    const/16 v1, 0x30

    const/4 v2, 0x0

    if-ne v0, v1, :cond_0

    return-object v2

    :cond_0
    invoke-direct {p0, p3}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;)B

    move-result v0

    if-lez v0, :cond_1

    invoke-direct {p0, p3, v0}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;I)[B

    :cond_1
    invoke-direct {p0, p3}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;)B

    move-result v0

    iput v0, p4, Lcom/igexin/push/d/c/e;->f:I

    invoke-direct {p0, p3}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;)B

    move-result v0

    iput v0, p4, Lcom/igexin/push/d/c/e;->o:I

    iget v0, p4, Lcom/igexin/push/d/c/e;->o:I

    if-lez v0, :cond_2

    iget v0, p4, Lcom/igexin/push/d/c/e;->o:I

    invoke-direct {p0, p3, v0}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;I)[B

    move-result-object v0

    iput-object v0, p4, Lcom/igexin/push/d/c/e;->n:[B

    :cond_2
    iget v0, p4, Lcom/igexin/push/d/c/e;->e:I

    if-nez v0, :cond_3

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance p2, Lcom/igexin/push/d/c/f;

    invoke-direct {p2}, Lcom/igexin/push/d/c/f;-><init>()V

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/b/a/b/c;->c()V

    return-object v2

    :cond_3
    const/16 v0, 0xb

    invoke-direct {p0, p3, v0}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;I)[B

    move-result-object v0

    const/4 v3, 0x0

    invoke-static {v0, v3}, Lcom/igexin/b/a/b/f;->d([BI)I

    move-result v4

    sget v5, Lcom/igexin/push/d/a/b;->b:I

    if-le v4, v5, :cond_d

    sput v4, Lcom/igexin/push/d/a/b;->b:I

    const/4 v5, 0x4

    invoke-static {v0, v5}, Lcom/igexin/b/a/b/f;->d([BI)I

    move-result v5

    const/16 v6, 0x8

    invoke-static {v0, v6}, Lcom/igexin/b/a/b/f;->b([BI)S

    move-result v6

    const/16 v7, 0xa

    invoke-static {v0, v7}, Lcom/igexin/b/a/b/f;->a([BI)I

    move-result v0

    new-instance v7, Lcom/igexin/push/d/c/a;

    invoke-direct {v7}, Lcom/igexin/push/d/c/a;-><init>()V

    iput v6, v7, Lcom/igexin/push/d/c/a;->a:I

    int-to-byte v8, v0

    iput-byte v8, v7, Lcom/igexin/push/d/c/a;->b:B

    iget v8, p4, Lcom/igexin/push/d/c/e;->c:I

    iput v8, v7, Lcom/igexin/push/d/c/a;->f:I

    iget-byte v8, p4, Lcom/igexin/push/d/c/e;->h:B

    iput-byte v8, v7, Lcom/igexin/push/d/c/a;->g:B

    if-lez v6, :cond_a

    invoke-direct {p0, p3, v6}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;I)[B

    move-result-object p3

    iget-byte v6, p4, Lcom/igexin/push/d/c/e;->h:B

    const/16 v8, 0x10

    if-ne v6, v8, :cond_4

    invoke-static {v5}, Lcom/igexin/b/a/b/f;->b(I)[B

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/push/util/EncryptUtils;->getIV([B)[B

    move-result-object v0

    invoke-static {p3, v0}, Lcom/igexin/push/util/EncryptUtils;->aesDecSocket([B[B)[B

    move-result-object p3

    goto :goto_0

    :cond_4
    iget-byte v6, p4, Lcom/igexin/push/d/c/e;->h:B

    const/16 v8, 0x20

    if-ne v6, v8, :cond_6

    const/16 v1, 0x1a

    if-eq v0, v1, :cond_5

    return-object v2

    :cond_5
    invoke-static {v5}, Lcom/igexin/b/a/b/f;->b(I)[B

    move-result-object v0

    invoke-static {p3, v0}, Lcom/igexin/push/util/EncryptUtils;->altAesDecSocket([B[B)[B

    move-result-object p3

    goto :goto_0

    :cond_6
    iget-byte v0, p4, Lcom/igexin/push/d/c/e;->h:B

    if-nez v0, :cond_9

    :goto_0
    iget-byte v0, p4, Lcom/igexin/push/d/c/e;->g:B

    const/16 v1, -0x80

    if-ne v0, v1, :cond_7

    invoke-static {p3}, Lcom/igexin/b/a/b/f;->d([B)[B

    move-result-object p3

    goto :goto_1

    :cond_7
    iget-byte v0, p4, Lcom/igexin/push/d/c/e;->g:B

    if-nez v0, :cond_8

    :goto_1
    invoke-virtual {v7, p3}, Lcom/igexin/push/d/c/a;->a([B)V

    iget-object p3, p4, Lcom/igexin/push/d/c/e;->n:[B

    invoke-static {v7, v4, v5}, Lcom/igexin/push/util/EncryptUtils;->getSocketSignature(Lcom/igexin/push/d/c/a;II)[B

    move-result-object p4

    invoke-static {p3, p4}, Ljava/util/Arrays;->equals([B[B)Z

    move-result p3

    if-nez p3, :cond_b

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object p2, Lcom/igexin/push/d/a/b;->a:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "|decode signature error!!!!"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v3, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_8
    return-object v2

    :cond_9
    iget-byte p1, p4, Lcom/igexin/push/d/c/e;->h:B

    return-object v2

    :cond_a
    iget p3, v7, Lcom/igexin/push/d/c/a;->a:I

    if-gez p3, :cond_b

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object p2, Lcom/igexin/push/d/a/b;->a:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "|data len < 0, error"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v3, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object v2

    :cond_b
    iget-object p3, p0, Lcom/igexin/push/d/a/b;->d:Lcom/igexin/b/a/b/b;

    if-eqz p3, :cond_c

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p3

    iget-object p4, p0, Lcom/igexin/push/d/a/b;->d:Lcom/igexin/b/a/b/b;

    invoke-virtual {p4, p1, p2, v7}, Lcom/igexin/b/a/b/b;->c(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p3, p1}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/Object;)Z

    :cond_c
    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/b/a/b/c;->c()V

    return-object v2

    :cond_d
    const/4 p1, -0x1

    sput p1, Lcom/igexin/push/d/a/b;->b:I

    new-instance p1, Ljava/lang/Exception;

    const-string p2, "server packetId can\'t be less than previous"

    invoke-direct {p1, p2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method static a(Lcom/igexin/push/d/c/a;)Lcom/igexin/push/d/c/e;
    .locals 5

    new-instance v0, Lcom/igexin/push/d/c/e;

    invoke-direct {v0}, Lcom/igexin/push/d/c/e;-><init>()V

    const v1, 0x73ea68fb

    iput v1, v0, Lcom/igexin/push/d/c/e;->a:I

    iget-byte v1, p0, Lcom/igexin/push/d/c/a;->c:B

    invoke-virtual {v0, v1}, Lcom/igexin/push/d/c/e;->a(B)V

    iget-byte v1, p0, Lcom/igexin/push/d/c/a;->b:B

    const/4 v2, 0x0

    if-lez v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    iput v1, v0, Lcom/igexin/push/d/c/e;->e:I

    const/4 v1, 0x7

    iput v1, v0, Lcom/igexin/push/d/c/e;->c:I

    const/16 v1, 0xb

    iput v1, v0, Lcom/igexin/push/d/c/e;->b:I

    iget-byte v1, p0, Lcom/igexin/push/d/c/a;->d:B

    iput v1, v0, Lcom/igexin/push/d/c/e;->f:I

    iget v1, v0, Lcom/igexin/push/d/c/e;->b:I

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getRSAKeyId()[B

    move-result-object v3

    array-length v3, v3

    add-int/2addr v1, v3

    iput v1, v0, Lcom/igexin/push/d/c/e;->b:I

    iget v1, p0, Lcom/igexin/push/d/c/a;->a:I

    if-lez v1, :cond_1

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getPacketId()I

    move-result v1

    iput v1, v0, Lcom/igexin/push/d/c/e;->p:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    div-long/2addr v1, v3

    long-to-int v1, v1

    iput v1, v0, Lcom/igexin/push/d/c/e;->q:I

    iget v1, v0, Lcom/igexin/push/d/c/e;->p:I

    iget v2, v0, Lcom/igexin/push/d/c/e;->q:I

    invoke-static {p0, v1, v2}, Lcom/igexin/push/util/EncryptUtils;->getSocketSignature(Lcom/igexin/push/d/c/a;II)[B

    move-result-object p0

    iput-object p0, v0, Lcom/igexin/push/d/c/e;->n:[B

    iget-object p0, v0, Lcom/igexin/push/d/c/e;->n:[B

    array-length p0, p0

    iput p0, v0, Lcom/igexin/push/d/c/e;->o:I

    :goto_1
    iget p0, v0, Lcom/igexin/push/d/c/e;->b:I

    iget v1, v0, Lcom/igexin/push/d/c/e;->o:I

    add-int/2addr p0, v1

    iput p0, v0, Lcom/igexin/push/d/c/e;->b:I

    goto :goto_2

    :cond_1
    iget-byte p0, v0, Lcom/igexin/push/d/c/e;->h:B

    if-nez p0, :cond_2

    iput v2, v0, Lcom/igexin/push/d/c/e;->o:I

    goto :goto_1

    :cond_2
    :goto_2
    invoke-static {}, Lcom/igexin/b/a/b/c;->d()V

    return-object v0
.end method

.method private a(Lcom/igexin/b/a/b/a/a/o;I)[B
    .locals 0

    new-array p2, p2, [B

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/b/a/a/o;->a([B)I

    return-object p2
.end method

.method private b(Lcom/igexin/b/a/b/a/a/o;I)I
    .locals 2

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;I)[B

    move-result-object p1

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-ne p2, v1, :cond_0

    invoke-static {p1, v0}, Lcom/igexin/b/a/b/f;->a([BI)I

    move-result p1

    return p1

    :cond_0
    const/4 v1, 0x2

    if-ne p2, v1, :cond_1

    invoke-static {p1, v0}, Lcom/igexin/b/a/b/f;->b([BI)S

    move-result p1

    return p1

    :cond_1
    const/4 v1, 0x4

    if-ne p2, v1, :cond_2

    invoke-static {p1, v0}, Lcom/igexin/b/a/b/f;->d([BI)I

    move-result p1

    return p1

    :cond_2
    return v0
.end method

.method private b(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Lcom/igexin/b/a/b/a/a/o;Lcom/igexin/push/d/c/e;)Lcom/igexin/b/a/d/a/e;
    .locals 6

    iget-byte v0, p4, Lcom/igexin/push/d/c/e;->h:B

    const/16 v1, 0x30

    if-ne v0, v1, :cond_0

    invoke-direct {p0, p3}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;)B

    move-result v0

    if-lez v0, :cond_0

    invoke-direct {p0, p3, v0}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;I)[B

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/d/a/b;->g:[B

    :cond_0
    iget v0, p4, Lcom/igexin/push/d/c/e;->e:I

    const/4 v2, 0x0

    if-nez v0, :cond_2

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance p2, Lcom/igexin/push/d/c/f;

    invoke-direct {p2}, Lcom/igexin/push/d/c/f;-><init>()V

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/Object;)Z

    :cond_1
    :goto_0
    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/b/a/b/c;->c()V

    return-object v2

    :cond_2
    const/4 v0, 0x3

    invoke-direct {p0, p3, v0}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;I)[B

    move-result-object v0

    const/4 v3, 0x0

    invoke-static {v0, v3}, Lcom/igexin/b/a/b/f;->b([BI)S

    move-result v3

    const/4 v4, 0x2

    invoke-static {v0, v4}, Lcom/igexin/b/a/b/f;->a([BI)I

    move-result v0

    new-instance v4, Lcom/igexin/push/d/c/a;

    invoke-direct {v4}, Lcom/igexin/push/d/c/a;-><init>()V

    iput v3, v4, Lcom/igexin/push/d/c/a;->a:I

    int-to-byte v5, v0

    iput-byte v5, v4, Lcom/igexin/push/d/c/a;->b:B

    iget v5, p4, Lcom/igexin/push/d/c/e;->c:I

    iput v5, v4, Lcom/igexin/push/d/c/a;->f:I

    const/16 v5, 0x1a

    if-eq v0, v5, :cond_3

    return-object v2

    :cond_3
    iget v0, v4, Lcom/igexin/push/d/c/a;->a:I

    if-lez v0, :cond_8

    invoke-direct {p0, p3, v3}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;I)[B

    move-result-object p3

    iget-byte v0, p4, Lcom/igexin/push/d/c/e;->h:B

    if-ne v0, v1, :cond_5

    iget-object v0, p0, Lcom/igexin/push/d/a/b;->g:[B

    if-nez v0, :cond_4

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/b/a/b/c;->a()[B

    move-result-object v0

    goto :goto_1

    :cond_4
    invoke-static {v0}, Lcom/igexin/b/b/a;->a([B)[B

    move-result-object v0

    :goto_1
    invoke-static {p3, v0}, Lcom/igexin/b/a/a/a;->a([B[B)[B

    move-result-object p3

    goto :goto_2

    :cond_5
    iget-byte v0, p4, Lcom/igexin/push/d/c/e;->h:B

    :goto_2
    iget-byte v0, p4, Lcom/igexin/push/d/c/e;->g:B

    const/16 v1, -0x80

    if-ne v0, v1, :cond_6

    invoke-static {p3}, Lcom/igexin/b/a/b/f;->d([B)[B

    move-result-object p3

    goto :goto_3

    :cond_6
    iget-byte p4, p4, Lcom/igexin/push/d/c/e;->g:B

    if-nez p4, :cond_7

    :goto_3
    invoke-virtual {v4, p3}, Lcom/igexin/push/d/c/a;->a([B)V

    goto :goto_4

    :cond_7
    return-object v2

    :cond_8
    :goto_4
    iget-object p3, p0, Lcom/igexin/push/d/a/b;->d:Lcom/igexin/b/a/b/b;

    if-eqz p3, :cond_1

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p3

    iget-object p4, p0, Lcom/igexin/push/d/a/b;->d:Lcom/igexin/b/a/b/b;

    invoke-virtual {p4, p1, p2, v4}, Lcom/igexin/b/a/b/b;->c(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p3, p1}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/Object;)Z

    goto :goto_0
.end method


# virtual methods
.method public a(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 4

    instance-of p1, p3, Lcom/igexin/push/d/c/a;

    const/4 p2, 0x0

    if-eqz p1, :cond_9

    check-cast p3, Lcom/igexin/push/d/c/a;

    invoke-static {p3}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/push/d/c/a;)Lcom/igexin/push/d/c/e;

    move-result-object p1

    iget-byte v0, p3, Lcom/igexin/push/d/c/a;->b:B

    const/4 v1, 0x0

    if-lez v0, :cond_6

    iget v0, p3, Lcom/igexin/push/d/c/a;->a:I

    if-lez v0, :cond_6

    iget-byte v0, p1, Lcom/igexin/push/d/c/e;->g:B

    and-int/lit16 v0, v0, 0xc0

    const/16 v2, 0x80

    if-ne v0, v2, :cond_0

    iget-object v0, p3, Lcom/igexin/push/d/c/a;->e:[B

    invoke-static {v0}, Lcom/igexin/b/a/b/f;->c([B)[B

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/igexin/push/d/c/a;->a([B)V

    :cond_0
    iget-byte v0, p1, Lcom/igexin/push/d/c/e;->h:B

    const/16 v2, 0x30

    and-int/2addr v0, v2

    const/16 v3, 0x10

    if-ne v0, v3, :cond_2

    iget p2, p1, Lcom/igexin/push/d/c/e;->q:I

    invoke-static {p2}, Lcom/igexin/b/a/b/f;->b(I)[B

    move-result-object p2

    invoke-static {p2}, Lcom/igexin/push/util/EncryptUtils;->getIV([B)[B

    move-result-object p2

    iget v0, p1, Lcom/igexin/push/d/c/e;->f:I

    and-int/2addr v0, v3

    if-ne v0, v3, :cond_1

    goto :goto_0

    :cond_1
    iget-object v0, p3, Lcom/igexin/push/d/c/a;->e:[B

    invoke-static {v0, p2}, Lcom/igexin/push/util/EncryptUtils;->aesEncSocket([B[B)[B

    move-result-object p2

    invoke-virtual {p3, p2}, Lcom/igexin/push/d/c/a;->a([B)V

    goto :goto_0

    :cond_2
    iget-byte v0, p1, Lcom/igexin/push/d/c/e;->h:B

    and-int/2addr v0, v2

    if-nez v0, :cond_3

    goto :goto_0

    :cond_3
    iget-byte v0, p1, Lcom/igexin/push/d/c/e;->h:B

    and-int/2addr v0, v2

    if-ne v0, v2, :cond_4

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object p3, Lcom/igexin/push/d/a/b;->a:Ljava/lang/String;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, "|encry type = 0x30 not support"

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p3, v1, [Ljava/lang/Object;

    invoke-static {p1, p3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object p2

    :cond_4
    iget-byte v0, p1, Lcom/igexin/push/d/c/e;->h:B

    and-int/2addr v0, v2

    const/16 v3, 0x20

    if-ne v0, v3, :cond_5

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lcom/igexin/push/d/a/b;->a:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|encry type = 0x20 reserved"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p2, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_5
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lcom/igexin/push/d/a/b;->a:Ljava/lang/String;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|encry type = "

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-byte p1, p1, Lcom/igexin/push/d/c/e;->h:B

    and-int/2addr p1, v2

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " not support"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p3, v1, [Ljava/lang/Object;

    invoke-static {p1, p3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object p2

    :cond_6
    :goto_0
    iget p2, p1, Lcom/igexin/push/d/c/e;->b:I

    iget-byte v0, p3, Lcom/igexin/push/d/c/a;->b:B

    if-lez v0, :cond_7

    iget v0, p3, Lcom/igexin/push/d/c/a;->a:I

    add-int/lit8 v0, v0, 0xb

    goto :goto_1

    :cond_7
    move v0, v1

    :goto_1
    add-int/2addr p2, v0

    new-array p2, p2, [B

    const v0, 0x73ea68fb

    invoke-static {v0, p2, v1}, Lcom/igexin/b/a/b/f;->a(I[BI)I

    move-result v0

    iget v2, p1, Lcom/igexin/push/d/c/e;->b:I

    invoke-static {v2, p2, v0}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v2

    add-int/2addr v0, v2

    iget v2, p1, Lcom/igexin/push/d/c/e;->c:I

    invoke-static {v2, p2, v0}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v2

    add-int/2addr v0, v2

    invoke-virtual {p1}, Lcom/igexin/push/d/c/e;->a()I

    move-result v2

    invoke-static {v2, p2, v0}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v2

    add-int/2addr v0, v2

    iget v2, p1, Lcom/igexin/push/d/c/e;->e:I

    invoke-static {v2, p2, v0}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v2

    add-int/2addr v0, v2

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getRSAKeyId()[B

    move-result-object v2

    array-length v3, v2

    invoke-static {v3, p2, v0}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v3

    add-int/2addr v0, v3

    array-length v3, v2

    invoke-static {v2, v1, p2, v0, v3}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v2

    add-int/2addr v0, v2

    invoke-virtual {p1}, Lcom/igexin/push/d/c/e;->b()I

    move-result v2

    invoke-static {v2, p2, v0}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v2

    add-int/2addr v0, v2

    iget v2, p3, Lcom/igexin/push/d/c/a;->a:I

    if-lez v2, :cond_8

    iget v2, p1, Lcom/igexin/push/d/c/e;->o:I

    invoke-static {v2, p2, v0}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v2

    add-int/2addr v0, v2

    iget-object v2, p1, Lcom/igexin/push/d/c/e;->n:[B

    iget v3, p1, Lcom/igexin/push/d/c/e;->o:I

    invoke-static {v2, v1, p2, v0, v3}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v2

    goto :goto_2

    :cond_8
    invoke-static {v1, p2, v0}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v2

    :goto_2
    add-int/2addr v0, v2

    iget-byte v2, p3, Lcom/igexin/push/d/c/a;->b:B

    if-lez v2, :cond_9

    iget v2, p1, Lcom/igexin/push/d/c/e;->p:I

    invoke-static {v2, p2, v0}, Lcom/igexin/b/a/b/f;->a(I[BI)I

    move-result v2

    add-int/2addr v0, v2

    iget p1, p1, Lcom/igexin/push/d/c/e;->q:I

    invoke-static {p1, p2, v0}, Lcom/igexin/b/a/b/f;->a(I[BI)I

    move-result p1

    add-int/2addr v0, p1

    iget p1, p3, Lcom/igexin/push/d/c/a;->a:I

    invoke-static {p1, p2, v0}, Lcom/igexin/b/a/b/f;->b(I[BI)I

    move-result p1

    add-int/2addr v0, p1

    iget-byte p1, p3, Lcom/igexin/push/d/c/a;->b:B

    invoke-static {p1, p2, v0}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result p1

    add-int/2addr v0, p1

    iget p1, p3, Lcom/igexin/push/d/c/a;->a:I

    if-lez p1, :cond_9

    iget-object p1, p3, Lcom/igexin/push/d/c/a;->e:[B

    iget p3, p3, Lcom/igexin/push/d/c/a;->a:I

    invoke-static {p1, v1, p2, v0, p3}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    :cond_9
    return-object p2
.end method

.method public b(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Lcom/igexin/b/a/d/a/e;
    .locals 5

    instance-of v0, p3, Lcom/igexin/b/a/b/a/a/o;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    check-cast p3, Lcom/igexin/b/a/b/a/a/o;

    goto :goto_0

    :cond_0
    move-object p3, v1

    :goto_0
    const/4 v0, 0x0

    if-nez p3, :cond_1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object p2, Lcom/igexin/push/d/a/b;->a:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "|syncIns is null"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object v1

    :cond_1
    const/16 v2, 0x8

    invoke-direct {p0, p3, v2}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/a/a/o;I)[B

    move-result-object v2

    invoke-static {v2, v0}, Lcom/igexin/b/a/b/f;->d([BI)I

    move-result v3

    const v4, 0x73ea68fb

    if-eq v3, v4, :cond_2

    return-object v1

    :cond_2
    new-instance v3, Lcom/igexin/push/d/c/e;

    invoke-direct {v3}, Lcom/igexin/push/d/c/e;-><init>()V

    const/4 v4, 0x4

    aget-byte v4, v2, v4

    and-int/lit16 v4, v4, 0xff

    iput v4, v3, Lcom/igexin/push/d/c/e;->b:I

    const/4 v4, 0x5

    aget-byte v4, v2, v4

    and-int/lit16 v4, v4, 0xff

    iput v4, v3, Lcom/igexin/push/d/c/e;->c:I

    const/4 v4, 0x6

    aget-byte v4, v2, v4

    invoke-virtual {v3, v4}, Lcom/igexin/push/d/c/e;->a(B)V

    const/4 v4, 0x7

    aget-byte v2, v2, v4

    and-int/lit16 v2, v2, 0xff

    iput v2, v3, Lcom/igexin/push/d/c/e;->e:I

    iget v2, v3, Lcom/igexin/push/d/c/e;->c:I

    if-ne v2, v4, :cond_3

    invoke-direct {p0, p1, p2, p3, v3}, Lcom/igexin/push/d/a/b;->a(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Lcom/igexin/b/a/b/a/a/o;Lcom/igexin/push/d/c/e;)Lcom/igexin/b/a/d/a/e;

    move-result-object p1

    return-object p1

    :cond_3
    iget v2, v3, Lcom/igexin/push/d/c/e;->c:I

    const/4 v4, 0x1

    if-ne v2, v4, :cond_4

    invoke-direct {p0, p1, p2, p3, v3}, Lcom/igexin/push/d/a/b;->b(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Lcom/igexin/b/a/b/a/a/o;Lcom/igexin/push/d/c/e;)Lcom/igexin/b/a/d/a/e;

    move-result-object p1

    return-object p1

    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object p2, Lcom/igexin/push/d/a/b;->a:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "|server socket resp version = "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, v3, Lcom/igexin/push/d/c/e;->c:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ", not support !!!"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object v1
.end method

.method public synthetic c(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    invoke-virtual {p0, p1, p2, p3}, Lcom/igexin/push/d/a/b;->b(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Lcom/igexin/b/a/d/a/e;

    move-result-object p1

    return-object p1
.end method
