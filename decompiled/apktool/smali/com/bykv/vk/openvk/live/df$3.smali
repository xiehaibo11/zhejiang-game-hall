.class Lcom/bykv/vk/openvk/live/df$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/android/live/base/api/ILiveInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/live/df;->pp()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/bykv/vk/openvk/live/df;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/live/df;)V
    .locals 0

    .line 241
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/df$3;->rg:Lcom/bykv/vk/openvk/live/df;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLiveInitFinish()V
    .locals 4

    const-string v0, "TTLiveSDkBridge"

    const-string v1, "onLiveInitFinish - live sdk init succeed\uff01"

    .line 243
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "execute commerce initLiveCommerce method start"

    .line 244
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 245
    invoke-static {}, Lcom/bykv/vk/openvk/live/rg;->rg()Z

    move-result v1

    .line 246
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "execute commerce initLiveCommerce end , result: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 247
    invoke-static {}, Lcom/bykv/vk/openvk/live/df;->pt()Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 248
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df$3;->rg:Lcom/bykv/vk/openvk/live/df;

    invoke-static {v0}, Lcom/bykv/vk/openvk/live/df;->df(Lcom/bykv/vk/openvk/live/df;)V

    .line 249
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    if-eqz v0, :cond_0

    .line 251
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 252
    invoke-static {}, Lcom/bykv/vk/openvk/live/df;->pt()Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1

    const-string v2, "live_sdk_init_status"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 253
    sget-object v1, Lcom/bykv/vk/openvk/live/df;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    const/4 v2, 0x2

    invoke-virtual {v1, v2, v0}, Lcom/bykv/vk/openvk/live/df$rg;->onEvent(ILandroid/os/Bundle;)V

    :cond_0
    return-void
.end method
