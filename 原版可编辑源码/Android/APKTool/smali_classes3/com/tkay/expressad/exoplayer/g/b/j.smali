.class public final Lcom/tkay/expressad/exoplayer/g/b/j;
.super Lcom/tkay/expressad/exoplayer/g/b/h;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tkay/expressad/exoplayer/g/b/j;",
            ">;"
        }
    .end annotation
.end field

.field public static final a:Ljava/lang/String; = "PRIV"


# instance fields
.field public final b:Ljava/lang/String;

.field public final c:[B


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 81
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/b/j$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/g/b/j$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/g/b/j;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    const-string v0, "PRIV"

    .line 44
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/g/b/h;-><init>(Ljava/lang/String;)V

    .line 45
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->b:Ljava/lang/String;

    .line 46
    invoke-virtual {p1}, Landroid/os/Parcel;->createByteArray()[B

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->c:[B

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;[B)V
    .locals 1

    const-string v0, "PRIV"

    .line 38
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/g/b/h;-><init>(Ljava/lang/String;)V

    .line 39
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->b:Ljava/lang/String;

    .line 40
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->c:[B

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

    .line 54
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 57
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/g/b/j;

    .line 58
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->b:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/g/b/j;->b:Ljava/lang/String;

    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->c:[B

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/g/b/j;->c:[B

    invoke-static {v2, p1}, Ljava/util/Arrays;->equals([B[B)Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 2

    .line 64
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->b:Ljava/lang/String;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    add-int/lit16 v0, v0, 0x20f

    mul-int/lit8 v0, v0, 0x1f

    .line 65
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->c:[B

    invoke-static {v1}, Ljava/util/Arrays;->hashCode([B)I

    move-result v1

    add-int/2addr v0, v1

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    .line 71
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": owner="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    .line 77
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 78
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/j;->c:[B

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByteArray([B)V

    return-void
.end method
