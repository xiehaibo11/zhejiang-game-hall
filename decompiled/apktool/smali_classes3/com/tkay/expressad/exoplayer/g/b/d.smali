.class public final Lcom/tkay/expressad/exoplayer/g/b/d;
.super Lcom/tkay/expressad/exoplayer/g/b/h;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tkay/expressad/exoplayer/g/b/d;",
            ">;"
        }
    .end annotation
.end field

.field public static final a:Ljava/lang/String; = "CTOC"


# instance fields
.field public final b:Ljava/lang/String;

.field public final c:Z

.field public final d:Z

.field public final e:[Ljava/lang/String;

.field private final f:[Lcom/tkay/expressad/exoplayer/g/b/h;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 114
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/b/d$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/g/b/d$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/g/b/d;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 4

    const-string v0, "CTOC"

    .line 51
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/g/b/h;-><init>(Ljava/lang/String;)V

    .line 52
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->b:Ljava/lang/String;

    .line 53
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->c:Z

    .line 54
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->d:Z

    .line 55
    invoke-virtual {p1}, Landroid/os/Parcel;->createStringArray()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->e:[Ljava/lang/String;

    .line 56
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    .line 57
    new-array v1, v0, [Lcom/tkay/expressad/exoplayer/g/b/h;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->f:[Lcom/tkay/expressad/exoplayer/g/b/h;

    :goto_2
    if-ge v2, v0, :cond_2

    .line 59
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->f:[Lcom/tkay/expressad/exoplayer/g/b/h;

    const-class v3, Lcom/tkay/expressad/exoplayer/g/b/h;

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {p1, v3}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/g/b/h;

    aput-object v3, v1, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    :cond_2
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;ZZ[Ljava/lang/String;[Lcom/tkay/expressad/exoplayer/g/b/h;)V
    .locals 1

    const-string v0, "CTOC"

    .line 42
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/g/b/h;-><init>(Ljava/lang/String;)V

    .line 43
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->b:Ljava/lang/String;

    .line 44
    iput-boolean p2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->c:Z

    .line 45
    iput-boolean p3, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->d:Z

    .line 46
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->e:[Ljava/lang/String;

    .line 47
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->f:[Lcom/tkay/expressad/exoplayer/g/b/h;

    return-void
.end method

.method private a()I
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->f:[Lcom/tkay/expressad/exoplayer/g/b/h;

    array-length v0, v0

    return v0
.end method

.method private a(I)Lcom/tkay/expressad/exoplayer/g/b/h;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->f:[Lcom/tkay/expressad/exoplayer/g/b/h;

    aget-object p1, v0, p1

    return-object p1
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

    .line 82
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 85
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/g/b/d;

    .line 86
    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->c:Z

    iget-boolean v3, p1, Lcom/tkay/expressad/exoplayer/g/b/d;->c:Z

    if-ne v2, v3, :cond_2

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->d:Z

    iget-boolean v3, p1, Lcom/tkay/expressad/exoplayer/g/b/d;->d:Z

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->b:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/g/b/d;->b:Ljava/lang/String;

    .line 88
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->e:[Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/g/b/d;->e:[Ljava/lang/String;

    .line 89
    invoke-static {v2, v3}, Ljava/util/Arrays;->equals([Ljava/lang/Object;[Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->f:[Lcom/tkay/expressad/exoplayer/g/b/h;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/g/b/d;->f:[Lcom/tkay/expressad/exoplayer/g/b/h;

    .line 90
    invoke-static {v2, p1}, Ljava/util/Arrays;->equals([Ljava/lang/Object;[Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 2

    .line 96
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->c:Z

    add-int/lit16 v0, v0, 0x20f

    mul-int/lit8 v0, v0, 0x1f

    .line 97
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->d:Z

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 98
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->b:Ljava/lang/String;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    add-int/2addr v0, v1

    return v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 4

    .line 104
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 105
    iget-boolean p2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->c:Z

    int-to-byte p2, p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    .line 106
    iget-boolean p2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->d:Z

    int-to-byte p2, p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    .line 107
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->e:[Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeStringArray([Ljava/lang/String;)V

    .line 108
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->f:[Lcom/tkay/expressad/exoplayer/g/b/h;

    array-length p2, p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 109
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/d;->f:[Lcom/tkay/expressad/exoplayer/g/b/h;

    array-length v0, p2

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_0

    aget-object v3, p2, v2

    .line 110
    invoke-virtual {p1, v3, v1}, Landroid/os/Parcel;->writeParcelable(Landroid/os/Parcelable;I)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
