.class public final Lcom/tkay/expressad/exoplayer/g/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/g/a$a;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tkay/expressad/exoplayer/g/a/a;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field public final a:Ljava/lang/String;

.field public final b:Ljava/lang/String;

.field public final c:J

.field public final d:J

.field public final e:J

.field public final f:[B

.field private g:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 146
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/a/a$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/g/a/a$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/g/a/a;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 2

    .line 86
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 87
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->a:Ljava/lang/String;

    .line 88
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->b:Ljava/lang/String;

    .line 89
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->d:J

    .line 90
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->c:J

    .line 91
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->e:J

    .line 92
    invoke-virtual {p1}, Landroid/os/Parcel;->createByteArray()[B

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->f:[B

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;JJ[BJ)V
    .locals 0

    .line 77
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 78
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->a:Ljava/lang/String;

    .line 79
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->b:Ljava/lang/String;

    .line 80
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->c:J

    .line 81
    iput-wide p5, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->e:J

    .line 82
    iput-object p7, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->f:[B

    .line 83
    iput-wide p8, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->d:J

    return-void
.end method


# virtual methods
.method public final describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 6

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 115
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 118
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/g/a/a;

    .line 119
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->d:J

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/g/a/a;->d:J

    cmp-long v2, v2, v4

    if-nez v2, :cond_2

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->c:J

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/g/a/a;->c:J

    cmp-long v2, v2, v4

    if-nez v2, :cond_2

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->e:J

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/g/a/a;->e:J

    cmp-long v2, v2, v4

    if-nez v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->a:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/g/a/a;->a:Ljava/lang/String;

    .line 120
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->b:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/g/a/a;->b:Ljava/lang/String;

    .line 121
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->f:[B

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/g/a/a;->f:[B

    invoke-static {v2, p1}, Ljava/util/Arrays;->equals([B[B)Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 6

    .line 97
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->g:I

    if-nez v0, :cond_2

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->a:Ljava/lang/String;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    add-int/lit16 v0, v0, 0x20f

    mul-int/lit8 v0, v0, 0x1f

    .line 100
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->b:Ljava/lang/String;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v1

    :cond_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 101
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->d:J

    const/16 v3, 0x20

    ushr-long v4, v1, v3

    xor-long/2addr v1, v4

    long-to-int v1, v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 102
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->c:J

    ushr-long v4, v1, v3

    xor-long/2addr v1, v4

    long-to-int v1, v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 103
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->e:J

    ushr-long v3, v1, v3

    xor-long/2addr v1, v3

    long-to-int v1, v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 104
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->f:[B

    invoke-static {v1}, Ljava/util/Arrays;->hashCode([B)I

    move-result v1

    add-int/2addr v0, v1

    .line 105
    iput v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->g:I

    .line 107
    :cond_2
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->g:I

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    .line 126
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "EMSG: scheme="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->e:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ", value="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 138
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->a:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 139
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 140
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->d:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 141
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->c:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 142
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->e:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 143
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/a/a;->f:[B

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByteArray([B)V

    return-void
.end method
