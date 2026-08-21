.class Lcom/bykv/vk/openvk/api/plugin/rg$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/api/plugin/rg$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/rg;->unregister(Ljava/lang/Object;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/bykv/vk/openvk/api/plugin/rg$rg<",
        "Lcom/bykv/vk/openvk/TTVfManager;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/api/plugin/rg;

.field final synthetic rg:Ljava/lang/Object;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg;Ljava/lang/Object;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$3;->df:Lcom/bykv/vk/openvk/api/plugin/rg;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/rg$3;->rg:Ljava/lang/Object;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/bykv/vk/openvk/TTVfManager;)V
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$3;->rg:Ljava/lang/Object;

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/TTVfManager;->unregister(Ljava/lang/Object;)V

    return-void
.end method

.method public bridge synthetic rg(Ljava/lang/Object;)V
    .locals 0

    .line 83
    check-cast p1, Lcom/bykv/vk/openvk/TTVfManager;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$3;->rg(Lcom/bykv/vk/openvk/TTVfManager;)V

    return-void
.end method
