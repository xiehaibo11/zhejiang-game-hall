.class public final Lcom/tkay/expressad/exoplayer/e/a/h;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/e/a/h$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "PsshAtomUtil"


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a([B)Ljava/util/UUID;
    .locals 0

    .line 94
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/h;->c([B)Lcom/tkay/expressad/exoplayer/e/a/h$a;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 98
    :cond_0
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/h$a;->a(Lcom/tkay/expressad/exoplayer/e/a/h$a;)Ljava/util/UUID;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/util/UUID;[B)[B
    .locals 6

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 1059
    array-length v1, p1

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    add-int/lit8 v2, v1, 0x20

    .line 1064
    invoke-static {v2}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v3

    .line 1065
    invoke-virtual {v3, v2}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 1066
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->Z:I

    invoke-virtual {v3, v2}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 1067
    invoke-virtual {v3, v0}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 1068
    invoke-virtual {p0}, Ljava/util/UUID;->getMostSignificantBits()J

    move-result-wide v4

    invoke-virtual {v3, v4, v5}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 1069
    invoke-virtual {p0}, Ljava/util/UUID;->getLeastSignificantBits()J

    move-result-wide v4

    invoke-virtual {v3, v4, v5}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    if-eqz v1, :cond_1

    .line 1078
    array-length p0, p1

    invoke-virtual {v3, p0}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 1079
    invoke-virtual {v3, p1}, Ljava/nio/ByteBuffer;->put([B)Ljava/nio/ByteBuffer;

    .line 1081
    :cond_1
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/util/UUID;[Ljava/util/UUID;[B)[B
    .locals 7

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    if-eqz p2, :cond_1

    .line 59
    array-length v2, p2

    goto :goto_1

    :cond_1
    move v2, v0

    :goto_1
    add-int/lit8 v3, v2, 0x20

    if-eqz v1, :cond_2

    .line 62
    array-length v4, p1

    mul-int/lit8 v4, v4, 0x10

    add-int/lit8 v4, v4, 0x4

    add-int/2addr v3, v4

    .line 64
    :cond_2
    invoke-static {v3}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v4

    .line 65
    invoke-virtual {v4, v3}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 66
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->Z:I

    invoke-virtual {v4, v3}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    if-eqz v1, :cond_3

    const/high16 v3, 0x1000000

    goto :goto_2

    :cond_3
    move v3, v0

    .line 67
    :goto_2
    invoke-virtual {v4, v3}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 68
    invoke-virtual {p0}, Ljava/util/UUID;->getMostSignificantBits()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 69
    invoke-virtual {p0}, Ljava/util/UUID;->getLeastSignificantBits()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    if-eqz v1, :cond_4

    .line 71
    array-length p0, p1

    invoke-virtual {v4, p0}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 72
    array-length p0, p1

    :goto_3
    if-ge v0, p0, :cond_4

    aget-object v1, p1, v0

    .line 73
    invoke-virtual {v1}, Ljava/util/UUID;->getMostSignificantBits()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 74
    invoke-virtual {v1}, Ljava/util/UUID;->getLeastSignificantBits()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    add-int/lit8 v0, v0, 0x1

    goto :goto_3

    :cond_4
    if-eqz v2, :cond_5

    .line 78
    array-length p0, p2

    invoke-virtual {v4, p0}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 79
    invoke-virtual {v4, p2}, Ljava/nio/ByteBuffer;->put([B)Ljava/nio/ByteBuffer;

    .line 81
    :cond_5
    invoke-virtual {v4}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object p0

    return-object p0
.end method

.method public static a([BLjava/util/UUID;)[B
    .locals 3

    .line 130
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/h;->c([B)Lcom/tkay/expressad/exoplayer/e/a/h$a;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    if-eqz p1, :cond_1

    .line 134
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/h$a;->a(Lcom/tkay/expressad/exoplayer/e/a/h$a;)Ljava/util/UUID;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/util/UUID;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 135
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "UUID mismatch. Expected: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ", got: "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/h$a;->a(Lcom/tkay/expressad/exoplayer/e/a/h$a;)Ljava/util/UUID;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p0, "."

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "PsshAtomUtil"

    invoke-static {p1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    .line 138
    :cond_1
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/h$a;->c(Lcom/tkay/expressad/exoplayer/e/a/h$a;)[B

    move-result-object p0

    return-object p0
.end method

.method public static b([B)I
    .locals 0

    .line 111
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/h;->c([B)Lcom/tkay/expressad/exoplayer/e/a/h$a;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, -0x1

    return p0

    .line 115
    :cond_0
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/h$a;->b(Lcom/tkay/expressad/exoplayer/e/a/h$a;)I

    move-result p0

    return p0
.end method

.method private static c([B)Lcom/tkay/expressad/exoplayer/e/a/h$a;
    .locals 9

    .line 150
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/s;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/exoplayer/k/s;-><init>([B)V

    .line 151
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->b()I

    move-result p0

    const/4 v1, 0x0

    const/16 v2, 0x20

    if-ge p0, v2, :cond_0

    return-object v1

    :cond_0
    const/4 p0, 0x0

    .line 155
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 156
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 157
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result v3

    add-int/lit8 v3, v3, 0x4

    if-eq v2, v3, :cond_1

    return-object v1

    .line 161
    :cond_1
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 162
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->Z:I

    if-eq v2, v3, :cond_2

    return-object v1

    .line 166
    :cond_2
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/e/a/a;->a(I)I

    move-result v2

    const/4 v3, 0x1

    if-le v2, v3, :cond_3

    .line 168
    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string v0, "Unsupported pssh version: "

    invoke-virtual {v0, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "PsshAtomUtil"

    invoke-static {v0, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 171
    :cond_3
    new-instance v4, Ljava/util/UUID;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->j()J

    move-result-wide v5

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->j()J

    move-result-wide v7

    invoke-direct {v4, v5, v6, v7, v8}, Ljava/util/UUID;-><init>(JJ)V

    if-ne v2, v3, :cond_4

    .line 173
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v3

    mul-int/lit8 v3, v3, 0x10

    .line 174
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 176
    :cond_4
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v3

    .line 177
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result v5

    if-eq v3, v5, :cond_5

    return-object v1

    .line 181
    :cond_5
    new-array v1, v3, [B

    .line 182
    invoke-virtual {v0, v1, p0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 183
    new-instance p0, Lcom/tkay/expressad/exoplayer/e/a/h$a;

    invoke-direct {p0, v4, v2, v1}, Lcom/tkay/expressad/exoplayer/e/a/h$a;-><init>(Ljava/util/UUID;I[B)V

    return-object p0
.end method
