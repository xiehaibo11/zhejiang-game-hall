.class public final Lcom/tkay/expressad/exoplayer/g/c/e;
.super Lcom/tkay/expressad/exoplayer/g/c/b;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tkay/expressad/exoplayer/g/c/e;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 33
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/c/e$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/g/c/e$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/g/c/e;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/g/c/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    return-void
.end method
