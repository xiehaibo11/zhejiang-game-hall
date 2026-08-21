.class Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/android/live/base/api/LocationProvider;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->getTTLocation()Lcom/bytedance/android/live/base/api/LocationProvider;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;

.field final synthetic rg:Lcom/bykv/vk/openvk/LocationProvider;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;Lcom/bykv/vk/openvk/LocationProvider;)V
    .locals 0

    .line 36
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner$2;->df:Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;

    iput-object p2, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner$2;->rg:Lcom/bykv/vk/openvk/LocationProvider;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getLatitude()D
    .locals 2

    .line 39
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner$2;->rg:Lcom/bykv/vk/openvk/LocationProvider;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/LocationProvider;->getLatitude()D

    move-result-wide v0

    return-wide v0
.end method

.method public getLongitude()D
    .locals 2

    .line 44
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner$2;->rg:Lcom/bykv/vk/openvk/LocationProvider;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/LocationProvider;->getLongitude()D

    move-result-wide v0

    return-wide v0
.end method
