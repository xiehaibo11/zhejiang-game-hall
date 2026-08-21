.class final Lcom/tkay/expressad/reward/a/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/c;->a(ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;Ljava/lang/String;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field final synthetic c:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic d:Ljava/util/List;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Lcom/tkay/expressad/videocommon/e/d;

.field final synthetic g:Ljava/lang/String;

.field final synthetic h:Lcom/tkay/expressad/reward/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/c;ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;)V
    .locals 0

    .line 2086
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$3;->h:Lcom/tkay/expressad/reward/a/c;

    iput-boolean p2, p0, Lcom/tkay/expressad/reward/a/c$3;->a:Z

    iput-object p3, p0, Lcom/tkay/expressad/reward/a/c$3;->b:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iput-object p4, p0, Lcom/tkay/expressad/reward/a/c$3;->c:Lcom/tkay/expressad/foundation/d/c;

    iput-object p5, p0, Lcom/tkay/expressad/reward/a/c$3;->d:Ljava/util/List;

    iput-object p6, p0, Lcom/tkay/expressad/reward/a/c$3;->e:Ljava/lang/String;

    iput-object p7, p0, Lcom/tkay/expressad/reward/a/c$3;->f:Lcom/tkay/expressad/videocommon/e/d;

    iput-object p8, p0, Lcom/tkay/expressad/reward/a/c$3;->g:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 10

    .line 2090
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/a/c$3;->a:Z

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$3;->b:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$3;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$3;->c:Lcom/tkay/expressad/foundation/d/c;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/c$3;->d:Ljava/util/List;

    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$3;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$3;->e:Ljava/lang/String;

    iget-object v7, p0, Lcom/tkay/expressad/reward/a/c$3;->f:Lcom/tkay/expressad/videocommon/e/d;

    iget-object v8, p0, Lcom/tkay/expressad/reward/a/c$3;->g:Ljava/lang/String;

    iget-object v9, p0, Lcom/tkay/expressad/reward/a/c$3;->h:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v9}, Lcom/tkay/expressad/reward/a/c;->b(Lcom/tkay/expressad/reward/a/c;)Z

    move-result v9

    invoke-static/range {v0 .. v9}, Lcom/tkay/expressad/reward/a/c;->a(ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;Z)V

    return-void
.end method
