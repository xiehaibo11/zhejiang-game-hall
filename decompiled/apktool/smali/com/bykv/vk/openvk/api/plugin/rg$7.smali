.class Lcom/bykv/vk/openvk/api/plugin/rg$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/api/plugin/rg$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/rg;->setThemeStatus(I)V
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

.field final synthetic rg:I


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg;I)V
    .locals 0

    .line 161
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$7;->df:Lcom/bykv/vk/openvk/api/plugin/rg;

    iput p2, p0, Lcom/bykv/vk/openvk/api/plugin/rg$7;->rg:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/bykv/vk/openvk/TTVfManager;)V
    .locals 1

    .line 164
    iget-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$7;->df:Lcom/bykv/vk/openvk/api/plugin/rg;

    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/rg;->rg(Lcom/bykv/vk/openvk/api/plugin/rg;)Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object p1

    iget v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$7;->rg:I

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/TTVfManager;->setThemeStatus(I)V

    return-void
.end method

.method public bridge synthetic rg(Ljava/lang/Object;)V
    .locals 0

    .line 161
    check-cast p1, Lcom/bykv/vk/openvk/TTVfManager;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$7;->rg(Lcom/bykv/vk/openvk/TTVfManager;)V

    return-void
.end method
