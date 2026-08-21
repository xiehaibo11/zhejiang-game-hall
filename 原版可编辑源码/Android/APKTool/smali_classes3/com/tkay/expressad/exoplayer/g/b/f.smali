.class public final Lcom/tkay/expressad/exoplayer/g/b/f;
.super Lcom/tkay/expressad/exoplayer/g/b/h;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tkay/expressad/exoplayer/g/b/f;",
            ">;"
        }
    .end annotation
.end field

.field public static final a:Ljava/lang/String; = "GEOB"


# instance fields
.field public final b:Ljava/lang/String;

.field public final c:Ljava/lang/String;

.field public final d:Ljava/lang/String;

.field public final e:[B


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 99
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/b/f$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/g/b/f$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/g/b/f;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    const-string v0, "GEOB"

    .line 48
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/g/b/h;-><init>(Ljava/lang/String;)V

    .line 49
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->b:Ljava/lang/String;

    .line 50
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->c:Ljava/lang/String;

    .line 51
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->d:Ljava/lang/String;

    .line 52
    invoke-virtual {p1}, Landroid/os/Parcel;->createByteArray()[B

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->e:[B

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V
    .locals 1

    const-string v0, "GEOB"

    .line 40
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/g/b/h;-><init>(Ljava/lang/String;)V

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->b:Ljava/lang/String;

    .line 42
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->c:Ljava/lang/String;

    .line 43
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->d:Ljava/lang/String;

    .line 44
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->e:[B

    return-void
.end method


# virtual methods
.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 60
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 63
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/g/b/f;

    .line 64
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->b:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/g/b/f;->b:Ljava/lang/String;

    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->c:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/g/b/f;->c:Ljava/lang/String;

    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->d:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/g/b/f;->d:Ljava/lang/String;

    .line 65
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->e:[B

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/g/b/f;->e:[B

    invoke-static {v2, p1}, Ljava/util/Arrays;->equals([B[B)Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 3

    .line 71
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->b:Ljava/lang/String;

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

    .line 72
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->c:Ljava/lang/String;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v2

    goto :goto_1

    :cond_1
    move v2, v1

    :goto_1
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 73
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->d:Ljava/lang/String;

    if-eqz v2, :cond_2

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v1

    :cond_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 74
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->e:[B

    invoke-static {v1}, Ljava/util/Arrays;->hashCode([B)I

    move-result v1

    add-int/2addr v0, v1

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    .line 80
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": mimeType="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", filename="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", description="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    .line 93
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 94
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->c:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 95
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->d:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 96
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/f;->e:[B

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByteArray([B)V

    return-void
.end method
