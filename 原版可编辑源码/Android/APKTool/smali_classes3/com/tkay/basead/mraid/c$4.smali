.class final Lcom/tkay/basead/mraid/c$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/mraid/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/mraid/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/mraid/c;)V
    .locals 0

    .line 197
    iput-object p1, p0, Lcom/tkay/basead/mraid/c$4;->a:Lcom/tkay/basead/mraid/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final close()V
    .locals 1

    .line 215
    iget-object v0, p0, Lcom/tkay/basead/mraid/c$4;->a:Lcom/tkay/basead/mraid/c;

    invoke-virtual {v0}, Lcom/tkay/basead/mraid/c;->dismiss()V

    return-void
.end method

.method public final expand(Ljava/lang/String;Z)V
    .locals 0

    return-void
.end method

.method public final getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final open(Ljava/lang/String;)V
    .locals 1

    .line 205
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/mraid/c$4;->a:Lcom/tkay/basead/mraid/c;

    invoke-static {v0}, Lcom/tkay/basead/mraid/c;->d(Lcom/tkay/basead/mraid/c;)Lcom/tkay/basead/mraid/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 206
    iget-object v0, p0, Lcom/tkay/basead/mraid/c$4;->a:Lcom/tkay/basead/mraid/c;

    invoke-static {v0}, Lcom/tkay/basead/mraid/c;->d(Lcom/tkay/basead/mraid/c;)Lcom/tkay/basead/mraid/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/basead/mraid/b;->open(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public final unload()V
    .locals 0

    .line 220
    invoke-virtual {p0}, Lcom/tkay/basead/mraid/c$4;->close()V

    return-void
.end method

.method public final useCustomClose(Z)V
    .locals 1

    .line 231
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/mraid/c$4;->a:Lcom/tkay/basead/mraid/c;

    invoke-static {v0}, Lcom/tkay/basead/mraid/c;->e(Lcom/tkay/basead/mraid/c;)Landroid/widget/TextView;

    move-result-object v0

    if-eqz p1, :cond_0

    const/4 p1, 0x4

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
