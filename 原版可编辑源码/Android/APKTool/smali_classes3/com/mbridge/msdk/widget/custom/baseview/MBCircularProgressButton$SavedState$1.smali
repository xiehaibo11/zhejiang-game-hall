.class final Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState$1;
.super Ljava/lang/Object;
.source "MBCircularProgressButton.java"

# interfaces
.implements Landroid/os/Parcelable$Creator;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Landroid/os/Parcelable$Creator<",
        "Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 611
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final synthetic createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;
    .locals 2

    .line 2615
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;

    const/4 v1, 0x0

    invoke-direct {v0, p1, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;-><init>(Landroid/os/Parcel;Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;)V

    return-object v0
.end method

.method public final bridge synthetic newArray(I)[Ljava/lang/Object;
    .locals 0

    .line 1620
    new-array p1, p1, [Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;

    return-object p1
.end method
