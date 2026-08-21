.class final Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/toutiao/TTTYBannerAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V
    .locals 0

    .line 133
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onError(ILjava/lang/String;)V
    .locals 1

    .line 136
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onNtExpressVnLoad(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtExpressObject;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_1

    .line 141
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 142
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    const/4 v1, 0x0

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-static {v0, p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a(Lcom/tkay/network/toutiao/TTTYBannerAdapter;Lcom/bykv/vk/openvk/TTNtExpressObject;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 143
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget p1, p1, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->f:I

    if-lez p1, :cond_0

    .line 144
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->g(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget v0, v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->f:I

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setSlideIntervalTime(I)V

    goto :goto_0

    .line 146
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->g(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object p1

    invoke-interface {p1, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setSlideIntervalTime(I)V

    .line 148
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->h(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V

    .line 150
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->g(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object p1

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->render()V

    return-void

    .line 152
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    const-string v0, ""

    const-string v1, "Return Ad list is empty."

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
