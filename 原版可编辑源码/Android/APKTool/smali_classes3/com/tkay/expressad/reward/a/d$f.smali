.class final Lcom/tkay/expressad/reward/a/d$f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "f"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/reward/a/d;

.field private b:Lcom/tkay/expressad/foundation/d/c;

.field private c:J

.field private d:Ljava/lang/String;

.field private e:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Z)V
    .locals 2

    .line 2847
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 2845
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d$f;->e:Z

    .line 2848
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/reward/a/d$f;->c:J

    .line 2849
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/d$f;->d:Ljava/lang/String;

    .line 2850
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$f;->a:Lcom/tkay/expressad/reward/a/d;

    .line 2851
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$f;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 2852
    iput-boolean p4, p0, Lcom/tkay/expressad/reward/a/d$f;->e:Z

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 2859
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$f;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2860
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "H5SourceDownloadListener source code download success cid:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$f;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "  url:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2861
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$f;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {p1}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object p1

    const/4 v0, 0x5

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 2862
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/16 v0, 0x8

    .line 2863
    iput v0, p1, Landroid/os/Message;->what:I

    .line 2864
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$f;->b:Lcom/tkay/expressad/foundation/d/c;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 2865
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$f;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 2885
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 2892
    :try_start_0
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "H5SourceDownloadListener source code download fail cid:"

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$f;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "  url:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2898
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$f;->a:Lcom/tkay/expressad/reward/a/d;

    if-eqz p2, :cond_0

    .line 2899
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$f;->a:Lcom/tkay/expressad/reward/a/d;

    const-string v0, "H5 code resource download failed "

    invoke-static {p2, v0, p1}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 2920
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method
