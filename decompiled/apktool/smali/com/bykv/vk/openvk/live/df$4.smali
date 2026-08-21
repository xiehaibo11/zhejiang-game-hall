.class Lcom/bykv/vk/openvk/live/df$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/android/live/base/api/callback/Callback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/live/df;->rg(Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/bytedance/android/live/base/api/callback/Callback<",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/live/df;

.field final synthetic rg:Lcom/bykv/vk/openvk/live/df$rg;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/live/df;Lcom/bykv/vk/openvk/live/df$rg;)V
    .locals 0

    .line 367
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/df$4;->df:Lcom/bykv/vk/openvk/live/df;

    iput-object p2, p0, Lcom/bykv/vk/openvk/live/df$4;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public synthetic invoke(Ljava/lang/Object;)V
    .locals 0

    .line 367
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/live/df$4;->rg(Ljava/lang/Boolean;)V

    return-void
.end method

.method public rg(Ljava/lang/Boolean;)V
    .locals 2

    .line 370
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df$4;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    if-eqz v0, :cond_0

    .line 371
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 372
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    const-string v1, "live_room_status"

    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 374
    iget-object p1, p0, Lcom/bykv/vk/openvk/live/df$4;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    const/4 v1, 0x0

    invoke-virtual {p1, v1, v0}, Lcom/bykv/vk/openvk/live/df$rg;->onEvent(ILandroid/os/Bundle;)V

    :cond_0
    return-void
.end method
