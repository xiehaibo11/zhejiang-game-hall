.class final Lcom/tkay/expressad/exoplayer/h/af$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Parcelable$Creator;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/af;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Landroid/os/Parcelable$Creator<",
        "Lcom/tkay/expressad/exoplayer/h/af;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 132
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/os/Parcel;)Lcom/tkay/expressad/exoplayer/h/af;
    .locals 1

    .line 136
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/af;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/exoplayer/h/af;-><init>(Landroid/os/Parcel;)V

    return-object v0
.end method

.method private static a(I)[Lcom/tkay/expressad/exoplayer/h/af;
    .locals 0

    .line 141
    new-array p0, p0, [Lcom/tkay/expressad/exoplayer/h/af;

    return-object p0
.end method


# virtual methods
.method public final synthetic createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;
    .locals 1

    .line 2136
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/af;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/h/af;-><init>(Landroid/os/Parcel;)V

    return-object v0
.end method

.method public final bridge synthetic newArray(I)[Ljava/lang/Object;
    .locals 0

    .line 1141
    new-array p1, p1, [Lcom/tkay/expressad/exoplayer/h/af;

    return-object p1
.end method
