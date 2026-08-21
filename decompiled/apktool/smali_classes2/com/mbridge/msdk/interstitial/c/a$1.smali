.class final Lcom/mbridge/msdk/interstitial/c/a$1;
.super Landroid/os/Handler;
.source "InterstitialController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/interstitial/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/interstitial/c/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/interstitial/c/a;Landroid/os/Looper;)V
    .locals 0

    .line 150
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    .line 156
    :cond_0
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_a

    const/4 v2, 0x2

    const-string v3, "can\'t show because unknow error"

    const-string v4, ""

    if-eq v0, v2, :cond_7

    const/4 v2, 0x3

    if-eq v0, v2, :cond_6

    const/4 v1, 0x4

    if-eq v0, v1, :cond_3

    const/4 p1, 0x6

    if-eq v0, p1, :cond_2

    const/4 p1, 0x7

    if-eq v0, p1, :cond_1

    goto/16 :goto_2

    .line 205
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    const/4 v0, 0x0

    iput-boolean v0, p1, Lcom/mbridge/msdk/interstitial/c/a;->b:Z

    .line 206
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    if-eqz p1, :cond_b

    .line 207
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/out/InterstitialListener;->onInterstitialClosed(Lcom/mbridge/msdk/out/MBridgeIds;)V

    goto/16 :goto_2

    .line 200
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    if-eqz p1, :cond_b

    .line 201
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/out/InterstitialListener;->onInterstitialAdClick(Lcom/mbridge/msdk/out/MBridgeIds;)V

    goto/16 :goto_2

    .line 186
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object v0

    if-eqz v0, :cond_b

    .line 188
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v0, :cond_4

    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    instance-of v0, v0, Ljava/lang/String;

    if-eqz v0, :cond_4

    .line 189
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    move-object v4, p1

    check-cast v4, Ljava/lang/String;

    .line 191
    :cond_4
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_5

    goto :goto_0

    :cond_5
    move-object v3, v4

    .line 194
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-interface {p1, v0, v3}, Lcom/mbridge/msdk/out/InterstitialListener;->onInterstitialShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 195
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->c(Lcom/mbridge/msdk/interstitial/c/a;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "handler \u6570\u636eshow\u5931\u8d25:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 179
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    iput-boolean v1, p1, Lcom/mbridge/msdk/interstitial/c/a;->b:Z

    .line 180
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    if-eqz p1, :cond_b

    .line 181
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/out/InterstitialListener;->onInterstitialShowSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 182
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->c(Lcom/mbridge/msdk/interstitial/c/a;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "handler \u6570\u636eshow\u6210\u529f"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 164
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object v0

    if-eqz v0, :cond_b

    .line 167
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v0, :cond_8

    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    instance-of v0, v0, Ljava/lang/String;

    if-eqz v0, :cond_8

    .line 168
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    move-object v4, p1

    check-cast v4, Ljava/lang/String;

    .line 170
    :cond_8
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_9

    goto :goto_1

    :cond_9
    move-object v3, v4

    .line 173
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-interface {p1, v0, v3}, Lcom/mbridge/msdk/out/InterstitialListener;->onInterstitialLoadFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 174
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->c(Lcom/mbridge/msdk/interstitial/c/a;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "handler \u6570\u636eload\u5931\u8d25:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 158
    :cond_a
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    if-eqz p1, :cond_b

    .line 159
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/out/InterstitialListener;->onInterstitialLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 160
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a$1;->a:Lcom/mbridge/msdk/interstitial/c/a;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/c/a;->c(Lcom/mbridge/msdk/interstitial/c/a;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "handler \u6570\u636eload\u6210\u529f"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    :goto_2
    return-void
.end method
