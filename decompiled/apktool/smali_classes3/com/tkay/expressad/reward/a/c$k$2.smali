.class final Lcom/tkay/expressad/reward/a/c$k$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/c$k;-><init>(Landroid/os/Handler;Ljava/lang/Runnable;ZZLjava/lang/String;Lcom/tkay/expressad/reward/a/c$j;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/CopyOnWriteArrayList;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/reward/a/c$j;

.field final synthetic b:Lcom/tkay/expressad/videocommon/a$a;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Ljava/lang/String;

.field final synthetic g:Lcom/tkay/expressad/reward/a/c$k;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/c$k;Lcom/tkay/expressad/reward/a/c$j;Lcom/tkay/expressad/videocommon/a$a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1515
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$k$2;->g:Lcom/tkay/expressad/reward/a/c$k;

    iput-object p2, p0, Lcom/tkay/expressad/reward/a/c$k$2;->a:Lcom/tkay/expressad/reward/a/c$j;

    iput-object p3, p0, Lcom/tkay/expressad/reward/a/c$k$2;->b:Lcom/tkay/expressad/videocommon/a$a;

    iput-object p4, p0, Lcom/tkay/expressad/reward/a/c$k$2;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/expressad/reward/a/c$k$2;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/tkay/expressad/reward/a/c$k$2;->e:Ljava/lang/String;

    iput-object p7, p0, Lcom/tkay/expressad/reward/a/c$k$2;->f:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 1522
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k$2;->a:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k$2;->b:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 1523
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 1524
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$k$2;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/c$k$2;->d:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/c$k$2;->e:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1530
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k$2;->a:Lcom/tkay/expressad/reward/a/c$j;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k$2;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$k$2;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0}, Lcom/tkay/expressad/reward/a/c$j;->a()V

    .line 1533
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$k$2;->b:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz v0, :cond_1

    .line 1534
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/a$a;->a()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1538
    :try_start_0
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->release()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_1
    return-void
.end method
