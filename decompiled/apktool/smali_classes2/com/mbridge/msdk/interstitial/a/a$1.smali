.class final Lcom/mbridge/msdk/interstitial/a/a$1;
.super Landroid/os/Handler;
.source "IntersAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/interstitial/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/interstitial/a/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/interstitial/a/a;Landroid/os/Looper;)V
    .locals 0

    .line 154
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 4

    .line 159
    :try_start_0
    iget v0, p1, Landroid/os/Message;->what:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x1

    const-string v2, "  mExcludes:"

    const-string v3, "IntersAdapter"

    if-eq v0, v1, :cond_3

    const/4 v1, 0x2

    if-eq v0, v1, :cond_2

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    goto/16 :goto_0

    .line 181
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->c(Lcom/mbridge/msdk/interstitial/a/a;)Lcom/mbridge/msdk/interstitial/c/a$a;

    move-result-object v0

    if-eqz v0, :cond_4

    const-string v0, "handler \u6570\u636eload\u5931\u8d25"

    .line 182
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 183
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v0, :cond_4

    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    instance-of v0, v0, Ljava/lang/String;

    if-eqz v0, :cond_4

    .line 184
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    .line 185
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->c(Lcom/mbridge/msdk/interstitial/a/a;)Lcom/mbridge/msdk/interstitial/c/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/a/a;->d(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v1

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/interstitial/c/a$a;->b(ZLjava/lang/String;)V

    goto/16 :goto_0

    .line 172
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->c(Lcom/mbridge/msdk/interstitial/a/a;)Lcom/mbridge/msdk/interstitial/c/a$a;

    move-result-object v0

    if-eqz v0, :cond_4

    const-string v0, "handler \u6570\u636eload\u6210\u529f"

    .line 173
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 174
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v0, :cond_4

    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    instance-of v0, v0, Ljava/lang/String;

    if-eqz v0, :cond_4

    .line 175
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    .line 176
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->c(Lcom/mbridge/msdk/interstitial/a/a;)Lcom/mbridge/msdk/interstitial/c/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/a/a;->d(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v1

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/interstitial/c/a$a;->a(ZLjava/lang/String;)V

    goto :goto_0

    .line 167
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "handler id\u83b7\u53d6\u8d85\u65f6  \u5f00\u59cbload mTtcIds:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/interstitial/a/a;->c()V

    goto :goto_0

    .line 162
    :cond_3
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "handler id\u83b7\u53d6\u6210\u529f \u5f00\u59cbload mTtcIds:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 163
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a$1;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/interstitial/a/a;->c()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 194
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_0
    return-void
.end method
