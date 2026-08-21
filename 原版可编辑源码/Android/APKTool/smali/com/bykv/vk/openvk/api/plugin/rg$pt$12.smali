.class Lcom/bykv/vk/openvk/api/plugin/rg$pt$12;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/api/plugin/rg$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/rg$pt;->loadFullVideoVs(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/bykv/vk/openvk/api/plugin/rg$rg<",
        "Lcom/bykv/vk/openvk/TTVfNative;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;

.field final synthetic q:Lcom/bykv/vk/openvk/api/plugin/rg$pt;

.field final synthetic rg:Lcom/bykv/vk/openvk/VfSlot;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;)V
    .locals 0

    .line 309
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$12;->q:Lcom/bykv/vk/openvk/api/plugin/rg$pt;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$12;->rg:Lcom/bykv/vk/openvk/VfSlot;

    iput-object p3, p0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$12;->df:Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/bykv/vk/openvk/TTVfNative;)V
    .locals 2

    .line 312
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$12;->rg:Lcom/bykv/vk/openvk/VfSlot;

    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$12;->df:Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;

    invoke-interface {p1, v0, v1}, Lcom/bykv/vk/openvk/TTVfNative;->loadFullVideoVs(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;)V

    return-void
.end method

.method public bridge synthetic rg(Ljava/lang/Object;)V
    .locals 0

    .line 309
    check-cast p1, Lcom/bykv/vk/openvk/TTVfNative;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$12;->rg(Lcom/bykv/vk/openvk/TTVfNative;)V

    return-void
.end method
