.class Lcom/bykv/vk/openvk/live/df$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTPluginListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/live/df;->rg(Lcom/bykv/vk/openvk/api/plugin/c;Landroid/os/Bundle;)V
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

    .line 114
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/df$1;->rg:Lcom/bykv/vk/openvk/live/df;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public config()Landroid/os/Bundle;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V
    .locals 1

    const-string p2, "TTLiveSDkBridge"

    const/4 p3, 0x0

    const/16 v0, 0x3e8

    if-ne v0, p1, :cond_0

    const-string p1, "live PL install success \uff0c try to init live sdk"

    .line 118
    invoke-static {p2, p1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    invoke-static {}, Lcom/bykv/vk/openvk/live/df;->df()Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object p1

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 120
    invoke-static {}, Lcom/bykv/vk/openvk/live/df;->q()Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object p1

    invoke-virtual {p1, p3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 121
    iget-object p1, p0, Lcom/bykv/vk/openvk/live/df$1;->rg:Lcom/bykv/vk/openvk/live/df;

    invoke-static {p1}, Lcom/bykv/vk/openvk/live/df;->rg(Lcom/bykv/vk/openvk/live/df;)V

    goto :goto_1

    :cond_0
    const/16 v0, 0x3e9

    if-ne v0, p1, :cond_2

    .line 123
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "live PL install failed, errorCode: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez p4, :cond_1

    const/4 p4, 0x0

    goto :goto_0

    :cond_1
    const-string v0, "code"

    invoke-virtual {p4, v0}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p4

    :goto_0
    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 124
    invoke-static {}, Lcom/bykv/vk/openvk/live/df;->df()Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object p1

    invoke-virtual {p1, p3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 125
    invoke-static {}, Lcom/bykv/vk/openvk/live/df;->q()Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object p1

    invoke-virtual {p1, p3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 128
    :cond_2
    :goto_1
    iget-object p1, p0, Lcom/bykv/vk/openvk/live/df$1;->rg:Lcom/bykv/vk/openvk/live/df;

    invoke-static {p1}, Lcom/bykv/vk/openvk/live/df;->df(Lcom/bykv/vk/openvk/live/df;)V

    return-void
.end method

.method public packageName()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
