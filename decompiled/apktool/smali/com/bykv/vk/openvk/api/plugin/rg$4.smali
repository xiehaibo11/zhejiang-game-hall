.class Lcom/bykv/vk/openvk/api/plugin/rg$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/api/plugin/rg$q;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/rg;->getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/bykv/vk/openvk/api/plugin/rg$q<",
        "Lcom/bykv/vk/openvk/TTVfManager;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic df:Ljava/lang/Class;

.field final synthetic q:Lcom/bykv/vk/openvk/api/plugin/rg;

.field final synthetic rg:Landroid/os/Bundle;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg;Landroid/os/Bundle;Ljava/lang/Class;)V
    .locals 0

    .line 98
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$4;->q:Lcom/bykv/vk/openvk/api/plugin/rg;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/rg$4;->rg:Landroid/os/Bundle;

    iput-object p3, p0, Lcom/bykv/vk/openvk/api/plugin/rg$4;->df:Ljava/lang/Class;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$4;->rg:Landroid/os/Bundle;

    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/pt;->rg(Landroid/os/Bundle;)V

    return-void
.end method

.method public rg(Lcom/bykv/vk/openvk/TTVfManager;)V
    .locals 2

    .line 106
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$4;->df:Ljava/lang/Class;

    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$4;->rg:Landroid/os/Bundle;

    invoke-interface {p1, v0, v1}, Lcom/bykv/vk/openvk/TTVfManager;->getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;

    return-void
.end method

.method public bridge synthetic rg(Ljava/lang/Object;)V
    .locals 0

    .line 98
    check-cast p1, Lcom/bykv/vk/openvk/TTVfManager;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$4;->rg(Lcom/bykv/vk/openvk/TTVfManager;)V

    return-void
.end method
