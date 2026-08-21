.class final Lcom/tkay/expressad/reward/a/d$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/d$2;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/util/concurrent/CopyOnWriteArrayList;

.field final synthetic f:Lcom/tkay/expressad/reward/a/d$2;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/d$2;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V
    .locals 0

    .line 1942
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$2$1;->f:Lcom/tkay/expressad/reward/a/d$2;

    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$2$1;->a:Lcom/tkay/expressad/foundation/d/c;

    iput-object p3, p0, Lcom/tkay/expressad/reward/a/d$2$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/expressad/reward/a/d$2$1;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/expressad/reward/a/d$2$1;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/tkay/expressad/reward/a/d$2$1;->e:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 18

    move-object/from16 v0, p0

    .line 2076
    invoke-static {}, Lcom/tkay/expressad/reward/a/c$m;->a()Lcom/tkay/expressad/reward/a/c;

    move-result-object v1

    .line 1945
    iget-object v2, v0, Lcom/tkay/expressad/reward/a/d$2$1;->f:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v2, v2, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->l(Lcom/tkay/expressad/reward/a/d;)Z

    move-result v2

    iget-object v3, v0, Lcom/tkay/expressad/reward/a/d$2$1;->f:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v3, v3, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v3

    iget-object v4, v0, Lcom/tkay/expressad/reward/a/d$2$1;->f:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v4, v4, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/d;->m(Lcom/tkay/expressad/reward/a/d;)Z

    move-result v4

    iget-object v5, v0, Lcom/tkay/expressad/reward/a/d$2$1;->f:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v5, v5, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v5}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    move-result v5

    iget-object v6, v0, Lcom/tkay/expressad/reward/a/d$2$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v7

    iget-object v6, v0, Lcom/tkay/expressad/reward/a/d$2$1;->f:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v6, v6, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v6}, Lcom/tkay/expressad/reward/a/d;->n(Lcom/tkay/expressad/reward/a/d;)I

    move-result v8

    iget-object v6, v0, Lcom/tkay/expressad/reward/a/d$2$1;->f:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v9, v6, Lcom/tkay/expressad/reward/a/d$2;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v6, v0, Lcom/tkay/expressad/reward/a/d$2$1;->f:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v6, v6, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v6}, Lcom/tkay/expressad/reward/a/d;->e(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v10

    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v6

    iget-object v11, v0, Lcom/tkay/expressad/reward/a/d$2$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v11

    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v6, v11}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    iget-object v12, v0, Lcom/tkay/expressad/reward/a/d$2$1;->b:Ljava/lang/String;

    iget-object v13, v0, Lcom/tkay/expressad/reward/a/d$2$1;->c:Ljava/lang/String;

    iget-object v14, v0, Lcom/tkay/expressad/reward/a/d$2$1;->d:Ljava/lang/String;

    iget-object v6, v0, Lcom/tkay/expressad/reward/a/d$2$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    iget-object v6, v0, Lcom/tkay/expressad/reward/a/d$2$1;->f:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v6, v6, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v6}, Lcom/tkay/expressad/reward/a/d;->o(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v15

    new-instance v6, Lcom/tkay/expressad/reward/a/d$2$1$1;

    invoke-direct {v6, v0}, Lcom/tkay/expressad/reward/a/d$2$1$1;-><init>(Lcom/tkay/expressad/reward/a/d$2$1;)V

    const/16 v16, 0x0

    move-object/from16 v17, v6

    move-object/from16 v6, v16

    move-object/from16 v16, v17

    invoke-virtual/range {v1 .. v16}, Lcom/tkay/expressad/reward/a/c;->a(ZLandroid/os/Handler;ZZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;ILcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/reward/a/c$j;)V

    return-void
.end method
