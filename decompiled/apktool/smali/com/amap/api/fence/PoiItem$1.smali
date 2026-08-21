.class final Lcom/amap/api/fence/PoiItem$1;
.super Ljava/lang/Object;
.source "PoiItem.java"

# interfaces
.implements Landroid/os/Parcelable$Creator;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/amap/api/fence/PoiItem;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Landroid/os/Parcelable$Creator<",
        "Lcom/amap/api/fence/PoiItem;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/os/Parcel;)Lcom/amap/api/fence/PoiItem;
    .locals 1

    new-instance v0, Lcom/amap/api/fence/PoiItem;

    invoke-direct {v0, p0}, Lcom/amap/api/fence/PoiItem;-><init>(Landroid/os/Parcel;)V

    return-object v0
.end method

.method private static a(I)[Lcom/amap/api/fence/PoiItem;
    .locals 0

    new-array p0, p0, [Lcom/amap/api/fence/PoiItem;

    return-object p0
.end method


# virtual methods
.method public final synthetic createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;
    .locals 0

    invoke-static {p1}, Lcom/amap/api/fence/PoiItem$1;->a(Landroid/os/Parcel;)Lcom/amap/api/fence/PoiItem;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic newArray(I)[Ljava/lang/Object;
    .locals 0

    invoke-static {p1}, Lcom/amap/api/fence/PoiItem$1;->a(I)[Lcom/amap/api/fence/PoiItem;

    move-result-object p1

    return-object p1
.end method
