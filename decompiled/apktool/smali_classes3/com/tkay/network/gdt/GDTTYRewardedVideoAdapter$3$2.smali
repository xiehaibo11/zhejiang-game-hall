.class final Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/interstitial2/ADRewardListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->onADReceive()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;)V
    .locals 0

    .line 278
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onReward(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 281
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v0

    if-nez v0, :cond_0

    .line 282
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-static {v0, v1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;Ljava/util/Map;)Ljava/util/Map;

    .line 284
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v0

    const-string v1, "transId"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    const-string v1, "gdt_trans_id"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 285
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->x(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 286
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->y(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    :cond_1
    return-void
.end method
