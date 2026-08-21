.class public final Lcom/tkay/expressad/exoplayer/i/c$e;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Parcelable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/i/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "e"
.end annotation


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tkay/expressad/exoplayer/i/c$e;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field public final a:I

.field public final b:[I

.field public final c:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1037
    new-instance v0, Lcom/tkay/expressad/exoplayer/i/c$e$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/i/c$e$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/i/c$e;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method private varargs constructor <init>(I[I)V
    .locals 0

    .line 982
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 983
    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->a:I

    .line 984
    array-length p1, p2

    invoke-static {p2, p1}, Ljava/util/Arrays;->copyOf([II)[I

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->b:[I

    .line 985
    array-length p2, p2

    iput p2, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->c:I

    .line 986
    invoke-static {p1}, Ljava/util/Arrays;->sort([I)V

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    .line 989
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 990
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->a:I

    .line 991
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->c:I

    .line 992
    new-array v0, v0, [I

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->b:[I

    .line 993
    invoke-virtual {p1, v0}, Landroid/os/Parcel;->readIntArray([I)V

    return-void
.end method

.method private a(I)Z
    .locals 5

    .line 998
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->b:[I

    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_1

    aget v4, v0, v3

    if-ne v4, p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return v2
.end method


# virtual methods
.method public final describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 1016
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 1019
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/i/c$e;

    .line 1020
    iget v2, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->a:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/i/c$e;->a:I

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->b:[I

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/i/c$e;->b:[I

    invoke-static {v2, p1}, Ljava/util/Arrays;->equals([I[I)Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 2

    .line 1008
    iget v0, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->a:I

    mul-int/lit8 v0, v0, 0x1f

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->b:[I

    invoke-static {v1}, Ljava/util/Arrays;->hashCode([I)I

    move-result v1

    add-int/2addr v0, v1

    return v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    .line 1032
    iget p2, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->a:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1033
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->b:[I

    array-length p2, p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1034
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/i/c$e;->b:[I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeIntArray([I)V

    return-void
.end method
