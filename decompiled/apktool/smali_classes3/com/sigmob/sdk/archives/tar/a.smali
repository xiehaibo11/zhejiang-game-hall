.class public Lcom/sigmob/sdk/archives/tar/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/archives/a;
.implements Lcom/sigmob/sdk/archives/tar/e;


# static fields
.field public static final b:I = 0x1f

.field public static final c:I = 0x41ed

.field public static final d:I = 0x81a4

.field public static final e:I = 0x3e8


# instance fields
.field private ac:Ljava/lang/String;

.field private ad:I

.field private ae:I

.field private af:I

.field private ag:J

.field private ah:J

.field private ai:B

.field private aj:Ljava/lang/String;

.field private ak:Ljava/lang/String;

.field private al:Ljava/lang/String;

.field private am:Ljava/lang/String;

.field private an:Ljava/lang/String;

.field private ao:I

.field private ap:I

.field private aq:Z

.field private ar:J

.field private as:Ljava/io/File;


# direct methods
.method private constructor <init>()V
    .locals 5

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "ustar\u0000"

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ak:Ljava/lang/String;

    const-string v0, "00"

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->al:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->aj:Ljava/lang/String;

    const-string v1, "user.name"

    invoke-static {v1, v0}, Ljava/lang/System;->getProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v2

    const/16 v3, 0x1f

    const/4 v4, 0x0

    if-le v2, v3, :cond_0

    invoke-virtual {v1, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    :cond_0
    iput v4, p0, Lcom/sigmob/sdk/archives/tar/a;->ae:I

    iput v4, p0, Lcom/sigmob/sdk/archives/tar/a;->af:I

    iput-object v1, p0, Lcom/sigmob/sdk/archives/tar/a;->am:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->an:Ljava/lang/String;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->as:Ljava/io/File;

    return-void
.end method

.method public constructor <init>(Ljava/io/File;)V
    .locals 2

    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/archives/tar/a;->a(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/archives/tar/a;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Ljava/io/File;Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/a;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->as:Ljava/io/File;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->aj:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/io/File;->isDirectory()Z

    move-result v0

    if-eqz v0, :cond_2

    const/16 v0, 0x41ed

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ad:I

    const/16 v0, 0x35

    iput-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v0

    if-eqz v0, :cond_0

    add-int/lit8 v0, v0, -0x1

    invoke-virtual {p2, v0}, Ljava/lang/String;->charAt(I)C

    move-result v0

    const/16 v1, 0x2f

    if-eq v0, v1, :cond_1

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "/"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    :cond_1
    iput-object p2, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ag:J

    goto :goto_0

    :cond_2
    const v0, 0x81a4

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ad:I

    const/16 v0, 0x30

    iput-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    invoke-virtual {p1}, Ljava/io/File;->length()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ag:J

    iput-object p2, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    :goto_0
    invoke-virtual {p1}, Ljava/io/File;->lastModified()J

    move-result-wide p1

    const-wide/16 v0, 0x3e8

    div-long/2addr p1, v0

    iput-wide p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ah:J

    const/4 p1, 0x0

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ao:I

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ap:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/archives/tar/a;-><init>(Ljava/lang/String;Z)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;B)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/archives/tar/a;-><init>(Ljava/lang/String;)V

    iput-byte p2, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 p1, 0x4c

    if-ne p2, p1, :cond_0

    const-string p1, "ustar "

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ak:Ljava/lang/String;

    const-string p1, " \u0000"

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->al:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Z)V
    .locals 3

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/a;-><init>()V

    invoke-static {p1, p2}, Lcom/sigmob/sdk/archives/tar/a;->a(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p1

    const-string p2, "/"

    invoke-virtual {p1, p2}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p2

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ao:I

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ap:I

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    if-eqz p2, :cond_0

    const/16 p1, 0x41ed

    goto :goto_0

    :cond_0
    const p1, 0x81a4

    :goto_0
    iput p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ad:I

    if-eqz p2, :cond_1

    const/16 p1, 0x35

    goto :goto_1

    :cond_1
    const/16 p1, 0x30

    :goto_1
    iput-byte p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ae:I

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/a;->af:I

    const-wide/16 p1, 0x0

    iput-wide p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ag:J

    new-instance p1, Ljava/util/Date;

    invoke-direct {p1}, Ljava/util/Date;-><init>()V

    invoke-virtual {p1}, Ljava/util/Date;->getTime()J

    move-result-wide p1

    const-wide/16 v1, 0x3e8

    div-long/2addr p1, v1

    iput-wide p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ah:J

    const-string p1, ""

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->aj:Ljava/lang/String;

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->am:Ljava/lang/String;

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->an:Ljava/lang/String;

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ao:I

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ap:I

    return-void
.end method

.method public constructor <init>([B)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/a;-><init>()V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/archives/tar/a;->b([B)V

    return-void
.end method

.method private static a(Ljava/lang/String;Z)Ljava/lang/String;
    .locals 5

    const-string v0, "os.name"

    invoke-static {v0}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Ljava/util/Locale;->ENGLISH:Ljava/util/Locale;

    invoke-virtual {v0, v1}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_3

    const-string v2, "windows"

    invoke-virtual {v0, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    const/16 v3, 0x3a

    if-eqz v2, :cond_2

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v2, 0x2

    if-le v0, v2, :cond_3

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Ljava/lang/String;->charAt(I)C

    move-result v0

    invoke-virtual {p0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v4

    if-ne v4, v3, :cond_3

    const/16 v3, 0x61

    if-lt v0, v3, :cond_0

    const/16 v3, 0x7a

    if-le v0, v3, :cond_1

    :cond_0
    const/16 v3, 0x41

    if-lt v0, v3, :cond_3

    const/16 v3, 0x5a

    if-gt v0, v3, :cond_3

    :cond_1
    invoke-virtual {p0, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_2
    const-string v2, "netware"

    invoke-virtual {v0, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    const/4 v2, -0x1

    if-le v0, v2, :cond_3

    invoke-virtual {p0, v3}, Ljava/lang/String;->indexOf(I)I

    move-result v0

    if-eq v0, v2, :cond_3

    add-int/2addr v0, v1

    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    :cond_3
    :goto_0
    sget-char v0, Ljava/io/File;->separatorChar:C

    const/16 v2, 0x2f

    invoke-virtual {p0, v0, v2}, Ljava/lang/String;->replace(CC)Ljava/lang/String;

    move-result-object p0

    :goto_1
    if-nez p1, :cond_4

    const-string v0, "/"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-virtual {p0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :cond_4
    return-object p0
.end method

.method private c([B)I
    .locals 2

    const/16 v0, 0x101

    const/4 v1, 0x6

    invoke-static {p1, v0, v1}, Ljava/nio/ByteBuffer;->wrap([BII)Ljava/nio/ByteBuffer;

    move-result-object p1

    const-string v0, "ustar "

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->compareTo(Ljava/nio/ByteBuffer;)I

    move-result v0

    if-nez v0, :cond_0

    const/4 p1, 0x2

    return p1

    :cond_0
    const-string v0, "ustar\u0000"

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->compareTo(Ljava/nio/ByteBuffer;)I

    move-result p1

    if-nez p1, :cond_1

    const/4 p1, 0x3

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public a(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ad:I

    return-void
.end method

.method public a(II)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/archives/tar/a;->b(I)V

    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/archives/tar/a;->c(I)V

    return-void
.end method

.method public a(J)V
    .locals 2

    const-wide/16 v0, 0x3e8

    div-long/2addr p1, v0

    iput-wide p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ah:J

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/sigmob/sdk/archives/tar/a;->a(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/archives/tar/a;->c(Ljava/lang/String;)V

    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/archives/tar/a;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/util/Date;)V
    .locals 4

    invoke-virtual {p1}, Ljava/util/Date;->getTime()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    div-long/2addr v0, v2

    iput-wide v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ah:J

    return-void
.end method

.method public a([B)V
    .locals 8

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    const/16 v1, 0x64

    const/4 v2, 0x0

    invoke-static {v0, p1, v2, v1}, Lcom/sigmob/sdk/archives/tar/f;->a(Ljava/lang/String;[BII)I

    move-result v0

    iget v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ad:I

    int-to-long v3, v3

    const/16 v5, 0x8

    invoke-static {v3, v4, p1, v0, v5}, Lcom/sigmob/sdk/archives/tar/f;->b(J[BII)I

    move-result v0

    iget v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ae:I

    int-to-long v3, v3

    invoke-static {v3, v4, p1, v0, v5}, Lcom/sigmob/sdk/archives/tar/f;->b(J[BII)I

    move-result v0

    iget v3, p0, Lcom/sigmob/sdk/archives/tar/a;->af:I

    int-to-long v3, v3

    invoke-static {v3, v4, p1, v0, v5}, Lcom/sigmob/sdk/archives/tar/f;->b(J[BII)I

    move-result v0

    iget-wide v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ag:J

    const/16 v6, 0xc

    invoke-static {v3, v4, p1, v0, v6}, Lcom/sigmob/sdk/archives/tar/f;->c(J[BII)I

    move-result v0

    iget-wide v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ah:J

    invoke-static {v3, v4, p1, v0, v6}, Lcom/sigmob/sdk/archives/tar/f;->c(J[BII)I

    move-result v0

    move v4, v0

    move v3, v2

    :goto_0
    const/16 v6, 0x20

    if-ge v3, v5, :cond_0

    add-int/lit8 v7, v4, 0x1

    aput-byte v6, p1, v4

    add-int/lit8 v3, v3, 0x1

    move v4, v7

    goto :goto_0

    :cond_0
    add-int/lit8 v3, v4, 0x1

    iget-byte v7, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    aput-byte v7, p1, v4

    iget-object v4, p0, Lcom/sigmob/sdk/archives/tar/a;->aj:Ljava/lang/String;

    invoke-static {v4, p1, v3, v1}, Lcom/sigmob/sdk/archives/tar/f;->a(Ljava/lang/String;[BII)I

    move-result v1

    iget-object v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ak:Ljava/lang/String;

    const/4 v4, 0x6

    invoke-static {v3, p1, v1, v4}, Lcom/sigmob/sdk/archives/tar/f;->a(Ljava/lang/String;[BII)I

    move-result v1

    iget-object v3, p0, Lcom/sigmob/sdk/archives/tar/a;->al:Ljava/lang/String;

    const/4 v4, 0x2

    invoke-static {v3, p1, v1, v4}, Lcom/sigmob/sdk/archives/tar/f;->a(Ljava/lang/String;[BII)I

    move-result v1

    iget-object v3, p0, Lcom/sigmob/sdk/archives/tar/a;->am:Ljava/lang/String;

    invoke-static {v3, p1, v1, v6}, Lcom/sigmob/sdk/archives/tar/f;->a(Ljava/lang/String;[BII)I

    move-result v1

    iget-object v3, p0, Lcom/sigmob/sdk/archives/tar/a;->an:Ljava/lang/String;

    invoke-static {v3, p1, v1, v6}, Lcom/sigmob/sdk/archives/tar/f;->a(Ljava/lang/String;[BII)I

    move-result v1

    iget v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ao:I

    int-to-long v3, v3

    invoke-static {v3, v4, p1, v1, v5}, Lcom/sigmob/sdk/archives/tar/f;->b(J[BII)I

    move-result v1

    iget v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ap:I

    int-to-long v3, v3

    invoke-static {v3, v4, p1, v1, v5}, Lcom/sigmob/sdk/archives/tar/f;->b(J[BII)I

    move-result v1

    :goto_1
    array-length v3, p1

    if-ge v1, v3, :cond_1

    add-int/lit8 v3, v1, 0x1

    aput-byte v2, p1, v1

    move v1, v3

    goto :goto_1

    :cond_1
    invoke-static {p1}, Lcom/sigmob/sdk/archives/tar/f;->a([B)J

    move-result-wide v1

    invoke-static {v1, v2, p1, v0, v5}, Lcom/sigmob/sdk/archives/tar/f;->d(J[BII)I

    return-void
.end method

.method public a(Lcom/sigmob/sdk/archives/tar/a;)Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/a;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/archives/tar/a;->a()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method

.method public b()J
    .locals 2

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ag:J

    return-wide v0
.end method

.method public b(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ae:I

    return-void
.end method

.method public b(J)V
    .locals 3

    const-wide v0, 0x1ffffffffL

    cmp-long v0, p1, v0

    if-gtz v0, :cond_0

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-ltz v0, :cond_0

    iput-wide p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ag:J

    return-void

    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Size is out of range: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->aj:Ljava/lang/String;

    return-void
.end method

.method public b([B)V
    .locals 5

    const/16 v0, 0x64

    const/4 v1, 0x0

    invoke-static {p1, v1, v0}, Lcom/sigmob/sdk/archives/tar/f;->b([BII)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    const/16 v1, 0x8

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/archives/tar/f;->a([BII)J

    move-result-wide v2

    long-to-int v2, v2

    iput v2, p0, Lcom/sigmob/sdk/archives/tar/a;->ad:I

    const/16 v2, 0x6c

    invoke-static {p1, v2, v1}, Lcom/sigmob/sdk/archives/tar/f;->a([BII)J

    move-result-wide v2

    long-to-int v2, v2

    iput v2, p0, Lcom/sigmob/sdk/archives/tar/a;->ae:I

    const/16 v2, 0x74

    invoke-static {p1, v2, v1}, Lcom/sigmob/sdk/archives/tar/f;->a([BII)J

    move-result-wide v2

    long-to-int v2, v2

    iput v2, p0, Lcom/sigmob/sdk/archives/tar/a;->af:I

    const/16 v2, 0xc

    const/16 v3, 0x7c

    invoke-static {p1, v3, v2}, Lcom/sigmob/sdk/archives/tar/f;->a([BII)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ag:J

    const/16 v3, 0x88

    invoke-static {p1, v3, v2}, Lcom/sigmob/sdk/archives/tar/f;->a([BII)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ah:J

    const/16 v3, 0x9c

    aget-byte v3, p1, v3

    iput-byte v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v3, 0x9d

    invoke-static {p1, v3, v0}, Lcom/sigmob/sdk/archives/tar/f;->b([BII)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->aj:Ljava/lang/String;

    const/16 v0, 0x101

    const/4 v3, 0x6

    invoke-static {p1, v0, v3}, Lcom/sigmob/sdk/archives/tar/f;->b([BII)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ak:Ljava/lang/String;

    const/4 v0, 0x2

    const/16 v3, 0x107

    invoke-static {p1, v3, v0}, Lcom/sigmob/sdk/archives/tar/f;->b([BII)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/sigmob/sdk/archives/tar/a;->al:Ljava/lang/String;

    const/16 v3, 0x20

    const/16 v4, 0x109

    invoke-static {p1, v4, v3}, Lcom/sigmob/sdk/archives/tar/f;->b([BII)Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/sigmob/sdk/archives/tar/a;->am:Ljava/lang/String;

    const/16 v4, 0x129

    invoke-static {p1, v4, v3}, Lcom/sigmob/sdk/archives/tar/f;->b([BII)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/sigmob/sdk/archives/tar/a;->an:Ljava/lang/String;

    const/16 v3, 0x149

    invoke-static {p1, v3, v1}, Lcom/sigmob/sdk/archives/tar/f;->a([BII)J

    move-result-wide v3

    long-to-int v3, v3

    iput v3, p0, Lcom/sigmob/sdk/archives/tar/a;->ao:I

    const/16 v3, 0x151

    invoke-static {p1, v3, v1}, Lcom/sigmob/sdk/archives/tar/f;->a([BII)J

    move-result-wide v3

    long-to-int v1, v3

    iput v1, p0, Lcom/sigmob/sdk/archives/tar/a;->ap:I

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/archives/tar/a;->c([B)I

    move-result v1

    if-eq v1, v0, :cond_1

    const/16 v0, 0x9b

    const/16 v1, 0x159

    invoke-static {p1, v1, v0}, Lcom/sigmob/sdk/archives/tar/f;->b([BII)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/a;->c()Z

    move-result v0

    const-string v1, "/"

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    :cond_0
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    goto :goto_0

    :cond_1
    const/16 v0, 0x1e2

    invoke-static {p1, v0}, Lcom/sigmob/sdk/archives/tar/f;->a([BI)Z

    move-result v0

    iput-boolean v0, p0, Lcom/sigmob/sdk/archives/tar/a;->aq:Z

    const/16 v0, 0x1e3

    invoke-static {p1, v0, v2}, Lcom/sigmob/sdk/archives/tar/f;->a([BII)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ar:J

    :cond_2
    :goto_0
    return-void
.end method

.method public b(Lcom/sigmob/sdk/archives/tar/a;)Z
    .locals 1

    invoke-virtual {p1}, Lcom/sigmob/sdk/archives/tar/a;->a()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/a;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public c(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/a;->af:I

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->am:Ljava/lang/String;

    return-void
.end method

.method public c()Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->as:Ljava/io/File;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v0

    return v0

    :cond_0
    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x35

    if-ne v0, v1, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/a;->a()Ljava/lang/String;

    move-result-object v0

    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public d()Ljava/util/Date;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/a;->j()Ljava/util/Date;

    move-result-object v0

    return-object v0
.end method

.method public d(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/a;->an:Ljava/lang/String;

    return-void
.end method

.method public e()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->aj:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 2

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    check-cast p1, Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/archives/tar/a;->a(Lcom/sigmob/sdk/archives/tar/a;)Z

    move-result p1

    return p1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method public f()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ae:I

    return v0
.end method

.method public g()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/a;->af:I

    return v0
.end method

.method public h()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->am:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public hashCode()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/a;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    return v0
.end method

.method public i()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->an:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public j()Ljava/util/Date;
    .locals 5

    new-instance v0, Ljava/util/Date;

    iget-wide v1, p0, Lcom/sigmob/sdk/archives/tar/a;->ah:J

    const-wide/16 v3, 0x3e8

    mul-long/2addr v1, v3

    invoke-direct {v0, v1, v2}, Ljava/util/Date;-><init>(J)V

    return-object v0
.end method

.method public k()Ljava/io/File;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->as:Ljava/io/File;

    return-object v0
.end method

.method public l()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ad:I

    return v0
.end method

.method public m()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/archives/tar/a;->aq:Z

    return v0
.end method

.method public n()J
    .locals 2

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ar:J

    return-wide v0
.end method

.method public o()Z
    .locals 2

    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x53

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public p()Z
    .locals 2

    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x4c

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ac:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "././@LongLink"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public q()Z
    .locals 2

    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x78

    if-eq v0, v1, :cond_1

    const/16 v1, 0x58

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public r()Z
    .locals 2

    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x67

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public s()Z
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->as:Ljava/io/File;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v0

    return v0

    :cond_0
    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/4 v1, 0x1

    if-eqz v0, :cond_2

    const/16 v2, 0x30

    if-ne v0, v2, :cond_1

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/a;->a()Ljava/lang/String;

    move-result-object v0

    const-string v2, "/"

    invoke-virtual {v0, v2}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    xor-int/2addr v0, v1

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public t()Z
    .locals 2

    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x32

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public u()Z
    .locals 2

    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x31

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public v()Z
    .locals 2

    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x33

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public w()Z
    .locals 2

    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x34

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public x()Z
    .locals 2

    iget-byte v0, p0, Lcom/sigmob/sdk/archives/tar/a;->ai:B

    const/16 v1, 0x36

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public y()[Lcom/sigmob/sdk/archives/tar/a;
    .locals 7

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->as:Ljava/io/File;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/a;->as:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->list()[Ljava/lang/String;

    move-result-object v0

    array-length v2, v0

    new-array v2, v2, [Lcom/sigmob/sdk/archives/tar/a;

    :goto_0
    array-length v3, v0

    if-ge v1, v3, :cond_1

    new-instance v3, Lcom/sigmob/sdk/archives/tar/a;

    new-instance v4, Ljava/io/File;

    iget-object v5, p0, Lcom/sigmob/sdk/archives/tar/a;->as:Ljava/io/File;

    aget-object v6, v0, v1

    invoke-direct {v4, v5, v6}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-direct {v3, v4}, Lcom/sigmob/sdk/archives/tar/a;-><init>(Ljava/io/File;)V

    aput-object v3, v2, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-object v2

    :cond_2
    :goto_1
    new-array v0, v1, [Lcom/sigmob/sdk/archives/tar/a;

    return-object v0
.end method
